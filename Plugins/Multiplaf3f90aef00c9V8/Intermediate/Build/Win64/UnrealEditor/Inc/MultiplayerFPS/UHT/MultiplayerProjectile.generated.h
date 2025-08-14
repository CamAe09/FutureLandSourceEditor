// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MultiplayerProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
class AActor;
class AActor; class USoundBase;
class APawn;
class UDamageType;
class UForceFeedbackAttenuation;
class UForceFeedbackEffect;
class UMaterialInterface;
class UMaterialInterface; class UPhysicalMaterial;
class UParticleSystem;
class UPhysicalMaterial;
class UPhysicalMaterial; 
class UPhysicalMaterial; class UParticleSystem;
class UPhysicalMaterial; class USoundBase;
class UPrimitiveComponent;
class USoundBase;
class USoundBase; class UPhysicalMaterial;
struct FHitResult;
#ifdef MULTIPLAYERFPS_MultiplayerProjectile_generated_h
#error "MultiplayerProjectile.generated.h already included, missing '#pragma once' in MultiplayerProjectile.h"
#endif
#define MULTIPLAYERFPS_MultiplayerProjectile_generated_h

#define FID_Users_camev_Documents_Unreal_Projects_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerProjectile_h_14_DELEGATE \
MULTIPLAYERFPS_API void FOnProjectileHit_DelegateWrapper(const FMulticastScriptDelegate& OnProjectileHit, AActor* ActorHit, UPhysicalMaterial* HitSurface);


#define FID_Users_camev_Documents_Unreal_Projects_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerProjectile_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastSilenceBulletWhizzingSound_Implementation(); \
	virtual void ServerSilenceBulletWhizzingSound_Implementation(); \
	virtual void MulticastSoftDestroyProjectile_Implementation(); \
	virtual void ServerSoftDestroyProjectile_Implementation(); \
	virtual void MulticastSpawnHitParticleEffect_Implementation(UParticleSystem* ParticleEffect, FVector ImpactPoint, FRotator ImpactRotation, FHitResult Hit, bool UseCurrentLocationForHit); \
	virtual void ServerSpawnHitParticleEffect_Implementation(UParticleSystem* ParticleEffect, FVector ImpactPoint, FRotator ImpactRotation, FHitResult Hit, bool UseCurrentLocationForHit); \
	virtual void ExecuteHitFunction_Implementation(AActor* ParentPlayer, AActor* HitActor); \
	virtual void Explode_Implementation(FHitResult const& Hit, bool UseCurrentLocationForHit); \
	virtual void RegisterHit_Implementation(FHitResult const& Hit); \
	DECLARE_FUNCTION(execGetBulletHitControllerVibrationTag); \
	DECLARE_FUNCTION(execSetBulletHitControllerVibrationTag); \
	DECLARE_FUNCTION(execGetBulletHitControllerVibrationAttenuation); \
	DECLARE_FUNCTION(execSetBulletHitControllerVibrationAttenuation); \
	DECLARE_FUNCTION(execGetBulletHitControllerVibration); \
	DECLARE_FUNCTION(execSetBulletHitControllerVibration); \
	DECLARE_FUNCTION(execGetDestructionSphereToSpawn); \
	DECLARE_FUNCTION(execSetDestructionSphereToSpawn); \
	DECLARE_FUNCTION(execGetDestructionSphereSize); \
	DECLARE_FUNCTION(execSetDestructionSphereSize); \
	DECLARE_FUNCTION(execGetCanCrumbleDestructibleMeshes); \
	DECLARE_FUNCTION(execSetCanCrumbleDestructibleMeshes); \
	DECLARE_FUNCTION(execGetHitMarkerSurfaceSounds); \
	DECLARE_FUNCTION(execSetHitMarkerSurfaceSounds); \
	DECLARE_FUNCTION(execGetHitMarkerActorSounds); \
	DECLARE_FUNCTION(execSetHitMarkerActorSounds); \
	DECLARE_FUNCTION(execGetUseActorClassesForHitMarkers); \
	DECLARE_FUNCTION(execSetUseActorClassesForHitMarkers); \
	DECLARE_FUNCTION(execGetWhizzingSoundVolumeBasedOnSpeed); \
	DECLARE_FUNCTION(execSetWhizzingSoundVolumeBasedOnSpeed); \
	DECLARE_FUNCTION(execGetBulletHitDecalSize); \
	DECLARE_FUNCTION(execSetBulletHitDecalSize); \
	DECLARE_FUNCTION(execGetBulletHitDecals); \
	DECLARE_FUNCTION(execSetBulletHitDecals); \
	DECLARE_FUNCTION(execGetDefaultBulletHitDecal); \
	DECLARE_FUNCTION(execSetDefaultBulletHitDecal); \
	DECLARE_FUNCTION(execGetDamageType); \
	DECLARE_FUNCTION(execSetDamageType); \
	DECLARE_FUNCTION(execGetBulletHitSounds); \
	DECLARE_FUNCTION(execSetBulletHitSounds); \
	DECLARE_FUNCTION(execGetDefaultBulletHitSound); \
	DECLARE_FUNCTION(execSetDefaultBulletHitSound); \
	DECLARE_FUNCTION(execGetHitEffects); \
	DECLARE_FUNCTION(execSetHitEffects); \
	DECLARE_FUNCTION(execGetDefaultHitEffect); \
	DECLARE_FUNCTION(execSetDefaultHitEffect); \
	DECLARE_FUNCTION(execGetHitDirection); \
	DECLARE_FUNCTION(execSetHitDirection); \
	DECLARE_FUNCTION(execGetFireLocation); \
	DECLARE_FUNCTION(execSetFireLocation); \
	DECLARE_FUNCTION(execGetPrintDistanceTraveled); \
	DECLARE_FUNCTION(execSetPrintDistanceTraveled); \
	DECLARE_FUNCTION(execGetInterpolateDamageBetweenRanges); \
	DECLARE_FUNCTION(execSetInterpolateDamageBetweenRanges); \
	DECLARE_FUNCTION(execGetDamageFalloffMultiplierAtRange); \
	DECLARE_FUNCTION(execSetDamageFalloffMultiplierAtRange); \
	DECLARE_FUNCTION(execGetExplosiveCollisionChannel); \
	DECLARE_FUNCTION(execSetExplosiveCollisionChannel); \
	DECLARE_FUNCTION(execGetExplosiveDoFullDamage); \
	DECLARE_FUNCTION(execSetExplosiveDoFullDamage); \
	DECLARE_FUNCTION(execGetExplosiveDamageRadius); \
	DECLARE_FUNCTION(execSetExplosiveDamageRadius); \
	DECLARE_FUNCTION(execGetBulletHitModeDelay); \
	DECLARE_FUNCTION(execSetBulletHitModeDelay); \
	DECLARE_FUNCTION(execGetBulletHitMode); \
	DECLARE_FUNCTION(execSetBulletHitMode); \
	DECLARE_FUNCTION(execGetExplosionIgnoreOwner); \
	DECLARE_FUNCTION(execSetExplosionIgnoreOwner); \
	DECLARE_FUNCTION(execGetDamage); \
	DECLARE_FUNCTION(execSetDamage); \
	DECLARE_FUNCTION(execGetDefaultDamage); \
	DECLARE_FUNCTION(execSetDefaultDamage); \
	DECLARE_FUNCTION(execGetTimeToDespawnProjectile); \
	DECLARE_FUNCTION(execSetTimeToDespawnProjectile); \
	DECLARE_FUNCTION(execGetExplosionIgnoredClasses); \
	DECLARE_FUNCTION(execSetExplosionIgnoredClasses); \
	DECLARE_FUNCTION(execGetExplosionIgnoredActors); \
	DECLARE_FUNCTION(execSetExplosionIgnoredActors); \
	DECLARE_FUNCTION(execGetHitEffectScale); \
	DECLARE_FUNCTION(execSetHitEffectScale); \
	DECLARE_FUNCTION(execGetIsExplosive); \
	DECLARE_FUNCTION(execSetIsExplosive); \
	DECLARE_FUNCTION(execGetLaunchObjectVelocityChange); \
	DECLARE_FUNCTION(execSetLaunchObjectVelocityChange); \
	DECLARE_FUNCTION(execGetLaunchObjectStrength); \
	DECLARE_FUNCTION(execSetLaunchObjectStrength); \
	DECLARE_FUNCTION(execGetLaunchPhysicsObjects); \
	DECLARE_FUNCTION(execSetLaunchPhysicsObjects); \
	DECLARE_FUNCTION(execGetOwningPlayer); \
	DECLARE_FUNCTION(execSetOwningPlayer); \
	DECLARE_FUNCTION(execMulticastSilenceBulletWhizzingSound); \
	DECLARE_FUNCTION(execServerSilenceBulletWhizzingSound); \
	DECLARE_FUNCTION(execSilenceBulletWhizzingSound); \
	DECLARE_FUNCTION(execMulticastSoftDestroyProjectile); \
	DECLARE_FUNCTION(execServerSoftDestroyProjectile); \
	DECLARE_FUNCTION(execSoftDestroyProjectile); \
	DECLARE_FUNCTION(execMulticastSpawnHitParticleEffect); \
	DECLARE_FUNCTION(execServerSpawnHitParticleEffect); \
	DECLARE_FUNCTION(execSpawnHitParticleEffect); \
	DECLARE_FUNCTION(execExecuteHitFunction); \
	DECLARE_FUNCTION(execDetermineBulletHitModeDelay); \
	DECLARE_FUNCTION(execDetermineBeginPlayDespawnTimer); \
	DECLARE_FUNCTION(execExplode); \
	DECLARE_FUNCTION(execRegisterHit); \
	DECLARE_FUNCTION(execOnProjectileMeshHit); \
	DECLARE_FUNCTION(execDestroySelf);


#define FID_Users_camev_Documents_Unreal_Projects_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerProjectile_h_19_CALLBACK_WRAPPERS
#define FID_Users_camev_Documents_Unreal_Projects_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerProjectile_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMultiplayerProjectile(); \
	friend struct Z_Construct_UClass_AMultiplayerProjectile_Statics; \
public: \
	DECLARE_CLASS(AMultiplayerProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiplayerFPS"), NO_API) \
	DECLARE_SERIALIZER(AMultiplayerProjectile) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		OwningPlayer=NETFIELD_REP_START, \
		IsExplosive, \
		HitEffectScale, \
		DefaultBulletHitSound, \
		RegisteredHit, \
		NETFIELD_REP_END=RegisteredHit	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_camev_Documents_Unreal_Projects_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerProjectile_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMultiplayerProjectile(AMultiplayerProjectile&&); \
	AMultiplayerProjectile(const AMultiplayerProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMultiplayerProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMultiplayerProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMultiplayerProjectile) \
	NO_API virtual ~AMultiplayerProjectile();


#define FID_Users_camev_Documents_Unreal_Projects_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerProjectile_h_16_PROLOG
#define FID_Users_camev_Documents_Unreal_Projects_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerProjectile_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_camev_Documents_Unreal_Projects_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerProjectile_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_camev_Documents_Unreal_Projects_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerProjectile_h_19_CALLBACK_WRAPPERS \
	FID_Users_camev_Documents_Unreal_Projects_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerProjectile_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_camev_Documents_Unreal_Projects_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerProjectile_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIPLAYERFPS_API UClass* StaticClass<class AMultiplayerProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_camev_Documents_Unreal_Projects_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
