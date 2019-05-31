#include "..\..\headers\BSPDungeon.hpp"
#include <time.h>
#include <stdlib.h>
#include "..\..\headers\Area.hpp"
#include <iostream>

using namespace std; 
BSPDungeon::BSPDungeon()
{
	srand(time(0)); 
	defaultConfiguration(); 
}

void BSPDungeon::generate(Area* area)
{
	generate(area, (rand() % (configuration.maxRooms - configuration.minRooms)) + configuration.minRooms ); //Random number between min and max
	area->processArea(); 

}

void BSPDungeon::generate(Area* area, int childrenAsigned)
{


	int x = area->getX(); 
	int y = area->getY(); 

	int width = area->getWidth(); 
	int height = area->getHeight(); 

	if (childrenAsigned == 0 || childrenAsigned == 1) { //Clean room

		int xMargin = width > 6 ? 2 : (width > 4 ? 1 : 0); 
		int yMargin = height > 6 ? 2 : (height > 4 ? 1 : 0); 
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

			cout << "Rooms assigned first room : " << roomsAssigned << endl;
			cout << "Rooms assigned second room: " << childrenAsigned - roomsAssigned << endl;
			generate(child1, roomsAssigned);
			generate(child2, childrenAsigned - roomsAssigned);
		}
		else {
			generate(child1, 0); 
			generate(child2, 0); 
		}
		
		


	}



}

void BSPDungeon::configure(void* data)
{
	BSPConfiguration* newConfig = (BSPConfiguration*)data;
	configuration.maxRooms = newConfig->maxRooms;
	configuration.minRooms = newConfig->minRooms; 
	delete newConfig; 
}

void BSPDungeon::defaultConfiguration()
{
	configuration.maxRooms = 100; 
	configuration.minRooms = 10; 
}
