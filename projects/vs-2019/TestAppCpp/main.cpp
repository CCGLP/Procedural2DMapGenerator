#include <stdio.h>
#include "DLLEntry.h"
#include <time.h>
#include <iostream>
#include <Room.hpp>
using namespace std; 

int test(); 

int main() {

	
	test(); 
	

	return 0; 
}


int test() {

	Area* area = createBSPDungeonArea(100, 100); 
	//for (int j = 0; j < area->getHeight(); j++) {
	//	for (int x = 0; x < area->getWidth(); x++) {
	//		if ((*area)[x][j] == 0)
	//			printf("%i", (*area)[x][j]);
	//	}

	//	//printf("\n");
	//}
	//
	int x;
	/*for (int i = 0; i < area->areasSize; i++) {
		destroyArea(area->areas[i]); 
	}*/
	cout << "PEPO"; 
	//delete area; 
	destroyArea(area); 
	return 9; 
}