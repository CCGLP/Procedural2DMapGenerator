#pragma once
#include "Generator.hpp"
#include <vector>
#include "Area.hpp"
using namespace std; 

struct CellularProbability {
	int neighbourTile; 
	int minNumberOfTilesToTransform;
	int maxNumberOfTilesToTransform;
	int tileToTransform;
};

struct CellularAutomataConfiguration {
	vector<CellularProbability> cellularProbabilities; 
};

class CellularAutomata : Generator{
private:
	int numberOfTiles; 
	int iterations; 
	CellularAutomataConfiguration configuration; 

public:
	CellularAutomata(); 
	CellularAutomata(int numberOfTiles, int iterations); 
	void addProbability(CellularProbability probability);
	int* getNeighbourInfo(Area* area,int x, int y);
	void generate(Area* area) override;
	void configure(void* data) override;
};


