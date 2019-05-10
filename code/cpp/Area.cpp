#include "..\..\headers\Area.hpp"



Area::Area(const AreaSharpFriendly sharpArea)
{
	this->x = sharpArea.x; 
	this->y = sharpArea.y; 
	this->width = sharpArea.width; 
	this->height = sharpArea.height; 

	this->tileInfo = new int* [width]; 
	for (int i = 0; i < width; i++) {
		this->tileInfo[i] = new int[height]; 
		for (int j = 0; j < height; j++) {
			this->tileInfo[i][j] = sharpArea.tileInfo[i][j]; 
		}
	}

	this->areas = new vector<Area>(); 
	for (int i = 0; i < sharpArea.areasCount; i++) {
		this->areas->push_back(sharpArea.areas[i]); 
	}

}

Area::Area(int width, int height, int x, int y)
{
	this->width = width; 
	this->height = height; 

	this->x = x; 
	this->y = y; 

	this->areas = new vector<Area>(); 

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

	this->areas = new vector<Area>();
	for (int i = 0; i < other.areas->size(); i++) {
		this->areas->push_back(other.areas->at(i));
	}

}




int** Area::processArea()
{
	for (int i = 0; i < areas->size(); i++) {
		Area area = areas->at(i); 
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

const AreaSharpFriendly Area::convertToSharp()
{
	AreaSharpFriendly area; 
	area.x = x; 
	area.y = y; 

	area.tileInfo = new int* [width]; 
	for (int i = 0; i < width; i++) {
		area.tileInfo[i] = new int[height]; 
		for (int j = 0; j < height; j++) {
			area.tileInfo[i][j] = tileInfo[i][j]; 
		}
	}

	area.width = width; 
	area.height = height; 

	area.areas = new AreaSharpFriendly[areas->size()]; 
	for (int i = 0; i < areas->size(); i++) {
		area.areas[i] = areas->at(i).convertToSharp(); 
	}

	area.areasCount = areas->size(); 

	return area; 
	
}
