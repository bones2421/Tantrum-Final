// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tantrumn/TantrumnAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTantrumnAIController() {}
// Cross Module References
	TANTRUMN_API UClass* Z_Construct_UClass_ATantrumnAIController_NoRegister();
	TANTRUMN_API UClass* Z_Construct_UClass_ATantrumnAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_Tantrumn();
// End Cross Module References
	void ATantrumnAIController::StaticRegisterNativesATantrumnAIController()
	{
	}
	UClass* Z_Construct_UClass_ATantrumnAIController_NoRegister()
	{
		return ATantrumnAIController::StaticClass();
	}
	struct Z_Construct_UClass_ATantrumnAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATantrumnAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_Tantrumn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumnAIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TantrumnAIController.h" },
		{ "ModuleRelativePath", "TantrumnAIController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATantrumnAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATantrumnAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATantrumnAIController_Statics::ClassParams = {
		&ATantrumnAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATantrumnAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumnAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATantrumnAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATantrumnAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATantrumnAIController, 3696802141);
	template<> TANTRUMN_API UClass* StaticClass<ATantrumnAIController>()
	{
		return ATantrumnAIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATantrumnAIController(Z_Construct_UClass_ATantrumnAIController, &ATantrumnAIController::StaticClass, TEXT("/Script/Tantrumn"), TEXT("ATantrumnAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATantrumnAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
