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
	generateCorridors(area); 
}

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


void BSPDungeon::generateCorridors(Area* area)
{
	if (area->areasSize != 0) {
		generateCorridorsBetweenAreas(area->areas[0], area->areas[1], area);

	}


}
void BSPDungeon::generateCorridorsBetweenAreas(Area* area1, Area* area2, Area* mainParent)
{
	pair<int, int> tile1 = getRandomPointInArea(area1, mainParent); 
	pair<int, int> tile2 = getRandomPointInArea(area2, mainParent); 

	int xFactor =  tile2.first - tile1.first; 
	xFactor = xFactor > 0 ? 1 : -1; 
	int yFactor = tile2.second - tile1.second; 
	yFactor = yFactor > 0 ? 1 : -1; 

	for (int i = tile1.first; i != tile2.first; i += xFactor) {
		for (int j = tile1.second; j != tile2.second; j += yFactor) {
			(*mainParent)[i - mainParent->getX()][j - mainParent->getY()] = 1; 
		}

		if (tile1.second == tile2.second) {
			(*mainParent)[i - mainParent->getX()][tile1.second - mainParent->getY()] = 1;
		}
	}

	if (tile1.first == tile2.first) {
		for (int j = tile1.second; j != tile2.second; j += yFactor) {
			(*mainParent)[tile1.first- mainParent->getX()][j - mainParent->getY()] = 1;
		}
	}

	if (area1->areasSize != 0) {
		generateCorridorsBetweenAreas(area1->areas[0], area1->areas[1], mainParent); 
	}
	if (area2->areasSize != 0) {
		generateCorridorsBetweenAreas(area2->areas[0], area2->areas[1], mainParent); 
	}


}
pair<int, int> BSPDungeon::getRandomPointInArea(Area* area, Area* mainParent)
{
	vector<pair<int, int>> tilesOccupied;
	int width = area->getX() + area->getWidth();
	int height = area->getY() + area->getHeight();
	for (int i = area->getX(); i < width; i++) {
		for (int j = area->getY(); j < height; j++) {

			if ((*mainParent)[i - mainParent->getX()][j - mainParent->getY()] == 1) {
				tilesOccupied.push_back(pair<int, int>(i, j));
			}
		}
	}

	pair<int, int> randValue = tilesOccupied[rand() % tilesOccupied.size()]; 
	return randValue;
}


void BSPDungeon::configure(void* data)
{
	BSPConfiguration* newConfig = (BSPConfiguration*)data;
	configuration.maxRooms = newConfig->maxRooms;
	configuration.minRooms = newConfig->minRooms; 
	configuration.minHeight = newConfig->minHeight;
	configuration.minWidth = newConfig->minWidth; 
	delete newConfig; 
}

void BSPDungeon::defaultConfiguration()
{
	configuration.maxRooms = 100; 
	configuration.minRooms = 10;
	configuration.minWidth = 1;
	configuration.minHeight = 1; 
}
