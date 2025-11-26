// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MultiplayerBulletCasing.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AMultiplayerGun;
class UPrimitiveComponent;
class USoundBase;
struct FHitResult;
#ifdef MULTIPLAYERFPS_MultiplayerBulletCasing_generated_h
#error "MultiplayerBulletCasing.generated.h already included, missing '#pragma once' in MultiplayerBulletCasing.h"
#endif
#define MULTIPLAYERFPS_MultiplayerBulletCasing_generated_h

<<<<<<< HEAD
#define FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerBulletCasing_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
=======
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_MultiplayerBulletCasing_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
>>>>>>> parent of f0bfb2a (SLN)
	virtual void DestroySelf_Implementation(); \
	DECLARE_FUNCTION(execGetOwningGun); \
	DECLARE_FUNCTION(execSetOwningGun); \
	DECLARE_FUNCTION(execOnCasingHit); \
	DECLARE_FUNCTION(execDestroySelf); \
	DECLARE_FUNCTION(execLaunchCasing);


<<<<<<< HEAD
#define FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerBulletCasing_h_15_CALLBACK_WRAPPERS
#define FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerBulletCasing_h_15_INCLASS_NO_PURE_DECLS \
=======
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_MultiplayerBulletCasing_h_15_CALLBACK_WRAPPERS
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_MultiplayerBulletCasing_h_15_INCLASS_NO_PURE_DECLS \
>>>>>>> parent of f0bfb2a (SLN)
private: \
	static void StaticRegisterNativesAMultiplayerBulletCasing(); \
	friend struct Z_Construct_UClass_AMultiplayerBulletCasing_Statics; \
public: \
	DECLARE_CLASS(AMultiplayerBulletCasing, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiplayerFPS"), NO_API) \
	DECLARE_SERIALIZER(AMultiplayerBulletCasing) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		OwningGun=NETFIELD_REP_START, \
		NETFIELD_REP_END=OwningGun	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


<<<<<<< HEAD
#define FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerBulletCasing_h_15_ENHANCED_CONSTRUCTORS \
=======
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_MultiplayerBulletCasing_h_15_ENHANCED_CONSTRUCTORS \
>>>>>>> parent of f0bfb2a (SLN)
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMultiplayerBulletCasing(AMultiplayerBulletCasing&&); \
	AMultiplayerBulletCasing(const AMultiplayerBulletCasing&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMultiplayerBulletCasing); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMultiplayerBulletCasing); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMultiplayerBulletCasing) \
	NO_API virtual ~AMultiplayerBulletCasing();


<<<<<<< HEAD
#define FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerBulletCasing_h_12_PROLOG
#define FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerBulletCasing_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerBulletCasing_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerBulletCasing_h_15_CALLBACK_WRAPPERS \
	FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerBulletCasing_h_15_INCLASS_NO_PURE_DECLS \
	FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerBulletCasing_h_15_ENHANCED_CONSTRUCTORS \
=======
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_MultiplayerBulletCasing_h_12_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_MultiplayerBulletCasing_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_MultiplayerBulletCasing_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_MultiplayerBulletCasing_h_15_CALLBACK_WRAPPERS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_MultiplayerBulletCasing_h_15_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_MultiplayerBulletCasing_h_15_ENHANCED_CONSTRUCTORS \
>>>>>>> parent of f0bfb2a (SLN)
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIPLAYERFPS_API UClass* StaticClass<class AMultiplayerBulletCasing>();

#undef CURRENT_FILE_ID
<<<<<<< HEAD
#define CURRENT_FILE_ID FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerBulletCasing_h
=======
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_MultiplayerBulletCasing_h
>>>>>>> parent of f0bfb2a (SLN)


PRAGMA_ENABLE_DEPRECATION_WARNINGS
