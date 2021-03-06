// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once
#include "PaperTileMapComponent.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Procedural2DMapGeneratorBPLibrary.generated.h"
/* 
*	Function library class.
*	Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.
*
*	When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.
*	BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.
*	BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.
*	DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.
*				Its lets you name the node using characters not allowed in C++ function names.
*	CompactNodeTitle - the word(s) that appear on the node.
*	Keywords -	the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. 
*				Good example is "Print String" node which you can find also by using keyword "log".
*	Category -	the category your node will be under in the Blueprint drop-down menu.
*
*	For more info on custom blueprint nodes visit documentation:
*	https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation
*/


USTRUCT(BlueprintType)
struct FCellularProbability {
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cellular Probability Struct")
		int neighbourTile;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cellular Probability Struct")
		int minNumberOfTilesToTransform;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cellular Probability Struct")
		int maxNumberOfTilesToTransform;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cellular Probability Struct")
		int tileToTransform;
};

UCLASS()
class UProcedural2DMapGeneratorBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Execute Sample function", Keywords = "Procedural2DMapGenerator sample test testing"), Category = "Procedural2DMapGeneratorTesting")
	static float Procedural2DMapGeneratorSampleFunction(float Param, float Param1);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Create DrunkardWalkMap", Keywords = "Drunkard Walk Algorithm"), Category = "Procedural2DMapGeneratorTesting")
	static void Procedural2DMapGeneratorGetDrunkardMap(UPaperTileMapComponent* tileMap, int layerFloor, int layerCollision, FPaperTileInfo collision, FPaperTileInfo floor, int iterations = 10000);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Create BSPDungeon ", Keywords = "BSP Dungeon Algorithm"), Category = "Procedural2DMapGeneratorTesting")
	static void Procedural2DMapGeneratorGetBSPDungeonMap(UPaperTileMapComponent* tileMap, int layerFloor, int layerCollision, FPaperTileInfo collision, FPaperTileInfo floor, int minRooms = 10, int maxRooms = 100, int minWidth=1, int minHeight = 1);
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Create Simple Dungeon ", Keywords = "Simple Dungeon Algorithm"), Category = "Procedural2DMapGeneratorTesting")
	static void Procedural2DMapGeneratorGetSimpleDungeonMap(UPaperTileMapComponent* tileMap, int layerFloor, int layerCollision, FPaperTileInfo collision, FPaperTileInfo floor, int tries = 100, int extraCorridors = 100, int minWidth=1, int minHeight = 1, int maxWidth = 100, int maxHeight = 100);
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Create Line Map ", Keywords = "Line Map Algorithm"), Category = "Procedural2DMapGeneratorTesting")
	static void Procedural2DMapGeneratorGetLineMap(UPaperTileMapComponent* tileMap, int layerFloor, int layerCollision, FPaperTileInfo collision, FPaperTileInfo floor, int extraLines = 10, int branchQuantity = 100, int branchLength = 300);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Create Cellular Automata Map ", Keywords = "Cellular Automata algorithm"), Category = "Procedural2DMapGeneratorTesting")
	static void Procedural2DMapGeneratorGetCellularMap(UPaperTileMapComponent* tileMap, int layerFloor, int layerCollision, FPaperTileInfo collision, FPaperTileInfo floor, TArray<FCellularProbability> probs, int iterations = 3, int numberOfTiles = 2);


};


