// Copyright Epic Games, Inc. All Rights Reserved.
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

#define UnrealTestProject_Plugins_Procedural2DMapGenerator_Source_Procedural2DMapGenerator_Public_Procedural2DMapGeneratorBPLibrary_h_43_SPARSE_DATA
#define UnrealTestProject_Plugins_Procedural2DMapGenerator_Source_Procedural2DMapGenerator_Public_Procedural2DMapGeneratorBPLibrary_h_43_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execProcedural2DMapGeneratorGetCellularMap); \
	DECLARE_FUNCTION(execProcedural2DMapGeneratorGetLineMap); \
	DECLARE_FUNCTION(execProcedural2DMapGeneratorGetSimpleDungeonMap); \
	DECLARE_FUNCTION(execProcedural2DMapGeneratorGetBSPDungeonMap); \
	DECLARE_FUNCTION(execProcedural2DMapGeneratorGetDrunkardMap); \
	DECLARE_FUNCTION(execProcedural2DMapGeneratorSampleFunction);


#define UnrealTestProject_Plugins_Procedural2DMapGenerator_Source_Procedural2DMapGenerator_Public_Procedural2DMapGeneratorBPLibrary_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execProcedural2DMapGeneratorGetCellularMap); \
	DECLARE_FUNCTION(execProcedural2DMapGeneratorGetLineMap); \
	DECLARE_FUNCTION(execProcedural2DMapGeneratorGetSimpleDungeonMap); \
	DECLARE_FUNCTION(execProcedural2DMapGeneratorGetBSPDungeonMap); \
	DECLARE_FUNCTION(execProcedural2DMapGeneratorGetDrunkardMap); \
	DECLARE_FUNCTION(execProcedural2DMapGeneratorSampleFunction);


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
	UnrealTestProject_Plugins_Procedural2DMapGenerator_Source_Procedural2DMapGenerator_Public_Procedural2DMapGeneratorBPLibrary_h_43_SPARSE_DATA \
	UnrealTestProject_Plugins_Procedural2DMapGenerator_Source_Procedural2DMapGenerator_Public_Procedural2DMapGeneratorBPLibrary_h_43_RPC_WRAPPERS \
	UnrealTestProject_Plugins_Procedural2DMapGenerator_Source_Procedural2DMapGenerator_Public_Procedural2DMapGeneratorBPLibrary_h_43_INCLASS \
	UnrealTestProject_Plugins_Procedural2DMapGenerator_Source_Procedural2DMapGenerator_Public_Procedural2DMapGeneratorBPLibrary_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealTestProject_Plugins_Procedural2DMapGenerator_Source_Procedural2DMapGenerator_Public_Procedural2DMapGeneratorBPLibrary_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealTestProject_Plugins_Procedural2DMapGenerator_Source_Procedural2DMapGenerator_Public_Procedural2DMapGeneratorBPLibrary_h_43_PRIVATE_PROPERTY_OFFSET \
	UnrealTestProject_Plugins_Procedural2DMapGenerator_Source_Procedural2DMapGenerator_Public_Procedural2DMapGeneratorBPLibrary_h_43_SPARSE_DATA \
	UnrealTestProject_Plugins_Procedural2DMapGenerator_Source_Procedural2DMapGenerator_Public_Procedural2DMapGeneratorBPLibrary_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealTestProject_Plugins_Procedural2DMapGenerator_Source_Procedural2DMapGenerator_Public_Procedural2DMapGeneratorBPLibrary_h_43_INCLASS_NO_PURE_DECLS \
	UnrealTestProject_Plugins_Procedural2DMapGenerator_Source_Procedural2DMapGenerator_Public_Procedural2DMapGeneratorBPLibrary_h_43_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Procedural2DMapGeneratorBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROCEDURAL2DMAPGENERATOR_API UClass* StaticClass<class UProcedural2DMapGeneratorBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealTestProject_Plugins_Procedural2DMapGenerator_Source_Procedural2DMapGenerator_Public_Procedural2DMapGeneratorBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
