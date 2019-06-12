// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
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
	PROCEDURAL2DMAPGENERATOR_API UClass* Z_Construct_UClass_UProcedural2DMapGeneratorBPLibrary_NoRegister();
	PROCEDURAL2DMAPGENERATOR_API UClass* Z_Construct_UClass_UProcedural2DMapGeneratorBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Procedural2DMapGenerator();
	PROCEDURAL2DMAPGENERATOR_API UFunction* Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorSampleFunction();
// End Cross Module References
	void UProcedural2DMapGeneratorBPLibrary::StaticRegisterNativesUProcedural2DMapGeneratorBPLibrary()
	{
		UClass* Class = UProcedural2DMapGeneratorBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Procedural2DMapGeneratorSampleFunction", &UProcedural2DMapGeneratorBPLibrary::execProcedural2DMapGeneratorSampleFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorSampleFunction_Statics
	{
		struct Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorSampleFunction_Parms
		{
			float Param;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Param;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorSampleFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorSampleFunction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorSampleFunction_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorSampleFunction_Parms, Param), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorSampleFunction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorSampleFunction_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorSampleFunction_Statics::NewProp_Param,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorSampleFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Procedural2DMapGeneratorTesting" },
		{ "DisplayName", "Execute Sample function" },
		{ "Keywords", "Procedural2DMapGenerator sample test testing" },
		{ "ModuleRelativePath", "Public/Procedural2DMapGeneratorBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorSampleFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProcedural2DMapGeneratorBPLibrary, nullptr, "Procedural2DMapGeneratorSampleFunction", sizeof(Procedural2DMapGeneratorBPLibrary_eventProcedural2DMapGeneratorSampleFunction_Parms), Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorSampleFunction_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorSampleFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorSampleFunction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorSampleFunction_Statics::Function_MetaDataParams)) };
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
		{ &Z_Construct_UFunction_UProcedural2DMapGeneratorBPLibrary_Procedural2DMapGeneratorSampleFunction, "Procedural2DMapGeneratorSampleFunction" }, // 3551300286
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProcedural2DMapGeneratorBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Procedural2DMapGeneratorBPLibrary.h" },
		{ "ModuleRelativePath", "Public/Procedural2DMapGeneratorBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
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
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UProcedural2DMapGeneratorBPLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UProcedural2DMapGeneratorBPLibrary_Statics::Class_MetaDataParams))
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
	IMPLEMENT_CLASS(UProcedural2DMapGeneratorBPLibrary, 3657372099);
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
