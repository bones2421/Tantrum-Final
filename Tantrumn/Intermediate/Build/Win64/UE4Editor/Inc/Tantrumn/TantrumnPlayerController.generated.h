// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TANTRUMN_TantrumnPlayerController_generated_h
#error "TantrumnPlayerController.generated.h already included, missing '#pragma once' in TantrumnPlayerController.h"
#endif
#define TANTRUMN_TantrumnPlayerController_generated_h

#define Tantrumn_Week_10_Source_Tantrumn_TantrumnPlayerController_h_17_SPARSE_DATA
#define Tantrumn_Week_10_Source_Tantrumn_TantrumnPlayerController_h_17_RPC_WRAPPERS \
	virtual void ServerRestartLevel_Implementation(); \
	virtual void ClientReachedEnd_Implementation(); \
	virtual void ClientRestartGame_Implementation(); \
	virtual void ClientDisplayCountdown_Implementation(float GameCountdownDuration); \
 \
	DECLARE_FUNCTION(execServerRestartLevel); \
	DECLARE_FUNCTION(execClientReachedEnd); \
	DECLARE_FUNCTION(execClientRestartGame); \
	DECLARE_FUNCTION(execClientDisplayCountdown);


#define Tantrumn_Week_10_Source_Tantrumn_TantrumnPlayerController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerRestartLevel_Implementation(); \
	virtual void ClientReachedEnd_Implementation(); \
	virtual void ClientRestartGame_Implementation(); \
	virtual void ClientDisplayCountdown_Implementation(float GameCountdownDuration); \
 \
	DECLARE_FUNCTION(execServerRestartLevel); \
	DECLARE_FUNCTION(execClientReachedEnd); \
	DECLARE_FUNCTION(execClientRestartGame); \
	DECLARE_FUNCTION(execClientDisplayCountdown);


#define Tantrumn_Week_10_Source_Tantrumn_TantrumnPlayerController_h_17_EVENT_PARMS \
	struct TantrumnPlayerController_eventClientDisplayCountdown_Parms \
	{ \
		float GameCountdownDuration; \
	};


#define Tantrumn_Week_10_Source_Tantrumn_TantrumnPlayerController_h_17_CALLBACK_WRAPPERS
#define Tantrumn_Week_10_Source_Tantrumn_TantrumnPlayerController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATantrumnPlayerController(); \
	friend struct Z_Construct_UClass_ATantrumnPlayerController_Statics; \
public: \
	DECLARE_CLASS(ATantrumnPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tantrumn"), NO_API) \
	DECLARE_SERIALIZER(ATantrumnPlayerController)


#define Tantrumn_Week_10_Source_Tantrumn_TantrumnPlayerController_h_17_INCLASS \
private: \
	static void StaticRegisterNativesATantrumnPlayerController(); \
	friend struct Z_Construct_UClass_ATantrumnPlayerController_Statics; \
public: \
	DECLARE_CLASS(ATantrumnPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tantrumn"), NO_API) \
	DECLARE_SERIALIZER(ATantrumnPlayerController)


#define Tantrumn_Week_10_Source_Tantrumn_TantrumnPlayerController_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATantrumnPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATantrumnPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATantrumnPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATantrumnPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATantrumnPlayerController(ATantrumnPlayerController&&); \
	NO_API ATantrumnPlayerController(const ATantrumnPlayerController&); \
public:


#define Tantrumn_Week_10_Source_Tantrumn_TantrumnPlayerController_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATantrumnPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATantrumnPlayerController(ATantrumnPlayerController&&); \
	NO_API ATantrumnPlayerController(const ATantrumnPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATantrumnPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATantrumnPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATantrumnPlayerController)


#define Tantrumn_Week_10_Source_Tantrumn_TantrumnPlayerController_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HUDClass() { return STRUCT_OFFSET(ATantrumnPlayerController, HUDClass); } \
	FORCEINLINE static uint32 __PPO__HUDWidget() { return STRUCT_OFFSET(ATantrumnPlayerController, HUDWidget); } \
	FORCEINLINE static uint32 __PPO__BaseLookUpRate() { return STRUCT_OFFSET(ATantrumnPlayerController, BaseLookUpRate); } \
	FORCEINLINE static uint32 __PPO__BaseLookRightRate() { return STRUCT_OFFSET(ATantrumnPlayerController, BaseLookRightRate); } \
	FORCEINLINE static uint32 __PPO__JumpSound() { return STRUCT_OFFSET(ATantrumnPlayerController, JumpSound); } \
	FORCEINLINE static uint32 __PPO__TantrumnGameState() { return STRUCT_OFFSET(ATantrumnPlayerController, TantrumnGameState); } \
	FORCEINLINE static uint32 __PPO__FlickThreshold() { return STRUCT_OFFSET(ATantrumnPlayerController, FlickThreshold); }


#define Tantrumn_Week_10_Source_Tantrumn_TantrumnPlayerController_h_14_PROLOG \
	Tantrumn_Week_10_Source_Tantrumn_TantrumnPlayerController_h_17_EVENT_PARMS


#define Tantrumn_Week_10_Source_Tantrumn_TantrumnPlayerController_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tantrumn_Week_10_Source_Tantrumn_TantrumnPlayerController_h_17_PRIVATE_PROPERTY_OFFSET \
	Tantrumn_Week_10_Source_Tantrumn_TantrumnPlayerController_h_17_SPARSE_DATA \
	Tantrumn_Week_10_Source_Tantrumn_TantrumnPlayerController_h_17_RPC_WRAPPERS \
	Tantrumn_Week_10_Source_Tantrumn_TantrumnPlayerController_h_17_CALLBACK_WRAPPERS \
	Tantrumn_Week_10_Source_Tantrumn_TantrumnPlayerController_h_17_INCLASS \
	Tantrumn_Week_10_Source_Tantrumn_TantrumnPlayerController_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tantrumn_Week_10_Source_Tantrumn_TantrumnPlayerController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tantrumn_Week_10_Source_Tantrumn_TantrumnPlayerController_h_17_PRIVATE_PROPERTY_OFFSET \
	Tantrumn_Week_10_Source_Tantrumn_TantrumnPlayerController_h_17_SPARSE_DATA \
	Tantrumn_Week_10_Source_Tantrumn_TantrumnPlayerController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Tantrumn_Week_10_Source_Tantrumn_TantrumnPlayerController_h_17_CALLBACK_WRAPPERS \
	Tantrumn_Week_10_Source_Tantrumn_TantrumnPlayerController_h_17_INCLASS_NO_PURE_DECLS \
	Tantrumn_Week_10_Source_Tantrumn_TantrumnPlayerController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANTRUMN_API UClass* StaticClass<class ATantrumnPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tantrumn_Week_10_Source_Tantrumn_TantrumnPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
