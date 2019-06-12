// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROCEDURAL2DMAPGENERATOR_Procedural2DMapGeneratorBPLibrary_generated_h
#error "Procedural2DMapGeneratorBPLibrary.generated.h already included, missing '#pragma once' in Procedural2DMapGeneratorBPLibrary.h"
#endif
#define PROCEDURAL2DMAPGENERATOR_Procedural2DMapGeneratorBPLibrary_generated_h

#define UnrealTestProject_Plugins_Procedural2DMapGenerator_Source_Procedural2DMapGenerator_Public_Procedural2DMapGeneratorBPLibrary_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execProcedural2DMapGeneratorSampleFunction) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Param); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UProcedural2DMapGeneratorBPLibrary::Procedural2DMapGeneratorSampleFunction(Z_Param_Param); \
		P_NATIVE_END; \
	}


#define UnrealTestProject_Plugins_Procedural2DMapGenerator_Source_Procedural2DMapGenerator_Public_Procedural2DMapGeneratorBPLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execProcedural2DMapGeneratorSampleFunction) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Param); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UProcedural2DMapGeneratorBPLibrary::Procedural2DMapGeneratorSampleFunction(Z_Param_Param); \
		P_NATIVE_END; \
	}


#define UnrealTestProject_Plugins_Procedural2DMapGenerator_Source_Procedural2DMapGenerator_Public_Procedural2DMapGeneratorBPLibrary_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProcedural2DMapGeneratorBPLibrary(); \
	friend struct Z_Construct_UClass_UProcedural2DMapGeneratorBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UProcedural2DMapGeneratorBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Procedural2DMapGenerator"), NO_API) \
	DECLARE_SERIALIZER(UProcedural2DMapGeneratorBPLibrary)


#define UnrealTestProject_Plugins_Procedural2DMapGenerator_Source_Procedural2DMapGenerator_Public_Procedural2DMapGeneratorBPLibrary_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUProcedural2DMapGeneratorBPLibrary(); \
	friend struct Z_Construct_UClass_UProcedural2DMapGeneratorBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UProcedural2DMapGeneratorBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Procedural2DMapGenerator"), NO_API) \
	DECLARE_SERIALIZER(UProcedural2DMapGeneratorBPLibrary)


#define UnrealTestProject_Plugins_Procedural2DMapGenerator_Source_Procedural2DMapGenerator_Public_Procedural2DMapGeneratorBPLibrary_h_28_STANDARD_CONSTRUCTORS \
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


#define UnrealTestProject_Plugins_Procedural2DMapGenerator_Source_Procedural2DMapGenerator_Public_Procedural2DMapGeneratorBPLibrary_h_28_ENHANCED_CONSTRUCTORS \
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


#define UnrealTestProject_Plugins_Procedural2DMapGenerator_Source_Procedural2DMapGenerator_Public_Procedural2DMapGeneratorBPLibrary_h_28_PRIVATE_PROPERTY_OFFSET
#define UnrealTestProject_Plugins_Procedural2DMapGenerator_Source_Procedural2DMapGenerator_Public_Procedural2DMapGeneratorBPLibrary_h_25_PROLOG
#define UnrealTestProject_Plugins_Procedural2DMapGenerator_Source_Procedural2DMapGenerator_Public_Procedural2DMapGeneratorBPLibrary_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealTestProject_Plugins_Procedural2DMapGenerator_Source_Procedural2DMapGenerator_Public_Procedural2DMapGeneratorBPLibrary_h_28_PRIVATE_PROPERTY_OFFSET \
	UnrealTestProject_Plugins_Procedural2DMapGenerator_Source_Procedural2DMapGenerator_Public_Procedural2DMapGeneratorBPLibrary_h_28_RPC_WRAPPERS \
	UnrealTestProject_Plugins_Procedural2DMapGenerator_Source_Procedural2DMapGenerator_Public_Procedural2DMapGeneratorBPLibrary_h_28_INCLASS \
	UnrealTestProject_Plugins_Procedural2DMapGenerator_Source_Procedural2DMapGenerator_Public_Procedural2DMapGeneratorBPLibrary_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealTestProject_Plugins_Procedural2DMapGenerator_Source_Procedural2DMapGenerator_Public_Procedural2DMapGeneratorBPLibrary_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealTestProject_Plugins_Procedural2DMapGenerator_Source_Procedural2DMapGenerator_Public_Procedural2DMapGeneratorBPLibrary_h_28_PRIVATE_PROPERTY_OFFSET \
	UnrealTestProject_Plugins_Procedural2DMapGenerator_Source_Procedural2DMapGenerator_Public_Procedural2DMapGeneratorBPLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealTestProject_Plugins_Procedural2DMapGenerator_Source_Procedural2DMapGenerator_Public_Procedural2DMapGeneratorBPLibrary_h_28_INCLASS_NO_PURE_DECLS \
	UnrealTestProject_Plugins_Procedural2DMapGenerator_Source_Procedural2DMapGenerator_Public_Procedural2DMapGeneratorBPLibrary_h_28_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Procedural2DMapGeneratorBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROCEDURAL2DMAPGENERATOR_API UClass* StaticClass<class UProcedural2DMapGeneratorBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealTestProject_Plugins_Procedural2DMapGenerator_Source_Procedural2DMapGenerator_Public_Procedural2DMapGeneratorBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
