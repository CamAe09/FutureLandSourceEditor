// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MultiplayerGun.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AActor; class USoundBase;
class AMultiplayerCharacter;
class APawn;
class UAnimationAsset;
class UAnimMontage;
class UPhysicalMaterial;
class UPhysicalMaterial; class USoundBase;
class UPrimitiveComponent;
class USceneComponent;
class USoundBase;
#ifdef MULTIPLAYERFPS_MultiplayerGun_generated_h
#error "MultiplayerGun.generated.h already included, missing '#pragma once' in MultiplayerGun.h"
#endif
#define MULTIPLAYERFPS_MultiplayerGun_generated_h

#define FID_Users_camev_Documents_Unreal_Projects_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerGun_h_17_DELEGATE \
MULTIPLAYERFPS_API void FOnBulletHit_DelegateWrapper(const FMulticastScriptDelegate& OnBulletHit, AActor* ActorHit, UPhysicalMaterial* HitSurface);


#define FID_Users_camev_Documents_Unreal_Projects_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerGun_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGunHitEffectsReplication_Statics; \
	MULTIPLAYERFPS_API static class UScriptStruct* StaticStruct();


template<> MULTIPLAYERFPS_API UScriptStruct* StaticStruct<struct FGunHitEffectsReplication>();

#define FID_Users_camev_Documents_Unreal_Projects_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerGun_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastReload_Implementation(); \
	virtual void ServerReload_Implementation(); \
	virtual void ServerStopFiring_Implementation(bool EvenCancelBurst); \
	virtual void CheckBulletCasingLimit_Implementation(); \
	virtual void SpawnBulletCasing_Implementation(); \
	virtual void ServerContinuousFire_Implementation(); \
	virtual void ServerShotgunFire_Implementation(); \
	virtual void SpawnProjectile_Implementation(FVector FireLocation, FRotator FireRotation, FVector TraceDirection); \
	virtual void ExecuteHitFunction_Implementation(AActor* ParentPlayer, AActor* HitActor); \
	virtual void ClientFire_Implementation(); \
	virtual void ServerFire_Implementation(); \
	virtual void MulticastSetOwningPlayer_Implementation(APawn* NewOwningPlayer); \
	virtual void ServerSetOwningPlayer_Implementation(APawn* NewOwningPlayer, int32 ReplicationMethod); \
	virtual void MulticastSetPickupCollisionEnabled_Implementation(); \
	virtual void ServerSetPickupCollisionEnabled_Implementation(); \
	virtual void MulticastSetWasPickedup_Implementation(bool Pickedup, UPrimitiveComponent* ComponentToAttachTo); \
	virtual void ServerSetWasPickedup_Implementation(bool Pickedup, UPrimitiveComponent* ComponentToAttachTo); \
	virtual void MulticastSetUsingThirdPerson_Implementation(bool NewUsingThirdPerson); \
	virtual void ServerSetUsingThirdPerson_Implementation(bool NewUsingThirdPerson); \
	DECLARE_FUNCTION(execOnRep_GunHitEffects); \
	DECLARE_FUNCTION(execGetReloadGunSound); \
	DECLARE_FUNCTION(execSetReloadGunSound); \
	DECLARE_FUNCTION(execGetHitMarkerSurfaceSounds); \
	DECLARE_FUNCTION(execSetHitMarkerSurfaceSounds); \
	DECLARE_FUNCTION(execGetHitMarkerActorSounds); \
	DECLARE_FUNCTION(execSetHitMarkerActorSounds); \
	DECLARE_FUNCTION(execGetUseActorClassesForHitMarkers); \
	DECLARE_FUNCTION(execSetUseActorClassesForHitMarkers); \
	DECLARE_FUNCTION(execGetIsExplosive); \
	DECLARE_FUNCTION(execSetIsExplosive); \
	DECLARE_FUNCTION(execMulticastReload); \
	DECLARE_FUNCTION(execServerReload); \
	DECLARE_FUNCTION(execReload); \
	DECLARE_FUNCTION(execHolsterWeapon); \
	DECLARE_FUNCTION(execGetSharedCaliberAmount); \
	DECLARE_FUNCTION(execGetUseProjectile); \
	DECLARE_FUNCTION(execGetInfiniteAmmo); \
	DECLARE_FUNCTION(execSetInfiniteAmmo); \
	DECLARE_FUNCTION(execGetMaxHeat); \
	DECLARE_FUNCTION(execGetCurrentHeat); \
	DECLARE_FUNCTION(execGetDoesOverheat); \
	DECLARE_FUNCTION(execGetChargeUpArmsAnimation); \
	DECLARE_FUNCTION(execGetChargeUpArmsAnimationMontage); \
	DECLARE_FUNCTION(execGetChargeUpTimeRemaining); \
	DECLARE_FUNCTION(execGetCurrentChargeUpProgress); \
	DECLARE_FUNCTION(execSetCurrentChargeUpProgress); \
	DECLARE_FUNCTION(execGetChargeUpTime); \
	DECLARE_FUNCTION(execSetChargeUpTime); \
	DECLARE_FUNCTION(execGetHoldTriggerDuringChargeUp); \
	DECLARE_FUNCTION(execSetHoldTriggerDuringChargeUp); \
	DECLARE_FUNCTION(execGetHasChargeUp); \
	DECLARE_FUNCTION(execSetHasChargeUp); \
	DECLARE_FUNCTION(execGetCaliberToUse); \
	DECLARE_FUNCTION(execSetCaliberToUse); \
	DECLARE_FUNCTION(execGetUseSharedCalibers); \
	DECLARE_FUNCTION(execSetUseSharedCalibers); \
	DECLARE_FUNCTION(execGetMaxReserveAmmo); \
	DECLARE_FUNCTION(execGetReserveAmmo); \
	DECLARE_FUNCTION(execGetMaxAmmoInMagazine); \
	DECLARE_FUNCTION(execGetAmmoInMagazine); \
	DECLARE_FUNCTION(execSetAmmoInMagazine); \
	DECLARE_FUNCTION(execGetZoomArmsRotation); \
	DECLARE_FUNCTION(execSetZoomArmsRotation); \
	DECLARE_FUNCTION(execGetZoomArmsLocation); \
	DECLARE_FUNCTION(execSetZoomArmsLocation); \
	DECLARE_FUNCTION(execGetADSArmsRotation); \
	DECLARE_FUNCTION(execSetADSArmsRotation); \
	DECLARE_FUNCTION(execGetADSArmsLocation); \
	DECLARE_FUNCTION(execSetADSArmsLocation); \
	DECLARE_FUNCTION(execGetTimeToZoom); \
	DECLARE_FUNCTION(execSetTimeToZoom); \
	DECLARE_FUNCTION(execGetTimeToADS); \
	DECLARE_FUNCTION(execSetTimeToADS); \
	DECLARE_FUNCTION(execGetManuallySetGunLocation); \
	DECLARE_FUNCTION(execSetManuallySetGunLocation); \
	DECLARE_FUNCTION(execGetZoomFOV); \
	DECLARE_FUNCTION(execSetZoomFOV); \
	DECLARE_FUNCTION(execGetADSFOV); \
	DECLARE_FUNCTION(execSetADSFOV); \
	DECLARE_FUNCTION(execGetDivideAimingFOV); \
	DECLARE_FUNCTION(execSetDivideAimingFOV); \
	DECLARE_FUNCTION(execGetSwitchPerspectiveWhenAiming); \
	DECLARE_FUNCTION(execSetSwitchPerspectiveWhenAiming); \
	DECLARE_FUNCTION(execGetUseADS); \
	DECLARE_FUNCTION(execSetUseADS); \
	DECLARE_FUNCTION(execGetFireMode); \
	DECLARE_FUNCTION(execGetPlayerArmsRelativeRotation); \
	DECLARE_FUNCTION(execGetPlayerArmsRelativeLocation); \
	DECLARE_FUNCTION(execGetSocketName); \
	DECLARE_FUNCTION(execSetSocketName); \
	DECLARE_FUNCTION(execSetFireMode); \
	DECLARE_FUNCTION(execGetCanShoot); \
	DECLARE_FUNCTION(execSetCanShoot); \
	DECLARE_FUNCTION(execApplyPerspective); \
	DECLARE_FUNCTION(execCancelSmokeEffect); \
	DECLARE_FUNCTION(execServerStopFiring); \
	DECLARE_FUNCTION(execStopFiring); \
	DECLARE_FUNCTION(execCheckBulletCasingLimit); \
	DECLARE_FUNCTION(execSpawnBulletCasing); \
	DECLARE_FUNCTION(execServerContinuousFire); \
	DECLARE_FUNCTION(execContinuousFire); \
	DECLARE_FUNCTION(execServerShotgunFire); \
	DECLARE_FUNCTION(execShotgunFire); \
	DECLARE_FUNCTION(execSpawnProjectile); \
	DECLARE_FUNCTION(execCallBulletHitDelegate); \
	DECLARE_FUNCTION(execExecuteHitFunction); \
	DECLARE_FUNCTION(execAddPredeterminedSpread); \
	DECLARE_FUNCTION(execClientFire); \
	DECLARE_FUNCTION(execServerFire); \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execCancelChargeUp1); \
	DECLARE_FUNCTION(execCancelChargeUp); \
	DECLARE_FUNCTION(execChargeUp1); \
	DECLARE_FUNCTION(execChargeUp); \
	DECLARE_FUNCTION(execFireInput); \
	DECLARE_FUNCTION(execGetOwningPlayer); \
	DECLARE_FUNCTION(execMulticastSetOwningPlayer); \
	DECLARE_FUNCTION(execServerSetOwningPlayer); \
	DECLARE_FUNCTION(execSetOwningPlayer); \
	DECLARE_FUNCTION(execMulticastSetPickupCollisionEnabled); \
	DECLARE_FUNCTION(execServerSetPickupCollisionEnabled); \
	DECLARE_FUNCTION(execSetPickupCollisionEnabled); \
	DECLARE_FUNCTION(execGetWasPickedup); \
	DECLARE_FUNCTION(execMulticastSetWasPickedup); \
	DECLARE_FUNCTION(execServerSetWasPickedup); \
	DECLARE_FUNCTION(execSetWasPickedup); \
	DECLARE_FUNCTION(execGetUsingThirdPerson); \
	DECLARE_FUNCTION(execMulticastSetUsingThirdPerson); \
	DECLARE_FUNCTION(execServerSetUsingThirdPerson); \
	DECLARE_FUNCTION(execSetUsingThirdPerson); \
	DECLARE_FUNCTION(execGetBulletCasingSceneToUse); \
	DECLARE_FUNCTION(execGetFireSceneToUse); \
	DECLARE_FUNCTION(execDestroySelf); \
	DECLARE_FUNCTION(execGetOwningPlayerCast); \
	DECLARE_FUNCTION(execCheckForOwner); \
	DECLARE_FUNCTION(execGetThirdPersonGunMesh); \
	DECLARE_FUNCTION(execGetGunMesh);


#define FID_Users_camev_Documents_Unreal_Projects_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerGun_h_61_CALLBACK_WRAPPERS
#define FID_Users_camev_Documents_Unreal_Projects_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerGun_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMultiplayerGun(); \
	friend struct Z_Construct_UClass_AMultiplayerGun_Statics; \
public: \
	DECLARE_CLASS(AMultiplayerGun, AInteractableItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiplayerFPS"), NO_API) \
	DECLARE_SERIALIZER(AMultiplayerGun) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ShotgunAmountOfPelletsShot=NETFIELD_REP_START, \
		ShotgunPelletHitLocations, \
		PreDeterminedSpreadIndex, \
		PreDeterminedAimingSpreadIndex, \
		PreDeterminedAimingSpreadWithMultiplierIndex, \
		OwningPlayer, \
		OwningPlayerCast, \
		AmmoInMagazine, \
		ReserveAmmo, \
		InfiniteAmmo, \
		UsingThirdPerson, \
		WasPickedup, \
		SwitchPerspectiveWhenAiming, \
		GunHitEffectsReplication, \
		NETFIELD_REP_END=GunHitEffectsReplication	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_camev_Documents_Unreal_Projects_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerGun_h_61_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMultiplayerGun(AMultiplayerGun&&); \
	AMultiplayerGun(const AMultiplayerGun&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMultiplayerGun); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMultiplayerGun); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMultiplayerGun) \
	NO_API virtual ~AMultiplayerGun();


#define FID_Users_camev_Documents_Unreal_Projects_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerGun_h_58_PROLOG
#define FID_Users_camev_Documents_Unreal_Projects_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerGun_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_camev_Documents_Unreal_Projects_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerGun_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_camev_Documents_Unreal_Projects_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerGun_h_61_CALLBACK_WRAPPERS \
	FID_Users_camev_Documents_Unreal_Projects_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerGun_h_61_INCLASS_NO_PURE_DECLS \
	FID_Users_camev_Documents_Unreal_Projects_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerGun_h_61_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIPLAYERFPS_API UClass* StaticClass<class AMultiplayerGun>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_camev_Documents_Unreal_Projects_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerGun_h


#define FOREACH_ENUM_EAIMSWITCHPERSPECTIVETYPE(op) \
	op(No) \
	op(SwitchToFirstPerson) \
	op(SwitchToThirdPerson) \
	op(SwitchToOppositePerspective) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
