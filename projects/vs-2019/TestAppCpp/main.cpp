#include <stdio.h>
using namespace std; 

int main() {
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