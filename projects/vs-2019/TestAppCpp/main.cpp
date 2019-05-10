#include <stdio.h>
#include "DLLEntry.h"
#include <time.h>

using namespace std; 

int main() {

	Area* area = createEmptyArea(40,40); 

	srand(time(0)); 
	
	for (int i = 0; i < area->getWidth(); i++) {
		for (int j = 0; j < area->getHeight(); j++) {
			(*area)[i][j] = rand() %100; 
			printf("%i , ", (*area)[i][j]);
		}
	}

	


	printf("Hola"); 
	int* p = new int[3]; 

	int i = 0; 
	for (int* x = p;i < 3; x++, i++) {
		*x = 2; 
	}

	printf("HEy"); 
	for (int* x = p, i = 0; i < 3; x++, i++) {
		printf("Hola bunas tardes: %i", (*x)); 
	}

	return 1; 
}