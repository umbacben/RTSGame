// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game/RTSPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSPlayerController() {}
// Cross Module References
	GAME_API UClass* Z_Construct_UClass_ARTSPlayerController_NoRegister();
	GAME_API UClass* Z_Construct_UClass_ARTSPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Game();
	GAME_API UClass* Z_Construct_UClass_ARTSCamera_NoRegister();
// End Cross Module References
	void ARTSPlayerController::StaticRegisterNativesARTSPlayerController()
	{
	}
	UClass* Z_Construct_UClass_ARTSPlayerController_NoRegister()
	{
		return ARTSPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ARTSPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RTSCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RTSCamera;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARTSPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Game,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "RTSPlayerController.h" },
		{ "ModuleRelativePath", "RTSPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSPlayerController_Statics::NewProp_RTSCamera_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "RTSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARTSPlayerController_Statics::NewProp_RTSCamera = { "RTSCamera", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSPlayerController, RTSCamera), Z_Construct_UClass_ARTSCamera_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARTSPlayerController_Statics::NewProp_RTSCamera_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARTSPlayerController_Statics::NewProp_RTSCamera_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARTSPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPlayerController_Statics::NewProp_RTSCamera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARTSPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARTSPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARTSPlayerController_Statics::ClassParams = {
		&ARTSPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARTSPlayerController_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ARTSPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARTSPlayerController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ARTSPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARTSPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARTSPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARTSPlayerController, 763144835);
	template<> GAME_API UClass* StaticClass<ARTSPlayerController>()
	{
		return ARTSPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARTSPlayerController(Z_Construct_UClass_ARTSPlayerController, &ARTSPlayerController::StaticClass, TEXT("/Script/Game"), TEXT("ARTSPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARTSPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
