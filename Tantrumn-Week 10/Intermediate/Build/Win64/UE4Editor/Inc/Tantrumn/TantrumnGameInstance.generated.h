// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGameStateBase;
class ATantrumnPlayerController;
class ATantrumnGameStateBase;
#ifdef TANTRUMN_TantrumnGameInstance_generated_h
#error "TantrumnGameInstance.generated.h already included, missing '#pragma once' in TantrumnGameInstance.h"
#endif
#define TANTRUMN_TantrumnGameInstance_generated_h

#define Tantrumn_Week_10_Source_Tantrumn_TantrumnGameInstance_h_16_SPARSE_DATA
#define Tantrumn_Week_10_Source_Tantrumn_TantrumnGameInstance_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnGameStateSet); \
	DECLARE_FUNCTION(execRestartGame); \
	DECLARE_FUNCTION(execOnRetrySelected); \
	DECLARE_FUNCTION(execGetGameState);


#define Tantrumn_Week_10_Source_Tantrumn_TantrumnGameInstance_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnGameStateSet); \
	DECLARE_FUNCTION(execRestartGame); \
	DECLARE_FUNCTION(execOnRetrySelected); \
	DECLARE_FUNCTION(execGetGameState);


#define Tantrumn_Week_10_Source_Tantrumn_TantrumnGameInstance_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTantrumnGameInstance(); \
	friend struct Z_Construct_UClass_UTantrumnGameInstance_Statics; \
public: \
	DECLARE_CLASS(UTantrumnGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Tantrumn"), NO_API) \
	DECLARE_SERIALIZER(UTantrumnGameInstance)


#define Tantrumn_Week_10_Source_Tantrumn_TantrumnGameInstance_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUTantrumnGameInstance(); \
	friend struct Z_Construct_UClass_UTantrumnGameInstance_Statics; \
public: \
	DECLARE_CLASS(UTantrumnGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Tantrumn"), NO_API) \
	DECLARE_SERIALIZER(UTantrumnGameInstance)


#define Tantrumn_Week_10_Source_Tantrumn_TantrumnGameInstance_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTantrumnGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTantrumnGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTantrumnGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTantrumnGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTantrumnGameInstance(UTantrumnGameInstance&&); \
	NO_API UTantrumnGameInstance(const UTantrumnGameInstance&); \
public:


#define Tantrumn_Week_10_Source_Tantrumn_TantrumnGameInstance_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTantrumnGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTantrumnGameInstance(UTantrumnGameInstance&&); \
	NO_API UTantrumnGameInstance(const UTantrumnGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTantrumnGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTantrumnGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTantrumnGameInstance)


#define Tantrumn_Week_10_Source_Tantrumn_TantrumnGameInstance_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GameWidgetClass() { return STRUCT_OFFSET(UTantrumnGameInstance, GameWidgetClass); } \
	FORCEINLINE static uint32 __PPO__GameWidgets() { return STRUCT_OFFSET(UTantrumnGameInstance, GameWidgets); } \
	FORCEINLINE static uint32 __PPO__TantrumnGameStateBase() { return STRUCT_OFFSET(UTantrumnGameInstance, TantrumnGameStateBase); }


#define Tantrumn_Week_10_Source_Tantrumn_TantrumnGameInstance_h_13_PROLOG
#define Tantrumn_Week_10_Source_Tantrumn_TantrumnGameInstance_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tantrumn_Week_10_Source_Tantrumn_TantrumnGameInstance_h_16_PRIVATE_PROPERTY_OFFSET \
	Tantrumn_Week_10_Source_Tantrumn_TantrumnGameInstance_h_16_SPARSE_DATA \
	Tantrumn_Week_10_Source_Tantrumn_TantrumnGameInstance_h_16_RPC_WRAPPERS \
	Tantrumn_Week_10_Source_Tantrumn_TantrumnGameInstance_h_16_INCLASS \
	Tantrumn_Week_10_Source_Tantrumn_TantrumnGameInstance_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tantrumn_Week_10_Source_Tantrumn_TantrumnGameInstance_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tantrumn_Week_10_Source_Tantrumn_TantrumnGameInstance_h_16_PRIVATE_PROPERTY_OFFSET \
	Tantrumn_Week_10_Source_Tantrumn_TantrumnGameInstance_h_16_SPARSE_DATA \
	Tantrumn_Week_10_Source_Tantrumn_TantrumnGameInstance_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Tantrumn_Week_10_Source_Tantrumn_TantrumnGameInstance_h_16_INCLASS_NO_PURE_DECLS \
	Tantrumn_Week_10_Source_Tantrumn_TantrumnGameInstance_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANTRUMN_API UClass* StaticClass<class UTantrumnGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tantrumn_Week_10_Source_Tantrumn_TantrumnGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
