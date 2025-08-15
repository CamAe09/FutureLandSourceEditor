// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MultiplayerHealthComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AController;
class APlayerController;
class UDamageType;
#ifdef MULTIPLAYERFPS_MultiplayerHealthComponent_generated_h
#error "MultiplayerHealthComponent.generated.h already included, missing '#pragma once' in MultiplayerHealthComponent.h"
#endif
#define MULTIPLAYERFPS_MultiplayerHealthComponent_generated_h

#define FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerHealthComponent_h_11_DELEGATE \
MULTIPLAYERFPS_API void FOnHealthChanged_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChanged, float NewHealth, bool IsRegenerating);


#define FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerHealthComponent_h_14_DELEGATE \
MULTIPLAYERFPS_API void FOnTakeDamage_DelegateWrapper(const FMulticastScriptDelegate& OnTakeDamage, int32 OldHealth, int32 NewHealth);


#define FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerHealthComponent_h_17_DELEGATE \
MULTIPLAYERFPS_API void FOnDie_DelegateWrapper(const FMulticastScriptDelegate& OnDie);


#define FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerHealthComponent_h_20_DELEGATE \
MULTIPLAYERFPS_API void FOnDieUnreplicated_DelegateWrapper(const FMulticastScriptDelegate& OnDieUnreplicated);


#define FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerHealthComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastDie_Implementation(); \
	virtual void ServerDie_Implementation(); \
	DECLARE_FUNCTION(execGetOwningPlayerController); \
	DECLARE_FUNCTION(execSetOwningPlayerController); \
	DECLARE_FUNCTION(execIsDead); \
	DECLARE_FUNCTION(execGetAmountOfHealthRegenPerTick); \
	DECLARE_FUNCTION(execSetAmountOfHealthRegenPerTick); \
	DECLARE_FUNCTION(execGetHealthRegenTimeBetweenTicks); \
	DECLARE_FUNCTION(execSetHealthRegenTimeBetweenTicks); \
	DECLARE_FUNCTION(execGetTimeToStartHealthRegen); \
	DECLARE_FUNCTION(execSetTimeToStartHealthRegen); \
	DECLARE_FUNCTION(execGetAutoHealthRegen); \
	DECLARE_FUNCTION(execSetAutoHealthRegen); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execSetMaxHealth); \
	DECLARE_FUNCTION(execGetIsDead); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execSetHealth); \
	DECLARE_FUNCTION(execHealthRegenTick); \
	DECLARE_FUNCTION(execStartHealthRegen); \
	DECLARE_FUNCTION(execMulticastDie); \
	DECLARE_FUNCTION(execServerDie); \
	DECLARE_FUNCTION(execDie); \
	DECLARE_FUNCTION(execOnDamaged);


#define FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerHealthComponent_h_25_CALLBACK_WRAPPERS
#define FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerHealthComponent_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMultiplayerHealthComponent(); \
	friend struct Z_Construct_UClass_UMultiplayerHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UMultiplayerHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiplayerFPS"), NO_API) \
	DECLARE_SERIALIZER(UMultiplayerHealthComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		MaxHealth, \
		AutoHealthRegen, \
		TimeToStartHealthRegen, \
		HealthRegenTimeBetweenTicks, \
		AmountOfHealthRegenPerTick, \
		OwningActor, \
		OwningPlayerController, \
		NETFIELD_REP_END=OwningPlayerController	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerHealthComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMultiplayerHealthComponent(UMultiplayerHealthComponent&&); \
	UMultiplayerHealthComponent(const UMultiplayerHealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiplayerHealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiplayerHealthComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMultiplayerHealthComponent) \
	NO_API virtual ~UMultiplayerHealthComponent();


#define FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerHealthComponent_h_22_PROLOG
#define FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerHealthComponent_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerHealthComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerHealthComponent_h_25_CALLBACK_WRAPPERS \
	FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerHealthComponent_h_25_INCLASS_NO_PURE_DECLS \
	FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerHealthComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIPLAYERFPS_API UClass* StaticClass<class UMultiplayerHealthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerHealthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
