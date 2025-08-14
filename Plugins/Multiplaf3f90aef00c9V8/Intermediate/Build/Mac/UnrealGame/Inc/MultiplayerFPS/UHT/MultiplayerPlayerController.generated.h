// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MultiplayerPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
class APawn;
class UForceFeedbackEffect;
class UUserWidget;
#ifdef MULTIPLAYERFPS_MultiplayerPlayerController_generated_h
#error "MultiplayerPlayerController.generated.h already included, missing '#pragma once' in MultiplayerPlayerController.h"
#endif
#define MULTIPLAYERFPS_MultiplayerPlayerController_generated_h

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_MultiplayerPlayerController_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void GiveLoadout_Implementation(); \
	virtual void ServerRespawn1_Implementation(); \
	virtual void ClientSetControlRotation_Implementation(FRotator Rotation); \
	virtual void ServerPossessPawn_Implementation(TSubclassOf<APawn> NewPawnToSpawn, APawn* NewPawn, bool SpawnNewPawn, FVector Location, FRotator Rotation, bool DestroyOldPawn, bool KeepControlRotation, bool KeepVelocity, bool ChangeStartingVelocity, FVector NewVelocity); \
	virtual void RemoveUIWidget_Implementation(UUserWidget* WidgetToRemove, bool RemoveAllWidgets, bool ChangeCursor, bool ShowCursor, bool ChangeInput, bool GameInput, bool ChangePaused, bool PauseGame); \
	virtual void CreateUIWidget_Implementation(TSubclassOf<UUserWidget> NewWidget, int32 ZOrder, bool RemoveAllWidgetsFirst, UUserWidget* WidgetToRemove, bool ChangeCursor, bool ShowCursor, bool ChangeInput, bool GameInput, bool ChangePaused, bool PauseGame); \
	DECLARE_FUNCTION(execVibrateController); \
	DECLARE_FUNCTION(execSetControllerVibration); \
	DECLARE_FUNCTION(execGetAllSharedCalibersOnSpawn); \
	DECLARE_FUNCTION(execSetAllSharedCalibersOnSpawn); \
	DECLARE_FUNCTION(execGetRespawnDelay); \
	DECLARE_FUNCTION(execSetRespawnDelay); \
	DECLARE_FUNCTION(execGetDieWhenChoosingNewCharacter); \
	DECLARE_FUNCTION(execSetDieWhenChoosingNewCharacter); \
	DECLARE_FUNCTION(execGetCharacterSelectWidget); \
	DECLARE_FUNCTION(execSetCharacterSelectWidget); \
	DECLARE_FUNCTION(execGetChooseCharacterOnRespawn); \
	DECLARE_FUNCTION(execSetChooseCharacterOnRespawn); \
	DECLARE_FUNCTION(execChooseNewCharacter); \
	DECLARE_FUNCTION(execGetCanRespawn); \
	DECLARE_FUNCTION(execSetCanRespawn); \
	DECLARE_FUNCTION(execGetHasSpawnedPlayer); \
	DECLARE_FUNCTION(execSetHasSpawnedPlayer); \
	DECLARE_FUNCTION(execGetPlayerPawnClass); \
	DECLARE_FUNCTION(execSetPlayerPawnClass); \
	DECLARE_FUNCTION(execGetAvoidDuplicatesForRandomWeapons); \
	DECLARE_FUNCTION(execSetAvoidDuplicatesForRandomWeapons); \
	DECLARE_FUNCTION(execGetRespawnPoints); \
	DECLARE_FUNCTION(execSetRespawnPoints); \
	DECLARE_FUNCTION(execGetRandomizeUnselectedWeapons); \
	DECLARE_FUNCTION(execSetRandomizeUnselectedWeapons); \
	DECLARE_FUNCTION(execGetMaxWeaponAmount); \
	DECLARE_FUNCTION(execSetMaxWeaponAmount); \
	DECLARE_FUNCTION(execGetGiveLoadoutOnBeginPlay); \
	DECLARE_FUNCTION(execSetGiveLoadoutOnBeginPlay); \
	DECLARE_FUNCTION(execGetCanShoulderSwapWhileInFirstPerson); \
	DECLARE_FUNCTION(execSetCanShoulderSwapWhileInFirstPerson); \
	DECLARE_FUNCTION(execGetCanShoulderSwapThirdPerson); \
	DECLARE_FUNCTION(execSetCanShoulderSwapThirdPerson); \
	DECLARE_FUNCTION(execGetUsingThirdPersonLeftShoulder); \
	DECLARE_FUNCTION(execSetUsingThirdPersonLeftShoulder); \
	DECLARE_FUNCTION(execGetUsingThirdPerson); \
	DECLARE_FUNCTION(execSetUsingThirdPerson); \
	DECLARE_FUNCTION(execGetCanSwitchPerspective); \
	DECLARE_FUNCTION(execSetCanSwitchPerspective); \
	DECLARE_FUNCTION(execGetPlayerIndex); \
	DECLARE_FUNCTION(execSetPlayerIndex); \
	DECLARE_FUNCTION(execGiveLoadout); \
	DECLARE_FUNCTION(execServerRespawn1); \
	DECLARE_FUNCTION(execRespawn1); \
	DECLARE_FUNCTION(execRespawn); \
	DECLARE_FUNCTION(execClientSetControlRotation); \
	DECLARE_FUNCTION(execPrintStringForControlledPawnInvalidApplySettings); \
	DECLARE_FUNCTION(execApplySettingsToCharacter); \
	DECLARE_FUNCTION(execServerPossessPawn); \
	DECLARE_FUNCTION(execPossessPawn); \
	DECLARE_FUNCTION(execGetUILastIndex); \
	DECLARE_FUNCTION(execRemoveUIWidget); \
	DECLARE_FUNCTION(execCreateUIWidget); \
	DECLARE_FUNCTION(execGetControlledPawn);


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_MultiplayerPlayerController_h_14_CALLBACK_WRAPPERS
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_MultiplayerPlayerController_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMultiplayerPlayerController(); \
	friend struct Z_Construct_UClass_AMultiplayerPlayerController_Statics; \
public: \
	DECLARE_CLASS(AMultiplayerPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiplayerFPS"), NO_API) \
	DECLARE_SERIALIZER(AMultiplayerPlayerController) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		WeaponChoices=NETFIELD_REP_START, \
		PlayerIndex, \
		UsingThirdPerson, \
		UsingThirdPersonLeftShoulder, \
		MaxWeaponAmount, \
		NETFIELD_REP_END=MaxWeaponAmount	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_MultiplayerPlayerController_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMultiplayerPlayerController(AMultiplayerPlayerController&&); \
	AMultiplayerPlayerController(const AMultiplayerPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMultiplayerPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMultiplayerPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMultiplayerPlayerController) \
	NO_API virtual ~AMultiplayerPlayerController();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_MultiplayerPlayerController_h_11_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_MultiplayerPlayerController_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_MultiplayerPlayerController_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_MultiplayerPlayerController_h_14_CALLBACK_WRAPPERS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_MultiplayerPlayerController_h_14_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_MultiplayerPlayerController_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIPLAYERFPS_API UClass* StaticClass<class AMultiplayerPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_MultiplayerPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
