#include <stdio.h>
#include "DLLEntry.h"
#include <time.h>
#include <iostream>
#include <Room.hpp>
using namespace std; 

int pepe(); 

int main() {

	int je; 

	cin >> je; 
	cout << sizeof(Area) << endl; 
	cout << sizeof(OtherArea) << endl; 
	cout << sizeof(Room) << endl; 
	
	pepe(); 
	

	return 1; 
}


int pepe() {

	Area* area = createDrunkardWalkArea(500, 500, 0, 0, 100000);
	for (int j = 0; j < area->getHeight(); j++) {
		for (int x = 0; x < area->getWidth(); x++) {
			printf("%i", (*area)[x][j]);
		}

		printf("\n");
	}
	
	int x;
	cin >> x;

	//delete area; 
	destroyArea(area); 
	return 9; 
}