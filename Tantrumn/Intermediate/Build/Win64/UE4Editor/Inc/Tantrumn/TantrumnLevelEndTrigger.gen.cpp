// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tantrumn/TantrumnLevelEndTrigger.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTantrumnLevelEndTrigger() {}
// Cross Module References
	TANTRUMN_API UClass* Z_Construct_UClass_ATantrumnLevelEndTrigger_NoRegister();
	TANTRUMN_API UClass* Z_Construct_UClass_ATantrumnLevelEndTrigger();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerVolume();
	UPackage* Z_Construct_UPackage__Script_Tantrumn();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATantrumnLevelEndTrigger::execOnOverlapBegin)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_OverlappedActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	void ATantrumnLevelEndTrigger::StaticRegisterNativesATantrumnLevelEndTrigger()
	{
		UClass* Class = ATantrumnLevelEndTrigger::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapBegin", &ATantrumnLevelEndTrigger::execOnOverlapBegin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATantrumnLevelEndTrigger_OnOverlapBegin_Statics
	{
		struct TantrumnLevelEndTrigger_eventOnOverlapBegin_Parms
		{
			AActor* OverlappedActor;
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATantrumnLevelEndTrigger_OnOverlapBegin_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TantrumnLevelEndTrigger_eventOnOverlapBegin_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATantrumnLevelEndTrigger_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TantrumnLevelEndTrigger_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATantrumnLevelEndTrigger_OnOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATantrumnLevelEndTrigger_OnOverlapBegin_Statics::NewProp_OverlappedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATantrumnLevelEndTrigger_OnOverlapBegin_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATantrumnLevelEndTrigger_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Custom Overlap function to override the Actor BeginOverlap version. \n" },
		{ "ModuleRelativePath", "TantrumnLevelEndTrigger.h" },
		{ "ToolTip", "Custom Overlap function to override the Actor BeginOverlap version." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATantrumnLevelEndTrigger_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATantrumnLevelEndTrigger, nullptr, "OnOverlapBegin", nullptr, nullptr, sizeof(TantrumnLevelEndTrigger_eventOnOverlapBegin_Parms), Z_Construct_UFunction_ATantrumnLevelEndTrigger_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnLevelEndTrigger_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATantrumnLevelEndTrigger_OnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnLevelEndTrigger_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATantrumnLevelEndTrigger_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATantrumnLevelEndTrigger_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATantrumnLevelEndTrigger_NoRegister()
	{
		return ATantrumnLevelEndTrigger::StaticClass();
	}
	struct Z_Construct_UClass_ATantrumnLevelEndTrigger_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATantrumnLevelEndTrigger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_Tantrumn,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATantrumnLevelEndTrigger_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATantrumnLevelEndTrigger_OnOverlapBegin, "OnOverlapBegin" }, // 3959973362
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumnLevelEndTrigger_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "TantrumnLevelEndTrigger.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "TantrumnLevelEndTrigger.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATantrumnLevelEndTrigger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATantrumnLevelEndTrigger>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATantrumnLevelEndTrigger_Statics::ClassParams = {
		&ATantrumnLevelEndTrigger::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATantrumnLevelEndTrigger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumnLevelEndTrigger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATantrumnLevelEndTrigger()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATantrumnLevelEndTrigger_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATantrumnLevelEndTrigger, 3336926945);
	template<> TANTRUMN_API UClass* StaticClass<ATantrumnLevelEndTrigger>()
	{
		return ATantrumnLevelEndTrigger::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATantrumnLevelEndTrigger(Z_Construct_UClass_ATantrumnLevelEndTrigger, &ATantrumnLevelEndTrigger::StaticClass, TEXT("/Script/Tantrumn"), TEXT("ATantrumnLevelEndTrigger"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATantrumnLevelEndTrigger);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
