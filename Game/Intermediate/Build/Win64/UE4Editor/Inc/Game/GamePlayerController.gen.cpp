// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game/GamePlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGamePlayerController() {}
// Cross Module References
	GAME_API UClass* Z_Construct_UClass_AGamePlayerController_NoRegister();
	GAME_API UClass* Z_Construct_UClass_AGamePlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Game();
// End Cross Module References
	void AGamePlayerController::StaticRegisterNativesAGamePlayerController()
	{
	}
	UClass* Z_Construct_UClass_AGamePlayerController_NoRegister()
	{
		return AGamePlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AGamePlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGamePlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Game,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGamePlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GamePlayerController.h" },
		{ "ModuleRelativePath", "GamePlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGamePlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGamePlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGamePlayerController_Statics::ClassParams = {
		&AGamePlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGamePlayerController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGamePlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGamePlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGamePlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGamePlayerController, 2706105084);
	template<> GAME_API UClass* StaticClass<AGamePlayerController>()
	{
		return AGamePlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGamePlayerController(Z_Construct_UClass_AGamePlayerController, &AGamePlayerController::StaticClass, TEXT("/Script/Game"), TEXT("AGamePlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGamePlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
