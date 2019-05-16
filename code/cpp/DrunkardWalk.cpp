#include "..\..\headers\DrunkardWalk.hpp"
#include "..\..\headers\Area.hpp"
#include <time.h>



///Base configuration 
DrunkardWalk::DrunkardWalk()
{
	defaultConfiguration(); 
}

DrunkardWalk::DrunkardWalk(int iterations)
{
	defaultConfiguration(iterations); 
}


void DrunkardWalk::generate(Area* area)
{
	int x = area->getWidth() * 0.5f; 
	int y = area->getHeight() * 0.5f; 
	srand(time(0)); 
	
	for (int i = 0; i < configuration.iterations; i++) {
		int randValue = rand(); 
		

		if (randValue < configuration.upChance * RAND_MAX) { //UP
			y++;
			y = y >= area->getHeight() ? area->getHeight() - 1 : y; 
		}
		else if (randValue < (configuration.upChance + configuration.rightChance) * RAND_MAX) { //RIGHT
			x++; 
			x = x >= area->getWidth() ? area->getWidth() - 1 : x; 
		}

		else if (randValue < (configuration.upChance + configuration.rightChance + configuration.downChance) * RAND_MAX) { //DOWN
			y -- ;
			y = y < 0 ? 0 : y; 
		}
		else { //LEFT
			x--; 
			x = x < 0 ? 0 : x; 
		}
		(*area)[x][y] = 1; 

	}
}

void DrunkardWalk::configure(void* data)
{
	DrunkardConfiguration* newConfig = (DrunkardConfiguration*)data; 

	configuration.downChance = newConfig->downChance;
	configuration.upChance = newConfig->upChance;
	configuration.leftChance = newConfig->leftChance;
	configuration.rightChance = newConfig->rightChance; 

	delete newConfig; 
}

void DrunkardWalk::defaultConfiguration(int iterations)
{
	configuration = DrunkardConfiguration();
	configuration.downChance = 0.25f;
	configuration.upChance = 0.25f;
	configuration.leftChance = 0.25f;
	configuration.rightChance = 0.25f;
	configuration.iterations = iterations;
}
