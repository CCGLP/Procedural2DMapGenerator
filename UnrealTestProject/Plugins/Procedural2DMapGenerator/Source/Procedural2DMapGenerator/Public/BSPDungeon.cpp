#include "BSPDungeon.hpp"
#include <time.h>
#include <stdlib.h>
#include "Area.hpp"
#include <iostream>

using namespace std; 

/**
 * @brief Default constructor
 *
 */
BSPDungeon::BSPDungeon():corridorGeneration()
{
	srand(time(0)); 
	defaultConfiguration(); 
}

/**
 * @brief Generates a BSP Dungeon with the provided area
 *
 */
void BSPDungeon::generate(Area* area)
{
	generate(area, (rand() % (configuration.maxRooms - configuration.minRooms)) + configuration.minRooms ); //Random number between min and max
	area->processArea(); 
	generateCorridors(area); 
}

/**
 * @brief auxiliar method to generate the BSP algorithm
 *
 */
void BSPDungeon::generate(Area* area, int childrenAsigned)
{


	int x = area->getX(); 
	int y = area->getY(); 

	int width = area->getWidth(); 
	int height = area->getHeight(); 

	if (childrenAsigned == 0 || childrenAsigned == 1 || width <= configuration.minWidth || height <= configuration.minHeight) { //Clean room

		int xMargin = width > 16 ? 5 : (width > 8 ? 3 : 0); 
		int yMargin = height > 16 ? 5 : (height > 8 ? 3 : 0); 
		for (int i = 0 + xMargin; i < width - xMargin; i++) {
			for (int j = 0 + yMargin; j < height - yMargin; j++) {
				(*area)[i][j] = 1;
			}
		}

		return;
	}
	else {
		Area* child1 = nullptr; 
		Area* child2 = nullptr; 
		if ((rand() % 100) < 50.0f) { //Horizontal cut
			child1 = area->addArea(width, height / 2, x, y);
			child2 = area->addArea(width, height / 2, x, y + height / 2);
		}
		else { //Vertical cut
			child1 = area->addArea(width / 2, height, x, y);
			child2 = area->addArea(width / 2, height, x + width / 2, y);
		}

		if (childrenAsigned > 2) {
			float factor = ((rand() % 2000) / 10000.0f) + 0.3f;
			int roomsAssigned = childrenAsigned * factor;


			generate(child1, roomsAssigned);
			generate(child2, childrenAsigned - roomsAssigned);
		}
		else {
			generate(child1, 0); 
			generate(child2, 0); 
		}
		
		


	}



}


/**
 * @brief auxiliar method to create the corridors between the BSP rooms
 *
 */
void BSPDungeon::generateCorridors(Area* area)
{
	if (area->areasSize != 0) {
		generateCorridorsBetweenAreas(area->areas[0], area->areas[1], area);

	}
}

/**
 * @brief auxiliar method to create the corridors between two child rooms
 *
 */
void BSPDungeon::generateCorridorsBetweenAreas(Area* area1, Area* area2, Area* mainParent)
{
	
	corridorGeneration.simpleCorridorWithRandomPoints(area1, area2, mainParent); 

	

	if (area1->areasSize != 0) {
		generateCorridorsBetweenAreas(area1->areas[0], area1->areas[1], mainParent); 
	}
	if (area2->areasSize != 0) {
		generateCorridorsBetweenAreas(area2->areas[0], area2->areas[1], mainParent); 
	}


}

/**
 * @brief configure BSPDungeon algorithm with a BSPConfiguration struct pointer. Pointer will be deleted after this method
 *
 */
void BSPDungeon::configure(void* data)
{
	BSPConfiguration* newConfig = (BSPConfiguration*)data;
	configuration.maxRooms = newConfig->maxRooms;
	configuration.minRooms = newConfig->minRooms; 
	configuration.minHeight = newConfig->minHeight;
	configuration.minWidth = newConfig->minWidth; 
	delete newConfig; 
}

/**
 * @brief auxiliar method to create a default configuration if none provided
 *
 */
void BSPDungeon::defaultConfiguration()
{
	configuration.maxRooms = 100; 
	configuration.minRooms = 10;
	configuration.minWidth = 1;
	configuration.minHeight = 1; 
}
