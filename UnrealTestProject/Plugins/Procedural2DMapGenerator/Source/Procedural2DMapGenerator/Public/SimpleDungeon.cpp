#include "SimpleDungeon.hpp"
#include <time.h>
#include <stdlib.h>

using namespace std; 

/**
 * @brief default constructor for simple Dungeon 
 *
 */
SimpleDungeon::SimpleDungeon(): corridorGeneration()
{
	srand(time(0)); 
	defaultConfiguration(); 
}

/**
 * @brief generates a simple dungeon algorithm in the provided area
 *
 */
void SimpleDungeon::generate(Area* area)
{
	int width = configuration.maxWidth - configuration.minWidth; 
	int height = configuration.maxHeight - configuration.minHeight; 

	for (int i = 0; i < configuration.tryRoomEmplacements; i++) {
		int newWidth = rand() % width + configuration.minWidth;
		int newHeight = rand() % height + configuration.minHeight; 
		int newX = rand() % (area->width - newWidth); 
		int newY = rand() % (area->height - newHeight); 
		Area* newArea = new Area(newWidth, newHeight, newX, newY); 
		bool canBeAdded = true; 
		for (int j = 0; j < area->areasSize; j++) {
			if (area->areas[j]->isIntersectingWithOtherArea(newArea)) {
				canBeAdded = false;
				break; 
			}
		}
		if (canBeAdded) {
			area->addArea(newArea); 
		}
		else {
			delete newArea;
		}

	}

	

	for (int i = 0; i < area->areasSize; i++) {
		area->areas[i]->fillTiles(1);
	}
	area->processArea(); 

	for (int i = 0; i < area->areasSize-1; i++) {
		corridorGeneration.simpleCorridorWithRandomPoints(area->areas[i], area->areas[i + 1], area); 
	}

	for (int i = 0; i < configuration.extraCorridors; i++) {
		corridorGeneration.simpleCorridorWithRandomPoints(area->areas[rand() % area->areasSize], area->areas[rand() % area->areasSize], area); 
	}

}


/**
 * @brief configures the algorithm with the provided SimpleDungeonConfiguration pointer. Pointer will be deleted after use
 *
 */
void SimpleDungeon::configure(void* data)
{
	SimpleDungeonConfiguration* newConfig = (SimpleDungeonConfiguration*)data; 
	configuration.maxHeight = newConfig->maxHeight; 
	configuration.maxWidth = newConfig->maxWidth; 
	configuration.minHeight = newConfig->minHeight; 
	configuration.minWidth = newConfig->minWidth; 
	configuration.tryRoomEmplacements = newConfig->tryRoomEmplacements; 
	configuration.extraCorridors = newConfig->extraCorridors; 
	delete newConfig; 

}

/**
 * @brief provides default configuration for the algorithm if none provided
 *
 */
void SimpleDungeon::defaultConfiguration()
{
	configuration.maxHeight = 100; 
	configuration.maxWidth = 100; 

	configuration.minHeight = 1; 
	configuration.minWidth = 1; 

	configuration.tryRoomEmplacements = 1000; 
	configuration.extraCorridors = 10; 
}
