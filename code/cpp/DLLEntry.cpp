#include "..\..\headers\DLLEntry.h"
#include "..\..\headers\RandomNoise.hpp"

PROCEDURAL_2D_API Area* createEmptyArea(int width, int height, int x, int y)
{
	return new Area(width, height, x, y); 
}

PROCEDURAL_2D_API AreaSharpFriendly createEmptySharpArea(int width, int height, int x, int y) {
	Area area(width, height, x, y); 
	return area.convertToSharp(); 
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

PROCEDURAL_2D_API AreaSharpFriendly createRandomNoiseSharpArea(int width, int height, int x, int y)
{
	AreaSharpFriendly area = createEmptySharpArea(width, height, x, y); 
	return generateRandomNoiseInSharpArea(area); 
}

PROCEDURAL_2D_API AreaSharpFriendly generateRandomNoiseInSharpArea(AreaSharpFriendly area)
{
	Area* areaC = new Area(area);
	generateRandomNoiseInArea(areaC);
	return areaC->convertToSharp();
}
