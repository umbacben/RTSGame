// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAME_RTSCameraPawn_generated_h
#error "RTSCameraPawn.generated.h already included, missing '#pragma once' in RTSCameraPawn.h"
#endif
#define GAME_RTSCameraPawn_generated_h

#define Game_Source_Game_RTSCameraPawn_h_16_SPARSE_DATA
#define Game_Source_Game_RTSCameraPawn_h_16_RPC_WRAPPERS
#define Game_Source_Game_RTSCameraPawn_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Game_Source_Game_RTSCameraPawn_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARTSCameraPawn(); \
	friend struct Z_Construct_UClass_ARTSCameraPawn_Statics; \
public: \
	DECLARE_CLASS(ARTSCameraPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Game"), NO_API) \
	DECLARE_SERIALIZER(ARTSCameraPawn)


#define Game_Source_Game_RTSCameraPawn_h_16_INCLASS \
private: \
	static void StaticRegisterNativesARTSCameraPawn(); \
	friend struct Z_Construct_UClass_ARTSCameraPawn_Statics; \
public: \
	DECLARE_CLASS(ARTSCameraPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Game"), NO_API) \
	DECLARE_SERIALIZER(ARTSCameraPawn)


#define Game_Source_Game_RTSCameraPawn_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARTSCameraPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARTSCameraPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARTSCameraPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARTSCameraPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARTSCameraPawn(ARTSCameraPawn&&); \
	NO_API ARTSCameraPawn(const ARTSCameraPawn&); \
public:


#define Game_Source_Game_RTSCameraPawn_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARTSCameraPawn(ARTSCameraPawn&&); \
	NO_API ARTSCameraPawn(const ARTSCameraPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARTSCameraPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARTSCameraPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARTSCameraPawn)


#define Game_Source_Game_RTSCameraPawn_h_16_PRIVATE_PROPERTY_OFFSET
#define Game_Source_Game_RTSCameraPawn_h_13_PROLOG
#define Game_Source_Game_RTSCameraPawn_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Source_Game_RTSCameraPawn_h_16_PRIVATE_PROPERTY_OFFSET \
	Game_Source_Game_RTSCameraPawn_h_16_SPARSE_DATA \
	Game_Source_Game_RTSCameraPawn_h_16_RPC_WRAPPERS \
	Game_Source_Game_RTSCameraPawn_h_16_INCLASS \
	Game_Source_Game_RTSCameraPawn_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Game_Source_Game_RTSCameraPawn_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Source_Game_RTSCameraPawn_h_16_PRIVATE_PROPERTY_OFFSET \
	Game_Source_Game_RTSCameraPawn_h_16_SPARSE_DATA \
	Game_Source_Game_RTSCameraPawn_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Game_Source_Game_RTSCameraPawn_h_16_INCLASS_NO_PURE_DECLS \
	Game_Source_Game_RTSCameraPawn_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAME_API UClass* StaticClass<class ARTSCameraPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Game_Source_Game_RTSCameraPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
