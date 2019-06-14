// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Procedural2DMapGeneratorBPLibrary.h"
#include "Procedural2DMapGenerator.h"

UProcedural2DMapGeneratorBPLibrary::UProcedural2DMapGeneratorBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

float UProcedural2DMapGeneratorBPLibrary::Procedural2DMapGeneratorSampleFunction(float Param, float Param1)
{
	return -1;
}

void UProcedural2DMapGeneratorBPLibrary::Procedural2DMapGeneratorGetDrunkardMap(UPaperTileMapComponent* actor)
{
	float x = 0; 

	x += 2; 
}

