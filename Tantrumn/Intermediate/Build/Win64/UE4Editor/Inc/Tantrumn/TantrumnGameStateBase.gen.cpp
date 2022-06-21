// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tantrumn/TantrumnGameStateBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTantrumnGameStateBase() {}
// Cross Module References
	TANTRUMN_API UEnum* Z_Construct_UEnum_Tantrumn_EGameState();
	UPackage* Z_Construct_UPackage__Script_Tantrumn();
	TANTRUMN_API UScriptStruct* Z_Construct_UScriptStruct_FGameResult();
	TANTRUMN_API UClass* Z_Construct_UClass_ATantrumnGameStateBase_NoRegister();
	TANTRUMN_API UClass* Z_Construct_UClass_ATantrumnGameStateBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
// End Cross Module References
	static UEnum* EGameState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Tantrumn_EGameState, Z_Construct_UPackage__Script_Tantrumn(), TEXT("EGameState"));
		}
		return Singleton;
	}
	template<> TANTRUMN_API UEnum* StaticEnum<EGameState>()
	{
		return EGameState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameState(EGameState_StaticEnum, TEXT("/Script/Tantrumn"), TEXT("EGameState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Tantrumn_EGameState_Hash() { return 3009294989U; }
	UEnum* Z_Construct_UEnum_Tantrumn_EGameState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Tantrumn();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameState"), 0, Get_Z_Construct_UEnum_Tantrumn_EGameState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameState::None", (int64)EGameState::None },
				{ "EGameState::Waiting", (int64)EGameState::Waiting },
				{ "EGameState::Playing", (int64)EGameState::Playing },
				{ "EGameState::Paused", (int64)EGameState::Paused },
				{ "EGameState::GameOver", (int64)EGameState::GameOver },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "// Enum to track the current state of the game \n" },
				{ "GameOver.DisplayName", "GameOver" },
				{ "GameOver.Name", "EGameState::GameOver" },
				{ "ModuleRelativePath", "TantrumnGameStateBase.h" },
				{ "None.DisplayName", "None" },
				{ "None.Name", "EGameState::None" },
				{ "Paused.DisplayName", "Paused" },
				{ "Paused.Name", "EGameState::Paused" },
				{ "Playing.DisplayName", "Playing" },
				{ "Playing.Name", "EGameState::Playing" },
				{ "ToolTip", "Enum to track the current state of the game" },
				{ "Waiting.DisplayName", "Waiting" },
				{ "Waiting.Name", "EGameState::Waiting" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Tantrumn,
				nullptr,
				"EGameState",
				"EGameState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FGameResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TANTRUMN_API uint32 Get_Z_Construct_UScriptStruct_FGameResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameResult, Z_Construct_UPackage__Script_Tantrumn(), TEXT("GameResult"), sizeof(FGameResult), Get_Z_Construct_UScriptStruct_FGameResult_Hash());
	}
	return Singleton;
}
template<> TANTRUMN_API UScriptStruct* StaticStruct<FGameResult>()
{
	return FGameResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameResult(FGameResult::StaticStruct, TEXT("/Script/Tantrumn"), TEXT("GameResult"), false, nullptr, nullptr);
static struct FScriptStruct_Tantrumn_StaticRegisterNativesFGameResult
{
	FScriptStruct_Tantrumn_StaticRegisterNativesFGameResult()
	{
		UScriptStruct::DeferCppStructOps<FGameResult>(FName(TEXT("GameResult")));
	}
} ScriptStruct_Tantrumn_StaticRegisterNativesFGameResult;
	struct Z_Construct_UScriptStruct_FGameResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameResult_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "TantrumnGameStateBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameResult_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "TantrumnGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameResult_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameResult, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameResult_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameResult_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameResult_Statics::NewProp_Time_MetaData[] = {
		{ "ModuleRelativePath", "TantrumnGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameResult_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameResult, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameResult_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameResult_Statics::NewProp_Time_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameResult_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameResult_Statics::NewProp_Time,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Tantrumn,
		nullptr,
		&NewStructOps,
		"GameResult",
		sizeof(FGameResult),
		alignof(FGameResult),
		Z_Construct_UScriptStruct_FGameResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Tantrumn();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameResult"), sizeof(FGameResult), Get_Z_Construct_UScriptStruct_FGameResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameResult_Hash() { return 2983638117U; }
	DEFINE_FUNCTION(ATantrumnGameStateBase::execOnRep_GameState)
	{
		P_GET_ENUM_REF(EGameState,Z_Param_Out_OldGameState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_GameState((EGameState&)(Z_Param_Out_OldGameState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATantrumnGameStateBase::execClearResults)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearResults();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATantrumnGameStateBase::execIsPlaying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlaying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATantrumnGameStateBase::execGetGameState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGameState*)Z_Param__Result=P_THIS->GetGameState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATantrumnGameStateBase::execSetGameState)
	{
		P_GET_ENUM(EGameState,Z_Param_InGameState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGameState(EGameState(Z_Param_InGameState));
		P_NATIVE_END;
	}
	void ATantrumnGameStateBase::StaticRegisterNativesATantrumnGameStateBase()
	{
		UClass* Class = ATantrumnGameStateBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearResults", &ATantrumnGameStateBase::execClearResults },
			{ "GetGameState", &ATantrumnGameStateBase::execGetGameState },
			{ "IsPlaying", &ATantrumnGameStateBase::execIsPlaying },
			{ "OnRep_GameState", &ATantrumnGameStateBase::execOnRep_GameState },
			{ "SetGameState", &ATantrumnGameStateBase::execSetGameState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATantrumnGameStateBase_ClearResults_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATantrumnGameStateBase_ClearResults_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TantrumnGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATantrumnGameStateBase_ClearResults_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATantrumnGameStateBase, nullptr, "ClearResults", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATantrumnGameStateBase_ClearResults_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnGameStateBase_ClearResults_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATantrumnGameStateBase_ClearResults()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATantrumnGameStateBase_ClearResults_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATantrumnGameStateBase_GetGameState_Statics
	{
		struct TantrumnGameStateBase_eventGetGameState_Parms
		{
			EGameState ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATantrumnGameStateBase_GetGameState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATantrumnGameStateBase_GetGameState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TantrumnGameStateBase_eventGetGameState_Parms, ReturnValue), Z_Construct_UEnum_Tantrumn_EGameState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATantrumnGameStateBase_GetGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATantrumnGameStateBase_GetGameState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATantrumnGameStateBase_GetGameState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATantrumnGameStateBase_GetGameState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TantrumnGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATantrumnGameStateBase_GetGameState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATantrumnGameStateBase, nullptr, "GetGameState", nullptr, nullptr, sizeof(TantrumnGameStateBase_eventGetGameState_Parms), Z_Construct_UFunction_ATantrumnGameStateBase_GetGameState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnGameStateBase_GetGameState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATantrumnGameStateBase_GetGameState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnGameStateBase_GetGameState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATantrumnGameStateBase_GetGameState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATantrumnGameStateBase_GetGameState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATantrumnGameStateBase_IsPlaying_Statics
	{
		struct TantrumnGameStateBase_eventIsPlaying_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATantrumnGameStateBase_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TantrumnGameStateBase_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATantrumnGameStateBase_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TantrumnGameStateBase_eventIsPlaying_Parms), &Z_Construct_UFunction_ATantrumnGameStateBase_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATantrumnGameStateBase_IsPlaying_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATantrumnGameStateBase_IsPlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATantrumnGameStateBase_IsPlaying_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TantrumnGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATantrumnGameStateBase_IsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATantrumnGameStateBase, nullptr, "IsPlaying", nullptr, nullptr, sizeof(TantrumnGameStateBase_eventIsPlaying_Parms), Z_Construct_UFunction_ATantrumnGameStateBase_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnGameStateBase_IsPlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATantrumnGameStateBase_IsPlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnGameStateBase_IsPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATantrumnGameStateBase_IsPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATantrumnGameStateBase_IsPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATantrumnGameStateBase_OnRep_GameState_Statics
	{
		struct TantrumnGameStateBase_eventOnRep_GameState_Parms
		{
			EGameState OldGameState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldGameState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldGameState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldGameState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATantrumnGameStateBase_OnRep_GameState_Statics::NewProp_OldGameState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATantrumnGameStateBase_OnRep_GameState_Statics::NewProp_OldGameState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATantrumnGameStateBase_OnRep_GameState_Statics::NewProp_OldGameState = { "OldGameState", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TantrumnGameStateBase_eventOnRep_GameState_Parms, OldGameState), Z_Construct_UEnum_Tantrumn_EGameState, METADATA_PARAMS(Z_Construct_UFunction_ATantrumnGameStateBase_OnRep_GameState_Statics::NewProp_OldGameState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnGameStateBase_OnRep_GameState_Statics::NewProp_OldGameState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATantrumnGameStateBase_OnRep_GameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATantrumnGameStateBase_OnRep_GameState_Statics::NewProp_OldGameState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATantrumnGameStateBase_OnRep_GameState_Statics::NewProp_OldGameState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATantrumnGameStateBase_OnRep_GameState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TantrumnGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATantrumnGameStateBase_OnRep_GameState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATantrumnGameStateBase, nullptr, "OnRep_GameState", nullptr, nullptr, sizeof(TantrumnGameStateBase_eventOnRep_GameState_Parms), Z_Construct_UFunction_ATantrumnGameStateBase_OnRep_GameState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnGameStateBase_OnRep_GameState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATantrumnGameStateBase_OnRep_GameState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnGameStateBase_OnRep_GameState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATantrumnGameStateBase_OnRep_GameState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATantrumnGameStateBase_OnRep_GameState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATantrumnGameStateBase_SetGameState_Statics
	{
		struct TantrumnGameStateBase_eventSetGameState_Parms
		{
			EGameState InGameState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InGameState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InGameState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATantrumnGameStateBase_SetGameState_Statics::NewProp_InGameState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATantrumnGameStateBase_SetGameState_Statics::NewProp_InGameState = { "InGameState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TantrumnGameStateBase_eventSetGameState_Parms, InGameState), Z_Construct_UEnum_Tantrumn_EGameState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATantrumnGameStateBase_SetGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATantrumnGameStateBase_SetGameState_Statics::NewProp_InGameState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATantrumnGameStateBase_SetGameState_Statics::NewProp_InGameState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATantrumnGameStateBase_SetGameState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TantrumnGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATantrumnGameStateBase_SetGameState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATantrumnGameStateBase, nullptr, "SetGameState", nullptr, nullptr, sizeof(TantrumnGameStateBase_eventSetGameState_Parms), Z_Construct_UFunction_ATantrumnGameStateBase_SetGameState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnGameStateBase_SetGameState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATantrumnGameStateBase_SetGameState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnGameStateBase_SetGameState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATantrumnGameStateBase_SetGameState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATantrumnGameStateBase_SetGameState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATantrumnGameStateBase_NoRegister()
	{
		return ATantrumnGameStateBase::StaticClass();
	}
	struct Z_Construct_UClass_ATantrumnGameStateBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GameState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GameState;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Results_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Results_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Results;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATantrumnGameStateBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Tantrumn,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATantrumnGameStateBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATantrumnGameStateBase_ClearResults, "ClearResults" }, // 633080985
		{ &Z_Construct_UFunction_ATantrumnGameStateBase_GetGameState, "GetGameState" }, // 1215009171
		{ &Z_Construct_UFunction_ATantrumnGameStateBase_IsPlaying, "IsPlaying" }, // 299932787
		{ &Z_Construct_UFunction_ATantrumnGameStateBase_OnRep_GameState, "OnRep_GameState" }, // 4276688674
		{ &Z_Construct_UFunction_ATantrumnGameStateBase_SetGameState, "SetGameState" }, // 670237395
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumnGameStateBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TantrumnGameStateBase.h" },
		{ "ModuleRelativePath", "TantrumnGameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATantrumnGameStateBase_Statics::NewProp_GameState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumnGameStateBase_Statics::NewProp_GameState_MetaData[] = {
		{ "Category", "States" },
		{ "ModuleRelativePath", "TantrumnGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATantrumnGameStateBase_Statics::NewProp_GameState = { "GameState", "OnRep_GameState", (EPropertyFlags)0x0020080100020021, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATantrumnGameStateBase, GameState), Z_Construct_UEnum_Tantrumn_EGameState, METADATA_PARAMS(Z_Construct_UClass_ATantrumnGameStateBase_Statics::NewProp_GameState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumnGameStateBase_Statics::NewProp_GameState_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATantrumnGameStateBase_Statics::NewProp_Results_Inner = { "Results", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumnGameStateBase_Statics::NewProp_Results_MetaData[] = {
		{ "Category", "States" },
		{ "ModuleRelativePath", "TantrumnGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATantrumnGameStateBase_Statics::NewProp_Results = { "Results", nullptr, (EPropertyFlags)0x0020080000020021, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATantrumnGameStateBase, Results), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATantrumnGameStateBase_Statics::NewProp_Results_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumnGameStateBase_Statics::NewProp_Results_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATantrumnGameStateBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumnGameStateBase_Statics::NewProp_GameState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumnGameStateBase_Statics::NewProp_GameState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumnGameStateBase_Statics::NewProp_Results_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumnGameStateBase_Statics::NewProp_Results,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATantrumnGameStateBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATantrumnGameStateBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATantrumnGameStateBase_Statics::ClassParams = {
		&ATantrumnGameStateBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATantrumnGameStateBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumnGameStateBase_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATantrumnGameStateBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumnGameStateBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATantrumnGameStateBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATantrumnGameStateBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATantrumnGameStateBase, 1093466702);
	template<> TANTRUMN_API UClass* StaticClass<ATantrumnGameStateBase>()
	{
		return ATantrumnGameStateBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATantrumnGameStateBase(Z_Construct_UClass_ATantrumnGameStateBase, &ATantrumnGameStateBase::StaticClass, TEXT("/Script/Tantrumn"), TEXT("ATantrumnGameStateBase"), false, nullptr, nullptr, nullptr);

	void ATantrumnGameStateBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_GameState(TEXT("GameState"));
		static const FName Name_Results(TEXT("Results"));

		const bool bIsValid = true
			&& Name_GameState == ClassReps[(int32)ENetFields_Private::GameState].Property->GetFName()
			&& Name_Results == ClassReps[(int32)ENetFields_Private::Results].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ATantrumnGameStateBase"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATantrumnGameStateBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
