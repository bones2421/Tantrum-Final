// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tantrumn/TantrumnPlayerState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTantrumnPlayerState() {}
// Cross Module References
	TANTRUMN_API UEnum* Z_Construct_UEnum_Tantrumn_EPlayerGameState();
	UPackage* Z_Construct_UPackage__Script_Tantrumn();
	TANTRUMN_API UClass* Z_Construct_UClass_ATantrumnPlayerState_NoRegister();
	TANTRUMN_API UClass* Z_Construct_UClass_ATantrumnPlayerState();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
// End Cross Module References
	static UEnum* EPlayerGameState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Tantrumn_EPlayerGameState, Z_Construct_UPackage__Script_Tantrumn(), TEXT("EPlayerGameState"));
		}
		return Singleton;
	}
	template<> TANTRUMN_API UEnum* StaticEnum<EPlayerGameState>()
	{
		return EPlayerGameState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPlayerGameState(EPlayerGameState_StaticEnum, TEXT("/Script/Tantrumn"), TEXT("EPlayerGameState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Tantrumn_EPlayerGameState_Hash() { return 2236633919U; }
	UEnum* Z_Construct_UEnum_Tantrumn_EPlayerGameState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Tantrumn();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPlayerGameState"), 0, Get_Z_Construct_UEnum_Tantrumn_EPlayerGameState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPlayerGameState::None", (int64)EPlayerGameState::None },
				{ "EPlayerGameState::Waiting", (int64)EPlayerGameState::Waiting },
				{ "EPlayerGameState::Playing", (int64)EPlayerGameState::Playing },
				{ "EPlayerGameState::Finished", (int64)EPlayerGameState::Finished },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "// Enum to track the current state of the game \n" },
				{ "Finished.DisplayName", "Finished" },
				{ "Finished.Name", "EPlayerGameState::Finished" },
				{ "ModuleRelativePath", "TantrumnPlayerState.h" },
				{ "None.DisplayName", "None" },
				{ "None.Name", "EPlayerGameState::None" },
				{ "Playing.DisplayName", "Playing" },
				{ "Playing.Name", "EPlayerGameState::Playing" },
				{ "ToolTip", "Enum to track the current state of the game" },
				{ "Waiting.DisplayName", "Waiting" },
				{ "Waiting.Name", "EPlayerGameState::Waiting" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Tantrumn,
				nullptr,
				"EPlayerGameState",
				"EPlayerGameState",
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
	DEFINE_FUNCTION(ATantrumnPlayerState::execOnRep_CurrentState)
	{
		P_GET_ENUM_REF(EPlayerGameState,Z_Param_Out_OldGameState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentState((EPlayerGameState&)(Z_Param_Out_OldGameState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATantrumnPlayerState::execIsWinner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsWinner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATantrumnPlayerState::execGetCurrentState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EPlayerGameState*)Z_Param__Result=P_THIS->GetCurrentState();
		P_NATIVE_END;
	}
	void ATantrumnPlayerState::StaticRegisterNativesATantrumnPlayerState()
	{
		UClass* Class = ATantrumnPlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentState", &ATantrumnPlayerState::execGetCurrentState },
			{ "IsWinner", &ATantrumnPlayerState::execIsWinner },
			{ "OnRep_CurrentState", &ATantrumnPlayerState::execOnRep_CurrentState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATantrumnPlayerState_GetCurrentState_Statics
	{
		struct TantrumnPlayerState_eventGetCurrentState_Parms
		{
			EPlayerGameState ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATantrumnPlayerState_GetCurrentState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATantrumnPlayerState_GetCurrentState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TantrumnPlayerState_eventGetCurrentState_Parms, ReturnValue), Z_Construct_UEnum_Tantrumn_EPlayerGameState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATantrumnPlayerState_GetCurrentState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATantrumnPlayerState_GetCurrentState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATantrumnPlayerState_GetCurrentState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATantrumnPlayerState_GetCurrentState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TantrumnPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATantrumnPlayerState_GetCurrentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATantrumnPlayerState, nullptr, "GetCurrentState", nullptr, nullptr, sizeof(TantrumnPlayerState_eventGetCurrentState_Parms), Z_Construct_UFunction_ATantrumnPlayerState_GetCurrentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnPlayerState_GetCurrentState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATantrumnPlayerState_GetCurrentState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnPlayerState_GetCurrentState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATantrumnPlayerState_GetCurrentState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATantrumnPlayerState_GetCurrentState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATantrumnPlayerState_IsWinner_Statics
	{
		struct TantrumnPlayerState_eventIsWinner_Parms
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
	void Z_Construct_UFunction_ATantrumnPlayerState_IsWinner_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TantrumnPlayerState_eventIsWinner_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATantrumnPlayerState_IsWinner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TantrumnPlayerState_eventIsWinner_Parms), &Z_Construct_UFunction_ATantrumnPlayerState_IsWinner_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATantrumnPlayerState_IsWinner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATantrumnPlayerState_IsWinner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATantrumnPlayerState_IsWinner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TantrumnPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATantrumnPlayerState_IsWinner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATantrumnPlayerState, nullptr, "IsWinner", nullptr, nullptr, sizeof(TantrumnPlayerState_eventIsWinner_Parms), Z_Construct_UFunction_ATantrumnPlayerState_IsWinner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnPlayerState_IsWinner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATantrumnPlayerState_IsWinner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnPlayerState_IsWinner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATantrumnPlayerState_IsWinner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATantrumnPlayerState_IsWinner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATantrumnPlayerState_OnRep_CurrentState_Statics
	{
		struct TantrumnPlayerState_eventOnRep_CurrentState_Parms
		{
			EPlayerGameState OldGameState;
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATantrumnPlayerState_OnRep_CurrentState_Statics::NewProp_OldGameState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATantrumnPlayerState_OnRep_CurrentState_Statics::NewProp_OldGameState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATantrumnPlayerState_OnRep_CurrentState_Statics::NewProp_OldGameState = { "OldGameState", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TantrumnPlayerState_eventOnRep_CurrentState_Parms, OldGameState), Z_Construct_UEnum_Tantrumn_EPlayerGameState, METADATA_PARAMS(Z_Construct_UFunction_ATantrumnPlayerState_OnRep_CurrentState_Statics::NewProp_OldGameState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnPlayerState_OnRep_CurrentState_Statics::NewProp_OldGameState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATantrumnPlayerState_OnRep_CurrentState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATantrumnPlayerState_OnRep_CurrentState_Statics::NewProp_OldGameState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATantrumnPlayerState_OnRep_CurrentState_Statics::NewProp_OldGameState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATantrumnPlayerState_OnRep_CurrentState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TantrumnPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATantrumnPlayerState_OnRep_CurrentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATantrumnPlayerState, nullptr, "OnRep_CurrentState", nullptr, nullptr, sizeof(TantrumnPlayerState_eventOnRep_CurrentState_Parms), Z_Construct_UFunction_ATantrumnPlayerState_OnRep_CurrentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnPlayerState_OnRep_CurrentState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATantrumnPlayerState_OnRep_CurrentState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnPlayerState_OnRep_CurrentState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATantrumnPlayerState_OnRep_CurrentState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATantrumnPlayerState_OnRep_CurrentState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATantrumnPlayerState_NoRegister()
	{
		return ATantrumnPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_ATantrumnPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsWinner_MetaData[];
#endif
		static void NewProp_bIsWinner_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsWinner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATantrumnPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_Tantrumn,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATantrumnPlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATantrumnPlayerState_GetCurrentState, "GetCurrentState" }, // 290949456
		{ &Z_Construct_UFunction_ATantrumnPlayerState_IsWinner, "IsWinner" }, // 2257824168
		{ &Z_Construct_UFunction_ATantrumnPlayerState_OnRep_CurrentState, "OnRep_CurrentState" }, // 1501787171
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumnPlayerState_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TantrumnPlayerState.h" },
		{ "ModuleRelativePath", "TantrumnPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATantrumnPlayerState_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumnPlayerState_Statics::NewProp_CurrentState_MetaData[] = {
		{ "ModuleRelativePath", "TantrumnPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATantrumnPlayerState_Statics::NewProp_CurrentState = { "CurrentState", "OnRep_CurrentState", (EPropertyFlags)0x0020080100000020, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATantrumnPlayerState, CurrentState), Z_Construct_UEnum_Tantrumn_EPlayerGameState, METADATA_PARAMS(Z_Construct_UClass_ATantrumnPlayerState_Statics::NewProp_CurrentState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumnPlayerState_Statics::NewProp_CurrentState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumnPlayerState_Statics::NewProp_bIsWinner_MetaData[] = {
		{ "ModuleRelativePath", "TantrumnPlayerState.h" },
	};
#endif
	void Z_Construct_UClass_ATantrumnPlayerState_Statics::NewProp_bIsWinner_SetBit(void* Obj)
	{
		((ATantrumnPlayerState*)Obj)->bIsWinner = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATantrumnPlayerState_Statics::NewProp_bIsWinner = { "bIsWinner", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATantrumnPlayerState), &Z_Construct_UClass_ATantrumnPlayerState_Statics::NewProp_bIsWinner_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATantrumnPlayerState_Statics::NewProp_bIsWinner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumnPlayerState_Statics::NewProp_bIsWinner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATantrumnPlayerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumnPlayerState_Statics::NewProp_CurrentState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumnPlayerState_Statics::NewProp_CurrentState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumnPlayerState_Statics::NewProp_bIsWinner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATantrumnPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATantrumnPlayerState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATantrumnPlayerState_Statics::ClassParams = {
		&ATantrumnPlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATantrumnPlayerState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumnPlayerState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATantrumnPlayerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumnPlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATantrumnPlayerState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATantrumnPlayerState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATantrumnPlayerState, 3391804381);
	template<> TANTRUMN_API UClass* StaticClass<ATantrumnPlayerState>()
	{
		return ATantrumnPlayerState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATantrumnPlayerState(Z_Construct_UClass_ATantrumnPlayerState, &ATantrumnPlayerState::StaticClass, TEXT("/Script/Tantrumn"), TEXT("ATantrumnPlayerState"), false, nullptr, nullptr, nullptr);

	void ATantrumnPlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CurrentState(TEXT("CurrentState"));
		static const FName Name_bIsWinner(TEXT("bIsWinner"));

		const bool bIsValid = true
			&& Name_CurrentState == ClassReps[(int32)ENetFields_Private::CurrentState].Property->GetFName()
			&& Name_bIsWinner == ClassReps[(int32)ENetFields_Private::bIsWinner].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ATantrumnPlayerState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATantrumnPlayerState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
