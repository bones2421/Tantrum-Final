// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tantrumn/TantrumnNavLinkProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTantrumnNavLinkProxy() {}
// Cross Module References
	TANTRUMN_API UClass* Z_Construct_UClass_ATantrumnNavLinkProxy_NoRegister();
	TANTRUMN_API UClass* Z_Construct_UClass_ATantrumnNavLinkProxy();
	AIMODULE_API UClass* Z_Construct_UClass_ANavLinkProxy();
	UPackage* Z_Construct_UPackage__Script_Tantrumn();
// End Cross Module References
	void ATantrumnNavLinkProxy::StaticRegisterNativesATantrumnNavLinkProxy()
	{
	}
	UClass* Z_Construct_UClass_ATantrumnNavLinkProxy_NoRegister()
	{
		return ATantrumnNavLinkProxy::StaticClass();
	}
	struct Z_Construct_UClass_ATantrumnNavLinkProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATantrumnNavLinkProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANavLinkProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_Tantrumn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumnNavLinkProxy_Statics::Class_MetaDataParams[] = {
		{ "AutoCollapseCategories", "SmartLink Actor" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "TantrumnNavLinkProxy.h" },
		{ "ModuleRelativePath", "TantrumnNavLinkProxy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATantrumnNavLinkProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATantrumnNavLinkProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATantrumnNavLinkProxy_Statics::ClassParams = {
		&ATantrumnNavLinkProxy::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATantrumnNavLinkProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumnNavLinkProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATantrumnNavLinkProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATantrumnNavLinkProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATantrumnNavLinkProxy, 3461530057);
	template<> TANTRUMN_API UClass* StaticClass<ATantrumnNavLinkProxy>()
	{
		return ATantrumnNavLinkProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATantrumnNavLinkProxy(Z_Construct_UClass_ATantrumnNavLinkProxy, &ATantrumnNavLinkProxy::StaticClass, TEXT("/Script/Tantrumn"), TEXT("ATantrumnNavLinkProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATantrumnNavLinkProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
