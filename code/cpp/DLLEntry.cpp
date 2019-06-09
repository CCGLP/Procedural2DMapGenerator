#include "..\..\headers\DLLEntry.h"
#include "..\..\headers\RandomNoise.hpp"
#include "..\..\headers\DrunkardWalk.hpp"
#include "..\..\headers\BSPDungeon.hpp"
#include "..\..\headers\SimpleDungeon.hpp"
#include "..\..\headers\CellularAutomata.hpp"


/**
 * @brief Deletes the provided area pointer. Use this after using the data will avoid memory leaks
 *
 */
PROCEDURAL_2D_API void destroyArea(Area* area)
{
	delete area; 
}



/**
 * @brief Creates an empty area with the provided constructor values
 *
 */
PROCEDURAL_2D_API Area* createEmptyArea(int width, int height, int x, int y)
{
	Area* area = new Area(width, height, x, y); 
	return area; 

}


/**
 * @brief Create an area and generates a Random Noise there
 *
 */
PROCEDURAL_2D_API Area* createRandomNoiseArea(int width, int height, int x, int y)
{
	Area* area = createEmptyArea
	(width, height, x, y); 
	generateRandomNoiseInArea(area); 
	return area; 
}

/**
 * @brief Generates a Random Noise in the provided area
 *
 */
PROCEDURAL_2D_API void generateRandomNoiseInArea(Area* area)
{
	RandomNoise noise;
	noise.generate(area);
}


/**
 * @brief Create an area and generate a Drunkard Walk algorithm with the provided iterations number
 *
 */
PROCEDURAL_2D_API Area* createDrunkardWalkArea(int width, int height, int x, int y, int iterations)
{
	Area* area  = createEmptyArea(width, height, x, y);
	generateDrunkardWalkInArea(area, iterations);
	return area;
}

/**
 * @brief Generates Drunkard Walk algorithm in provided area with the provided iterations number
 *
 */
PROCEDURAL_2D_API void generateDrunkardWalkInArea(Area* area, int iterations)
{
	DrunkardWalk generator(iterations); 
	generator.generate(area); 
}

/**
 * @brief Creates an Area and generates a BSP Dungeon with all the configuration provided
 *
 */
PROCEDURAL_2D_API Area* createBSPDungeonArea(int width, int height, int x, int y, int minRooms, int maxRooms, int minWidth, int minHeight)
{
	Area* area = createEmptyArea(width, height, x, y); 
	generateBSPDungeonInArea(area, minRooms, maxRooms, minWidth, minHeight); 
	return area; 
}

/**
 * @brief Generates a BSPDungeon in the provided Area with all the configuration provided
 *
 */
PROCEDURAL_2D_API void generateBSPDungeonInArea(Area* area, int minRooms, int maxRooms, int minWidth, int minHeight)
{
	BSPDungeon generator;
	BSPConfiguration* config = new BSPConfiguration(); 
	config->maxRooms = maxRooms;
	config->minRooms = minRooms;
	config->minWidth = minWidth;
	config->minHeight = minHeight; 
	generator.configure(config); 
	generator.generate(area); 
}

/**
 * @brief Creates one Area and generates a Simple Dungeon there with all the configuration provided
 *
 */
PROCEDURAL_2D_API Area* createSimpleDungeonArea(int width, int height, int x, int y, int tries, int extraCorridors, int minWidth, int maxWidth, int minHeight, int maxHeight)
{
	Area* area = createEmptyArea(width, height, x, y); 
	generateSimpleDungeonInArea(area,tries,extraCorridors,minWidth,maxWidth, minHeight,maxHeight); 
	return area; 
}

/**
 * @brief Generates a Simple Dungeon on the provided area, with all the configuration provided
 *
 */
PROCEDURAL_2D_API void generateSimpleDungeonInArea(Area* area, int tries, int extraCorridors, int minWidth, int maxWidth, int minHeight, int maxHeight)
{
	SimpleDungeon generator;
	SimpleDungeonConfiguration* config = new SimpleDungeonConfiguration(); 
	config->tryRoomEmplacements = tries;
	config->extraCorridors = extraCorridors; 
	config->minWidth = minWidth;
	config->maxWidth = maxWidth;
	config->minHeight = minHeight; 
	config->maxHeight = maxHeight;

	generator.configure(config); 
	generator.generate(area); 

}

CellularAutomataConfiguration* cellular; 

/**
 * @brief Adds one cellular probability to next CellularAutomata generation
 *
 */
PROCEDURAL_2D_API void addCellularProbability(CellularProbability value)
{
	if (cellular == nullptr) {
		cellular = new CellularAutomataConfiguration();
	}
	cellular->cellularProbabilities.push_back(value); 
}
/**
 * @brief Creates an area and generates a Cellular Automata map with the previously added probabilities and the iterations and tiles specified 
 *
 */
PROCEDURAL_2D_API Area* createCellularAutomataArea(int width, int height, int x, int y, int iterations, int numberOfTiles)
{
	Area* area = createEmptyArea(width, height, x, y); 
	generateCellularAutomataInArea(area, iterations, numberOfTiles); 
	return area;
}

/**
 * @brief Generates a Cellular automata map on the provided Area with the previously added probabilities and the iterations and tiles specified
 *
 */
PROCEDURAL_2D_API void generateCellularAutomataInArea(Area* area, int iterations, int numberOfTiles)
{
	CellularAutomata generator(numberOfTiles, iterations);
	generator.configure(cellular); 
	cellular = nullptr; 
	generator.generate(area); 

}


