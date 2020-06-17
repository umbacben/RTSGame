// Copyright Epic Games, Inc. All Rights Reserved.
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
	DEFINE_FUNCTION(ARTSPlayerController::execMoveVertical)
	{
		P_GET_UBOOL(Z_Param_Direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveVertical(Z_Param_Direction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARTSPlayerController::execMoveHorizontal)
	{
		P_GET_UBOOL(Z_Param_Direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveHorizontal(Z_Param_Direction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARTSPlayerController::execZoomOut)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ZoomOut();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARTSPlayerController::execZoomIn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ZoomIn();
		P_NATIVE_END;
	}
	void ARTSPlayerController::StaticRegisterNativesARTSPlayerController()
	{
		UClass* Class = ARTSPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MoveHorizontal", &ARTSPlayerController::execMoveHorizontal },
			{ "MoveVertical", &ARTSPlayerController::execMoveVertical },
			{ "ZoomIn", &ARTSPlayerController::execZoomIn },
			{ "ZoomOut", &ARTSPlayerController::execZoomOut },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARTSPlayerController_MoveHorizontal_Statics
	{
		struct RTSPlayerController_eventMoveHorizontal_Parms
		{
			bool Direction;
		};
		static void NewProp_Direction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ARTSPlayerController_MoveHorizontal_Statics::NewProp_Direction_SetBit(void* Obj)
	{
		((RTSPlayerController_eventMoveHorizontal_Parms*)Obj)->Direction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARTSPlayerController_MoveHorizontal_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RTSPlayerController_eventMoveHorizontal_Parms), &Z_Construct_UFunction_ARTSPlayerController_MoveHorizontal_Statics::NewProp_Direction_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTSPlayerController_MoveHorizontal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSPlayerController_MoveHorizontal_Statics::NewProp_Direction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARTSPlayerController_MoveHorizontal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RTSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTSPlayerController_MoveHorizontal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTSPlayerController, nullptr, "MoveHorizontal", nullptr, nullptr, sizeof(RTSPlayerController_eventMoveHorizontal_Parms), Z_Construct_UFunction_ARTSPlayerController_MoveHorizontal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSPlayerController_MoveHorizontal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARTSPlayerController_MoveHorizontal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSPlayerController_MoveHorizontal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARTSPlayerController_MoveHorizontal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARTSPlayerController_MoveHorizontal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARTSPlayerController_MoveVertical_Statics
	{
		struct RTSPlayerController_eventMoveVertical_Parms
		{
			bool Direction;
		};
		static void NewProp_Direction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ARTSPlayerController_MoveVertical_Statics::NewProp_Direction_SetBit(void* Obj)
	{
		((RTSPlayerController_eventMoveVertical_Parms*)Obj)->Direction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARTSPlayerController_MoveVertical_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RTSPlayerController_eventMoveVertical_Parms), &Z_Construct_UFunction_ARTSPlayerController_MoveVertical_Statics::NewProp_Direction_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTSPlayerController_MoveVertical_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSPlayerController_MoveVertical_Statics::NewProp_Direction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARTSPlayerController_MoveVertical_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RTSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTSPlayerController_MoveVertical_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTSPlayerController, nullptr, "MoveVertical", nullptr, nullptr, sizeof(RTSPlayerController_eventMoveVertical_Parms), Z_Construct_UFunction_ARTSPlayerController_MoveVertical_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSPlayerController_MoveVertical_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARTSPlayerController_MoveVertical_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSPlayerController_MoveVertical_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARTSPlayerController_MoveVertical()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARTSPlayerController_MoveVertical_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARTSPlayerController_ZoomIn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARTSPlayerController_ZoomIn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RTSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTSPlayerController_ZoomIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTSPlayerController, nullptr, "ZoomIn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARTSPlayerController_ZoomIn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSPlayerController_ZoomIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARTSPlayerController_ZoomIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARTSPlayerController_ZoomIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARTSPlayerController_ZoomOut_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARTSPlayerController_ZoomOut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RTSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTSPlayerController_ZoomOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTSPlayerController, nullptr, "ZoomOut", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARTSPlayerController_ZoomOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSPlayerController_ZoomOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARTSPlayerController_ZoomOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARTSPlayerController_ZoomOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARTSPlayerController_NoRegister()
	{
		return ARTSPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ARTSPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RTSPlayerCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RTSPlayerCamera;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARTSPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Game,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARTSPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARTSPlayerController_MoveHorizontal, "MoveHorizontal" }, // 1436601026
		{ &Z_Construct_UFunction_ARTSPlayerController_MoveVertical, "MoveVertical" }, // 2414284913
		{ &Z_Construct_UFunction_ARTSPlayerController_ZoomIn, "ZoomIn" }, // 198597818
		{ &Z_Construct_UFunction_ARTSPlayerController_ZoomOut, "ZoomOut" }, // 575321748
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "RTSPlayerController.h" },
		{ "ModuleRelativePath", "RTSPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSPlayerController_Statics::NewProp_RTSPlayerCamera_MetaData[] = {
		{ "ModuleRelativePath", "RTSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARTSPlayerController_Statics::NewProp_RTSPlayerCamera = { "RTSPlayerCamera", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARTSPlayerController, RTSPlayerCamera), Z_Construct_UClass_ARTSCamera_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARTSPlayerController_Statics::NewProp_RTSPlayerCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPlayerController_Statics::NewProp_RTSPlayerCamera_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARTSPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSPlayerController_Statics::NewProp_RTSPlayerCamera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARTSPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARTSPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARTSPlayerController_Statics::ClassParams = {
		&ARTSPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARTSPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARTSPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSPlayerController_Statics::Class_MetaDataParams))
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
	IMPLEMENT_CLASS(ARTSPlayerController, 3659697055);
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
