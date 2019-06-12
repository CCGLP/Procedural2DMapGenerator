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

	
	Area* area = createLineMapArea(100, 100, 0, 0,10,30, 20); 
	

	for (int j = 0; j < area->getHeight(); j++) {
		for (int x = 0; x < area->getWidth(); x++) {
				printf("%i", (*area)[x][j]);
		}

		printf("\n");
	}

	
	cout << "Finish" <<endl; 
	destroyArea(area); 
	return 9; 
}