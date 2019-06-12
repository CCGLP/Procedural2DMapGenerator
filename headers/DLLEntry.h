#pragma once
#ifndef PROCEDURAL_2D_API
#define PROCEDURAL_2D_API __declspec(dllexport)
#include "Area.hpp"

struct CellularProbability; 
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
	PROCEDURAL_2D_API Area* createBSPDungeonArea(int width, int height, int x = 0, int y = 0, int minRooms = 10, int maxRooms = 100, int minWidth = 1, int minHeight = 1);
	PROCEDURAL_2D_API void generateBSPDungeonInArea(Area* area, int minRooms = 10, int maxRooms = 100, int minWidth = 1, int minHeight = 1);

	//Simple Dungeon
	PROCEDURAL_2D_API Area* createSimpleDungeonArea(int width, int height, int x = 0, int y = 0, int tries = 1000, int extraCorridors = 0, int minWidth = 1, int maxWidth = 100, int minHeight = 1, int maxHeight = 100);
	PROCEDURAL_2D_API void generateSimpleDungeonInArea(Area* area, int tries = 1000, int extraCorridors = 0, int minWidth = 1, int maxWidth = 100, int minHeight = 1, int maxHeight = 100);

	//Cellular Automata
	PROCEDURAL_2D_API void addCellularProbability(CellularProbability value); 
	PROCEDURAL_2D_API Area* createCellularAutomataArea(int width, int height, int x = 0, int y = 0, int iterations = 3, int numberOfTiles = 2);
	PROCEDURAL_2D_API void generateCellularAutomataInArea(Area* area, int iterations = 3, int numberOfTiles = 2);

	//Linear Map
	PROCEDURAL_2D_API Area* createLineMapArea(int width, int height, int x = 0, int y = 0, int extraLines = 10, int branchQuantity = 100, int branchLength = 300);
	PROCEDURAL_2D_API void generateLineMapInArea(Area* area, int extraLines = 10, int branchQuantity = 100, int branchLength = 300);
}


















#endif


