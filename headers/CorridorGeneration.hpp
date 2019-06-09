#pragma once
#include "../headers/Area.hpp"
#include <utility>

using namespace std; 

class CorridorGeneration {
public:
	CorridorGeneration() {};
	void simpleCorridorWithRandomPoints(Area* area1, Area* area2, Area* mainParent); 
	void simpleCorridorGeneration(pair<int,int> point1, pair<int,int> point2, Area* mainParent);
};