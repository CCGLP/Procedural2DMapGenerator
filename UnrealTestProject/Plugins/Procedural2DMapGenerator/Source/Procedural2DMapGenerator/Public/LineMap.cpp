#include "LineMap.hpp"
#include "Area.hpp"
#include <time.h>
#include <stdlib.h>

using namespace std;
LineMap::LineMap()
{
	srand(time(0)); 
	defaultConfiguration(); 
}

void LineMap::generate(Area* area)
{
	//Main lines
	generateHorizontalLine(area);
	generateVerticalLine(area);

	for (int i = 0; i < configuration.extraLines; i++) {
		if (rand() % 100 < 50) {
			generateHorizontalLine(area);
		}
		else {
			generateVerticalLine(area); 
		}
	}

	int** tiles = area->getTileInfoCopy(); 
	for (int i = 0; i < configuration.branchQuantity; i++) {
		generateBranch(area,tiles); 
	}

	area->copyTileContents(tiles);

	for (int i = 0; i < area->getWidth(); i++) {
		delete[] tiles[i]; 
	}
	delete[] tiles; 

}

void LineMap::configure(void* data)
{
	LineMapConfiguration* newConfig = (LineMapConfiguration*)data;
	configuration.branchLength = newConfig->branchLength; 
	configuration.branchQuantity = newConfig->branchQuantity; 
	configuration.extraLines = newConfig->extraLines; 
	delete newConfig; 
}

void LineMap::defaultConfiguration()
{
	configuration.branchLength = 300; 
	configuration.branchQuantity = 10; 
	configuration.extraLines = 4; 
}

void LineMap::generateHorizontalLine(Area* area)
{
	int y = rand() % area->height; 
	for (int i = 0; i < area->width; i++) {
		(*area)[i][y] = 1; 
	}
}

void LineMap::generateVerticalLine(Area* area)
{
	int x = rand() % area->width; 
	for (int i = 0; i < area->height; i++) {
		(*area)[x][i] = 1; 
	}
}

void LineMap::generateBranch(Area* area, int ** tileInfo)
{
	pair<int, int> point = area->getRandomPointInArea(area); 
	int x = point.first; 
	int y = point.second;

	for (int i = 0; i < configuration.branchLength; i++) {
		int prob = rand(); 
		if (prob < 0.25f * RAND_MAX) {
			y++;
			y = y >= area->getHeight() ? area->getHeight() - 1 : y;
		}
		else if (prob < 0.5f * RAND_MAX) {
			x++;
			x = x >= area->getWidth() ? area->getWidth() - 1 : x;
		}
		else if (prob < 0.75f * RAND_MAX) {
			y--;
			y = y < 0 ? 0 : y;
		}
		else {
			x--;
			x = x < 0 ? 0 : x;
		}
		tileInfo[x][y] = 1;
	}
}
