#pragma once
#include "Generator.hpp"
#include <vector>
#include "Area.hpp"
#include <iostream>
using namespace std; 

struct CellularProbability
{
	int neighbourTile; 
	int minNumberOfTilesToTransform;
	int maxNumberOfTilesToTransform;
	int tileToTransform;
};

struct CellularAutomataConfiguration {
	CellularProbability* probabilities; 
	int probabilitiesSize; 

	CellularAutomataConfiguration() {
		probabilitiesSize = 0; 
	}

	CellularAutomataConfiguration(const CellularAutomataConfiguration& other) {
		probabilitiesSize = other.probabilitiesSize;
		probabilities = new CellularProbability[probabilitiesSize]; 
		for (int i = 0; i < probabilitiesSize; i++) {
			probabilities[i] = other.probabilities[i]; 
		}
	}

	~CellularAutomataConfiguration() {
		if (probabilitiesSize > 0) {
			delete[] probabilities;
		}
	}

	void addProbability(CellularProbability cellularProbability) {
		CellularProbability* newProbs = new CellularProbability[probabilitiesSize + 1]; 
		
		for (int i = 0; i < probabilitiesSize; i++) {
			newProbs[i] = probabilities[i]; 
		}


		newProbs[probabilitiesSize] = cellularProbability; 
		if (probabilitiesSize > 0) {
			delete[] probabilities;
		}
		probabilitiesSize++; 
		

		probabilities = newProbs;

	}
};

class CellularAutomata : Generator{
private:
	int numberOfTiles; 
	int iterations; 
	CellularAutomataConfiguration* configuration; 

public:
	CellularAutomata(); 
	CellularAutomata(int numberOfTiles, int iterations); 
	~CellularAutomata(); 
	void addProbability(CellularProbability probability);
	int* getNeighbourInfo(Area* area,int x, int y);
	void generate(Area* area) override;
	void configure(void* data) override;
};


