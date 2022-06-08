// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tantrumn/TantrumnGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTantrumnGameModeBase() {}
// Cross Module References
	TANTRUMN_API UClass* Z_Construct_UClass_ATantrumnGameModeBase_NoRegister();
	TANTRUMN_API UClass* Z_Construct_UClass_ATantrumnGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Tantrumn();
// End Cross Module References
	DEFINE_FUNCTION(ATantrumnGameModeBase::execSetNumExpectedPlayers)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InNumExpectedPlayers);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNumExpectedPlayers(Z_Param_InNumExpectedPlayers);
		P_NATIVE_END;
	}
	void ATantrumnGameModeBase::StaticRegisterNativesATantrumnGameModeBase()
	{
		UClass* Class = ATantrumnGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetNumExpectedPlayers", &ATantrumnGameModeBase::execSetNumExpectedPlayers },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATantrumnGameModeBase_SetNumExpectedPlayers_Statics
	{
		struct TantrumnGameModeBase_eventSetNumExpectedPlayers_Parms
		{
			uint8 InNumExpectedPlayers;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InNumExpectedPlayers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATantrumnGameModeBase_SetNumExpectedPlayers_Statics::NewProp_InNumExpectedPlayers = { "InNumExpectedPlayers", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TantrumnGameModeBase_eventSetNumExpectedPlayers_Parms, InNumExpectedPlayers), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATantrumnGameModeBase_SetNumExpectedPlayers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATantrumnGameModeBase_SetNumExpectedPlayers_Statics::NewProp_InNumExpectedPlayers,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATantrumnGameModeBase_SetNumExpectedPlayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game Details" },
		{ "ModuleRelativePath", "TantrumnGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATantrumnGameModeBase_SetNumExpectedPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATantrumnGameModeBase, nullptr, "SetNumExpectedPlayers", nullptr, nullptr, sizeof(TantrumnGameModeBase_eventSetNumExpectedPlayers_Parms), Z_Construct_UFunction_ATantrumnGameModeBase_SetNumExpectedPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnGameModeBase_SetNumExpectedPlayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATantrumnGameModeBase_SetNumExpectedPlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnGameModeBase_SetNumExpectedPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATantrumnGameModeBase_SetNumExpectedPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATantrumnGameModeBase_SetNumExpectedPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATantrumnGameModeBase_NoRegister()
	{
		return ATantrumnGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATantrumnGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameCountdownDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GameCountdownDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumExpectedPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NumExpectedPlayers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATantrumnGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Tantrumn,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATantrumnGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATantrumnGameModeBase_SetNumExpectedPlayers, "SetNumExpectedPlayers" }, // 92895327
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumnGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TantrumnGameModeBase.h" },
		{ "ModuleRelativePath", "TantrumnGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumnGameModeBase_Statics::NewProp_GameCountdownDuration_MetaData[] = {
		{ "Category", "Game Details" },
		{ "Comment", "// Countdown before gameplay state begins. Exposed so we can easily change this in BP editor. \n" },
		{ "ModuleRelativePath", "TantrumnGameModeBase.h" },
		{ "ToolTip", "Countdown before gameplay state begins. Exposed so we can easily change this in BP editor." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATantrumnGameModeBase_Statics::NewProp_GameCountdownDuration = { "GameCountdownDuration", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATantrumnGameModeBase, GameCountdownDuration), METADATA_PARAMS(Z_Construct_UClass_ATantrumnGameModeBase_Statics::NewProp_GameCountdownDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumnGameModeBase_Statics::NewProp_GameCountdownDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumnGameModeBase_Statics::NewProp_NumExpectedPlayers_MetaData[] = {
		{ "Category", "Game Details" },
		{ "ModuleRelativePath", "TantrumnGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATantrumnGameModeBase_Statics::NewProp_NumExpectedPlayers = { "NumExpectedPlayers", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATantrumnGameModeBase, NumExpectedPlayers), nullptr, METADATA_PARAMS(Z_Construct_UClass_ATantrumnGameModeBase_Statics::NewProp_NumExpectedPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumnGameModeBase_Statics::NewProp_NumExpectedPlayers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATantrumnGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumnGameModeBase_Statics::NewProp_GameCountdownDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumnGameModeBase_Statics::NewProp_NumExpectedPlayers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATantrumnGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATantrumnGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATantrumnGameModeBase_Statics::ClassParams = {
		&ATantrumnGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATantrumnGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumnGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATantrumnGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumnGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATantrumnGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATantrumnGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATantrumnGameModeBase, 4238961259);
	template<> TANTRUMN_API UClass* StaticClass<ATantrumnGameModeBase>()
	{
		return ATantrumnGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATantrumnGameModeBase(Z_Construct_UClass_ATantrumnGameModeBase, &ATantrumnGameModeBase::StaticClass, TEXT("/Script/Tantrumn"), TEXT("ATantrumnGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATantrumnGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
