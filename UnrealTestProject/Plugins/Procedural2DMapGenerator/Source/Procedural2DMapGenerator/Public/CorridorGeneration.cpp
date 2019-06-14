#include "CorridorGeneration.hpp"
#pragma once

using namespace std; 

/**
 * @brief uses the simple corridor generation with two random points
 */
void CorridorGeneration::simpleCorridorWithRandomPoints(Area* area1, Area* area2, Area* mainParent)
{
	pair<int, int> tile1 = area1->getRandomPointInArea(mainParent);
	pair<int, int> tile2 = area2->getRandomPointInArea(mainParent);
	simpleCorridorGeneration(tile1, tile2, mainParent); 
}

/**
 * @brief simple corridor generation (L shape) between two points. Must provide the mainParent area
 *
 */
void CorridorGeneration::simpleCorridorGeneration(pair<int, int> point1, pair<int, int> point2, Area* mainParent)
{
	int xFactor = point2.first - point1.first;
	xFactor = xFactor > 0 ? 1 : -1;
	int yFactor = point2.second - point1.second;
	yFactor = yFactor > 0 ? 1 : -1;

	int j = point1.second;
	for (j = point1.second; j != point2.second; j += yFactor) {
		(*mainParent)[point1.first - mainParent->getX()][j - mainParent->getY()] = 1;
	}
	for (int i = point1.first; i != point2.first; i += xFactor) {
		(*mainParent)[i - mainParent->getX()][j - mainParent->getY()] = 1;
	}
}
