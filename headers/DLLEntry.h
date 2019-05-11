#pragma once
#ifndef PROCEDURAL_2D_API
#define PROCEDURAL_2D_API __declspec(dllexport)
#include "Area.hpp"

extern "C" {
	PROCEDURAL_2D_API Area* createEmptyArea(int width, int height, int x = 0, int y = 0);
	PROCEDURAL_2D_API AreaSharpFriendly createEmptySharpArea(int width, int height, int x = 0, int y = 0);


	PROCEDURAL_2D_API Area* createRandomNoiseArea(int width, int height, int x = 0, int y = 0);
	PROCEDURAL_2D_API void generateRandomNoiseInArea(Area* area);

	PROCEDURAL_2D_API AreaSharpFriendly createRandomNoiseSharpArea(int width, int height, int x = 0, int y = 0);
	PROCEDURAL_2D_API AreaSharpFriendly generateRandomNoiseInSharpArea(AreaSharpFriendly area);

}


















#endif

