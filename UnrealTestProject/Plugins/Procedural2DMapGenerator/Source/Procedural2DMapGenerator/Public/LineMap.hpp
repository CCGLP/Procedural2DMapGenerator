#pragma once
#include "Generator.hpp"


struct LineMapConfiguration {
	int extraLines; 
	int branchQuantity; 
	int branchLength; 
};

class LineMap : Generator {
private: 
	LineMapConfiguration configuration; 

public:
	 LineMap(); 
	 void generate(Area* area) override;
	 void configure(void* data) override;
	 void defaultConfiguration(); 

private:
	void generateHorizontalLine(Area* area); 
	void generateVerticalLine(Area* area); 
	void generateBranch(Area* area, int** tileInfo); 
};