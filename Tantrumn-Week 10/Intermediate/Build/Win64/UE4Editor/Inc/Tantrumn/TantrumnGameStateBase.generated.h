// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EGameState : uint8;
#ifdef TANTRUMN_TantrumnGameStateBase_generated_h
#error "TantrumnGameStateBase.generated.h already included, missing '#pragma once' in TantrumnGameStateBase.h"
#endif
#define TANTRUMN_TantrumnGameStateBase_generated_h

#define Tantrumn_Week_10_Source_Tantrumn_TantrumnGameStateBase_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameResult_Statics; \
	TANTRUMN_API static class UScriptStruct* StaticStruct();


template<> TANTRUMN_API UScriptStruct* StaticStruct<struct FGameResult>();

#define Tantrumn_Week_10_Source_Tantrumn_TantrumnGameStateBase_h_38_SPARSE_DATA
#define Tantrumn_Week_10_Source_Tantrumn_TantrumnGameStateBase_h_38_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_GameState); \
	DECLARE_FUNCTION(execClearResults); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execGetGameState); \
	DECLARE_FUNCTION(execSetGameState);


#define Tantrumn_Week_10_Source_Tantrumn_TantrumnGameStateBase_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_GameState); \
	DECLARE_FUNCTION(execClearResults); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execGetGameState); \
	DECLARE_FUNCTION(execSetGameState);


#define Tantrumn_Week_10_Source_Tantrumn_TantrumnGameStateBase_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATantrumnGameStateBase(); \
	friend struct Z_Construct_UClass_ATantrumnGameStateBase_Statics; \
public: \
	DECLARE_CLASS(ATantrumnGameStateBase, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tantrumn"), NO_API) \
	DECLARE_SERIALIZER(ATantrumnGameStateBase) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		GameState=NETFIELD_REP_START, \
		Results, \
		NETFIELD_REP_END=Results	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Tantrumn_Week_10_Source_Tantrumn_TantrumnGameStateBase_h_38_INCLASS \
private: \
	static void StaticRegisterNativesATantrumnGameStateBase(); \
	friend struct Z_Construct_UClass_ATantrumnGameStateBase_Statics; \
public: \
	DECLARE_CLASS(ATantrumnGameStateBase, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tantrumn"), NO_API) \
	DECLARE_SERIALIZER(ATantrumnGameStateBase) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		GameState=NETFIELD_REP_START, \
		Results, \
		NETFIELD_REP_END=Results	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Tantrumn_Week_10_Source_Tantrumn_TantrumnGameStateBase_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATantrumnGameStateBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATantrumnGameStateBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATantrumnGameStateBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATantrumnGameStateBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATantrumnGameStateBase(ATantrumnGameStateBase&&); \
	NO_API ATantrumnGameStateBase(const ATantrumnGameStateBase&); \
public:


#define Tantrumn_Week_10_Source_Tantrumn_TantrumnGameStateBase_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATantrumnGameStateBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATantrumnGameStateBase(ATantrumnGameStateBase&&); \
	NO_API ATantrumnGameStateBase(const ATantrumnGameStateBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATantrumnGameStateBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATantrumnGameStateBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATantrumnGameStateBase)


#define Tantrumn_Week_10_Source_Tantrumn_TantrumnGameStateBase_h_38_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GameState() { return STRUCT_OFFSET(ATantrumnGameStateBase, GameState); } \
	FORCEINLINE static uint32 __PPO__Results() { return STRUCT_OFFSET(ATantrumnGameStateBase, Results); }


#define Tantrumn_Week_10_Source_Tantrumn_TantrumnGameStateBase_h_35_PROLOG
#define Tantrumn_Week_10_Source_Tantrumn_TantrumnGameStateBase_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tantrumn_Week_10_Source_Tantrumn_TantrumnGameStateBase_h_38_PRIVATE_PROPERTY_OFFSET \
	Tantrumn_Week_10_Source_Tantrumn_TantrumnGameStateBase_h_38_SPARSE_DATA \
	Tantrumn_Week_10_Source_Tantrumn_TantrumnGameStateBase_h_38_RPC_WRAPPERS \
	Tantrumn_Week_10_Source_Tantrumn_TantrumnGameStateBase_h_38_INCLASS \
	Tantrumn_Week_10_Source_Tantrumn_TantrumnGameStateBase_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tantrumn_Week_10_Source_Tantrumn_TantrumnGameStateBase_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tantrumn_Week_10_Source_Tantrumn_TantrumnGameStateBase_h_38_PRIVATE_PROPERTY_OFFSET \
	Tantrumn_Week_10_Source_Tantrumn_TantrumnGameStateBase_h_38_SPARSE_DATA \
	Tantrumn_Week_10_Source_Tantrumn_TantrumnGameStateBase_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	Tantrumn_Week_10_Source_Tantrumn_TantrumnGameStateBase_h_38_INCLASS_NO_PURE_DECLS \
	Tantrumn_Week_10_Source_Tantrumn_TantrumnGameStateBase_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANTRUMN_API UClass* StaticClass<class ATantrumnGameStateBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tantrumn_Week_10_Source_Tantrumn_TantrumnGameStateBase_h


#define FOREACH_ENUM_EGAMESTATE(op) \
	op(EGameState::None) \
	op(EGameState::Waiting) \
	op(EGameState::Playing) \
	op(EGameState::Paused) \
	op(EGameState::GameOver) 

enum class EGameState : uint8;
template<> TANTRUMN_API UEnum* StaticEnum<EGameState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
