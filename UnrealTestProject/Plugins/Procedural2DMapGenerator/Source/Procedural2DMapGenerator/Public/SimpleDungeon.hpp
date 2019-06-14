#pragma once
#include "Generator.hpp"
#include "CorridorGeneration.hpp"
struct SimpleDungeonConfiguration {
	int tryRoomEmplacements; 
	int extraCorridors; 
	int minWidth, maxWidth; 
	int minHeight, maxHeight; 
};

class SimpleDungeon : Generator {

private: 
	SimpleDungeonConfiguration configuration;
	CorridorGeneration corridorGeneration; 

public:
	SimpleDungeon(); 
	void generate(Area* area) override;
	void configure(void* data) override;
	
private:
	void defaultConfiguration(); 
};