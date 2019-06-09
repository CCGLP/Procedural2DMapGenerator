#include "..\..\headers\SimpleDungeon.hpp"
#include <time.h>
#include <stdlib.h>

using namespace std; 

SimpleDungeon::SimpleDungeon(): corridorGeneration()
{
	srand(time(0)); 
	defaultConfiguration(); 
}

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

void SimpleDungeon::defaultConfiguration()
{
	configuration.maxHeight = 100; 
	configuration.maxWidth = 100; 

	configuration.minHeight = 1; 
	configuration.minWidth = 1; 

	configuration.tryRoomEmplacements = 1000; 
	configuration.extraCorridors = 10; 
}
