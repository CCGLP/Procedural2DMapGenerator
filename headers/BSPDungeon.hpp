#pragma once
#include "Generator.hpp"
#include "CorridorGeneration.hpp"
#include <utility>
using namespace std; 

struct BSPConfiguration {
	
	int minRooms;
	int maxRooms; 
	int minWidth;
	int minHeight; 
};

class BSPDungeon : Generator {


private: 
	BSPConfiguration configuration; 
	CorridorGeneration corridorGeneration; 
public:
	BSPDungeon();
	void generate(Area* area) override;
	void generate(Area* area, int childrenAsigned); 
	void generateCorridors(Area* area); 
	void generateCorridorsBetweenAreas(Area* area1, Area* area2, Area* mainParent); 
	void configure(void* data) override;


private: 
	void defaultConfiguration(); 
};