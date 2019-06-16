#include "..\..\headers\CellularAutomata.hpp"
#include "..\..\headers\RandomNoise.hpp"
#include <stdio.h>
using namespace std; 


/**
 * @brief default constructor, initialices the iterations and number of tiles if none provided
 *
 */
CellularAutomata::CellularAutomata()
{
	numberOfTiles = 2; 
	this->iterations = 3;
	configuration = new CellularAutomataConfiguration(); 
}

/**
 * @brief constructor with numberOfTIles used to the cellular automata and the iterations of the algorithm
 *
 */
CellularAutomata::CellularAutomata(int numberOfTiles, int iterations)
{
	this->numberOfTiles = numberOfTiles;
	this->iterations = iterations; 
}

CellularAutomata::~CellularAutomata()
{
	delete configuration; 
	configuration = nullptr; 
}

/**
 * @brief adds one probability to the actual configuration
 *
 */
void CellularAutomata::addProbability(CellularProbability probability)
{
	configuration->addProbability(probability); 
}

/**
 * @brief auxiliar method to get the neighbours array of the tile in (x,y) position
 *
 */
int* CellularAutomata::getNeighbourInfo(Area* area, int x, int y)
{
	int* neighbours = new int[numberOfTiles];
	for (int i = 0; i < numberOfTiles; i++) {
		neighbours[i] = 0; 
	}
	int xMin = x > 0 ? x - 1 : x; 
	int xMax = x < area->width - 1 ? x + 1 : x; 
	int yMin = y > 0 ? y - 1 : y; 
	int yMax = y < area->height - 1 ? y + 1 : y; 

	for (int i = xMin; i <= xMax; i++) {
		for (int j = yMin; j <= yMax; j++) {
			if (j != y && x != i) {
				neighbours[(*area)[i][j]] ++; 
			}
		}
	}
	return neighbours;
}

/**
 * @brief Generates a Cellular automata algorithm in the provided area with the previously added configuration
 *
 */
void CellularAutomata::generate(Area* area)
{
	RandomNoise noise = RandomNoise(numberOfTiles); 
	noise.generate(area); 
	for (int i = 0; i < iterations; i++) {
		int** copy = area->getTileInfoCopy(); 
		for (int x = 0; x < area->width; x++) {
			for (int y = 0; y < area->height; y++) {
				int* neighbours = getNeighbourInfo(area, x, y); 
				for (int j = 0; j < configuration->probabilitiesSize; j++) {
					CellularProbability prob = configuration->probabilities[j];
					if (neighbours[prob.neighbourTile] <= prob.maxNumberOfTilesToTransform && neighbours[prob.neighbourTile] >= prob.minNumberOfTilesToTransform) {
						copy[x][y] = prob.tileToTransform; 
						break; 
					}
				}
				delete[] neighbours; 
			}
		}
		area->copyTileContents(copy); 

		for (int i = 0; i < area->width; i++) {
			delete[] copy[i];
		}
		delete[]copy; 
	}

}

/**
 * @brief provides one CellularAutomataConfiguration pointer to set the configuration of the algorithm, pointer will be deleted after use
 *
 */
void CellularAutomata::configure(void* data)
{
	CellularAutomataConfiguration* newConfig = (CellularAutomataConfiguration*)data;
	configuration = newConfig; 
}
