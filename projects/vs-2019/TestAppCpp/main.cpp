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



	Area* area = createBSPDungeonArea(200, 200, 0, 0, 10, 100, 2, 2); 
	

	for (int j = 0; j < area->getHeight(); j++) {
		for (int x = 0; x < area->getWidth(); x++) {
				printf("%i", (*area)[x][j]);
		}

		printf("\n");printf("\n");printf("\n");
	}

	cout << "Finish" <<endl; 
	destroyArea(area); 
	return 9; 
}