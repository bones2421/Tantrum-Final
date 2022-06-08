// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tantrumn/TantrumnGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTantrumnGameInstance() {}
// Cross Module References
	TANTRUMN_API UClass* Z_Construct_UClass_UTantrumnGameInstance_NoRegister();
	TANTRUMN_API UClass* Z_Construct_UClass_UTantrumnGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_Tantrumn();
	TANTRUMN_API UClass* Z_Construct_UClass_ATantrumnGameStateBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase_NoRegister();
	TANTRUMN_API UClass* Z_Construct_UClass_ATantrumnPlayerController_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TANTRUMN_API UClass* Z_Construct_UClass_UTantrumnGameWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTantrumnGameInstance::execOnGameStateSet)
	{
		P_GET_OBJECT(AGameStateBase,Z_Param_GameStateBase);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGameStateSet(Z_Param_GameStateBase);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTantrumnGameInstance::execRestartGame)
	{
		P_GET_OBJECT(ATantrumnPlayerController,Z_Param_TantrumnPlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RestartGame(Z_Param_TantrumnPlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTantrumnGameInstance::execOnRetrySelected)
	{
		P_GET_OBJECT(ATantrumnPlayerController,Z_Param_TantrumnPlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRetrySelected(Z_Param_TantrumnPlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTantrumnGameInstance::execGetGameState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ATantrumnGameStateBase**)Z_Param__Result=P_THIS->GetGameState();
		P_NATIVE_END;
	}
	void UTantrumnGameInstance::StaticRegisterNativesUTantrumnGameInstance()
	{
		UClass* Class = UTantrumnGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGameState", &UTantrumnGameInstance::execGetGameState },
			{ "OnGameStateSet", &UTantrumnGameInstance::execOnGameStateSet },
			{ "OnRetrySelected", &UTantrumnGameInstance::execOnRetrySelected },
			{ "RestartGame", &UTantrumnGameInstance::execRestartGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTantrumnGameInstance_GetGameState_Statics
	{
		struct TantrumnGameInstance_eventGetGameState_Parms
		{
			ATantrumnGameStateBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTantrumnGameInstance_GetGameState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TantrumnGameInstance_eventGetGameState_Parms, ReturnValue), Z_Construct_UClass_ATantrumnGameStateBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTantrumnGameInstance_GetGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTantrumnGameInstance_GetGameState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTantrumnGameInstance_GetGameState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TantrumnGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTantrumnGameInstance_GetGameState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTantrumnGameInstance, nullptr, "GetGameState", nullptr, nullptr, sizeof(TantrumnGameInstance_eventGetGameState_Parms), Z_Construct_UFunction_UTantrumnGameInstance_GetGameState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTantrumnGameInstance_GetGameState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTantrumnGameInstance_GetGameState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTantrumnGameInstance_GetGameState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTantrumnGameInstance_GetGameState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTantrumnGameInstance_GetGameState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTantrumnGameInstance_OnGameStateSet_Statics
	{
		struct TantrumnGameInstance_eventOnGameStateSet_Parms
		{
			AGameStateBase* GameStateBase;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameStateBase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTantrumnGameInstance_OnGameStateSet_Statics::NewProp_GameStateBase = { "GameStateBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TantrumnGameInstance_eventOnGameStateSet_Parms, GameStateBase), Z_Construct_UClass_AGameStateBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTantrumnGameInstance_OnGameStateSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTantrumnGameInstance_OnGameStateSet_Statics::NewProp_GameStateBase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTantrumnGameInstance_OnGameStateSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TantrumnGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTantrumnGameInstance_OnGameStateSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTantrumnGameInstance, nullptr, "OnGameStateSet", nullptr, nullptr, sizeof(TantrumnGameInstance_eventOnGameStateSet_Parms), Z_Construct_UFunction_UTantrumnGameInstance_OnGameStateSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTantrumnGameInstance_OnGameStateSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTantrumnGameInstance_OnGameStateSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTantrumnGameInstance_OnGameStateSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTantrumnGameInstance_OnGameStateSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTantrumnGameInstance_OnGameStateSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTantrumnGameInstance_OnRetrySelected_Statics
	{
		struct TantrumnGameInstance_eventOnRetrySelected_Parms
		{
			ATantrumnPlayerController* TantrumnPlayerController;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TantrumnPlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTantrumnGameInstance_OnRetrySelected_Statics::NewProp_TantrumnPlayerController = { "TantrumnPlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TantrumnGameInstance_eventOnRetrySelected_Parms, TantrumnPlayerController), Z_Construct_UClass_ATantrumnPlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTantrumnGameInstance_OnRetrySelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTantrumnGameInstance_OnRetrySelected_Statics::NewProp_TantrumnPlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTantrumnGameInstance_OnRetrySelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TantrumnGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTantrumnGameInstance_OnRetrySelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTantrumnGameInstance, nullptr, "OnRetrySelected", nullptr, nullptr, sizeof(TantrumnGameInstance_eventOnRetrySelected_Parms), Z_Construct_UFunction_UTantrumnGameInstance_OnRetrySelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTantrumnGameInstance_OnRetrySelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTantrumnGameInstance_OnRetrySelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTantrumnGameInstance_OnRetrySelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTantrumnGameInstance_OnRetrySelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTantrumnGameInstance_OnRetrySelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTantrumnGameInstance_RestartGame_Statics
	{
		struct TantrumnGameInstance_eventRestartGame_Parms
		{
			ATantrumnPlayerController* TantrumnPlayerController;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TantrumnPlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTantrumnGameInstance_RestartGame_Statics::NewProp_TantrumnPlayerController = { "TantrumnPlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TantrumnGameInstance_eventRestartGame_Parms, TantrumnPlayerController), Z_Construct_UClass_ATantrumnPlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTantrumnGameInstance_RestartGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTantrumnGameInstance_RestartGame_Statics::NewProp_TantrumnPlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTantrumnGameInstance_RestartGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TantrumnGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTantrumnGameInstance_RestartGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTantrumnGameInstance, nullptr, "RestartGame", nullptr, nullptr, sizeof(TantrumnGameInstance_eventRestartGame_Parms), Z_Construct_UFunction_UTantrumnGameInstance_RestartGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTantrumnGameInstance_RestartGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTantrumnGameInstance_RestartGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTantrumnGameInstance_RestartGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTantrumnGameInstance_RestartGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTantrumnGameInstance_RestartGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTantrumnGameInstance_NoRegister()
	{
		return UTantrumnGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UTantrumnGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GameWidgetClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameWidgets_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameWidgets_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameWidgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_GameWidgets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TantrumnGameStateBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TantrumnGameStateBase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTantrumnGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Tantrumn,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTantrumnGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTantrumnGameInstance_GetGameState, "GetGameState" }, // 3102193694
		{ &Z_Construct_UFunction_UTantrumnGameInstance_OnGameStateSet, "OnGameStateSet" }, // 2699688408
		{ &Z_Construct_UFunction_UTantrumnGameInstance_OnRetrySelected, "OnRetrySelected" }, // 3172625945
		{ &Z_Construct_UFunction_UTantrumnGameInstance_RestartGame, "RestartGame" }, // 1824814469
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTantrumnGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TantrumnGameInstance.h" },
		{ "ModuleRelativePath", "TantrumnGameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTantrumnGameInstance_Statics::NewProp_GameWidgetClass_MetaData[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "TantrumnGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTantrumnGameInstance_Statics::NewProp_GameWidgetClass = { "GameWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTantrumnGameInstance, GameWidgetClass), Z_Construct_UClass_UTantrumnGameWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UTantrumnGameInstance_Statics::NewProp_GameWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTantrumnGameInstance_Statics::NewProp_GameWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTantrumnGameInstance_Statics::NewProp_GameWidgets_ValueProp = { "GameWidgets", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UTantrumnGameWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTantrumnGameInstance_Statics::NewProp_GameWidgets_Key_KeyProp = { "GameWidgets_Key", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTantrumnGameInstance_Statics::NewProp_GameWidgets_MetaData[] = {
		{ "Comment", "// Exposed class to check the type of widget to display\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TantrumnGameInstance.h" },
		{ "ToolTip", "Exposed class to check the type of widget to display" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UTantrumnGameInstance_Statics::NewProp_GameWidgets = { "GameWidgets", nullptr, (EPropertyFlags)0x0040008000000008, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTantrumnGameInstance, GameWidgets), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTantrumnGameInstance_Statics::NewProp_GameWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTantrumnGameInstance_Statics::NewProp_GameWidgets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTantrumnGameInstance_Statics::NewProp_TantrumnGameStateBase_MetaData[] = {
		{ "ModuleRelativePath", "TantrumnGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTantrumnGameInstance_Statics::NewProp_TantrumnGameStateBase = { "TantrumnGameStateBase", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTantrumnGameInstance, TantrumnGameStateBase), Z_Construct_UClass_ATantrumnGameStateBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTantrumnGameInstance_Statics::NewProp_TantrumnGameStateBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTantrumnGameInstance_Statics::NewProp_TantrumnGameStateBase_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTantrumnGameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTantrumnGameInstance_Statics::NewProp_GameWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTantrumnGameInstance_Statics::NewProp_GameWidgets_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTantrumnGameInstance_Statics::NewProp_GameWidgets_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTantrumnGameInstance_Statics::NewProp_GameWidgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTantrumnGameInstance_Statics::NewProp_TantrumnGameStateBase,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTantrumnGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTantrumnGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTantrumnGameInstance_Statics::ClassParams = {
		&UTantrumnGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTantrumnGameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTantrumnGameInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UTantrumnGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTantrumnGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTantrumnGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTantrumnGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTantrumnGameInstance, 277750030);
	template<> TANTRUMN_API UClass* StaticClass<UTantrumnGameInstance>()
	{
		return UTantrumnGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTantrumnGameInstance(Z_Construct_UClass_UTantrumnGameInstance, &UTantrumnGameInstance::StaticClass, TEXT("/Script/Tantrumn"), TEXT("UTantrumnGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTantrumnGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
