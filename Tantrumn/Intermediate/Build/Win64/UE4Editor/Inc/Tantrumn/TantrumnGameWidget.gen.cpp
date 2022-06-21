// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tantrumn/TantrumnGameWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTantrumnGameWidget() {}
// Cross Module References
	TANTRUMN_API UClass* Z_Construct_UClass_UTantrumnGameWidget_NoRegister();
	TANTRUMN_API UClass* Z_Construct_UClass_UTantrumnGameWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Tantrumn();
	TANTRUMN_API UClass* Z_Construct_UClass_ATantrumnPlayerController_NoRegister();
// End Cross Module References
	static FName NAME_UTantrumnGameWidget_DisplayResults = FName(TEXT("DisplayResults"));
	void UTantrumnGameWidget::DisplayResults()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTantrumnGameWidget_DisplayResults),NULL);
	}
	static FName NAME_UTantrumnGameWidget_LevelComplete = FName(TEXT("LevelComplete"));
	void UTantrumnGameWidget::LevelComplete()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTantrumnGameWidget_LevelComplete),NULL);
	}
	static FName NAME_UTantrumnGameWidget_RemoveResults = FName(TEXT("RemoveResults"));
	void UTantrumnGameWidget::RemoveResults()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTantrumnGameWidget_RemoveResults),NULL);
	}
	static FName NAME_UTantrumnGameWidget_StartCountdown = FName(TEXT("StartCountdown"));
	void UTantrumnGameWidget::StartCountdown(float CountdownTime, ATantrumnPlayerController* TantrumnPlayerController)
	{
		TantrumnGameWidget_eventStartCountdown_Parms Parms;
		Parms.CountdownTime=CountdownTime;
		Parms.TantrumnPlayerController=TantrumnPlayerController;
		ProcessEvent(FindFunctionChecked(NAME_UTantrumnGameWidget_StartCountdown),&Parms);
	}
	void UTantrumnGameWidget::StaticRegisterNativesUTantrumnGameWidget()
	{
	}
	struct Z_Construct_UFunction_UTantrumnGameWidget_DisplayResults_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTantrumnGameWidget_DisplayResults_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TantrumnGameWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTantrumnGameWidget_DisplayResults_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTantrumnGameWidget, nullptr, "DisplayResults", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTantrumnGameWidget_DisplayResults_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTantrumnGameWidget_DisplayResults_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTantrumnGameWidget_DisplayResults()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTantrumnGameWidget_DisplayResults_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTantrumnGameWidget_LevelComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTantrumnGameWidget_LevelComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TantrumnGameWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTantrumnGameWidget_LevelComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTantrumnGameWidget, nullptr, "LevelComplete", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTantrumnGameWidget_LevelComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTantrumnGameWidget_LevelComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTantrumnGameWidget_LevelComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTantrumnGameWidget_LevelComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTantrumnGameWidget_RemoveResults_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTantrumnGameWidget_RemoveResults_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TantrumnGameWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTantrumnGameWidget_RemoveResults_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTantrumnGameWidget, nullptr, "RemoveResults", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTantrumnGameWidget_RemoveResults_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTantrumnGameWidget_RemoveResults_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTantrumnGameWidget_RemoveResults()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTantrumnGameWidget_RemoveResults_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTantrumnGameWidget_StartCountdown_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CountdownTime;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TantrumnPlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTantrumnGameWidget_StartCountdown_Statics::NewProp_CountdownTime = { "CountdownTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TantrumnGameWidget_eventStartCountdown_Parms, CountdownTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTantrumnGameWidget_StartCountdown_Statics::NewProp_TantrumnPlayerController = { "TantrumnPlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TantrumnGameWidget_eventStartCountdown_Parms, TantrumnPlayerController), Z_Construct_UClass_ATantrumnPlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTantrumnGameWidget_StartCountdown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTantrumnGameWidget_StartCountdown_Statics::NewProp_CountdownTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTantrumnGameWidget_StartCountdown_Statics::NewProp_TantrumnPlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTantrumnGameWidget_StartCountdown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TantrumnGameWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTantrumnGameWidget_StartCountdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTantrumnGameWidget, nullptr, "StartCountdown", nullptr, nullptr, sizeof(TantrumnGameWidget_eventStartCountdown_Parms), Z_Construct_UFunction_UTantrumnGameWidget_StartCountdown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTantrumnGameWidget_StartCountdown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTantrumnGameWidget_StartCountdown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTantrumnGameWidget_StartCountdown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTantrumnGameWidget_StartCountdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTantrumnGameWidget_StartCountdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTantrumnGameWidget_NoRegister()
	{
		return UTantrumnGameWidget::StaticClass();
	}
	struct Z_Construct_UClass_UTantrumnGameWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTantrumnGameWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Tantrumn,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTantrumnGameWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTantrumnGameWidget_DisplayResults, "DisplayResults" }, // 3841419543
		{ &Z_Construct_UFunction_UTantrumnGameWidget_LevelComplete, "LevelComplete" }, // 3556363965
		{ &Z_Construct_UFunction_UTantrumnGameWidget_RemoveResults, "RemoveResults" }, // 1903520252
		{ &Z_Construct_UFunction_UTantrumnGameWidget_StartCountdown, "StartCountdown" }, // 3712339821
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTantrumnGameWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TantrumnGameWidget.h" },
		{ "ModuleRelativePath", "TantrumnGameWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTantrumnGameWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTantrumnGameWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTantrumnGameWidget_Statics::ClassParams = {
		&UTantrumnGameWidget::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTantrumnGameWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTantrumnGameWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTantrumnGameWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTantrumnGameWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTantrumnGameWidget, 2262490135);
	template<> TANTRUMN_API UClass* StaticClass<UTantrumnGameWidget>()
	{
		return UTantrumnGameWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTantrumnGameWidget(Z_Construct_UClass_UTantrumnGameWidget, &UTantrumnGameWidget::StaticClass, TEXT("/Script/Tantrumn"), TEXT("UTantrumnGameWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTantrumnGameWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
