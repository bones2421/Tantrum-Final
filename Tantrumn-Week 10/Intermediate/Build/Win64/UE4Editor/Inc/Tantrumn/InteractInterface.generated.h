// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EEffectType : uint8;
#ifdef TANTRUMN_InteractInterface_generated_h
#error "InteractInterface.generated.h already included, missing '#pragma once' in InteractInterface.h"
#endif
#define TANTRUMN_InteractInterface_generated_h

#define Tantrumn_Week_10_Source_Tantrumn_InteractInterface_h_13_SPARSE_DATA
#define Tantrumn_Week_10_Source_Tantrumn_InteractInterface_h_13_RPC_WRAPPERS \
	virtual void ApplyEffect_Implementation(EEffectType EffectType, bool bIsBuff) {}; \
 \
	DECLARE_FUNCTION(execApplyEffect);


#define Tantrumn_Week_10_Source_Tantrumn_InteractInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ApplyEffect_Implementation(EEffectType EffectType, bool bIsBuff) {}; \
 \
	DECLARE_FUNCTION(execApplyEffect);


#define Tantrumn_Week_10_Source_Tantrumn_InteractInterface_h_13_EVENT_PARMS \
	struct InteractInterface_eventApplyEffect_Parms \
	{ \
		EEffectType EffectType; \
		bool bIsBuff; \
	};


#define Tantrumn_Week_10_Source_Tantrumn_InteractInterface_h_13_CALLBACK_WRAPPERS
#define Tantrumn_Week_10_Source_Tantrumn_InteractInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TANTRUMN_API UInteractInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TANTRUMN_API, UInteractInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TANTRUMN_API UInteractInterface(UInteractInterface&&); \
	TANTRUMN_API UInteractInterface(const UInteractInterface&); \
public:


#define Tantrumn_Week_10_Source_Tantrumn_InteractInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TANTRUMN_API UInteractInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TANTRUMN_API UInteractInterface(UInteractInterface&&); \
	TANTRUMN_API UInteractInterface(const UInteractInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TANTRUMN_API, UInteractInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractInterface)


#define Tantrumn_Week_10_Source_Tantrumn_InteractInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractInterface(); \
	friend struct Z_Construct_UClass_UInteractInterface_Statics; \
public: \
	DECLARE_CLASS(UInteractInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Tantrumn"), TANTRUMN_API) \
	DECLARE_SERIALIZER(UInteractInterface)


#define Tantrumn_Week_10_Source_Tantrumn_InteractInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Tantrumn_Week_10_Source_Tantrumn_InteractInterface_h_13_GENERATED_UINTERFACE_BODY() \
	Tantrumn_Week_10_Source_Tantrumn_InteractInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tantrumn_Week_10_Source_Tantrumn_InteractInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Tantrumn_Week_10_Source_Tantrumn_InteractInterface_h_13_GENERATED_UINTERFACE_BODY() \
	Tantrumn_Week_10_Source_Tantrumn_InteractInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tantrumn_Week_10_Source_Tantrumn_InteractInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractInterface() {} \
public: \
	typedef UInteractInterface UClassType; \
	typedef IInteractInterface ThisClass; \
	static void Execute_ApplyEffect(UObject* O, EEffectType EffectType, bool bIsBuff); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Tantrumn_Week_10_Source_Tantrumn_InteractInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IInteractInterface() {} \
public: \
	typedef UInteractInterface UClassType; \
	typedef IInteractInterface ThisClass; \
	static void Execute_ApplyEffect(UObject* O, EEffectType EffectType, bool bIsBuff); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Tantrumn_Week_10_Source_Tantrumn_InteractInterface_h_10_PROLOG \
	Tantrumn_Week_10_Source_Tantrumn_InteractInterface_h_13_EVENT_PARMS


#define Tantrumn_Week_10_Source_Tantrumn_InteractInterface_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tantrumn_Week_10_Source_Tantrumn_InteractInterface_h_13_SPARSE_DATA \
	Tantrumn_Week_10_Source_Tantrumn_InteractInterface_h_13_RPC_WRAPPERS \
	Tantrumn_Week_10_Source_Tantrumn_InteractInterface_h_13_CALLBACK_WRAPPERS \
	Tantrumn_Week_10_Source_Tantrumn_InteractInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tantrumn_Week_10_Source_Tantrumn_InteractInterface_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tantrumn_Week_10_Source_Tantrumn_InteractInterface_h_13_SPARSE_DATA \
	Tantrumn_Week_10_Source_Tantrumn_InteractInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Tantrumn_Week_10_Source_Tantrumn_InteractInterface_h_13_CALLBACK_WRAPPERS \
	Tantrumn_Week_10_Source_Tantrumn_InteractInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANTRUMN_API UClass* StaticClass<class UInteractInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tantrumn_Week_10_Source_Tantrumn_InteractInterface_h


#define FOREACH_ENUM_EEFFECTTYPE(op) \
	op(EEffectType::None) \
	op(EEffectType::Speed) \
	op(EEffectType::Jump) \
	op(EEffectType::Power) 

enum class EEffectType : uint8;
template<> TANTRUMN_API UEnum* StaticEnum<EEffectType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
