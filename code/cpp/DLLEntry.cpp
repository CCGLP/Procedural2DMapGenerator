#include "..\..\headers\DLLEntry.h"
#include "..\..\headers\RandomNoise.hpp"
#include "..\..\headers\DrunkardWalk.hpp"

PROCEDURAL_2D_API void destroyArea(Area* area)
{
	delete area; 
}



PROCEDURAL_2D_API Area* createEmptyArea(int width, int height, int x, int y)
{
	Area* area = new Area(width, height, x, y); 
	return area; 

}



PROCEDURAL_2D_API Area* createRandomNoiseArea(int width, int height, int x, int y)
{
	Area* area = createEmptyArea(width, height, x, y); 
	generateRandomNoiseInArea(area); 
	return area; 
}

PROCEDURAL_2D_API void generateRandomNoiseInArea(Area* area)
{
	RandomNoise noise;
	noise.generate(area);
}



PROCEDURAL_2D_API Area* createDrunkardWalkArea(int width, int height, int x, int y, int iterations)
{
	Area* area  = createEmptyArea(width, height, x, y);
	generateDrunkardWalkInArea(area, iterations);
	return area;
}

PROCEDURAL_2D_API void generateDrunkardWalkInArea(Area* area, int iterations)
{
	DrunkardWalk generator(iterations); 
	generator.generate(area); 
}


