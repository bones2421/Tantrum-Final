// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tantrumn/TantrumnCharacterBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTantrumnCharacterBase() {}
// Cross Module References
	TANTRUMN_API UEnum* Z_Construct_UEnum_Tantrumn_ECharacterThrowState();
	UPackage* Z_Construct_UPackage__Script_Tantrumn();
	TANTRUMN_API UClass* Z_Construct_UClass_ATantrumnCharacterBase_NoRegister();
	TANTRUMN_API UClass* Z_Construct_UClass_ATantrumnCharacterBase();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	TANTRUMN_API UClass* Z_Construct_UClass_AThrowableActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBranchingPointNotifyPayload();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	TANTRUMN_API UClass* Z_Construct_UClass_UInteractInterface_NoRegister();
// End Cross Module References
	static UEnum* ECharacterThrowState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Tantrumn_ECharacterThrowState, Z_Construct_UPackage__Script_Tantrumn(), TEXT("ECharacterThrowState"));
		}
		return Singleton;
	}
	template<> TANTRUMN_API UEnum* StaticEnum<ECharacterThrowState>()
	{
		return ECharacterThrowState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECharacterThrowState(ECharacterThrowState_StaticEnum, TEXT("/Script/Tantrumn"), TEXT("ECharacterThrowState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Tantrumn_ECharacterThrowState_Hash() { return 4202113635U; }
	UEnum* Z_Construct_UEnum_Tantrumn_ECharacterThrowState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Tantrumn();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECharacterThrowState"), 0, Get_Z_Construct_UEnum_Tantrumn_ECharacterThrowState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECharacterThrowState::None", (int64)ECharacterThrowState::None },
				{ "ECharacterThrowState::RequestingPull", (int64)ECharacterThrowState::RequestingPull },
				{ "ECharacterThrowState::Pulling", (int64)ECharacterThrowState::Pulling },
				{ "ECharacterThrowState::Attached", (int64)ECharacterThrowState::Attached },
				{ "ECharacterThrowState::Throwing", (int64)ECharacterThrowState::Throwing },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Attached.DisplayName", "Attached" },
				{ "Attached.Name", "ECharacterThrowState::Attached" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "TantrumnCharacterBase.h" },
				{ "None.DisplayName", "None" },
				{ "None.Name", "ECharacterThrowState::None" },
				{ "Pulling.DisplayName", "Pulling" },
				{ "Pulling.Name", "ECharacterThrowState::Pulling" },
				{ "RequestingPull.DisplayName", "RequestingPull" },
				{ "RequestingPull.Name", "ECharacterThrowState::RequestingPull" },
				{ "Throwing.DisplayName", "Throwing" },
				{ "Throwing.Name", "ECharacterThrowState::Throwing" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Tantrumn,
				nullptr,
				"ECharacterThrowState",
				"ECharacterThrowState",
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
	DEFINE_FUNCTION(ATantrumnCharacterBase::execOnRep_IsBeingRescued)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsBeingRescued();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATantrumnCharacterBase::execOnRep_CharacterThrowState)
	{
		P_GET_ENUM_REF(ECharacterThrowState,Z_Param_Out_OldCharacterThrowState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CharacterThrowState((ECharacterThrowState&)(Z_Param_Out_OldCharacterThrowState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATantrumnCharacterBase::execOnNotifyEndReceived)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_NotifyName);
		P_GET_STRUCT_REF(FBranchingPointNotifyPayload,Z_Param_Out_BranchingPointNotifyPayload);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNotifyEndReceived(Z_Param_NotifyName,Z_Param_Out_BranchingPointNotifyPayload);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATantrumnCharacterBase::execOnNotifyBeginReceived)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_NotifyName);
		P_GET_STRUCT_REF(FBranchingPointNotifyPayload,Z_Param_Out_BranchingPointNotifyPayload);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNotifyBeginReceived(Z_Param_NotifyName,Z_Param_Out_BranchingPointNotifyPayload);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATantrumnCharacterBase::execOnMontageEnded)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_UBOOL(Z_Param_bInterrupted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMontageEnded(Z_Param_Montage,Z_Param_bInterrupted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATantrumnCharacterBase::execOnMontageBlendingOut)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_UBOOL(Z_Param_bInterrupted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMontageBlendingOut(Z_Param_Montage,Z_Param_bInterrupted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATantrumnCharacterBase::execMulticastPlayCelebrateMontage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastPlayCelebrateMontage_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATantrumnCharacterBase::execServerFinishThrow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerFinishThrow_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATantrumnCharacterBase::execServerBeginThrow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerBeginThrow_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATantrumnCharacterBase::execClientThrowableAttached)
	{
		P_GET_OBJECT(AThrowableActor,Z_Param_InThrowableActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientThrowableAttached_Implementation(Z_Param_InThrowableActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATantrumnCharacterBase::execMulticastRequestThrowObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastRequestThrowObject_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATantrumnCharacterBase::execServerRequestThrowObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerRequestThrowObject_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerRequestThrowObject_Validate"));
			return;
		}
		P_THIS->ServerRequestThrowObject_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATantrumnCharacterBase::execServerRequestPullObject)
	{
		P_GET_UBOOL(Z_Param_bIsPulling);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerRequestPullObject_Implementation(Z_Param_bIsPulling);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATantrumnCharacterBase::execServerPullObject)
	{
		P_GET_OBJECT(AThrowableActor,Z_Param_InThrowableActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerPullObject_Implementation(Z_Param_InThrowableActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATantrumnCharacterBase::execServerSprintEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSprintEnd_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATantrumnCharacterBase::execServerSprintStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSprintStart_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATantrumnCharacterBase::execServerPlayCelebrateMontage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerPlayCelebrateMontage_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATantrumnCharacterBase::execIsHovering)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsHovering();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATantrumnCharacterBase::execIsBeingRescued)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsBeingRescued();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATantrumnCharacterBase::execIsStunned)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsStunned();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATantrumnCharacterBase::execGetCharacterThrowState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECharacterThrowState*)Z_Param__Result=P_THIS->GetCharacterThrowState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATantrumnCharacterBase::execIsThrowing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsThrowing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATantrumnCharacterBase::execIsPullingObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPullingObject();
		P_NATIVE_END;
	}
	static FName NAME_ATantrumnCharacterBase_ClientThrowableAttached = FName(TEXT("ClientThrowableAttached"));
	void ATantrumnCharacterBase::ClientThrowableAttached(AThrowableActor* InThrowableActor)
	{
		TantrumnCharacterBase_eventClientThrowableAttached_Parms Parms;
		Parms.InThrowableActor=InThrowableActor;
		ProcessEvent(FindFunctionChecked(NAME_ATantrumnCharacterBase_ClientThrowableAttached),&Parms);
	}
	static FName NAME_ATantrumnCharacterBase_MulticastPlayCelebrateMontage = FName(TEXT("MulticastPlayCelebrateMontage"));
	void ATantrumnCharacterBase::MulticastPlayCelebrateMontage()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATantrumnCharacterBase_MulticastPlayCelebrateMontage),NULL);
	}
	static FName NAME_ATantrumnCharacterBase_MulticastRequestThrowObject = FName(TEXT("MulticastRequestThrowObject"));
	void ATantrumnCharacterBase::MulticastRequestThrowObject()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATantrumnCharacterBase_MulticastRequestThrowObject),NULL);
	}
	static FName NAME_ATantrumnCharacterBase_ServerBeginThrow = FName(TEXT("ServerBeginThrow"));
	void ATantrumnCharacterBase::ServerBeginThrow()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATantrumnCharacterBase_ServerBeginThrow),NULL);
	}
	static FName NAME_ATantrumnCharacterBase_ServerFinishThrow = FName(TEXT("ServerFinishThrow"));
	void ATantrumnCharacterBase::ServerFinishThrow()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATantrumnCharacterBase_ServerFinishThrow),NULL);
	}
	static FName NAME_ATantrumnCharacterBase_ServerPlayCelebrateMontage = FName(TEXT("ServerPlayCelebrateMontage"));
	void ATantrumnCharacterBase::ServerPlayCelebrateMontage()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATantrumnCharacterBase_ServerPlayCelebrateMontage),NULL);
	}
	static FName NAME_ATantrumnCharacterBase_ServerPullObject = FName(TEXT("ServerPullObject"));
	void ATantrumnCharacterBase::ServerPullObject(AThrowableActor* InThrowableActor)
	{
		TantrumnCharacterBase_eventServerPullObject_Parms Parms;
		Parms.InThrowableActor=InThrowableActor;
		ProcessEvent(FindFunctionChecked(NAME_ATantrumnCharacterBase_ServerPullObject),&Parms);
	}
	static FName NAME_ATantrumnCharacterBase_ServerRequestPullObject = FName(TEXT("ServerRequestPullObject"));
	void ATantrumnCharacterBase::ServerRequestPullObject(bool bIsPulling)
	{
		TantrumnCharacterBase_eventServerRequestPullObject_Parms Parms;
		Parms.bIsPulling=bIsPulling ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ATantrumnCharacterBase_ServerRequestPullObject),&Parms);
	}
	static FName NAME_ATantrumnCharacterBase_ServerRequestThrowObject = FName(TEXT("ServerRequestThrowObject"));
	void ATantrumnCharacterBase::ServerRequestThrowObject()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATantrumnCharacterBase_ServerRequestThrowObject),NULL);
	}
	static FName NAME_ATantrumnCharacterBase_ServerSprintEnd = FName(TEXT("ServerSprintEnd"));
	void ATantrumnCharacterBase::ServerSprintEnd()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATantrumnCharacterBase_ServerSprintEnd),NULL);
	}
	static FName NAME_ATantrumnCharacterBase_ServerSprintStart = FName(TEXT("ServerSprintStart"));
	void ATantrumnCharacterBase::ServerSprintStart()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATantrumnCharacterBase_ServerSprintStart),NULL);
	}
	void ATantrumnCharacterBase::StaticRegisterNativesATantrumnCharacterBase()
	{
		UClass* Class = ATantrumnCharacterBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientThrowableAttached", &ATantrumnCharacterBase::execClientThrowableAttached },
			{ "GetCharacterThrowState", &ATantrumnCharacterBase::execGetCharacterThrowState },
			{ "IsBeingRescued", &ATantrumnCharacterBase::execIsBeingRescued },
			{ "IsHovering", &ATantrumnCharacterBase::execIsHovering },
			{ "IsPullingObject", &ATantrumnCharacterBase::execIsPullingObject },
			{ "IsStunned", &ATantrumnCharacterBase::execIsStunned },
			{ "IsThrowing", &ATantrumnCharacterBase::execIsThrowing },
			{ "MulticastPlayCelebrateMontage", &ATantrumnCharacterBase::execMulticastPlayCelebrateMontage },
			{ "MulticastRequestThrowObject", &ATantrumnCharacterBase::execMulticastRequestThrowObject },
			{ "OnMontageBlendingOut", &ATantrumnCharacterBase::execOnMontageBlendingOut },
			{ "OnMontageEnded", &ATantrumnCharacterBase::execOnMontageEnded },
			{ "OnNotifyBeginReceived", &ATantrumnCharacterBase::execOnNotifyBeginReceived },
			{ "OnNotifyEndReceived", &ATantrumnCharacterBase::execOnNotifyEndReceived },
			{ "OnRep_CharacterThrowState", &ATantrumnCharacterBase::execOnRep_CharacterThrowState },
			{ "OnRep_IsBeingRescued", &ATantrumnCharacterBase::execOnRep_IsBeingRescued },
			{ "ServerBeginThrow", &ATantrumnCharacterBase::execServerBeginThrow },
			{ "ServerFinishThrow", &ATantrumnCharacterBase::execServerFinishThrow },
			{ "ServerPlayCelebrateMontage", &ATantrumnCharacterBase::execServerPlayCelebrateMontage },
			{ "ServerPullObject", &ATantrumnCharacterBase::execServerPullObject },
			{ "ServerRequestPullObject", &ATantrumnCharacterBase::execServerRequestPullObject },
			{ "ServerRequestThrowObject", &ATantrumnCharacterBase::execServerRequestThrowObject },
			{ "ServerSprintEnd", &ATantrumnCharacterBase::execServerSprintEnd },
			{ "ServerSprintStart", &ATantrumnCharacterBase::execServerSprintStart },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATantrumnCharacterBase_ClientThrowableAttached_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InThrowableActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATantrumnCharacterBase_ClientThrowableAttached_Statics::NewProp_InThrowableActor = { "InThrowableActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TantrumnCharacterBase_eventClientThrowableAttached_Parms, InThrowableActor), Z_Construct_UClass_AThrowableActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATantrumnCharacterBase_ClientThrowableAttached_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATantrumnCharacterBase_ClientThrowableAttached_Statics::NewProp_InThrowableActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATantrumnCharacterBase_ClientThrowableAttached_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TantrumnCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATantrumnCharacterBase_ClientThrowableAttached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATantrumnCharacterBase, nullptr, "ClientThrowableAttached", nullptr, nullptr, sizeof(TantrumnCharacterBase_eventClientThrowableAttached_Parms), Z_Construct_UFunction_ATantrumnCharacterBase_ClientThrowableAttached_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnCharacterBase_ClientThrowableAttached_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATantrumnCharacterBase_ClientThrowableAttached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnCharacterBase_ClientThrowableAttached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATantrumnCharacterBase_ClientThrowableAttached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATantrumnCharacterBase_ClientThrowableAttached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATantrumnCharacterBase_GetCharacterThrowState_Statics
	{
		struct TantrumnCharacterBase_eventGetCharacterThrowState_Parms
		{
			ECharacterThrowState ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATantrumnCharacterBase_GetCharacterThrowState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATantrumnCharacterBase_GetCharacterThrowState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TantrumnCharacterBase_eventGetCharacterThrowState_Parms, ReturnValue), Z_Construct_UEnum_Tantrumn_ECharacterThrowState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATantrumnCharacterBase_GetCharacterThrowState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATantrumnCharacterBase_GetCharacterThrowState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATantrumnCharacterBase_GetCharacterThrowState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATantrumnCharacterBase_GetCharacterThrowState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TantrumnCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATantrumnCharacterBase_GetCharacterThrowState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATantrumnCharacterBase, nullptr, "GetCharacterThrowState", nullptr, nullptr, sizeof(TantrumnCharacterBase_eventGetCharacterThrowState_Parms), Z_Construct_UFunction_ATantrumnCharacterBase_GetCharacterThrowState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnCharacterBase_GetCharacterThrowState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATantrumnCharacterBase_GetCharacterThrowState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnCharacterBase_GetCharacterThrowState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATantrumnCharacterBase_GetCharacterThrowState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATantrumnCharacterBase_GetCharacterThrowState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATantrumnCharacterBase_IsBeingRescued_Statics
	{
		struct TantrumnCharacterBase_eventIsBeingRescued_Parms
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
	void Z_Construct_UFunction_ATantrumnCharacterBase_IsBeingRescued_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TantrumnCharacterBase_eventIsBeingRescued_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATantrumnCharacterBase_IsBeingRescued_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TantrumnCharacterBase_eventIsBeingRescued_Parms), &Z_Construct_UFunction_ATantrumnCharacterBase_IsBeingRescued_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATantrumnCharacterBase_IsBeingRescued_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATantrumnCharacterBase_IsBeingRescued_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATantrumnCharacterBase_IsBeingRescued_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TantrumnCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATantrumnCharacterBase_IsBeingRescued_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATantrumnCharacterBase, nullptr, "IsBeingRescued", nullptr, nullptr, sizeof(TantrumnCharacterBase_eventIsBeingRescued_Parms), Z_Construct_UFunction_ATantrumnCharacterBase_IsBeingRescued_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnCharacterBase_IsBeingRescued_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATantrumnCharacterBase_IsBeingRescued_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnCharacterBase_IsBeingRescued_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATantrumnCharacterBase_IsBeingRescued()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATantrumnCharacterBase_IsBeingRescued_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATantrumnCharacterBase_IsHovering_Statics
	{
		struct TantrumnCharacterBase_eventIsHovering_Parms
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
	void Z_Construct_UFunction_ATantrumnCharacterBase_IsHovering_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TantrumnCharacterBase_eventIsHovering_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATantrumnCharacterBase_IsHovering_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TantrumnCharacterBase_eventIsHovering_Parms), &Z_Construct_UFunction_ATantrumnCharacterBase_IsHovering_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATantrumnCharacterBase_IsHovering_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATantrumnCharacterBase_IsHovering_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATantrumnCharacterBase_IsHovering_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TantrumnCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATantrumnCharacterBase_IsHovering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATantrumnCharacterBase, nullptr, "IsHovering", nullptr, nullptr, sizeof(TantrumnCharacterBase_eventIsHovering_Parms), Z_Construct_UFunction_ATantrumnCharacterBase_IsHovering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnCharacterBase_IsHovering_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATantrumnCharacterBase_IsHovering_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnCharacterBase_IsHovering_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATantrumnCharacterBase_IsHovering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATantrumnCharacterBase_IsHovering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATantrumnCharacterBase_IsPullingObject_Statics
	{
		struct TantrumnCharacterBase_eventIsPullingObject_Parms
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
	void Z_Construct_UFunction_ATantrumnCharacterBase_IsPullingObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TantrumnCharacterBase_eventIsPullingObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATantrumnCharacterBase_IsPullingObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TantrumnCharacterBase_eventIsPullingObject_Parms), &Z_Construct_UFunction_ATantrumnCharacterBase_IsPullingObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATantrumnCharacterBase_IsPullingObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATantrumnCharacterBase_IsPullingObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATantrumnCharacterBase_IsPullingObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TantrumnCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATantrumnCharacterBase_IsPullingObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATantrumnCharacterBase, nullptr, "IsPullingObject", nullptr, nullptr, sizeof(TantrumnCharacterBase_eventIsPullingObject_Parms), Z_Construct_UFunction_ATantrumnCharacterBase_IsPullingObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnCharacterBase_IsPullingObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATantrumnCharacterBase_IsPullingObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnCharacterBase_IsPullingObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATantrumnCharacterBase_IsPullingObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATantrumnCharacterBase_IsPullingObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATantrumnCharacterBase_IsStunned_Statics
	{
		struct TantrumnCharacterBase_eventIsStunned_Parms
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
	void Z_Construct_UFunction_ATantrumnCharacterBase_IsStunned_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TantrumnCharacterBase_eventIsStunned_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATantrumnCharacterBase_IsStunned_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TantrumnCharacterBase_eventIsStunned_Parms), &Z_Construct_UFunction_ATantrumnCharacterBase_IsStunned_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATantrumnCharacterBase_IsStunned_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATantrumnCharacterBase_IsStunned_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATantrumnCharacterBase_IsStunned_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TantrumnCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATantrumnCharacterBase_IsStunned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATantrumnCharacterBase, nullptr, "IsStunned", nullptr, nullptr, sizeof(TantrumnCharacterBase_eventIsStunned_Parms), Z_Construct_UFunction_ATantrumnCharacterBase_IsStunned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnCharacterBase_IsStunned_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATantrumnCharacterBase_IsStunned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnCharacterBase_IsStunned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATantrumnCharacterBase_IsStunned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATantrumnCharacterBase_IsStunned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATantrumnCharacterBase_IsThrowing_Statics
	{
		struct TantrumnCharacterBase_eventIsThrowing_Parms
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
	void Z_Construct_UFunction_ATantrumnCharacterBase_IsThrowing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TantrumnCharacterBase_eventIsThrowing_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATantrumnCharacterBase_IsThrowing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TantrumnCharacterBase_eventIsThrowing_Parms), &Z_Construct_UFunction_ATantrumnCharacterBase_IsThrowing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATantrumnCharacterBase_IsThrowing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATantrumnCharacterBase_IsThrowing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATantrumnCharacterBase_IsThrowing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TantrumnCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATantrumnCharacterBase_IsThrowing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATantrumnCharacterBase, nullptr, "IsThrowing", nullptr, nullptr, sizeof(TantrumnCharacterBase_eventIsThrowing_Parms), Z_Construct_UFunction_ATantrumnCharacterBase_IsThrowing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnCharacterBase_IsThrowing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATantrumnCharacterBase_IsThrowing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnCharacterBase_IsThrowing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATantrumnCharacterBase_IsThrowing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATantrumnCharacterBase_IsThrowing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATantrumnCharacterBase_MulticastPlayCelebrateMontage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATantrumnCharacterBase_MulticastPlayCelebrateMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TantrumnCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATantrumnCharacterBase_MulticastPlayCelebrateMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATantrumnCharacterBase, nullptr, "MulticastPlayCelebrateMontage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATantrumnCharacterBase_MulticastPlayCelebrateMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnCharacterBase_MulticastPlayCelebrateMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATantrumnCharacterBase_MulticastPlayCelebrateMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATantrumnCharacterBase_MulticastPlayCelebrateMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATantrumnCharacterBase_MulticastRequestThrowObject_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATantrumnCharacterBase_MulticastRequestThrowObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TantrumnCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATantrumnCharacterBase_MulticastRequestThrowObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATantrumnCharacterBase, nullptr, "MulticastRequestThrowObject", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATantrumnCharacterBase_MulticastRequestThrowObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnCharacterBase_MulticastRequestThrowObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATantrumnCharacterBase_MulticastRequestThrowObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATantrumnCharacterBase_MulticastRequestThrowObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATantrumnCharacterBase_OnMontageBlendingOut_Statics
	{
		struct TantrumnCharacterBase_eventOnMontageBlendingOut_Parms
		{
			UAnimMontage* Montage;
			bool bInterrupted;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static void NewProp_bInterrupted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATantrumnCharacterBase_OnMontageBlendingOut_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TantrumnCharacterBase_eventOnMontageBlendingOut_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATantrumnCharacterBase_OnMontageBlendingOut_Statics::NewProp_bInterrupted_SetBit(void* Obj)
	{
		((TantrumnCharacterBase_eventOnMontageBlendingOut_Parms*)Obj)->bInterrupted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATantrumnCharacterBase_OnMontageBlendingOut_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TantrumnCharacterBase_eventOnMontageBlendingOut_Parms), &Z_Construct_UFunction_ATantrumnCharacterBase_OnMontageBlendingOut_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATantrumnCharacterBase_OnMontageBlendingOut_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATantrumnCharacterBase_OnMontageBlendingOut_Statics::NewProp_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATantrumnCharacterBase_OnMontageBlendingOut_Statics::NewProp_bInterrupted,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATantrumnCharacterBase_OnMontageBlendingOut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TantrumnCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATantrumnCharacterBase_OnMontageBlendingOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATantrumnCharacterBase, nullptr, "OnMontageBlendingOut", nullptr, nullptr, sizeof(TantrumnCharacterBase_eventOnMontageBlendingOut_Parms), Z_Construct_UFunction_ATantrumnCharacterBase_OnMontageBlendingOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnCharacterBase_OnMontageBlendingOut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATantrumnCharacterBase_OnMontageBlendingOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnCharacterBase_OnMontageBlendingOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATantrumnCharacterBase_OnMontageBlendingOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATantrumnCharacterBase_OnMontageBlendingOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATantrumnCharacterBase_OnMontageEnded_Statics
	{
		struct TantrumnCharacterBase_eventOnMontageEnded_Parms
		{
			UAnimMontage* Montage;
			bool bInterrupted;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static void NewProp_bInterrupted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATantrumnCharacterBase_OnMontageEnded_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TantrumnCharacterBase_eventOnMontageEnded_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATantrumnCharacterBase_OnMontageEnded_Statics::NewProp_bInterrupted_SetBit(void* Obj)
	{
		((TantrumnCharacterBase_eventOnMontageEnded_Parms*)Obj)->bInterrupted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATantrumnCharacterBase_OnMontageEnded_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TantrumnCharacterBase_eventOnMontageEnded_Parms), &Z_Construct_UFunction_ATantrumnCharacterBase_OnMontageEnded_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATantrumnCharacterBase_OnMontageEnded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATantrumnCharacterBase_OnMontageEnded_Statics::NewProp_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATantrumnCharacterBase_OnMontageEnded_Statics::NewProp_bInterrupted,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATantrumnCharacterBase_OnMontageEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TantrumnCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATantrumnCharacterBase_OnMontageEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATantrumnCharacterBase, nullptr, "OnMontageEnded", nullptr, nullptr, sizeof(TantrumnCharacterBase_eventOnMontageEnded_Parms), Z_Construct_UFunction_ATantrumnCharacterBase_OnMontageEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnCharacterBase_OnMontageEnded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATantrumnCharacterBase_OnMontageEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnCharacterBase_OnMontageEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATantrumnCharacterBase_OnMontageEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATantrumnCharacterBase_OnMontageEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATantrumnCharacterBase_OnNotifyBeginReceived_Statics
	{
		struct TantrumnCharacterBase_eventOnNotifyBeginReceived_Parms
		{
			FName NotifyName;
			FBranchingPointNotifyPayload BranchingPointNotifyPayload;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NotifyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BranchingPointNotifyPayload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BranchingPointNotifyPayload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ATantrumnCharacterBase_OnNotifyBeginReceived_Statics::NewProp_NotifyName = { "NotifyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TantrumnCharacterBase_eventOnNotifyBeginReceived_Parms, NotifyName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATantrumnCharacterBase_OnNotifyBeginReceived_Statics::NewProp_BranchingPointNotifyPayload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATantrumnCharacterBase_OnNotifyBeginReceived_Statics::NewProp_BranchingPointNotifyPayload = { "BranchingPointNotifyPayload", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TantrumnCharacterBase_eventOnNotifyBeginReceived_Parms, BranchingPointNotifyPayload), Z_Construct_UScriptStruct_FBranchingPointNotifyPayload, METADATA_PARAMS(Z_Construct_UFunction_ATantrumnCharacterBase_OnNotifyBeginReceived_Statics::NewProp_BranchingPointNotifyPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnCharacterBase_OnNotifyBeginReceived_Statics::NewProp_BranchingPointNotifyPayload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATantrumnCharacterBase_OnNotifyBeginReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATantrumnCharacterBase_OnNotifyBeginReceived_Statics::NewProp_NotifyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATantrumnCharacterBase_OnNotifyBeginReceived_Statics::NewProp_BranchingPointNotifyPayload,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATantrumnCharacterBase_OnNotifyBeginReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TantrumnCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATantrumnCharacterBase_OnNotifyBeginReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATantrumnCharacterBase, nullptr, "OnNotifyBeginReceived", nullptr, nullptr, sizeof(TantrumnCharacterBase_eventOnNotifyBeginReceived_Parms), Z_Construct_UFunction_ATantrumnCharacterBase_OnNotifyBeginReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnCharacterBase_OnNotifyBeginReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATantrumnCharacterBase_OnNotifyBeginReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnCharacterBase_OnNotifyBeginReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATantrumnCharacterBase_OnNotifyBeginReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATantrumnCharacterBase_OnNotifyBeginReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATantrumnCharacterBase_OnNotifyEndReceived_Statics
	{
		struct TantrumnCharacterBase_eventOnNotifyEndReceived_Parms
		{
			FName NotifyName;
			FBranchingPointNotifyPayload BranchingPointNotifyPayload;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NotifyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BranchingPointNotifyPayload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BranchingPointNotifyPayload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ATantrumnCharacterBase_OnNotifyEndReceived_Statics::NewProp_NotifyName = { "NotifyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TantrumnCharacterBase_eventOnNotifyEndReceived_Parms, NotifyName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATantrumnCharacterBase_OnNotifyEndReceived_Statics::NewProp_BranchingPointNotifyPayload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATantrumnCharacterBase_OnNotifyEndReceived_Statics::NewProp_BranchingPointNotifyPayload = { "BranchingPointNotifyPayload", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TantrumnCharacterBase_eventOnNotifyEndReceived_Parms, BranchingPointNotifyPayload), Z_Construct_UScriptStruct_FBranchingPointNotifyPayload, METADATA_PARAMS(Z_Construct_UFunction_ATantrumnCharacterBase_OnNotifyEndReceived_Statics::NewProp_BranchingPointNotifyPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnCharacterBase_OnNotifyEndReceived_Statics::NewProp_BranchingPointNotifyPayload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATantrumnCharacterBase_OnNotifyEndReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATantrumnCharacterBase_OnNotifyEndReceived_Statics::NewProp_NotifyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATantrumnCharacterBase_OnNotifyEndReceived_Statics::NewProp_BranchingPointNotifyPayload,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATantrumnCharacterBase_OnNotifyEndReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TantrumnCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATantrumnCharacterBase_OnNotifyEndReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATantrumnCharacterBase, nullptr, "OnNotifyEndReceived", nullptr, nullptr, sizeof(TantrumnCharacterBase_eventOnNotifyEndReceived_Parms), Z_Construct_UFunction_ATantrumnCharacterBase_OnNotifyEndReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnCharacterBase_OnNotifyEndReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATantrumnCharacterBase_OnNotifyEndReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnCharacterBase_OnNotifyEndReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATantrumnCharacterBase_OnNotifyEndReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATantrumnCharacterBase_OnNotifyEndReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATantrumnCharacterBase_OnRep_CharacterThrowState_Statics
	{
		struct TantrumnCharacterBase_eventOnRep_CharacterThrowState_Parms
		{
			ECharacterThrowState OldCharacterThrowState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldCharacterThrowState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldCharacterThrowState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldCharacterThrowState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATantrumnCharacterBase_OnRep_CharacterThrowState_Statics::NewProp_OldCharacterThrowState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATantrumnCharacterBase_OnRep_CharacterThrowState_Statics::NewProp_OldCharacterThrowState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATantrumnCharacterBase_OnRep_CharacterThrowState_Statics::NewProp_OldCharacterThrowState = { "OldCharacterThrowState", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TantrumnCharacterBase_eventOnRep_CharacterThrowState_Parms, OldCharacterThrowState), Z_Construct_UEnum_Tantrumn_ECharacterThrowState, METADATA_PARAMS(Z_Construct_UFunction_ATantrumnCharacterBase_OnRep_CharacterThrowState_Statics::NewProp_OldCharacterThrowState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnCharacterBase_OnRep_CharacterThrowState_Statics::NewProp_OldCharacterThrowState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATantrumnCharacterBase_OnRep_CharacterThrowState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATantrumnCharacterBase_OnRep_CharacterThrowState_Statics::NewProp_OldCharacterThrowState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATantrumnCharacterBase_OnRep_CharacterThrowState_Statics::NewProp_OldCharacterThrowState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATantrumnCharacterBase_OnRep_CharacterThrowState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TantrumnCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATantrumnCharacterBase_OnRep_CharacterThrowState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATantrumnCharacterBase, nullptr, "OnRep_CharacterThrowState", nullptr, nullptr, sizeof(TantrumnCharacterBase_eventOnRep_CharacterThrowState_Parms), Z_Construct_UFunction_ATantrumnCharacterBase_OnRep_CharacterThrowState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnCharacterBase_OnRep_CharacterThrowState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATantrumnCharacterBase_OnRep_CharacterThrowState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnCharacterBase_OnRep_CharacterThrowState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATantrumnCharacterBase_OnRep_CharacterThrowState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATantrumnCharacterBase_OnRep_CharacterThrowState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATantrumnCharacterBase_OnRep_IsBeingRescued_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATantrumnCharacterBase_OnRep_IsBeingRescued_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TantrumnCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATantrumnCharacterBase_OnRep_IsBeingRescued_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATantrumnCharacterBase, nullptr, "OnRep_IsBeingRescued", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATantrumnCharacterBase_OnRep_IsBeingRescued_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnCharacterBase_OnRep_IsBeingRescued_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATantrumnCharacterBase_OnRep_IsBeingRescued()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATantrumnCharacterBase_OnRep_IsBeingRescued_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATantrumnCharacterBase_ServerBeginThrow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATantrumnCharacterBase_ServerBeginThrow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TantrumnCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATantrumnCharacterBase_ServerBeginThrow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATantrumnCharacterBase, nullptr, "ServerBeginThrow", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATantrumnCharacterBase_ServerBeginThrow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnCharacterBase_ServerBeginThrow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATantrumnCharacterBase_ServerBeginThrow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATantrumnCharacterBase_ServerBeginThrow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATantrumnCharacterBase_ServerFinishThrow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATantrumnCharacterBase_ServerFinishThrow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TantrumnCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATantrumnCharacterBase_ServerFinishThrow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATantrumnCharacterBase, nullptr, "ServerFinishThrow", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATantrumnCharacterBase_ServerFinishThrow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnCharacterBase_ServerFinishThrow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATantrumnCharacterBase_ServerFinishThrow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATantrumnCharacterBase_ServerFinishThrow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATantrumnCharacterBase_ServerPlayCelebrateMontage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATantrumnCharacterBase_ServerPlayCelebrateMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TantrumnCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATantrumnCharacterBase_ServerPlayCelebrateMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATantrumnCharacterBase, nullptr, "ServerPlayCelebrateMontage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATantrumnCharacterBase_ServerPlayCelebrateMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnCharacterBase_ServerPlayCelebrateMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATantrumnCharacterBase_ServerPlayCelebrateMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATantrumnCharacterBase_ServerPlayCelebrateMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATantrumnCharacterBase_ServerPullObject_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InThrowableActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATantrumnCharacterBase_ServerPullObject_Statics::NewProp_InThrowableActor = { "InThrowableActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TantrumnCharacterBase_eventServerPullObject_Parms, InThrowableActor), Z_Construct_UClass_AThrowableActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATantrumnCharacterBase_ServerPullObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATantrumnCharacterBase_ServerPullObject_Statics::NewProp_InThrowableActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATantrumnCharacterBase_ServerPullObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TantrumnCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATantrumnCharacterBase_ServerPullObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATantrumnCharacterBase, nullptr, "ServerPullObject", nullptr, nullptr, sizeof(TantrumnCharacterBase_eventServerPullObject_Parms), Z_Construct_UFunction_ATantrumnCharacterBase_ServerPullObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnCharacterBase_ServerPullObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATantrumnCharacterBase_ServerPullObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnCharacterBase_ServerPullObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATantrumnCharacterBase_ServerPullObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATantrumnCharacterBase_ServerPullObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATantrumnCharacterBase_ServerRequestPullObject_Statics
	{
		static void NewProp_bIsPulling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPulling;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATantrumnCharacterBase_ServerRequestPullObject_Statics::NewProp_bIsPulling_SetBit(void* Obj)
	{
		((TantrumnCharacterBase_eventServerRequestPullObject_Parms*)Obj)->bIsPulling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATantrumnCharacterBase_ServerRequestPullObject_Statics::NewProp_bIsPulling = { "bIsPulling", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TantrumnCharacterBase_eventServerRequestPullObject_Parms), &Z_Construct_UFunction_ATantrumnCharacterBase_ServerRequestPullObject_Statics::NewProp_bIsPulling_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATantrumnCharacterBase_ServerRequestPullObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATantrumnCharacterBase_ServerRequestPullObject_Statics::NewProp_bIsPulling,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATantrumnCharacterBase_ServerRequestPullObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TantrumnCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATantrumnCharacterBase_ServerRequestPullObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATantrumnCharacterBase, nullptr, "ServerRequestPullObject", nullptr, nullptr, sizeof(TantrumnCharacterBase_eventServerRequestPullObject_Parms), Z_Construct_UFunction_ATantrumnCharacterBase_ServerRequestPullObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnCharacterBase_ServerRequestPullObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATantrumnCharacterBase_ServerRequestPullObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnCharacterBase_ServerRequestPullObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATantrumnCharacterBase_ServerRequestPullObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATantrumnCharacterBase_ServerRequestPullObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATantrumnCharacterBase_ServerRequestThrowObject_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATantrumnCharacterBase_ServerRequestThrowObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TantrumnCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATantrumnCharacterBase_ServerRequestThrowObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATantrumnCharacterBase, nullptr, "ServerRequestThrowObject", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATantrumnCharacterBase_ServerRequestThrowObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnCharacterBase_ServerRequestThrowObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATantrumnCharacterBase_ServerRequestThrowObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATantrumnCharacterBase_ServerRequestThrowObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATantrumnCharacterBase_ServerSprintEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATantrumnCharacterBase_ServerSprintEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TantrumnCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATantrumnCharacterBase_ServerSprintEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATantrumnCharacterBase, nullptr, "ServerSprintEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATantrumnCharacterBase_ServerSprintEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnCharacterBase_ServerSprintEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATantrumnCharacterBase_ServerSprintEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATantrumnCharacterBase_ServerSprintEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATantrumnCharacterBase_ServerSprintStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATantrumnCharacterBase_ServerSprintStart_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*UFUNCTION(Server, Reliable)\n\x09void PullObject();*///RPC's actions that can need to be done on the server in order to replicate\n" },
		{ "ModuleRelativePath", "TantrumnCharacterBase.h" },
		{ "ToolTip", "UFUNCTION(Server, Reliable)\n       void PullObject();//RPC's actions that can need to be done on the server in order to replicate" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATantrumnCharacterBase_ServerSprintStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATantrumnCharacterBase, nullptr, "ServerSprintStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATantrumnCharacterBase_ServerSprintStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATantrumnCharacterBase_ServerSprintStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATantrumnCharacterBase_ServerSprintStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATantrumnCharacterBase_ServerSprintStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATantrumnCharacterBase_NoRegister()
	{
		return ATantrumnCharacterBase::StaticClass();
	}
	struct Z_Construct_UClass_ATantrumnCharacterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprintSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SprintSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinImpactSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinImpactSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxImpactSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxImpactSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinStunTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinStunTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxStunTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxStunTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeavyLandSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeavyLandSound;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CharacterThrowState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterThrowState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CharacterThrowState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThrowSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThrowMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CelebrateMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CelebrateMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastGroundPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastGroundPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsBeingRescued_MetaData[];
#endif
		static void NewProp_bIsBeingRescued_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsBeingRescued;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeToRescuePlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToRescuePlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowableActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThrowableActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATantrumnCharacterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Tantrumn,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATantrumnCharacterBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATantrumnCharacterBase_ClientThrowableAttached, "ClientThrowableAttached" }, // 3178199123
		{ &Z_Construct_UFunction_ATantrumnCharacterBase_GetCharacterThrowState, "GetCharacterThrowState" }, // 636625641
		{ &Z_Construct_UFunction_ATantrumnCharacterBase_IsBeingRescued, "IsBeingRescued" }, // 262243632
		{ &Z_Construct_UFunction_ATantrumnCharacterBase_IsHovering, "IsHovering" }, // 2904037472
		{ &Z_Construct_UFunction_ATantrumnCharacterBase_IsPullingObject, "IsPullingObject" }, // 854128557
		{ &Z_Construct_UFunction_ATantrumnCharacterBase_IsStunned, "IsStunned" }, // 1359315366
		{ &Z_Construct_UFunction_ATantrumnCharacterBase_IsThrowing, "IsThrowing" }, // 2121879255
		{ &Z_Construct_UFunction_ATantrumnCharacterBase_MulticastPlayCelebrateMontage, "MulticastPlayCelebrateMontage" }, // 1628228803
		{ &Z_Construct_UFunction_ATantrumnCharacterBase_MulticastRequestThrowObject, "MulticastRequestThrowObject" }, // 2200908633
		{ &Z_Construct_UFunction_ATantrumnCharacterBase_OnMontageBlendingOut, "OnMontageBlendingOut" }, // 2052638840
		{ &Z_Construct_UFunction_ATantrumnCharacterBase_OnMontageEnded, "OnMontageEnded" }, // 1901905890
		{ &Z_Construct_UFunction_ATantrumnCharacterBase_OnNotifyBeginReceived, "OnNotifyBeginReceived" }, // 972579040
		{ &Z_Construct_UFunction_ATantrumnCharacterBase_OnNotifyEndReceived, "OnNotifyEndReceived" }, // 857314719
		{ &Z_Construct_UFunction_ATantrumnCharacterBase_OnRep_CharacterThrowState, "OnRep_CharacterThrowState" }, // 818029822
		{ &Z_Construct_UFunction_ATantrumnCharacterBase_OnRep_IsBeingRescued, "OnRep_IsBeingRescued" }, // 3779176682
		{ &Z_Construct_UFunction_ATantrumnCharacterBase_ServerBeginThrow, "ServerBeginThrow" }, // 329664325
		{ &Z_Construct_UFunction_ATantrumnCharacterBase_ServerFinishThrow, "ServerFinishThrow" }, // 1765254075
		{ &Z_Construct_UFunction_ATantrumnCharacterBase_ServerPlayCelebrateMontage, "ServerPlayCelebrateMontage" }, // 1402511756
		{ &Z_Construct_UFunction_ATantrumnCharacterBase_ServerPullObject, "ServerPullObject" }, // 166771385
		{ &Z_Construct_UFunction_ATantrumnCharacterBase_ServerRequestPullObject, "ServerRequestPullObject" }, // 3675052508
		{ &Z_Construct_UFunction_ATantrumnCharacterBase_ServerRequestThrowObject, "ServerRequestThrowObject" }, // 3447202614
		{ &Z_Construct_UFunction_ATantrumnCharacterBase_ServerSprintEnd, "ServerSprintEnd" }, // 3996049281
		{ &Z_Construct_UFunction_ATantrumnCharacterBase_ServerSprintStart, "ServerSprintStart" }, // 67162040
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumnCharacterBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TantrumnCharacterBase.h" },
		{ "ModuleRelativePath", "TantrumnCharacterBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_SprintSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "TantrumnCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_SprintSpeed = { "SprintSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATantrumnCharacterBase, SprintSpeed), METADATA_PARAMS(Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_SprintSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_SprintSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_MinImpactSpeed_MetaData[] = {
		{ "Category", "Fall Impact" },
		{ "ModuleRelativePath", "TantrumnCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_MinImpactSpeed = { "MinImpactSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATantrumnCharacterBase, MinImpactSpeed), METADATA_PARAMS(Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_MinImpactSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_MinImpactSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_MaxImpactSpeed_MetaData[] = {
		{ "Category", "Fall Impact" },
		{ "ModuleRelativePath", "TantrumnCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_MaxImpactSpeed = { "MaxImpactSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATantrumnCharacterBase, MaxImpactSpeed), METADATA_PARAMS(Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_MaxImpactSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_MaxImpactSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_MinStunTime_MetaData[] = {
		{ "Category", "Fall Impact" },
		{ "Comment", "//Time in Seconds\n" },
		{ "ModuleRelativePath", "TantrumnCharacterBase.h" },
		{ "ToolTip", "Time in Seconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_MinStunTime = { "MinStunTime", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATantrumnCharacterBase, MinStunTime), METADATA_PARAMS(Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_MinStunTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_MinStunTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_MaxStunTime_MetaData[] = {
		{ "Category", "Fall Impact" },
		{ "Comment", "//Time in Seconds\n" },
		{ "ModuleRelativePath", "TantrumnCharacterBase.h" },
		{ "ToolTip", "Time in Seconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_MaxStunTime = { "MaxStunTime", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATantrumnCharacterBase, MaxStunTime), METADATA_PARAMS(Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_MaxStunTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_MaxStunTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_HeavyLandSound_MetaData[] = {
		{ "Category", "Fall Impact" },
		{ "Comment", "//Sound Cue Fall Impact\n" },
		{ "ModuleRelativePath", "TantrumnCharacterBase.h" },
		{ "ToolTip", "Sound Cue Fall Impact" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_HeavyLandSound = { "HeavyLandSound", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATantrumnCharacterBase, HeavyLandSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_HeavyLandSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_HeavyLandSound_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_CharacterThrowState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_CharacterThrowState_MetaData[] = {
		{ "Category", "Throw" },
		{ "Comment", "//UPROPERTY(VisibleAnywhere, replicated, Category = \"Throw\")\n" },
		{ "ModuleRelativePath", "TantrumnCharacterBase.h" },
		{ "ToolTip", "UPROPERTY(VisibleAnywhere, replicated, Category = \"Throw\")" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_CharacterThrowState = { "CharacterThrowState", "OnRep_CharacterThrowState", (EPropertyFlags)0x0020080100020021, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATantrumnCharacterBase, CharacterThrowState), Z_Construct_UEnum_Tantrumn_ECharacterThrowState, METADATA_PARAMS(Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_CharacterThrowState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_CharacterThrowState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_ThrowSpeed_MetaData[] = {
		{ "Category", "Throw" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "TantrumnCharacterBase.h" },
		{ "Unit", "ms" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_ThrowSpeed = { "ThrowSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATantrumnCharacterBase, ThrowSpeed), METADATA_PARAMS(Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_ThrowSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_ThrowSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_ThrowMontage_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "TantrumnCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_ThrowMontage = { "ThrowMontage", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATantrumnCharacterBase, ThrowMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_ThrowMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_ThrowMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_CelebrateMontage_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "TantrumnCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_CelebrateMontage = { "CelebrateMontage", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATantrumnCharacterBase, CelebrateMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_CelebrateMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_CelebrateMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_LastGroundPosition_MetaData[] = {
		{ "Comment", "//handle fall out of world\n" },
		{ "ModuleRelativePath", "TantrumnCharacterBase.h" },
		{ "ToolTip", "handle fall out of world" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_LastGroundPosition = { "LastGroundPosition", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATantrumnCharacterBase, LastGroundPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_LastGroundPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_LastGroundPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_bIsBeingRescued_MetaData[] = {
		{ "ModuleRelativePath", "TantrumnCharacterBase.h" },
	};
#endif
	void Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_bIsBeingRescued_SetBit(void* Obj)
	{
		((ATantrumnCharacterBase*)Obj)->bIsBeingRescued = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_bIsBeingRescued = { "bIsBeingRescued", "OnRep_IsBeingRescued", (EPropertyFlags)0x0020080100000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATantrumnCharacterBase), &Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_bIsBeingRescued_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_bIsBeingRescued_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_bIsBeingRescued_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_TimeToRescuePlayer_MetaData[] = {
		{ "Category", "KillZ" },
		{ "ModuleRelativePath", "TantrumnCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_TimeToRescuePlayer = { "TimeToRescuePlayer", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATantrumnCharacterBase, TimeToRescuePlayer), METADATA_PARAMS(Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_TimeToRescuePlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_TimeToRescuePlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_ThrowableActor_MetaData[] = {
		{ "ModuleRelativePath", "TantrumnCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_ThrowableActor = { "ThrowableActor", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATantrumnCharacterBase, ThrowableActor), Z_Construct_UClass_AThrowableActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_ThrowableActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_ThrowableActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATantrumnCharacterBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_SprintSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_MinImpactSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_MaxImpactSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_MinStunTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_MaxStunTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_HeavyLandSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_CharacterThrowState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_CharacterThrowState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_ThrowSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_ThrowMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_CelebrateMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_LastGroundPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_bIsBeingRescued,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_TimeToRescuePlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumnCharacterBase_Statics::NewProp_ThrowableActor,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ATantrumnCharacterBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractInterface_NoRegister, (int32)VTABLE_OFFSET(ATantrumnCharacterBase, IInteractInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATantrumnCharacterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATantrumnCharacterBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATantrumnCharacterBase_Statics::ClassParams = {
		&ATantrumnCharacterBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATantrumnCharacterBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumnCharacterBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATantrumnCharacterBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumnCharacterBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATantrumnCharacterBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATantrumnCharacterBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATantrumnCharacterBase, 253005596);
	template<> TANTRUMN_API UClass* StaticClass<ATantrumnCharacterBase>()
	{
		return ATantrumnCharacterBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATantrumnCharacterBase(Z_Construct_UClass_ATantrumnCharacterBase, &ATantrumnCharacterBase::StaticClass, TEXT("/Script/Tantrumn"), TEXT("ATantrumnCharacterBase"), false, nullptr, nullptr, nullptr);

	void ATantrumnCharacterBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CharacterThrowState(TEXT("CharacterThrowState"));
		static const FName Name_LastGroundPosition(TEXT("LastGroundPosition"));
		static const FName Name_bIsBeingRescued(TEXT("bIsBeingRescued"));

		const bool bIsValid = true
			&& Name_CharacterThrowState == ClassReps[(int32)ENetFields_Private::CharacterThrowState].Property->GetFName()
			&& Name_LastGroundPosition == ClassReps[(int32)ENetFields_Private::LastGroundPosition].Property->GetFName()
			&& Name_bIsBeingRescued == ClassReps[(int32)ENetFields_Private::bIsBeingRescued].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ATantrumnCharacterBase"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATantrumnCharacterBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
