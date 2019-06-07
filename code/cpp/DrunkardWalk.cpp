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
	int x = configuration.startPointX; 
	int y = configuration.startPointY; 

	if (configuration.startPointX == -1) {
		x = area->getWidth() * 0.5f; //default, mid entry
	}
	if (configuration.startPointY == -1) {
		y = area->getHeight() * 0.5f; //default, mid entry
	}

	
	if (!initialConfigurationDone) {
		initialConfigurationBeforeGeneration(); 
	}
	srand(time(0)); 
	int randValue = 0; 

	for (int i = 0; i < configuration.iterations; i++) {
		randValue = rand(); 
		

		if (randValue < configuration.upChance ) { //UP
			y++;
			y = y >= area->getHeight() ? area->getHeight() - 1 : y; 
		}
		else if (randValue < configuration.rightChance) { //RIGHT
			x++; 
			x = x >= area->getWidth() ? area->getWidth() - 1 : x; 
		}

		else if (randValue < configuration.downChance) { //DOWN
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
	initialConfigurationDone = false;

	DrunkardConfiguration* newConfig = (DrunkardConfiguration*)data; 

	configuration.downChance = newConfig->downChance;
	configuration.upChance = newConfig->upChance;
	configuration.leftChance = newConfig->leftChance;
	configuration.rightChance = newConfig->rightChance; 
	configuration.iterations = newConfig->iterations; 
	configuration.startPointX = newConfig->startPointX; 
	configuration.startPointY = newConfig->startPointY;

	delete newConfig; 
}

void DrunkardWalk::initialConfigurationBeforeGeneration()
{
	//Initial Config
	configuration.rightChance += configuration.upChance;
	configuration.downChance += configuration.rightChance;
	configuration.upChance *= RAND_MAX;
	configuration.rightChance *= RAND_MAX;
	configuration.downChance *= RAND_MAX;
	initialConfigurationDone = true; 

}

void DrunkardWalk::defaultConfiguration(int iterations)
{
	initialConfigurationDone = false; 
	configuration = DrunkardConfiguration();
	configuration.downChance = 0.25f;
	configuration.upChance = 0.25f;
	configuration.leftChance = 0.25f;
	configuration.rightChance = 0.25f;
	configuration.iterations = iterations;
	configuration.startPointX = -1;
	configuration.startPointY = -1;
}
