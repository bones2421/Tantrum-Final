// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPlayerGameState : uint8;
#ifdef TANTRUMN_TantrumnPlayerState_generated_h
#error "TantrumnPlayerState.generated.h already included, missing '#pragma once' in TantrumnPlayerState.h"
#endif
#define TANTRUMN_TantrumnPlayerState_generated_h

#define Tantrumn_Week_10_Source_Tantrumn_TantrumnPlayerState_h_22_SPARSE_DATA
#define Tantrumn_Week_10_Source_Tantrumn_TantrumnPlayerState_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_CurrentState); \
	DECLARE_FUNCTION(execIsWinner); \
	DECLARE_FUNCTION(execGetCurrentState);


#define Tantrumn_Week_10_Source_Tantrumn_TantrumnPlayerState_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_CurrentState); \
	DECLARE_FUNCTION(execIsWinner); \
	DECLARE_FUNCTION(execGetCurrentState);


#define Tantrumn_Week_10_Source_Tantrumn_TantrumnPlayerState_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATantrumnPlayerState(); \
	friend struct Z_Construct_UClass_ATantrumnPlayerState_Statics; \
public: \
	DECLARE_CLASS(ATantrumnPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tantrumn"), NO_API) \
	DECLARE_SERIALIZER(ATantrumnPlayerState) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentState=NETFIELD_REP_START, \
		bIsWinner, \
		NETFIELD_REP_END=bIsWinner	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Tantrumn_Week_10_Source_Tantrumn_TantrumnPlayerState_h_22_INCLASS \
private: \
	static void StaticRegisterNativesATantrumnPlayerState(); \
	friend struct Z_Construct_UClass_ATantrumnPlayerState_Statics; \
public: \
	DECLARE_CLASS(ATantrumnPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tantrumn"), NO_API) \
	DECLARE_SERIALIZER(ATantrumnPlayerState) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentState=NETFIELD_REP_START, \
		bIsWinner, \
		NETFIELD_REP_END=bIsWinner	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Tantrumn_Week_10_Source_Tantrumn_TantrumnPlayerState_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATantrumnPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATantrumnPlayerState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATantrumnPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATantrumnPlayerState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATantrumnPlayerState(ATantrumnPlayerState&&); \
	NO_API ATantrumnPlayerState(const ATantrumnPlayerState&); \
public:


#define Tantrumn_Week_10_Source_Tantrumn_TantrumnPlayerState_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATantrumnPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATantrumnPlayerState(ATantrumnPlayerState&&); \
	NO_API ATantrumnPlayerState(const ATantrumnPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATantrumnPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATantrumnPlayerState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATantrumnPlayerState)


#define Tantrumn_Week_10_Source_Tantrumn_TantrumnPlayerState_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentState() { return STRUCT_OFFSET(ATantrumnPlayerState, CurrentState); } \
	FORCEINLINE static uint32 __PPO__bIsWinner() { return STRUCT_OFFSET(ATantrumnPlayerState, bIsWinner); }


#define Tantrumn_Week_10_Source_Tantrumn_TantrumnPlayerState_h_19_PROLOG
#define Tantrumn_Week_10_Source_Tantrumn_TantrumnPlayerState_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tantrumn_Week_10_Source_Tantrumn_TantrumnPlayerState_h_22_PRIVATE_PROPERTY_OFFSET \
	Tantrumn_Week_10_Source_Tantrumn_TantrumnPlayerState_h_22_SPARSE_DATA \
	Tantrumn_Week_10_Source_Tantrumn_TantrumnPlayerState_h_22_RPC_WRAPPERS \
	Tantrumn_Week_10_Source_Tantrumn_TantrumnPlayerState_h_22_INCLASS \
	Tantrumn_Week_10_Source_Tantrumn_TantrumnPlayerState_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tantrumn_Week_10_Source_Tantrumn_TantrumnPlayerState_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tantrumn_Week_10_Source_Tantrumn_TantrumnPlayerState_h_22_PRIVATE_PROPERTY_OFFSET \
	Tantrumn_Week_10_Source_Tantrumn_TantrumnPlayerState_h_22_SPARSE_DATA \
	Tantrumn_Week_10_Source_Tantrumn_TantrumnPlayerState_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Tantrumn_Week_10_Source_Tantrumn_TantrumnPlayerState_h_22_INCLASS_NO_PURE_DECLS \
	Tantrumn_Week_10_Source_Tantrumn_TantrumnPlayerState_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANTRUMN_API UClass* StaticClass<class ATantrumnPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tantrumn_Week_10_Source_Tantrumn_TantrumnPlayerState_h


#define FOREACH_ENUM_EPLAYERGAMESTATE(op) \
	op(EPlayerGameState::None) \
	op(EPlayerGameState::Waiting) \
	op(EPlayerGameState::Playing) \
	op(EPlayerGameState::Finished) 

enum class EPlayerGameState : uint8;
template<> TANTRUMN_API UEnum* StaticEnum<EPlayerGameState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
