// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPaperTileMapComponent;
struct FPaperTileInfo;
struct FCellularProbability;
#ifdef PROCEDURAL2DMAPGENERATOR_Procedural2DMapGeneratorBPLibrary_generated_h
#error "Procedural2DMapGeneratorBPLibrary.generated.h already included, missing '#pragma once' in Procedural2DMapGeneratorBPLibrary.h"
#endif
#define PROCEDURAL2DMAPGENERATOR_Procedural2DMapGeneratorBPLibrary_generated_h

#define UnrealTestProject_Plugins_Procedural2DMapGenerator_Source_Procedural2DMapGenerator_Public_Procedural2DMapGeneratorBPLibrary_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCellularProbability_Statics; \
	PROCEDURAL2DMAPGENERATOR_API static class UScriptStruct* StaticStruct();


template<> PROCEDURAL2DMAPGENERATOR_API UScriptStruct* StaticStruct<struct FCellularProbability>();

#define UnrealTestProject_Plugins_Procedural2DMapGenerator_Source_Procedural2DMapGenerator_Public_Procedural2DMapGeneratorBPLibrary_h_43_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execProcedural2DMapGeneratorGetCellularMap) \
	{ \
		P_GET_OBJECT(UPaperTileMapComponent,Z_Param_tileMap); \
		P_GET_PROPERTY(UIntProperty,Z_Param_layerFloor); \
		P_GET_PROPERTY(UIntProperty,Z_Param_layerCollision); \
		P_GET_STRUCT(FPaperTileInfo,Z_Param_collision); \
		P_GET_STRUCT(FPaperTileInfo,Z_Param_floor); \
		P_GET_TARRAY(FCellularProbability,Z_Param_probs); \
		P_GET_PROPERTY(UIntProperty,Z_Param_iterations); \
		P_GET_PROPERTY(UIntProperty,Z_Param_numberOfTiles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UProcedural2DMapGeneratorBPLibrary::Procedural2DMapGeneratorGetCellularMap(Z_Param_tileMap,Z_Param_layerFloor,Z_Param_layerCollision,Z_Param_collision,Z_Param_floor,Z_Param_probs,Z_Param_iterations,Z_Param_numberOfTiles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProcedural2DMapGeneratorGetLineMap) \
	{ \
		P_GET_OBJECT(UPaperTileMapComponent,Z_Param_tileMap); \
		P_GET_PROPERTY(UIntProperty,Z_Param_layerFloor); \
		P_GET_PROPERTY(UIntProperty,Z_Param_layerCollision); \
		P_GET_STRUCT(FPaperTileInfo,Z_Param_collision); \
		P_GET_STRUCT(FPaperTileInfo,Z_Param_floor); \
		P_GET_PROPERTY(UIntProperty,Z_Param_extraLines); \
		P_GET_PROPERTY(UIntProperty,Z_Param_branchQuantity); \
		P_GET_PROPERTY(UIntProperty,Z_Param_branchLength); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UProcedural2DMapGeneratorBPLibrary::Procedural2DMapGeneratorGetLineMap(Z_Param_tileMap,Z_Param_layerFloor,Z_Param_layerCollision,Z_Param_collision,Z_Param_floor,Z_Param_extraLines,Z_Param_branchQuantity,Z_Param_branchLength); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProcedural2DMapGeneratorGetSimpleDungeonMap) \
	{ \
		P_GET_OBJECT(UPaperTileMapComponent,Z_Param_tileMap); \
		P_GET_PROPERTY(UIntProperty,Z_Param_layerFloor); \
		P_GET_PROPERTY(UIntProperty,Z_Param_layerCollision); \
		P_GET_STRUCT(FPaperTileInfo,Z_Param_collision); \
		P_GET_STRUCT(FPaperTileInfo,Z_Param_floor); \
		P_GET_PROPERTY(UIntProperty,Z_Param_tries); \
		P_GET_PROPERTY(UIntProperty,Z_Param_extraCorridors); \
		P_GET_PROPERTY(UIntProperty,Z_Param_minWidth); \
		P_GET_PROPERTY(UIntProperty,Z_Param_minHeight); \
		P_GET_PROPERTY(UIntProperty,Z_Param_maxWidth); \
		P_GET_PROPERTY(UIntProperty,Z_Param_maxHeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UProcedural2DMapGeneratorBPLibrary::Procedural2DMapGeneratorGetSimpleDungeonMap(Z_Param_tileMap,Z_Param_layerFloor,Z_Param_layerCollision,Z_Param_collision,Z_Param_floor,Z_Param_tries,Z_Param_extraCorridors,Z_Param_minWidth,Z_Param_minHeight,Z_Param_maxWidth,Z_Param_maxHeight); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProcedural2DMapGeneratorGetBSPDungeonMap) \
	{ \
		P_GET_OBJECT(UPaperTileMapComponent,Z_Param_tileMap); \
		P_GET_PROPERTY(UIntProperty,Z_Param_layerFloor); \
		P_GET_PROPERTY(UIntProperty,Z_Param_layerCollision); \
		P_GET_STRUCT(FPaperTileInfo,Z_Param_collision); \
		P_GET_STRUCT(FPaperTileInfo,Z_Param_floor); \
		P_GET_PROPERTY(UIntProperty,Z_Param_minRooms); \
		P_GET_PROPERTY(UIntProperty,Z_Param_maxRooms); \
		P_GET_PROPERTY(UIntProperty,Z_Param_minWidth); \
		P_GET_PROPERTY(UIntProperty,Z_Param_minHeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UProcedural2DMapGeneratorBPLibrary::Procedural2DMapGeneratorGetBSPDungeonMap(Z_Param_tileMap,Z_Param_layerFloor,Z_Param_layerCollision,Z_Param_collision,Z_Param_floor,Z_Param_minRooms,Z_Param_maxRooms,Z_Param_minWidth,Z_Param_minHeight); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProcedural2DMapGeneratorGetDrunkardMap) \
	{ \
		P_GET_OBJECT(UPaperTileMapComponent,Z_Param_tileMap); \
		P_GET_PROPERTY(UIntProperty,Z_Param_layerFloor); \
		P_GET_PROPERTY(UIntProperty,Z_Param_layerCollision); \
		P_GET_STRUCT(FPaperTileInfo,Z_Param_collision); \
		P_GET_STRUCT(FPaperTileInfo,Z_Param_floor); \
		P_GET_PROPERTY(UIntProperty,Z_Param_iterations); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UProcedural2DMapGeneratorBPLibrary::Procedural2DMapGeneratorGetDrunkardMap(Z_Param_tileMap,Z_Param_layerFloor,Z_Param_layerCollision,Z_Param_collision,Z_Param_floor,Z_Param_iterations); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProcedural2DMapGeneratorSampleFunction) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Param); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Param1); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UProcedural2DMapGeneratorBPLibrary::Procedural2DMapGeneratorSampleFunction(Z_Param_Param,Z_Param_Param1); \
		P_NATIVE_END; \
	}


#define UnrealTestProject_Plugins_Procedural2DMapGenerator_Source_Procedural2DMapGenerator_Public_Procedural2DMapGeneratorBPLibrary_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execProcedural2DMapGeneratorGetCellularMap) \
	{ \
		P_GET_OBJECT(UPaperTileMapComponent,Z_Param_tileMap); \
		P_GET_PROPERTY(UIntProperty,Z_Param_layerFloor); \
		P_GET_PROPERTY(UIntProperty,Z_Param_layerCollision); \
		P_GET_STRUCT(FPaperTileInfo,Z_Param_collision); \
		P_GET_STRUCT(FPaperTileInfo,Z_Param_floor); \
		P_GET_TARRAY(FCellularProbability,Z_Param_probs); \
		P_GET_PROPERTY(UIntProperty,Z_Param_iterations); \
		P_GET_PROPERTY(UIntProperty,Z_Param_numberOfTiles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UProcedural2DMapGeneratorBPLibrary::Procedural2DMapGeneratorGetCellularMap(Z_Param_tileMap,Z_Param_layerFloor,Z_Param_layerCollision,Z_Param_collision,Z_Param_floor,Z_Param_probs,Z_Param_iterations,Z_Param_numberOfTiles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProcedural2DMapGeneratorGetLineMap) \
	{ \
		P_GET_OBJECT(UPaperTileMapComponent,Z_Param_tileMap); \
		P_GET_PROPERTY(UIntProperty,Z_Param_layerFloor); \
		P_GET_PROPERTY(UIntProperty,Z_Param_layerCollision); \
		P_GET_STRUCT(FPaperTileInfo,Z_Param_collision); \
		P_GET_STRUCT(FPaperTileInfo,Z_Param_floor); \
		P_GET_PROPERTY(UIntProperty,Z_Param_extraLines); \
		P_GET_PROPERTY(UIntProperty,Z_Param_branchQuantity); \
		P_GET_PROPERTY(UIntProperty,Z_Param_branchLength); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UProcedural2DMapGeneratorBPLibrary::Procedural2DMapGeneratorGetLineMap(Z_Param_tileMap,Z_Param_layerFloor,Z_Param_layerCollision,Z_Param_collision,Z_Param_floor,Z_Param_extraLines,Z_Param_branchQuantity,Z_Param_branchLength); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProcedural2DMapGeneratorGetSimpleDungeonMap) \
	{ \
		P_GET_OBJECT(UPaperTileMapComponent,Z_Param_tileMap); \
		P_GET_PROPERTY(UIntProperty,Z_Param_layerFloor); \
		P_GET_PROPERTY(UIntProperty,Z_Param_layerCollision); \
		P_GET_STRUCT(FPaperTileInfo,Z_Param_collision); \
		P_GET_STRUCT(FPaperTileInfo,Z_Param_floor); \
		P_GET_PROPERTY(UIntProperty,Z_Param_tries); \
		P_GET_PROPERTY(UIntProperty,Z_Param_extraCorridors); \
		P_GET_PROPERTY(UIntProperty,Z_Param_minWidth); \
		P_GET_PROPERTY(UIntProperty,Z_Param_minHeight); \
		P_GET_PROPERTY(UIntProperty,Z_Param_maxWidth); \
		P_GET_PROPERTY(UIntProperty,Z_Param_maxHeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UProcedural2DMapGeneratorBPLibrary::Procedural2DMapGeneratorGetSimpleDungeonMap(Z_Param_tileMap,Z_Param_layerFloor,Z_Param_layerCollision,Z_Param_collision,Z_Param_floor,Z_Param_tries,Z_Param_extraCorridors,Z_Param_minWidth,Z_Param_minHeight,Z_Param_maxWidth,Z_Param_maxHeight); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProcedural2DMapGeneratorGetBSPDungeonMap) \
	{ \
		P_GET_OBJECT(UPaperTileMapComponent,Z_Param_tileMap); \
		P_GET_PROPERTY(UIntProperty,Z_Param_layerFloor); \
		P_GET_PROPERTY(UIntProperty,Z_Param_layerCollision); \
		P_GET_STRUCT(FPaperTileInfo,Z_Param_collision); \
		P_GET_STRUCT(FPaperTileInfo,Z_Param_floor); \
		P_GET_PROPERTY(UIntProperty,Z_Param_minRooms); \
		P_GET_PROPERTY(UIntProperty,Z_Param_maxRooms); \
		P_GET_PROPERTY(UIntProperty,Z_Param_minWidth); \
		P_GET_PROPERTY(UIntProperty,Z_Param_minHeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UProcedural2DMapGeneratorBPLibrary::Procedural2DMapGeneratorGetBSPDungeonMap(Z_Param_tileMap,Z_Param_layerFloor,Z_Param_layerCollision,Z_Param_collision,Z_Param_floor,Z_Param_minRooms,Z_Param_maxRooms,Z_Param_minWidth,Z_Param_minHeight); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProcedural2DMapGeneratorGetDrunkardMap) \
	{ \
		P_GET_OBJECT(UPaperTileMapComponent,Z_Param_tileMap); \
		P_GET_PROPERTY(UIntProperty,Z_Param_layerFloor); \
		P_GET_PROPERTY(UIntProperty,Z_Param_layerCollision); \
		P_GET_STRUCT(FPaperTileInfo,Z_Param_collision); \
		P_GET_STRUCT(FPaperTileInfo,Z_Param_floor); \
		P_GET_PROPERTY(UIntProperty,Z_Param_iterations); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UProcedural2DMapGeneratorBPLibrary::Procedural2DMapGeneratorGetDrunkardMap(Z_Param_tileMap,Z_Param_layerFloor,Z_Param_layerCollision,Z_Param_collision,Z_Param_floor,Z_Param_iterations); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProcedural2DMapGeneratorSampleFunction) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Param); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Param1); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UProcedural2DMapGeneratorBPLibrary::Procedural2DMapGeneratorSampleFunction(Z_Param_Param,Z_Param_Param1); \
		P_NATIVE_END; \
	}


#define UnrealTestProject_Plugins_Procedural2DMapGenerator_Source_Procedural2DMapGenerator_Public_Procedural2DMapGeneratorBPLibrary_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProcedural2DMapGeneratorBPLibrary(); \
	friend struct Z_Construct_UClass_UProcedural2DMapGeneratorBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UProcedural2DMapGeneratorBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Procedural2DMapGenerator"), NO_API) \
	DECLARE_SERIALIZER(UProcedural2DMapGeneratorBPLibrary)


#define UnrealTestProject_Plugins_Procedural2DMapGenerator_Source_Procedural2DMapGenerator_Public_Procedural2DMapGeneratorBPLibrary_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUProcedural2DMapGeneratorBPLibrary(); \
	friend struct Z_Construct_UClass_UProcedural2DMapGeneratorBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UProcedural2DMapGeneratorBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Procedural2DMapGenerator"), NO_API) \
	DECLARE_SERIALIZER(UProcedural2DMapGeneratorBPLibrary)


#define UnrealTestProject_Plugins_Procedural2DMapGenerator_Source_Procedural2DMapGenerator_Public_Procedural2DMapGeneratorBPLibrary_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProcedural2DMapGeneratorBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProcedural2DMapGeneratorBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProcedural2DMapGeneratorBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProcedural2DMapGeneratorBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UProcedural2DMapGeneratorBPLibrary(UProcedural2DMapGeneratorBPLibrary&&); \
	NO_API UProcedural2DMapGeneratorBPLibrary(const UProcedural2DMapGeneratorBPLibrary&); \
public:


#define UnrealTestProject_Plugins_Procedural2DMapGenerator_Source_Procedural2DMapGenerator_Public_Procedural2DMapGeneratorBPLibrary_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProcedural2DMapGeneratorBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UProcedural2DMapGeneratorBPLibrary(UProcedural2DMapGeneratorBPLibrary&&); \
	NO_API UProcedural2DMapGeneratorBPLibrary(const UProcedural2DMapGeneratorBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProcedural2DMapGeneratorBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProcedural2DMapGeneratorBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProcedural2DMapGeneratorBPLibrary)


#define UnrealTestProject_Plugins_Procedural2DMapGenerator_Source_Procedural2DMapGenerator_Public_Procedural2DMapGeneratorBPLibrary_h_43_PRIVATE_PROPERTY_OFFSET
#define UnrealTestProject_Plugins_Procedural2DMapGenerator_Source_Procedural2DMapGenerator_Public_Procedural2DMapGeneratorBPLibrary_h_40_PROLOG
#define UnrealTestProject_Plugins_Procedural2DMapGenerator_Source_Procedural2DMapGenerator_Public_Procedural2DMapGeneratorBPLibrary_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealTestProject_Plugins_Procedural2DMapGenerator_Source_Procedural2DMapGenerator_Public_Procedural2DMapGeneratorBPLibrary_h_43_PRIVATE_PROPERTY_OFFSET \
	UnrealTestProject_Plugins_Procedural2DMapGenerator_Source_Procedural2DMapGenerator_Public_Procedural2DMapGeneratorBPLibrary_h_43_RPC_WRAPPERS \
	UnrealTestProject_Plugins_Procedural2DMapGenerator_Source_Procedural2DMapGenerator_Public_Procedural2DMapGeneratorBPLibrary_h_43_INCLASS \
	UnrealTestProject_Plugins_Procedural2DMapGenerator_Source_Procedural2DMapGenerator_Public_Procedural2DMapGeneratorBPLibrary_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealTestProject_Plugins_Procedural2DMapGenerator_Source_Procedural2DMapGenerator_Public_Procedural2DMapGeneratorBPLibrary_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealTestProject_Plugins_Procedural2DMapGenerator_Source_Procedural2DMapGenerator_Public_Procedural2DMapGeneratorBPLibrary_h_43_PRIVATE_PROPERTY_OFFSET \
	UnrealTestProject_Plugins_Procedural2DMapGenerator_Source_Procedural2DMapGenerator_Public_Procedural2DMapGeneratorBPLibrary_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealTestProject_Plugins_Procedural2DMapGenerator_Source_Procedural2DMapGenerator_Public_Procedural2DMapGeneratorBPLibrary_h_43_INCLASS_NO_PURE_DECLS \
	UnrealTestProject_Plugins_Procedural2DMapGenerator_Source_Procedural2DMapGenerator_Public_Procedural2DMapGeneratorBPLibrary_h_43_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Procedural2DMapGeneratorBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROCEDURAL2DMAPGENERATOR_API UClass* StaticClass<class UProcedural2DMapGeneratorBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealTestProject_Plugins_Procedural2DMapGenerator_Source_Procedural2DMapGenerator_Public_Procedural2DMapGeneratorBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
