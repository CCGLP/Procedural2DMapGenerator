#include "..\..\headers\Area.hpp"

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


/*
int** Area::processArea()
{
	for (int i = 0; i < areasSize; i++) {
		Area area = *(areas[i]);
		int** areaChild = area.processArea();
		int areaWidth = area.x + area.width; 
		int areaHeight = area.y + area.height; 

		for (int x = area.x; x < areaWidth; x++) {
			for (int y = area.y; y < areaHeight; y++) {
				tileInfo[x][y] = areaChild[x][y]; 
			}
		}
	}

	return tileInfo;

}

*/ 