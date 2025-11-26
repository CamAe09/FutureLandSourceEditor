// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MultiplayerCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
class AActor;
class AInteractableItem;
class AMultiplayerGun;
class AMultiplayerPlayerController;
class UAnimationAsset;
class UMultiplayerHealthComponent;
class UPhysicalMaterial;
class USkeletalMeshComponent;
#ifdef MULTIPLAYERFPS_MultiplayerCharacter_generated_h
#error "MultiplayerCharacter.generated.h already included, missing '#pragma once' in MultiplayerCharacter.h"
#endif
#define MULTIPLAYERFPS_MultiplayerCharacter_generated_h

<<<<<<< HEAD
#define FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
=======
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_MultiplayerCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
>>>>>>> parent of f0bfb2a (SLN)
	virtual void ShowHitMarker_Implementation(AActor* HitActor, UPhysicalMaterial* HitPhysicalMaterial); \
	virtual void MulticastCancelReload_Implementation(bool PutArmsBackUp); \
	virtual void ServerCancelReload_Implementation(bool PutArmsBackUp); \
	virtual void MulticastReload2_Implementation(); \
	virtual void ServerReload2_Implementation(); \
	virtual void MulticastReload1_Implementation(); \
	virtual void ServerReload1_Implementation(); \
	virtual void MulticastReload_Implementation(); \
	virtual void ServerReload_Implementation(); \
	virtual void MulticastStopAiming_Implementation(); \
	virtual void ServerStopAiming_Implementation(); \
	virtual void MulticastAim_Implementation(); \
	virtual void ServerAim_Implementation(); \
	virtual void MulticastUnHolsterWeapons1_Implementation(); \
	virtual void ServerUnHolsterWeapons1_Implementation(); \
	virtual void MulticastUnHolsterWeapons_Implementation(); \
	virtual void ServerUnHolsterWeapons_Implementation(); \
	virtual void MulticastHolsterWeapons1_Implementation(); \
	virtual void ServerHolsterWeapons1_Implementation(); \
	virtual void MulticastHolsterWeapons_Implementation(); \
	virtual void ServerHolsterWeapons_Implementation(); \
	virtual void MulticastLastWeapon_Implementation(); \
	virtual void ServerLastWeapon_Implementation(); \
	virtual void MulticastNextWeapon_Implementation(); \
	virtual void ServerNextWeapon_Implementation(); \
	virtual void MulticastSwitchWeapons1_Implementation(); \
	virtual void ServerSwitchWeapons1_Implementation(); \
	virtual void MulticastSwitchWeapons_Implementation(int32 Index, AMultiplayerGun* WeaponToSwitchTo); \
	virtual void ServerSwitchWeapons_Implementation(int32 Index, AMultiplayerGun* WeaponToSwitchTo); \
	virtual void MulticastRemoveWeapon_Implementation(bool RemoveAllWeapons, bool DestroyWeapon, AMultiplayerGun* Weapon, int32 WeaponIndex); \
	virtual void ServerRemoveWeapon_Implementation(bool RemoveAllWeapons, bool DestroyWeapon, AMultiplayerGun* Weapon, int32 WeaponIndex); \
	virtual void MulticastAddWeapon_Implementation(AMultiplayerGun* Weapon); \
	virtual void ServerAddWeapon_Implementation(AMultiplayerGun* Weapon); \
	virtual void MulticastGiveWeapon_Implementation(AMultiplayerGun* WeaponToPickup, bool SwitchToNewWeapon); \
	virtual void GiveWeapon_Implementation(TSubclassOf<AMultiplayerGun> WeaponToSpawn, AMultiplayerGun* WeaponToPickup, bool SwitchToNewWeapon); \
	virtual void ServerGiveLoadout_Implementation(TArray<TSubclassOf<AMultiplayerGun> > const& Loadout, int32 MaxWeaponAmount); \
	virtual void MulticastSetCanShoot_Implementation(bool NewCanShoot); \
	virtual void ServerSetCanShoot_Implementation(bool NewCanShoot); \
	virtual void DestroySelf_Implementation(); \
	virtual void ClientDie_Implementation(); \
	virtual void ServerDie1_Implementation(); \
	virtual void ClientOnTakeDamage_Implementation(int32 OldHealth, int32 NewHealth); \
	virtual void MulticastSetCanInteract_Implementation(bool NewCanInteract); \
	virtual void ServerSetCanInteract_Implementation(bool NewCanInteract); \
	virtual void MulticastSetThirdPersonShoulder_Implementation(bool LeftShoulder); \
	virtual void ServerSetThirdPersonShoulder_Implementation(bool LeftShoulder); \
	virtual void ClientSetThirdPersonShoulder_Implementation(bool LeftShoulder, bool SnapCameraLocation); \
	virtual void ClientApplyPerspectiveVisibility_Implementation(); \
	virtual void MulticastSetUsingThirdPerson_Implementation(bool NewUsingThirdPerson); \
	virtual void ServerSetUsingThirdPerson_Implementation(bool NewUsingThirdPerson); \
	virtual void ClientSetUsingThirdPerson_Implementation(bool NewUsingThirdPerson, bool SnapCameraLocation); \
	virtual void MulticastPickupItem_Implementation(AInteractableItem* ItemToPickup); \
	virtual void ServerPickupItem_Implementation(AInteractableItem* ItemToPickup); \
	virtual void ClientInteract_Implementation(AInteractableItem* Interactable); \
	virtual void MulticastInteract_Implementation(AInteractableItem* Interactable); \
	virtual void ServerInteract_Implementation(AInteractableItem* Interactable, bool Multicast); \
	virtual void ServerStopSprinting_Implementation(bool SkipAnimation); \
	virtual void ServerSprint_Implementation(); \
	virtual void MulticastReplicateControlRotation_Implementation(FRotator ControlRotation); \
	virtual void ServerReplicateControlRotation_Implementation(FRotator ControlRotation); \
	virtual void MulticastReplicateCameraTransform_Implementation(FVector CameraLocation, FRotator CameraRotation); \
	virtual void ServerReplicateCameraTransform_Implementation(FVector CameraLocation, FRotator CameraRotation); \
	virtual void SetOwningController_Implementation(); \
	virtual void ClientRemoveInput_Implementation(); \
	virtual void RemoveInput_Implementation(); \
	virtual void ClientSetupInput_Implementation(); \
	virtual void SetupInput_Implementation(); \
	virtual USkeletalMeshComponent* GetPlayerModelMesh_Implementation(); \
	DECLARE_FUNCTION(execSetPlayerModelAnimationMode1); \
	DECLARE_FUNCTION(execSetPlayerModelAnimationMode); \
	DECLARE_FUNCTION(execPlayArmsAnimation); \
	DECLARE_FUNCTION(execSetArmsAnimationMode1); \
	DECLARE_FUNCTION(execSetArmsAnimationMode); \
	DECLARE_FUNCTION(execShowHitMarker); \
	DECLARE_FUNCTION(execMulticastCancelReload); \
	DECLARE_FUNCTION(execServerCancelReload); \
	DECLARE_FUNCTION(execCancelReload); \
	DECLARE_FUNCTION(execMulticastReload2); \
	DECLARE_FUNCTION(execServerReload2); \
	DECLARE_FUNCTION(execReload2); \
	DECLARE_FUNCTION(execMulticastReload1); \
	DECLARE_FUNCTION(execServerReload1); \
	DECLARE_FUNCTION(execReload1); \
	DECLARE_FUNCTION(execMulticastReload); \
	DECLARE_FUNCTION(execServerReload); \
	DECLARE_FUNCTION(execReload); \
	DECLARE_FUNCTION(execGetUseADS); \
	DECLARE_FUNCTION(execSetUseADS); \
	DECLARE_FUNCTION(execGetIsZoomedIn); \
	DECLARE_FUNCTION(execSetIsZoomedIn); \
	DECLARE_FUNCTION(execGetIsADSing); \
	DECLARE_FUNCTION(execSetIsADSing); \
	DECLARE_FUNCTION(execGetIsAiming); \
	DECLARE_FUNCTION(execSetIsAiming); \
	DECLARE_FUNCTION(execGetCanAim); \
	DECLARE_FUNCTION(execSetCanAim); \
	DECLARE_FUNCTION(execMulticastStopAiming); \
	DECLARE_FUNCTION(execServerStopAiming); \
	DECLARE_FUNCTION(execStopAiming); \
	DECLARE_FUNCTION(execMulticastAim); \
	DECLARE_FUNCTION(execServerAim); \
	DECLARE_FUNCTION(execAim); \
	DECLARE_FUNCTION(execReleaseAimInput); \
	DECLARE_FUNCTION(execAimInput); \
	DECLARE_FUNCTION(execGetIsWeaponHolstered); \
	DECLARE_FUNCTION(execMulticastUnHolsterWeapons1); \
	DECLARE_FUNCTION(execServerUnHolsterWeapons1); \
	DECLARE_FUNCTION(execUnHolsterWeapons1); \
	DECLARE_FUNCTION(execMulticastUnHolsterWeapons); \
	DECLARE_FUNCTION(execServerUnHolsterWeapons); \
	DECLARE_FUNCTION(execUnHolsterWeapons); \
	DECLARE_FUNCTION(execMulticastHolsterWeapons1); \
	DECLARE_FUNCTION(execServerHolsterWeapons1); \
	DECLARE_FUNCTION(execHolsterWeapons1); \
	DECLARE_FUNCTION(execMulticastHolsterWeapons); \
	DECLARE_FUNCTION(execServerHolsterWeapons); \
	DECLARE_FUNCTION(execHolsterWeapons); \
	DECLARE_FUNCTION(execToggleWeaponHolstered); \
	DECLARE_FUNCTION(execGetIsFiring); \
	DECLARE_FUNCTION(execSetIsFiring); \
	DECLARE_FUNCTION(execStopFiring); \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execReleaseFireInput); \
	DECLARE_FUNCTION(execPressFireInput); \
	DECLARE_FUNCTION(execSwitchToWeapon2); \
	DECLARE_FUNCTION(execSwitchToWeapon1); \
	DECLARE_FUNCTION(execMulticastLastWeapon); \
	DECLARE_FUNCTION(execServerLastWeapon); \
	DECLARE_FUNCTION(execLastWeapon); \
	DECLARE_FUNCTION(execMulticastNextWeapon); \
	DECLARE_FUNCTION(execServerNextWeapon); \
	DECLARE_FUNCTION(execNextWeapon); \
	DECLARE_FUNCTION(execMulticastSwitchWeapons1); \
	DECLARE_FUNCTION(execServerSwitchWeapons1); \
	DECLARE_FUNCTION(execSwitchWeapons1); \
	DECLARE_FUNCTION(execMulticastSwitchWeapons); \
	DECLARE_FUNCTION(execServerSwitchWeapons); \
	DECLARE_FUNCTION(execSwitchWeapons); \
	DECLARE_FUNCTION(execRemoveWeaponPastIndex); \
	DECLARE_FUNCTION(execMulticastRemoveWeapon); \
	DECLARE_FUNCTION(execServerRemoveWeapon); \
	DECLARE_FUNCTION(execRemoveWeapon); \
	DECLARE_FUNCTION(execMulticastAddWeapon); \
	DECLARE_FUNCTION(execServerAddWeapon); \
	DECLARE_FUNCTION(execAddWeapon); \
	DECLARE_FUNCTION(execMulticastGiveWeapon); \
	DECLARE_FUNCTION(execGiveWeapon); \
	DECLARE_FUNCTION(execServerGiveLoadout); \
	DECLARE_FUNCTION(execGiveLoadout); \
	DECLARE_FUNCTION(execSetWeaponVisibility); \
	DECLARE_FUNCTION(execGetMaxWeaponAmount); \
	DECLARE_FUNCTION(execGetAmountOfWeapons); \
	DECLARE_FUNCTION(execGetWeaponIndex); \
	DECLARE_FUNCTION(execGetHasWeapon); \
	DECLARE_FUNCTION(execGetWeapon); \
	DECLARE_FUNCTION(execGetSharedCaliberAmount); \
	DECLARE_FUNCTION(execSetSharedCaliberAmount); \
	DECLARE_FUNCTION(execGetAllSharedCaliberAmounts); \
	DECLARE_FUNCTION(execGetSharedCaliberName); \
	DECLARE_FUNCTION(execSetSharedCaliberName); \
	DECLARE_FUNCTION(execGetAllSharedCaliberNames); \
	DECLARE_FUNCTION(execGetAllSharedCalibers); \
	DECLARE_FUNCTION(execSetAllSharedCalibers); \
	DECLARE_FUNCTION(execGetAllWeapons); \
	DECLARE_FUNCTION(execGetCanShoot); \
	DECLARE_FUNCTION(execMulticastSetCanShoot); \
	DECLARE_FUNCTION(execServerSetCanShoot); \
	DECLARE_FUNCTION(execSetCanShoot); \
	DECLARE_FUNCTION(execDestroySelf); \
	DECLARE_FUNCTION(execClientDie); \
	DECLARE_FUNCTION(execServerDie1); \
	DECLARE_FUNCTION(execDie1); \
	DECLARE_FUNCTION(execDie); \
	DECLARE_FUNCTION(execClientOnTakeDamage); \
	DECLARE_FUNCTION(execOnTakeDamage); \
	DECLARE_FUNCTION(execGetInteractableBeingOverlapped); \
	DECLARE_FUNCTION(execSetInteractableBeingOverlapped); \
	DECLARE_FUNCTION(execGetOverlappingInteractable); \
	DECLARE_FUNCTION(execSetOverlappingInteractable); \
	DECLARE_FUNCTION(execGetInteractDistance); \
	DECLARE_FUNCTION(execSetInteractDistance); \
	DECLARE_FUNCTION(execGetCanInteract); \
	DECLARE_FUNCTION(execMulticastSetCanInteract); \
	DECLARE_FUNCTION(execServerSetCanInteract); \
	DECLARE_FUNCTION(execSetCanInteract); \
	DECLARE_FUNCTION(execGetThirdPersonSpringArmLength); \
	DECLARE_FUNCTION(execMulticastSetThirdPersonShoulder); \
	DECLARE_FUNCTION(execServerSetThirdPersonShoulder); \
	DECLARE_FUNCTION(execClientSetThirdPersonShoulder); \
	DECLARE_FUNCTION(execSetThirdPersonShoulder); \
	DECLARE_FUNCTION(execSwapShoulders); \
	DECLARE_FUNCTION(execGetUsingThirdPerson); \
	DECLARE_FUNCTION(execClientApplyPerspectiveVisibility); \
	DECLARE_FUNCTION(execApplyPerspectiveVisibility); \
	DECLARE_FUNCTION(execMulticastSetUsingThirdPerson); \
	DECLARE_FUNCTION(execServerSetUsingThirdPerson); \
	DECLARE_FUNCTION(execClientSetUsingThirdPerson); \
	DECLARE_FUNCTION(execSetUsingThirdPerson); \
	DECLARE_FUNCTION(execToggleThirdPerson); \
	DECLARE_FUNCTION(execMulticastPickupItem); \
	DECLARE_FUNCTION(execServerPickupItem); \
	DECLARE_FUNCTION(execPickupItem); \
	DECLARE_FUNCTION(execClientInteract); \
	DECLARE_FUNCTION(execMulticastInteract); \
	DECLARE_FUNCTION(execServerInteract); \
	DECLARE_FUNCTION(execInteractReplicated); \
	DECLARE_FUNCTION(execInteract); \
	DECLARE_FUNCTION(execSetSensitivity); \
	DECLARE_FUNCTION(execCheckIfCanSprintNoReturn); \
	DECLARE_FUNCTION(execCheckIfCanSprint); \
	DECLARE_FUNCTION(execStopSprinting1); \
	DECLARE_FUNCTION(execServerStopSprinting); \
	DECLARE_FUNCTION(execStopSprinting); \
	DECLARE_FUNCTION(execPlaySprintAnimation); \
	DECLARE_FUNCTION(execServerSprint); \
	DECLARE_FUNCTION(execSprint); \
	DECLARE_FUNCTION(execReleaseSprintInput); \
	DECLARE_FUNCTION(execSprintInput); \
	DECLARE_FUNCTION(execSetMovementSpeedBasedOnSettings); \
	DECLARE_FUNCTION(execMulticastReplicateControlRotation); \
	DECLARE_FUNCTION(execServerReplicateControlRotation); \
	DECLARE_FUNCTION(execMulticastReplicateCameraTransform); \
	DECLARE_FUNCTION(execServerReplicateCameraTransform); \
	DECLARE_FUNCTION(execReplicateCameraTransform); \
	DECLARE_FUNCTION(execPrintStringForOwningControllerInvalid); \
	DECLARE_FUNCTION(execGetOwningController); \
	DECLARE_FUNCTION(execSetOwningController); \
	DECLARE_FUNCTION(execClientRemoveInput); \
	DECLARE_FUNCTION(execRemoveInput); \
	DECLARE_FUNCTION(execClientSetupInput); \
	DECLARE_FUNCTION(execSetupInput); \
	DECLARE_FUNCTION(execGetPlayerModelMesh); \
	DECLARE_FUNCTION(execGetIsDead); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execGetHealthComponent); \
	DECLARE_FUNCTION(execApplySettings);


<<<<<<< HEAD
#define FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerCharacter_h_23_CALLBACK_WRAPPERS
#define FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerCharacter_h_23_INCLASS_NO_PURE_DECLS \
=======
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_MultiplayerCharacter_h_23_CALLBACK_WRAPPERS
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_MultiplayerCharacter_h_23_INCLASS_NO_PURE_DECLS \
>>>>>>> parent of f0bfb2a (SLN)
private: \
	static void StaticRegisterNativesAMultiplayerCharacter(); \
	friend struct Z_Construct_UClass_AMultiplayerCharacter_Statics; \
public: \
	DECLARE_CLASS(AMultiplayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiplayerFPS"), NO_API) \
	DECLARE_SERIALIZER(AMultiplayerCharacter) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentWeaponIndex=NETFIELD_REP_START, \
		PlayerIndex, \
		OwningController, \
		OwningControllerCast, \
		ReplicatedCameraLocation, \
		ReplicatedCameraRotation, \
		ReplicatedControlRotation, \
		UsingThirdPerson, \
		CanInteract, \
		CanShoot, \
		IsFiring, \
		CanAim, \
		IsAiming, \
		IsADSing, \
		IsZoomedIn, \
		IsWeaponHolstered, \
		UseADS, \
		AllWeapons, \
		AllSharedCaliberNames, \
		AllSharedCaliberAmounts, \
		NETFIELD_REP_END=AllSharedCaliberAmounts	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


<<<<<<< HEAD
#define FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerCharacter_h_23_ENHANCED_CONSTRUCTORS \
=======
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_MultiplayerCharacter_h_23_ENHANCED_CONSTRUCTORS \
>>>>>>> parent of f0bfb2a (SLN)
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMultiplayerCharacter(AMultiplayerCharacter&&); \
	AMultiplayerCharacter(const AMultiplayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMultiplayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMultiplayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMultiplayerCharacter) \
	NO_API virtual ~AMultiplayerCharacter();


<<<<<<< HEAD
#define FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerCharacter_h_20_PROLOG
#define FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerCharacter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerCharacter_h_23_CALLBACK_WRAPPERS \
	FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerCharacter_h_23_INCLASS_NO_PURE_DECLS \
	FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerCharacter_h_23_ENHANCED_CONSTRUCTORS \
=======
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_MultiplayerCharacter_h_20_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_MultiplayerCharacter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_MultiplayerCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_MultiplayerCharacter_h_23_CALLBACK_WRAPPERS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_MultiplayerCharacter_h_23_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_MultiplayerCharacter_h_23_ENHANCED_CONSTRUCTORS \
>>>>>>> parent of f0bfb2a (SLN)
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIPLAYERFPS_API UClass* StaticClass<class AMultiplayerCharacter>();

#undef CURRENT_FILE_ID
<<<<<<< HEAD
#define CURRENT_FILE_ID FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerCharacter_h
=======
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_MultiplayerCharacter_h
>>>>>>> parent of f0bfb2a (SLN)


PRAGMA_ENABLE_DEPRECATION_WARNINGS
