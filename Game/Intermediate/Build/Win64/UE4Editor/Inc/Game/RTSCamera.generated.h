// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAME_RTSCamera_generated_h
#error "RTSCamera.generated.h already included, missing '#pragma once' in RTSCamera.h"
#endif
#define GAME_RTSCamera_generated_h

#define Game_Source_Game_RTSCamera_h_18_RPC_WRAPPERS
#define Game_Source_Game_RTSCamera_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define Game_Source_Game_RTSCamera_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARTSCamera(); \
	friend struct Z_Construct_UClass_ARTSCamera_Statics; \
public: \
	DECLARE_CLASS(ARTSCamera, ASpectatorPawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Game"), NO_API) \
	DECLARE_SERIALIZER(ARTSCamera)


#define Game_Source_Game_RTSCamera_h_18_INCLASS \
private: \
	static void StaticRegisterNativesARTSCamera(); \
	friend struct Z_Construct_UClass_ARTSCamera_Statics; \
public: \
	DECLARE_CLASS(ARTSCamera, ASpectatorPawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Game"), NO_API) \
	DECLARE_SERIALIZER(ARTSCamera)


#define Game_Source_Game_RTSCamera_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARTSCamera(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARTSCamera) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARTSCamera); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARTSCamera); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARTSCamera(ARTSCamera&&); \
	NO_API ARTSCamera(const ARTSCamera&); \
public:


#define Game_Source_Game_RTSCamera_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARTSCamera(ARTSCamera&&); \
	NO_API ARTSCamera(const ARTSCamera&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARTSCamera); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARTSCamera); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARTSCamera)


#define Game_Source_Game_RTSCamera_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ARTSCameraComponent() { return STRUCT_OFFSET(ARTSCamera, ARTSCameraComponent); } \
	FORCEINLINE static uint32 __PPO__ARTSSpringArmComponent() { return STRUCT_OFFSET(ARTSCamera, ARTSSpringArmComponent); } \
	FORCEINLINE static uint32 __PPO__ARTSSphereComponent() { return STRUCT_OFFSET(ARTSCamera, ARTSSphereComponent); }


#define Game_Source_Game_RTSCamera_h_15_PROLOG
#define Game_Source_Game_RTSCamera_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Source_Game_RTSCamera_h_18_PRIVATE_PROPERTY_OFFSET \
	Game_Source_Game_RTSCamera_h_18_RPC_WRAPPERS \
	Game_Source_Game_RTSCamera_h_18_INCLASS \
	Game_Source_Game_RTSCamera_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Game_Source_Game_RTSCamera_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Source_Game_RTSCamera_h_18_PRIVATE_PROPERTY_OFFSET \
	Game_Source_Game_RTSCamera_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Game_Source_Game_RTSCamera_h_18_INCLASS_NO_PURE_DECLS \
	Game_Source_Game_RTSCamera_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAME_API UClass* StaticClass<class ARTSCamera>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Game_Source_Game_RTSCamera_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
