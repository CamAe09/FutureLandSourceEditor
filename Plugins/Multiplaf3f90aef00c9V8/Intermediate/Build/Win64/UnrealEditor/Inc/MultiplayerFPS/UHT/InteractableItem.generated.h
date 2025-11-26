// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractableItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APawn;
class UPrimitiveComponent;
struct FHitResult;
#ifdef MULTIPLAYERFPS_InteractableItem_generated_h
#error "InteractableItem.generated.h already included, missing '#pragma once' in InteractableItem.h"
#endif
#define MULTIPLAYERFPS_InteractableItem_generated_h

<<<<<<< HEAD
#define FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_InteractableItem_h_11_DELEGATE \
MULTIPLAYERFPS_API void FOnInteract_DelegateWrapper(const FMulticastScriptDelegate& OnInteract, APawn* InteractingPlayer);


#define FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_InteractableItem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
=======
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_InteractableItem_h_11_DELEGATE \
MULTIPLAYERFPS_API void FOnInteract_DelegateWrapper(const FMulticastScriptDelegate& OnInteract, APawn* InteractingPlayer);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_InteractableItem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
>>>>>>> parent of f0bfb2a (SLN)
	DECLARE_FUNCTION(execInteract); \
	DECLARE_FUNCTION(execOnPickupBoxCollisionEndOverlap); \
	DECLARE_FUNCTION(execOnPickupBoxCollisionBeginOverlap);


<<<<<<< HEAD
#define FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_InteractableItem_h_16_CALLBACK_WRAPPERS
#define FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_InteractableItem_h_16_INCLASS_NO_PURE_DECLS \
=======
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_InteractableItem_h_16_CALLBACK_WRAPPERS
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_InteractableItem_h_16_INCLASS_NO_PURE_DECLS \
>>>>>>> parent of f0bfb2a (SLN)
private: \
	static void StaticRegisterNativesAInteractableItem(); \
	friend struct Z_Construct_UClass_AInteractableItem_Statics; \
public: \
	DECLARE_CLASS(AInteractableItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiplayerFPS"), NO_API) \
	DECLARE_SERIALIZER(AInteractableItem)


<<<<<<< HEAD
#define FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_InteractableItem_h_16_ENHANCED_CONSTRUCTORS \
=======
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_InteractableItem_h_16_ENHANCED_CONSTRUCTORS \
>>>>>>> parent of f0bfb2a (SLN)
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AInteractableItem(AInteractableItem&&); \
	AInteractableItem(const AInteractableItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractableItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractableItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInteractableItem) \
	NO_API virtual ~AInteractableItem();


<<<<<<< HEAD
#define FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_InteractableItem_h_13_PROLOG
#define FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_InteractableItem_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_InteractableItem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_InteractableItem_h_16_CALLBACK_WRAPPERS \
	FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_InteractableItem_h_16_INCLASS_NO_PURE_DECLS \
	FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_InteractableItem_h_16_ENHANCED_CONSTRUCTORS \
=======
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_InteractableItem_h_13_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_InteractableItem_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_InteractableItem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_InteractableItem_h_16_CALLBACK_WRAPPERS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_InteractableItem_h_16_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_InteractableItem_h_16_ENHANCED_CONSTRUCTORS \
>>>>>>> parent of f0bfb2a (SLN)
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIPLAYERFPS_API UClass* StaticClass<class AInteractableItem>();

#undef CURRENT_FILE_ID
<<<<<<< HEAD
#define CURRENT_FILE_ID FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_InteractableItem_h
=======
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_InteractableItem_h
>>>>>>> parent of f0bfb2a (SLN)


PRAGMA_ENABLE_DEPRECATION_WARNINGS
