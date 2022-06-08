// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FHitResult;
struct FVector;
#ifdef TANTRUMN_ThrowableActor_generated_h
#error "ThrowableActor.generated.h already included, missing '#pragma once' in ThrowableActor.h"
#endif
#define TANTRUMN_ThrowableActor_generated_h

#define Tantrumn_Week_10_Source_Tantrumn_ThrowableActor_h_17_SPARSE_DATA
#define Tantrumn_Week_10_Source_Tantrumn_ThrowableActor_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetHomingTarget); \
	DECLARE_FUNCTION(execProjectileStop); \
	DECLARE_FUNCTION(execToggleHighlight); \
	DECLARE_FUNCTION(execDrop); \
	DECLARE_FUNCTION(execLaunch); \
	DECLARE_FUNCTION(execPull); \
	DECLARE_FUNCTION(execIsIdle);


#define Tantrumn_Week_10_Source_Tantrumn_ThrowableActor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetHomingTarget); \
	DECLARE_FUNCTION(execProjectileStop); \
	DECLARE_FUNCTION(execToggleHighlight); \
	DECLARE_FUNCTION(execDrop); \
	DECLARE_FUNCTION(execLaunch); \
	DECLARE_FUNCTION(execPull); \
	DECLARE_FUNCTION(execIsIdle);


#define Tantrumn_Week_10_Source_Tantrumn_ThrowableActor_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAThrowableActor(); \
	friend struct Z_Construct_UClass_AThrowableActor_Statics; \
public: \
	DECLARE_CLASS(AThrowableActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tantrumn"), NO_API) \
	DECLARE_SERIALIZER(AThrowableActor)


#define Tantrumn_Week_10_Source_Tantrumn_ThrowableActor_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAThrowableActor(); \
	friend struct Z_Construct_UClass_AThrowableActor_Statics; \
public: \
	DECLARE_CLASS(AThrowableActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tantrumn"), NO_API) \
	DECLARE_SERIALIZER(AThrowableActor)


#define Tantrumn_Week_10_Source_Tantrumn_ThrowableActor_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AThrowableActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AThrowableActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AThrowableActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThrowableActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AThrowableActor(AThrowableActor&&); \
	NO_API AThrowableActor(const AThrowableActor&); \
public:


#define Tantrumn_Week_10_Source_Tantrumn_ThrowableActor_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AThrowableActor(AThrowableActor&&); \
	NO_API AThrowableActor(const AThrowableActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AThrowableActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThrowableActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AThrowableActor)


#define Tantrumn_Week_10_Source_Tantrumn_ThrowableActor_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StaticMeshComponent() { return STRUCT_OFFSET(AThrowableActor, StaticMeshComponent); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovementComponent() { return STRUCT_OFFSET(AThrowableActor, ProjectileMovementComponent); } \
	FORCEINLINE static uint32 __PPO__PullActor() { return STRUCT_OFFSET(AThrowableActor, PullActor); } \
	FORCEINLINE static uint32 __PPO__EffectType() { return STRUCT_OFFSET(AThrowableActor, EffectType); }


#define Tantrumn_Week_10_Source_Tantrumn_ThrowableActor_h_14_PROLOG
#define Tantrumn_Week_10_Source_Tantrumn_ThrowableActor_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tantrumn_Week_10_Source_Tantrumn_ThrowableActor_h_17_PRIVATE_PROPERTY_OFFSET \
	Tantrumn_Week_10_Source_Tantrumn_ThrowableActor_h_17_SPARSE_DATA \
	Tantrumn_Week_10_Source_Tantrumn_ThrowableActor_h_17_RPC_WRAPPERS \
	Tantrumn_Week_10_Source_Tantrumn_ThrowableActor_h_17_INCLASS \
	Tantrumn_Week_10_Source_Tantrumn_ThrowableActor_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tantrumn_Week_10_Source_Tantrumn_ThrowableActor_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tantrumn_Week_10_Source_Tantrumn_ThrowableActor_h_17_PRIVATE_PROPERTY_OFFSET \
	Tantrumn_Week_10_Source_Tantrumn_ThrowableActor_h_17_SPARSE_DATA \
	Tantrumn_Week_10_Source_Tantrumn_ThrowableActor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Tantrumn_Week_10_Source_Tantrumn_ThrowableActor_h_17_INCLASS_NO_PURE_DECLS \
	Tantrumn_Week_10_Source_Tantrumn_ThrowableActor_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANTRUMN_API UClass* StaticClass<class AThrowableActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tantrumn_Week_10_Source_Tantrumn_ThrowableActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
