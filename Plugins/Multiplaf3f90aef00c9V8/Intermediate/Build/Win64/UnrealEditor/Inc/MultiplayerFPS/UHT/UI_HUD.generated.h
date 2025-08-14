// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/UI_HUD.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMultiplayerHealthComponent;
enum class ESlateVisibility : uint8;
#ifdef MULTIPLAYERFPS_UI_HUD_generated_h
#error "UI_HUD.generated.h already included, missing '#pragma once' in UI_HUD.h"
#endif
#define MULTIPLAYERFPS_UI_HUD_generated_h

#define FID_Users_camev_Documents_Unreal_Projects_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_UI_UI_HUD_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCrosshairVisibility); \
	DECLARE_FUNCTION(execInfiniteAmmoVisibility); \
	DECLARE_FUNCTION(execOverheatVisibility); \
	DECLARE_FUNCTION(execChargeUpVisibility); \
	DECLARE_FUNCTION(execReserveAmmoVisibility); \
	DECLARE_FUNCTION(execAmmoVisibility); \
	DECLARE_FUNCTION(execGetWeaponOverheat); \
	DECLARE_FUNCTION(execGetWeaponChargeUp); \
	DECLARE_FUNCTION(execGetReserveAmmoCaliberName); \
	DECLARE_FUNCTION(execVisibleIfUsesSharedCalibers); \
	DECLARE_FUNCTION(execGetReserveAmmo); \
	DECLARE_FUNCTION(execGetAmmo); \
	DECLARE_FUNCTION(execVisibleIfHasWeapon); \
	DECLARE_FUNCTION(execGetWeaponName); \
	DECLARE_FUNCTION(execGetHealthNumber); \
	DECLARE_FUNCTION(execGetHealthComponent); \
	DECLARE_FUNCTION(execGetHealth);


#define FID_Users_camev_Documents_Unreal_Projects_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_UI_UI_HUD_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUI_HUD(); \
	friend struct Z_Construct_UClass_UUI_HUD_Statics; \
public: \
	DECLARE_CLASS(UUI_HUD, UWidgetMasterClass, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MultiplayerFPS"), NO_API) \
	DECLARE_SERIALIZER(UUI_HUD)


#define FID_Users_camev_Documents_Unreal_Projects_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_UI_UI_HUD_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUI_HUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUI_HUD(UUI_HUD&&); \
	UUI_HUD(const UUI_HUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUI_HUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUI_HUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUI_HUD) \
	NO_API virtual ~UUI_HUD();


#define FID_Users_camev_Documents_Unreal_Projects_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_UI_UI_HUD_h_9_PROLOG
#define FID_Users_camev_Documents_Unreal_Projects_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_UI_UI_HUD_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_camev_Documents_Unreal_Projects_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_UI_UI_HUD_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_camev_Documents_Unreal_Projects_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_UI_UI_HUD_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_camev_Documents_Unreal_Projects_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_UI_UI_HUD_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIPLAYERFPS_API UClass* StaticClass<class UUI_HUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_camev_Documents_Unreal_Projects_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_UI_UI_HUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
