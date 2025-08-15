// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MultiplayerGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
class APlayerController;
#ifdef MULTIPLAYERFPS_MultiplayerGameMode_generated_h
#error "MultiplayerGameMode.generated.h already included, missing '#pragma once' in MultiplayerGameMode.h"
#endif
#define MULTIPLAYERFPS_MultiplayerGameMode_generated_h

#define FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAllPlayerPawns); \
	DECLARE_FUNCTION(execRemovePlayerPawn); \
	DECLARE_FUNCTION(execAddPlayerPawn); \
	DECLARE_FUNCTION(execGetAllPlayerControllers); \
	DECLARE_FUNCTION(execRemovePlayerController); \
	DECLARE_FUNCTION(execAddPlayerController);


#define FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMultiplayerGameMode(); \
	friend struct Z_Construct_UClass_AMultiplayerGameMode_Statics; \
public: \
	DECLARE_CLASS(AMultiplayerGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiplayerFPS"), NO_API) \
	DECLARE_SERIALIZER(AMultiplayerGameMode)


#define FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerGameMode_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMultiplayerGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMultiplayerGameMode(AMultiplayerGameMode&&); \
	AMultiplayerGameMode(const AMultiplayerGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMultiplayerGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMultiplayerGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMultiplayerGameMode) \
	NO_API virtual ~AMultiplayerGameMode();


#define FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerGameMode_h_9_PROLOG
#define FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIPLAYERFPS_API UClass* StaticClass<class AMultiplayerGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
