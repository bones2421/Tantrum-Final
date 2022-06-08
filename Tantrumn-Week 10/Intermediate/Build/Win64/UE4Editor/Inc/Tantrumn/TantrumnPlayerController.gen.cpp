// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tantrumn/TantrumnPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTantrumnPlayerController() {}
// Cross Module References
	TANTRUMN_API UClass* Z_Construct_UClass_ATantrumnPlayerController_NoRegister();
	TANTRUMN_API UClass* Z_Construct_UClass_ATantrumnPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Tantrumn();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	TANTRUMN_API UClass* Z_Construct_UClass_ATantrumnGameStateBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATantrumnPlayerController::execServerRestartLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerRestartLevel_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATantrumnPlayerController::execClientReachedEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientReachedEnd_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATantrumnPlayerController::execClientRestartGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientRestartGame_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATantrumnPlayerController::execClientDisplayCountdown)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_GameCountdownDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientDisplayCountdown_Implementation(Z_Param_GameCountdownDuration);
		P_NATIVE_END;
	}
	static FName NAME_ATantrumnPlayerController_ClientDisplayCountdown = FName(TEXT("ClientDisplayCountdown"));
	void ATantrumnPlayerController::ClientDisplayCountdown(float GameCountdownDuration)
	{
		TantrumnPlayerController_eventClientDisplayCountdown_Parms Parms;
		Parms.GameCountdownDuration=GameCountdownDuration;
		ProcessEvent(FindFunctionChecked(NAME_ATantrumnPlayerController_ClientDisplayCountdown),&Parms);
	}
	static FName NAME_ATantrumnPlayerController_ClientReachedEnd = FName(TEXT("ClientReachedEnd"));
	void ATantrumnPlayerController::ClientReachedEnd()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATantrumnPlayerController_ClientReachedEnd),NULL);
	}
	static FName NAME_ATantrumnPlayerController_ClientRestartGame = FName(TEXT("ClientRestartGame"));
	void ATantrumnPlayerController::ClientRestartGame()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATantrumnPlayerController_ClientRestartGame),NULL);
	}
	static FName NAME_ATantrumnPlayerController_ServerRestartLevel = FName(TEXT("ServerRestartLevel"));
	void ATantrumnPlayerController::ServerRestartLevel()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATantrumnPlayerController_ServerRestartLevel),NULL);
	}
	void ATantrumnPlayerController::StaticRegisterNativesATantrumnPlayerController()
	{
		UClass* Class = ATantrumnPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientDisplayCountdown", &ATantrumnPlayerController::execClientDisplayCountdown },
			{ "ClientReachedEnd", &ATantrumnPlayerController::execClientReachedEnd },
			{ "ClientRestartGame", &ATantrumnPlayerController::execClientRestartGame },
			{ "ServerRestartLevel", &ATantrumnPlayerController::execServerRestartLevel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATantrumnPlayerController_ClientDisplayCountdown_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GameCountdownDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATantrumnPlayerController_ClientDisplayCountdown_Statics::NewProp_GameCountdownDuration = { "GameCountdownDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TantrumnPlayerController_eventClientDisplayCountdown_Parms, GameCountdownDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATantrumnPlayerController_ClientDisplayCountdown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATantrumnPlayerController_ClientDisplayCountdown_Statics::NewProp_GameCountdownDuration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATantrumnPlayerController_ClientDisplayCountdown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TantrumnPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATantrumnPlayerController_ClientDisplayCountdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATantrumnPlayerController, nullptr, "ClientDisplayCountdown", nullptr, nullptr, sizeof(TantrumnPlayerController_eventClientDisplayCountdown_Parms), Z_Construct_UFunction_ATantrumnPlayerController_ClientDisplayCountdown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnPlayerController_ClientDisplayCountdown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATantrumnPlayerController_ClientDisplayCountdown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnPlayerController_ClientDisplayCountdown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATantrumnPlayerController_ClientDisplayCountdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATantrumnPlayerController_ClientDisplayCountdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATantrumnPlayerController_ClientReachedEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATantrumnPlayerController_ClientReachedEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TantrumnPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATantrumnPlayerController_ClientReachedEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATantrumnPlayerController, nullptr, "ClientReachedEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATantrumnPlayerController_ClientReachedEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnPlayerController_ClientReachedEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATantrumnPlayerController_ClientReachedEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATantrumnPlayerController_ClientReachedEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATantrumnPlayerController_ClientRestartGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATantrumnPlayerController_ClientRestartGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TantrumnPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATantrumnPlayerController_ClientRestartGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATantrumnPlayerController, nullptr, "ClientRestartGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATantrumnPlayerController_ClientRestartGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnPlayerController_ClientRestartGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATantrumnPlayerController_ClientRestartGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATantrumnPlayerController_ClientRestartGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATantrumnPlayerController_ServerRestartLevel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATantrumnPlayerController_ServerRestartLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TantrumnPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATantrumnPlayerController_ServerRestartLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATantrumnPlayerController, nullptr, "ServerRestartLevel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATantrumnPlayerController_ServerRestartLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnPlayerController_ServerRestartLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATantrumnPlayerController_ServerRestartLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATantrumnPlayerController_ServerRestartLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATantrumnPlayerController_NoRegister()
	{
		return ATantrumnPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ATantrumnPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HUDClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HUDWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookRightRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookRightRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JumpSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TantrumnGameState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TantrumnGameState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlickThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FlickThreshold;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATantrumnPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Tantrumn,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATantrumnPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATantrumnPlayerController_ClientDisplayCountdown, "ClientDisplayCountdown" }, // 2901599982
		{ &Z_Construct_UFunction_ATantrumnPlayerController_ClientReachedEnd, "ClientReachedEnd" }, // 3118388526
		{ &Z_Construct_UFunction_ATantrumnPlayerController_ClientRestartGame, "ClientRestartGame" }, // 2567294391
		{ &Z_Construct_UFunction_ATantrumnPlayerController_ServerRestartLevel, "ServerRestartLevel" }, // 3392246481
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumnPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TantrumnPlayerController.h" },
		{ "ModuleRelativePath", "TantrumnPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumnPlayerController_Statics::NewProp_HUDClass_MetaData[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "TantrumnPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATantrumnPlayerController_Statics::NewProp_HUDClass = { "HUDClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATantrumnPlayerController, HUDClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATantrumnPlayerController_Statics::NewProp_HUDClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumnPlayerController_Statics::NewProp_HUDClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumnPlayerController_Statics::NewProp_HUDWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TantrumnPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATantrumnPlayerController_Statics::NewProp_HUDWidget = { "HUDWidget", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATantrumnPlayerController, HUDWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATantrumnPlayerController_Statics::NewProp_HUDWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumnPlayerController_Statics::NewProp_HUDWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumnPlayerController_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Look" },
		{ "Comment", "/** Base lookup rate, in deg/sec. Other scaling may affect final lookup rate. */" },
		{ "ModuleRelativePath", "TantrumnPlayerController.h" },
		{ "ToolTip", "Base lookup rate, in deg/sec. Other scaling may affect final lookup rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATantrumnPlayerController_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATantrumnPlayerController, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_ATantrumnPlayerController_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumnPlayerController_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumnPlayerController_Statics::NewProp_BaseLookRightRate_MetaData[] = {
		{ "Category", "Look" },
		{ "Comment", "/** Base lookright rate, in deg/sec. Other scaling may affect final lookup rate. */" },
		{ "ModuleRelativePath", "TantrumnPlayerController.h" },
		{ "ToolTip", "Base lookright rate, in deg/sec. Other scaling may affect final lookup rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATantrumnPlayerController_Statics::NewProp_BaseLookRightRate = { "BaseLookRightRate", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATantrumnPlayerController, BaseLookRightRate), METADATA_PARAMS(Z_Construct_UClass_ATantrumnPlayerController_Statics::NewProp_BaseLookRightRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumnPlayerController_Statics::NewProp_BaseLookRightRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumnPlayerController_Statics::NewProp_JumpSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/**Sound Cue for Jumping Sound. */" },
		{ "ModuleRelativePath", "TantrumnPlayerController.h" },
		{ "ToolTip", "Sound Cue for Jumping Sound." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATantrumnPlayerController_Statics::NewProp_JumpSound = { "JumpSound", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATantrumnPlayerController, JumpSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATantrumnPlayerController_Statics::NewProp_JumpSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumnPlayerController_Statics::NewProp_JumpSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumnPlayerController_Statics::NewProp_TantrumnGameState_MetaData[] = {
		{ "ModuleRelativePath", "TantrumnPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATantrumnPlayerController_Statics::NewProp_TantrumnGameState = { "TantrumnGameState", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATantrumnPlayerController, TantrumnGameState), Z_Construct_UClass_ATantrumnGameStateBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATantrumnPlayerController_Statics::NewProp_TantrumnGameState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumnPlayerController_Statics::NewProp_TantrumnGameState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumnPlayerController_Statics::NewProp_FlickThreshold_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "TantrumnPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATantrumnPlayerController_Statics::NewProp_FlickThreshold = { "FlickThreshold", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATantrumnPlayerController, FlickThreshold), METADATA_PARAMS(Z_Construct_UClass_ATantrumnPlayerController_Statics::NewProp_FlickThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumnPlayerController_Statics::NewProp_FlickThreshold_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATantrumnPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumnPlayerController_Statics::NewProp_HUDClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumnPlayerController_Statics::NewProp_HUDWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumnPlayerController_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumnPlayerController_Statics::NewProp_BaseLookRightRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumnPlayerController_Statics::NewProp_JumpSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumnPlayerController_Statics::NewProp_TantrumnGameState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumnPlayerController_Statics::NewProp_FlickThreshold,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATantrumnPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATantrumnPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATantrumnPlayerController_Statics::ClassParams = {
		&ATantrumnPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATantrumnPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumnPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATantrumnPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumnPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATantrumnPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATantrumnPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATantrumnPlayerController, 838586028);
	template<> TANTRUMN_API UClass* StaticClass<ATantrumnPlayerController>()
	{
		return ATantrumnPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATantrumnPlayerController(Z_Construct_UClass_ATantrumnPlayerController, &ATantrumnPlayerController::StaticClass, TEXT("/Script/Tantrumn"), TEXT("ATantrumnPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATantrumnPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
