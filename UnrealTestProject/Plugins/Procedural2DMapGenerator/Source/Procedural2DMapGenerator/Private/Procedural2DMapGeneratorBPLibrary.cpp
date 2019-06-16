// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Procedural2DMapGeneratorBPLibrary.h"
#include "Procedural2DMapGenerator.h"
#include "DLLEntry.h"
#include "CellularAutomata.hpp"

UProcedural2DMapGeneratorBPLibrary::UProcedural2DMapGeneratorBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

float UProcedural2DMapGeneratorBPLibrary::Procedural2DMapGeneratorSampleFunction(float Param, float Param1)
{
	return -1;
}

void UProcedural2DMapGeneratorBPLibrary::Procedural2DMapGeneratorGetDrunkardMap(UPaperTileMapComponent* tileMap, int layerFloor, int layerCollision,  FPaperTileInfo collision, FPaperTileInfo floor, int iterations)
{

	int mapWidth = 0;
	int mapHeight = 0;
	int numLayers = 0;
	tileMap->GetMapSize(mapWidth, mapHeight, numLayers); 

	Area* area = createDrunkardWalkArea(mapWidth, mapHeight, 0, 0,iterations); 

	for (int i = 0; i < mapWidth; i++) {
		for (int j = 0; j < mapHeight; j++) {
			if ((*area)[i][j] == 0) {
				tileMap->SetTile(i, j, layerCollision, collision); 
			}
			else if ((*area)[i][j] == 1) {
				tileMap->SetTile(i, j, layerFloor, floor); 
			}
		}
	}

	destroyArea(area); 
}

void UProcedural2DMapGeneratorBPLibrary::Procedural2DMapGeneratorGetBSPDungeonMap(UPaperTileMapComponent* tileMap, int layerFloor, int layerCollision, FPaperTileInfo collision, FPaperTileInfo floor, int minRooms, int maxRooms, int minWidth, int minHeight)
{

	int mapWidth = 0;
	int mapHeight = 0;
	int numLayers = 0;
	tileMap->GetMapSize(mapWidth, mapHeight, numLayers);




	Area* area = createBSPDungeonArea(mapWidth, mapHeight, 0, 0,minRooms, maxRooms, minWidth, minHeight);

	for (int i = 0; i < mapWidth; i++) {
		for (int j = 0; j < mapHeight; j++) {
			if ((*area)[i][j] == 0) {
				tileMap->SetTile(i, j, layerCollision, collision);
			}
			else if ((*area)[i][j] == 1) {
				tileMap->SetTile(i, j, layerFloor, floor);
			}
		}
	}

	destroyArea(area);
}

void UProcedural2DMapGeneratorBPLibrary::Procedural2DMapGeneratorGetSimpleDungeonMap(UPaperTileMapComponent* tileMap, int layerFloor, int layerCollision, FPaperTileInfo collision, FPaperTileInfo floor, int tries, int extraCorridors, int minWidth, int minHeight, int maxWidth, int maxHeight)
{

	int mapWidth = 0;
	int mapHeight = 0;
	int numLayers = 0;
	tileMap->GetMapSize(mapWidth, mapHeight, numLayers);

	Area* area = createSimpleDungeonArea(mapWidth, mapHeight, 0, 0,tries, extraCorridors,minWidth,maxWidth, minHeight, maxHeight);

	for (int i = 0; i < mapWidth; i++) {
		for (int j = 0; j < mapHeight; j++) {
			if ((*area)[i][j] == 0) {
				tileMap->SetTile(i, j, layerCollision, collision);
			}
			else if ((*area)[i][j] == 1) {
				tileMap->SetTile(i, j, layerFloor, floor);
			}
		}
	}

	destroyArea(area);
}

void UProcedural2DMapGeneratorBPLibrary::Procedural2DMapGeneratorGetLineMap(UPaperTileMapComponent* tileMap, int layerFloor, int layerCollision, FPaperTileInfo collision, FPaperTileInfo floor, int extraLines, int branchQuantity, int branchLength)
{

	int mapWidth = 0;
	int mapHeight = 0;
	int numLayers = 0;
	tileMap->GetMapSize(mapWidth, mapHeight, numLayers);

	Area* area = createLineMapArea(mapWidth, mapHeight, 0, 0,extraLines, branchQuantity, branchLength);

	for (int i = 0; i < mapWidth; i++) {
		for (int j = 0; j < mapHeight; j++) {
			if ((*area)[i][j] == 0) {
				tileMap->SetTile(i, j, layerCollision, collision);
			}
			else if ((*area)[i][j] == 1) {
				tileMap->SetTile(i, j, layerFloor, floor);
			}
		}
	}

	destroyArea(area);
}

void UProcedural2DMapGeneratorBPLibrary::Procedural2DMapGeneratorGetCellularMap(UPaperTileMapComponent* tileMap, int layerFloor, int layerCollision, FPaperTileInfo collision, FPaperTileInfo floor, TArray<FCellularProbability> probs, int iterations, int numberOfTiles)
{

	int mapWidth = 0;
	int mapHeight = 0;
	int numLayers = 0;
	tileMap->GetMapSize(mapWidth, mapHeight, numLayers);

	for (int i = 0; i < probs.Num(); i++) {
		CellularProbability prob;
		prob.maxNumberOfTilesToTransform = probs[i].maxNumberOfTilesToTransform;
		prob.minNumberOfTilesToTransform = probs[i].minNumberOfTilesToTransform; 
		prob.neighbourTile = probs[i].neighbourTile;
		prob.tileToTransform = probs[i].tileToTransform; 
		addCellularProbability(prob); 
	}

	Area* area = createCellularAutomataArea(mapWidth, mapHeight, 0, 0,iterations, numberOfTiles);

	for (int i = 0; i < mapWidth; i++) {
		for (int j = 0; j < mapHeight; j++) {
			if ((*area)[i][j] == 0) {
				tileMap->SetTile(i, j, layerCollision, collision);
			}
			else if ((*area)[i][j] == 1) {
				tileMap->SetTile(i, j, layerFloor, floor);
			}
		}
	}

	destroyArea(area);
}

