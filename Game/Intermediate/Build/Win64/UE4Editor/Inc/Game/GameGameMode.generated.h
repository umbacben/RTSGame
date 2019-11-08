// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAME_GameGameMode_generated_h
#error "GameGameMode.generated.h already included, missing '#pragma once' in GameGameMode.h"
#endif
#define GAME_GameGameMode_generated_h

#define Game_Source_Game_GameGameMode_h_12_RPC_WRAPPERS
#define Game_Source_Game_GameGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Game_Source_Game_GameGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameGameMode(); \
	friend struct Z_Construct_UClass_AGameGameMode_Statics; \
public: \
	DECLARE_CLASS(AGameGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Game"), GAME_API) \
	DECLARE_SERIALIZER(AGameGameMode)


#define Game_Source_Game_GameGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGameGameMode(); \
	friend struct Z_Construct_UClass_AGameGameMode_Statics; \
public: \
	DECLARE_CLASS(AGameGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Game"), GAME_API) \
	DECLARE_SERIALIZER(AGameGameMode)


#define Game_Source_Game_GameGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAME_API AGameGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAME_API, AGameGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GAME_API AGameGameMode(AGameGameMode&&); \
	GAME_API AGameGameMode(const AGameGameMode&); \
public:


#define Game_Source_Game_GameGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GAME_API AGameGameMode(AGameGameMode&&); \
	GAME_API AGameGameMode(const AGameGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAME_API, AGameGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameGameMode)


#define Game_Source_Game_GameGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define Game_Source_Game_GameGameMode_h_9_PROLOG
#define Game_Source_Game_GameGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Source_Game_GameGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Game_Source_Game_GameGameMode_h_12_RPC_WRAPPERS \
	Game_Source_Game_GameGameMode_h_12_INCLASS \
	Game_Source_Game_GameGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Game_Source_Game_GameGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Source_Game_GameGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Game_Source_Game_GameGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Game_Source_Game_GameGameMode_h_12_INCLASS_NO_PURE_DECLS \
	Game_Source_Game_GameGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAME_API UClass* StaticClass<class AGameGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Game_Source_Game_GameGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
