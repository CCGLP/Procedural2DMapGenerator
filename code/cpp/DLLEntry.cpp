#include "..\..\headers\DLLEntry.h"

PROCEDURAL_2D_API Area* createEmptyArea(int width, int height, int x, int y)
{
	return new Area(width, height, x, y); 
}

PROCEDURAL_2D_API AreaSharpFriendly createEmptySharpArea(int width, int height, int x, int y) {
	Area area(width, height, x, y); 
	return area.convertToSharp(); 
}
