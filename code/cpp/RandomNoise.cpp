#include "..\..\headers\RandomNoise.hpp"
#include "..\..\headers\Area.hpp"
#include <time.h>

using namespace std; 

/**
 * @brief Generates random noise in the provided area
 *
 */
void RandomNoise::generate(Area* area)
{
	srand(time(0)); 
	for (int i = 0; i < area->getWidth(); i++) {
		for (int j = 0; j < area->getHeight(); j++) {
			(*area)[i][j] = rand() % tileQuantity; 
		}
	}
}
