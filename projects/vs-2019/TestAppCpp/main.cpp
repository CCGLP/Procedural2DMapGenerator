#include <stdio.h>
#include "DLLEntry.h"
#include <time.h>
#include <iostream>
#include <Room.hpp>
using namespace std; 

int pepe(); 

int main() {

	
	pepe(); 
	

	return 0; 
}


int pepe() {

	Area* area = createBSPDungeonArea(1000, 1000); 
	for (int j = 0; j < area->getHeight(); j++) {
		for (int x = 0; x < area->getWidth(); x++) {
			if ((*area)[x][j] == 0)
				printf("%i", (*area)[x][j]);
		}

		//printf("\n");
	}
	
	int x;

	//delete area; 
	destroyArea(area); 
	return 9; 
}