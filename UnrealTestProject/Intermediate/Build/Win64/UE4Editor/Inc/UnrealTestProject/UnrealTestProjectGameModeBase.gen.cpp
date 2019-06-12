// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealTestProject/UnrealTestProjectGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealTestProjectGameModeBase() {}
// Cross Module References
	UNREALTESTPROJECT_API UClass* Z_Construct_UClass_AUnrealTestProjectGameModeBase_NoRegister();
	UNREALTESTPROJECT_API UClass* Z_Construct_UClass_AUnrealTestProjectGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UnrealTestProject();
// End Cross Module References
	void AUnrealTestProjectGameModeBase::StaticRegisterNativesAUnrealTestProjectGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AUnrealTestProjectGameModeBase_NoRegister()
	{
		return AUnrealTestProjectGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUnrealTestProjectGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnrealTestProjectGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealTestProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealTestProjectGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UnrealTestProjectGameModeBase.h" },
		{ "ModuleRelativePath", "UnrealTestProjectGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnrealTestProjectGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnrealTestProjectGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnrealTestProjectGameModeBase_Statics::ClassParams = {
		&AUnrealTestProjectGameModeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_AUnrealTestProjectGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AUnrealTestProjectGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnrealTestProjectGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnrealTestProjectGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnrealTestProjectGameModeBase, 3987754292);
	template<> UNREALTESTPROJECT_API UClass* StaticClass<AUnrealTestProjectGameModeBase>()
	{
		return AUnrealTestProjectGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnrealTestProjectGameModeBase(Z_Construct_UClass_AUnrealTestProjectGameModeBase, &AUnrealTestProjectGameModeBase::StaticClass, TEXT("/Script/UnrealTestProject"), TEXT("AUnrealTestProjectGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnrealTestProjectGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
