#include <stdio.h>
#include "DLLEntry.h"
#include <time.h>
#include <iostream>
#include "CellularAutomata.hpp"
using namespace std; 

int test(); 

int main() {

	
	test(); 
	

	return 0; 
}


int test() {

	CellularProbability prob1;
	CellularProbability prob2; 

	prob1.tileToTransform = 0; 
	prob1.neighbourTile = 0; 
	prob1.minNumberOfTilesToTransform = 4;
	prob1.maxNumberOfTilesToTransform = 8; 

	prob2.tileToTransform = 1;
	prob2.neighbourTile = 1; 
	prob2.minNumberOfTilesToTransform = 3; 
	prob2.maxNumberOfTilesToTransform = 8; 
	addCellularProbability(prob1); 
	addCellularProbability(prob2); 
	Area* area = createCellularAutomataArea(1000, 1000, 0, 0, 8, 2); 
	addCellularProbability(prob1);
	addCellularProbability(prob2);
	Area* area2 = createCellularAutomataArea(1000, 1000, 0, 0, 8, 2);

	/*for (int j = 0; j < area->getHeight(); j++) {
		for (int x = 0; x < area->getWidth(); x++) {
				printf("%i", (*area)[x][j]);
		}

		printf("\n");
	}
	*/
	int x;
	/*for (int i = 0; i < area->areasSize; i++) {
		destroyArea(area->areas[i]); 
	}*/
	cout << "PEPO"; 
	//delete area; 
	destroyArea(area); 
	return 9; 
}