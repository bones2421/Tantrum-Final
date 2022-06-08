// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tantrumn/TantrumnLocalMPCamera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTantrumnLocalMPCamera() {}
// Cross Module References
	TANTRUMN_API UClass* Z_Construct_UClass_ATantrumnLocalMPCamera_NoRegister();
	TANTRUMN_API UClass* Z_Construct_UClass_ATantrumnLocalMPCamera();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Tantrumn();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	void ATantrumnLocalMPCamera::StaticRegisterNativesATantrumnLocalMPCamera()
	{
	}
	UClass* Z_Construct_UClass_ATantrumnLocalMPCamera_NoRegister()
	{
		return ATantrumnLocalMPCamera::StaticClass();
	}
	struct Z_Construct_UClass_ATantrumnLocalMPCamera_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArmComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArmComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinArmLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinArmLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxArmLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxArmLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinPlayerDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinPlayerDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPlayerDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxPlayerDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATantrumnLocalMPCamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Tantrumn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumnLocalMPCamera_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TantrumnLocalMPCamera.h" },
		{ "ModuleRelativePath", "TantrumnLocalMPCamera.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumnLocalMPCamera_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CameraActor" },
		{ "Comment", "/** The camera component for this camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TantrumnLocalMPCamera.h" },
		{ "ToolTip", "The camera component for this camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATantrumnLocalMPCamera_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATantrumnLocalMPCamera, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATantrumnLocalMPCamera_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumnLocalMPCamera_Statics::NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumnLocalMPCamera_Statics::NewProp_SpringArmComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CameraActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TantrumnLocalMPCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATantrumnLocalMPCamera_Statics::NewProp_SpringArmComponent = { "SpringArmComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATantrumnLocalMPCamera, SpringArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATantrumnLocalMPCamera_Statics::NewProp_SpringArmComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumnLocalMPCamera_Statics::NewProp_SpringArmComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumnLocalMPCamera_Statics::NewProp_MinArmLength_MetaData[] = {
		{ "Category", "Spring Arm" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "TantrumnLocalMPCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATantrumnLocalMPCamera_Statics::NewProp_MinArmLength = { "MinArmLength", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATantrumnLocalMPCamera, MinArmLength), METADATA_PARAMS(Z_Construct_UClass_ATantrumnLocalMPCamera_Statics::NewProp_MinArmLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumnLocalMPCamera_Statics::NewProp_MinArmLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumnLocalMPCamera_Statics::NewProp_MaxArmLength_MetaData[] = {
		{ "Category", "Spring Arm" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "TantrumnLocalMPCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATantrumnLocalMPCamera_Statics::NewProp_MaxArmLength = { "MaxArmLength", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATantrumnLocalMPCamera, MaxArmLength), METADATA_PARAMS(Z_Construct_UClass_ATantrumnLocalMPCamera_Statics::NewProp_MaxArmLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumnLocalMPCamera_Statics::NewProp_MaxArmLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumnLocalMPCamera_Statics::NewProp_MinPlayerDistance_MetaData[] = {
		{ "Category", "Player Distance" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "TantrumnLocalMPCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATantrumnLocalMPCamera_Statics::NewProp_MinPlayerDistance = { "MinPlayerDistance", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATantrumnLocalMPCamera, MinPlayerDistance), METADATA_PARAMS(Z_Construct_UClass_ATantrumnLocalMPCamera_Statics::NewProp_MinPlayerDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumnLocalMPCamera_Statics::NewProp_MinPlayerDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATantrumnLocalMPCamera_Statics::NewProp_MaxPlayerDistance_MetaData[] = {
		{ "Category", "Player Distance" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "TantrumnLocalMPCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATantrumnLocalMPCamera_Statics::NewProp_MaxPlayerDistance = { "MaxPlayerDistance", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATantrumnLocalMPCamera, MaxPlayerDistance), METADATA_PARAMS(Z_Construct_UClass_ATantrumnLocalMPCamera_Statics::NewProp_MaxPlayerDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumnLocalMPCamera_Statics::NewProp_MaxPlayerDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATantrumnLocalMPCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumnLocalMPCamera_Statics::NewProp_CameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumnLocalMPCamera_Statics::NewProp_SpringArmComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumnLocalMPCamera_Statics::NewProp_MinArmLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumnLocalMPCamera_Statics::NewProp_MaxArmLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumnLocalMPCamera_Statics::NewProp_MinPlayerDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumnLocalMPCamera_Statics::NewProp_MaxPlayerDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATantrumnLocalMPCamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATantrumnLocalMPCamera>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATantrumnLocalMPCamera_Statics::ClassParams = {
		&ATantrumnLocalMPCamera::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATantrumnLocalMPCamera_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumnLocalMPCamera_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATantrumnLocalMPCamera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumnLocalMPCamera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATantrumnLocalMPCamera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATantrumnLocalMPCamera_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATantrumnLocalMPCamera, 1213912628);
	template<> TANTRUMN_API UClass* StaticClass<ATantrumnLocalMPCamera>()
	{
		return ATantrumnLocalMPCamera::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATantrumnLocalMPCamera(Z_Construct_UClass_ATantrumnLocalMPCamera, &ATantrumnLocalMPCamera::StaticClass, TEXT("/Script/Tantrumn"), TEXT("ATantrumnLocalMPCamera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATantrumnLocalMPCamera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
