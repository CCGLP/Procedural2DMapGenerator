#include "..\..\headers\Area.hpp"
#include <iostream>
using namespace std; 



Area::Area(int width, int height, int x, int y)
{
	this->width = width; 
	this->height = height; 

	this->x = x; 
	this->y = y; 

	this->areasSize = 0; 

	this->tileInfo = new int* [width]; 
	for (int i = 0; i < width; i++) {
		this->tileInfo[i] = new int[height]; 
		for (int j = 0; j < height; j++) {
			this->tileInfo[i][j] = 0; 
		}
	}
	this->areas = nullptr; 
}

Area::Area(const Area& other)
{
	this->x = other.x;
	this->y = other.y;
	this->width = other.width;
	this->height = other.height;

	this->tileInfo = new int* [width];
	for (int i = 0; i < width; i++) {
		this->tileInfo[i] = new int[height];
		for (int j = 0; j < height; j++) {
			this->tileInfo[i][j] = other.tileInfo[i][j];
		}
	}

	this->areasSize = other.areasSize; 

	for (int i = 0; i < other.areasSize; i++) {
		this->areas = other.areas;
	}

}



void Area::processArea()
{
	for (int i = 0; i < areasSize; i++) {
		Area* area = (areas[i]);
		int areaWidth = area->x + area->width;
		int areaHeight = area->y + area->height;

		if (area->areasSize > 0) {
			area->processArea(); 
		}

		int p; 
		int j;
		for (int x = area->x, p = 0; x < areaWidth; x++,p ++) { // 200x - 500y   Area 1     500w 500h   
			for (int y = area->y, j = 0; y < areaHeight; y++, j++) {//600x - 800y AreaChild  100w 200h    
				tileInfo[x-this->x][y-this->y] = (*area)[p][j]; 
			}

		}
	}


}

bool Area::isIntersectingWithOtherArea(Area* other)
{
	int x2 = this->x + this->width; 
	int y2 = this->y + this->height; 

	int otherX2 = other->x + other->width; 
	int otherY2 = other->y + other->height; 

	return (this->x < otherX2 && x2 > other->x && this->y < otherY2 && y2 > other->y);
}

pair<int, int> Area::getRandomPointInArea(Area* mainParent)
{
	vector<pair<int, int>> tilesOccupied;
	int width = x + this->width;
	int height = y + this->height;
	for (int i = x; i < width; i++) {
		for (int j = y; j < height; j++) {

			if ((*mainParent)[i - mainParent->getX()][j - mainParent->getY()] == 1) {
				tilesOccupied.push_back(pair<int, int>(i, j));
			}
		}
	}

	pair<int, int> randValue = tilesOccupied[rand() % tilesOccupied.size()];
	return randValue;
}

