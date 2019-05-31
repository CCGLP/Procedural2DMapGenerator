#pragma once
#include "Generator.hpp"



struct BSPConfiguration {
	
	int minRooms;
	int maxRooms; 
	
};

class BSPDungeon : Generator {


private: 
	BSPConfiguration configuration; 
public:
	BSPDungeon();
	void generate(Area* area) override;
	void generate(Area* area, int childrenAsigned); 
	void configure(void* data) override;


private: 
	void defaultConfiguration(); 
};