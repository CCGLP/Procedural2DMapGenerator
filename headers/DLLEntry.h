#pragma once
#ifndef PROCEDURAL_2D_API
#define PROCEDURAL_2D_API __declspec(dllexport)
#include "Area.hpp"

extern "C" {

	PROCEDURAL_2D_API void destroyArea(Area* area); 


	PROCEDURAL_2D_API Area* createEmptyArea(int width, int height, int x = 0, int y = 0);

	//Random noise
	PROCEDURAL_2D_API Area* createRandomNoiseArea(int width, int height, int x = 0, int y = 0);
	PROCEDURAL_2D_API void generateRandomNoiseInArea(Area* area);



	//DrunkardWalk
	PROCEDURAL_2D_API Area* createDrunkardWalkArea(int width, int height, int x = 0, int y = 0, int iterations = 10000);
	PROCEDURAL_2D_API void generateDrunkardWalkInArea(Area* area, int iterations = 10000);


	//BSPDungeon 
	PROCEDURAL_2D_API Area* createBSPDungeonArea(int width, int height, int x = 0, int y = 0);
	PROCEDURAL_2D_API void generateBSPDungeonInArea(Area* area);
}


















#endif


