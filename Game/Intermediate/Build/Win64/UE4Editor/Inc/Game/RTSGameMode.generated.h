// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAME_RTSGameMode_generated_h
#error "RTSGameMode.generated.h already included, missing '#pragma once' in RTSGameMode.h"
#endif
#define GAME_RTSGameMode_generated_h

#define Game_Source_Game_RTSGameMode_h_17_RPC_WRAPPERS
#define Game_Source_Game_RTSGameMode_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define Game_Source_Game_RTSGameMode_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARTSGameMode(); \
	friend struct Z_Construct_UClass_ARTSGameMode_Statics; \
public: \
	DECLARE_CLASS(ARTSGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Game"), NO_API) \
	DECLARE_SERIALIZER(ARTSGameMode)


#define Game_Source_Game_RTSGameMode_h_17_INCLASS \
private: \
	static void StaticRegisterNativesARTSGameMode(); \
	friend struct Z_Construct_UClass_ARTSGameMode_Statics; \
public: \
	DECLARE_CLASS(ARTSGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Game"), NO_API) \
	DECLARE_SERIALIZER(ARTSGameMode)


#define Game_Source_Game_RTSGameMode_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARTSGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARTSGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARTSGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARTSGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARTSGameMode(ARTSGameMode&&); \
	NO_API ARTSGameMode(const ARTSGameMode&); \
public:


#define Game_Source_Game_RTSGameMode_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARTSGameMode(ARTSGameMode&&); \
	NO_API ARTSGameMode(const ARTSGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARTSGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARTSGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARTSGameMode)


#define Game_Source_Game_RTSGameMode_h_17_PRIVATE_PROPERTY_OFFSET
#define Game_Source_Game_RTSGameMode_h_14_PROLOG
#define Game_Source_Game_RTSGameMode_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Source_Game_RTSGameMode_h_17_PRIVATE_PROPERTY_OFFSET \
	Game_Source_Game_RTSGameMode_h_17_RPC_WRAPPERS \
	Game_Source_Game_RTSGameMode_h_17_INCLASS \
	Game_Source_Game_RTSGameMode_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Game_Source_Game_RTSGameMode_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Source_Game_RTSGameMode_h_17_PRIVATE_PROPERTY_OFFSET \
	Game_Source_Game_RTSGameMode_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Game_Source_Game_RTSGameMode_h_17_INCLASS_NO_PURE_DECLS \
	Game_Source_Game_RTSGameMode_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAME_API UClass* StaticClass<class ARTSGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Game_Source_Game_RTSGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
