// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Procedural2DMapGenerator/Public/Procedural2DMapGeneratorBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProcedural2DMapGeneratorBPLibrary() {}
// Cross Module References
	PROCEDURAL2DMAPGENERATOR_API UScriptStruct* Z_Construct_UScriptStruct_FCellularProbability();
	UPackage* Z_Construct_UPackage__Script_Procedural2DMapGenerator();
	PROCEDURAL2DMAPGENERATOR_API UClass* Z_Construct_UClass_UProcedural2DMapGeneratorBPLibrary_NoRegister();
	PROCEDURAL2DMAPGENERATOR_API UClass* Z_Construct_UClass_UProcedural2DMapGeneratorBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperTileMapComponent_NoRegister();
	PAPER2D_API UScriptStruct* Z_Construct_UScriptStruct_FPaperTileInfo();
// End Cross Module References
class UScriptStruct* FCellularProbability::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROCEDURAL2DMAPGENERATOR_API uint32 Get_Z_Construct_UScriptStruct_FCellularProbability_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCellularProbability, Z_Construct_UPackage__Script_Procedural2DMapGenerator(), TEXT("CellularProbability"), sizeof(FCellularProbability), Get_Z_Construct_UScriptStruct_FCellularProbability_Hash());
	}
	return Singleton;
}
template<> PROCEDURAL2DMAPGENERATOR_API UScriptStruct* StaticStruct<FCellularProbability>()
{
	return FCellularProbability::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCellularProbability(FCellularProbability::StaticStruct, TEXT("/Script/Procedural2DMapGenerator"), TEXT("CellularProbability"), false, nullptr, nullptr);
static struct FScriptStruct_Procedural2DMapGenerator_StaticRegisterNativesFCellularProbability
{
	FScriptStruct_Procedural2DMapGenerator_StaticRegisterNativesFCellularProbability()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CellularProbability")),new UScriptStruct::TCppStructOps<FCellularProbability>);
	}
} ScriptStruct_Procedural2DMapGenerator_StaticRegisterNativesFCellularProbability;
	struct Z_Construct_UScriptStruct_FCellularProbability_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_neighbourTile_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_neighbourTile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_minNumberOfTilesToTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_minNumberOfTilesToTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxNumberOfTilesToTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_maxNumberOfTilesToTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tileToTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_tileToTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCellularProbability_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "ModuleRelativePath", "Public/Procedural2DMapGeneratorBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCellularProbability_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCellularProbability>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCellularProbability_Statics::NewProp_neighbourTile_MetaData[] = {
		{ "Category", "Cellular Probability Struct" },
		{ "ModuleRelativePath", "Public/Procedural2DMapGeneratorBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCellularProbability_Statics::NewProp_neighbourTile = { "neighbourTile", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCellularProbability, neighbourTile), METADATA_PARAMS(Z_Construct_UScriptStruct_FCellularProbability_Statics::NewProp_neighbourTile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCellularProbability_Statics::NewProp_neighbourTile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCellularProbability_Statics::NewProp_minNumberOfTilesToTransform_MetaData[] = {
		{ "Category", "Cellular Probability Struct" },
		{ "ModuleRelativePath", "Public/Procedural2DMapGeneratorBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCellularProbability_Statics::NewProp_minNumberOfTilesToTransform = { "minNumberOfTilesToTransform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCellularProbability, minNumberOfTilesToTransform), METADATA_PARAMS(Z_Construct_UScriptStruct_FCellularProbability_Statics::NewProp_minNumberOfTilesToTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCellularProbability_Statics::NewProp_minNumberOfTilesToTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCellularProbability_Statics::NewProp_maxNumberOfTilesToTransform_MetaData[] = {
		{ "Category", "Cellular Probability Struct" },
		{ "ModuleRelativePath", "Public/Procedural2DMapGeneratorBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCellularProbability_Statics::NewProp_maxNumberOfTilesToTransform = { "maxNumberOfTilesToTransform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCellularProbability, maxNumberOfTilesToTransform), METADATA_PARAMS(Z_Construct_UScriptStruct_FCellularProbability_Statics::NewProp_maxNumberOfTilesToTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCellularProbability_Statics::NewProp_maxNumberOfTilesToTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCellularProbability_Statics::NewProp_tileToTransform_MetaData[] = {
		{ "Category", "Cellular Probability Struct" },
		{ "ModuleRelativePath", "Public/Procedural2DMapGeneratorBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCellularProbability_Statics::NewProp_tileToTransform = { "tileToTransform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCellularProbability, tileToTransform), METADATA_PARAMS(Z_Construct_UScriptStruct_FCellularProbability_Statics::NewProp_tileToTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCellularProbability_Statics::NewProp_tileToTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCellularProbability_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellularProbability_Statics::NewProp_neighbourTile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellularProbability_Statics::NewProp_minNumberOfTilesToTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellularProbability_Statics::NewProp_maxNumberOfTilesToTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellularProbability_Statics::NewProp_tileToTransform,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCellularProbability_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Procedural2DMapGenerator,
		nullptr,
		&NewStructOps,
		"CellularProbability",
		sizeof(FCellularProbability),
		alignof(FCellularProbability),
		Z_Construct_UScriptStruct_FCellularProbability_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCellularProbability_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCellularProbability_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCellularProbability_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCellularProbability()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCellularProbability_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Procedural2DMapGenerator();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CellularProbability"), sizeof(FCellularProbability), Get_Z_Construct_UScriptStruct_FCellularProbability_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCellularProbability_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCellularProbability_Hash() { return 3803653949U; }
	DEFINE_FUNCTION(UProcedural2DMapGeneratorBPLibrary::execProcedural2DMapGeneratorGetCellularMap)
	{
		P_GET_OBJECT(UPaperTileMapComponent,Z_Param_tileMap);
		P_GET_PROPERTY(FIntProperty,Z_Param_layerFloor);
		P_GET_PROPERTY(FIntProperty,Z_Param_layerCollision);
		P_GET_STRUCT(FPaperTileInfo,Z_Param_collision);
		P_GET_STRUCT(FPaperTileInfo,Z_Param_floor);
		P_GET_TARRAY(FCellularProbability,Z_Param_probs);
		P_GET_PROPERTY(FIntProperty,Z_Param_iterations);
		P_GET_PROPERTY(FIntProperty,Z_Param_numberOfTiles);
		P_FINISH;
		P_NATIVE_BEGIN;
		UProcedural2DMapGeneratorBPLibrary::Procedural2DMapGeneratorGetCellularMap(Z_Param_tileMap,Z_Param_layerFloor,Z_Param_layerCollision,Z_Param_collision,Z_Param_floor,Z_Param_probs,Z_Param_iterations,Z_Param_numberOfTiles);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProcedural2DMapGeneratorBPLibrary::execProcedural2DMapGeneratorGetLineMap)
	{
		P_GET_OBJECT(UPaperTileMapComponent,Z_Param_tileMap);
		P_GET_PROPERTY(FIntProperty,Z_Param_layerFloor);
		P_GET_PROPERTY(FIntProperty,Z_Param_layerCollision);
		P_GET_STRUCT(FPaperTileInfo,Z_Param_collision);
		P_GET_STRUCT(FPaperTileInfo,Z_Param_floor);
		P_GET_PROPERTY(FIntProperty,Z_Param_extraLines);
		P_GET_PROPERTY(FIntProperty,Z_Param_branchQuantity);
		P_GET_PROPERTY(FIntProperty,Z_Param_branchLength);
		P_FINISH;
		P_NATIVE_BEGIN;
		UProcedural2DMapGeneratorBPLibrary::Procedural2DMapGeneratorGetLineMap(Z_Param_tileMap,Z_Param_layerFloor,Z_Param_layerCollision,Z_Param_collision,Z_Param_floor,Z_Param_extraLines,Z_Param_branchQuantity,Z_Param_branchLength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProcedural2DMapGeneratorBPLibrary::execProcedural2DMapGeneratorGetSimpleDungeonMap)
	{
		P_GET_OBJECT(UPaperTileMapComponent,Z_Param_tileMap);
		P_GET_PROPERTY(FIntProperty,Z_Param_layerFloor);
		P_GET_PROPERTY(FIntProperty,Z_Param_layerCollision);
		P_GET_STRUCT(FPaperTileInfo,Z_Param_collision);
		P_GET_STRUCT(FPaperTileInfo,Z_Param_floor);
		P_GET_PROPERTY(FIntProperty,Z_Param_tries);
		P_GET_PROPERTY(FIntProperty,Z_Param_extraCorridors);
		P_GET_PROPERTY(FIntProperty,Z_Param_minWidth);
		P_GET_PROPERTY(FIntProperty,Z_Param_minHeight);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxWidth);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxHeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		UProcedural2DMapGeneratorBPLibrary::Procedural2DMapGeneratorGetSimpleDungeonMap(Z_Param_tileMap,Z_Param_layerFloor,Z_Param_layerCollision,Z_Param_collision,Z_Param_floor,Z_Param_tries,Z_Param_extraCorridors,Z_Param_minWidth,Z_Param_minHeight,Z_Param_maxWidth,Z_Param_maxHeight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProcedural2DMapGeneratorBPLibrary::execProcedural2DMapGeneratorGetBSPDungeonMap)
	{
		P_GET_OBJECT(UPaperTileMapComponent,Z_Param_tileMap);
		P_GET_PROPERTY(FIntProperty,Z_Param_layerFloor);
		P_GET_PROPERTY(FIntProperty,Z_Param_layerCollision);
		P_GET_STRUCT(FPaperTileInfo,Z_Param_collision);
		P_GET_STRUCT(FPaperTileInfo,Z_Param_floor);
		P_GET_PROPERTY(FIntProperty,Z_Param_minRooms);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxRooms);
		P_GET_PROPERTY(FIntProperty,Z_Param_minWidth);
		P_GET_PROPERTY(FIntProperty,Z_Param_minHeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		UProcedural2DMapGeneratorBPLibrary::Procedural2DMapGeneratorGetBSPDungeonMap(Z_Param_tileMap,Z_Param_layerFloor,Z_Param_layerCollision,Z_Param_collision,Z_Param_floor,Z_Param_minRooms,Z_Param_maxRooms,Z_Param_minWidth,Z_Param_minHeight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProcedural2DMapGeneratorBPLibrary::execProcedural2DMapGeneratorGetDrunkardMap)
	{
		P_GET_OBJECT(UPaperTileMapComponent,Z_Param_tileMap);
		P_GET_PROPERTY(FIntProperty,Z_Param_layerFloor);
		P_GET_PROPERTY(FIntProperty,Z_Param_layerCollision);
		P_GET_STRUCT(FPaperTileInfo,Z_Param_collision);
		P_GET_STRUCT(FPaperTileInfo,Z_Param_floor);
		P_GET_PROPERTY(FIntProperty,Z_Param_iterations);
		P_FINISH;
		P_NATIVE_BEGIN;
		UProcedural2DMapGeneratorBPLibrary::Procedural2DMapGeneratorGetDrunkardMap(Z_Param_tileMap,Z_Param_layerFloor,Z_Param_layerCollision,Z_Param_collision,Z_Param_floor,Z_Param_iterations);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProcedural2DMapGeneratorBPLibrary::execProcedural2DMapGeneratorSampleFunction)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Param);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Param1);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UProcedural2DMapGeneratorBPLibrary::Procedural2DMapGeneratorSampleFunction(Z_Param_Param,Z_Param_Param1);
		P_NATIVE_END;
	}
	void UProcedural2DMapGeneratorBPLibrary::StaticRegisterNativesUProcedural2DMapGeneratorBPLibrary()
	{
		UClass* Class = UProcedural2DMapGeneratorBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Procedural2DMapGeneratorGetBSPDungeonMap", &UProcedural2DMapGeneratorBPLibrary::execProcedural2DMapGeneratorGetBSPDungeonMap },
			{ "Procedural2DMapGeneratorGetCellularMap", &UProcedural2DMapGeneratorBPLibrary::execProcedural2DMapGeneratorGetCellularMap },
			{ "Procedural2DMapGeneratorGetDrunkardMap", &UProcedural2DMapGeneratorBPLibrary::execProcedural2DMapGeneratorGetDrunkardMap },
			{ "Procedural2DMapGeneratorGetLineMap", &UProcedural2DMapGeneratorBPLibrary::execProcedural2DMapGeneratorGetLineMap },
			{ "Procedural2DMapGeneratorGetSimpleDungeonMap", &UProcedural2DMapGeneratorBPLibrary::execProcedural2DMapGeneratorGetSimpleDungeonMap },
			{ "Procedural2DMapGeneratorSampleFunction", &UProcedural2DMapGeneratorBPLibrary::execProcedural2DMapGeneratorSampleFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetBSPDungeonMap_Statics
	{
		struct Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorGetBSPDungeonMap_Parms
		{
			UPaperTileMapComponent* tileMap;
			int32 layerFloor;
			int32 layerCollision;
			FPaperTileInfo collision;
			FPaperTileInfo floor;
			int32 minRooms;
			int32 maxRooms;
			int32 minWidth;
			int32 minHeight;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tileMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tileMap;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_layerFloor;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_layerCollision;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_collision;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_floor;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_minRooms;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_maxRooms;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_minWidth;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_minHeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetBSPDungeonMap_Statics::NewProp_tileMap_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetBSPDungeonMap_Statics::NewProp_tileMap = { "tileMap", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorGetBSPDungeonMap_Parms, tileMap), Z_Construct_UClass_UPaperTileMapComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetBSPDungeonMap_Statics::NewProp_tileMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetBSPDungeonMap_Statics::NewProp_tileMap_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetBSPDungeonMap_Statics::NewProp_layerFloor = { "layerFloor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorGetBSPDungeonMap_Parms, layerFloor), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetBSPDungeonMap_Statics::NewProp_layerCollision = { "layerCollision", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorGetBSPDungeonMap_Parms, layerCollision), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetBSPDungeonMap_Statics::NewProp_collision = { "collision", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorGetBSPDungeonMap_Parms, collision), Z_Construct_UScriptStruct_FPaperTileInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetBSPDungeonMap_Statics::NewProp_floor = { "floor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorGetBSPDungeonMap_Parms, floor), Z_Construct_UScriptStruct_FPaperTileInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetBSPDungeonMap_Statics::NewProp_minRooms = { "minRooms", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorGetBSPDungeonMap_Parms, minRooms), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetBSPDungeonMap_Statics::NewProp_maxRooms = { "maxRooms", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorGetBSPDungeonMap_Parms, maxRooms), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetBSPDungeonMap_Statics::NewProp_minWidth = { "minWidth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorGetBSPDungeonMap_Parms, minWidth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetBSPDungeonMap_Statics::NewProp_minHeight = { "minHeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorGetBSPDungeonMap_Parms, minHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetBSPDungeonMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetBSPDungeonMap_Statics::NewProp_tileMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetBSPDungeonMap_Statics::NewProp_layerFloor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetBSPDungeonMap_Statics::NewProp_layerCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetBSPDungeonMap_Statics::NewProp_collision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetBSPDungeonMap_Statics::NewProp_floor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetBSPDungeonMap_Statics::NewProp_minRooms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetBSPDungeonMap_Statics::NewProp_maxRooms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetBSPDungeonMap_Statics::NewProp_minWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetBSPDungeonMap_Statics::NewProp_minHeight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetBSPDungeonMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Procedural2DMapGeneratorTesting" },
		{ "CPP_Default_maxRooms", "100" },
		{ "CPP_Default_minHeight", "1" },
		{ "CPP_Default_minRooms", "10" },
		{ "CPP_Default_minWidth", "1" },
		{ "DisplayName", "Create BSPDungeon" },
		{ "Keywords", "BSP Dungeon Algorithm" },
		{ "ModuleRelativePath", "Public/Procedural2DMapGeneratorBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetBSPDungeonMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProcedural2DMapGeneratorBPLibrary, nullptr, "Procedural2DMapGeneratorGetBSPDungeonMap", nullptr, nullptr, sizeof(Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorGetBSPDungeonMap_Parms), Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetBSPDungeonMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetBSPDungeonMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetBSPDungeonMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetBSPDungeonMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetBSPDungeonMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetBSPDungeonMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetCellularMap_Statics
	{
		struct Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorGetCellularMap_Parms
		{
			UPaperTileMapComponent* tileMap;
			int32 layerFloor;
			int32 layerCollision;
			FPaperTileInfo collision;
			FPaperTileInfo floor;
			TArray<FCellularProbability> probs;
			int32 iterations;
			int32 numberOfTiles;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tileMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tileMap;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_layerFloor;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_layerCollision;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_collision;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_floor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_probs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_probs;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_iterations;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_numberOfTiles;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetCellularMap_Statics::NewProp_tileMap_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetCellularMap_Statics::NewProp_tileMap = { "tileMap", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorGetCellularMap_Parms, tileMap), Z_Construct_UClass_UPaperTileMapComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetCellularMap_Statics::NewProp_tileMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetCellularMap_Statics::NewProp_tileMap_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetCellularMap_Statics::NewProp_layerFloor = { "layerFloor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorGetCellularMap_Parms, layerFloor), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetCellularMap_Statics::NewProp_layerCollision = { "layerCollision", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorGetCellularMap_Parms, layerCollision), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetCellularMap_Statics::NewProp_collision = { "collision", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorGetCellularMap_Parms, collision), Z_Construct_UScriptStruct_FPaperTileInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetCellularMap_Statics::NewProp_floor = { "floor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorGetCellularMap_Parms, floor), Z_Construct_UScriptStruct_FPaperTileInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetCellularMap_Statics::NewProp_probs_Inner = { "probs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCellularProbability, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetCellularMap_Statics::NewProp_probs = { "probs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorGetCellularMap_Parms, probs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetCellularMap_Statics::NewProp_iterations = { "iterations", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorGetCellularMap_Parms, iterations), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetCellularMap_Statics::NewProp_numberOfTiles = { "numberOfTiles", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorGetCellularMap_Parms, numberOfTiles), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetCellularMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetCellularMap_Statics::NewProp_tileMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetCellularMap_Statics::NewProp_layerFloor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetCellularMap_Statics::NewProp_layerCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetCellularMap_Statics::NewProp_collision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetCellularMap_Statics::NewProp_floor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetCellularMap_Statics::NewProp_probs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetCellularMap_Statics::NewProp_probs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetCellularMap_Statics::NewProp_iterations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetCellularMap_Statics::NewProp_numberOfTiles,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetCellularMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Procedural2DMapGeneratorTesting" },
		{ "CPP_Default_iterations", "3" },
		{ "CPP_Default_numberOfTiles", "2" },
		{ "DisplayName", "Create Cellular Automata Map" },
		{ "Keywords", "Cellular Automata algorithm" },
		{ "ModuleRelativePath", "Public/Procedural2DMapGeneratorBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetCellularMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProcedural2DMapGeneratorBPLibrary, nullptr, "Procedural2DMapGeneratorGetCellularMap", nullptr, nullptr, sizeof(Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorGetCellularMap_Parms), Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetCellularMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetCellularMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetCellularMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetCellularMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetCellularMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetCellularMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetDrunkardMap_Statics
	{
		struct Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorGetDrunkardMap_Parms
		{
			UPaperTileMapComponent* tileMap;
			int32 layerFloor;
			int32 layerCollision;
			FPaperTileInfo collision;
			FPaperTileInfo floor;
			int32 iterations;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tileMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tileMap;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_layerFloor;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_layerCollision;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_collision;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_floor;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_iterations;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetDrunkardMap_Statics::NewProp_tileMap_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetDrunkardMap_Statics::NewProp_tileMap = { "tileMap", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorGetDrunkardMap_Parms, tileMap), Z_Construct_UClass_UPaperTileMapComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetDrunkardMap_Statics::NewProp_tileMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetDrunkardMap_Statics::NewProp_tileMap_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetDrunkardMap_Statics::NewProp_layerFloor = { "layerFloor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorGetDrunkardMap_Parms, layerFloor), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetDrunkardMap_Statics::NewProp_layerCollision = { "layerCollision", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorGetDrunkardMap_Parms, layerCollision), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetDrunkardMap_Statics::NewProp_collision = { "collision", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorGetDrunkardMap_Parms, collision), Z_Construct_UScriptStruct_FPaperTileInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetDrunkardMap_Statics::NewProp_floor = { "floor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorGetDrunkardMap_Parms, floor), Z_Construct_UScriptStruct_FPaperTileInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetDrunkardMap_Statics::NewProp_iterations = { "iterations", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorGetDrunkardMap_Parms, iterations), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetDrunkardMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetDrunkardMap_Statics::NewProp_tileMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetDrunkardMap_Statics::NewProp_layerFloor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetDrunkardMap_Statics::NewProp_layerCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetDrunkardMap_Statics::NewProp_collision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetDrunkardMap_Statics::NewProp_floor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetDrunkardMap_Statics::NewProp_iterations,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetDrunkardMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Procedural2DMapGeneratorTesting" },
		{ "CPP_Default_iterations", "10000" },
		{ "DisplayName", "Create DrunkardWalkMap" },
		{ "Keywords", "Drunkard Walk Algorithm" },
		{ "ModuleRelativePath", "Public/Procedural2DMapGeneratorBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetDrunkardMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProcedural2DMapGeneratorBPLibrary, nullptr, "Procedural2DMapGeneratorGetDrunkardMap", nullptr, nullptr, sizeof(Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorGetDrunkardMap_Parms), Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetDrunkardMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetDrunkardMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetDrunkardMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetDrunkardMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetDrunkardMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetDrunkardMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetLineMap_Statics
	{
		struct Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorGetLineMap_Parms
		{
			UPaperTileMapComponent* tileMap;
			int32 layerFloor;
			int32 layerCollision;
			FPaperTileInfo collision;
			FPaperTileInfo floor;
			int32 extraLines;
			int32 branchQuantity;
			int32 branchLength;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tileMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tileMap;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_layerFloor;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_layerCollision;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_collision;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_floor;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_extraLines;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_branchQuantity;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_branchLength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetLineMap_Statics::NewProp_tileMap_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetLineMap_Statics::NewProp_tileMap = { "tileMap", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorGetLineMap_Parms, tileMap), Z_Construct_UClass_UPaperTileMapComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetLineMap_Statics::NewProp_tileMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetLineMap_Statics::NewProp_tileMap_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetLineMap_Statics::NewProp_layerFloor = { "layerFloor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorGetLineMap_Parms, layerFloor), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetLineMap_Statics::NewProp_layerCollision = { "layerCollision", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorGetLineMap_Parms, layerCollision), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetLineMap_Statics::NewProp_collision = { "collision", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorGetLineMap_Parms, collision), Z_Construct_UScriptStruct_FPaperTileInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetLineMap_Statics::NewProp_floor = { "floor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorGetLineMap_Parms, floor), Z_Construct_UScriptStruct_FPaperTileInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetLineMap_Statics::NewProp_extraLines = { "extraLines", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorGetLineMap_Parms, extraLines), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetLineMap_Statics::NewProp_branchQuantity = { "branchQuantity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorGetLineMap_Parms, branchQuantity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetLineMap_Statics::NewProp_branchLength = { "branchLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorGetLineMap_Parms, branchLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetLineMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetLineMap_Statics::NewProp_tileMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetLineMap_Statics::NewProp_layerFloor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetLineMap_Statics::NewProp_layerCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetLineMap_Statics::NewProp_collision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetLineMap_Statics::NewProp_floor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetLineMap_Statics::NewProp_extraLines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetLineMap_Statics::NewProp_branchQuantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetLineMap_Statics::NewProp_branchLength,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetLineMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Procedural2DMapGeneratorTesting" },
		{ "CPP_Default_branchLength", "300" },
		{ "CPP_Default_branchQuantity", "100" },
		{ "CPP_Default_extraLines", "10" },
		{ "DisplayName", "Create Line Map" },
		{ "Keywords", "Line Map Algorithm" },
		{ "ModuleRelativePath", "Public/Procedural2DMapGeneratorBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetLineMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProcedural2DMapGeneratorBPLibrary, nullptr, "Procedural2DMapGeneratorGetLineMap", nullptr, nullptr, sizeof(Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorGetLineMap_Parms), Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetLineMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetLineMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetLineMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetLineMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetLineMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetLineMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetSimpleDungeonMap_Statics
	{
		struct Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorGetSimpleDungeonMap_Parms
		{
			UPaperTileMapComponent* tileMap;
			int32 layerFloor;
			int32 layerCollision;
			FPaperTileInfo collision;
			FPaperTileInfo floor;
			int32 tries;
			int32 extraCorridors;
			int32 minWidth;
			int32 minHeight;
			int32 maxWidth;
			int32 maxHeight;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tileMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tileMap;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_layerFloor;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_layerCollision;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_collision;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_floor;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_tries;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_extraCorridors;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_minWidth;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_minHeight;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_maxWidth;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_maxHeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetSimpleDungeonMap_Statics::NewProp_tileMap_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetSimpleDungeonMap_Statics::NewProp_tileMap = { "tileMap", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorGetSimpleDungeonMap_Parms, tileMap), Z_Construct_UClass_UPaperTileMapComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetSimpleDungeonMap_Statics::NewProp_tileMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetSimpleDungeonMap_Statics::NewProp_tileMap_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetSimpleDungeonMap_Statics::NewProp_layerFloor = { "layerFloor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorGetSimpleDungeonMap_Parms, layerFloor), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetSimpleDungeonMap_Statics::NewProp_layerCollision = { "layerCollision", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorGetSimpleDungeonMap_Parms, layerCollision), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetSimpleDungeonMap_Statics::NewProp_collision = { "collision", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorGetSimpleDungeonMap_Parms, collision), Z_Construct_UScriptStruct_FPaperTileInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetSimpleDungeonMap_Statics::NewProp_floor = { "floor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorGetSimpleDungeonMap_Parms, floor), Z_Construct_UScriptStruct_FPaperTileInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetSimpleDungeonMap_Statics::NewProp_tries = { "tries", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorGetSimpleDungeonMap_Parms, tries), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetSimpleDungeonMap_Statics::NewProp_extraCorridors = { "extraCorridors", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorGetSimpleDungeonMap_Parms, extraCorridors), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetSimpleDungeonMap_Statics::NewProp_minWidth = { "minWidth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorGetSimpleDungeonMap_Parms, minWidth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetSimpleDungeonMap_Statics::NewProp_minHeight = { "minHeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorGetSimpleDungeonMap_Parms, minHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetSimpleDungeonMap_Statics::NewProp_maxWidth = { "maxWidth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorGetSimpleDungeonMap_Parms, maxWidth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetSimpleDungeonMap_Statics::NewProp_maxHeight = { "maxHeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorGetSimpleDungeonMap_Parms, maxHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetSimpleDungeonMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetSimpleDungeonMap_Statics::NewProp_tileMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetSimpleDungeonMap_Statics::NewProp_layerFloor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetSimpleDungeonMap_Statics::NewProp_layerCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetSimpleDungeonMap_Statics::NewProp_collision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetSimpleDungeonMap_Statics::NewProp_floor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetSimpleDungeonMap_Statics::NewProp_tries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetSimpleDungeonMap_Statics::NewProp_extraCorridors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetSimpleDungeonMap_Statics::NewProp_minWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetSimpleDungeonMap_Statics::NewProp_minHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetSimpleDungeonMap_Statics::NewProp_maxWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetSimpleDungeonMap_Statics::NewProp_maxHeight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetSimpleDungeonMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Procedural2DMapGeneratorTesting" },
		{ "CPP_Default_extraCorridors", "100" },
		{ "CPP_Default_maxHeight", "100" },
		{ "CPP_Default_maxWidth", "100" },
		{ "CPP_Default_minHeight", "1" },
		{ "CPP_Default_minWidth", "1" },
		{ "CPP_Default_tries", "100" },
		{ "DisplayName", "Create Simple Dungeon" },
		{ "Keywords", "Simple Dungeon Algorithm" },
		{ "ModuleRelativePath", "Public/Procedural2DMapGeneratorBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetSimpleDungeonMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProcedural2DMapGeneratorBPLibrary, nullptr, "Procedural2DMapGeneratorGetSimpleDungeonMap", nullptr, nullptr, sizeof(Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorGetSimpleDungeonMap_Parms), Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetSimpleDungeonMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetSimpleDungeonMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetSimpleDungeonMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetSimpleDungeonMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetSimpleDungeonMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetSimpleDungeonMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorSampleFunction_Statics
	{
		struct Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorSampleFunction_Parms
		{
			float Param;
			float Param1;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Param;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Param1;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorSampleFunction_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorSampleFunction_Parms, Param), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorSampleFunction_Statics::NewProp_Param1 = { "Param1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorSampleFunction_Parms, Param1), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorSampleFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorSampleFunction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorSampleFunction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorSampleFunction_Statics::NewProp_Param,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorSampleFunction_Statics::NewProp_Param1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorSampleFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorSampleFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Procedural2DMapGeneratorTesting" },
		{ "DisplayName", "Execute Sample function" },
		{ "Keywords", "Procedural2DMapGenerator sample test testing" },
		{ "ModuleRelativePath", "Public/Procedural2DMapGeneratorBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorSampleFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProcedural2DMapGeneratorBPLibrary, nullptr, "Procedural2DMapGeneratorSampleFunction", nullptr, nullptr, sizeof(Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorSampleFunction_Parms), Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorSampleFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorSampleFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorSampleFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorSampleFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorSampleFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorSampleFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UProcedural2DMapGeneratorBPLibrary_NoRegister()
	{
		return UProcedural2DMapGeneratorBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UProcedural2DMapGeneratorBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProcedural2DMapGeneratorBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Procedural2DMapGenerator,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UProcedural2DMapGeneratorBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetBSPDungeonMap, "Procedural2DMapGeneratorGetBSPDungeonMap" }, // 639036796
		{ &Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetCellularMap, "Procedural2DMapGeneratorGetCellularMap" }, // 1540441791
		{ &Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetDrunkardMap, "Procedural2DMapGeneratorGetDrunkardMap" }, // 2591173565
		{ &Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetLineMap, "Procedural2DMapGeneratorGetLineMap" }, // 1819594123
		{ &Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorGetSimpleDungeonMap, "Procedural2DMapGeneratorGetSimpleDungeonMap" }, // 203105208
		{ &Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorSampleFunction, "Procedural2DMapGeneratorSampleFunction" }, // 1069774614
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProcedural2DMapGeneratorBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Procedural2DMapGeneratorBPLibrary.h" },
		{ "ModuleRelativePath", "Public/Procedural2DMapGeneratorBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProcedural2DMapGeneratorBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProcedural2DMapGeneratorBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UProcedural2DMapGeneratorBPLibrary_Statics::ClassParams = {
		&UProcedural2DMapGeneratorBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UProcedural2DMapGeneratorBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProcedural2DMapGeneratorBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProcedural2DMapGeneratorBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UProcedural2DMapGeneratorBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UProcedural2DMapGeneratorBPLibrary, 1501706591);
	template<> PROCEDURAL2DMAPGENERATOR_API UClass* StaticClass<UProcedural2DMapGeneratorBPLibrary>()
	{
		return UProcedural2DMapGeneratorBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProcedural2DMapGeneratorBPLibrary(Z_Construct_UClass_UProcedural2DMapGeneratorBPLibrary, &UProcedural2DMapGeneratorBPLibrary::StaticClass, TEXT("/Script/Procedural2DMapGenerator"), TEXT("UProcedural2DMapGeneratorBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProcedural2DMapGeneratorBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
