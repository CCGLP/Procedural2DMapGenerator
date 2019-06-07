#pragma once
#include "Generator.hpp"

struct SimpleDungeonConfiguration {
	int tryRoomEmplacements; 
	int minWidth, maxWidth; 
	int minHeight, maxHeight; 
};

class SimpleDungeon : Generator {

private: 
	SimpleDungeonConfiguration configuration;

public:
	SimpleDungeon(); 
	void generate(Area* area) override;
	void configure(void* data) override;
	
private:
	void defaultConfiguration(); 
};