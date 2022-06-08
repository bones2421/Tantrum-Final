// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECharacterThrowState : uint8;
struct FBranchingPointNotifyPayload;
class UAnimMontage;
class AThrowableActor;
#ifdef TANTRUMN_TantrumnCharacterBase_generated_h
#error "TantrumnCharacterBase.generated.h already included, missing '#pragma once' in TantrumnCharacterBase.h"
#endif
#define TANTRUMN_TantrumnCharacterBase_generated_h

#define Tantrumn_Week_10_Source_Tantrumn_TantrumnCharacterBase_h_26_SPARSE_DATA
#define Tantrumn_Week_10_Source_Tantrumn_TantrumnCharacterBase_h_26_RPC_WRAPPERS \
	virtual void MulticastPlayCelebrateMontage_Implementation(); \
	virtual void ServerFinishThrow_Implementation(); \
	virtual void ServerBeginThrow_Implementation(); \
	virtual void ClientThrowableAttached_Implementation(AThrowableActor* InThrowableActor); \
	virtual void MulticastRequestThrowObject_Implementation(); \
	virtual bool ServerRequestThrowObject_Validate(); \
	virtual void ServerRequestThrowObject_Implementation(); \
	virtual void ServerRequestPullObject_Implementation(bool bIsPulling); \
	virtual void ServerPullObject_Implementation(AThrowableActor* InThrowableActor); \
	virtual void ServerSprintEnd_Implementation(); \
	virtual void ServerSprintStart_Implementation(); \
	virtual void ServerPlayCelebrateMontage_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_IsBeingRescued); \
	DECLARE_FUNCTION(execOnRep_CharacterThrowState); \
	DECLARE_FUNCTION(execOnNotifyEndReceived); \
	DECLARE_FUNCTION(execOnNotifyBeginReceived); \
	DECLARE_FUNCTION(execOnMontageEnded); \
	DECLARE_FUNCTION(execOnMontageBlendingOut); \
	DECLARE_FUNCTION(execMulticastPlayCelebrateMontage); \
	DECLARE_FUNCTION(execServerFinishThrow); \
	DECLARE_FUNCTION(execServerBeginThrow); \
	DECLARE_FUNCTION(execClientThrowableAttached); \
	DECLARE_FUNCTION(execMulticastRequestThrowObject); \
	DECLARE_FUNCTION(execServerRequestThrowObject); \
	DECLARE_FUNCTION(execServerRequestPullObject); \
	DECLARE_FUNCTION(execServerPullObject); \
	DECLARE_FUNCTION(execServerSprintEnd); \
	DECLARE_FUNCTION(execServerSprintStart); \
	DECLARE_FUNCTION(execServerPlayCelebrateMontage); \
	DECLARE_FUNCTION(execIsHovering); \
	DECLARE_FUNCTION(execIsBeingRescued); \
	DECLARE_FUNCTION(execIsStunned); \
	DECLARE_FUNCTION(execGetCharacterThrowState); \
	DECLARE_FUNCTION(execIsThrowing); \
	DECLARE_FUNCTION(execIsPullingObject);


#define Tantrumn_Week_10_Source_Tantrumn_TantrumnCharacterBase_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastPlayCelebrateMontage_Implementation(); \
	virtual void ServerFinishThrow_Implementation(); \
	virtual void ServerBeginThrow_Implementation(); \
	virtual void ClientThrowableAttached_Implementation(AThrowableActor* InThrowableActor); \
	virtual void MulticastRequestThrowObject_Implementation(); \
	virtual bool ServerRequestThrowObject_Validate(); \
	virtual void ServerRequestThrowObject_Implementation(); \
	virtual void ServerRequestPullObject_Implementation(bool bIsPulling); \
	virtual void ServerPullObject_Implementation(AThrowableActor* InThrowableActor); \
	virtual void ServerSprintEnd_Implementation(); \
	virtual void ServerSprintStart_Implementation(); \
	virtual void ServerPlayCelebrateMontage_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_IsBeingRescued); \
	DECLARE_FUNCTION(execOnRep_CharacterThrowState); \
	DECLARE_FUNCTION(execOnNotifyEndReceived); \
	DECLARE_FUNCTION(execOnNotifyBeginReceived); \
	DECLARE_FUNCTION(execOnMontageEnded); \
	DECLARE_FUNCTION(execOnMontageBlendingOut); \
	DECLARE_FUNCTION(execMulticastPlayCelebrateMontage); \
	DECLARE_FUNCTION(execServerFinishThrow); \
	DECLARE_FUNCTION(execServerBeginThrow); \
	DECLARE_FUNCTION(execClientThrowableAttached); \
	DECLARE_FUNCTION(execMulticastRequestThrowObject); \
	DECLARE_FUNCTION(execServerRequestThrowObject); \
	DECLARE_FUNCTION(execServerRequestPullObject); \
	DECLARE_FUNCTION(execServerPullObject); \
	DECLARE_FUNCTION(execServerSprintEnd); \
	DECLARE_FUNCTION(execServerSprintStart); \
	DECLARE_FUNCTION(execServerPlayCelebrateMontage); \
	DECLARE_FUNCTION(execIsHovering); \
	DECLARE_FUNCTION(execIsBeingRescued); \
	DECLARE_FUNCTION(execIsStunned); \
	DECLARE_FUNCTION(execGetCharacterThrowState); \
	DECLARE_FUNCTION(execIsThrowing); \
	DECLARE_FUNCTION(execIsPullingObject);


#define Tantrumn_Week_10_Source_Tantrumn_TantrumnCharacterBase_h_26_EVENT_PARMS \
	struct TantrumnCharacterBase_eventClientThrowableAttached_Parms \
	{ \
		AThrowableActor* InThrowableActor; \
	}; \
	struct TantrumnCharacterBase_eventServerPullObject_Parms \
	{ \
		AThrowableActor* InThrowableActor; \
	}; \
	struct TantrumnCharacterBase_eventServerRequestPullObject_Parms \
	{ \
		bool bIsPulling; \
	};


#define Tantrumn_Week_10_Source_Tantrumn_TantrumnCharacterBase_h_26_CALLBACK_WRAPPERS
#define Tantrumn_Week_10_Source_Tantrumn_TantrumnCharacterBase_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATantrumnCharacterBase(); \
	friend struct Z_Construct_UClass_ATantrumnCharacterBase_Statics; \
public: \
	DECLARE_CLASS(ATantrumnCharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tantrumn"), NO_API) \
	DECLARE_SERIALIZER(ATantrumnCharacterBase) \
	virtual UObject* _getUObject() const override { return const_cast<ATantrumnCharacterBase*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CharacterThrowState=NETFIELD_REP_START, \
		LastGroundPosition, \
		bIsBeingRescued, \
		NETFIELD_REP_END=bIsBeingRescued	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Tantrumn_Week_10_Source_Tantrumn_TantrumnCharacterBase_h_26_INCLASS \
private: \
	static void StaticRegisterNativesATantrumnCharacterBase(); \
	friend struct Z_Construct_UClass_ATantrumnCharacterBase_Statics; \
public: \
	DECLARE_CLASS(ATantrumnCharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tantrumn"), NO_API) \
	DECLARE_SERIALIZER(ATantrumnCharacterBase) \
	virtual UObject* _getUObject() const override { return const_cast<ATantrumnCharacterBase*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CharacterThrowState=NETFIELD_REP_START, \
		LastGroundPosition, \
		bIsBeingRescued, \
		NETFIELD_REP_END=bIsBeingRescued	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Tantrumn_Week_10_Source_Tantrumn_TantrumnCharacterBase_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATantrumnCharacterBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATantrumnCharacterBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATantrumnCharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATantrumnCharacterBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATantrumnCharacterBase(ATantrumnCharacterBase&&); \
	NO_API ATantrumnCharacterBase(const ATantrumnCharacterBase&); \
public:


#define Tantrumn_Week_10_Source_Tantrumn_TantrumnCharacterBase_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATantrumnCharacterBase(ATantrumnCharacterBase&&); \
	NO_API ATantrumnCharacterBase(const ATantrumnCharacterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATantrumnCharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATantrumnCharacterBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATantrumnCharacterBase)


#define Tantrumn_Week_10_Source_Tantrumn_TantrumnCharacterBase_h_26_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SprintSpeed() { return STRUCT_OFFSET(ATantrumnCharacterBase, SprintSpeed); } \
	FORCEINLINE static uint32 __PPO__MinImpactSpeed() { return STRUCT_OFFSET(ATantrumnCharacterBase, MinImpactSpeed); } \
	FORCEINLINE static uint32 __PPO__MaxImpactSpeed() { return STRUCT_OFFSET(ATantrumnCharacterBase, MaxImpactSpeed); } \
	FORCEINLINE static uint32 __PPO__MinStunTime() { return STRUCT_OFFSET(ATantrumnCharacterBase, MinStunTime); } \
	FORCEINLINE static uint32 __PPO__MaxStunTime() { return STRUCT_OFFSET(ATantrumnCharacterBase, MaxStunTime); } \
	FORCEINLINE static uint32 __PPO__HeavyLandSound() { return STRUCT_OFFSET(ATantrumnCharacterBase, HeavyLandSound); } \
	FORCEINLINE static uint32 __PPO__CharacterThrowState() { return STRUCT_OFFSET(ATantrumnCharacterBase, CharacterThrowState); } \
	FORCEINLINE static uint32 __PPO__ThrowSpeed() { return STRUCT_OFFSET(ATantrumnCharacterBase, ThrowSpeed); } \
	FORCEINLINE static uint32 __PPO__ThrowMontage() { return STRUCT_OFFSET(ATantrumnCharacterBase, ThrowMontage); } \
	FORCEINLINE static uint32 __PPO__CelebrateMontage() { return STRUCT_OFFSET(ATantrumnCharacterBase, CelebrateMontage); } \
	FORCEINLINE static uint32 __PPO__LastGroundPosition() { return STRUCT_OFFSET(ATantrumnCharacterBase, LastGroundPosition); } \
	FORCEINLINE static uint32 __PPO__bIsBeingRescued() { return STRUCT_OFFSET(ATantrumnCharacterBase, bIsBeingRescued); } \
	FORCEINLINE static uint32 __PPO__TimeToRescuePlayer() { return STRUCT_OFFSET(ATantrumnCharacterBase, TimeToRescuePlayer); } \
	FORCEINLINE static uint32 __PPO__ThrowableActor() { return STRUCT_OFFSET(ATantrumnCharacterBase, ThrowableActor); }


#define Tantrumn_Week_10_Source_Tantrumn_TantrumnCharacterBase_h_23_PROLOG \
	Tantrumn_Week_10_Source_Tantrumn_TantrumnCharacterBase_h_26_EVENT_PARMS


#define Tantrumn_Week_10_Source_Tantrumn_TantrumnCharacterBase_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tantrumn_Week_10_Source_Tantrumn_TantrumnCharacterBase_h_26_PRIVATE_PROPERTY_OFFSET \
	Tantrumn_Week_10_Source_Tantrumn_TantrumnCharacterBase_h_26_SPARSE_DATA \
	Tantrumn_Week_10_Source_Tantrumn_TantrumnCharacterBase_h_26_RPC_WRAPPERS \
	Tantrumn_Week_10_Source_Tantrumn_TantrumnCharacterBase_h_26_CALLBACK_WRAPPERS \
	Tantrumn_Week_10_Source_Tantrumn_TantrumnCharacterBase_h_26_INCLASS \
	Tantrumn_Week_10_Source_Tantrumn_TantrumnCharacterBase_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tantrumn_Week_10_Source_Tantrumn_TantrumnCharacterBase_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tantrumn_Week_10_Source_Tantrumn_TantrumnCharacterBase_h_26_PRIVATE_PROPERTY_OFFSET \
	Tantrumn_Week_10_Source_Tantrumn_TantrumnCharacterBase_h_26_SPARSE_DATA \
	Tantrumn_Week_10_Source_Tantrumn_TantrumnCharacterBase_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	Tantrumn_Week_10_Source_Tantrumn_TantrumnCharacterBase_h_26_CALLBACK_WRAPPERS \
	Tantrumn_Week_10_Source_Tantrumn_TantrumnCharacterBase_h_26_INCLASS_NO_PURE_DECLS \
	Tantrumn_Week_10_Source_Tantrumn_TantrumnCharacterBase_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANTRUMN_API UClass* StaticClass<class ATantrumnCharacterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tantrumn_Week_10_Source_Tantrumn_TantrumnCharacterBase_h


#define FOREACH_ENUM_ECHARACTERTHROWSTATE(op) \
	op(ECharacterThrowState::None) \
	op(ECharacterThrowState::RequestingPull) \
	op(ECharacterThrowState::Pulling) \
	op(ECharacterThrowState::Attached) \
	op(ECharacterThrowState::Throwing) 

enum class ECharacterThrowState : uint8;
template<> TANTRUMN_API UEnum* StaticEnum<ECharacterThrowState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
