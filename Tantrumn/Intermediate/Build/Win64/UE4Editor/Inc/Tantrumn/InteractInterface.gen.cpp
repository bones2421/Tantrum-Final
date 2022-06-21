// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tantrumn/InteractInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractInterface() {}
// Cross Module References
	TANTRUMN_API UEnum* Z_Construct_UEnum_Tantrumn_EEffectType();
	UPackage* Z_Construct_UPackage__Script_Tantrumn();
	TANTRUMN_API UClass* Z_Construct_UClass_UInteractInterface_NoRegister();
	TANTRUMN_API UClass* Z_Construct_UClass_UInteractInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
// End Cross Module References
	static UEnum* EEffectType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Tantrumn_EEffectType, Z_Construct_UPackage__Script_Tantrumn(), TEXT("EEffectType"));
		}
		return Singleton;
	}
	template<> TANTRUMN_API UEnum* StaticEnum<EEffectType>()
	{
		return EEffectType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEffectType(EEffectType_StaticEnum, TEXT("/Script/Tantrumn"), TEXT("EEffectType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Tantrumn_EEffectType_Hash() { return 31386609U; }
	UEnum* Z_Construct_UEnum_Tantrumn_EEffectType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Tantrumn();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEffectType"), 0, Get_Z_Construct_UEnum_Tantrumn_EEffectType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEffectType::None", (int64)EEffectType::None },
				{ "EEffectType::Speed", (int64)EEffectType::Speed },
				{ "EEffectType::Jump", (int64)EEffectType::Jump },
				{ "EEffectType::Power", (int64)EEffectType::Power },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Jump.DisplayName", "JumpBuff" },
				{ "Jump.Name", "EEffectType::Jump" },
				{ "ModuleRelativePath", "InteractInterface.h" },
				{ "None.DisplayName", "None" },
				{ "None.Name", "EEffectType::None" },
				{ "Power.DisplayName", "PowerBuff" },
				{ "Power.Name", "EEffectType::Power" },
				{ "Speed.DisplayName", "SpeedBuff" },
				{ "Speed.Name", "EEffectType::Speed" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Tantrumn,
				nullptr,
				"EEffectType",
				"EEffectType",
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
	DEFINE_FUNCTION(IInteractInterface::execApplyEffect)
	{
		P_GET_ENUM(EEffectType,Z_Param_EffectType);
		P_GET_UBOOL(Z_Param_bIsBuff);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyEffect_Implementation(EEffectType(Z_Param_EffectType),Z_Param_bIsBuff);
		P_NATIVE_END;
	}
	void IInteractInterface::ApplyEffect(EEffectType EffectType, bool bIsBuff)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ApplyEffect instead.");
	}
	void UInteractInterface::StaticRegisterNativesUInteractInterface()
	{
		UClass* Class = UInteractInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyEffect", &IInteractInterface::execApplyEffect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteractInterface_ApplyEffect_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EffectType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EffectType;
		static void NewProp_bIsBuff_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsBuff;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInteractInterface_ApplyEffect_Statics::NewProp_EffectType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInteractInterface_ApplyEffect_Statics::NewProp_EffectType = { "EffectType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractInterface_eventApplyEffect_Parms, EffectType), Z_Construct_UEnum_Tantrumn_EEffectType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInteractInterface_ApplyEffect_Statics::NewProp_bIsBuff_SetBit(void* Obj)
	{
		((InteractInterface_eventApplyEffect_Parms*)Obj)->bIsBuff = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractInterface_ApplyEffect_Statics::NewProp_bIsBuff = { "bIsBuff", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InteractInterface_eventApplyEffect_Parms), &Z_Construct_UFunction_UInteractInterface_ApplyEffect_Statics::NewProp_bIsBuff_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractInterface_ApplyEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractInterface_ApplyEffect_Statics::NewProp_EffectType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractInterface_ApplyEffect_Statics::NewProp_EffectType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractInterface_ApplyEffect_Statics::NewProp_bIsBuff,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractInterface_ApplyEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interact" },
		{ "Comment", "/// ** Implementations ** ///\n" },
		{ "ModuleRelativePath", "InteractInterface.h" },
		{ "ToolTip", "** Implementations **" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractInterface_ApplyEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractInterface, nullptr, "ApplyEffect", nullptr, nullptr, sizeof(InteractInterface_eventApplyEffect_Parms), Z_Construct_UFunction_UInteractInterface_ApplyEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractInterface_ApplyEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractInterface_ApplyEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractInterface_ApplyEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractInterface_ApplyEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractInterface_ApplyEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInteractInterface_NoRegister()
	{
		return UInteractInterface::StaticClass();
	}
	struct Z_Construct_UClass_UInteractInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Tantrumn,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractInterface_ApplyEffect, "ApplyEffect" }, // 1449069082
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "InteractInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractInterface_Statics::ClassParams = {
		&UInteractInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractInterface, 2558615339);
	template<> TANTRUMN_API UClass* StaticClass<UInteractInterface>()
	{
		return UInteractInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractInterface(Z_Construct_UClass_UInteractInterface, &UInteractInterface::StaticClass, TEXT("/Script/Tantrumn"), TEXT("UInteractInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractInterface);
	static FName NAME_UInteractInterface_ApplyEffect = FName(TEXT("ApplyEffect"));
	void IInteractInterface::Execute_ApplyEffect(UObject* O, EEffectType EffectType, bool bIsBuff)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInteractInterface::StaticClass()));
		InteractInterface_eventApplyEffect_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UInteractInterface_ApplyEffect);
		if (Func)
		{
			Parms.EffectType=EffectType;
			Parms.bIsBuff=bIsBuff;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IInteractInterface*)(O->GetNativeInterfaceAddress(UInteractInterface::StaticClass())))
		{
			I->ApplyEffect_Implementation(EffectType,bIsBuff);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
