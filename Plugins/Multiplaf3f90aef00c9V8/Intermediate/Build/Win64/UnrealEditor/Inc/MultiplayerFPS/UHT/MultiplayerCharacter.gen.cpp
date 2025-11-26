// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayerFPS/Public/MultiplayerCharacter.h"
#include "Runtime/Engine/Classes/Engine/TimerHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerCharacter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackEffect_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
MULTIPLAYERFPS_API UClass* Z_Construct_UClass_AInteractableItem_NoRegister();
MULTIPLAYERFPS_API UClass* Z_Construct_UClass_AMultiplayerCharacter();
MULTIPLAYERFPS_API UClass* Z_Construct_UClass_AMultiplayerCharacter_NoRegister();
MULTIPLAYERFPS_API UClass* Z_Construct_UClass_AMultiplayerGun_NoRegister();
MULTIPLAYERFPS_API UClass* Z_Construct_UClass_AMultiplayerPlayerController_NoRegister();
MULTIPLAYERFPS_API UClass* Z_Construct_UClass_UMultiplayerHealthComponent_NoRegister();
MULTIPLAYERFPS_API UEnum* Z_Construct_UEnum_MultiplayerFPS_EAimSwitchPerspectiveType();
PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
UPackage* Z_Construct_UPackage__Script_MultiplayerFPS();
// End Cross Module References

// Begin Class AMultiplayerCharacter Function AddWeapon
struct Z_Construct_UFunction_AMultiplayerCharacter_AddWeapon_Statics
{
	struct MultiplayerCharacter_eventAddWeapon_Parms
	{
		AMultiplayerGun* Weapon;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_AddWeapon_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventAddWeapon_Parms, Weapon), Z_Construct_UClass_AMultiplayerGun_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_AddWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_AddWeapon_Statics::NewProp_Weapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_AddWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_AddWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "AddWeapon", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_AddWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_AddWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_AddWeapon_Statics::MultiplayerCharacter_eventAddWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_AddWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_AddWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_AddWeapon_Statics::MultiplayerCharacter_eventAddWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_AddWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_AddWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execAddWeapon)
{
	P_GET_OBJECT(AMultiplayerGun,Z_Param_Weapon);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddWeapon(Z_Param_Weapon);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function AddWeapon

// Begin Class AMultiplayerCharacter Function Aim
struct Z_Construct_UFunction_AMultiplayerCharacter_Aim_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_Aim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "Aim", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_Aim_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_Aim_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_Aim()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_Aim_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execAim)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Aim();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function Aim

// Begin Class AMultiplayerCharacter Function AimInput
struct Z_Construct_UFunction_AMultiplayerCharacter_AimInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_AimInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "AimInput", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_AimInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_AimInput_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_AimInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_AimInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execAimInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AimInput();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function AimInput

// Begin Class AMultiplayerCharacter Function ApplyPerspectiveVisibility
struct Z_Construct_UFunction_AMultiplayerCharacter_ApplyPerspectiveVisibility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_ApplyPerspectiveVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "ApplyPerspectiveVisibility", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ApplyPerspectiveVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_ApplyPerspectiveVisibility_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_ApplyPerspectiveVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_ApplyPerspectiveVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execApplyPerspectiveVisibility)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyPerspectiveVisibility();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function ApplyPerspectiveVisibility

// Begin Class AMultiplayerCharacter Function ApplySettings
struct Z_Construct_UFunction_AMultiplayerCharacter_ApplySettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_ApplySettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "ApplySettings", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ApplySettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_ApplySettings_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_ApplySettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_ApplySettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execApplySettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplySettings();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function ApplySettings

// Begin Class AMultiplayerCharacter Function CancelReload
struct Z_Construct_UFunction_AMultiplayerCharacter_CancelReload_Statics
{
	struct MultiplayerCharacter_eventCancelReload_Parms
	{
		bool PutArmsBackUp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "CPP_Default_PutArmsBackUp", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "Having PutArmsBackUp = false will not reset player model and gun reload animations" },
	};
#endif // WITH_METADATA
	static void NewProp_PutArmsBackUp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PutArmsBackUp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerCharacter_CancelReload_Statics::NewProp_PutArmsBackUp_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventCancelReload_Parms*)Obj)->PutArmsBackUp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_CancelReload_Statics::NewProp_PutArmsBackUp = { "PutArmsBackUp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventCancelReload_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_CancelReload_Statics::NewProp_PutArmsBackUp_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_CancelReload_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_CancelReload_Statics::NewProp_PutArmsBackUp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_CancelReload_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_CancelReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "CancelReload", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_CancelReload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_CancelReload_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_CancelReload_Statics::MultiplayerCharacter_eventCancelReload_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_CancelReload_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_CancelReload_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_CancelReload_Statics::MultiplayerCharacter_eventCancelReload_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_CancelReload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_CancelReload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execCancelReload)
{
	P_GET_UBOOL(Z_Param_PutArmsBackUp);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CancelReload(Z_Param_PutArmsBackUp);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function CancelReload

// Begin Class AMultiplayerCharacter Function CheckIfCanSprint
struct Z_Construct_UFunction_AMultiplayerCharacter_CheckIfCanSprint_Statics
{
	struct MultiplayerCharacter_eventCheckIfCanSprint_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerCharacter_CheckIfCanSprint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventCheckIfCanSprint_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_CheckIfCanSprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventCheckIfCanSprint_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_CheckIfCanSprint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_CheckIfCanSprint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_CheckIfCanSprint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_CheckIfCanSprint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_CheckIfCanSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "CheckIfCanSprint", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_CheckIfCanSprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_CheckIfCanSprint_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_CheckIfCanSprint_Statics::MultiplayerCharacter_eventCheckIfCanSprint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_CheckIfCanSprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_CheckIfCanSprint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_CheckIfCanSprint_Statics::MultiplayerCharacter_eventCheckIfCanSprint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_CheckIfCanSprint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_CheckIfCanSprint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execCheckIfCanSprint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckIfCanSprint();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function CheckIfCanSprint

// Begin Class AMultiplayerCharacter Function CheckIfCanSprintNoReturn
struct Z_Construct_UFunction_AMultiplayerCharacter_CheckIfCanSprintNoReturn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_CheckIfCanSprintNoReturn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "CheckIfCanSprintNoReturn", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_CheckIfCanSprintNoReturn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_CheckIfCanSprintNoReturn_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_CheckIfCanSprintNoReturn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_CheckIfCanSprintNoReturn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execCheckIfCanSprintNoReturn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckIfCanSprintNoReturn();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function CheckIfCanSprintNoReturn

// Begin Class AMultiplayerCharacter Function ClientApplyPerspectiveVisibility
static const FName NAME_AMultiplayerCharacter_ClientApplyPerspectiveVisibility = FName(TEXT("ClientApplyPerspectiveVisibility"));
void AMultiplayerCharacter::ClientApplyPerspectiveVisibility()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_ClientApplyPerspectiveVisibility);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_ClientApplyPerspectiveVisibility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_ClientApplyPerspectiveVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "ClientApplyPerspectiveVisibility", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ClientApplyPerspectiveVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_ClientApplyPerspectiveVisibility_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_ClientApplyPerspectiveVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_ClientApplyPerspectiveVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execClientApplyPerspectiveVisibility)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientApplyPerspectiveVisibility_Implementation();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function ClientApplyPerspectiveVisibility

// Begin Class AMultiplayerCharacter Function ClientDie
static const FName NAME_AMultiplayerCharacter_ClientDie = FName(TEXT("ClientDie"));
void AMultiplayerCharacter::ClientDie()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_ClientDie);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_ClientDie_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_ClientDie_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "ClientDie", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ClientDie_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_ClientDie_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_ClientDie()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_ClientDie_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execClientDie)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientDie_Implementation();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function ClientDie

// Begin Class AMultiplayerCharacter Function ClientInteract
struct MultiplayerCharacter_eventClientInteract_Parms
{
	AInteractableItem* Interactable;
};
static const FName NAME_AMultiplayerCharacter_ClientInteract = FName(TEXT("ClientInteract"));
void AMultiplayerCharacter::ClientInteract(AInteractableItem* Interactable)
{
	MultiplayerCharacter_eventClientInteract_Parms Parms;
	Parms.Interactable=Interactable;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_ClientInteract);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_ClientInteract_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_ClientInteract_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventClientInteract_Parms, Interactable), Z_Construct_UClass_AInteractableItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_ClientInteract_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_ClientInteract_Statics::NewProp_Interactable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ClientInteract_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_ClientInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "ClientInteract", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_ClientInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ClientInteract_Statics::PropPointers), sizeof(MultiplayerCharacter_eventClientInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ClientInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_ClientInteract_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerCharacter_eventClientInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_ClientInteract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_ClientInteract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execClientInteract)
{
	P_GET_OBJECT(AInteractableItem,Z_Param_Interactable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientInteract_Implementation(Z_Param_Interactable);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function ClientInteract

// Begin Class AMultiplayerCharacter Function ClientOnTakeDamage
struct MultiplayerCharacter_eventClientOnTakeDamage_Parms
{
	int32 OldHealth;
	int32 NewHealth;
};
static const FName NAME_AMultiplayerCharacter_ClientOnTakeDamage = FName(TEXT("ClientOnTakeDamage"));
void AMultiplayerCharacter::ClientOnTakeDamage(int32 OldHealth, int32 NewHealth)
{
	MultiplayerCharacter_eventClientOnTakeDamage_Parms Parms;
	Parms.OldHealth=OldHealth;
	Parms.NewHealth=NewHealth;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_ClientOnTakeDamage);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_ClientOnTakeDamage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_OldHealth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_ClientOnTakeDamage_Statics::NewProp_OldHealth = { "OldHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventClientOnTakeDamage_Parms, OldHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_ClientOnTakeDamage_Statics::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventClientOnTakeDamage_Parms, NewHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_ClientOnTakeDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_ClientOnTakeDamage_Statics::NewProp_OldHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_ClientOnTakeDamage_Statics::NewProp_NewHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ClientOnTakeDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_ClientOnTakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "ClientOnTakeDamage", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_ClientOnTakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ClientOnTakeDamage_Statics::PropPointers), sizeof(MultiplayerCharacter_eventClientOnTakeDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ClientOnTakeDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_ClientOnTakeDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerCharacter_eventClientOnTakeDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_ClientOnTakeDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_ClientOnTakeDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execClientOnTakeDamage)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_OldHealth);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientOnTakeDamage_Implementation(Z_Param_OldHealth,Z_Param_NewHealth);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function ClientOnTakeDamage

// Begin Class AMultiplayerCharacter Function ClientRemoveInput
static const FName NAME_AMultiplayerCharacter_ClientRemoveInput = FName(TEXT("ClientRemoveInput"));
void AMultiplayerCharacter::ClientRemoveInput()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_ClientRemoveInput);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_ClientRemoveInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_ClientRemoveInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "ClientRemoveInput", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ClientRemoveInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_ClientRemoveInput_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_ClientRemoveInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_ClientRemoveInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execClientRemoveInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientRemoveInput_Implementation();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function ClientRemoveInput

// Begin Class AMultiplayerCharacter Function ClientSetThirdPersonShoulder
struct MultiplayerCharacter_eventClientSetThirdPersonShoulder_Parms
{
	bool LeftShoulder;
	bool SnapCameraLocation;
};
static const FName NAME_AMultiplayerCharacter_ClientSetThirdPersonShoulder = FName(TEXT("ClientSetThirdPersonShoulder"));
void AMultiplayerCharacter::ClientSetThirdPersonShoulder(bool LeftShoulder, bool SnapCameraLocation)
{
	MultiplayerCharacter_eventClientSetThirdPersonShoulder_Parms Parms;
	Parms.LeftShoulder=LeftShoulder ? true : false;
	Parms.SnapCameraLocation=SnapCameraLocation ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_ClientSetThirdPersonShoulder);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_ClientSetThirdPersonShoulder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "CPP_Default_SnapCameraLocation", "false" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_LeftShoulder_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LeftShoulder;
	static void NewProp_SnapCameraLocation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SnapCameraLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerCharacter_ClientSetThirdPersonShoulder_Statics::NewProp_LeftShoulder_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventClientSetThirdPersonShoulder_Parms*)Obj)->LeftShoulder = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_ClientSetThirdPersonShoulder_Statics::NewProp_LeftShoulder = { "LeftShoulder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventClientSetThirdPersonShoulder_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_ClientSetThirdPersonShoulder_Statics::NewProp_LeftShoulder_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMultiplayerCharacter_ClientSetThirdPersonShoulder_Statics::NewProp_SnapCameraLocation_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventClientSetThirdPersonShoulder_Parms*)Obj)->SnapCameraLocation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_ClientSetThirdPersonShoulder_Statics::NewProp_SnapCameraLocation = { "SnapCameraLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventClientSetThirdPersonShoulder_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_ClientSetThirdPersonShoulder_Statics::NewProp_SnapCameraLocation_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_ClientSetThirdPersonShoulder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_ClientSetThirdPersonShoulder_Statics::NewProp_LeftShoulder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_ClientSetThirdPersonShoulder_Statics::NewProp_SnapCameraLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ClientSetThirdPersonShoulder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_ClientSetThirdPersonShoulder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "ClientSetThirdPersonShoulder", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_ClientSetThirdPersonShoulder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ClientSetThirdPersonShoulder_Statics::PropPointers), sizeof(MultiplayerCharacter_eventClientSetThirdPersonShoulder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ClientSetThirdPersonShoulder_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_ClientSetThirdPersonShoulder_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerCharacter_eventClientSetThirdPersonShoulder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_ClientSetThirdPersonShoulder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_ClientSetThirdPersonShoulder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execClientSetThirdPersonShoulder)
{
	P_GET_UBOOL(Z_Param_LeftShoulder);
	P_GET_UBOOL(Z_Param_SnapCameraLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientSetThirdPersonShoulder_Implementation(Z_Param_LeftShoulder,Z_Param_SnapCameraLocation);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function ClientSetThirdPersonShoulder

// Begin Class AMultiplayerCharacter Function ClientSetupInput
static const FName NAME_AMultiplayerCharacter_ClientSetupInput = FName(TEXT("ClientSetupInput"));
void AMultiplayerCharacter::ClientSetupInput()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_ClientSetupInput);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_ClientSetupInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_ClientSetupInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "ClientSetupInput", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ClientSetupInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_ClientSetupInput_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_ClientSetupInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_ClientSetupInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execClientSetupInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientSetupInput_Implementation();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function ClientSetupInput

// Begin Class AMultiplayerCharacter Function ClientSetUsingThirdPerson
struct MultiplayerCharacter_eventClientSetUsingThirdPerson_Parms
{
	bool NewUsingThirdPerson;
	bool SnapCameraLocation;
};
static const FName NAME_AMultiplayerCharacter_ClientSetUsingThirdPerson = FName(TEXT("ClientSetUsingThirdPerson"));
void AMultiplayerCharacter::ClientSetUsingThirdPerson(bool NewUsingThirdPerson, bool SnapCameraLocation)
{
	MultiplayerCharacter_eventClientSetUsingThirdPerson_Parms Parms;
	Parms.NewUsingThirdPerson=NewUsingThirdPerson ? true : false;
	Parms.SnapCameraLocation=SnapCameraLocation ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_ClientSetUsingThirdPerson);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_ClientSetUsingThirdPerson_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "CPP_Default_SnapCameraLocation", "false" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewUsingThirdPerson_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewUsingThirdPerson;
	static void NewProp_SnapCameraLocation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SnapCameraLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerCharacter_ClientSetUsingThirdPerson_Statics::NewProp_NewUsingThirdPerson_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventClientSetUsingThirdPerson_Parms*)Obj)->NewUsingThirdPerson = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_ClientSetUsingThirdPerson_Statics::NewProp_NewUsingThirdPerson = { "NewUsingThirdPerson", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventClientSetUsingThirdPerson_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_ClientSetUsingThirdPerson_Statics::NewProp_NewUsingThirdPerson_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMultiplayerCharacter_ClientSetUsingThirdPerson_Statics::NewProp_SnapCameraLocation_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventClientSetUsingThirdPerson_Parms*)Obj)->SnapCameraLocation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_ClientSetUsingThirdPerson_Statics::NewProp_SnapCameraLocation = { "SnapCameraLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventClientSetUsingThirdPerson_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_ClientSetUsingThirdPerson_Statics::NewProp_SnapCameraLocation_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_ClientSetUsingThirdPerson_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_ClientSetUsingThirdPerson_Statics::NewProp_NewUsingThirdPerson,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_ClientSetUsingThirdPerson_Statics::NewProp_SnapCameraLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ClientSetUsingThirdPerson_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_ClientSetUsingThirdPerson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "ClientSetUsingThirdPerson", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_ClientSetUsingThirdPerson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ClientSetUsingThirdPerson_Statics::PropPointers), sizeof(MultiplayerCharacter_eventClientSetUsingThirdPerson_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ClientSetUsingThirdPerson_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_ClientSetUsingThirdPerson_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerCharacter_eventClientSetUsingThirdPerson_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_ClientSetUsingThirdPerson()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_ClientSetUsingThirdPerson_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execClientSetUsingThirdPerson)
{
	P_GET_UBOOL(Z_Param_NewUsingThirdPerson);
	P_GET_UBOOL(Z_Param_SnapCameraLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientSetUsingThirdPerson_Implementation(Z_Param_NewUsingThirdPerson,Z_Param_SnapCameraLocation);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function ClientSetUsingThirdPerson

// Begin Class AMultiplayerCharacter Function DestroySelf
static const FName NAME_AMultiplayerCharacter_DestroySelf = FName(TEXT("DestroySelf"));
void AMultiplayerCharacter::DestroySelf()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_DestroySelf);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_DestroySelf_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_DestroySelf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "DestroySelf", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_DestroySelf_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_DestroySelf_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_DestroySelf()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_DestroySelf_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execDestroySelf)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DestroySelf_Implementation();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function DestroySelf

// Begin Class AMultiplayerCharacter Function Die
struct Z_Construct_UFunction_AMultiplayerCharacter_Die_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_Die_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "Die", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_Die_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_Die_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_Die()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_Die_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execDie)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Die();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function Die

// Begin Class AMultiplayerCharacter Function Die1
struct Z_Construct_UFunction_AMultiplayerCharacter_Die1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_Die1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "Die1", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_Die1_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_Die1_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_Die1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_Die1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execDie1)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Die1();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function Die1

// Begin Class AMultiplayerCharacter Function Fire
struct Z_Construct_UFunction_AMultiplayerCharacter_Fire_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "Fire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_Fire_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_Fire_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_Fire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_Fire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execFire)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Fire();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function Fire

// Begin Class AMultiplayerCharacter Function GetAllSharedCaliberAmounts
struct Z_Construct_UFunction_AMultiplayerCharacter_GetAllSharedCaliberAmounts_Statics
{
	struct MultiplayerCharacter_eventGetAllSharedCaliberAmounts_Parms
	{
		TArray<int32> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_GetAllSharedCaliberAmounts_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_GetAllSharedCaliberAmounts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventGetAllSharedCaliberAmounts_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_GetAllSharedCaliberAmounts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_GetAllSharedCaliberAmounts_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_GetAllSharedCaliberAmounts_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetAllSharedCaliberAmounts_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_GetAllSharedCaliberAmounts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "GetAllSharedCaliberAmounts", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_GetAllSharedCaliberAmounts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetAllSharedCaliberAmounts_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GetAllSharedCaliberAmounts_Statics::MultiplayerCharacter_eventGetAllSharedCaliberAmounts_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetAllSharedCaliberAmounts_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_GetAllSharedCaliberAmounts_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GetAllSharedCaliberAmounts_Statics::MultiplayerCharacter_eventGetAllSharedCaliberAmounts_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_GetAllSharedCaliberAmounts()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_GetAllSharedCaliberAmounts_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execGetAllSharedCaliberAmounts)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<int32>*)Z_Param__Result=P_THIS->GetAllSharedCaliberAmounts();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function GetAllSharedCaliberAmounts

// Begin Class AMultiplayerCharacter Function GetAllSharedCaliberNames
struct Z_Construct_UFunction_AMultiplayerCharacter_GetAllSharedCaliberNames_Statics
{
	struct MultiplayerCharacter_eventGetAllSharedCaliberNames_Parms
	{
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AMultiplayerCharacter_GetAllSharedCaliberNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_GetAllSharedCaliberNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventGetAllSharedCaliberNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_GetAllSharedCaliberNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_GetAllSharedCaliberNames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_GetAllSharedCaliberNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetAllSharedCaliberNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_GetAllSharedCaliberNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "GetAllSharedCaliberNames", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_GetAllSharedCaliberNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetAllSharedCaliberNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GetAllSharedCaliberNames_Statics::MultiplayerCharacter_eventGetAllSharedCaliberNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetAllSharedCaliberNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_GetAllSharedCaliberNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GetAllSharedCaliberNames_Statics::MultiplayerCharacter_eventGetAllSharedCaliberNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_GetAllSharedCaliberNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_GetAllSharedCaliberNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execGetAllSharedCaliberNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=P_THIS->GetAllSharedCaliberNames();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function GetAllSharedCaliberNames

// Begin Class AMultiplayerCharacter Function GetAllSharedCalibers
struct Z_Construct_UFunction_AMultiplayerCharacter_GetAllSharedCalibers_Statics
{
	struct MultiplayerCharacter_eventGetAllSharedCalibers_Parms
	{
		TMap<FName,int32> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_GetAllSharedCalibers_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AMultiplayerCharacter_GetAllSharedCalibers_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_GetAllSharedCalibers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventGetAllSharedCalibers_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_GetAllSharedCalibers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_GetAllSharedCalibers_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_GetAllSharedCalibers_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_GetAllSharedCalibers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetAllSharedCalibers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_GetAllSharedCalibers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "GetAllSharedCalibers", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_GetAllSharedCalibers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetAllSharedCalibers_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GetAllSharedCalibers_Statics::MultiplayerCharacter_eventGetAllSharedCalibers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetAllSharedCalibers_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_GetAllSharedCalibers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GetAllSharedCalibers_Statics::MultiplayerCharacter_eventGetAllSharedCalibers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_GetAllSharedCalibers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_GetAllSharedCalibers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execGetAllSharedCalibers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<FName,int32>*)Z_Param__Result=P_THIS->GetAllSharedCalibers();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function GetAllSharedCalibers

// Begin Class AMultiplayerCharacter Function GetAllWeapons
struct Z_Construct_UFunction_AMultiplayerCharacter_GetAllWeapons_Statics
{
	struct MultiplayerCharacter_eventGetAllWeapons_Parms
	{
		TArray<AMultiplayerGun*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_GetAllWeapons_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMultiplayerGun_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_GetAllWeapons_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventGetAllWeapons_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_GetAllWeapons_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_GetAllWeapons_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_GetAllWeapons_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetAllWeapons_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_GetAllWeapons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "GetAllWeapons", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_GetAllWeapons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetAllWeapons_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GetAllWeapons_Statics::MultiplayerCharacter_eventGetAllWeapons_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetAllWeapons_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_GetAllWeapons_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GetAllWeapons_Statics::MultiplayerCharacter_eventGetAllWeapons_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_GetAllWeapons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_GetAllWeapons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execGetAllWeapons)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AMultiplayerGun*>*)Z_Param__Result=P_THIS->GetAllWeapons();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function GetAllWeapons

// Begin Class AMultiplayerCharacter Function GetAmountOfWeapons
struct Z_Construct_UFunction_AMultiplayerCharacter_GetAmountOfWeapons_Statics
{
	struct MultiplayerCharacter_eventGetAmountOfWeapons_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_GetAmountOfWeapons_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventGetAmountOfWeapons_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_GetAmountOfWeapons_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_GetAmountOfWeapons_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetAmountOfWeapons_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_GetAmountOfWeapons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "GetAmountOfWeapons", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_GetAmountOfWeapons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetAmountOfWeapons_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GetAmountOfWeapons_Statics::MultiplayerCharacter_eventGetAmountOfWeapons_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetAmountOfWeapons_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_GetAmountOfWeapons_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GetAmountOfWeapons_Statics::MultiplayerCharacter_eventGetAmountOfWeapons_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_GetAmountOfWeapons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_GetAmountOfWeapons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execGetAmountOfWeapons)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetAmountOfWeapons();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function GetAmountOfWeapons

// Begin Class AMultiplayerCharacter Function GetCanAim
struct Z_Construct_UFunction_AMultiplayerCharacter_GetCanAim_Statics
{
	struct MultiplayerCharacter_eventGetCanAim_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerCharacter_GetCanAim_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventGetCanAim_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_GetCanAim_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventGetCanAim_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_GetCanAim_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_GetCanAim_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_GetCanAim_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetCanAim_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_GetCanAim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "GetCanAim", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_GetCanAim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetCanAim_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GetCanAim_Statics::MultiplayerCharacter_eventGetCanAim_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetCanAim_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_GetCanAim_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GetCanAim_Statics::MultiplayerCharacter_eventGetCanAim_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_GetCanAim()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_GetCanAim_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execGetCanAim)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCanAim();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function GetCanAim

// Begin Class AMultiplayerCharacter Function GetCanInteract
struct Z_Construct_UFunction_AMultiplayerCharacter_GetCanInteract_Statics
{
	struct MultiplayerCharacter_eventGetCanInteract_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerCharacter_GetCanInteract_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventGetCanInteract_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_GetCanInteract_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventGetCanInteract_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_GetCanInteract_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_GetCanInteract_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_GetCanInteract_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetCanInteract_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_GetCanInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "GetCanInteract", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_GetCanInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetCanInteract_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GetCanInteract_Statics::MultiplayerCharacter_eventGetCanInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetCanInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_GetCanInteract_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GetCanInteract_Statics::MultiplayerCharacter_eventGetCanInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_GetCanInteract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_GetCanInteract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execGetCanInteract)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCanInteract();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function GetCanInteract

// Begin Class AMultiplayerCharacter Function GetCanShoot
struct Z_Construct_UFunction_AMultiplayerCharacter_GetCanShoot_Statics
{
	struct MultiplayerCharacter_eventGetCanShoot_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerCharacter_GetCanShoot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventGetCanShoot_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_GetCanShoot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventGetCanShoot_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_GetCanShoot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_GetCanShoot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_GetCanShoot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetCanShoot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_GetCanShoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "GetCanShoot", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_GetCanShoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetCanShoot_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GetCanShoot_Statics::MultiplayerCharacter_eventGetCanShoot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetCanShoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_GetCanShoot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GetCanShoot_Statics::MultiplayerCharacter_eventGetCanShoot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_GetCanShoot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_GetCanShoot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execGetCanShoot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCanShoot();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function GetCanShoot

// Begin Class AMultiplayerCharacter Function GetHasWeapon
struct Z_Construct_UFunction_AMultiplayerCharacter_GetHasWeapon_Statics
{
	struct MultiplayerCharacter_eventGetHasWeapon_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerCharacter_GetHasWeapon_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventGetHasWeapon_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_GetHasWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventGetHasWeapon_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_GetHasWeapon_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_GetHasWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_GetHasWeapon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetHasWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_GetHasWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "GetHasWeapon", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_GetHasWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetHasWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GetHasWeapon_Statics::MultiplayerCharacter_eventGetHasWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetHasWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_GetHasWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GetHasWeapon_Statics::MultiplayerCharacter_eventGetHasWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_GetHasWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_GetHasWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execGetHasWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetHasWeapon();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function GetHasWeapon

// Begin Class AMultiplayerCharacter Function GetHealth
struct Z_Construct_UFunction_AMultiplayerCharacter_GetHealth_Statics
{
	struct MultiplayerCharacter_eventGetHealth_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "This will return -1 if the health component is invalid" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_GetHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_GetHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "GetHealth", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_GetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GetHealth_Statics::MultiplayerCharacter_eventGetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_GetHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GetHealth_Statics::MultiplayerCharacter_eventGetHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_GetHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_GetHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execGetHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetHealth();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function GetHealth

// Begin Class AMultiplayerCharacter Function GetHealthComponent
struct Z_Construct_UFunction_AMultiplayerCharacter_GetHealthComponent_Statics
{
	struct MultiplayerCharacter_eventGetHealthComponent_Parms
	{
		UMultiplayerHealthComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_GetHealthComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventGetHealthComponent_Parms, ReturnValue), Z_Construct_UClass_UMultiplayerHealthComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_GetHealthComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_GetHealthComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetHealthComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_GetHealthComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "GetHealthComponent", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_GetHealthComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetHealthComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GetHealthComponent_Statics::MultiplayerCharacter_eventGetHealthComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetHealthComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_GetHealthComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GetHealthComponent_Statics::MultiplayerCharacter_eventGetHealthComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_GetHealthComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_GetHealthComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execGetHealthComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMultiplayerHealthComponent**)Z_Param__Result=P_THIS->GetHealthComponent();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function GetHealthComponent

// Begin Class AMultiplayerCharacter Function GetInteractableBeingOverlapped
struct Z_Construct_UFunction_AMultiplayerCharacter_GetInteractableBeingOverlapped_Statics
{
	struct MultiplayerCharacter_eventGetInteractableBeingOverlapped_Parms
	{
		AInteractableItem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_GetInteractableBeingOverlapped_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventGetInteractableBeingOverlapped_Parms, ReturnValue), Z_Construct_UClass_AInteractableItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_GetInteractableBeingOverlapped_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_GetInteractableBeingOverlapped_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetInteractableBeingOverlapped_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_GetInteractableBeingOverlapped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "GetInteractableBeingOverlapped", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_GetInteractableBeingOverlapped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetInteractableBeingOverlapped_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GetInteractableBeingOverlapped_Statics::MultiplayerCharacter_eventGetInteractableBeingOverlapped_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetInteractableBeingOverlapped_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_GetInteractableBeingOverlapped_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GetInteractableBeingOverlapped_Statics::MultiplayerCharacter_eventGetInteractableBeingOverlapped_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_GetInteractableBeingOverlapped()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_GetInteractableBeingOverlapped_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execGetInteractableBeingOverlapped)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AInteractableItem**)Z_Param__Result=P_THIS->GetInteractableBeingOverlapped();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function GetInteractableBeingOverlapped

// Begin Class AMultiplayerCharacter Function GetInteractDistance
struct Z_Construct_UFunction_AMultiplayerCharacter_GetInteractDistance_Statics
{
	struct MultiplayerCharacter_eventGetInteractDistance_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_GetInteractDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventGetInteractDistance_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_GetInteractDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_GetInteractDistance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetInteractDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_GetInteractDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "GetInteractDistance", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_GetInteractDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetInteractDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GetInteractDistance_Statics::MultiplayerCharacter_eventGetInteractDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetInteractDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_GetInteractDistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GetInteractDistance_Statics::MultiplayerCharacter_eventGetInteractDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_GetInteractDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_GetInteractDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execGetInteractDistance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetInteractDistance();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function GetInteractDistance

// Begin Class AMultiplayerCharacter Function GetIsADSing
struct Z_Construct_UFunction_AMultiplayerCharacter_GetIsADSing_Statics
{
	struct MultiplayerCharacter_eventGetIsADSing_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerCharacter_GetIsADSing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventGetIsADSing_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_GetIsADSing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventGetIsADSing_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_GetIsADSing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_GetIsADSing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_GetIsADSing_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetIsADSing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_GetIsADSing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "GetIsADSing", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_GetIsADSing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetIsADSing_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GetIsADSing_Statics::MultiplayerCharacter_eventGetIsADSing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetIsADSing_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_GetIsADSing_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GetIsADSing_Statics::MultiplayerCharacter_eventGetIsADSing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_GetIsADSing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_GetIsADSing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execGetIsADSing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsADSing();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function GetIsADSing

// Begin Class AMultiplayerCharacter Function GetIsAiming
struct Z_Construct_UFunction_AMultiplayerCharacter_GetIsAiming_Statics
{
	struct MultiplayerCharacter_eventGetIsAiming_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerCharacter_GetIsAiming_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventGetIsAiming_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_GetIsAiming_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventGetIsAiming_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_GetIsAiming_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_GetIsAiming_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_GetIsAiming_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetIsAiming_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_GetIsAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "GetIsAiming", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_GetIsAiming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetIsAiming_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GetIsAiming_Statics::MultiplayerCharacter_eventGetIsAiming_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetIsAiming_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_GetIsAiming_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GetIsAiming_Statics::MultiplayerCharacter_eventGetIsAiming_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_GetIsAiming()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_GetIsAiming_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execGetIsAiming)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsAiming();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function GetIsAiming

// Begin Class AMultiplayerCharacter Function GetIsDead
struct Z_Construct_UFunction_AMultiplayerCharacter_GetIsDead_Statics
{
	struct MultiplayerCharacter_eventGetIsDead_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "This will return true if the health component is invalid" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerCharacter_GetIsDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventGetIsDead_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_GetIsDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventGetIsDead_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_GetIsDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_GetIsDead_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_GetIsDead_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetIsDead_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_GetIsDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "GetIsDead", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_GetIsDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetIsDead_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GetIsDead_Statics::MultiplayerCharacter_eventGetIsDead_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetIsDead_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_GetIsDead_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GetIsDead_Statics::MultiplayerCharacter_eventGetIsDead_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_GetIsDead()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_GetIsDead_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execGetIsDead)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsDead();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function GetIsDead

// Begin Class AMultiplayerCharacter Function GetIsFiring
struct Z_Construct_UFunction_AMultiplayerCharacter_GetIsFiring_Statics
{
	struct MultiplayerCharacter_eventGetIsFiring_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerCharacter_GetIsFiring_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventGetIsFiring_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_GetIsFiring_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventGetIsFiring_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_GetIsFiring_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_GetIsFiring_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_GetIsFiring_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetIsFiring_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_GetIsFiring_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "GetIsFiring", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_GetIsFiring_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetIsFiring_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GetIsFiring_Statics::MultiplayerCharacter_eventGetIsFiring_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetIsFiring_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_GetIsFiring_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GetIsFiring_Statics::MultiplayerCharacter_eventGetIsFiring_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_GetIsFiring()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_GetIsFiring_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execGetIsFiring)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsFiring();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function GetIsFiring

// Begin Class AMultiplayerCharacter Function GetIsWeaponHolstered
struct Z_Construct_UFunction_AMultiplayerCharacter_GetIsWeaponHolstered_Statics
{
	struct MultiplayerCharacter_eventGetIsWeaponHolstered_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerCharacter_GetIsWeaponHolstered_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventGetIsWeaponHolstered_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_GetIsWeaponHolstered_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventGetIsWeaponHolstered_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_GetIsWeaponHolstered_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_GetIsWeaponHolstered_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_GetIsWeaponHolstered_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetIsWeaponHolstered_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_GetIsWeaponHolstered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "GetIsWeaponHolstered", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_GetIsWeaponHolstered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetIsWeaponHolstered_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GetIsWeaponHolstered_Statics::MultiplayerCharacter_eventGetIsWeaponHolstered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetIsWeaponHolstered_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_GetIsWeaponHolstered_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GetIsWeaponHolstered_Statics::MultiplayerCharacter_eventGetIsWeaponHolstered_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_GetIsWeaponHolstered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_GetIsWeaponHolstered_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execGetIsWeaponHolstered)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsWeaponHolstered();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function GetIsWeaponHolstered

// Begin Class AMultiplayerCharacter Function GetIsZoomedIn
struct Z_Construct_UFunction_AMultiplayerCharacter_GetIsZoomedIn_Statics
{
	struct MultiplayerCharacter_eventGetIsZoomedIn_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerCharacter_GetIsZoomedIn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventGetIsZoomedIn_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_GetIsZoomedIn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventGetIsZoomedIn_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_GetIsZoomedIn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_GetIsZoomedIn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_GetIsZoomedIn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetIsZoomedIn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_GetIsZoomedIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "GetIsZoomedIn", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_GetIsZoomedIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetIsZoomedIn_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GetIsZoomedIn_Statics::MultiplayerCharacter_eventGetIsZoomedIn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetIsZoomedIn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_GetIsZoomedIn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GetIsZoomedIn_Statics::MultiplayerCharacter_eventGetIsZoomedIn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_GetIsZoomedIn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_GetIsZoomedIn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execGetIsZoomedIn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsZoomedIn();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function GetIsZoomedIn

// Begin Class AMultiplayerCharacter Function GetMaxWeaponAmount
struct Z_Construct_UFunction_AMultiplayerCharacter_GetMaxWeaponAmount_Statics
{
	struct MultiplayerCharacter_eventGetMaxWeaponAmount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_GetMaxWeaponAmount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventGetMaxWeaponAmount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_GetMaxWeaponAmount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_GetMaxWeaponAmount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetMaxWeaponAmount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_GetMaxWeaponAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "GetMaxWeaponAmount", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_GetMaxWeaponAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetMaxWeaponAmount_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GetMaxWeaponAmount_Statics::MultiplayerCharacter_eventGetMaxWeaponAmount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetMaxWeaponAmount_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_GetMaxWeaponAmount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GetMaxWeaponAmount_Statics::MultiplayerCharacter_eventGetMaxWeaponAmount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_GetMaxWeaponAmount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_GetMaxWeaponAmount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execGetMaxWeaponAmount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMaxWeaponAmount();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function GetMaxWeaponAmount

// Begin Class AMultiplayerCharacter Function GetOverlappingInteractable
struct Z_Construct_UFunction_AMultiplayerCharacter_GetOverlappingInteractable_Statics
{
	struct MultiplayerCharacter_eventGetOverlappingInteractable_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerCharacter_GetOverlappingInteractable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventGetOverlappingInteractable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_GetOverlappingInteractable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventGetOverlappingInteractable_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_GetOverlappingInteractable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_GetOverlappingInteractable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_GetOverlappingInteractable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetOverlappingInteractable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_GetOverlappingInteractable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "GetOverlappingInteractable", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_GetOverlappingInteractable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetOverlappingInteractable_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GetOverlappingInteractable_Statics::MultiplayerCharacter_eventGetOverlappingInteractable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetOverlappingInteractable_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_GetOverlappingInteractable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GetOverlappingInteractable_Statics::MultiplayerCharacter_eventGetOverlappingInteractable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_GetOverlappingInteractable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_GetOverlappingInteractable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execGetOverlappingInteractable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetOverlappingInteractable();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function GetOverlappingInteractable

// Begin Class AMultiplayerCharacter Function GetOwningController
struct Z_Construct_UFunction_AMultiplayerCharacter_GetOwningController_Statics
{
	struct MultiplayerCharacter_eventGetOwningController_Parms
	{
		AMultiplayerPlayerController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_GetOwningController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventGetOwningController_Parms, ReturnValue), Z_Construct_UClass_AMultiplayerPlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_GetOwningController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_GetOwningController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetOwningController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_GetOwningController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "GetOwningController", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_GetOwningController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetOwningController_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GetOwningController_Statics::MultiplayerCharacter_eventGetOwningController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetOwningController_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_GetOwningController_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GetOwningController_Statics::MultiplayerCharacter_eventGetOwningController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_GetOwningController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_GetOwningController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execGetOwningController)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AMultiplayerPlayerController**)Z_Param__Result=P_THIS->GetOwningController();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function GetOwningController

// Begin Class AMultiplayerCharacter Function GetPlayerModelMesh
struct MultiplayerCharacter_eventGetPlayerModelMesh_Parms
{
	USkeletalMeshComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	MultiplayerCharacter_eventGetPlayerModelMesh_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_AMultiplayerCharacter_GetPlayerModelMesh = FName(TEXT("GetPlayerModelMesh"));
USkeletalMeshComponent* AMultiplayerCharacter::GetPlayerModelMesh()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_GetPlayerModelMesh);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		MultiplayerCharacter_eventGetPlayerModelMesh_Parms Parms;
	ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return GetPlayerModelMesh_Implementation();
	}
}
struct Z_Construct_UFunction_AMultiplayerCharacter_GetPlayerModelMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "Override this function to set a different mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_GetPlayerModelMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventGetPlayerModelMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_GetPlayerModelMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_GetPlayerModelMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetPlayerModelMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_GetPlayerModelMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "GetPlayerModelMesh", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_GetPlayerModelMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetPlayerModelMesh_Statics::PropPointers), sizeof(MultiplayerCharacter_eventGetPlayerModelMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetPlayerModelMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_GetPlayerModelMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerCharacter_eventGetPlayerModelMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_GetPlayerModelMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_GetPlayerModelMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execGetPlayerModelMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetPlayerModelMesh_Implementation();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function GetPlayerModelMesh

// Begin Class AMultiplayerCharacter Function GetSharedCaliberAmount
struct Z_Construct_UFunction_AMultiplayerCharacter_GetSharedCaliberAmount_Statics
{
	struct MultiplayerCharacter_eventGetSharedCaliberAmount_Parms
	{
		int32 Index;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_GetSharedCaliberAmount_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventGetSharedCaliberAmount_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_GetSharedCaliberAmount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventGetSharedCaliberAmount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_GetSharedCaliberAmount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_GetSharedCaliberAmount_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_GetSharedCaliberAmount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetSharedCaliberAmount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_GetSharedCaliberAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "GetSharedCaliberAmount", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_GetSharedCaliberAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetSharedCaliberAmount_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GetSharedCaliberAmount_Statics::MultiplayerCharacter_eventGetSharedCaliberAmount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetSharedCaliberAmount_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_GetSharedCaliberAmount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GetSharedCaliberAmount_Statics::MultiplayerCharacter_eventGetSharedCaliberAmount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_GetSharedCaliberAmount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_GetSharedCaliberAmount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execGetSharedCaliberAmount)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetSharedCaliberAmount(Z_Param_Index);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function GetSharedCaliberAmount

// Begin Class AMultiplayerCharacter Function GetSharedCaliberName
struct Z_Construct_UFunction_AMultiplayerCharacter_GetSharedCaliberName_Statics
{
	struct MultiplayerCharacter_eventGetSharedCaliberName_Parms
	{
		int32 Index;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_GetSharedCaliberName_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventGetSharedCaliberName_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AMultiplayerCharacter_GetSharedCaliberName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventGetSharedCaliberName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_GetSharedCaliberName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_GetSharedCaliberName_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_GetSharedCaliberName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetSharedCaliberName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_GetSharedCaliberName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "GetSharedCaliberName", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_GetSharedCaliberName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetSharedCaliberName_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GetSharedCaliberName_Statics::MultiplayerCharacter_eventGetSharedCaliberName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetSharedCaliberName_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_GetSharedCaliberName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GetSharedCaliberName_Statics::MultiplayerCharacter_eventGetSharedCaliberName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_GetSharedCaliberName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_GetSharedCaliberName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execGetSharedCaliberName)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetSharedCaliberName(Z_Param_Index);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function GetSharedCaliberName

// Begin Class AMultiplayerCharacter Function GetThirdPersonSpringArmLength
struct Z_Construct_UFunction_AMultiplayerCharacter_GetThirdPersonSpringArmLength_Statics
{
	struct MultiplayerCharacter_eventGetThirdPersonSpringArmLength_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_GetThirdPersonSpringArmLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventGetThirdPersonSpringArmLength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_GetThirdPersonSpringArmLength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_GetThirdPersonSpringArmLength_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetThirdPersonSpringArmLength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_GetThirdPersonSpringArmLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "GetThirdPersonSpringArmLength", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_GetThirdPersonSpringArmLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetThirdPersonSpringArmLength_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GetThirdPersonSpringArmLength_Statics::MultiplayerCharacter_eventGetThirdPersonSpringArmLength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetThirdPersonSpringArmLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_GetThirdPersonSpringArmLength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GetThirdPersonSpringArmLength_Statics::MultiplayerCharacter_eventGetThirdPersonSpringArmLength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_GetThirdPersonSpringArmLength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_GetThirdPersonSpringArmLength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execGetThirdPersonSpringArmLength)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetThirdPersonSpringArmLength();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function GetThirdPersonSpringArmLength

// Begin Class AMultiplayerCharacter Function GetUseADS
struct Z_Construct_UFunction_AMultiplayerCharacter_GetUseADS_Statics
{
	struct MultiplayerCharacter_eventGetUseADS_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_GetUseADS_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventGetUseADS_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_GetUseADS_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_GetUseADS_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetUseADS_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_GetUseADS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "GetUseADS", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_GetUseADS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetUseADS_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GetUseADS_Statics::MultiplayerCharacter_eventGetUseADS_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetUseADS_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_GetUseADS_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GetUseADS_Statics::MultiplayerCharacter_eventGetUseADS_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_GetUseADS()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_GetUseADS_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execGetUseADS)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetUseADS();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function GetUseADS

// Begin Class AMultiplayerCharacter Function GetUsingThirdPerson
struct Z_Construct_UFunction_AMultiplayerCharacter_GetUsingThirdPerson_Statics
{
	struct MultiplayerCharacter_eventGetUsingThirdPerson_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerCharacter_GetUsingThirdPerson_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventGetUsingThirdPerson_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_GetUsingThirdPerson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventGetUsingThirdPerson_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_GetUsingThirdPerson_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_GetUsingThirdPerson_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_GetUsingThirdPerson_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetUsingThirdPerson_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_GetUsingThirdPerson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "GetUsingThirdPerson", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_GetUsingThirdPerson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetUsingThirdPerson_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GetUsingThirdPerson_Statics::MultiplayerCharacter_eventGetUsingThirdPerson_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetUsingThirdPerson_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_GetUsingThirdPerson_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GetUsingThirdPerson_Statics::MultiplayerCharacter_eventGetUsingThirdPerson_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_GetUsingThirdPerson()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_GetUsingThirdPerson_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execGetUsingThirdPerson)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetUsingThirdPerson();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function GetUsingThirdPerson

// Begin Class AMultiplayerCharacter Function GetWeapon
struct Z_Construct_UFunction_AMultiplayerCharacter_GetWeapon_Statics
{
	struct MultiplayerCharacter_eventGetWeapon_Parms
	{
		bool GetCurrentWeapon;
		int32 WeaponIndex;
		AMultiplayerGun* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "CPP_Default_GetCurrentWeapon", "true" },
		{ "CPP_Default_WeaponIndex", "-1" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_GetCurrentWeapon_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_GetCurrentWeapon;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WeaponIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerCharacter_GetWeapon_Statics::NewProp_GetCurrentWeapon_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventGetWeapon_Parms*)Obj)->GetCurrentWeapon = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_GetWeapon_Statics::NewProp_GetCurrentWeapon = { "GetCurrentWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventGetWeapon_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_GetWeapon_Statics::NewProp_GetCurrentWeapon_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_GetWeapon_Statics::NewProp_WeaponIndex = { "WeaponIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventGetWeapon_Parms, WeaponIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_GetWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventGetWeapon_Parms, ReturnValue), Z_Construct_UClass_AMultiplayerGun_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_GetWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_GetWeapon_Statics::NewProp_GetCurrentWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_GetWeapon_Statics::NewProp_WeaponIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_GetWeapon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_GetWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "GetWeapon", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_GetWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GetWeapon_Statics::MultiplayerCharacter_eventGetWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_GetWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GetWeapon_Statics::MultiplayerCharacter_eventGetWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_GetWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_GetWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execGetWeapon)
{
	P_GET_UBOOL(Z_Param_GetCurrentWeapon);
	P_GET_PROPERTY(FIntProperty,Z_Param_WeaponIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AMultiplayerGun**)Z_Param__Result=P_THIS->GetWeapon(Z_Param_GetCurrentWeapon,Z_Param_WeaponIndex);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function GetWeapon

// Begin Class AMultiplayerCharacter Function GetWeaponIndex
struct Z_Construct_UFunction_AMultiplayerCharacter_GetWeaponIndex_Statics
{
	struct MultiplayerCharacter_eventGetWeaponIndex_Parms
	{
		AMultiplayerGun* Weapon;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapon;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_GetWeaponIndex_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventGetWeaponIndex_Parms, Weapon), Z_Construct_UClass_AMultiplayerGun_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_GetWeaponIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventGetWeaponIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_GetWeaponIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_GetWeaponIndex_Statics::NewProp_Weapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_GetWeaponIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetWeaponIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_GetWeaponIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "GetWeaponIndex", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_GetWeaponIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetWeaponIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GetWeaponIndex_Statics::MultiplayerCharacter_eventGetWeaponIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetWeaponIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_GetWeaponIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GetWeaponIndex_Statics::MultiplayerCharacter_eventGetWeaponIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_GetWeaponIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_GetWeaponIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execGetWeaponIndex)
{
	P_GET_OBJECT(AMultiplayerGun,Z_Param_Weapon);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetWeaponIndex(Z_Param_Weapon);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function GetWeaponIndex

// Begin Class AMultiplayerCharacter Function GiveLoadout
struct Z_Construct_UFunction_AMultiplayerCharacter_GiveLoadout_Statics
{
	struct MultiplayerCharacter_eventGiveLoadout_Parms
	{
		TArray<TSubclassOf<AMultiplayerGun> > Loadout;
		int32 MaxWeaponAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "CPP_Default_MaxWeaponAmount", "2" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Loadout_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Loadout;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxWeaponAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_GiveLoadout_Statics::NewProp_Loadout_Inner = { "Loadout", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AMultiplayerGun_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_GiveLoadout_Statics::NewProp_Loadout = { "Loadout", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventGiveLoadout_Parms, Loadout), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_GiveLoadout_Statics::NewProp_MaxWeaponAmount = { "MaxWeaponAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventGiveLoadout_Parms, MaxWeaponAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_GiveLoadout_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_GiveLoadout_Statics::NewProp_Loadout_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_GiveLoadout_Statics::NewProp_Loadout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_GiveLoadout_Statics::NewProp_MaxWeaponAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GiveLoadout_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_GiveLoadout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "GiveLoadout", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_GiveLoadout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GiveLoadout_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GiveLoadout_Statics::MultiplayerCharacter_eventGiveLoadout_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GiveLoadout_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_GiveLoadout_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_GiveLoadout_Statics::MultiplayerCharacter_eventGiveLoadout_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_GiveLoadout()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_GiveLoadout_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execGiveLoadout)
{
	P_GET_TARRAY(TSubclassOf<AMultiplayerGun>,Z_Param_Loadout);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxWeaponAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GiveLoadout(Z_Param_Loadout,Z_Param_MaxWeaponAmount);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function GiveLoadout

// Begin Class AMultiplayerCharacter Function GiveWeapon
struct MultiplayerCharacter_eventGiveWeapon_Parms
{
	TSubclassOf<AMultiplayerGun> WeaponToSpawn;
	AMultiplayerGun* WeaponToPickup;
	bool SwitchToNewWeapon;
};
static const FName NAME_AMultiplayerCharacter_GiveWeapon = FName(TEXT("GiveWeapon"));
void AMultiplayerCharacter::GiveWeapon(TSubclassOf<AMultiplayerGun> WeaponToSpawn, AMultiplayerGun* WeaponToPickup, bool SwitchToNewWeapon)
{
	MultiplayerCharacter_eventGiveWeapon_Parms Parms;
	Parms.WeaponToSpawn=WeaponToSpawn;
	Parms.WeaponToPickup=WeaponToPickup;
	Parms.SwitchToNewWeapon=SwitchToNewWeapon ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_GiveWeapon);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_GiveWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "CPP_Default_SwitchToNewWeapon", "false" },
		{ "CPP_Default_WeaponToPickup", "None" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponToSpawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponToPickup;
	static void NewProp_SwitchToNewWeapon_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SwitchToNewWeapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_GiveWeapon_Statics::NewProp_WeaponToSpawn = { "WeaponToSpawn", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventGiveWeapon_Parms, WeaponToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_AMultiplayerGun_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_GiveWeapon_Statics::NewProp_WeaponToPickup = { "WeaponToPickup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventGiveWeapon_Parms, WeaponToPickup), Z_Construct_UClass_AMultiplayerGun_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMultiplayerCharacter_GiveWeapon_Statics::NewProp_SwitchToNewWeapon_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventGiveWeapon_Parms*)Obj)->SwitchToNewWeapon = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_GiveWeapon_Statics::NewProp_SwitchToNewWeapon = { "SwitchToNewWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventGiveWeapon_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_GiveWeapon_Statics::NewProp_SwitchToNewWeapon_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_GiveWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_GiveWeapon_Statics::NewProp_WeaponToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_GiveWeapon_Statics::NewProp_WeaponToPickup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_GiveWeapon_Statics::NewProp_SwitchToNewWeapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GiveWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_GiveWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "GiveWeapon", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_GiveWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GiveWeapon_Statics::PropPointers), sizeof(MultiplayerCharacter_eventGiveWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GiveWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_GiveWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerCharacter_eventGiveWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_GiveWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_GiveWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execGiveWeapon)
{
	P_GET_OBJECT(UClass,Z_Param_WeaponToSpawn);
	P_GET_OBJECT(AMultiplayerGun,Z_Param_WeaponToPickup);
	P_GET_UBOOL(Z_Param_SwitchToNewWeapon);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GiveWeapon_Implementation(Z_Param_WeaponToSpawn,Z_Param_WeaponToPickup,Z_Param_SwitchToNewWeapon);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function GiveWeapon

// Begin Class AMultiplayerCharacter Function HolsterWeapon_BP
static const FName NAME_AMultiplayerCharacter_HolsterWeapon_BP = FName(TEXT("HolsterWeapon_BP"));
void AMultiplayerCharacter::HolsterWeapon_BP()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_HolsterWeapon_BP);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_HolsterWeapon_BP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "This executes after the C++ function" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_HolsterWeapon_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "HolsterWeapon_BP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_HolsterWeapon_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_HolsterWeapon_BP_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_HolsterWeapon_BP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_HolsterWeapon_BP_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AMultiplayerCharacter Function HolsterWeapon_BP

// Begin Class AMultiplayerCharacter Function HolsterWeapons
struct Z_Construct_UFunction_AMultiplayerCharacter_HolsterWeapons_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_HolsterWeapons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "HolsterWeapons", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_HolsterWeapons_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_HolsterWeapons_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_HolsterWeapons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_HolsterWeapons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execHolsterWeapons)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HolsterWeapons();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function HolsterWeapons

// Begin Class AMultiplayerCharacter Function HolsterWeapons1
struct Z_Construct_UFunction_AMultiplayerCharacter_HolsterWeapons1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_HolsterWeapons1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "HolsterWeapons1", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_HolsterWeapons1_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_HolsterWeapons1_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_HolsterWeapons1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_HolsterWeapons1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execHolsterWeapons1)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HolsterWeapons1();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function HolsterWeapons1

// Begin Class AMultiplayerCharacter Function Interact
struct Z_Construct_UFunction_AMultiplayerCharacter_Interact_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "Interact", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_Interact_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_Interact_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_Interact()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_Interact_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execInteract)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Interact();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function Interact

// Begin Class AMultiplayerCharacter Function Interact_BP
static const FName NAME_AMultiplayerCharacter_Interact_BP = FName(TEXT("Interact_BP"));
void AMultiplayerCharacter::Interact_BP()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_Interact_BP);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_Interact_BP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "This executes after the C++ function" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_Interact_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "Interact_BP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_Interact_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_Interact_BP_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_Interact_BP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_Interact_BP_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AMultiplayerCharacter Function Interact_BP

// Begin Class AMultiplayerCharacter Function InteractReplicated
struct Z_Construct_UFunction_AMultiplayerCharacter_InteractReplicated_Statics
{
	struct MultiplayerCharacter_eventInteractReplicated_Parms
	{
		AInteractableItem* Interactable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_InteractReplicated_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventInteractReplicated_Parms, Interactable), Z_Construct_UClass_AInteractableItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_InteractReplicated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_InteractReplicated_Statics::NewProp_Interactable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_InteractReplicated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_InteractReplicated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "InteractReplicated", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_InteractReplicated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_InteractReplicated_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_InteractReplicated_Statics::MultiplayerCharacter_eventInteractReplicated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_InteractReplicated_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_InteractReplicated_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_InteractReplicated_Statics::MultiplayerCharacter_eventInteractReplicated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_InteractReplicated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_InteractReplicated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execInteractReplicated)
{
	P_GET_OBJECT(AInteractableItem,Z_Param_Interactable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InteractReplicated(Z_Param_Interactable);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function InteractReplicated

// Begin Class AMultiplayerCharacter Function LastWeapon
struct Z_Construct_UFunction_AMultiplayerCharacter_LastWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_LastWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "LastWeapon", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_LastWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_LastWeapon_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_LastWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_LastWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execLastWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LastWeapon();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function LastWeapon

// Begin Class AMultiplayerCharacter Function MulticastAddWeapon
struct MultiplayerCharacter_eventMulticastAddWeapon_Parms
{
	AMultiplayerGun* Weapon;
};
static const FName NAME_AMultiplayerCharacter_MulticastAddWeapon = FName(TEXT("MulticastAddWeapon"));
void AMultiplayerCharacter::MulticastAddWeapon(AMultiplayerGun* Weapon)
{
	MultiplayerCharacter_eventMulticastAddWeapon_Parms Parms;
	Parms.Weapon=Weapon;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_MulticastAddWeapon);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_MulticastAddWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_MulticastAddWeapon_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventMulticastAddWeapon_Parms, Weapon), Z_Construct_UClass_AMultiplayerGun_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_MulticastAddWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_MulticastAddWeapon_Statics::NewProp_Weapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_MulticastAddWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_MulticastAddWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "MulticastAddWeapon", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_MulticastAddWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_MulticastAddWeapon_Statics::PropPointers), sizeof(MultiplayerCharacter_eventMulticastAddWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_MulticastAddWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_MulticastAddWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerCharacter_eventMulticastAddWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_MulticastAddWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_MulticastAddWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execMulticastAddWeapon)
{
	P_GET_OBJECT(AMultiplayerGun,Z_Param_Weapon);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastAddWeapon_Implementation(Z_Param_Weapon);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function MulticastAddWeapon

// Begin Class AMultiplayerCharacter Function MulticastAim
static const FName NAME_AMultiplayerCharacter_MulticastAim = FName(TEXT("MulticastAim"));
void AMultiplayerCharacter::MulticastAim()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_MulticastAim);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_MulticastAim_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_MulticastAim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "MulticastAim", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_MulticastAim_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_MulticastAim_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_MulticastAim()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_MulticastAim_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execMulticastAim)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastAim_Implementation();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function MulticastAim

// Begin Class AMultiplayerCharacter Function MulticastCancelReload
struct MultiplayerCharacter_eventMulticastCancelReload_Parms
{
	bool PutArmsBackUp;
};
static const FName NAME_AMultiplayerCharacter_MulticastCancelReload = FName(TEXT("MulticastCancelReload"));
void AMultiplayerCharacter::MulticastCancelReload(bool PutArmsBackUp)
{
	MultiplayerCharacter_eventMulticastCancelReload_Parms Parms;
	Parms.PutArmsBackUp=PutArmsBackUp ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_MulticastCancelReload);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_MulticastCancelReload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "CPP_Default_PutArmsBackUp", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_PutArmsBackUp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PutArmsBackUp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerCharacter_MulticastCancelReload_Statics::NewProp_PutArmsBackUp_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventMulticastCancelReload_Parms*)Obj)->PutArmsBackUp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_MulticastCancelReload_Statics::NewProp_PutArmsBackUp = { "PutArmsBackUp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventMulticastCancelReload_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_MulticastCancelReload_Statics::NewProp_PutArmsBackUp_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_MulticastCancelReload_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_MulticastCancelReload_Statics::NewProp_PutArmsBackUp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_MulticastCancelReload_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_MulticastCancelReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "MulticastCancelReload", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_MulticastCancelReload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_MulticastCancelReload_Statics::PropPointers), sizeof(MultiplayerCharacter_eventMulticastCancelReload_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_MulticastCancelReload_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_MulticastCancelReload_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerCharacter_eventMulticastCancelReload_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_MulticastCancelReload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_MulticastCancelReload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execMulticastCancelReload)
{
	P_GET_UBOOL(Z_Param_PutArmsBackUp);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastCancelReload_Implementation(Z_Param_PutArmsBackUp);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function MulticastCancelReload

// Begin Class AMultiplayerCharacter Function MulticastGiveWeapon
struct MultiplayerCharacter_eventMulticastGiveWeapon_Parms
{
	AMultiplayerGun* WeaponToPickup;
	bool SwitchToNewWeapon;
};
static const FName NAME_AMultiplayerCharacter_MulticastGiveWeapon = FName(TEXT("MulticastGiveWeapon"));
void AMultiplayerCharacter::MulticastGiveWeapon(AMultiplayerGun* WeaponToPickup, bool SwitchToNewWeapon)
{
	MultiplayerCharacter_eventMulticastGiveWeapon_Parms Parms;
	Parms.WeaponToPickup=WeaponToPickup;
	Parms.SwitchToNewWeapon=SwitchToNewWeapon ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_MulticastGiveWeapon);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_MulticastGiveWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponToPickup;
	static void NewProp_SwitchToNewWeapon_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SwitchToNewWeapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_MulticastGiveWeapon_Statics::NewProp_WeaponToPickup = { "WeaponToPickup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventMulticastGiveWeapon_Parms, WeaponToPickup), Z_Construct_UClass_AMultiplayerGun_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMultiplayerCharacter_MulticastGiveWeapon_Statics::NewProp_SwitchToNewWeapon_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventMulticastGiveWeapon_Parms*)Obj)->SwitchToNewWeapon = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_MulticastGiveWeapon_Statics::NewProp_SwitchToNewWeapon = { "SwitchToNewWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventMulticastGiveWeapon_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_MulticastGiveWeapon_Statics::NewProp_SwitchToNewWeapon_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_MulticastGiveWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_MulticastGiveWeapon_Statics::NewProp_WeaponToPickup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_MulticastGiveWeapon_Statics::NewProp_SwitchToNewWeapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_MulticastGiveWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_MulticastGiveWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "MulticastGiveWeapon", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_MulticastGiveWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_MulticastGiveWeapon_Statics::PropPointers), sizeof(MultiplayerCharacter_eventMulticastGiveWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_MulticastGiveWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_MulticastGiveWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerCharacter_eventMulticastGiveWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_MulticastGiveWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_MulticastGiveWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execMulticastGiveWeapon)
{
	P_GET_OBJECT(AMultiplayerGun,Z_Param_WeaponToPickup);
	P_GET_UBOOL(Z_Param_SwitchToNewWeapon);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastGiveWeapon_Implementation(Z_Param_WeaponToPickup,Z_Param_SwitchToNewWeapon);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function MulticastGiveWeapon

// Begin Class AMultiplayerCharacter Function MulticastHolsterWeapons
static const FName NAME_AMultiplayerCharacter_MulticastHolsterWeapons = FName(TEXT("MulticastHolsterWeapons"));
void AMultiplayerCharacter::MulticastHolsterWeapons()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_MulticastHolsterWeapons);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_MulticastHolsterWeapons_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_MulticastHolsterWeapons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "MulticastHolsterWeapons", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_MulticastHolsterWeapons_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_MulticastHolsterWeapons_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_MulticastHolsterWeapons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_MulticastHolsterWeapons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execMulticastHolsterWeapons)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastHolsterWeapons_Implementation();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function MulticastHolsterWeapons

// Begin Class AMultiplayerCharacter Function MulticastHolsterWeapons1
static const FName NAME_AMultiplayerCharacter_MulticastHolsterWeapons1 = FName(TEXT("MulticastHolsterWeapons1"));
void AMultiplayerCharacter::MulticastHolsterWeapons1()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_MulticastHolsterWeapons1);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_MulticastHolsterWeapons1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_MulticastHolsterWeapons1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "MulticastHolsterWeapons1", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_MulticastHolsterWeapons1_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_MulticastHolsterWeapons1_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_MulticastHolsterWeapons1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_MulticastHolsterWeapons1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execMulticastHolsterWeapons1)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastHolsterWeapons1_Implementation();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function MulticastHolsterWeapons1

// Begin Class AMultiplayerCharacter Function MulticastInteract
struct MultiplayerCharacter_eventMulticastInteract_Parms
{
	AInteractableItem* Interactable;
};
static const FName NAME_AMultiplayerCharacter_MulticastInteract = FName(TEXT("MulticastInteract"));
void AMultiplayerCharacter::MulticastInteract(AInteractableItem* Interactable)
{
	MultiplayerCharacter_eventMulticastInteract_Parms Parms;
	Parms.Interactable=Interactable;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_MulticastInteract);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_MulticastInteract_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_MulticastInteract_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventMulticastInteract_Parms, Interactable), Z_Construct_UClass_AInteractableItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_MulticastInteract_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_MulticastInteract_Statics::NewProp_Interactable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_MulticastInteract_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_MulticastInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "MulticastInteract", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_MulticastInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_MulticastInteract_Statics::PropPointers), sizeof(MultiplayerCharacter_eventMulticastInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_MulticastInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_MulticastInteract_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerCharacter_eventMulticastInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_MulticastInteract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_MulticastInteract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execMulticastInteract)
{
	P_GET_OBJECT(AInteractableItem,Z_Param_Interactable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastInteract_Implementation(Z_Param_Interactable);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function MulticastInteract

// Begin Class AMultiplayerCharacter Function MulticastLastWeapon
static const FName NAME_AMultiplayerCharacter_MulticastLastWeapon = FName(TEXT("MulticastLastWeapon"));
void AMultiplayerCharacter::MulticastLastWeapon()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_MulticastLastWeapon);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_MulticastLastWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_MulticastLastWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "MulticastLastWeapon", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_MulticastLastWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_MulticastLastWeapon_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_MulticastLastWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_MulticastLastWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execMulticastLastWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastLastWeapon_Implementation();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function MulticastLastWeapon

// Begin Class AMultiplayerCharacter Function MulticastNextWeapon
static const FName NAME_AMultiplayerCharacter_MulticastNextWeapon = FName(TEXT("MulticastNextWeapon"));
void AMultiplayerCharacter::MulticastNextWeapon()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_MulticastNextWeapon);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_MulticastNextWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_MulticastNextWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "MulticastNextWeapon", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_MulticastNextWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_MulticastNextWeapon_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_MulticastNextWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_MulticastNextWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execMulticastNextWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastNextWeapon_Implementation();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function MulticastNextWeapon

// Begin Class AMultiplayerCharacter Function MulticastPickupItem
struct MultiplayerCharacter_eventMulticastPickupItem_Parms
{
	AInteractableItem* ItemToPickup;
};
static const FName NAME_AMultiplayerCharacter_MulticastPickupItem = FName(TEXT("MulticastPickupItem"));
void AMultiplayerCharacter::MulticastPickupItem(AInteractableItem* ItemToPickup)
{
	MultiplayerCharacter_eventMulticastPickupItem_Parms Parms;
	Parms.ItemToPickup=ItemToPickup;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_MulticastPickupItem);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_MulticastPickupItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemToPickup;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_MulticastPickupItem_Statics::NewProp_ItemToPickup = { "ItemToPickup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventMulticastPickupItem_Parms, ItemToPickup), Z_Construct_UClass_AInteractableItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_MulticastPickupItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_MulticastPickupItem_Statics::NewProp_ItemToPickup,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_MulticastPickupItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_MulticastPickupItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "MulticastPickupItem", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_MulticastPickupItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_MulticastPickupItem_Statics::PropPointers), sizeof(MultiplayerCharacter_eventMulticastPickupItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_MulticastPickupItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_MulticastPickupItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerCharacter_eventMulticastPickupItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_MulticastPickupItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_MulticastPickupItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execMulticastPickupItem)
{
	P_GET_OBJECT(AInteractableItem,Z_Param_ItemToPickup);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastPickupItem_Implementation(Z_Param_ItemToPickup);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function MulticastPickupItem

// Begin Class AMultiplayerCharacter Function MulticastReload
static const FName NAME_AMultiplayerCharacter_MulticastReload = FName(TEXT("MulticastReload"));
void AMultiplayerCharacter::MulticastReload()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_MulticastReload);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_MulticastReload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_MulticastReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "MulticastReload", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_MulticastReload_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_MulticastReload_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_MulticastReload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_MulticastReload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execMulticastReload)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastReload_Implementation();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function MulticastReload

// Begin Class AMultiplayerCharacter Function MulticastReload1
static const FName NAME_AMultiplayerCharacter_MulticastReload1 = FName(TEXT("MulticastReload1"));
void AMultiplayerCharacter::MulticastReload1()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_MulticastReload1);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_MulticastReload1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_MulticastReload1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "MulticastReload1", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_MulticastReload1_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_MulticastReload1_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_MulticastReload1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_MulticastReload1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execMulticastReload1)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastReload1_Implementation();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function MulticastReload1

// Begin Class AMultiplayerCharacter Function MulticastReload2
static const FName NAME_AMultiplayerCharacter_MulticastReload2 = FName(TEXT("MulticastReload2"));
void AMultiplayerCharacter::MulticastReload2()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_MulticastReload2);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_MulticastReload2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_MulticastReload2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "MulticastReload2", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_MulticastReload2_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_MulticastReload2_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_MulticastReload2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_MulticastReload2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execMulticastReload2)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastReload2_Implementation();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function MulticastReload2

// Begin Class AMultiplayerCharacter Function MulticastRemoveWeapon
struct MultiplayerCharacter_eventMulticastRemoveWeapon_Parms
{
	bool RemoveAllWeapons;
	bool DestroyWeapon;
	AMultiplayerGun* Weapon;
	int32 WeaponIndex;
};
static const FName NAME_AMultiplayerCharacter_MulticastRemoveWeapon = FName(TEXT("MulticastRemoveWeapon"));
void AMultiplayerCharacter::MulticastRemoveWeapon(bool RemoveAllWeapons, bool DestroyWeapon, AMultiplayerGun* Weapon, int32 WeaponIndex)
{
	MultiplayerCharacter_eventMulticastRemoveWeapon_Parms Parms;
	Parms.RemoveAllWeapons=RemoveAllWeapons ? true : false;
	Parms.DestroyWeapon=DestroyWeapon ? true : false;
	Parms.Weapon=Weapon;
	Parms.WeaponIndex=WeaponIndex;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_MulticastRemoveWeapon);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_MulticastRemoveWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_RemoveAllWeapons_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RemoveAllWeapons;
	static void NewProp_DestroyWeapon_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DestroyWeapon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapon;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WeaponIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerCharacter_MulticastRemoveWeapon_Statics::NewProp_RemoveAllWeapons_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventMulticastRemoveWeapon_Parms*)Obj)->RemoveAllWeapons = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_MulticastRemoveWeapon_Statics::NewProp_RemoveAllWeapons = { "RemoveAllWeapons", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventMulticastRemoveWeapon_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_MulticastRemoveWeapon_Statics::NewProp_RemoveAllWeapons_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMultiplayerCharacter_MulticastRemoveWeapon_Statics::NewProp_DestroyWeapon_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventMulticastRemoveWeapon_Parms*)Obj)->DestroyWeapon = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_MulticastRemoveWeapon_Statics::NewProp_DestroyWeapon = { "DestroyWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventMulticastRemoveWeapon_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_MulticastRemoveWeapon_Statics::NewProp_DestroyWeapon_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_MulticastRemoveWeapon_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventMulticastRemoveWeapon_Parms, Weapon), Z_Construct_UClass_AMultiplayerGun_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_MulticastRemoveWeapon_Statics::NewProp_WeaponIndex = { "WeaponIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventMulticastRemoveWeapon_Parms, WeaponIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_MulticastRemoveWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_MulticastRemoveWeapon_Statics::NewProp_RemoveAllWeapons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_MulticastRemoveWeapon_Statics::NewProp_DestroyWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_MulticastRemoveWeapon_Statics::NewProp_Weapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_MulticastRemoveWeapon_Statics::NewProp_WeaponIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_MulticastRemoveWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_MulticastRemoveWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "MulticastRemoveWeapon", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_MulticastRemoveWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_MulticastRemoveWeapon_Statics::PropPointers), sizeof(MultiplayerCharacter_eventMulticastRemoveWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_MulticastRemoveWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_MulticastRemoveWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerCharacter_eventMulticastRemoveWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_MulticastRemoveWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_MulticastRemoveWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execMulticastRemoveWeapon)
{
	P_GET_UBOOL(Z_Param_RemoveAllWeapons);
	P_GET_UBOOL(Z_Param_DestroyWeapon);
	P_GET_OBJECT(AMultiplayerGun,Z_Param_Weapon);
	P_GET_PROPERTY(FIntProperty,Z_Param_WeaponIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastRemoveWeapon_Implementation(Z_Param_RemoveAllWeapons,Z_Param_DestroyWeapon,Z_Param_Weapon,Z_Param_WeaponIndex);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function MulticastRemoveWeapon

// Begin Class AMultiplayerCharacter Function MulticastReplicateCameraTransform
struct MultiplayerCharacter_eventMulticastReplicateCameraTransform_Parms
{
	FVector CameraLocation;
	FRotator CameraRotation;
};
static const FName NAME_AMultiplayerCharacter_MulticastReplicateCameraTransform = FName(TEXT("MulticastReplicateCameraTransform"));
void AMultiplayerCharacter::MulticastReplicateCameraTransform(FVector CameraLocation, FRotator CameraRotation)
{
	MultiplayerCharacter_eventMulticastReplicateCameraTransform_Parms Parms;
	Parms.CameraLocation=CameraLocation;
	Parms.CameraRotation=CameraRotation;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_MulticastReplicateCameraTransform);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_MulticastReplicateCameraTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_MulticastReplicateCameraTransform_Statics::NewProp_CameraLocation = { "CameraLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventMulticastReplicateCameraTransform_Parms, CameraLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_MulticastReplicateCameraTransform_Statics::NewProp_CameraRotation = { "CameraRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventMulticastReplicateCameraTransform_Parms, CameraRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_MulticastReplicateCameraTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_MulticastReplicateCameraTransform_Statics::NewProp_CameraLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_MulticastReplicateCameraTransform_Statics::NewProp_CameraRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_MulticastReplicateCameraTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_MulticastReplicateCameraTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "MulticastReplicateCameraTransform", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_MulticastReplicateCameraTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_MulticastReplicateCameraTransform_Statics::PropPointers), sizeof(MultiplayerCharacter_eventMulticastReplicateCameraTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04824CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_MulticastReplicateCameraTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_MulticastReplicateCameraTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerCharacter_eventMulticastReplicateCameraTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_MulticastReplicateCameraTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_MulticastReplicateCameraTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execMulticastReplicateCameraTransform)
{
	P_GET_STRUCT(FVector,Z_Param_CameraLocation);
	P_GET_STRUCT(FRotator,Z_Param_CameraRotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastReplicateCameraTransform_Implementation(Z_Param_CameraLocation,Z_Param_CameraRotation);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function MulticastReplicateCameraTransform

// Begin Class AMultiplayerCharacter Function MulticastReplicateControlRotation
struct MultiplayerCharacter_eventMulticastReplicateControlRotation_Parms
{
	FRotator ControlRotation;
};
static const FName NAME_AMultiplayerCharacter_MulticastReplicateControlRotation = FName(TEXT("MulticastReplicateControlRotation"));
void AMultiplayerCharacter::MulticastReplicateControlRotation(FRotator ControlRotation)
{
	MultiplayerCharacter_eventMulticastReplicateControlRotation_Parms Parms;
	Parms.ControlRotation=ControlRotation;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_MulticastReplicateControlRotation);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_MulticastReplicateControlRotation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ControlRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_MulticastReplicateControlRotation_Statics::NewProp_ControlRotation = { "ControlRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventMulticastReplicateControlRotation_Parms, ControlRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_MulticastReplicateControlRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_MulticastReplicateControlRotation_Statics::NewProp_ControlRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_MulticastReplicateControlRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_MulticastReplicateControlRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "MulticastReplicateControlRotation", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_MulticastReplicateControlRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_MulticastReplicateControlRotation_Statics::PropPointers), sizeof(MultiplayerCharacter_eventMulticastReplicateControlRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04824CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_MulticastReplicateControlRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_MulticastReplicateControlRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerCharacter_eventMulticastReplicateControlRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_MulticastReplicateControlRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_MulticastReplicateControlRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execMulticastReplicateControlRotation)
{
	P_GET_STRUCT(FRotator,Z_Param_ControlRotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastReplicateControlRotation_Implementation(Z_Param_ControlRotation);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function MulticastReplicateControlRotation

// Begin Class AMultiplayerCharacter Function MulticastSetCanInteract
struct MultiplayerCharacter_eventMulticastSetCanInteract_Parms
{
	bool NewCanInteract;
};
static const FName NAME_AMultiplayerCharacter_MulticastSetCanInteract = FName(TEXT("MulticastSetCanInteract"));
void AMultiplayerCharacter::MulticastSetCanInteract(bool NewCanInteract)
{
	MultiplayerCharacter_eventMulticastSetCanInteract_Parms Parms;
	Parms.NewCanInteract=NewCanInteract ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_MulticastSetCanInteract);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetCanInteract_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewCanInteract_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewCanInteract;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetCanInteract_Statics::NewProp_NewCanInteract_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventMulticastSetCanInteract_Parms*)Obj)->NewCanInteract = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetCanInteract_Statics::NewProp_NewCanInteract = { "NewCanInteract", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventMulticastSetCanInteract_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetCanInteract_Statics::NewProp_NewCanInteract_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetCanInteract_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetCanInteract_Statics::NewProp_NewCanInteract,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetCanInteract_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetCanInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "MulticastSetCanInteract", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetCanInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetCanInteract_Statics::PropPointers), sizeof(MultiplayerCharacter_eventMulticastSetCanInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetCanInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetCanInteract_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerCharacter_eventMulticastSetCanInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetCanInteract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetCanInteract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execMulticastSetCanInteract)
{
	P_GET_UBOOL(Z_Param_NewCanInteract);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastSetCanInteract_Implementation(Z_Param_NewCanInteract);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function MulticastSetCanInteract

// Begin Class AMultiplayerCharacter Function MulticastSetCanShoot
struct MultiplayerCharacter_eventMulticastSetCanShoot_Parms
{
	bool NewCanShoot;
};
static const FName NAME_AMultiplayerCharacter_MulticastSetCanShoot = FName(TEXT("MulticastSetCanShoot"));
void AMultiplayerCharacter::MulticastSetCanShoot(bool NewCanShoot)
{
	MultiplayerCharacter_eventMulticastSetCanShoot_Parms Parms;
	Parms.NewCanShoot=NewCanShoot ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_MulticastSetCanShoot);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetCanShoot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewCanShoot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewCanShoot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetCanShoot_Statics::NewProp_NewCanShoot_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventMulticastSetCanShoot_Parms*)Obj)->NewCanShoot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetCanShoot_Statics::NewProp_NewCanShoot = { "NewCanShoot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventMulticastSetCanShoot_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetCanShoot_Statics::NewProp_NewCanShoot_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetCanShoot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetCanShoot_Statics::NewProp_NewCanShoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetCanShoot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetCanShoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "MulticastSetCanShoot", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetCanShoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetCanShoot_Statics::PropPointers), sizeof(MultiplayerCharacter_eventMulticastSetCanShoot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetCanShoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetCanShoot_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerCharacter_eventMulticastSetCanShoot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetCanShoot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetCanShoot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execMulticastSetCanShoot)
{
	P_GET_UBOOL(Z_Param_NewCanShoot);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastSetCanShoot_Implementation(Z_Param_NewCanShoot);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function MulticastSetCanShoot

// Begin Class AMultiplayerCharacter Function MulticastSetThirdPersonShoulder
struct MultiplayerCharacter_eventMulticastSetThirdPersonShoulder_Parms
{
	bool LeftShoulder;
};
static const FName NAME_AMultiplayerCharacter_MulticastSetThirdPersonShoulder = FName(TEXT("MulticastSetThirdPersonShoulder"));
void AMultiplayerCharacter::MulticastSetThirdPersonShoulder(bool LeftShoulder)
{
	MultiplayerCharacter_eventMulticastSetThirdPersonShoulder_Parms Parms;
	Parms.LeftShoulder=LeftShoulder ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_MulticastSetThirdPersonShoulder);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetThirdPersonShoulder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_LeftShoulder_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LeftShoulder;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetThirdPersonShoulder_Statics::NewProp_LeftShoulder_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventMulticastSetThirdPersonShoulder_Parms*)Obj)->LeftShoulder = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetThirdPersonShoulder_Statics::NewProp_LeftShoulder = { "LeftShoulder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventMulticastSetThirdPersonShoulder_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetThirdPersonShoulder_Statics::NewProp_LeftShoulder_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetThirdPersonShoulder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetThirdPersonShoulder_Statics::NewProp_LeftShoulder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetThirdPersonShoulder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetThirdPersonShoulder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "MulticastSetThirdPersonShoulder", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetThirdPersonShoulder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetThirdPersonShoulder_Statics::PropPointers), sizeof(MultiplayerCharacter_eventMulticastSetThirdPersonShoulder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetThirdPersonShoulder_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetThirdPersonShoulder_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerCharacter_eventMulticastSetThirdPersonShoulder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetThirdPersonShoulder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetThirdPersonShoulder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execMulticastSetThirdPersonShoulder)
{
	P_GET_UBOOL(Z_Param_LeftShoulder);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastSetThirdPersonShoulder_Implementation(Z_Param_LeftShoulder);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function MulticastSetThirdPersonShoulder

// Begin Class AMultiplayerCharacter Function MulticastSetUsingThirdPerson
struct MultiplayerCharacter_eventMulticastSetUsingThirdPerson_Parms
{
	bool NewUsingThirdPerson;
};
static const FName NAME_AMultiplayerCharacter_MulticastSetUsingThirdPerson = FName(TEXT("MulticastSetUsingThirdPerson"));
void AMultiplayerCharacter::MulticastSetUsingThirdPerson(bool NewUsingThirdPerson)
{
	MultiplayerCharacter_eventMulticastSetUsingThirdPerson_Parms Parms;
	Parms.NewUsingThirdPerson=NewUsingThirdPerson ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_MulticastSetUsingThirdPerson);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetUsingThirdPerson_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewUsingThirdPerson_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewUsingThirdPerson;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetUsingThirdPerson_Statics::NewProp_NewUsingThirdPerson_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventMulticastSetUsingThirdPerson_Parms*)Obj)->NewUsingThirdPerson = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetUsingThirdPerson_Statics::NewProp_NewUsingThirdPerson = { "NewUsingThirdPerson", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventMulticastSetUsingThirdPerson_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetUsingThirdPerson_Statics::NewProp_NewUsingThirdPerson_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetUsingThirdPerson_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetUsingThirdPerson_Statics::NewProp_NewUsingThirdPerson,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetUsingThirdPerson_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetUsingThirdPerson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "MulticastSetUsingThirdPerson", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetUsingThirdPerson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetUsingThirdPerson_Statics::PropPointers), sizeof(MultiplayerCharacter_eventMulticastSetUsingThirdPerson_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetUsingThirdPerson_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetUsingThirdPerson_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerCharacter_eventMulticastSetUsingThirdPerson_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetUsingThirdPerson()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetUsingThirdPerson_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execMulticastSetUsingThirdPerson)
{
	P_GET_UBOOL(Z_Param_NewUsingThirdPerson);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastSetUsingThirdPerson_Implementation(Z_Param_NewUsingThirdPerson);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function MulticastSetUsingThirdPerson

// Begin Class AMultiplayerCharacter Function MulticastStopAiming
static const FName NAME_AMultiplayerCharacter_MulticastStopAiming = FName(TEXT("MulticastStopAiming"));
void AMultiplayerCharacter::MulticastStopAiming()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_MulticastStopAiming);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_MulticastStopAiming_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_MulticastStopAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "MulticastStopAiming", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_MulticastStopAiming_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_MulticastStopAiming_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_MulticastStopAiming()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_MulticastStopAiming_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execMulticastStopAiming)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastStopAiming_Implementation();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function MulticastStopAiming

// Begin Class AMultiplayerCharacter Function MulticastSwitchWeapons
struct MultiplayerCharacter_eventMulticastSwitchWeapons_Parms
{
	int32 Index;
	AMultiplayerGun* WeaponToSwitchTo;
};
static const FName NAME_AMultiplayerCharacter_MulticastSwitchWeapons = FName(TEXT("MulticastSwitchWeapons"));
void AMultiplayerCharacter::MulticastSwitchWeapons(int32 Index, AMultiplayerGun* WeaponToSwitchTo)
{
	MultiplayerCharacter_eventMulticastSwitchWeapons_Parms Parms;
	Parms.Index=Index;
	Parms.WeaponToSwitchTo=WeaponToSwitchTo;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_MulticastSwitchWeapons);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_MulticastSwitchWeapons_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponToSwitchTo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_MulticastSwitchWeapons_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventMulticastSwitchWeapons_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_MulticastSwitchWeapons_Statics::NewProp_WeaponToSwitchTo = { "WeaponToSwitchTo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventMulticastSwitchWeapons_Parms, WeaponToSwitchTo), Z_Construct_UClass_AMultiplayerGun_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_MulticastSwitchWeapons_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_MulticastSwitchWeapons_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_MulticastSwitchWeapons_Statics::NewProp_WeaponToSwitchTo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_MulticastSwitchWeapons_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_MulticastSwitchWeapons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "MulticastSwitchWeapons", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_MulticastSwitchWeapons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_MulticastSwitchWeapons_Statics::PropPointers), sizeof(MultiplayerCharacter_eventMulticastSwitchWeapons_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_MulticastSwitchWeapons_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_MulticastSwitchWeapons_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerCharacter_eventMulticastSwitchWeapons_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_MulticastSwitchWeapons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_MulticastSwitchWeapons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execMulticastSwitchWeapons)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_OBJECT(AMultiplayerGun,Z_Param_WeaponToSwitchTo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastSwitchWeapons_Implementation(Z_Param_Index,Z_Param_WeaponToSwitchTo);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function MulticastSwitchWeapons

// Begin Class AMultiplayerCharacter Function MulticastSwitchWeapons1
static const FName NAME_AMultiplayerCharacter_MulticastSwitchWeapons1 = FName(TEXT("MulticastSwitchWeapons1"));
void AMultiplayerCharacter::MulticastSwitchWeapons1()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_MulticastSwitchWeapons1);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_MulticastSwitchWeapons1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_MulticastSwitchWeapons1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "MulticastSwitchWeapons1", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_MulticastSwitchWeapons1_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_MulticastSwitchWeapons1_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_MulticastSwitchWeapons1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_MulticastSwitchWeapons1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execMulticastSwitchWeapons1)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastSwitchWeapons1_Implementation();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function MulticastSwitchWeapons1

// Begin Class AMultiplayerCharacter Function MulticastUnHolsterWeapons
static const FName NAME_AMultiplayerCharacter_MulticastUnHolsterWeapons = FName(TEXT("MulticastUnHolsterWeapons"));
void AMultiplayerCharacter::MulticastUnHolsterWeapons()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_MulticastUnHolsterWeapons);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_MulticastUnHolsterWeapons_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_MulticastUnHolsterWeapons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "MulticastUnHolsterWeapons", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_MulticastUnHolsterWeapons_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_MulticastUnHolsterWeapons_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_MulticastUnHolsterWeapons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_MulticastUnHolsterWeapons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execMulticastUnHolsterWeapons)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastUnHolsterWeapons_Implementation();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function MulticastUnHolsterWeapons

// Begin Class AMultiplayerCharacter Function MulticastUnHolsterWeapons1
static const FName NAME_AMultiplayerCharacter_MulticastUnHolsterWeapons1 = FName(TEXT("MulticastUnHolsterWeapons1"));
void AMultiplayerCharacter::MulticastUnHolsterWeapons1()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_MulticastUnHolsterWeapons1);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_MulticastUnHolsterWeapons1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_MulticastUnHolsterWeapons1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "MulticastUnHolsterWeapons1", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_MulticastUnHolsterWeapons1_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_MulticastUnHolsterWeapons1_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_MulticastUnHolsterWeapons1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_MulticastUnHolsterWeapons1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execMulticastUnHolsterWeapons1)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastUnHolsterWeapons1_Implementation();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function MulticastUnHolsterWeapons1

// Begin Class AMultiplayerCharacter Function NextWeapon
struct Z_Construct_UFunction_AMultiplayerCharacter_NextWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_NextWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "NextWeapon", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_NextWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_NextWeapon_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_NextWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_NextWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execNextWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NextWeapon();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function NextWeapon

// Begin Class AMultiplayerCharacter Function OnTakeDamage
struct Z_Construct_UFunction_AMultiplayerCharacter_OnTakeDamage_Statics
{
	struct MultiplayerCharacter_eventOnTakeDamage_Parms
	{
		int32 OldHealth;
		int32 NewHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_OldHealth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_OnTakeDamage_Statics::NewProp_OldHealth = { "OldHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventOnTakeDamage_Parms, OldHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_OnTakeDamage_Statics::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventOnTakeDamage_Parms, NewHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_OnTakeDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_OnTakeDamage_Statics::NewProp_OldHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_OnTakeDamage_Statics::NewProp_NewHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_OnTakeDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_OnTakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "OnTakeDamage", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_OnTakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_OnTakeDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_OnTakeDamage_Statics::MultiplayerCharacter_eventOnTakeDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_OnTakeDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_OnTakeDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_OnTakeDamage_Statics::MultiplayerCharacter_eventOnTakeDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_OnTakeDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_OnTakeDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execOnTakeDamage)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_OldHealth);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTakeDamage(Z_Param_OldHealth,Z_Param_NewHealth);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function OnTakeDamage

// Begin Class AMultiplayerCharacter Function OnTakeDamage_BP
struct MultiplayerCharacter_eventOnTakeDamage_BP_Parms
{
	int32 OldHealth;
	int32 NewHealth;
};
static const FName NAME_AMultiplayerCharacter_OnTakeDamage_BP = FName(TEXT("OnTakeDamage_BP"));
void AMultiplayerCharacter::OnTakeDamage_BP(int32 OldHealth, int32 NewHealth)
{
	MultiplayerCharacter_eventOnTakeDamage_BP_Parms Parms;
	Parms.OldHealth=OldHealth;
	Parms.NewHealth=NewHealth;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_OnTakeDamage_BP);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_OnTakeDamage_BP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_OldHealth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_OnTakeDamage_BP_Statics::NewProp_OldHealth = { "OldHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventOnTakeDamage_BP_Parms, OldHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_OnTakeDamage_BP_Statics::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventOnTakeDamage_BP_Parms, NewHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_OnTakeDamage_BP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_OnTakeDamage_BP_Statics::NewProp_OldHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_OnTakeDamage_BP_Statics::NewProp_NewHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_OnTakeDamage_BP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_OnTakeDamage_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "OnTakeDamage_BP", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_OnTakeDamage_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_OnTakeDamage_BP_Statics::PropPointers), sizeof(MultiplayerCharacter_eventOnTakeDamage_BP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_OnTakeDamage_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_OnTakeDamage_BP_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerCharacter_eventOnTakeDamage_BP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_OnTakeDamage_BP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_OnTakeDamage_BP_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AMultiplayerCharacter Function OnTakeDamage_BP

// Begin Class AMultiplayerCharacter Function PickupItem
struct Z_Construct_UFunction_AMultiplayerCharacter_PickupItem_Statics
{
	struct MultiplayerCharacter_eventPickupItem_Parms
	{
		AInteractableItem* ItemToPickup;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemToPickup;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_PickupItem_Statics::NewProp_ItemToPickup = { "ItemToPickup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventPickupItem_Parms, ItemToPickup), Z_Construct_UClass_AInteractableItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_PickupItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_PickupItem_Statics::NewProp_ItemToPickup,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_PickupItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_PickupItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "PickupItem", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_PickupItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_PickupItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_PickupItem_Statics::MultiplayerCharacter_eventPickupItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_PickupItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_PickupItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_PickupItem_Statics::MultiplayerCharacter_eventPickupItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_PickupItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_PickupItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execPickupItem)
{
	P_GET_OBJECT(AInteractableItem,Z_Param_ItemToPickup);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PickupItem(Z_Param_ItemToPickup);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function PickupItem

// Begin Class AMultiplayerCharacter Function PlayArmsAnimation
struct Z_Construct_UFunction_AMultiplayerCharacter_PlayArmsAnimation_Statics
{
	struct MultiplayerCharacter_eventPlayArmsAnimation_Parms
	{
		UAnimationAsset* Animation;
		bool Looping;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "CPP_Default_Looping", "false" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "Set delay to 0 to not use it" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Animation;
	static void NewProp_Looping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Looping;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_PlayArmsAnimation_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventPlayArmsAnimation_Parms, Animation), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMultiplayerCharacter_PlayArmsAnimation_Statics::NewProp_Looping_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventPlayArmsAnimation_Parms*)Obj)->Looping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_PlayArmsAnimation_Statics::NewProp_Looping = { "Looping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventPlayArmsAnimation_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_PlayArmsAnimation_Statics::NewProp_Looping_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_PlayArmsAnimation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_PlayArmsAnimation_Statics::NewProp_Animation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_PlayArmsAnimation_Statics::NewProp_Looping,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_PlayArmsAnimation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_PlayArmsAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "PlayArmsAnimation", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_PlayArmsAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_PlayArmsAnimation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_PlayArmsAnimation_Statics::MultiplayerCharacter_eventPlayArmsAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_PlayArmsAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_PlayArmsAnimation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_PlayArmsAnimation_Statics::MultiplayerCharacter_eventPlayArmsAnimation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_PlayArmsAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_PlayArmsAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execPlayArmsAnimation)
{
	P_GET_OBJECT(UAnimationAsset,Z_Param_Animation);
	P_GET_UBOOL(Z_Param_Looping);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayArmsAnimation(Z_Param_Animation,Z_Param_Looping);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function PlayArmsAnimation

// Begin Class AMultiplayerCharacter Function PlaySprintAnimation
struct Z_Construct_UFunction_AMultiplayerCharacter_PlaySprintAnimation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_PlaySprintAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "PlaySprintAnimation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_PlaySprintAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_PlaySprintAnimation_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_PlaySprintAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_PlaySprintAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execPlaySprintAnimation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlaySprintAnimation();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function PlaySprintAnimation

// Begin Class AMultiplayerCharacter Function PressFireInput
struct Z_Construct_UFunction_AMultiplayerCharacter_PressFireInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_PressFireInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "PressFireInput", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_PressFireInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_PressFireInput_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_PressFireInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_PressFireInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execPressFireInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PressFireInput();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function PressFireInput

// Begin Class AMultiplayerCharacter Function PrintStringForOwningControllerInvalid
struct Z_Construct_UFunction_AMultiplayerCharacter_PrintStringForOwningControllerInvalid_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_PrintStringForOwningControllerInvalid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "PrintStringForOwningControllerInvalid", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_PrintStringForOwningControllerInvalid_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_PrintStringForOwningControllerInvalid_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_PrintStringForOwningControllerInvalid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_PrintStringForOwningControllerInvalid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execPrintStringForOwningControllerInvalid)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PrintStringForOwningControllerInvalid();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function PrintStringForOwningControllerInvalid

// Begin Class AMultiplayerCharacter Function ReleaseAimInput
struct Z_Construct_UFunction_AMultiplayerCharacter_ReleaseAimInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_ReleaseAimInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "ReleaseAimInput", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ReleaseAimInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_ReleaseAimInput_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_ReleaseAimInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_ReleaseAimInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execReleaseAimInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReleaseAimInput();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function ReleaseAimInput

// Begin Class AMultiplayerCharacter Function ReleaseFireInput
struct Z_Construct_UFunction_AMultiplayerCharacter_ReleaseFireInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_ReleaseFireInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "ReleaseFireInput", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ReleaseFireInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_ReleaseFireInput_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_ReleaseFireInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_ReleaseFireInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execReleaseFireInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReleaseFireInput();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function ReleaseFireInput

// Begin Class AMultiplayerCharacter Function ReleaseSprintInput
struct Z_Construct_UFunction_AMultiplayerCharacter_ReleaseSprintInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_ReleaseSprintInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "ReleaseSprintInput", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ReleaseSprintInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_ReleaseSprintInput_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_ReleaseSprintInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_ReleaseSprintInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execReleaseSprintInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReleaseSprintInput();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function ReleaseSprintInput

// Begin Class AMultiplayerCharacter Function Reload
struct Z_Construct_UFunction_AMultiplayerCharacter_Reload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_Reload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "Reload", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_Reload_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_Reload_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_Reload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_Reload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execReload)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Reload();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function Reload

// Begin Class AMultiplayerCharacter Function Reload1
struct Z_Construct_UFunction_AMultiplayerCharacter_Reload1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_Reload1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "Reload1", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_Reload1_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_Reload1_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_Reload1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_Reload1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execReload1)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Reload1();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function Reload1

// Begin Class AMultiplayerCharacter Function Reload2
struct Z_Construct_UFunction_AMultiplayerCharacter_Reload2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_Reload2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "Reload2", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_Reload2_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_Reload2_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_Reload2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_Reload2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execReload2)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Reload2();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function Reload2

// Begin Class AMultiplayerCharacter Function Reload_BP
static const FName NAME_AMultiplayerCharacter_Reload_BP = FName(TEXT("Reload_BP"));
void AMultiplayerCharacter::Reload_BP()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_Reload_BP);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_Reload_BP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_Reload_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "Reload_BP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_Reload_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_Reload_BP_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_Reload_BP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_Reload_BP_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AMultiplayerCharacter Function Reload_BP

// Begin Class AMultiplayerCharacter Function RemoveInput
static const FName NAME_AMultiplayerCharacter_RemoveInput = FName(TEXT("RemoveInput"));
void AMultiplayerCharacter::RemoveInput()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_RemoveInput);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_RemoveInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_RemoveInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "RemoveInput", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_RemoveInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_RemoveInput_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_RemoveInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_RemoveInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execRemoveInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveInput_Implementation();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function RemoveInput

// Begin Class AMultiplayerCharacter Function RemoveWeapon
struct Z_Construct_UFunction_AMultiplayerCharacter_RemoveWeapon_Statics
{
	struct MultiplayerCharacter_eventRemoveWeapon_Parms
	{
		bool RemoveAllWeapons;
		bool DestroyWeapon;
		AMultiplayerGun* Weapon;
		int32 WeaponIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "CPP_Default_DestroyWeapon", "false" },
		{ "CPP_Default_Weapon", "None" },
		{ "CPP_Default_WeaponIndex", "-1" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_RemoveAllWeapons_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RemoveAllWeapons;
	static void NewProp_DestroyWeapon_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DestroyWeapon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapon;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WeaponIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerCharacter_RemoveWeapon_Statics::NewProp_RemoveAllWeapons_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventRemoveWeapon_Parms*)Obj)->RemoveAllWeapons = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_RemoveWeapon_Statics::NewProp_RemoveAllWeapons = { "RemoveAllWeapons", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventRemoveWeapon_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_RemoveWeapon_Statics::NewProp_RemoveAllWeapons_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMultiplayerCharacter_RemoveWeapon_Statics::NewProp_DestroyWeapon_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventRemoveWeapon_Parms*)Obj)->DestroyWeapon = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_RemoveWeapon_Statics::NewProp_DestroyWeapon = { "DestroyWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventRemoveWeapon_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_RemoveWeapon_Statics::NewProp_DestroyWeapon_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_RemoveWeapon_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventRemoveWeapon_Parms, Weapon), Z_Construct_UClass_AMultiplayerGun_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_RemoveWeapon_Statics::NewProp_WeaponIndex = { "WeaponIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventRemoveWeapon_Parms, WeaponIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_RemoveWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_RemoveWeapon_Statics::NewProp_RemoveAllWeapons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_RemoveWeapon_Statics::NewProp_DestroyWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_RemoveWeapon_Statics::NewProp_Weapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_RemoveWeapon_Statics::NewProp_WeaponIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_RemoveWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_RemoveWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "RemoveWeapon", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_RemoveWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_RemoveWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_RemoveWeapon_Statics::MultiplayerCharacter_eventRemoveWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_RemoveWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_RemoveWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_RemoveWeapon_Statics::MultiplayerCharacter_eventRemoveWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_RemoveWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_RemoveWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execRemoveWeapon)
{
	P_GET_UBOOL(Z_Param_RemoveAllWeapons);
	P_GET_UBOOL(Z_Param_DestroyWeapon);
	P_GET_OBJECT(AMultiplayerGun,Z_Param_Weapon);
	P_GET_PROPERTY(FIntProperty,Z_Param_WeaponIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveWeapon(Z_Param_RemoveAllWeapons,Z_Param_DestroyWeapon,Z_Param_Weapon,Z_Param_WeaponIndex);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function RemoveWeapon

// Begin Class AMultiplayerCharacter Function RemoveWeaponPastIndex
struct Z_Construct_UFunction_AMultiplayerCharacter_RemoveWeaponPastIndex_Statics
{
	struct MultiplayerCharacter_eventRemoveWeaponPastIndex_Parms
	{
		int32 WeaponIndex;
		bool DestroyWeapon;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ClampMin", "0" },
		{ "CPP_Default_DestroyWeapon", "false" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "This will also remove the weapon at the index you specify" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_WeaponIndex;
	static void NewProp_DestroyWeapon_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DestroyWeapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_RemoveWeaponPastIndex_Statics::NewProp_WeaponIndex = { "WeaponIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventRemoveWeaponPastIndex_Parms, WeaponIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMultiplayerCharacter_RemoveWeaponPastIndex_Statics::NewProp_DestroyWeapon_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventRemoveWeaponPastIndex_Parms*)Obj)->DestroyWeapon = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_RemoveWeaponPastIndex_Statics::NewProp_DestroyWeapon = { "DestroyWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventRemoveWeaponPastIndex_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_RemoveWeaponPastIndex_Statics::NewProp_DestroyWeapon_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_RemoveWeaponPastIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_RemoveWeaponPastIndex_Statics::NewProp_WeaponIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_RemoveWeaponPastIndex_Statics::NewProp_DestroyWeapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_RemoveWeaponPastIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_RemoveWeaponPastIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "RemoveWeaponPastIndex", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_RemoveWeaponPastIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_RemoveWeaponPastIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_RemoveWeaponPastIndex_Statics::MultiplayerCharacter_eventRemoveWeaponPastIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_RemoveWeaponPastIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_RemoveWeaponPastIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_RemoveWeaponPastIndex_Statics::MultiplayerCharacter_eventRemoveWeaponPastIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_RemoveWeaponPastIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_RemoveWeaponPastIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execRemoveWeaponPastIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_WeaponIndex);
	P_GET_UBOOL(Z_Param_DestroyWeapon);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveWeaponPastIndex(Z_Param_WeaponIndex,Z_Param_DestroyWeapon);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function RemoveWeaponPastIndex

// Begin Class AMultiplayerCharacter Function ReplicateCameraTransform
struct Z_Construct_UFunction_AMultiplayerCharacter_ReplicateCameraTransform_Statics
{
	struct MultiplayerCharacter_eventReplicateCameraTransform_Parms
	{
		FVector CameraLocation;
		FRotator CameraRotation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_ReplicateCameraTransform_Statics::NewProp_CameraLocation = { "CameraLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventReplicateCameraTransform_Parms, CameraLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_ReplicateCameraTransform_Statics::NewProp_CameraRotation = { "CameraRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventReplicateCameraTransform_Parms, CameraRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_ReplicateCameraTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_ReplicateCameraTransform_Statics::NewProp_CameraLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_ReplicateCameraTransform_Statics::NewProp_CameraRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ReplicateCameraTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_ReplicateCameraTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "ReplicateCameraTransform", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_ReplicateCameraTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ReplicateCameraTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_ReplicateCameraTransform_Statics::MultiplayerCharacter_eventReplicateCameraTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ReplicateCameraTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_ReplicateCameraTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_ReplicateCameraTransform_Statics::MultiplayerCharacter_eventReplicateCameraTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_ReplicateCameraTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_ReplicateCameraTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execReplicateCameraTransform)
{
	P_GET_STRUCT(FVector,Z_Param_CameraLocation);
	P_GET_STRUCT(FRotator,Z_Param_CameraRotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReplicateCameraTransform(Z_Param_CameraLocation,Z_Param_CameraRotation);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function ReplicateCameraTransform

// Begin Class AMultiplayerCharacter Function ServerAddWeapon
struct MultiplayerCharacter_eventServerAddWeapon_Parms
{
	AMultiplayerGun* Weapon;
};
static const FName NAME_AMultiplayerCharacter_ServerAddWeapon = FName(TEXT("ServerAddWeapon"));
void AMultiplayerCharacter::ServerAddWeapon(AMultiplayerGun* Weapon)
{
	MultiplayerCharacter_eventServerAddWeapon_Parms Parms;
	Parms.Weapon=Weapon;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_ServerAddWeapon);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_ServerAddWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_ServerAddWeapon_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventServerAddWeapon_Parms, Weapon), Z_Construct_UClass_AMultiplayerGun_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_ServerAddWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_ServerAddWeapon_Statics::NewProp_Weapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerAddWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_ServerAddWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "ServerAddWeapon", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_ServerAddWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerAddWeapon_Statics::PropPointers), sizeof(MultiplayerCharacter_eventServerAddWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerAddWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_ServerAddWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerCharacter_eventServerAddWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_ServerAddWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_ServerAddWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execServerAddWeapon)
{
	P_GET_OBJECT(AMultiplayerGun,Z_Param_Weapon);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerAddWeapon_Implementation(Z_Param_Weapon);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function ServerAddWeapon

// Begin Class AMultiplayerCharacter Function ServerAim
static const FName NAME_AMultiplayerCharacter_ServerAim = FName(TEXT("ServerAim"));
void AMultiplayerCharacter::ServerAim()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_ServerAim);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_ServerAim_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_ServerAim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "ServerAim", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerAim_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_ServerAim_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_ServerAim()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_ServerAim_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execServerAim)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerAim_Implementation();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function ServerAim

// Begin Class AMultiplayerCharacter Function ServerCancelReload
struct MultiplayerCharacter_eventServerCancelReload_Parms
{
	bool PutArmsBackUp;
};
static const FName NAME_AMultiplayerCharacter_ServerCancelReload = FName(TEXT("ServerCancelReload"));
void AMultiplayerCharacter::ServerCancelReload(bool PutArmsBackUp)
{
	MultiplayerCharacter_eventServerCancelReload_Parms Parms;
	Parms.PutArmsBackUp=PutArmsBackUp ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_ServerCancelReload);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_ServerCancelReload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "CPP_Default_PutArmsBackUp", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_PutArmsBackUp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PutArmsBackUp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerCharacter_ServerCancelReload_Statics::NewProp_PutArmsBackUp_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventServerCancelReload_Parms*)Obj)->PutArmsBackUp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_ServerCancelReload_Statics::NewProp_PutArmsBackUp = { "PutArmsBackUp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventServerCancelReload_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_ServerCancelReload_Statics::NewProp_PutArmsBackUp_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_ServerCancelReload_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_ServerCancelReload_Statics::NewProp_PutArmsBackUp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerCancelReload_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_ServerCancelReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "ServerCancelReload", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_ServerCancelReload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerCancelReload_Statics::PropPointers), sizeof(MultiplayerCharacter_eventServerCancelReload_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerCancelReload_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_ServerCancelReload_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerCharacter_eventServerCancelReload_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_ServerCancelReload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_ServerCancelReload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execServerCancelReload)
{
	P_GET_UBOOL(Z_Param_PutArmsBackUp);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerCancelReload_Implementation(Z_Param_PutArmsBackUp);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function ServerCancelReload

// Begin Class AMultiplayerCharacter Function ServerDie1
static const FName NAME_AMultiplayerCharacter_ServerDie1 = FName(TEXT("ServerDie1"));
void AMultiplayerCharacter::ServerDie1()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_ServerDie1);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_ServerDie1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_ServerDie1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "ServerDie1", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerDie1_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_ServerDie1_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_ServerDie1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_ServerDie1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execServerDie1)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerDie1_Implementation();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function ServerDie1

// Begin Class AMultiplayerCharacter Function ServerGiveLoadout
struct MultiplayerCharacter_eventServerGiveLoadout_Parms
{
	TArray<TSubclassOf<AMultiplayerGun> > Loadout;
	int32 MaxWeaponAmount;
};
static const FName NAME_AMultiplayerCharacter_ServerGiveLoadout = FName(TEXT("ServerGiveLoadout"));
void AMultiplayerCharacter::ServerGiveLoadout(TArray<TSubclassOf<AMultiplayerGun> > const& Loadout, int32 MaxWeaponAmount)
{
	MultiplayerCharacter_eventServerGiveLoadout_Parms Parms;
	Parms.Loadout=Loadout;
	Parms.MaxWeaponAmount=MaxWeaponAmount;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_ServerGiveLoadout);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_ServerGiveLoadout_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Loadout_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Loadout_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Loadout;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxWeaponAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_ServerGiveLoadout_Statics::NewProp_Loadout_Inner = { "Loadout", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AMultiplayerGun_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_ServerGiveLoadout_Statics::NewProp_Loadout = { "Loadout", nullptr, (EPropertyFlags)0x0014000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventServerGiveLoadout_Parms, Loadout), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Loadout_MetaData), NewProp_Loadout_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_ServerGiveLoadout_Statics::NewProp_MaxWeaponAmount = { "MaxWeaponAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventServerGiveLoadout_Parms, MaxWeaponAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_ServerGiveLoadout_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_ServerGiveLoadout_Statics::NewProp_Loadout_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_ServerGiveLoadout_Statics::NewProp_Loadout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_ServerGiveLoadout_Statics::NewProp_MaxWeaponAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerGiveLoadout_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_ServerGiveLoadout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "ServerGiveLoadout", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_ServerGiveLoadout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerGiveLoadout_Statics::PropPointers), sizeof(MultiplayerCharacter_eventServerGiveLoadout_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerGiveLoadout_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_ServerGiveLoadout_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerCharacter_eventServerGiveLoadout_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_ServerGiveLoadout()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_ServerGiveLoadout_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execServerGiveLoadout)
{
	P_GET_TARRAY(TSubclassOf<AMultiplayerGun>,Z_Param_Loadout);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxWeaponAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerGiveLoadout_Implementation(Z_Param_Loadout,Z_Param_MaxWeaponAmount);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function ServerGiveLoadout

// Begin Class AMultiplayerCharacter Function ServerHolsterWeapons
static const FName NAME_AMultiplayerCharacter_ServerHolsterWeapons = FName(TEXT("ServerHolsterWeapons"));
void AMultiplayerCharacter::ServerHolsterWeapons()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_ServerHolsterWeapons);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_ServerHolsterWeapons_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_ServerHolsterWeapons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "ServerHolsterWeapons", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerHolsterWeapons_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_ServerHolsterWeapons_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_ServerHolsterWeapons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_ServerHolsterWeapons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execServerHolsterWeapons)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerHolsterWeapons_Implementation();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function ServerHolsterWeapons

// Begin Class AMultiplayerCharacter Function ServerHolsterWeapons1
static const FName NAME_AMultiplayerCharacter_ServerHolsterWeapons1 = FName(TEXT("ServerHolsterWeapons1"));
void AMultiplayerCharacter::ServerHolsterWeapons1()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_ServerHolsterWeapons1);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_ServerHolsterWeapons1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_ServerHolsterWeapons1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "ServerHolsterWeapons1", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerHolsterWeapons1_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_ServerHolsterWeapons1_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_ServerHolsterWeapons1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_ServerHolsterWeapons1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execServerHolsterWeapons1)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerHolsterWeapons1_Implementation();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function ServerHolsterWeapons1

// Begin Class AMultiplayerCharacter Function ServerInteract
struct MultiplayerCharacter_eventServerInteract_Parms
{
	AInteractableItem* Interactable;
	bool Multicast;
};
static const FName NAME_AMultiplayerCharacter_ServerInteract = FName(TEXT("ServerInteract"));
void AMultiplayerCharacter::ServerInteract(AInteractableItem* Interactable, bool Multicast)
{
	MultiplayerCharacter_eventServerInteract_Parms Parms;
	Parms.Interactable=Interactable;
	Parms.Multicast=Multicast ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_ServerInteract);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_ServerInteract_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactable;
	static void NewProp_Multicast_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Multicast;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_ServerInteract_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventServerInteract_Parms, Interactable), Z_Construct_UClass_AInteractableItem_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMultiplayerCharacter_ServerInteract_Statics::NewProp_Multicast_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventServerInteract_Parms*)Obj)->Multicast = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_ServerInteract_Statics::NewProp_Multicast = { "Multicast", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventServerInteract_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_ServerInteract_Statics::NewProp_Multicast_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_ServerInteract_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_ServerInteract_Statics::NewProp_Interactable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_ServerInteract_Statics::NewProp_Multicast,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerInteract_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_ServerInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "ServerInteract", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_ServerInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerInteract_Statics::PropPointers), sizeof(MultiplayerCharacter_eventServerInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_ServerInteract_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerCharacter_eventServerInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_ServerInteract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_ServerInteract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execServerInteract)
{
	P_GET_OBJECT(AInteractableItem,Z_Param_Interactable);
	P_GET_UBOOL(Z_Param_Multicast);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerInteract_Implementation(Z_Param_Interactable,Z_Param_Multicast);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function ServerInteract

// Begin Class AMultiplayerCharacter Function ServerLastWeapon
static const FName NAME_AMultiplayerCharacter_ServerLastWeapon = FName(TEXT("ServerLastWeapon"));
void AMultiplayerCharacter::ServerLastWeapon()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_ServerLastWeapon);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_ServerLastWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_ServerLastWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "ServerLastWeapon", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerLastWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_ServerLastWeapon_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_ServerLastWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_ServerLastWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execServerLastWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerLastWeapon_Implementation();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function ServerLastWeapon

// Begin Class AMultiplayerCharacter Function ServerNextWeapon
static const FName NAME_AMultiplayerCharacter_ServerNextWeapon = FName(TEXT("ServerNextWeapon"));
void AMultiplayerCharacter::ServerNextWeapon()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_ServerNextWeapon);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_ServerNextWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_ServerNextWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "ServerNextWeapon", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerNextWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_ServerNextWeapon_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_ServerNextWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_ServerNextWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execServerNextWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerNextWeapon_Implementation();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function ServerNextWeapon

// Begin Class AMultiplayerCharacter Function ServerPickupItem
struct MultiplayerCharacter_eventServerPickupItem_Parms
{
	AInteractableItem* ItemToPickup;
};
static const FName NAME_AMultiplayerCharacter_ServerPickupItem = FName(TEXT("ServerPickupItem"));
void AMultiplayerCharacter::ServerPickupItem(AInteractableItem* ItemToPickup)
{
	MultiplayerCharacter_eventServerPickupItem_Parms Parms;
	Parms.ItemToPickup=ItemToPickup;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_ServerPickupItem);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_ServerPickupItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemToPickup;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_ServerPickupItem_Statics::NewProp_ItemToPickup = { "ItemToPickup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventServerPickupItem_Parms, ItemToPickup), Z_Construct_UClass_AInteractableItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_ServerPickupItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_ServerPickupItem_Statics::NewProp_ItemToPickup,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerPickupItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_ServerPickupItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "ServerPickupItem", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_ServerPickupItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerPickupItem_Statics::PropPointers), sizeof(MultiplayerCharacter_eventServerPickupItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerPickupItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_ServerPickupItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerCharacter_eventServerPickupItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_ServerPickupItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_ServerPickupItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execServerPickupItem)
{
	P_GET_OBJECT(AInteractableItem,Z_Param_ItemToPickup);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerPickupItem_Implementation(Z_Param_ItemToPickup);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function ServerPickupItem

// Begin Class AMultiplayerCharacter Function ServerReload
static const FName NAME_AMultiplayerCharacter_ServerReload = FName(TEXT("ServerReload"));
void AMultiplayerCharacter::ServerReload()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_ServerReload);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_ServerReload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_ServerReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "ServerReload", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerReload_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_ServerReload_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_ServerReload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_ServerReload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execServerReload)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerReload_Implementation();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function ServerReload

// Begin Class AMultiplayerCharacter Function ServerReload1
static const FName NAME_AMultiplayerCharacter_ServerReload1 = FName(TEXT("ServerReload1"));
void AMultiplayerCharacter::ServerReload1()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_ServerReload1);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_ServerReload1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_ServerReload1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "ServerReload1", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerReload1_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_ServerReload1_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_ServerReload1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_ServerReload1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execServerReload1)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerReload1_Implementation();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function ServerReload1

// Begin Class AMultiplayerCharacter Function ServerReload2
static const FName NAME_AMultiplayerCharacter_ServerReload2 = FName(TEXT("ServerReload2"));
void AMultiplayerCharacter::ServerReload2()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_ServerReload2);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_ServerReload2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_ServerReload2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "ServerReload2", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerReload2_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_ServerReload2_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_ServerReload2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_ServerReload2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execServerReload2)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerReload2_Implementation();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function ServerReload2

// Begin Class AMultiplayerCharacter Function ServerRemoveWeapon
struct MultiplayerCharacter_eventServerRemoveWeapon_Parms
{
	bool RemoveAllWeapons;
	bool DestroyWeapon;
	AMultiplayerGun* Weapon;
	int32 WeaponIndex;
};
static const FName NAME_AMultiplayerCharacter_ServerRemoveWeapon = FName(TEXT("ServerRemoveWeapon"));
void AMultiplayerCharacter::ServerRemoveWeapon(bool RemoveAllWeapons, bool DestroyWeapon, AMultiplayerGun* Weapon, int32 WeaponIndex)
{
	MultiplayerCharacter_eventServerRemoveWeapon_Parms Parms;
	Parms.RemoveAllWeapons=RemoveAllWeapons ? true : false;
	Parms.DestroyWeapon=DestroyWeapon ? true : false;
	Parms.Weapon=Weapon;
	Parms.WeaponIndex=WeaponIndex;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_ServerRemoveWeapon);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_ServerRemoveWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_RemoveAllWeapons_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RemoveAllWeapons;
	static void NewProp_DestroyWeapon_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DestroyWeapon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapon;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WeaponIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerCharacter_ServerRemoveWeapon_Statics::NewProp_RemoveAllWeapons_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventServerRemoveWeapon_Parms*)Obj)->RemoveAllWeapons = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_ServerRemoveWeapon_Statics::NewProp_RemoveAllWeapons = { "RemoveAllWeapons", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventServerRemoveWeapon_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_ServerRemoveWeapon_Statics::NewProp_RemoveAllWeapons_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMultiplayerCharacter_ServerRemoveWeapon_Statics::NewProp_DestroyWeapon_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventServerRemoveWeapon_Parms*)Obj)->DestroyWeapon = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_ServerRemoveWeapon_Statics::NewProp_DestroyWeapon = { "DestroyWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventServerRemoveWeapon_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_ServerRemoveWeapon_Statics::NewProp_DestroyWeapon_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_ServerRemoveWeapon_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventServerRemoveWeapon_Parms, Weapon), Z_Construct_UClass_AMultiplayerGun_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_ServerRemoveWeapon_Statics::NewProp_WeaponIndex = { "WeaponIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventServerRemoveWeapon_Parms, WeaponIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_ServerRemoveWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_ServerRemoveWeapon_Statics::NewProp_RemoveAllWeapons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_ServerRemoveWeapon_Statics::NewProp_DestroyWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_ServerRemoveWeapon_Statics::NewProp_Weapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_ServerRemoveWeapon_Statics::NewProp_WeaponIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerRemoveWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_ServerRemoveWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "ServerRemoveWeapon", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_ServerRemoveWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerRemoveWeapon_Statics::PropPointers), sizeof(MultiplayerCharacter_eventServerRemoveWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerRemoveWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_ServerRemoveWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerCharacter_eventServerRemoveWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_ServerRemoveWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_ServerRemoveWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execServerRemoveWeapon)
{
	P_GET_UBOOL(Z_Param_RemoveAllWeapons);
	P_GET_UBOOL(Z_Param_DestroyWeapon);
	P_GET_OBJECT(AMultiplayerGun,Z_Param_Weapon);
	P_GET_PROPERTY(FIntProperty,Z_Param_WeaponIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerRemoveWeapon_Implementation(Z_Param_RemoveAllWeapons,Z_Param_DestroyWeapon,Z_Param_Weapon,Z_Param_WeaponIndex);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function ServerRemoveWeapon

// Begin Class AMultiplayerCharacter Function ServerReplicateCameraTransform
struct MultiplayerCharacter_eventServerReplicateCameraTransform_Parms
{
	FVector CameraLocation;
	FRotator CameraRotation;
};
static const FName NAME_AMultiplayerCharacter_ServerReplicateCameraTransform = FName(TEXT("ServerReplicateCameraTransform"));
void AMultiplayerCharacter::ServerReplicateCameraTransform(FVector CameraLocation, FRotator CameraRotation)
{
	MultiplayerCharacter_eventServerReplicateCameraTransform_Parms Parms;
	Parms.CameraLocation=CameraLocation;
	Parms.CameraRotation=CameraRotation;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_ServerReplicateCameraTransform);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_ServerReplicateCameraTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_ServerReplicateCameraTransform_Statics::NewProp_CameraLocation = { "CameraLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventServerReplicateCameraTransform_Parms, CameraLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_ServerReplicateCameraTransform_Statics::NewProp_CameraRotation = { "CameraRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventServerReplicateCameraTransform_Parms, CameraRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_ServerReplicateCameraTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_ServerReplicateCameraTransform_Statics::NewProp_CameraLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_ServerReplicateCameraTransform_Statics::NewProp_CameraRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerReplicateCameraTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_ServerReplicateCameraTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "ServerReplicateCameraTransform", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_ServerReplicateCameraTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerReplicateCameraTransform_Statics::PropPointers), sizeof(MultiplayerCharacter_eventServerReplicateCameraTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04A20CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerReplicateCameraTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_ServerReplicateCameraTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerCharacter_eventServerReplicateCameraTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_ServerReplicateCameraTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_ServerReplicateCameraTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execServerReplicateCameraTransform)
{
	P_GET_STRUCT(FVector,Z_Param_CameraLocation);
	P_GET_STRUCT(FRotator,Z_Param_CameraRotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerReplicateCameraTransform_Implementation(Z_Param_CameraLocation,Z_Param_CameraRotation);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function ServerReplicateCameraTransform

// Begin Class AMultiplayerCharacter Function ServerReplicateControlRotation
struct MultiplayerCharacter_eventServerReplicateControlRotation_Parms
{
	FRotator ControlRotation;
};
static const FName NAME_AMultiplayerCharacter_ServerReplicateControlRotation = FName(TEXT("ServerReplicateControlRotation"));
void AMultiplayerCharacter::ServerReplicateControlRotation(FRotator ControlRotation)
{
	MultiplayerCharacter_eventServerReplicateControlRotation_Parms Parms;
	Parms.ControlRotation=ControlRotation;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_ServerReplicateControlRotation);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_ServerReplicateControlRotation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ControlRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_ServerReplicateControlRotation_Statics::NewProp_ControlRotation = { "ControlRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventServerReplicateControlRotation_Parms, ControlRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_ServerReplicateControlRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_ServerReplicateControlRotation_Statics::NewProp_ControlRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerReplicateControlRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_ServerReplicateControlRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "ServerReplicateControlRotation", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_ServerReplicateControlRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerReplicateControlRotation_Statics::PropPointers), sizeof(MultiplayerCharacter_eventServerReplicateControlRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04A20CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerReplicateControlRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_ServerReplicateControlRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerCharacter_eventServerReplicateControlRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_ServerReplicateControlRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_ServerReplicateControlRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execServerReplicateControlRotation)
{
	P_GET_STRUCT(FRotator,Z_Param_ControlRotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerReplicateControlRotation_Implementation(Z_Param_ControlRotation);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function ServerReplicateControlRotation

// Begin Class AMultiplayerCharacter Function ServerSetCanInteract
struct MultiplayerCharacter_eventServerSetCanInteract_Parms
{
	bool NewCanInteract;
};
static const FName NAME_AMultiplayerCharacter_ServerSetCanInteract = FName(TEXT("ServerSetCanInteract"));
void AMultiplayerCharacter::ServerSetCanInteract(bool NewCanInteract)
{
	MultiplayerCharacter_eventServerSetCanInteract_Parms Parms;
	Parms.NewCanInteract=NewCanInteract ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_ServerSetCanInteract);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_ServerSetCanInteract_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewCanInteract_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewCanInteract;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerCharacter_ServerSetCanInteract_Statics::NewProp_NewCanInteract_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventServerSetCanInteract_Parms*)Obj)->NewCanInteract = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_ServerSetCanInteract_Statics::NewProp_NewCanInteract = { "NewCanInteract", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventServerSetCanInteract_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_ServerSetCanInteract_Statics::NewProp_NewCanInteract_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_ServerSetCanInteract_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_ServerSetCanInteract_Statics::NewProp_NewCanInteract,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerSetCanInteract_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_ServerSetCanInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "ServerSetCanInteract", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_ServerSetCanInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerSetCanInteract_Statics::PropPointers), sizeof(MultiplayerCharacter_eventServerSetCanInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerSetCanInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_ServerSetCanInteract_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerCharacter_eventServerSetCanInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_ServerSetCanInteract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_ServerSetCanInteract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execServerSetCanInteract)
{
	P_GET_UBOOL(Z_Param_NewCanInteract);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerSetCanInteract_Implementation(Z_Param_NewCanInteract);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function ServerSetCanInteract

// Begin Class AMultiplayerCharacter Function ServerSetCanShoot
struct MultiplayerCharacter_eventServerSetCanShoot_Parms
{
	bool NewCanShoot;
};
static const FName NAME_AMultiplayerCharacter_ServerSetCanShoot = FName(TEXT("ServerSetCanShoot"));
void AMultiplayerCharacter::ServerSetCanShoot(bool NewCanShoot)
{
	MultiplayerCharacter_eventServerSetCanShoot_Parms Parms;
	Parms.NewCanShoot=NewCanShoot ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_ServerSetCanShoot);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_ServerSetCanShoot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewCanShoot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewCanShoot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerCharacter_ServerSetCanShoot_Statics::NewProp_NewCanShoot_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventServerSetCanShoot_Parms*)Obj)->NewCanShoot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_ServerSetCanShoot_Statics::NewProp_NewCanShoot = { "NewCanShoot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventServerSetCanShoot_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_ServerSetCanShoot_Statics::NewProp_NewCanShoot_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_ServerSetCanShoot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_ServerSetCanShoot_Statics::NewProp_NewCanShoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerSetCanShoot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_ServerSetCanShoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "ServerSetCanShoot", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_ServerSetCanShoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerSetCanShoot_Statics::PropPointers), sizeof(MultiplayerCharacter_eventServerSetCanShoot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerSetCanShoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_ServerSetCanShoot_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerCharacter_eventServerSetCanShoot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_ServerSetCanShoot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_ServerSetCanShoot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execServerSetCanShoot)
{
	P_GET_UBOOL(Z_Param_NewCanShoot);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerSetCanShoot_Implementation(Z_Param_NewCanShoot);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function ServerSetCanShoot

// Begin Class AMultiplayerCharacter Function ServerSetThirdPersonShoulder
struct MultiplayerCharacter_eventServerSetThirdPersonShoulder_Parms
{
	bool LeftShoulder;
};
static const FName NAME_AMultiplayerCharacter_ServerSetThirdPersonShoulder = FName(TEXT("ServerSetThirdPersonShoulder"));
void AMultiplayerCharacter::ServerSetThirdPersonShoulder(bool LeftShoulder)
{
	MultiplayerCharacter_eventServerSetThirdPersonShoulder_Parms Parms;
	Parms.LeftShoulder=LeftShoulder ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_ServerSetThirdPersonShoulder);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_ServerSetThirdPersonShoulder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_LeftShoulder_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LeftShoulder;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerCharacter_ServerSetThirdPersonShoulder_Statics::NewProp_LeftShoulder_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventServerSetThirdPersonShoulder_Parms*)Obj)->LeftShoulder = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_ServerSetThirdPersonShoulder_Statics::NewProp_LeftShoulder = { "LeftShoulder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventServerSetThirdPersonShoulder_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_ServerSetThirdPersonShoulder_Statics::NewProp_LeftShoulder_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_ServerSetThirdPersonShoulder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_ServerSetThirdPersonShoulder_Statics::NewProp_LeftShoulder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerSetThirdPersonShoulder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_ServerSetThirdPersonShoulder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "ServerSetThirdPersonShoulder", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_ServerSetThirdPersonShoulder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerSetThirdPersonShoulder_Statics::PropPointers), sizeof(MultiplayerCharacter_eventServerSetThirdPersonShoulder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerSetThirdPersonShoulder_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_ServerSetThirdPersonShoulder_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerCharacter_eventServerSetThirdPersonShoulder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_ServerSetThirdPersonShoulder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_ServerSetThirdPersonShoulder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execServerSetThirdPersonShoulder)
{
	P_GET_UBOOL(Z_Param_LeftShoulder);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerSetThirdPersonShoulder_Implementation(Z_Param_LeftShoulder);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function ServerSetThirdPersonShoulder

// Begin Class AMultiplayerCharacter Function ServerSetUsingThirdPerson
struct MultiplayerCharacter_eventServerSetUsingThirdPerson_Parms
{
	bool NewUsingThirdPerson;
};
static const FName NAME_AMultiplayerCharacter_ServerSetUsingThirdPerson = FName(TEXT("ServerSetUsingThirdPerson"));
void AMultiplayerCharacter::ServerSetUsingThirdPerson(bool NewUsingThirdPerson)
{
	MultiplayerCharacter_eventServerSetUsingThirdPerson_Parms Parms;
	Parms.NewUsingThirdPerson=NewUsingThirdPerson ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_ServerSetUsingThirdPerson);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_ServerSetUsingThirdPerson_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewUsingThirdPerson_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewUsingThirdPerson;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerCharacter_ServerSetUsingThirdPerson_Statics::NewProp_NewUsingThirdPerson_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventServerSetUsingThirdPerson_Parms*)Obj)->NewUsingThirdPerson = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_ServerSetUsingThirdPerson_Statics::NewProp_NewUsingThirdPerson = { "NewUsingThirdPerson", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventServerSetUsingThirdPerson_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_ServerSetUsingThirdPerson_Statics::NewProp_NewUsingThirdPerson_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_ServerSetUsingThirdPerson_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_ServerSetUsingThirdPerson_Statics::NewProp_NewUsingThirdPerson,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerSetUsingThirdPerson_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_ServerSetUsingThirdPerson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "ServerSetUsingThirdPerson", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_ServerSetUsingThirdPerson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerSetUsingThirdPerson_Statics::PropPointers), sizeof(MultiplayerCharacter_eventServerSetUsingThirdPerson_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerSetUsingThirdPerson_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_ServerSetUsingThirdPerson_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerCharacter_eventServerSetUsingThirdPerson_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_ServerSetUsingThirdPerson()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_ServerSetUsingThirdPerson_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execServerSetUsingThirdPerson)
{
	P_GET_UBOOL(Z_Param_NewUsingThirdPerson);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerSetUsingThirdPerson_Implementation(Z_Param_NewUsingThirdPerson);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function ServerSetUsingThirdPerson

// Begin Class AMultiplayerCharacter Function ServerSprint
static const FName NAME_AMultiplayerCharacter_ServerSprint = FName(TEXT("ServerSprint"));
void AMultiplayerCharacter::ServerSprint()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_ServerSprint);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_ServerSprint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_ServerSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "ServerSprint", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerSprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_ServerSprint_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_ServerSprint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_ServerSprint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execServerSprint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerSprint_Implementation();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function ServerSprint

// Begin Class AMultiplayerCharacter Function ServerStopAiming
static const FName NAME_AMultiplayerCharacter_ServerStopAiming = FName(TEXT("ServerStopAiming"));
void AMultiplayerCharacter::ServerStopAiming()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_ServerStopAiming);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_ServerStopAiming_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_ServerStopAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "ServerStopAiming", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerStopAiming_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_ServerStopAiming_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_ServerStopAiming()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_ServerStopAiming_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execServerStopAiming)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerStopAiming_Implementation();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function ServerStopAiming

// Begin Class AMultiplayerCharacter Function ServerStopSprinting
struct MultiplayerCharacter_eventServerStopSprinting_Parms
{
	bool SkipAnimation;
};
static const FName NAME_AMultiplayerCharacter_ServerStopSprinting = FName(TEXT("ServerStopSprinting"));
void AMultiplayerCharacter::ServerStopSprinting(bool SkipAnimation)
{
	MultiplayerCharacter_eventServerStopSprinting_Parms Parms;
	Parms.SkipAnimation=SkipAnimation ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_ServerStopSprinting);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_ServerStopSprinting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "CPP_Default_SkipAnimation", "false" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_SkipAnimation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SkipAnimation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerCharacter_ServerStopSprinting_Statics::NewProp_SkipAnimation_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventServerStopSprinting_Parms*)Obj)->SkipAnimation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_ServerStopSprinting_Statics::NewProp_SkipAnimation = { "SkipAnimation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventServerStopSprinting_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_ServerStopSprinting_Statics::NewProp_SkipAnimation_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_ServerStopSprinting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_ServerStopSprinting_Statics::NewProp_SkipAnimation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerStopSprinting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_ServerStopSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "ServerStopSprinting", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_ServerStopSprinting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerStopSprinting_Statics::PropPointers), sizeof(MultiplayerCharacter_eventServerStopSprinting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerStopSprinting_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_ServerStopSprinting_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerCharacter_eventServerStopSprinting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_ServerStopSprinting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_ServerStopSprinting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execServerStopSprinting)
{
	P_GET_UBOOL(Z_Param_SkipAnimation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerStopSprinting_Implementation(Z_Param_SkipAnimation);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function ServerStopSprinting

// Begin Class AMultiplayerCharacter Function ServerSwitchWeapons
struct MultiplayerCharacter_eventServerSwitchWeapons_Parms
{
	int32 Index;
	AMultiplayerGun* WeaponToSwitchTo;
};
static const FName NAME_AMultiplayerCharacter_ServerSwitchWeapons = FName(TEXT("ServerSwitchWeapons"));
void AMultiplayerCharacter::ServerSwitchWeapons(int32 Index, AMultiplayerGun* WeaponToSwitchTo)
{
	MultiplayerCharacter_eventServerSwitchWeapons_Parms Parms;
	Parms.Index=Index;
	Parms.WeaponToSwitchTo=WeaponToSwitchTo;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_ServerSwitchWeapons);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_ServerSwitchWeapons_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponToSwitchTo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_ServerSwitchWeapons_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventServerSwitchWeapons_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_ServerSwitchWeapons_Statics::NewProp_WeaponToSwitchTo = { "WeaponToSwitchTo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventServerSwitchWeapons_Parms, WeaponToSwitchTo), Z_Construct_UClass_AMultiplayerGun_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_ServerSwitchWeapons_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_ServerSwitchWeapons_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_ServerSwitchWeapons_Statics::NewProp_WeaponToSwitchTo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerSwitchWeapons_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_ServerSwitchWeapons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "ServerSwitchWeapons", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_ServerSwitchWeapons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerSwitchWeapons_Statics::PropPointers), sizeof(MultiplayerCharacter_eventServerSwitchWeapons_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerSwitchWeapons_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_ServerSwitchWeapons_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerCharacter_eventServerSwitchWeapons_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_ServerSwitchWeapons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_ServerSwitchWeapons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execServerSwitchWeapons)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_OBJECT(AMultiplayerGun,Z_Param_WeaponToSwitchTo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerSwitchWeapons_Implementation(Z_Param_Index,Z_Param_WeaponToSwitchTo);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function ServerSwitchWeapons

// Begin Class AMultiplayerCharacter Function ServerSwitchWeapons1
static const FName NAME_AMultiplayerCharacter_ServerSwitchWeapons1 = FName(TEXT("ServerSwitchWeapons1"));
void AMultiplayerCharacter::ServerSwitchWeapons1()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_ServerSwitchWeapons1);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_ServerSwitchWeapons1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_ServerSwitchWeapons1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "ServerSwitchWeapons1", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerSwitchWeapons1_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_ServerSwitchWeapons1_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_ServerSwitchWeapons1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_ServerSwitchWeapons1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execServerSwitchWeapons1)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerSwitchWeapons1_Implementation();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function ServerSwitchWeapons1

// Begin Class AMultiplayerCharacter Function ServerUnHolsterWeapons
static const FName NAME_AMultiplayerCharacter_ServerUnHolsterWeapons = FName(TEXT("ServerUnHolsterWeapons"));
void AMultiplayerCharacter::ServerUnHolsterWeapons()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_ServerUnHolsterWeapons);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_ServerUnHolsterWeapons_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_ServerUnHolsterWeapons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "ServerUnHolsterWeapons", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerUnHolsterWeapons_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_ServerUnHolsterWeapons_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_ServerUnHolsterWeapons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_ServerUnHolsterWeapons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execServerUnHolsterWeapons)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerUnHolsterWeapons_Implementation();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function ServerUnHolsterWeapons

// Begin Class AMultiplayerCharacter Function ServerUnHolsterWeapons1
static const FName NAME_AMultiplayerCharacter_ServerUnHolsterWeapons1 = FName(TEXT("ServerUnHolsterWeapons1"));
void AMultiplayerCharacter::ServerUnHolsterWeapons1()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_ServerUnHolsterWeapons1);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_ServerUnHolsterWeapons1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_ServerUnHolsterWeapons1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "ServerUnHolsterWeapons1", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerUnHolsterWeapons1_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_ServerUnHolsterWeapons1_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_ServerUnHolsterWeapons1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_ServerUnHolsterWeapons1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execServerUnHolsterWeapons1)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerUnHolsterWeapons1_Implementation();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function ServerUnHolsterWeapons1

// Begin Class AMultiplayerCharacter Function SetAimingArmsPosition_BP
struct MultiplayerCharacter_eventSetAimingArmsPosition_BP_Parms
{
	FVector ArmsNormalLocation;
	FRotator ArmsNormalRotation;
	FVector ArmsAimLocation;
	FRotator ArmsAimRotation;
	bool Aiming;
	float TimeToAim;
};
static const FName NAME_AMultiplayerCharacter_SetAimingArmsPosition_BP = FName(TEXT("SetAimingArmsPosition_BP"));
void AMultiplayerCharacter::SetAimingArmsPosition_BP(FVector ArmsNormalLocation, FRotator ArmsNormalRotation, FVector ArmsAimLocation, FRotator ArmsAimRotation, bool Aiming, float TimeToAim)
{
	MultiplayerCharacter_eventSetAimingArmsPosition_BP_Parms Parms;
	Parms.ArmsNormalLocation=ArmsNormalLocation;
	Parms.ArmsNormalRotation=ArmsNormalRotation;
	Parms.ArmsAimLocation=ArmsAimLocation;
	Parms.ArmsAimRotation=ArmsAimRotation;
	Parms.Aiming=Aiming ? true : false;
	Parms.TimeToAim=TimeToAim;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_SetAimingArmsPosition_BP);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_SetAimingArmsPosition_BP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ArmsNormalLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ArmsNormalRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ArmsAimLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ArmsAimRotation;
	static void NewProp_Aiming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Aiming;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToAim;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_SetAimingArmsPosition_BP_Statics::NewProp_ArmsNormalLocation = { "ArmsNormalLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventSetAimingArmsPosition_BP_Parms, ArmsNormalLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_SetAimingArmsPosition_BP_Statics::NewProp_ArmsNormalRotation = { "ArmsNormalRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventSetAimingArmsPosition_BP_Parms, ArmsNormalRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_SetAimingArmsPosition_BP_Statics::NewProp_ArmsAimLocation = { "ArmsAimLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventSetAimingArmsPosition_BP_Parms, ArmsAimLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_SetAimingArmsPosition_BP_Statics::NewProp_ArmsAimRotation = { "ArmsAimRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventSetAimingArmsPosition_BP_Parms, ArmsAimRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMultiplayerCharacter_SetAimingArmsPosition_BP_Statics::NewProp_Aiming_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventSetAimingArmsPosition_BP_Parms*)Obj)->Aiming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_SetAimingArmsPosition_BP_Statics::NewProp_Aiming = { "Aiming", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventSetAimingArmsPosition_BP_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_SetAimingArmsPosition_BP_Statics::NewProp_Aiming_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_SetAimingArmsPosition_BP_Statics::NewProp_TimeToAim = { "TimeToAim", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventSetAimingArmsPosition_BP_Parms, TimeToAim), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_SetAimingArmsPosition_BP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_SetAimingArmsPosition_BP_Statics::NewProp_ArmsNormalLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_SetAimingArmsPosition_BP_Statics::NewProp_ArmsNormalRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_SetAimingArmsPosition_BP_Statics::NewProp_ArmsAimLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_SetAimingArmsPosition_BP_Statics::NewProp_ArmsAimRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_SetAimingArmsPosition_BP_Statics::NewProp_Aiming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_SetAimingArmsPosition_BP_Statics::NewProp_TimeToAim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetAimingArmsPosition_BP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_SetAimingArmsPosition_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "SetAimingArmsPosition_BP", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_SetAimingArmsPosition_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetAimingArmsPosition_BP_Statics::PropPointers), sizeof(MultiplayerCharacter_eventSetAimingArmsPosition_BP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetAimingArmsPosition_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_SetAimingArmsPosition_BP_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerCharacter_eventSetAimingArmsPosition_BP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_SetAimingArmsPosition_BP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_SetAimingArmsPosition_BP_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AMultiplayerCharacter Function SetAimingArmsPosition_BP

// Begin Class AMultiplayerCharacter Function SetAimingFOV_BP
struct MultiplayerCharacter_eventSetAimingFOV_BP_Parms
{
	bool Aiming;
	float AimingFOV;
	float TimeToAim;
};
static const FName NAME_AMultiplayerCharacter_SetAimingFOV_BP = FName(TEXT("SetAimingFOV_BP"));
void AMultiplayerCharacter::SetAimingFOV_BP(bool Aiming, float AimingFOV, float TimeToAim)
{
	MultiplayerCharacter_eventSetAimingFOV_BP_Parms Parms;
	Parms.Aiming=Aiming ? true : false;
	Parms.AimingFOV=AimingFOV;
	Parms.TimeToAim=TimeToAim;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_SetAimingFOV_BP);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_SetAimingFOV_BP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Aiming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Aiming;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AimingFOV;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToAim;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerCharacter_SetAimingFOV_BP_Statics::NewProp_Aiming_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventSetAimingFOV_BP_Parms*)Obj)->Aiming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_SetAimingFOV_BP_Statics::NewProp_Aiming = { "Aiming", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventSetAimingFOV_BP_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_SetAimingFOV_BP_Statics::NewProp_Aiming_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_SetAimingFOV_BP_Statics::NewProp_AimingFOV = { "AimingFOV", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventSetAimingFOV_BP_Parms, AimingFOV), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_SetAimingFOV_BP_Statics::NewProp_TimeToAim = { "TimeToAim", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventSetAimingFOV_BP_Parms, TimeToAim), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_SetAimingFOV_BP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_SetAimingFOV_BP_Statics::NewProp_Aiming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_SetAimingFOV_BP_Statics::NewProp_AimingFOV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_SetAimingFOV_BP_Statics::NewProp_TimeToAim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetAimingFOV_BP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_SetAimingFOV_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "SetAimingFOV_BP", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_SetAimingFOV_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetAimingFOV_BP_Statics::PropPointers), sizeof(MultiplayerCharacter_eventSetAimingFOV_BP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetAimingFOV_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_SetAimingFOV_BP_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerCharacter_eventSetAimingFOV_BP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_SetAimingFOV_BP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_SetAimingFOV_BP_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AMultiplayerCharacter Function SetAimingFOV_BP

// Begin Class AMultiplayerCharacter Function SetAllSharedCalibers
struct Z_Construct_UFunction_AMultiplayerCharacter_SetAllSharedCalibers_Statics
{
	struct MultiplayerCharacter_eventSetAllSharedCalibers_Parms
	{
		TMap<FName,int32> NewAllSharedCalibers;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewAllSharedCalibers_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NewAllSharedCalibers_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_NewAllSharedCalibers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_SetAllSharedCalibers_Statics::NewProp_NewAllSharedCalibers_ValueProp = { "NewAllSharedCalibers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AMultiplayerCharacter_SetAllSharedCalibers_Statics::NewProp_NewAllSharedCalibers_Key_KeyProp = { "NewAllSharedCalibers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_SetAllSharedCalibers_Statics::NewProp_NewAllSharedCalibers = { "NewAllSharedCalibers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventSetAllSharedCalibers_Parms, NewAllSharedCalibers), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_SetAllSharedCalibers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_SetAllSharedCalibers_Statics::NewProp_NewAllSharedCalibers_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_SetAllSharedCalibers_Statics::NewProp_NewAllSharedCalibers_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_SetAllSharedCalibers_Statics::NewProp_NewAllSharedCalibers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetAllSharedCalibers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_SetAllSharedCalibers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "SetAllSharedCalibers", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_SetAllSharedCalibers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetAllSharedCalibers_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_SetAllSharedCalibers_Statics::MultiplayerCharacter_eventSetAllSharedCalibers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetAllSharedCalibers_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_SetAllSharedCalibers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_SetAllSharedCalibers_Statics::MultiplayerCharacter_eventSetAllSharedCalibers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_SetAllSharedCalibers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_SetAllSharedCalibers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execSetAllSharedCalibers)
{
	P_GET_TMAP(FName,int32,Z_Param_NewAllSharedCalibers);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAllSharedCalibers(Z_Param_NewAllSharedCalibers);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function SetAllSharedCalibers

// Begin Class AMultiplayerCharacter Function SetArmsAnimationMode
struct Z_Construct_UFunction_AMultiplayerCharacter_SetArmsAnimationMode_Statics
{
	struct MultiplayerCharacter_eventSetArmsAnimationMode_Parms
	{
		float Delay;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "CPP_Default_Delay", "0.000000" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "Set delay to 0 to not use it" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Delay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_SetArmsAnimationMode_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventSetArmsAnimationMode_Parms, Delay), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_SetArmsAnimationMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_SetArmsAnimationMode_Statics::NewProp_Delay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetArmsAnimationMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_SetArmsAnimationMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "SetArmsAnimationMode", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_SetArmsAnimationMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetArmsAnimationMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_SetArmsAnimationMode_Statics::MultiplayerCharacter_eventSetArmsAnimationMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetArmsAnimationMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_SetArmsAnimationMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_SetArmsAnimationMode_Statics::MultiplayerCharacter_eventSetArmsAnimationMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_SetArmsAnimationMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_SetArmsAnimationMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execSetArmsAnimationMode)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetArmsAnimationMode(Z_Param_Delay);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function SetArmsAnimationMode

// Begin Class AMultiplayerCharacter Function SetArmsAnimationMode1
struct Z_Construct_UFunction_AMultiplayerCharacter_SetArmsAnimationMode1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_SetArmsAnimationMode1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "SetArmsAnimationMode1", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetArmsAnimationMode1_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_SetArmsAnimationMode1_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_SetArmsAnimationMode1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_SetArmsAnimationMode1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execSetArmsAnimationMode1)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetArmsAnimationMode1();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function SetArmsAnimationMode1

// Begin Class AMultiplayerCharacter Function SetCanAim
struct Z_Construct_UFunction_AMultiplayerCharacter_SetCanAim_Statics
{
	struct MultiplayerCharacter_eventSetCanAim_Parms
	{
		bool NewCanAim;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewCanAim_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewCanAim;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerCharacter_SetCanAim_Statics::NewProp_NewCanAim_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventSetCanAim_Parms*)Obj)->NewCanAim = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_SetCanAim_Statics::NewProp_NewCanAim = { "NewCanAim", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventSetCanAim_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_SetCanAim_Statics::NewProp_NewCanAim_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_SetCanAim_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_SetCanAim_Statics::NewProp_NewCanAim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetCanAim_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_SetCanAim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "SetCanAim", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_SetCanAim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetCanAim_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_SetCanAim_Statics::MultiplayerCharacter_eventSetCanAim_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetCanAim_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_SetCanAim_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_SetCanAim_Statics::MultiplayerCharacter_eventSetCanAim_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_SetCanAim()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_SetCanAim_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execSetCanAim)
{
	P_GET_UBOOL(Z_Param_NewCanAim);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCanAim(Z_Param_NewCanAim);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function SetCanAim

// Begin Class AMultiplayerCharacter Function SetCanInteract
struct Z_Construct_UFunction_AMultiplayerCharacter_SetCanInteract_Statics
{
	struct MultiplayerCharacter_eventSetCanInteract_Parms
	{
		bool NewCanInteract;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewCanInteract_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewCanInteract;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerCharacter_SetCanInteract_Statics::NewProp_NewCanInteract_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventSetCanInteract_Parms*)Obj)->NewCanInteract = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_SetCanInteract_Statics::NewProp_NewCanInteract = { "NewCanInteract", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventSetCanInteract_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_SetCanInteract_Statics::NewProp_NewCanInteract_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_SetCanInteract_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_SetCanInteract_Statics::NewProp_NewCanInteract,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetCanInteract_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_SetCanInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "SetCanInteract", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_SetCanInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetCanInteract_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_SetCanInteract_Statics::MultiplayerCharacter_eventSetCanInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetCanInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_SetCanInteract_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_SetCanInteract_Statics::MultiplayerCharacter_eventSetCanInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_SetCanInteract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_SetCanInteract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execSetCanInteract)
{
	P_GET_UBOOL(Z_Param_NewCanInteract);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCanInteract(Z_Param_NewCanInteract);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function SetCanInteract

// Begin Class AMultiplayerCharacter Function SetCanShoot
struct Z_Construct_UFunction_AMultiplayerCharacter_SetCanShoot_Statics
{
	struct MultiplayerCharacter_eventSetCanShoot_Parms
	{
		bool NewCanShoot;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewCanShoot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewCanShoot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerCharacter_SetCanShoot_Statics::NewProp_NewCanShoot_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventSetCanShoot_Parms*)Obj)->NewCanShoot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_SetCanShoot_Statics::NewProp_NewCanShoot = { "NewCanShoot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventSetCanShoot_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_SetCanShoot_Statics::NewProp_NewCanShoot_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_SetCanShoot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_SetCanShoot_Statics::NewProp_NewCanShoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetCanShoot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_SetCanShoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "SetCanShoot", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_SetCanShoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetCanShoot_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_SetCanShoot_Statics::MultiplayerCharacter_eventSetCanShoot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetCanShoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_SetCanShoot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_SetCanShoot_Statics::MultiplayerCharacter_eventSetCanShoot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_SetCanShoot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_SetCanShoot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execSetCanShoot)
{
	P_GET_UBOOL(Z_Param_NewCanShoot);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCanShoot(Z_Param_NewCanShoot);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function SetCanShoot

// Begin Class AMultiplayerCharacter Function SetFOV_BP
struct MultiplayerCharacter_eventSetFOV_BP_Parms
{
	float NewFOV;
};
static const FName NAME_AMultiplayerCharacter_SetFOV_BP = FName(TEXT("SetFOV_BP"));
void AMultiplayerCharacter::SetFOV_BP(float NewFOV)
{
	MultiplayerCharacter_eventSetFOV_BP_Parms Parms;
	Parms.NewFOV=NewFOV;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_SetFOV_BP);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_SetFOV_BP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewFOV;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_SetFOV_BP_Statics::NewProp_NewFOV = { "NewFOV", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventSetFOV_BP_Parms, NewFOV), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_SetFOV_BP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_SetFOV_BP_Statics::NewProp_NewFOV,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetFOV_BP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_SetFOV_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "SetFOV_BP", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_SetFOV_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetFOV_BP_Statics::PropPointers), sizeof(MultiplayerCharacter_eventSetFOV_BP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetFOV_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_SetFOV_BP_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerCharacter_eventSetFOV_BP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_SetFOV_BP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_SetFOV_BP_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AMultiplayerCharacter Function SetFOV_BP

// Begin Class AMultiplayerCharacter Function SetInteractableBeingOverlapped
struct Z_Construct_UFunction_AMultiplayerCharacter_SetInteractableBeingOverlapped_Statics
{
	struct MultiplayerCharacter_eventSetInteractableBeingOverlapped_Parms
	{
		AInteractableItem* NewInteractableBeingOverlapped;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewInteractableBeingOverlapped;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_SetInteractableBeingOverlapped_Statics::NewProp_NewInteractableBeingOverlapped = { "NewInteractableBeingOverlapped", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventSetInteractableBeingOverlapped_Parms, NewInteractableBeingOverlapped), Z_Construct_UClass_AInteractableItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_SetInteractableBeingOverlapped_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_SetInteractableBeingOverlapped_Statics::NewProp_NewInteractableBeingOverlapped,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetInteractableBeingOverlapped_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_SetInteractableBeingOverlapped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "SetInteractableBeingOverlapped", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_SetInteractableBeingOverlapped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetInteractableBeingOverlapped_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_SetInteractableBeingOverlapped_Statics::MultiplayerCharacter_eventSetInteractableBeingOverlapped_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetInteractableBeingOverlapped_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_SetInteractableBeingOverlapped_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_SetInteractableBeingOverlapped_Statics::MultiplayerCharacter_eventSetInteractableBeingOverlapped_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_SetInteractableBeingOverlapped()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_SetInteractableBeingOverlapped_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execSetInteractableBeingOverlapped)
{
	P_GET_OBJECT(AInteractableItem,Z_Param_NewInteractableBeingOverlapped);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInteractableBeingOverlapped(Z_Param_NewInteractableBeingOverlapped);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function SetInteractableBeingOverlapped

// Begin Class AMultiplayerCharacter Function SetInteractDistance
struct Z_Construct_UFunction_AMultiplayerCharacter_SetInteractDistance_Statics
{
	struct MultiplayerCharacter_eventSetInteractDistance_Parms
	{
		float NewInteractDistance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewInteractDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_SetInteractDistance_Statics::NewProp_NewInteractDistance = { "NewInteractDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventSetInteractDistance_Parms, NewInteractDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_SetInteractDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_SetInteractDistance_Statics::NewProp_NewInteractDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetInteractDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_SetInteractDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "SetInteractDistance", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_SetInteractDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetInteractDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_SetInteractDistance_Statics::MultiplayerCharacter_eventSetInteractDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetInteractDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_SetInteractDistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_SetInteractDistance_Statics::MultiplayerCharacter_eventSetInteractDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_SetInteractDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_SetInteractDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execSetInteractDistance)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewInteractDistance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInteractDistance(Z_Param_NewInteractDistance);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function SetInteractDistance

// Begin Class AMultiplayerCharacter Function SetIsADSing
struct Z_Construct_UFunction_AMultiplayerCharacter_SetIsADSing_Statics
{
	struct MultiplayerCharacter_eventSetIsADSing_Parms
	{
		bool NewIsADSing;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewIsADSing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewIsADSing;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerCharacter_SetIsADSing_Statics::NewProp_NewIsADSing_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventSetIsADSing_Parms*)Obj)->NewIsADSing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_SetIsADSing_Statics::NewProp_NewIsADSing = { "NewIsADSing", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventSetIsADSing_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_SetIsADSing_Statics::NewProp_NewIsADSing_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_SetIsADSing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_SetIsADSing_Statics::NewProp_NewIsADSing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetIsADSing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_SetIsADSing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "SetIsADSing", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_SetIsADSing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetIsADSing_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_SetIsADSing_Statics::MultiplayerCharacter_eventSetIsADSing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetIsADSing_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_SetIsADSing_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_SetIsADSing_Statics::MultiplayerCharacter_eventSetIsADSing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_SetIsADSing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_SetIsADSing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execSetIsADSing)
{
	P_GET_UBOOL(Z_Param_NewIsADSing);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsADSing(Z_Param_NewIsADSing);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function SetIsADSing

// Begin Class AMultiplayerCharacter Function SetIsAiming
struct Z_Construct_UFunction_AMultiplayerCharacter_SetIsAiming_Statics
{
	struct MultiplayerCharacter_eventSetIsAiming_Parms
	{
		bool NewIsAiming;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewIsAiming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewIsAiming;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerCharacter_SetIsAiming_Statics::NewProp_NewIsAiming_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventSetIsAiming_Parms*)Obj)->NewIsAiming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_SetIsAiming_Statics::NewProp_NewIsAiming = { "NewIsAiming", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventSetIsAiming_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_SetIsAiming_Statics::NewProp_NewIsAiming_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_SetIsAiming_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_SetIsAiming_Statics::NewProp_NewIsAiming,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetIsAiming_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_SetIsAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "SetIsAiming", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_SetIsAiming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetIsAiming_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_SetIsAiming_Statics::MultiplayerCharacter_eventSetIsAiming_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetIsAiming_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_SetIsAiming_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_SetIsAiming_Statics::MultiplayerCharacter_eventSetIsAiming_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_SetIsAiming()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_SetIsAiming_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execSetIsAiming)
{
	P_GET_UBOOL(Z_Param_NewIsAiming);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsAiming(Z_Param_NewIsAiming);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function SetIsAiming

// Begin Class AMultiplayerCharacter Function SetIsFiring
struct Z_Construct_UFunction_AMultiplayerCharacter_SetIsFiring_Statics
{
	struct MultiplayerCharacter_eventSetIsFiring_Parms
	{
		bool NewIsFiring;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewIsFiring_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewIsFiring;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerCharacter_SetIsFiring_Statics::NewProp_NewIsFiring_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventSetIsFiring_Parms*)Obj)->NewIsFiring = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_SetIsFiring_Statics::NewProp_NewIsFiring = { "NewIsFiring", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventSetIsFiring_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_SetIsFiring_Statics::NewProp_NewIsFiring_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_SetIsFiring_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_SetIsFiring_Statics::NewProp_NewIsFiring,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetIsFiring_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_SetIsFiring_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "SetIsFiring", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_SetIsFiring_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetIsFiring_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_SetIsFiring_Statics::MultiplayerCharacter_eventSetIsFiring_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetIsFiring_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_SetIsFiring_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_SetIsFiring_Statics::MultiplayerCharacter_eventSetIsFiring_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_SetIsFiring()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_SetIsFiring_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execSetIsFiring)
{
	P_GET_UBOOL(Z_Param_NewIsFiring);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsFiring(Z_Param_NewIsFiring);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function SetIsFiring

// Begin Class AMultiplayerCharacter Function SetIsZoomedIn
struct Z_Construct_UFunction_AMultiplayerCharacter_SetIsZoomedIn_Statics
{
	struct MultiplayerCharacter_eventSetIsZoomedIn_Parms
	{
		bool NewIsZoomedIn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewIsZoomedIn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewIsZoomedIn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerCharacter_SetIsZoomedIn_Statics::NewProp_NewIsZoomedIn_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventSetIsZoomedIn_Parms*)Obj)->NewIsZoomedIn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_SetIsZoomedIn_Statics::NewProp_NewIsZoomedIn = { "NewIsZoomedIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventSetIsZoomedIn_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_SetIsZoomedIn_Statics::NewProp_NewIsZoomedIn_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_SetIsZoomedIn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_SetIsZoomedIn_Statics::NewProp_NewIsZoomedIn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetIsZoomedIn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_SetIsZoomedIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "SetIsZoomedIn", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_SetIsZoomedIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetIsZoomedIn_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_SetIsZoomedIn_Statics::MultiplayerCharacter_eventSetIsZoomedIn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetIsZoomedIn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_SetIsZoomedIn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_SetIsZoomedIn_Statics::MultiplayerCharacter_eventSetIsZoomedIn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_SetIsZoomedIn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_SetIsZoomedIn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execSetIsZoomedIn)
{
	P_GET_UBOOL(Z_Param_NewIsZoomedIn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsZoomedIn(Z_Param_NewIsZoomedIn);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function SetIsZoomedIn

// Begin Class AMultiplayerCharacter Function SetMovementSpeedBasedOnSettings
struct Z_Construct_UFunction_AMultiplayerCharacter_SetMovementSpeedBasedOnSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_SetMovementSpeedBasedOnSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "SetMovementSpeedBasedOnSettings", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetMovementSpeedBasedOnSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_SetMovementSpeedBasedOnSettings_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_SetMovementSpeedBasedOnSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_SetMovementSpeedBasedOnSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execSetMovementSpeedBasedOnSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMovementSpeedBasedOnSettings();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function SetMovementSpeedBasedOnSettings

// Begin Class AMultiplayerCharacter Function SetMovementSpeedBasedOnSettings_BP
struct MultiplayerCharacter_eventSetMovementSpeedBasedOnSettings_BP_Parms
{
	float NewSpeed;
};
static const FName NAME_AMultiplayerCharacter_SetMovementSpeedBasedOnSettings_BP = FName(TEXT("SetMovementSpeedBasedOnSettings_BP"));
void AMultiplayerCharacter::SetMovementSpeedBasedOnSettings_BP(float NewSpeed)
{
	MultiplayerCharacter_eventSetMovementSpeedBasedOnSettings_BP_Parms Parms;
	Parms.NewSpeed=NewSpeed;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_SetMovementSpeedBasedOnSettings_BP);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_SetMovementSpeedBasedOnSettings_BP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_SetMovementSpeedBasedOnSettings_BP_Statics::NewProp_NewSpeed = { "NewSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventSetMovementSpeedBasedOnSettings_BP_Parms, NewSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_SetMovementSpeedBasedOnSettings_BP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_SetMovementSpeedBasedOnSettings_BP_Statics::NewProp_NewSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetMovementSpeedBasedOnSettings_BP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_SetMovementSpeedBasedOnSettings_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "SetMovementSpeedBasedOnSettings_BP", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_SetMovementSpeedBasedOnSettings_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetMovementSpeedBasedOnSettings_BP_Statics::PropPointers), sizeof(MultiplayerCharacter_eventSetMovementSpeedBasedOnSettings_BP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetMovementSpeedBasedOnSettings_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_SetMovementSpeedBasedOnSettings_BP_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerCharacter_eventSetMovementSpeedBasedOnSettings_BP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_SetMovementSpeedBasedOnSettings_BP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_SetMovementSpeedBasedOnSettings_BP_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AMultiplayerCharacter Function SetMovementSpeedBasedOnSettings_BP

// Begin Class AMultiplayerCharacter Function SetOverlappingInteractable
struct Z_Construct_UFunction_AMultiplayerCharacter_SetOverlappingInteractable_Statics
{
	struct MultiplayerCharacter_eventSetOverlappingInteractable_Parms
	{
		bool NewOverlappingInteractable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewOverlappingInteractable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewOverlappingInteractable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerCharacter_SetOverlappingInteractable_Statics::NewProp_NewOverlappingInteractable_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventSetOverlappingInteractable_Parms*)Obj)->NewOverlappingInteractable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_SetOverlappingInteractable_Statics::NewProp_NewOverlappingInteractable = { "NewOverlappingInteractable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventSetOverlappingInteractable_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_SetOverlappingInteractable_Statics::NewProp_NewOverlappingInteractable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_SetOverlappingInteractable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_SetOverlappingInteractable_Statics::NewProp_NewOverlappingInteractable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetOverlappingInteractable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_SetOverlappingInteractable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "SetOverlappingInteractable", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_SetOverlappingInteractable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetOverlappingInteractable_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_SetOverlappingInteractable_Statics::MultiplayerCharacter_eventSetOverlappingInteractable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetOverlappingInteractable_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_SetOverlappingInteractable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_SetOverlappingInteractable_Statics::MultiplayerCharacter_eventSetOverlappingInteractable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_SetOverlappingInteractable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_SetOverlappingInteractable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execSetOverlappingInteractable)
{
	P_GET_UBOOL(Z_Param_NewOverlappingInteractable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOverlappingInteractable(Z_Param_NewOverlappingInteractable);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function SetOverlappingInteractable

// Begin Class AMultiplayerCharacter Function SetOwningController
static const FName NAME_AMultiplayerCharacter_SetOwningController = FName(TEXT("SetOwningController"));
void AMultiplayerCharacter::SetOwningController()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_SetOwningController);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_SetOwningController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "This will automatically get the owning controller, so it does not need an input" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_SetOwningController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "SetOwningController", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetOwningController_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_SetOwningController_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_SetOwningController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_SetOwningController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execSetOwningController)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOwningController_Implementation();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function SetOwningController

// Begin Class AMultiplayerCharacter Function SetPlayerModelAnimationMode
struct Z_Construct_UFunction_AMultiplayerCharacter_SetPlayerModelAnimationMode_Statics
{
	struct MultiplayerCharacter_eventSetPlayerModelAnimationMode_Parms
	{
		float Delay;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "CPP_Default_Delay", "0.000000" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "Set delay to 0 to not use it" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Delay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_SetPlayerModelAnimationMode_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventSetPlayerModelAnimationMode_Parms, Delay), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_SetPlayerModelAnimationMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_SetPlayerModelAnimationMode_Statics::NewProp_Delay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetPlayerModelAnimationMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_SetPlayerModelAnimationMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "SetPlayerModelAnimationMode", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_SetPlayerModelAnimationMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetPlayerModelAnimationMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_SetPlayerModelAnimationMode_Statics::MultiplayerCharacter_eventSetPlayerModelAnimationMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetPlayerModelAnimationMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_SetPlayerModelAnimationMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_SetPlayerModelAnimationMode_Statics::MultiplayerCharacter_eventSetPlayerModelAnimationMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_SetPlayerModelAnimationMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_SetPlayerModelAnimationMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execSetPlayerModelAnimationMode)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlayerModelAnimationMode(Z_Param_Delay);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function SetPlayerModelAnimationMode

// Begin Class AMultiplayerCharacter Function SetPlayerModelAnimationMode1
struct Z_Construct_UFunction_AMultiplayerCharacter_SetPlayerModelAnimationMode1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_SetPlayerModelAnimationMode1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "SetPlayerModelAnimationMode1", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetPlayerModelAnimationMode1_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_SetPlayerModelAnimationMode1_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_SetPlayerModelAnimationMode1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_SetPlayerModelAnimationMode1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execSetPlayerModelAnimationMode1)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlayerModelAnimationMode1();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function SetPlayerModelAnimationMode1

// Begin Class AMultiplayerCharacter Function SetSensitivity
struct Z_Construct_UFunction_AMultiplayerCharacter_SetSensitivity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_SetSensitivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "SetSensitivity", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetSensitivity_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_SetSensitivity_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_SetSensitivity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_SetSensitivity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execSetSensitivity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSensitivity();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function SetSensitivity

// Begin Class AMultiplayerCharacter Function SetSharedCaliberAmount
struct Z_Construct_UFunction_AMultiplayerCharacter_SetSharedCaliberAmount_Statics
{
	struct MultiplayerCharacter_eventSetSharedCaliberAmount_Parms
	{
		int32 Index;
		int32 NewAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_SetSharedCaliberAmount_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventSetSharedCaliberAmount_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_SetSharedCaliberAmount_Statics::NewProp_NewAmount = { "NewAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventSetSharedCaliberAmount_Parms, NewAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_SetSharedCaliberAmount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_SetSharedCaliberAmount_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_SetSharedCaliberAmount_Statics::NewProp_NewAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetSharedCaliberAmount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_SetSharedCaliberAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "SetSharedCaliberAmount", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_SetSharedCaliberAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetSharedCaliberAmount_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_SetSharedCaliberAmount_Statics::MultiplayerCharacter_eventSetSharedCaliberAmount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetSharedCaliberAmount_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_SetSharedCaliberAmount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_SetSharedCaliberAmount_Statics::MultiplayerCharacter_eventSetSharedCaliberAmount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_SetSharedCaliberAmount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_SetSharedCaliberAmount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execSetSharedCaliberAmount)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSharedCaliberAmount(Z_Param_Index,Z_Param_NewAmount);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function SetSharedCaliberAmount

// Begin Class AMultiplayerCharacter Function SetSharedCaliberName
struct Z_Construct_UFunction_AMultiplayerCharacter_SetSharedCaliberName_Statics
{
	struct MultiplayerCharacter_eventSetSharedCaliberName_Parms
	{
		int32 Index;
		FName NewName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NewName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_SetSharedCaliberName_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventSetSharedCaliberName_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AMultiplayerCharacter_SetSharedCaliberName_Statics::NewProp_NewName = { "NewName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventSetSharedCaliberName_Parms, NewName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_SetSharedCaliberName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_SetSharedCaliberName_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_SetSharedCaliberName_Statics::NewProp_NewName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetSharedCaliberName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_SetSharedCaliberName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "SetSharedCaliberName", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_SetSharedCaliberName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetSharedCaliberName_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_SetSharedCaliberName_Statics::MultiplayerCharacter_eventSetSharedCaliberName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetSharedCaliberName_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_SetSharedCaliberName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_SetSharedCaliberName_Statics::MultiplayerCharacter_eventSetSharedCaliberName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_SetSharedCaliberName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_SetSharedCaliberName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execSetSharedCaliberName)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY(FNameProperty,Z_Param_NewName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSharedCaliberName(Z_Param_Index,Z_Param_NewName);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function SetSharedCaliberName

// Begin Class AMultiplayerCharacter Function SetThirdPersonShoulder
struct Z_Construct_UFunction_AMultiplayerCharacter_SetThirdPersonShoulder_Statics
{
	struct MultiplayerCharacter_eventSetThirdPersonShoulder_Parms
	{
		bool LeftShoulder;
		bool SnapCameraLocation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "CPP_Default_SnapCameraLocation", "false" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_LeftShoulder_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LeftShoulder;
	static void NewProp_SnapCameraLocation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SnapCameraLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerCharacter_SetThirdPersonShoulder_Statics::NewProp_LeftShoulder_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventSetThirdPersonShoulder_Parms*)Obj)->LeftShoulder = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_SetThirdPersonShoulder_Statics::NewProp_LeftShoulder = { "LeftShoulder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventSetThirdPersonShoulder_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_SetThirdPersonShoulder_Statics::NewProp_LeftShoulder_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMultiplayerCharacter_SetThirdPersonShoulder_Statics::NewProp_SnapCameraLocation_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventSetThirdPersonShoulder_Parms*)Obj)->SnapCameraLocation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_SetThirdPersonShoulder_Statics::NewProp_SnapCameraLocation = { "SnapCameraLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventSetThirdPersonShoulder_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_SetThirdPersonShoulder_Statics::NewProp_SnapCameraLocation_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_SetThirdPersonShoulder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_SetThirdPersonShoulder_Statics::NewProp_LeftShoulder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_SetThirdPersonShoulder_Statics::NewProp_SnapCameraLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetThirdPersonShoulder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_SetThirdPersonShoulder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "SetThirdPersonShoulder", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_SetThirdPersonShoulder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetThirdPersonShoulder_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_SetThirdPersonShoulder_Statics::MultiplayerCharacter_eventSetThirdPersonShoulder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetThirdPersonShoulder_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_SetThirdPersonShoulder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_SetThirdPersonShoulder_Statics::MultiplayerCharacter_eventSetThirdPersonShoulder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_SetThirdPersonShoulder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_SetThirdPersonShoulder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execSetThirdPersonShoulder)
{
	P_GET_UBOOL(Z_Param_LeftShoulder);
	P_GET_UBOOL(Z_Param_SnapCameraLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetThirdPersonShoulder(Z_Param_LeftShoulder,Z_Param_SnapCameraLocation);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function SetThirdPersonShoulder

// Begin Class AMultiplayerCharacter Function SetThirdPersonShoulder_BP
struct MultiplayerCharacter_eventSetThirdPersonShoulder_BP_Parms
{
	bool LeftShoulder;
	bool SnapCameraLocation;
};
static const FName NAME_AMultiplayerCharacter_SetThirdPersonShoulder_BP = FName(TEXT("SetThirdPersonShoulder_BP"));
void AMultiplayerCharacter::SetThirdPersonShoulder_BP(bool LeftShoulder, bool SnapCameraLocation)
{
	MultiplayerCharacter_eventSetThirdPersonShoulder_BP_Parms Parms;
	Parms.LeftShoulder=LeftShoulder ? true : false;
	Parms.SnapCameraLocation=SnapCameraLocation ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_SetThirdPersonShoulder_BP);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_SetThirdPersonShoulder_BP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "CPP_Default_SnapCameraLocation", "false" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_LeftShoulder_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LeftShoulder;
	static void NewProp_SnapCameraLocation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SnapCameraLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerCharacter_SetThirdPersonShoulder_BP_Statics::NewProp_LeftShoulder_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventSetThirdPersonShoulder_BP_Parms*)Obj)->LeftShoulder = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_SetThirdPersonShoulder_BP_Statics::NewProp_LeftShoulder = { "LeftShoulder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventSetThirdPersonShoulder_BP_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_SetThirdPersonShoulder_BP_Statics::NewProp_LeftShoulder_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMultiplayerCharacter_SetThirdPersonShoulder_BP_Statics::NewProp_SnapCameraLocation_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventSetThirdPersonShoulder_BP_Parms*)Obj)->SnapCameraLocation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_SetThirdPersonShoulder_BP_Statics::NewProp_SnapCameraLocation = { "SnapCameraLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventSetThirdPersonShoulder_BP_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_SetThirdPersonShoulder_BP_Statics::NewProp_SnapCameraLocation_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_SetThirdPersonShoulder_BP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_SetThirdPersonShoulder_BP_Statics::NewProp_LeftShoulder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_SetThirdPersonShoulder_BP_Statics::NewProp_SnapCameraLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetThirdPersonShoulder_BP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_SetThirdPersonShoulder_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "SetThirdPersonShoulder_BP", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_SetThirdPersonShoulder_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetThirdPersonShoulder_BP_Statics::PropPointers), sizeof(MultiplayerCharacter_eventSetThirdPersonShoulder_BP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetThirdPersonShoulder_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_SetThirdPersonShoulder_BP_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerCharacter_eventSetThirdPersonShoulder_BP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_SetThirdPersonShoulder_BP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_SetThirdPersonShoulder_BP_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AMultiplayerCharacter Function SetThirdPersonShoulder_BP

// Begin Class AMultiplayerCharacter Function SetupInput
static const FName NAME_AMultiplayerCharacter_SetupInput = FName(TEXT("SetupInput"));
void AMultiplayerCharacter::SetupInput()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_SetupInput);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_SetupInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_SetupInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "SetupInput", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetupInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_SetupInput_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_SetupInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_SetupInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execSetupInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetupInput_Implementation();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function SetupInput

// Begin Class AMultiplayerCharacter Function SetUseADS
struct Z_Construct_UFunction_AMultiplayerCharacter_SetUseADS_Statics
{
	struct MultiplayerCharacter_eventSetUseADS_Parms
	{
		int32 NewUseADS;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewUseADS;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_SetUseADS_Statics::NewProp_NewUseADS = { "NewUseADS", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventSetUseADS_Parms, NewUseADS), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_SetUseADS_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_SetUseADS_Statics::NewProp_NewUseADS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetUseADS_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_SetUseADS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "SetUseADS", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_SetUseADS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetUseADS_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_SetUseADS_Statics::MultiplayerCharacter_eventSetUseADS_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetUseADS_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_SetUseADS_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_SetUseADS_Statics::MultiplayerCharacter_eventSetUseADS_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_SetUseADS()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_SetUseADS_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execSetUseADS)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewUseADS);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUseADS(Z_Param_NewUseADS);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function SetUseADS

// Begin Class AMultiplayerCharacter Function SetUsingThirdPerson
struct Z_Construct_UFunction_AMultiplayerCharacter_SetUsingThirdPerson_Statics
{
	struct MultiplayerCharacter_eventSetUsingThirdPerson_Parms
	{
		bool NewUsingThirdPerson;
		bool SnapCameraLocation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "CPP_Default_SnapCameraLocation", "false" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewUsingThirdPerson_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewUsingThirdPerson;
	static void NewProp_SnapCameraLocation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SnapCameraLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerCharacter_SetUsingThirdPerson_Statics::NewProp_NewUsingThirdPerson_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventSetUsingThirdPerson_Parms*)Obj)->NewUsingThirdPerson = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_SetUsingThirdPerson_Statics::NewProp_NewUsingThirdPerson = { "NewUsingThirdPerson", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventSetUsingThirdPerson_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_SetUsingThirdPerson_Statics::NewProp_NewUsingThirdPerson_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMultiplayerCharacter_SetUsingThirdPerson_Statics::NewProp_SnapCameraLocation_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventSetUsingThirdPerson_Parms*)Obj)->SnapCameraLocation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_SetUsingThirdPerson_Statics::NewProp_SnapCameraLocation = { "SnapCameraLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventSetUsingThirdPerson_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_SetUsingThirdPerson_Statics::NewProp_SnapCameraLocation_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_SetUsingThirdPerson_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_SetUsingThirdPerson_Statics::NewProp_NewUsingThirdPerson,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_SetUsingThirdPerson_Statics::NewProp_SnapCameraLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetUsingThirdPerson_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_SetUsingThirdPerson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "SetUsingThirdPerson", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_SetUsingThirdPerson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetUsingThirdPerson_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_SetUsingThirdPerson_Statics::MultiplayerCharacter_eventSetUsingThirdPerson_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetUsingThirdPerson_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_SetUsingThirdPerson_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_SetUsingThirdPerson_Statics::MultiplayerCharacter_eventSetUsingThirdPerson_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_SetUsingThirdPerson()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_SetUsingThirdPerson_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execSetUsingThirdPerson)
{
	P_GET_UBOOL(Z_Param_NewUsingThirdPerson);
	P_GET_UBOOL(Z_Param_SnapCameraLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUsingThirdPerson(Z_Param_NewUsingThirdPerson,Z_Param_SnapCameraLocation);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function SetUsingThirdPerson

// Begin Class AMultiplayerCharacter Function SetWeaponVisibility
struct Z_Construct_UFunction_AMultiplayerCharacter_SetWeaponVisibility_Statics
{
	struct MultiplayerCharacter_eventSetWeaponVisibility_Parms
	{
		bool ApplyToAllWeapons;
		int32 WeaponVisibilityToChange;
		bool Visible;
		bool SetAllOtherWeaponsToOppositeVisibility;
		bool ApplyToArms;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "CPP_Default_ApplyToArms", "false" },
		{ "CPP_Default_SetAllOtherWeaponsToOppositeVisibility", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ApplyToAllWeapons_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ApplyToAllWeapons;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WeaponVisibilityToChange;
	static void NewProp_Visible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Visible;
	static void NewProp_SetAllOtherWeaponsToOppositeVisibility_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SetAllOtherWeaponsToOppositeVisibility;
	static void NewProp_ApplyToArms_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ApplyToArms;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerCharacter_SetWeaponVisibility_Statics::NewProp_ApplyToAllWeapons_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventSetWeaponVisibility_Parms*)Obj)->ApplyToAllWeapons = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_SetWeaponVisibility_Statics::NewProp_ApplyToAllWeapons = { "ApplyToAllWeapons", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventSetWeaponVisibility_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_SetWeaponVisibility_Statics::NewProp_ApplyToAllWeapons_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_SetWeaponVisibility_Statics::NewProp_WeaponVisibilityToChange = { "WeaponVisibilityToChange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventSetWeaponVisibility_Parms, WeaponVisibilityToChange), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMultiplayerCharacter_SetWeaponVisibility_Statics::NewProp_Visible_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventSetWeaponVisibility_Parms*)Obj)->Visible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_SetWeaponVisibility_Statics::NewProp_Visible = { "Visible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventSetWeaponVisibility_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_SetWeaponVisibility_Statics::NewProp_Visible_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMultiplayerCharacter_SetWeaponVisibility_Statics::NewProp_SetAllOtherWeaponsToOppositeVisibility_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventSetWeaponVisibility_Parms*)Obj)->SetAllOtherWeaponsToOppositeVisibility = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_SetWeaponVisibility_Statics::NewProp_SetAllOtherWeaponsToOppositeVisibility = { "SetAllOtherWeaponsToOppositeVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventSetWeaponVisibility_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_SetWeaponVisibility_Statics::NewProp_SetAllOtherWeaponsToOppositeVisibility_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMultiplayerCharacter_SetWeaponVisibility_Statics::NewProp_ApplyToArms_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventSetWeaponVisibility_Parms*)Obj)->ApplyToArms = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_SetWeaponVisibility_Statics::NewProp_ApplyToArms = { "ApplyToArms", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventSetWeaponVisibility_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_SetWeaponVisibility_Statics::NewProp_ApplyToArms_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_SetWeaponVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_SetWeaponVisibility_Statics::NewProp_ApplyToAllWeapons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_SetWeaponVisibility_Statics::NewProp_WeaponVisibilityToChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_SetWeaponVisibility_Statics::NewProp_Visible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_SetWeaponVisibility_Statics::NewProp_SetAllOtherWeaponsToOppositeVisibility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_SetWeaponVisibility_Statics::NewProp_ApplyToArms,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetWeaponVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_SetWeaponVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "SetWeaponVisibility", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_SetWeaponVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetWeaponVisibility_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_SetWeaponVisibility_Statics::MultiplayerCharacter_eventSetWeaponVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SetWeaponVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_SetWeaponVisibility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_SetWeaponVisibility_Statics::MultiplayerCharacter_eventSetWeaponVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_SetWeaponVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_SetWeaponVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execSetWeaponVisibility)
{
	P_GET_UBOOL(Z_Param_ApplyToAllWeapons);
	P_GET_PROPERTY(FIntProperty,Z_Param_WeaponVisibilityToChange);
	P_GET_UBOOL(Z_Param_Visible);
	P_GET_UBOOL(Z_Param_SetAllOtherWeaponsToOppositeVisibility);
	P_GET_UBOOL(Z_Param_ApplyToArms);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWeaponVisibility(Z_Param_ApplyToAllWeapons,Z_Param_WeaponVisibilityToChange,Z_Param_Visible,Z_Param_SetAllOtherWeaponsToOppositeVisibility,Z_Param_ApplyToArms);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function SetWeaponVisibility

// Begin Class AMultiplayerCharacter Function ShowHitMarker
struct MultiplayerCharacter_eventShowHitMarker_Parms
{
	AActor* HitActor;
	UPhysicalMaterial* HitPhysicalMaterial;
};
static const FName NAME_AMultiplayerCharacter_ShowHitMarker = FName(TEXT("ShowHitMarker"));
void AMultiplayerCharacter::ShowHitMarker(AActor* HitActor, UPhysicalMaterial* HitPhysicalMaterial)
{
	MultiplayerCharacter_eventShowHitMarker_Parms Parms;
	Parms.HitActor=HitActor;
	Parms.HitPhysicalMaterial=HitPhysicalMaterial;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_ShowHitMarker);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_ShowHitMarker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitPhysicalMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_ShowHitMarker_Statics::NewProp_HitActor = { "HitActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventShowHitMarker_Parms, HitActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_ShowHitMarker_Statics::NewProp_HitPhysicalMaterial = { "HitPhysicalMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventShowHitMarker_Parms, HitPhysicalMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_ShowHitMarker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_ShowHitMarker_Statics::NewProp_HitActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_ShowHitMarker_Statics::NewProp_HitPhysicalMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ShowHitMarker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_ShowHitMarker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "ShowHitMarker", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_ShowHitMarker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ShowHitMarker_Statics::PropPointers), sizeof(MultiplayerCharacter_eventShowHitMarker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ShowHitMarker_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_ShowHitMarker_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerCharacter_eventShowHitMarker_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_ShowHitMarker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_ShowHitMarker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execShowHitMarker)
{
	P_GET_OBJECT(AActor,Z_Param_HitActor);
	P_GET_OBJECT(UPhysicalMaterial,Z_Param_HitPhysicalMaterial);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowHitMarker_Implementation(Z_Param_HitActor,Z_Param_HitPhysicalMaterial);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function ShowHitMarker

// Begin Class AMultiplayerCharacter Function ShowHitMarker_BP
struct MultiplayerCharacter_eventShowHitMarker_BP_Parms
{
	AActor* HitActor;
	UPhysicalMaterial* HitPhysicalMaterial;
};
static const FName NAME_AMultiplayerCharacter_ShowHitMarker_BP = FName(TEXT("ShowHitMarker_BP"));
void AMultiplayerCharacter::ShowHitMarker_BP(AActor* HitActor, UPhysicalMaterial* HitPhysicalMaterial)
{
	MultiplayerCharacter_eventShowHitMarker_BP_Parms Parms;
	Parms.HitActor=HitActor;
	Parms.HitPhysicalMaterial=HitPhysicalMaterial;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_ShowHitMarker_BP);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_ShowHitMarker_BP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitPhysicalMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_ShowHitMarker_BP_Statics::NewProp_HitActor = { "HitActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventShowHitMarker_BP_Parms, HitActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_ShowHitMarker_BP_Statics::NewProp_HitPhysicalMaterial = { "HitPhysicalMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventShowHitMarker_BP_Parms, HitPhysicalMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_ShowHitMarker_BP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_ShowHitMarker_BP_Statics::NewProp_HitActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_ShowHitMarker_BP_Statics::NewProp_HitPhysicalMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ShowHitMarker_BP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_ShowHitMarker_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "ShowHitMarker_BP", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_ShowHitMarker_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ShowHitMarker_BP_Statics::PropPointers), sizeof(MultiplayerCharacter_eventShowHitMarker_BP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ShowHitMarker_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_ShowHitMarker_BP_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerCharacter_eventShowHitMarker_BP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_ShowHitMarker_BP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_ShowHitMarker_BP_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AMultiplayerCharacter Function ShowHitMarker_BP

// Begin Class AMultiplayerCharacter Function Sprint
struct Z_Construct_UFunction_AMultiplayerCharacter_Sprint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_Sprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "Sprint", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_Sprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_Sprint_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_Sprint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_Sprint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execSprint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Sprint();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function Sprint

// Begin Class AMultiplayerCharacter Function SprintInput
struct Z_Construct_UFunction_AMultiplayerCharacter_SprintInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_SprintInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "SprintInput", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SprintInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_SprintInput_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_SprintInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_SprintInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execSprintInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SprintInput();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function SprintInput

// Begin Class AMultiplayerCharacter Function StopAiming
struct Z_Construct_UFunction_AMultiplayerCharacter_StopAiming_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_StopAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "StopAiming", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_StopAiming_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_StopAiming_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_StopAiming()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_StopAiming_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execStopAiming)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopAiming();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function StopAiming

// Begin Class AMultiplayerCharacter Function StopFiring
struct Z_Construct_UFunction_AMultiplayerCharacter_StopFiring_Statics
{
	struct MultiplayerCharacter_eventStopFiring_Parms
	{
		bool EvenCancelBurst;
		bool ReturnToPreviousAnimation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "CPP_Default_EvenCancelBurst", "false" },
		{ "CPP_Default_ReturnToPreviousAnimation", "false" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_EvenCancelBurst_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EvenCancelBurst;
	static void NewProp_ReturnToPreviousAnimation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnToPreviousAnimation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerCharacter_StopFiring_Statics::NewProp_EvenCancelBurst_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventStopFiring_Parms*)Obj)->EvenCancelBurst = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_StopFiring_Statics::NewProp_EvenCancelBurst = { "EvenCancelBurst", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventStopFiring_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_StopFiring_Statics::NewProp_EvenCancelBurst_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMultiplayerCharacter_StopFiring_Statics::NewProp_ReturnToPreviousAnimation_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventStopFiring_Parms*)Obj)->ReturnToPreviousAnimation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_StopFiring_Statics::NewProp_ReturnToPreviousAnimation = { "ReturnToPreviousAnimation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventStopFiring_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_StopFiring_Statics::NewProp_ReturnToPreviousAnimation_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_StopFiring_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_StopFiring_Statics::NewProp_EvenCancelBurst,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_StopFiring_Statics::NewProp_ReturnToPreviousAnimation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_StopFiring_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_StopFiring_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "StopFiring", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_StopFiring_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_StopFiring_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_StopFiring_Statics::MultiplayerCharacter_eventStopFiring_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_StopFiring_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_StopFiring_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_StopFiring_Statics::MultiplayerCharacter_eventStopFiring_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_StopFiring()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_StopFiring_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execStopFiring)
{
	P_GET_UBOOL(Z_Param_EvenCancelBurst);
	P_GET_UBOOL(Z_Param_ReturnToPreviousAnimation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopFiring(Z_Param_EvenCancelBurst,Z_Param_ReturnToPreviousAnimation);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function StopFiring

// Begin Class AMultiplayerCharacter Function StopSprinting
struct Z_Construct_UFunction_AMultiplayerCharacter_StopSprinting_Statics
{
	struct MultiplayerCharacter_eventStopSprinting_Parms
	{
		bool SkipAnimation;
		bool IsInAir;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "CPP_Default_IsInAir", "false" },
		{ "CPP_Default_SkipAnimation", "false" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "Only set IsInAir to true if that is the reason the player stopped sprinting, not if they also happen to be in the air" },
	};
#endif // WITH_METADATA
	static void NewProp_SkipAnimation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SkipAnimation;
	static void NewProp_IsInAir_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsInAir;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerCharacter_StopSprinting_Statics::NewProp_SkipAnimation_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventStopSprinting_Parms*)Obj)->SkipAnimation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_StopSprinting_Statics::NewProp_SkipAnimation = { "SkipAnimation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventStopSprinting_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_StopSprinting_Statics::NewProp_SkipAnimation_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMultiplayerCharacter_StopSprinting_Statics::NewProp_IsInAir_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventStopSprinting_Parms*)Obj)->IsInAir = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_StopSprinting_Statics::NewProp_IsInAir = { "IsInAir", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventStopSprinting_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_StopSprinting_Statics::NewProp_IsInAir_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_StopSprinting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_StopSprinting_Statics::NewProp_SkipAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_StopSprinting_Statics::NewProp_IsInAir,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_StopSprinting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_StopSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "StopSprinting", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_StopSprinting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_StopSprinting_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_StopSprinting_Statics::MultiplayerCharacter_eventStopSprinting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_StopSprinting_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_StopSprinting_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_StopSprinting_Statics::MultiplayerCharacter_eventStopSprinting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_StopSprinting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_StopSprinting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execStopSprinting)
{
	P_GET_UBOOL(Z_Param_SkipAnimation);
	P_GET_UBOOL(Z_Param_IsInAir);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopSprinting(Z_Param_SkipAnimation,Z_Param_IsInAir);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function StopSprinting

// Begin Class AMultiplayerCharacter Function StopSprinting1
struct Z_Construct_UFunction_AMultiplayerCharacter_StopSprinting1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_StopSprinting1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "StopSprinting1", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_StopSprinting1_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_StopSprinting1_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_StopSprinting1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_StopSprinting1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execStopSprinting1)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopSprinting1();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function StopSprinting1

// Begin Class AMultiplayerCharacter Function SwapShoulders
struct Z_Construct_UFunction_AMultiplayerCharacter_SwapShoulders_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_SwapShoulders_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "SwapShoulders", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SwapShoulders_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_SwapShoulders_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_SwapShoulders()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_SwapShoulders_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execSwapShoulders)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwapShoulders();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function SwapShoulders

// Begin Class AMultiplayerCharacter Function SwitchPerspective_BP
struct MultiplayerCharacter_eventSwitchPerspective_BP_Parms
{
	bool NewUsingThirdPerson;
	bool SnapCameraLocation;
};
static const FName NAME_AMultiplayerCharacter_SwitchPerspective_BP = FName(TEXT("SwitchPerspective_BP"));
void AMultiplayerCharacter::SwitchPerspective_BP(bool NewUsingThirdPerson, bool SnapCameraLocation)
{
	MultiplayerCharacter_eventSwitchPerspective_BP_Parms Parms;
	Parms.NewUsingThirdPerson=NewUsingThirdPerson ? true : false;
	Parms.SnapCameraLocation=SnapCameraLocation ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_SwitchPerspective_BP);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_SwitchPerspective_BP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "CPP_Default_SnapCameraLocation", "false" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewUsingThirdPerson_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewUsingThirdPerson;
	static void NewProp_SnapCameraLocation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SnapCameraLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerCharacter_SwitchPerspective_BP_Statics::NewProp_NewUsingThirdPerson_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventSwitchPerspective_BP_Parms*)Obj)->NewUsingThirdPerson = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_SwitchPerspective_BP_Statics::NewProp_NewUsingThirdPerson = { "NewUsingThirdPerson", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventSwitchPerspective_BP_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_SwitchPerspective_BP_Statics::NewProp_NewUsingThirdPerson_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMultiplayerCharacter_SwitchPerspective_BP_Statics::NewProp_SnapCameraLocation_SetBit(void* Obj)
{
	((MultiplayerCharacter_eventSwitchPerspective_BP_Parms*)Obj)->SnapCameraLocation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_SwitchPerspective_BP_Statics::NewProp_SnapCameraLocation = { "SnapCameraLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerCharacter_eventSwitchPerspective_BP_Parms), &Z_Construct_UFunction_AMultiplayerCharacter_SwitchPerspective_BP_Statics::NewProp_SnapCameraLocation_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_SwitchPerspective_BP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_SwitchPerspective_BP_Statics::NewProp_NewUsingThirdPerson,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_SwitchPerspective_BP_Statics::NewProp_SnapCameraLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SwitchPerspective_BP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_SwitchPerspective_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "SwitchPerspective_BP", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_SwitchPerspective_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SwitchPerspective_BP_Statics::PropPointers), sizeof(MultiplayerCharacter_eventSwitchPerspective_BP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SwitchPerspective_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_SwitchPerspective_BP_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerCharacter_eventSwitchPerspective_BP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_SwitchPerspective_BP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_SwitchPerspective_BP_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AMultiplayerCharacter Function SwitchPerspective_BP

// Begin Class AMultiplayerCharacter Function SwitchToWeapon1
struct Z_Construct_UFunction_AMultiplayerCharacter_SwitchToWeapon1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_SwitchToWeapon1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "SwitchToWeapon1", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SwitchToWeapon1_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_SwitchToWeapon1_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_SwitchToWeapon1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_SwitchToWeapon1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execSwitchToWeapon1)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchToWeapon1();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function SwitchToWeapon1

// Begin Class AMultiplayerCharacter Function SwitchToWeapon2
struct Z_Construct_UFunction_AMultiplayerCharacter_SwitchToWeapon2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_SwitchToWeapon2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "SwitchToWeapon2", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SwitchToWeapon2_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_SwitchToWeapon2_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_SwitchToWeapon2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_SwitchToWeapon2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execSwitchToWeapon2)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchToWeapon2();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function SwitchToWeapon2

// Begin Class AMultiplayerCharacter Function SwitchWeapons
struct Z_Construct_UFunction_AMultiplayerCharacter_SwitchWeapons_Statics
{
	struct MultiplayerCharacter_eventSwitchWeapons_Parms
	{
		int32 Index;
		AMultiplayerGun* WeaponToSwitchTo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "CPP_Default_WeaponToSwitchTo", "None" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponToSwitchTo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_SwitchWeapons_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventSwitchWeapons_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_SwitchWeapons_Statics::NewProp_WeaponToSwitchTo = { "WeaponToSwitchTo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerCharacter_eventSwitchWeapons_Parms, WeaponToSwitchTo), Z_Construct_UClass_AMultiplayerGun_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_SwitchWeapons_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_SwitchWeapons_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_SwitchWeapons_Statics::NewProp_WeaponToSwitchTo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SwitchWeapons_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_SwitchWeapons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "SwitchWeapons", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerCharacter_SwitchWeapons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SwitchWeapons_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerCharacter_SwitchWeapons_Statics::MultiplayerCharacter_eventSwitchWeapons_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SwitchWeapons_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_SwitchWeapons_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerCharacter_SwitchWeapons_Statics::MultiplayerCharacter_eventSwitchWeapons_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_SwitchWeapons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_SwitchWeapons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execSwitchWeapons)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_OBJECT(AMultiplayerGun,Z_Param_WeaponToSwitchTo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchWeapons(Z_Param_Index,Z_Param_WeaponToSwitchTo);
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function SwitchWeapons

// Begin Class AMultiplayerCharacter Function SwitchWeapons1
struct Z_Construct_UFunction_AMultiplayerCharacter_SwitchWeapons1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_SwitchWeapons1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "SwitchWeapons1", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_SwitchWeapons1_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_SwitchWeapons1_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_SwitchWeapons1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_SwitchWeapons1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execSwitchWeapons1)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchWeapons1();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function SwitchWeapons1

// Begin Class AMultiplayerCharacter Function ToggleThirdPerson
struct Z_Construct_UFunction_AMultiplayerCharacter_ToggleThirdPerson_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_ToggleThirdPerson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "ToggleThirdPerson", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ToggleThirdPerson_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_ToggleThirdPerson_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_ToggleThirdPerson()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_ToggleThirdPerson_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execToggleThirdPerson)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleThirdPerson();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function ToggleThirdPerson

// Begin Class AMultiplayerCharacter Function ToggleWeaponHolstered
struct Z_Construct_UFunction_AMultiplayerCharacter_ToggleWeaponHolstered_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_ToggleWeaponHolstered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "ToggleWeaponHolstered", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ToggleWeaponHolstered_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_ToggleWeaponHolstered_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_ToggleWeaponHolstered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_ToggleWeaponHolstered_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execToggleWeaponHolstered)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleWeaponHolstered();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function ToggleWeaponHolstered

// Begin Class AMultiplayerCharacter Function UnHolsterWeapon_BP
static const FName NAME_AMultiplayerCharacter_UnHolsterWeapon_BP = FName(TEXT("UnHolsterWeapon_BP"));
void AMultiplayerCharacter::UnHolsterWeapon_BP()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerCharacter_UnHolsterWeapon_BP);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerCharacter_UnHolsterWeapon_BP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "This executes after the C++ function" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_UnHolsterWeapon_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "UnHolsterWeapon_BP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_UnHolsterWeapon_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_UnHolsterWeapon_BP_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_UnHolsterWeapon_BP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_UnHolsterWeapon_BP_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AMultiplayerCharacter Function UnHolsterWeapon_BP

// Begin Class AMultiplayerCharacter Function UnHolsterWeapons
struct Z_Construct_UFunction_AMultiplayerCharacter_UnHolsterWeapons_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_UnHolsterWeapons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "UnHolsterWeapons", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_UnHolsterWeapons_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_UnHolsterWeapons_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_UnHolsterWeapons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_UnHolsterWeapons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execUnHolsterWeapons)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnHolsterWeapons();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function UnHolsterWeapons

// Begin Class AMultiplayerCharacter Function UnHolsterWeapons1
struct Z_Construct_UFunction_AMultiplayerCharacter_UnHolsterWeapons1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_UnHolsterWeapons1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "UnHolsterWeapons1", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_UnHolsterWeapons1_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerCharacter_UnHolsterWeapons1_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerCharacter_UnHolsterWeapons1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_UnHolsterWeapons1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerCharacter::execUnHolsterWeapons1)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnHolsterWeapons1();
	P_NATIVE_END;
}
// End Class AMultiplayerCharacter Function UnHolsterWeapons1

// Begin Class AMultiplayerCharacter
void AMultiplayerCharacter::StaticRegisterNativesAMultiplayerCharacter()
{
	UClass* Class = AMultiplayerCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddWeapon", &AMultiplayerCharacter::execAddWeapon },
		{ "Aim", &AMultiplayerCharacter::execAim },
		{ "AimInput", &AMultiplayerCharacter::execAimInput },
		{ "ApplyPerspectiveVisibility", &AMultiplayerCharacter::execApplyPerspectiveVisibility },
		{ "ApplySettings", &AMultiplayerCharacter::execApplySettings },
		{ "CancelReload", &AMultiplayerCharacter::execCancelReload },
		{ "CheckIfCanSprint", &AMultiplayerCharacter::execCheckIfCanSprint },
		{ "CheckIfCanSprintNoReturn", &AMultiplayerCharacter::execCheckIfCanSprintNoReturn },
		{ "ClientApplyPerspectiveVisibility", &AMultiplayerCharacter::execClientApplyPerspectiveVisibility },
		{ "ClientDie", &AMultiplayerCharacter::execClientDie },
		{ "ClientInteract", &AMultiplayerCharacter::execClientInteract },
		{ "ClientOnTakeDamage", &AMultiplayerCharacter::execClientOnTakeDamage },
		{ "ClientRemoveInput", &AMultiplayerCharacter::execClientRemoveInput },
		{ "ClientSetThirdPersonShoulder", &AMultiplayerCharacter::execClientSetThirdPersonShoulder },
		{ "ClientSetupInput", &AMultiplayerCharacter::execClientSetupInput },
		{ "ClientSetUsingThirdPerson", &AMultiplayerCharacter::execClientSetUsingThirdPerson },
		{ "DestroySelf", &AMultiplayerCharacter::execDestroySelf },
		{ "Die", &AMultiplayerCharacter::execDie },
		{ "Die1", &AMultiplayerCharacter::execDie1 },
		{ "Fire", &AMultiplayerCharacter::execFire },
		{ "GetAllSharedCaliberAmounts", &AMultiplayerCharacter::execGetAllSharedCaliberAmounts },
		{ "GetAllSharedCaliberNames", &AMultiplayerCharacter::execGetAllSharedCaliberNames },
		{ "GetAllSharedCalibers", &AMultiplayerCharacter::execGetAllSharedCalibers },
		{ "GetAllWeapons", &AMultiplayerCharacter::execGetAllWeapons },
		{ "GetAmountOfWeapons", &AMultiplayerCharacter::execGetAmountOfWeapons },
		{ "GetCanAim", &AMultiplayerCharacter::execGetCanAim },
		{ "GetCanInteract", &AMultiplayerCharacter::execGetCanInteract },
		{ "GetCanShoot", &AMultiplayerCharacter::execGetCanShoot },
		{ "GetHasWeapon", &AMultiplayerCharacter::execGetHasWeapon },
		{ "GetHealth", &AMultiplayerCharacter::execGetHealth },
		{ "GetHealthComponent", &AMultiplayerCharacter::execGetHealthComponent },
		{ "GetInteractableBeingOverlapped", &AMultiplayerCharacter::execGetInteractableBeingOverlapped },
		{ "GetInteractDistance", &AMultiplayerCharacter::execGetInteractDistance },
		{ "GetIsADSing", &AMultiplayerCharacter::execGetIsADSing },
		{ "GetIsAiming", &AMultiplayerCharacter::execGetIsAiming },
		{ "GetIsDead", &AMultiplayerCharacter::execGetIsDead },
		{ "GetIsFiring", &AMultiplayerCharacter::execGetIsFiring },
		{ "GetIsWeaponHolstered", &AMultiplayerCharacter::execGetIsWeaponHolstered },
		{ "GetIsZoomedIn", &AMultiplayerCharacter::execGetIsZoomedIn },
		{ "GetMaxWeaponAmount", &AMultiplayerCharacter::execGetMaxWeaponAmount },
		{ "GetOverlappingInteractable", &AMultiplayerCharacter::execGetOverlappingInteractable },
		{ "GetOwningController", &AMultiplayerCharacter::execGetOwningController },
		{ "GetPlayerModelMesh", &AMultiplayerCharacter::execGetPlayerModelMesh },
		{ "GetSharedCaliberAmount", &AMultiplayerCharacter::execGetSharedCaliberAmount },
		{ "GetSharedCaliberName", &AMultiplayerCharacter::execGetSharedCaliberName },
		{ "GetThirdPersonSpringArmLength", &AMultiplayerCharacter::execGetThirdPersonSpringArmLength },
		{ "GetUseADS", &AMultiplayerCharacter::execGetUseADS },
		{ "GetUsingThirdPerson", &AMultiplayerCharacter::execGetUsingThirdPerson },
		{ "GetWeapon", &AMultiplayerCharacter::execGetWeapon },
		{ "GetWeaponIndex", &AMultiplayerCharacter::execGetWeaponIndex },
		{ "GiveLoadout", &AMultiplayerCharacter::execGiveLoadout },
		{ "GiveWeapon", &AMultiplayerCharacter::execGiveWeapon },
		{ "HolsterWeapons", &AMultiplayerCharacter::execHolsterWeapons },
		{ "HolsterWeapons1", &AMultiplayerCharacter::execHolsterWeapons1 },
		{ "Interact", &AMultiplayerCharacter::execInteract },
		{ "InteractReplicated", &AMultiplayerCharacter::execInteractReplicated },
		{ "LastWeapon", &AMultiplayerCharacter::execLastWeapon },
		{ "MulticastAddWeapon", &AMultiplayerCharacter::execMulticastAddWeapon },
		{ "MulticastAim", &AMultiplayerCharacter::execMulticastAim },
		{ "MulticastCancelReload", &AMultiplayerCharacter::execMulticastCancelReload },
		{ "MulticastGiveWeapon", &AMultiplayerCharacter::execMulticastGiveWeapon },
		{ "MulticastHolsterWeapons", &AMultiplayerCharacter::execMulticastHolsterWeapons },
		{ "MulticastHolsterWeapons1", &AMultiplayerCharacter::execMulticastHolsterWeapons1 },
		{ "MulticastInteract", &AMultiplayerCharacter::execMulticastInteract },
		{ "MulticastLastWeapon", &AMultiplayerCharacter::execMulticastLastWeapon },
		{ "MulticastNextWeapon", &AMultiplayerCharacter::execMulticastNextWeapon },
		{ "MulticastPickupItem", &AMultiplayerCharacter::execMulticastPickupItem },
		{ "MulticastReload", &AMultiplayerCharacter::execMulticastReload },
		{ "MulticastReload1", &AMultiplayerCharacter::execMulticastReload1 },
		{ "MulticastReload2", &AMultiplayerCharacter::execMulticastReload2 },
		{ "MulticastRemoveWeapon", &AMultiplayerCharacter::execMulticastRemoveWeapon },
		{ "MulticastReplicateCameraTransform", &AMultiplayerCharacter::execMulticastReplicateCameraTransform },
		{ "MulticastReplicateControlRotation", &AMultiplayerCharacter::execMulticastReplicateControlRotation },
		{ "MulticastSetCanInteract", &AMultiplayerCharacter::execMulticastSetCanInteract },
		{ "MulticastSetCanShoot", &AMultiplayerCharacter::execMulticastSetCanShoot },
		{ "MulticastSetThirdPersonShoulder", &AMultiplayerCharacter::execMulticastSetThirdPersonShoulder },
		{ "MulticastSetUsingThirdPerson", &AMultiplayerCharacter::execMulticastSetUsingThirdPerson },
		{ "MulticastStopAiming", &AMultiplayerCharacter::execMulticastStopAiming },
		{ "MulticastSwitchWeapons", &AMultiplayerCharacter::execMulticastSwitchWeapons },
		{ "MulticastSwitchWeapons1", &AMultiplayerCharacter::execMulticastSwitchWeapons1 },
		{ "MulticastUnHolsterWeapons", &AMultiplayerCharacter::execMulticastUnHolsterWeapons },
		{ "MulticastUnHolsterWeapons1", &AMultiplayerCharacter::execMulticastUnHolsterWeapons1 },
		{ "NextWeapon", &AMultiplayerCharacter::execNextWeapon },
		{ "OnTakeDamage", &AMultiplayerCharacter::execOnTakeDamage },
		{ "PickupItem", &AMultiplayerCharacter::execPickupItem },
		{ "PlayArmsAnimation", &AMultiplayerCharacter::execPlayArmsAnimation },
		{ "PlaySprintAnimation", &AMultiplayerCharacter::execPlaySprintAnimation },
		{ "PressFireInput", &AMultiplayerCharacter::execPressFireInput },
		{ "PrintStringForOwningControllerInvalid", &AMultiplayerCharacter::execPrintStringForOwningControllerInvalid },
		{ "ReleaseAimInput", &AMultiplayerCharacter::execReleaseAimInput },
		{ "ReleaseFireInput", &AMultiplayerCharacter::execReleaseFireInput },
		{ "ReleaseSprintInput", &AMultiplayerCharacter::execReleaseSprintInput },
		{ "Reload", &AMultiplayerCharacter::execReload },
		{ "Reload1", &AMultiplayerCharacter::execReload1 },
		{ "Reload2", &AMultiplayerCharacter::execReload2 },
		{ "RemoveInput", &AMultiplayerCharacter::execRemoveInput },
		{ "RemoveWeapon", &AMultiplayerCharacter::execRemoveWeapon },
		{ "RemoveWeaponPastIndex", &AMultiplayerCharacter::execRemoveWeaponPastIndex },
		{ "ReplicateCameraTransform", &AMultiplayerCharacter::execReplicateCameraTransform },
		{ "ServerAddWeapon", &AMultiplayerCharacter::execServerAddWeapon },
		{ "ServerAim", &AMultiplayerCharacter::execServerAim },
		{ "ServerCancelReload", &AMultiplayerCharacter::execServerCancelReload },
		{ "ServerDie1", &AMultiplayerCharacter::execServerDie1 },
		{ "ServerGiveLoadout", &AMultiplayerCharacter::execServerGiveLoadout },
		{ "ServerHolsterWeapons", &AMultiplayerCharacter::execServerHolsterWeapons },
		{ "ServerHolsterWeapons1", &AMultiplayerCharacter::execServerHolsterWeapons1 },
		{ "ServerInteract", &AMultiplayerCharacter::execServerInteract },
		{ "ServerLastWeapon", &AMultiplayerCharacter::execServerLastWeapon },
		{ "ServerNextWeapon", &AMultiplayerCharacter::execServerNextWeapon },
		{ "ServerPickupItem", &AMultiplayerCharacter::execServerPickupItem },
		{ "ServerReload", &AMultiplayerCharacter::execServerReload },
		{ "ServerReload1", &AMultiplayerCharacter::execServerReload1 },
		{ "ServerReload2", &AMultiplayerCharacter::execServerReload2 },
		{ "ServerRemoveWeapon", &AMultiplayerCharacter::execServerRemoveWeapon },
		{ "ServerReplicateCameraTransform", &AMultiplayerCharacter::execServerReplicateCameraTransform },
		{ "ServerReplicateControlRotation", &AMultiplayerCharacter::execServerReplicateControlRotation },
		{ "ServerSetCanInteract", &AMultiplayerCharacter::execServerSetCanInteract },
		{ "ServerSetCanShoot", &AMultiplayerCharacter::execServerSetCanShoot },
		{ "ServerSetThirdPersonShoulder", &AMultiplayerCharacter::execServerSetThirdPersonShoulder },
		{ "ServerSetUsingThirdPerson", &AMultiplayerCharacter::execServerSetUsingThirdPerson },
		{ "ServerSprint", &AMultiplayerCharacter::execServerSprint },
		{ "ServerStopAiming", &AMultiplayerCharacter::execServerStopAiming },
		{ "ServerStopSprinting", &AMultiplayerCharacter::execServerStopSprinting },
		{ "ServerSwitchWeapons", &AMultiplayerCharacter::execServerSwitchWeapons },
		{ "ServerSwitchWeapons1", &AMultiplayerCharacter::execServerSwitchWeapons1 },
		{ "ServerUnHolsterWeapons", &AMultiplayerCharacter::execServerUnHolsterWeapons },
		{ "ServerUnHolsterWeapons1", &AMultiplayerCharacter::execServerUnHolsterWeapons1 },
		{ "SetAllSharedCalibers", &AMultiplayerCharacter::execSetAllSharedCalibers },
		{ "SetArmsAnimationMode", &AMultiplayerCharacter::execSetArmsAnimationMode },
		{ "SetArmsAnimationMode1", &AMultiplayerCharacter::execSetArmsAnimationMode1 },
		{ "SetCanAim", &AMultiplayerCharacter::execSetCanAim },
		{ "SetCanInteract", &AMultiplayerCharacter::execSetCanInteract },
		{ "SetCanShoot", &AMultiplayerCharacter::execSetCanShoot },
		{ "SetInteractableBeingOverlapped", &AMultiplayerCharacter::execSetInteractableBeingOverlapped },
		{ "SetInteractDistance", &AMultiplayerCharacter::execSetInteractDistance },
		{ "SetIsADSing", &AMultiplayerCharacter::execSetIsADSing },
		{ "SetIsAiming", &AMultiplayerCharacter::execSetIsAiming },
		{ "SetIsFiring", &AMultiplayerCharacter::execSetIsFiring },
		{ "SetIsZoomedIn", &AMultiplayerCharacter::execSetIsZoomedIn },
		{ "SetMovementSpeedBasedOnSettings", &AMultiplayerCharacter::execSetMovementSpeedBasedOnSettings },
		{ "SetOverlappingInteractable", &AMultiplayerCharacter::execSetOverlappingInteractable },
		{ "SetOwningController", &AMultiplayerCharacter::execSetOwningController },
		{ "SetPlayerModelAnimationMode", &AMultiplayerCharacter::execSetPlayerModelAnimationMode },
		{ "SetPlayerModelAnimationMode1", &AMultiplayerCharacter::execSetPlayerModelAnimationMode1 },
		{ "SetSensitivity", &AMultiplayerCharacter::execSetSensitivity },
		{ "SetSharedCaliberAmount", &AMultiplayerCharacter::execSetSharedCaliberAmount },
		{ "SetSharedCaliberName", &AMultiplayerCharacter::execSetSharedCaliberName },
		{ "SetThirdPersonShoulder", &AMultiplayerCharacter::execSetThirdPersonShoulder },
		{ "SetupInput", &AMultiplayerCharacter::execSetupInput },
		{ "SetUseADS", &AMultiplayerCharacter::execSetUseADS },
		{ "SetUsingThirdPerson", &AMultiplayerCharacter::execSetUsingThirdPerson },
		{ "SetWeaponVisibility", &AMultiplayerCharacter::execSetWeaponVisibility },
		{ "ShowHitMarker", &AMultiplayerCharacter::execShowHitMarker },
		{ "Sprint", &AMultiplayerCharacter::execSprint },
		{ "SprintInput", &AMultiplayerCharacter::execSprintInput },
		{ "StopAiming", &AMultiplayerCharacter::execStopAiming },
		{ "StopFiring", &AMultiplayerCharacter::execStopFiring },
		{ "StopSprinting", &AMultiplayerCharacter::execStopSprinting },
		{ "StopSprinting1", &AMultiplayerCharacter::execStopSprinting1 },
		{ "SwapShoulders", &AMultiplayerCharacter::execSwapShoulders },
		{ "SwitchToWeapon1", &AMultiplayerCharacter::execSwitchToWeapon1 },
		{ "SwitchToWeapon2", &AMultiplayerCharacter::execSwitchToWeapon2 },
		{ "SwitchWeapons", &AMultiplayerCharacter::execSwitchWeapons },
		{ "SwitchWeapons1", &AMultiplayerCharacter::execSwitchWeapons1 },
		{ "ToggleThirdPerson", &AMultiplayerCharacter::execToggleThirdPerson },
		{ "ToggleWeaponHolstered", &AMultiplayerCharacter::execToggleWeaponHolstered },
		{ "UnHolsterWeapons", &AMultiplayerCharacter::execUnHolsterWeapons },
		{ "UnHolsterWeapons1", &AMultiplayerCharacter::execUnHolsterWeapons1 },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMultiplayerCharacter);
UClass* Z_Construct_UClass_AMultiplayerCharacter_NoRegister()
{
	return AMultiplayerCharacter::StaticClass();
}
struct Z_Construct_UClass_AMultiplayerCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MultiplayerCharacter.h" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IMC_Default_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IMC_Priority_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Move_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Look_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_GamepadLook_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Interact_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Jump_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Fire_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Aim_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Reload_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_NextWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_PreviousWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_GamepadSwitchWeapons_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_SwitchPerspective_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_ThirdPersonShoulderSwap_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_SwitchToWeapon1_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_SwitchToWeapon2_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_ToggleWeaponHolstered_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Sprint_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmParent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "To change this either change it in C++ or in the construction script" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmsMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonPlayerModel_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementVector_MetaData[] = {
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoldingMoveInput_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppliedPerspectiveVisibilityOnClient_MetaData[] = {
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWeaponIndex_MetaData[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldOfView_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "Set this variable in the player controller, not here" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseDefaultSensitivityX_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "Mouse sensitivity on the X axis when not aiming, set this variable in the player controller, not here" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseAimingSensitivityX_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "Mouse sensitivity on the X axis when aiming, only applies if UseAimSensitivityMultipler is false, set this variable in the player controller, not here" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseDefaultSensitivityY_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "Mouse sensitivity on the Y axis when not aiming, set this variable in the player controller, not here" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseAimingSensitivityY_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "Mouse sensitivity on the Y axis when aiming, only applies if UseAimSensitivityMultipler is false, set this variable in the player controller, not here" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseAimingSensitivityMultiplier_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "Set this variable in the player controller, not here" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GamepadDefaultSensitivityX_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "Gamepad sensitivity on the X axis when not aiming, set this variable in the player controller, not here" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GamepadAimingSensitivityX_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "Gamepad sensitivity on the X axis when aiming, only applies if UseAimSensitivityMultipler is false, set this variable in the player controller, not here" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GamepadDefaultSensitivityY_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "Gamepad sensitivity on the Y axis when not aiming, set this variable in the player controller, not here" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GamepadAimingSensitivityY_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "Gamepad sensitivity on the Y axis when aiming, only applies if UseAimSensitivityMultipler is false, set this variable in the player controller, not here" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GamepadAimingSensitivityMultiplier_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "Set this variable in the player controller, not here" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseAimSensitivityMultipler_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "Set this variable in the player controller, not here" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToggleAim_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "Set this variable in the player controller, not here" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoldButtonToJump_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "Set this variable in the player controller, not here" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMovementSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintingMovementSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplySpeedPenaltyIfWeaponsHolstered_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "If false this will completely remove weapon speed penalties while the weapon is holstered" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanSprint_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "This is for specific situations, for example the player gets stunned and can't sprint, if you don't want the player to be able to sprint even after respawns or just at all it would be better to set the CanSprint variable in the player controller" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToggleSprint_MetaData[] = {
		{ "Category", "Movement" },
		{ "ClampMax", "2" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "0 = Hold to sprint, 1 = Tap to go to sprint (tapping again will not stop sprinting), 2 = Tap to sprint and tap again to stop sprinting, set this in the player controller" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoldingSprintInput_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintCancelsReload_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FiringCancelsSprint_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimingCancelsSprint_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShouldHolsterWeaponsWhenSprinting_MetaData[] = {
		{ "Category", "Movement" },
		{ "ClampMax", "2" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "0 = no, 1 = will holster when sprinting and un holster when un sprinting, 2 = yes and keep holstered" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanOnlySprintWhileMovingForward_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinInputToSprint_MetaData[] = {
		{ "Category", "Movement" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "This only applies to controller" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinSpeedToStartSprinting_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsSprinting_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShouldGoBackToSprinting_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeToPlaySprintAnimationAfterFire_MetaData[] = {
		{ "Category", "Movement" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "This is the time it will take to return to the sprint animation after firing, this only applies if FiringCancelsSprint = false" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseActorClassesForHitMarkers_MetaData[] = {
		{ "Category", "Hit Effects" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanGetHitMarkersOnSelf_MetaData[] = {
		{ "Category", "Hit Effects" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitMarkerActorSounds_MetaData[] = {
		{ "Category", "Hit Effects" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitMarkerSurfaceSounds_MetaData[] = {
		{ "Category", "Hit Effects" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerIndex_MetaData[] = {
		{ "Category", "Player Info" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningController_MetaData[] = {
		{ "Category", "Player Info" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningControllerCast_MetaData[] = {
		{ "Category", "Player Info" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedCameraLocation_MetaData[] = {
		{ "Category", "Player Info" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedCameraRotation_MetaData[] = {
		{ "Category", "Player Info" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedControlRotation_MetaData[] = {
		{ "Category", "Player Info" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UsingThirdPerson_MetaData[] = {
		{ "Category", "Perspective" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "Set this to true if you want third person to be default, set this in the player controller" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsSwitchingPerspective_MetaData[] = {
		{ "Category", "Perspective" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UsingThirdPersonLeftShoulder_MetaData[] = {
		{ "Category", "Perspective" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "Set this to true to default it to the left shoulder, set this in the player controller" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonSpringArmLength_MetaData[] = {
		{ "Category", "Perspective" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonSpringArmLengthRight_MetaData[] = {
		{ "Category", "Perspective" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "This is for the right shoulder" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonSpringArmLengthLeft_MetaData[] = {
		{ "Category", "Perspective" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "This is for the left shoulder" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonSpringArmLocation_MetaData[] = {
		{ "Category", "Perspective" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonSpringArmLocationRight_MetaData[] = {
		{ "Category", "Perspective" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "This is for the right shoulder" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonSpringArmLocationLeft_MetaData[] = {
		{ "Category", "Perspective" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "This is for the left shoulder" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachSpringArmToPlayerModelFirstPerson_MetaData[] = {
		{ "Category", "Perspective" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketToAttachSpringArmToFirstPerson_MetaData[] = {
		{ "Category", "Perspective" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonPlayerModelMesh_MetaData[] = {
		{ "Category", "Perspective" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonPlayerModelWithoutWeapons_MetaData[] = {
		{ "Category", "Perspective" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraLag_MetaData[] = {
		{ "Category", "Perspective" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraRotationLag_MetaData[] = {
		{ "Category", "Perspective" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraLagSpeed_MetaData[] = {
		{ "Category", "Perspective" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraRotationLagSpeed_MetaData[] = {
		{ "Category", "Perspective" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonCameraLag_MetaData[] = {
		{ "Category", "Perspective" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonCameraRotationLag_MetaData[] = {
		{ "Category", "Perspective" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonCameraLagSpeed_MetaData[] = {
		{ "Category", "Perspective" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonCameraRotationLagSpeed_MetaData[] = {
		{ "Category", "Perspective" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerspectiveTransitionTime_MetaData[] = {
		{ "Category", "Perspective" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShoulderSwapTime_MetaData[] = {
		{ "Category", "Perspective" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HidePlayerModelMeshInFirstPerson_MetaData[] = {
		{ "Category", "Perspective" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HideFirstPersonArmsAndGunInFirstPerson_MetaData[] = {
		{ "Category", "Perspective" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "This will override HideFirstPersonArmsWithoutWeapon" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HideFirstPersonArmsWithoutWeapon_MetaData[] = {
		{ "Category", "Perspective" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "This will decide whether to hide the first person arms mesh when you do not have a weapon" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HideThirdPersonGunInFirstPerson_MetaData[] = {
		{ "Category", "Perspective" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanInteract_MetaData[] = {
		{ "Category", "Interact" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractDistance_MetaData[] = {
		{ "Category", "Interact" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappingInteractable_MetaData[] = {
		{ "Category", "Interact" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractableBeingOverlapped_MetaData[] = {
		{ "Category", "Interact" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanShoot_MetaData[] = {
		{ "Category", "Weapons" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShootingCancelsReload_MetaData[] = {
		{ "Category", "Weapons" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropWeaponsOnDeath_MetaData[] = {
		{ "Category", "Weapons" },
		{ "ClampMax", "2" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "This will determine whether weapons are dropped or destroyed on death, 0 = destroy weapons, 1 = drop only the weapon being held, 2 = drop all weapons" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoldingFireInput_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnToPreviousAnimationAfterFiring_MetaData[] = {
		{ "Category", "Weapons" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResetArmsAnimationWhenFiring_MetaData[] = {
		{ "Category", "Weapons" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsFiring_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoldingJumpInput_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "This is only used for the default animation blueprint" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoldingAimInput_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanAim_MetaData[] = {
		{ "Category", "Weapons" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimingCancelsReload_MetaData[] = {
		{ "Category", "Weapons" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HolsteringWeaponCancelsReload_MetaData[] = {
		{ "Category", "Weapons" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsAiming_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsZoomingForAim_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsADSing_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsZoomedIn_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanHolsterWeapons_MetaData[] = {
		{ "Category", "Weapons" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanUnHolsterWeapons_MetaData[] = {
		{ "Category", "Weapons" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsWeaponHolstered_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanShootToUnHolsterWeapon_MetaData[] = {
		{ "Category", "Weapons" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanAimToUnHolsterWeapon_MetaData[] = {
		{ "Category", "Weapons" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeToHolsterWeapon_MetaData[] = {
		{ "Category", "Weapons" },
		{ "ClampMin", "-3.000000" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "-1 to wait for first person animation to finish, -2 to wait for third person animation to finish, -3 to wait for animation from current player perspective to finish for example if the player is in first person it will wait for the first person animation, 0 = instant" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeToUnHolsterWeapon_MetaData[] = {
		{ "Category", "Weapons" },
		{ "ClampMin", "-3.000000" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "-1 to wait for first person animation to finish, -2 to wait for third person animation to finish, -3 to wait for animation from current player perspective to finish for example if the player is in first person it will wait for the first person animation, 0 = instant" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeToUnHolsterWeaponWhenFiring_MetaData[] = {
		{ "Category", "Weapons" },
		{ "ClampMin", "-3.000000" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "-1 to wait for first person animation to finish, -2 to wait for third person animation to finish, -3 to wait for animation from current player perspective to finish for example if the player is in first person it will wait for the first person animation, 0 = instant" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeToUnHolsterWeaponWhenAiming_MetaData[] = {
		{ "Category", "Weapons" },
		{ "ClampMin", "-3.000000" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "-1 to wait for first person animation to finish, -2 to wait for third person animation to finish, -3 to wait for animation from current player perspective to finish for example if the player is in first person it will wait for the first person animation, 0 = instant" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseADS_MetaData[] = {
		{ "Category", "Weapons" },
		{ "ClampMax", "2" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "0 = determined by weapon, 1 = ADS with all weapons, 2 = zoom in with all weapons" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideSwitchPerspectiveWhenAiming_MetaData[] = {
		{ "Category", "Weapons" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "This is normally determined per weapon but this can globally override it, this will still apply even if the player doesn't have the option to switch perspective" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UsingThirdPersonBeforeAiming_MetaData[] = {
		{ "Category", "Weapons" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmsHorizontalRotaitonAxis_MetaData[] = {
		{ "Category", "Weapons" },
		{ "ClampMax", "2.000000" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "0 = X (Roll), 1 = Y (Pitch), 2 = Z (Yaw), This will depend on your model but for the default arms 2 is correct, It has to be perfectly along an axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmsHorizontalLocationAxis_MetaData[] = {
		{ "Category", "Weapons" },
		{ "ClampMax", "2.000000" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "0 = X, 1 = Y, 2 = Z, This will depend on your model but for the default arms 1 is correct, It has to be perfectly along an axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmsVerticalRotationAxis_MetaData[] = {
		{ "Category", "Weapons" },
		{ "ClampMax", "2.000000" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "0 = X (Roll), 1 = Y (Pitch), 2 = Z (Yaw), This will depend on your model but for the default arms 1 is correct, It has to be perfectly along an axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmsVerticalLocationAxis_MetaData[] = {
		{ "Category", "Weapons" },
		{ "ClampMax", "2.000000" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "0 = X, 1 = Y, 2 = Z, This will depend on your model but for the default arms 2 is correct, It has to be perfectly along an axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanHaveWeaponSway_MetaData[] = {
		{ "Category", "Weapons" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "This will not affect whether or not the arms move back to their original position, just whether or not they sway" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanResetArmsPositionForWeaponSway_MetaData[] = {
		{ "Category", "Weapons" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "This will not affect whether or not the arms sway, just whether or not they move back to their original position" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmsDefaultLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmsDefaultRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsSwitchingWeapons_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentFOV_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMouseSensitivityX_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMouseSensitivityY_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentGamepadSensitivityX_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentGamepadSensitivityY_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeadSocketName_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraHeadLocation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "Used on death to properly locate the camera when it attaches to the head" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraHeadRotation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "Used on death to properly rotate the camera when it attaches to the head" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DelayToDestroyBody_MetaData[] = {
		{ "Category", "Animations" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanReload_MetaData[] = {
		{ "Category", "Weapons" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsReloading_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadCharacterSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllWeapons_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllSharedCaliberNames_MetaData[] = {
		{ "Category", "Weapons" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "Only applies to guns that use this rather than their own reserve ammo, set defaults in the player controller" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllSharedCaliberAmounts_MetaData[] = {
		{ "Category", "Weapons" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "Only applies to guns that use this rather than their own reserve ammo, set defaults in the player controller" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TakeDamageCameraShake_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TakeDamageControllerVibration_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "Clear this to disable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TakeDamageControllerVibrationTag_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "Used to cancel vibration with continuous fire" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DieDamageCameraShake_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DieControllerVibration_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "Clear this to disable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DieControllerVibrationTag_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
		{ "Tooltip", "Used to cancel vibration with continuous fire" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GetPlayerControllerTimerHandle_MetaData[] = {
		{ "Category", "Timers" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestroySelfTimerHandle_MetaData[] = {
		{ "Category", "Timers" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwitchWeaponsTimerHandle_MetaData[] = {
		{ "Category", "Timers" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadTimerHandle_MetaData[] = {
		{ "Category", "Timers" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmsAnimationModeTimerHandle_MetaData[] = {
		{ "Category", "Timers" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerModelAnimationModeTimerHandle_MetaData[] = {
		{ "Category", "Timers" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HolsterWeaponsTimerHandle_MetaData[] = {
		{ "Category", "Timers" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintTimerHandle_MetaData[] = {
		{ "Category", "Timers" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoBackToSprintTimerHandle_MetaData[] = {
		{ "Category", "Timers" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckIfCanSprintTimerHandle_MetaData[] = {
		{ "Category", "Timers" },
		{ "ModuleRelativePath", "Public/MultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IMC_Default;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IMC_Priority;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Move;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Look;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_GamepadLook;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Interact;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Jump;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Fire;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Aim;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Reload;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_NextWeapon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_PreviousWeapon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_GamepadSwitchWeapons;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_SwitchPerspective;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_ThirdPersonShoulderSwap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_SwitchToWeapon1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_SwitchToWeapon2;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_ToggleWeaponHolstered;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Sprint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmParent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ArmsMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonPlayerModel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MovementVector;
	static void NewProp_HoldingMoveInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HoldingMoveInput;
	static void NewProp_AppliedPerspectiveVisibilityOnClient_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AppliedPerspectiveVisibilityOnClient;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentWeaponIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FieldOfView;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MouseDefaultSensitivityX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MouseAimingSensitivityX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MouseDefaultSensitivityY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MouseAimingSensitivityY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MouseAimingSensitivityMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GamepadDefaultSensitivityX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GamepadAimingSensitivityX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GamepadDefaultSensitivityY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GamepadAimingSensitivityY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GamepadAimingSensitivityMultiplier;
	static void NewProp_UseAimSensitivityMultipler_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseAimSensitivityMultipler;
	static void NewProp_ToggleAim_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ToggleAim;
	static void NewProp_HoldButtonToJump_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HoldButtonToJump;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultMovementSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintingMovementSpeed;
	static void NewProp_ApplySpeedPenaltyIfWeaponsHolstered_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ApplySpeedPenaltyIfWeaponsHolstered;
	static void NewProp_CanSprint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanSprint;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ToggleSprint;
	static void NewProp_HoldingSprintInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HoldingSprintInput;
	static void NewProp_SprintCancelsReload_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SprintCancelsReload;
	static void NewProp_FiringCancelsSprint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FiringCancelsSprint;
	static void NewProp_AimingCancelsSprint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AimingCancelsSprint;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ShouldHolsterWeaponsWhenSprinting;
	static void NewProp_CanOnlySprintWhileMovingForward_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanOnlySprintWhileMovingForward;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MinInputToSprint;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSpeedToStartSprinting;
	static void NewProp_IsSprinting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSprinting;
	static void NewProp_ShouldGoBackToSprinting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldGoBackToSprinting;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToPlaySprintAnimationAfterFire;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UseActorClassesForHitMarkers;
	static void NewProp_CanGetHitMarkersOnSelf_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanGetHitMarkersOnSelf;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitMarkerActorSounds_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_HitMarkerActorSounds_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_HitMarkerActorSounds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitMarkerSurfaceSounds_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitMarkerSurfaceSounds_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_HitMarkerSurfaceSounds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningControllerCast;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicatedCameraLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicatedCameraRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicatedControlRotation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthComponent;
	static void NewProp_UsingThirdPerson_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UsingThirdPerson;
	static void NewProp_IsSwitchingPerspective_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSwitchingPerspective;
	static void NewProp_UsingThirdPersonLeftShoulder_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UsingThirdPersonLeftShoulder;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FirstPersonSpringArmLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ThirdPersonSpringArmLengthRight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ThirdPersonSpringArmLengthLeft;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FirstPersonSpringArmLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ThirdPersonSpringArmLocationRight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ThirdPersonSpringArmLocationLeft;
	static void NewProp_AttachSpringArmToPlayerModelFirstPerson_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttachSpringArmToPlayerModelFirstPerson;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketToAttachSpringArmToFirstPerson;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonPlayerModelMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonPlayerModelWithoutWeapons;
	static void NewProp_FirstPersonCameraLag_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FirstPersonCameraLag;
	static void NewProp_FirstPersonCameraRotationLag_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FirstPersonCameraRotationLag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FirstPersonCameraLagSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FirstPersonCameraRotationLagSpeed;
	static void NewProp_ThirdPersonCameraLag_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ThirdPersonCameraLag;
	static void NewProp_ThirdPersonCameraRotationLag_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ThirdPersonCameraRotationLag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ThirdPersonCameraLagSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ThirdPersonCameraRotationLagSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PerspectiveTransitionTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShoulderSwapTime;
	static void NewProp_HidePlayerModelMeshInFirstPerson_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HidePlayerModelMeshInFirstPerson;
	static void NewProp_HideFirstPersonArmsAndGunInFirstPerson_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HideFirstPersonArmsAndGunInFirstPerson;
	static void NewProp_HideFirstPersonArmsWithoutWeapon_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HideFirstPersonArmsWithoutWeapon;
	static void NewProp_HideThirdPersonGunInFirstPerson_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HideThirdPersonGunInFirstPerson;
	static void NewProp_CanInteract_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanInteract;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractDistance;
	static void NewProp_OverlappingInteractable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OverlappingInteractable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractableBeingOverlapped;
	static void NewProp_CanShoot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanShoot;
	static void NewProp_ShootingCancelsReload_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShootingCancelsReload;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DropWeaponsOnDeath;
	static void NewProp_HoldingFireInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HoldingFireInput;
	static void NewProp_ReturnToPreviousAnimationAfterFiring_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnToPreviousAnimationAfterFiring;
	static void NewProp_ResetArmsAnimationWhenFiring_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ResetArmsAnimationWhenFiring;
	static void NewProp_IsFiring_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsFiring;
	static void NewProp_HoldingJumpInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HoldingJumpInput;
	static void NewProp_HoldingAimInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HoldingAimInput;
	static void NewProp_CanAim_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanAim;
	static void NewProp_AimingCancelsReload_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AimingCancelsReload;
	static void NewProp_HolsteringWeaponCancelsReload_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HolsteringWeaponCancelsReload;
	static void NewProp_IsAiming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsAiming;
	static void NewProp_IsZoomingForAim_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsZoomingForAim;
	static void NewProp_IsADSing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsADSing;
	static void NewProp_IsZoomedIn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsZoomedIn;
	static void NewProp_CanHolsterWeapons_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanHolsterWeapons;
	static void NewProp_CanUnHolsterWeapons_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanUnHolsterWeapons;
	static void NewProp_IsWeaponHolstered_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsWeaponHolstered;
	static void NewProp_CanShootToUnHolsterWeapon_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanShootToUnHolsterWeapon;
	static void NewProp_CanAimToUnHolsterWeapon_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanAimToUnHolsterWeapon;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToHolsterWeapon;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToUnHolsterWeapon;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToUnHolsterWeaponWhenFiring;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToUnHolsterWeaponWhenAiming;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UseADS;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OverrideSwitchPerspectiveWhenAiming;
	static void NewProp_UsingThirdPersonBeforeAiming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UsingThirdPersonBeforeAiming;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ArmsHorizontalRotaitonAxis;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ArmsHorizontalLocationAxis;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ArmsVerticalRotationAxis;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ArmsVerticalLocationAxis;
	static void NewProp_CanHaveWeaponSway_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanHaveWeaponSway;
	static void NewProp_CanResetArmsPositionForWeaponSway_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanResetArmsPositionForWeaponSway;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ArmsDefaultLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ArmsDefaultRotation;
	static void NewProp_IsSwitchingWeapons_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSwitchingWeapons;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentFOV;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentMouseSensitivityX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentMouseSensitivityY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentGamepadSensitivityX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentGamepadSensitivityY;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HeadSocketName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraHeadLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraHeadRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayToDestroyBody;
	static void NewProp_CanReload_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanReload;
	static void NewProp_IsReloading_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsReloading;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadCharacterSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllWeapons_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllWeapons;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AllSharedCaliberNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllSharedCaliberNames;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AllSharedCaliberAmounts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllSharedCaliberAmounts;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TakeDamageCameraShake;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TakeDamageControllerVibration;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TakeDamageControllerVibrationTag;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DieDamageCameraShake;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DieControllerVibration;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DieControllerVibrationTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GetPlayerControllerTimerHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DestroySelfTimerHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SwitchWeaponsTimerHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReloadTimerHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ArmsAnimationModeTimerHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerModelAnimationModeTimerHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HolsterWeaponsTimerHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SprintTimerHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GoBackToSprintTimerHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CheckIfCanSprintTimerHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMultiplayerCharacter_AddWeapon, "AddWeapon" }, // 3005816917
		{ &Z_Construct_UFunction_AMultiplayerCharacter_Aim, "Aim" }, // 365541921
		{ &Z_Construct_UFunction_AMultiplayerCharacter_AimInput, "AimInput" }, // 1965577433
		{ &Z_Construct_UFunction_AMultiplayerCharacter_ApplyPerspectiveVisibility, "ApplyPerspectiveVisibility" }, // 3570077441
		{ &Z_Construct_UFunction_AMultiplayerCharacter_ApplySettings, "ApplySettings" }, // 1396130306
		{ &Z_Construct_UFunction_AMultiplayerCharacter_CancelReload, "CancelReload" }, // 1043042405
		{ &Z_Construct_UFunction_AMultiplayerCharacter_CheckIfCanSprint, "CheckIfCanSprint" }, // 2308690461
		{ &Z_Construct_UFunction_AMultiplayerCharacter_CheckIfCanSprintNoReturn, "CheckIfCanSprintNoReturn" }, // 4079824650
		{ &Z_Construct_UFunction_AMultiplayerCharacter_ClientApplyPerspectiveVisibility, "ClientApplyPerspectiveVisibility" }, // 246665711
		{ &Z_Construct_UFunction_AMultiplayerCharacter_ClientDie, "ClientDie" }, // 3010496642
		{ &Z_Construct_UFunction_AMultiplayerCharacter_ClientInteract, "ClientInteract" }, // 1949277043
		{ &Z_Construct_UFunction_AMultiplayerCharacter_ClientOnTakeDamage, "ClientOnTakeDamage" }, // 965363676
		{ &Z_Construct_UFunction_AMultiplayerCharacter_ClientRemoveInput, "ClientRemoveInput" }, // 1956252264
		{ &Z_Construct_UFunction_AMultiplayerCharacter_ClientSetThirdPersonShoulder, "ClientSetThirdPersonShoulder" }, // 1676988041
		{ &Z_Construct_UFunction_AMultiplayerCharacter_ClientSetupInput, "ClientSetupInput" }, // 1449989310
		{ &Z_Construct_UFunction_AMultiplayerCharacter_ClientSetUsingThirdPerson, "ClientSetUsingThirdPerson" }, // 661997773
		{ &Z_Construct_UFunction_AMultiplayerCharacter_DestroySelf, "DestroySelf" }, // 4243425448
		{ &Z_Construct_UFunction_AMultiplayerCharacter_Die, "Die" }, // 4063240629
		{ &Z_Construct_UFunction_AMultiplayerCharacter_Die1, "Die1" }, // 3746794061
		{ &Z_Construct_UFunction_AMultiplayerCharacter_Fire, "Fire" }, // 3985368381
		{ &Z_Construct_UFunction_AMultiplayerCharacter_GetAllSharedCaliberAmounts, "GetAllSharedCaliberAmounts" }, // 2208147454
		{ &Z_Construct_UFunction_AMultiplayerCharacter_GetAllSharedCaliberNames, "GetAllSharedCaliberNames" }, // 46426143
		{ &Z_Construct_UFunction_AMultiplayerCharacter_GetAllSharedCalibers, "GetAllSharedCalibers" }, // 739926618
		{ &Z_Construct_UFunction_AMultiplayerCharacter_GetAllWeapons, "GetAllWeapons" }, // 4094910360
		{ &Z_Construct_UFunction_AMultiplayerCharacter_GetAmountOfWeapons, "GetAmountOfWeapons" }, // 241465027
		{ &Z_Construct_UFunction_AMultiplayerCharacter_GetCanAim, "GetCanAim" }, // 739616546
		{ &Z_Construct_UFunction_AMultiplayerCharacter_GetCanInteract, "GetCanInteract" }, // 1295245113
		{ &Z_Construct_UFunction_AMultiplayerCharacter_GetCanShoot, "GetCanShoot" }, // 1039079226
		{ &Z_Construct_UFunction_AMultiplayerCharacter_GetHasWeapon, "GetHasWeapon" }, // 2565141413
		{ &Z_Construct_UFunction_AMultiplayerCharacter_GetHealth, "GetHealth" }, // 2840191538
		{ &Z_Construct_UFunction_AMultiplayerCharacter_GetHealthComponent, "GetHealthComponent" }, // 1009668880
		{ &Z_Construct_UFunction_AMultiplayerCharacter_GetInteractableBeingOverlapped, "GetInteractableBeingOverlapped" }, // 3957873632
		{ &Z_Construct_UFunction_AMultiplayerCharacter_GetInteractDistance, "GetInteractDistance" }, // 67284067
		{ &Z_Construct_UFunction_AMultiplayerCharacter_GetIsADSing, "GetIsADSing" }, // 218350927
		{ &Z_Construct_UFunction_AMultiplayerCharacter_GetIsAiming, "GetIsAiming" }, // 1959737052
		{ &Z_Construct_UFunction_AMultiplayerCharacter_GetIsDead, "GetIsDead" }, // 4155097136
		{ &Z_Construct_UFunction_AMultiplayerCharacter_GetIsFiring, "GetIsFiring" }, // 3881043175
		{ &Z_Construct_UFunction_AMultiplayerCharacter_GetIsWeaponHolstered, "GetIsWeaponHolstered" }, // 600127858
		{ &Z_Construct_UFunction_AMultiplayerCharacter_GetIsZoomedIn, "GetIsZoomedIn" }, // 4157284957
		{ &Z_Construct_UFunction_AMultiplayerCharacter_GetMaxWeaponAmount, "GetMaxWeaponAmount" }, // 261236127
		{ &Z_Construct_UFunction_AMultiplayerCharacter_GetOverlappingInteractable, "GetOverlappingInteractable" }, // 1919312881
		{ &Z_Construct_UFunction_AMultiplayerCharacter_GetOwningController, "GetOwningController" }, // 1427548503
		{ &Z_Construct_UFunction_AMultiplayerCharacter_GetPlayerModelMesh, "GetPlayerModelMesh" }, // 3579593407
		{ &Z_Construct_UFunction_AMultiplayerCharacter_GetSharedCaliberAmount, "GetSharedCaliberAmount" }, // 2745587358
		{ &Z_Construct_UFunction_AMultiplayerCharacter_GetSharedCaliberName, "GetSharedCaliberName" }, // 3688635365
		{ &Z_Construct_UFunction_AMultiplayerCharacter_GetThirdPersonSpringArmLength, "GetThirdPersonSpringArmLength" }, // 2078974113
		{ &Z_Construct_UFunction_AMultiplayerCharacter_GetUseADS, "GetUseADS" }, // 1879006222
		{ &Z_Construct_UFunction_AMultiplayerCharacter_GetUsingThirdPerson, "GetUsingThirdPerson" }, // 4218327028
		{ &Z_Construct_UFunction_AMultiplayerCharacter_GetWeapon, "GetWeapon" }, // 2024876446
		{ &Z_Construct_UFunction_AMultiplayerCharacter_GetWeaponIndex, "GetWeaponIndex" }, // 3128255642
		{ &Z_Construct_UFunction_AMultiplayerCharacter_GiveLoadout, "GiveLoadout" }, // 367478887
		{ &Z_Construct_UFunction_AMultiplayerCharacter_GiveWeapon, "GiveWeapon" }, // 4291582990
		{ &Z_Construct_UFunction_AMultiplayerCharacter_HolsterWeapon_BP, "HolsterWeapon_BP" }, // 2303408614
		{ &Z_Construct_UFunction_AMultiplayerCharacter_HolsterWeapons, "HolsterWeapons" }, // 1951041397
		{ &Z_Construct_UFunction_AMultiplayerCharacter_HolsterWeapons1, "HolsterWeapons1" }, // 2230159830
		{ &Z_Construct_UFunction_AMultiplayerCharacter_Interact, "Interact" }, // 1980711690
		{ &Z_Construct_UFunction_AMultiplayerCharacter_Interact_BP, "Interact_BP" }, // 2644950359
		{ &Z_Construct_UFunction_AMultiplayerCharacter_InteractReplicated, "InteractReplicated" }, // 2872761281
		{ &Z_Construct_UFunction_AMultiplayerCharacter_LastWeapon, "LastWeapon" }, // 3223173105
		{ &Z_Construct_UFunction_AMultiplayerCharacter_MulticastAddWeapon, "MulticastAddWeapon" }, // 413427603
		{ &Z_Construct_UFunction_AMultiplayerCharacter_MulticastAim, "MulticastAim" }, // 2234622198
		{ &Z_Construct_UFunction_AMultiplayerCharacter_MulticastCancelReload, "MulticastCancelReload" }, // 4016848969
		{ &Z_Construct_UFunction_AMultiplayerCharacter_MulticastGiveWeapon, "MulticastGiveWeapon" }, // 2504399818
		{ &Z_Construct_UFunction_AMultiplayerCharacter_MulticastHolsterWeapons, "MulticastHolsterWeapons" }, // 1296065860
		{ &Z_Construct_UFunction_AMultiplayerCharacter_MulticastHolsterWeapons1, "MulticastHolsterWeapons1" }, // 1923461704
		{ &Z_Construct_UFunction_AMultiplayerCharacter_MulticastInteract, "MulticastInteract" }, // 1713435460
		{ &Z_Construct_UFunction_AMultiplayerCharacter_MulticastLastWeapon, "MulticastLastWeapon" }, // 2721046648
		{ &Z_Construct_UFunction_AMultiplayerCharacter_MulticastNextWeapon, "MulticastNextWeapon" }, // 124890376
		{ &Z_Construct_UFunction_AMultiplayerCharacter_MulticastPickupItem, "MulticastPickupItem" }, // 2868577664
		{ &Z_Construct_UFunction_AMultiplayerCharacter_MulticastReload, "MulticastReload" }, // 3954959032
		{ &Z_Construct_UFunction_AMultiplayerCharacter_MulticastReload1, "MulticastReload1" }, // 1885225382
		{ &Z_Construct_UFunction_AMultiplayerCharacter_MulticastReload2, "MulticastReload2" }, // 237344608
		{ &Z_Construct_UFunction_AMultiplayerCharacter_MulticastRemoveWeapon, "MulticastRemoveWeapon" }, // 3889923251
		{ &Z_Construct_UFunction_AMultiplayerCharacter_MulticastReplicateCameraTransform, "MulticastReplicateCameraTransform" }, // 3132605723
		{ &Z_Construct_UFunction_AMultiplayerCharacter_MulticastReplicateControlRotation, "MulticastReplicateControlRotation" }, // 3511937285
		{ &Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetCanInteract, "MulticastSetCanInteract" }, // 1389888352
		{ &Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetCanShoot, "MulticastSetCanShoot" }, // 924458660
		{ &Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetThirdPersonShoulder, "MulticastSetThirdPersonShoulder" }, // 2755667062
		{ &Z_Construct_UFunction_AMultiplayerCharacter_MulticastSetUsingThirdPerson, "MulticastSetUsingThirdPerson" }, // 3751296538
		{ &Z_Construct_UFunction_AMultiplayerCharacter_MulticastStopAiming, "MulticastStopAiming" }, // 1743197796
		{ &Z_Construct_UFunction_AMultiplayerCharacter_MulticastSwitchWeapons, "MulticastSwitchWeapons" }, // 3669479935
		{ &Z_Construct_UFunction_AMultiplayerCharacter_MulticastSwitchWeapons1, "MulticastSwitchWeapons1" }, // 4234228931
		{ &Z_Construct_UFunction_AMultiplayerCharacter_MulticastUnHolsterWeapons, "MulticastUnHolsterWeapons" }, // 374718545
		{ &Z_Construct_UFunction_AMultiplayerCharacter_MulticastUnHolsterWeapons1, "MulticastUnHolsterWeapons1" }, // 134569104
		{ &Z_Construct_UFunction_AMultiplayerCharacter_NextWeapon, "NextWeapon" }, // 1848327965
		{ &Z_Construct_UFunction_AMultiplayerCharacter_OnTakeDamage, "OnTakeDamage" }, // 2666457030
		{ &Z_Construct_UFunction_AMultiplayerCharacter_OnTakeDamage_BP, "OnTakeDamage_BP" }, // 1543162094
		{ &Z_Construct_UFunction_AMultiplayerCharacter_PickupItem, "PickupItem" }, // 3492560608
		{ &Z_Construct_UFunction_AMultiplayerCharacter_PlayArmsAnimation, "PlayArmsAnimation" }, // 345494791
		{ &Z_Construct_UFunction_AMultiplayerCharacter_PlaySprintAnimation, "PlaySprintAnimation" }, // 631790992
		{ &Z_Construct_UFunction_AMultiplayerCharacter_PressFireInput, "PressFireInput" }, // 4067105698
		{ &Z_Construct_UFunction_AMultiplayerCharacter_PrintStringForOwningControllerInvalid, "PrintStringForOwningControllerInvalid" }, // 3166130080
		{ &Z_Construct_UFunction_AMultiplayerCharacter_ReleaseAimInput, "ReleaseAimInput" }, // 2153828964
		{ &Z_Construct_UFunction_AMultiplayerCharacter_ReleaseFireInput, "ReleaseFireInput" }, // 722731138
		{ &Z_Construct_UFunction_AMultiplayerCharacter_ReleaseSprintInput, "ReleaseSprintInput" }, // 3367309924
		{ &Z_Construct_UFunction_AMultiplayerCharacter_Reload, "Reload" }, // 452862045
		{ &Z_Construct_UFunction_AMultiplayerCharacter_Reload1, "Reload1" }, // 584247999
		{ &Z_Construct_UFunction_AMultiplayerCharacter_Reload2, "Reload2" }, // 2171466779
		{ &Z_Construct_UFunction_AMultiplayerCharacter_Reload_BP, "Reload_BP" }, // 2280036738
		{ &Z_Construct_UFunction_AMultiplayerCharacter_RemoveInput, "RemoveInput" }, // 1185479967
		{ &Z_Construct_UFunction_AMultiplayerCharacter_RemoveWeapon, "RemoveWeapon" }, // 807313784
		{ &Z_Construct_UFunction_AMultiplayerCharacter_RemoveWeaponPastIndex, "RemoveWeaponPastIndex" }, // 3925229007
		{ &Z_Construct_UFunction_AMultiplayerCharacter_ReplicateCameraTransform, "ReplicateCameraTransform" }, // 4023033726
		{ &Z_Construct_UFunction_AMultiplayerCharacter_ServerAddWeapon, "ServerAddWeapon" }, // 3919981922
		{ &Z_Construct_UFunction_AMultiplayerCharacter_ServerAim, "ServerAim" }, // 1814244749
		{ &Z_Construct_UFunction_AMultiplayerCharacter_ServerCancelReload, "ServerCancelReload" }, // 3885379098
		{ &Z_Construct_UFunction_AMultiplayerCharacter_ServerDie1, "ServerDie1" }, // 1698572412
		{ &Z_Construct_UFunction_AMultiplayerCharacter_ServerGiveLoadout, "ServerGiveLoadout" }, // 1737589252
		{ &Z_Construct_UFunction_AMultiplayerCharacter_ServerHolsterWeapons, "ServerHolsterWeapons" }, // 1747838992
		{ &Z_Construct_UFunction_AMultiplayerCharacter_ServerHolsterWeapons1, "ServerHolsterWeapons1" }, // 2753870436
		{ &Z_Construct_UFunction_AMultiplayerCharacter_ServerInteract, "ServerInteract" }, // 3116060746
		{ &Z_Construct_UFunction_AMultiplayerCharacter_ServerLastWeapon, "ServerLastWeapon" }, // 1230449160
		{ &Z_Construct_UFunction_AMultiplayerCharacter_ServerNextWeapon, "ServerNextWeapon" }, // 2976485213
		{ &Z_Construct_UFunction_AMultiplayerCharacter_ServerPickupItem, "ServerPickupItem" }, // 4078651485
		{ &Z_Construct_UFunction_AMultiplayerCharacter_ServerReload, "ServerReload" }, // 229441778
		{ &Z_Construct_UFunction_AMultiplayerCharacter_ServerReload1, "ServerReload1" }, // 3150274594
		{ &Z_Construct_UFunction_AMultiplayerCharacter_ServerReload2, "ServerReload2" }, // 836418212
		{ &Z_Construct_UFunction_AMultiplayerCharacter_ServerRemoveWeapon, "ServerRemoveWeapon" }, // 3502455570
		{ &Z_Construct_UFunction_AMultiplayerCharacter_ServerReplicateCameraTransform, "ServerReplicateCameraTransform" }, // 3572083741
		{ &Z_Construct_UFunction_AMultiplayerCharacter_ServerReplicateControlRotation, "ServerReplicateControlRotation" }, // 3933429221
		{ &Z_Construct_UFunction_AMultiplayerCharacter_ServerSetCanInteract, "ServerSetCanInteract" }, // 3539921155
		{ &Z_Construct_UFunction_AMultiplayerCharacter_ServerSetCanShoot, "ServerSetCanShoot" }, // 2185817884
		{ &Z_Construct_UFunction_AMultiplayerCharacter_ServerSetThirdPersonShoulder, "ServerSetThirdPersonShoulder" }, // 625726285
		{ &Z_Construct_UFunction_AMultiplayerCharacter_ServerSetUsingThirdPerson, "ServerSetUsingThirdPerson" }, // 886058256
		{ &Z_Construct_UFunction_AMultiplayerCharacter_ServerSprint, "ServerSprint" }, // 1721195290
		{ &Z_Construct_UFunction_AMultiplayerCharacter_ServerStopAiming, "ServerStopAiming" }, // 1247195916
		{ &Z_Construct_UFunction_AMultiplayerCharacter_ServerStopSprinting, "ServerStopSprinting" }, // 2598519583
		{ &Z_Construct_UFunction_AMultiplayerCharacter_ServerSwitchWeapons, "ServerSwitchWeapons" }, // 2275553785
		{ &Z_Construct_UFunction_AMultiplayerCharacter_ServerSwitchWeapons1, "ServerSwitchWeapons1" }, // 305243352
		{ &Z_Construct_UFunction_AMultiplayerCharacter_ServerUnHolsterWeapons, "ServerUnHolsterWeapons" }, // 1144818393
		{ &Z_Construct_UFunction_AMultiplayerCharacter_ServerUnHolsterWeapons1, "ServerUnHolsterWeapons1" }, // 753148350
		{ &Z_Construct_UFunction_AMultiplayerCharacter_SetAimingArmsPosition_BP, "SetAimingArmsPosition_BP" }, // 3646751957
		{ &Z_Construct_UFunction_AMultiplayerCharacter_SetAimingFOV_BP, "SetAimingFOV_BP" }, // 1571991925
		{ &Z_Construct_UFunction_AMultiplayerCharacter_SetAllSharedCalibers, "SetAllSharedCalibers" }, // 943682632
		{ &Z_Construct_UFunction_AMultiplayerCharacter_SetArmsAnimationMode, "SetArmsAnimationMode" }, // 486314833
		{ &Z_Construct_UFunction_AMultiplayerCharacter_SetArmsAnimationMode1, "SetArmsAnimationMode1" }, // 376839956
		{ &Z_Construct_UFunction_AMultiplayerCharacter_SetCanAim, "SetCanAim" }, // 2259277076
		{ &Z_Construct_UFunction_AMultiplayerCharacter_SetCanInteract, "SetCanInteract" }, // 3672885573
		{ &Z_Construct_UFunction_AMultiplayerCharacter_SetCanShoot, "SetCanShoot" }, // 1686256341
		{ &Z_Construct_UFunction_AMultiplayerCharacter_SetFOV_BP, "SetFOV_BP" }, // 959378007
		{ &Z_Construct_UFunction_AMultiplayerCharacter_SetInteractableBeingOverlapped, "SetInteractableBeingOverlapped" }, // 680036837
		{ &Z_Construct_UFunction_AMultiplayerCharacter_SetInteractDistance, "SetInteractDistance" }, // 3203622683
		{ &Z_Construct_UFunction_AMultiplayerCharacter_SetIsADSing, "SetIsADSing" }, // 3310903044
		{ &Z_Construct_UFunction_AMultiplayerCharacter_SetIsAiming, "SetIsAiming" }, // 3636628972
		{ &Z_Construct_UFunction_AMultiplayerCharacter_SetIsFiring, "SetIsFiring" }, // 195899725
		{ &Z_Construct_UFunction_AMultiplayerCharacter_SetIsZoomedIn, "SetIsZoomedIn" }, // 414890541
		{ &Z_Construct_UFunction_AMultiplayerCharacter_SetMovementSpeedBasedOnSettings, "SetMovementSpeedBasedOnSettings" }, // 934397918
		{ &Z_Construct_UFunction_AMultiplayerCharacter_SetMovementSpeedBasedOnSettings_BP, "SetMovementSpeedBasedOnSettings_BP" }, // 2964449848
		{ &Z_Construct_UFunction_AMultiplayerCharacter_SetOverlappingInteractable, "SetOverlappingInteractable" }, // 3959647905
		{ &Z_Construct_UFunction_AMultiplayerCharacter_SetOwningController, "SetOwningController" }, // 1005916287
		{ &Z_Construct_UFunction_AMultiplayerCharacter_SetPlayerModelAnimationMode, "SetPlayerModelAnimationMode" }, // 682049146
		{ &Z_Construct_UFunction_AMultiplayerCharacter_SetPlayerModelAnimationMode1, "SetPlayerModelAnimationMode1" }, // 187390361
		{ &Z_Construct_UFunction_AMultiplayerCharacter_SetSensitivity, "SetSensitivity" }, // 3928156661
		{ &Z_Construct_UFunction_AMultiplayerCharacter_SetSharedCaliberAmount, "SetSharedCaliberAmount" }, // 3293876074
		{ &Z_Construct_UFunction_AMultiplayerCharacter_SetSharedCaliberName, "SetSharedCaliberName" }, // 377882780
		{ &Z_Construct_UFunction_AMultiplayerCharacter_SetThirdPersonShoulder, "SetThirdPersonShoulder" }, // 3734287481
		{ &Z_Construct_UFunction_AMultiplayerCharacter_SetThirdPersonShoulder_BP, "SetThirdPersonShoulder_BP" }, // 943772768
		{ &Z_Construct_UFunction_AMultiplayerCharacter_SetupInput, "SetupInput" }, // 3548286121
		{ &Z_Construct_UFunction_AMultiplayerCharacter_SetUseADS, "SetUseADS" }, // 1130965740
		{ &Z_Construct_UFunction_AMultiplayerCharacter_SetUsingThirdPerson, "SetUsingThirdPerson" }, // 1342841276
		{ &Z_Construct_UFunction_AMultiplayerCharacter_SetWeaponVisibility, "SetWeaponVisibility" }, // 2099784701
		{ &Z_Construct_UFunction_AMultiplayerCharacter_ShowHitMarker, "ShowHitMarker" }, // 482115228
		{ &Z_Construct_UFunction_AMultiplayerCharacter_ShowHitMarker_BP, "ShowHitMarker_BP" }, // 3356829812
		{ &Z_Construct_UFunction_AMultiplayerCharacter_Sprint, "Sprint" }, // 631633311
		{ &Z_Construct_UFunction_AMultiplayerCharacter_SprintInput, "SprintInput" }, // 2307937895
		{ &Z_Construct_UFunction_AMultiplayerCharacter_StopAiming, "StopAiming" }, // 1920778679
		{ &Z_Construct_UFunction_AMultiplayerCharacter_StopFiring, "StopFiring" }, // 3667360049
		{ &Z_Construct_UFunction_AMultiplayerCharacter_StopSprinting, "StopSprinting" }, // 1348390426
		{ &Z_Construct_UFunction_AMultiplayerCharacter_StopSprinting1, "StopSprinting1" }, // 2425058758
		{ &Z_Construct_UFunction_AMultiplayerCharacter_SwapShoulders, "SwapShoulders" }, // 2518892312
		{ &Z_Construct_UFunction_AMultiplayerCharacter_SwitchPerspective_BP, "SwitchPerspective_BP" }, // 3673746841
		{ &Z_Construct_UFunction_AMultiplayerCharacter_SwitchToWeapon1, "SwitchToWeapon1" }, // 1246348907
		{ &Z_Construct_UFunction_AMultiplayerCharacter_SwitchToWeapon2, "SwitchToWeapon2" }, // 2963803717
		{ &Z_Construct_UFunction_AMultiplayerCharacter_SwitchWeapons, "SwitchWeapons" }, // 1758946410
		{ &Z_Construct_UFunction_AMultiplayerCharacter_SwitchWeapons1, "SwitchWeapons1" }, // 2330053226
		{ &Z_Construct_UFunction_AMultiplayerCharacter_ToggleThirdPerson, "ToggleThirdPerson" }, // 613169687
		{ &Z_Construct_UFunction_AMultiplayerCharacter_ToggleWeaponHolstered, "ToggleWeaponHolstered" }, // 2417612424
		{ &Z_Construct_UFunction_AMultiplayerCharacter_UnHolsterWeapon_BP, "UnHolsterWeapon_BP" }, // 2322709837
		{ &Z_Construct_UFunction_AMultiplayerCharacter_UnHolsterWeapons, "UnHolsterWeapons" }, // 3380903866
		{ &Z_Construct_UFunction_AMultiplayerCharacter_UnHolsterWeapons1, "UnHolsterWeapons1" }, // 596846564
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMultiplayerCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IMC_Default = { "IMC_Default", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, IMC_Default), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IMC_Default_MetaData), NewProp_IMC_Default_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IMC_Priority = { "IMC_Priority", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, IMC_Priority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IMC_Priority_MetaData), NewProp_IMC_Priority_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IA_Move = { "IA_Move", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, IA_Move), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Move_MetaData), NewProp_IA_Move_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IA_Look = { "IA_Look", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, IA_Look), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Look_MetaData), NewProp_IA_Look_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IA_GamepadLook = { "IA_GamepadLook", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, IA_GamepadLook), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_GamepadLook_MetaData), NewProp_IA_GamepadLook_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IA_Interact = { "IA_Interact", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, IA_Interact), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Interact_MetaData), NewProp_IA_Interact_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IA_Jump = { "IA_Jump", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, IA_Jump), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Jump_MetaData), NewProp_IA_Jump_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IA_Fire = { "IA_Fire", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, IA_Fire), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Fire_MetaData), NewProp_IA_Fire_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IA_Aim = { "IA_Aim", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, IA_Aim), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Aim_MetaData), NewProp_IA_Aim_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IA_Reload = { "IA_Reload", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, IA_Reload), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Reload_MetaData), NewProp_IA_Reload_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IA_NextWeapon = { "IA_NextWeapon", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, IA_NextWeapon), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_NextWeapon_MetaData), NewProp_IA_NextWeapon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IA_PreviousWeapon = { "IA_PreviousWeapon", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, IA_PreviousWeapon), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_PreviousWeapon_MetaData), NewProp_IA_PreviousWeapon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IA_GamepadSwitchWeapons = { "IA_GamepadSwitchWeapons", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, IA_GamepadSwitchWeapons), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_GamepadSwitchWeapons_MetaData), NewProp_IA_GamepadSwitchWeapons_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IA_SwitchPerspective = { "IA_SwitchPerspective", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, IA_SwitchPerspective), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_SwitchPerspective_MetaData), NewProp_IA_SwitchPerspective_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IA_ThirdPersonShoulderSwap = { "IA_ThirdPersonShoulderSwap", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, IA_ThirdPersonShoulderSwap), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_ThirdPersonShoulderSwap_MetaData), NewProp_IA_ThirdPersonShoulderSwap_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IA_SwitchToWeapon1 = { "IA_SwitchToWeapon1", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, IA_SwitchToWeapon1), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_SwitchToWeapon1_MetaData), NewProp_IA_SwitchToWeapon1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IA_SwitchToWeapon2 = { "IA_SwitchToWeapon2", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, IA_SwitchToWeapon2), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_SwitchToWeapon2_MetaData), NewProp_IA_SwitchToWeapon2_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IA_ToggleWeaponHolstered = { "IA_ToggleWeaponHolstered", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, IA_ToggleWeaponHolstered), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_ToggleWeaponHolstered_MetaData), NewProp_IA_ToggleWeaponHolstered_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IA_Sprint = { "IA_Sprint", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, IA_Sprint), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Sprint_MetaData), NewProp_IA_Sprint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_SpringArmParent = { "SpringArmParent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, SpringArmParent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArmParent_MetaData), NewProp_SpringArmParent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComponent_MetaData), NewProp_CameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ArmsMesh = { "ArmsMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, ArmsMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmsMesh_MetaData), NewProp_ArmsMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_FirstPersonPlayerModel = { "FirstPersonPlayerModel", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, FirstPersonPlayerModel), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonPlayerModel_MetaData), NewProp_FirstPersonPlayerModel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_MovementVector = { "MovementVector", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, MovementVector), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementVector_MetaData), NewProp_MovementVector_MetaData) };
void Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HoldingMoveInput_SetBit(void* Obj)
{
	((AMultiplayerCharacter*)Obj)->HoldingMoveInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HoldingMoveInput = { "HoldingMoveInput", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerCharacter), &Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HoldingMoveInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoldingMoveInput_MetaData), NewProp_HoldingMoveInput_MetaData) };
void Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_AppliedPerspectiveVisibilityOnClient_SetBit(void* Obj)
{
	((AMultiplayerCharacter*)Obj)->AppliedPerspectiveVisibilityOnClient = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_AppliedPerspectiveVisibilityOnClient = { "AppliedPerspectiveVisibilityOnClient", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerCharacter), &Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_AppliedPerspectiveVisibilityOnClient_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppliedPerspectiveVisibilityOnClient_MetaData), NewProp_AppliedPerspectiveVisibilityOnClient_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CurrentWeaponIndex = { "CurrentWeaponIndex", nullptr, (EPropertyFlags)0x0010000000000024, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, CurrentWeaponIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentWeaponIndex_MetaData), NewProp_CurrentWeaponIndex_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_FieldOfView = { "FieldOfView", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, FieldOfView), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldOfView_MetaData), NewProp_FieldOfView_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_MouseDefaultSensitivityX = { "MouseDefaultSensitivityX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, MouseDefaultSensitivityX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseDefaultSensitivityX_MetaData), NewProp_MouseDefaultSensitivityX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_MouseAimingSensitivityX = { "MouseAimingSensitivityX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, MouseAimingSensitivityX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseAimingSensitivityX_MetaData), NewProp_MouseAimingSensitivityX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_MouseDefaultSensitivityY = { "MouseDefaultSensitivityY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, MouseDefaultSensitivityY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseDefaultSensitivityY_MetaData), NewProp_MouseDefaultSensitivityY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_MouseAimingSensitivityY = { "MouseAimingSensitivityY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, MouseAimingSensitivityY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseAimingSensitivityY_MetaData), NewProp_MouseAimingSensitivityY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_MouseAimingSensitivityMultiplier = { "MouseAimingSensitivityMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, MouseAimingSensitivityMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseAimingSensitivityMultiplier_MetaData), NewProp_MouseAimingSensitivityMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_GamepadDefaultSensitivityX = { "GamepadDefaultSensitivityX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, GamepadDefaultSensitivityX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GamepadDefaultSensitivityX_MetaData), NewProp_GamepadDefaultSensitivityX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_GamepadAimingSensitivityX = { "GamepadAimingSensitivityX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, GamepadAimingSensitivityX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GamepadAimingSensitivityX_MetaData), NewProp_GamepadAimingSensitivityX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_GamepadDefaultSensitivityY = { "GamepadDefaultSensitivityY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, GamepadDefaultSensitivityY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GamepadDefaultSensitivityY_MetaData), NewProp_GamepadDefaultSensitivityY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_GamepadAimingSensitivityY = { "GamepadAimingSensitivityY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, GamepadAimingSensitivityY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GamepadAimingSensitivityY_MetaData), NewProp_GamepadAimingSensitivityY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_GamepadAimingSensitivityMultiplier = { "GamepadAimingSensitivityMultiplier", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, GamepadAimingSensitivityMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GamepadAimingSensitivityMultiplier_MetaData), NewProp_GamepadAimingSensitivityMultiplier_MetaData) };
void Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_UseAimSensitivityMultipler_SetBit(void* Obj)
{
	((AMultiplayerCharacter*)Obj)->UseAimSensitivityMultipler = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_UseAimSensitivityMultipler = { "UseAimSensitivityMultipler", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerCharacter), &Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_UseAimSensitivityMultipler_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseAimSensitivityMultipler_MetaData), NewProp_UseAimSensitivityMultipler_MetaData) };
void Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ToggleAim_SetBit(void* Obj)
{
	((AMultiplayerCharacter*)Obj)->ToggleAim = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ToggleAim = { "ToggleAim", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerCharacter), &Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ToggleAim_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToggleAim_MetaData), NewProp_ToggleAim_MetaData) };
void Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HoldButtonToJump_SetBit(void* Obj)
{
	((AMultiplayerCharacter*)Obj)->HoldButtonToJump = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HoldButtonToJump = { "HoldButtonToJump", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerCharacter), &Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HoldButtonToJump_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoldButtonToJump_MetaData), NewProp_HoldButtonToJump_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_DefaultMovementSpeed = { "DefaultMovementSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, DefaultMovementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMovementSpeed_MetaData), NewProp_DefaultMovementSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_SprintingMovementSpeed = { "SprintingMovementSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, SprintingMovementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintingMovementSpeed_MetaData), NewProp_SprintingMovementSpeed_MetaData) };
void Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ApplySpeedPenaltyIfWeaponsHolstered_SetBit(void* Obj)
{
	((AMultiplayerCharacter*)Obj)->ApplySpeedPenaltyIfWeaponsHolstered = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ApplySpeedPenaltyIfWeaponsHolstered = { "ApplySpeedPenaltyIfWeaponsHolstered", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerCharacter), &Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ApplySpeedPenaltyIfWeaponsHolstered_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplySpeedPenaltyIfWeaponsHolstered_MetaData), NewProp_ApplySpeedPenaltyIfWeaponsHolstered_MetaData) };
void Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CanSprint_SetBit(void* Obj)
{
	((AMultiplayerCharacter*)Obj)->CanSprint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CanSprint = { "CanSprint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerCharacter), &Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CanSprint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanSprint_MetaData), NewProp_CanSprint_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ToggleSprint = { "ToggleSprint", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, ToggleSprint), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToggleSprint_MetaData), NewProp_ToggleSprint_MetaData) };
void Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HoldingSprintInput_SetBit(void* Obj)
{
	((AMultiplayerCharacter*)Obj)->HoldingSprintInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HoldingSprintInput = { "HoldingSprintInput", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerCharacter), &Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HoldingSprintInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoldingSprintInput_MetaData), NewProp_HoldingSprintInput_MetaData) };
void Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_SprintCancelsReload_SetBit(void* Obj)
{
	((AMultiplayerCharacter*)Obj)->SprintCancelsReload = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_SprintCancelsReload = { "SprintCancelsReload", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerCharacter), &Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_SprintCancelsReload_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintCancelsReload_MetaData), NewProp_SprintCancelsReload_MetaData) };
void Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_FiringCancelsSprint_SetBit(void* Obj)
{
	((AMultiplayerCharacter*)Obj)->FiringCancelsSprint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_FiringCancelsSprint = { "FiringCancelsSprint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerCharacter), &Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_FiringCancelsSprint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FiringCancelsSprint_MetaData), NewProp_FiringCancelsSprint_MetaData) };
void Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_AimingCancelsSprint_SetBit(void* Obj)
{
	((AMultiplayerCharacter*)Obj)->AimingCancelsSprint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_AimingCancelsSprint = { "AimingCancelsSprint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerCharacter), &Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_AimingCancelsSprint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimingCancelsSprint_MetaData), NewProp_AimingCancelsSprint_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ShouldHolsterWeaponsWhenSprinting = { "ShouldHolsterWeaponsWhenSprinting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, ShouldHolsterWeaponsWhenSprinting), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShouldHolsterWeaponsWhenSprinting_MetaData), NewProp_ShouldHolsterWeaponsWhenSprinting_MetaData) };
void Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CanOnlySprintWhileMovingForward_SetBit(void* Obj)
{
	((AMultiplayerCharacter*)Obj)->CanOnlySprintWhileMovingForward = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CanOnlySprintWhileMovingForward = { "CanOnlySprintWhileMovingForward", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerCharacter), &Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CanOnlySprintWhileMovingForward_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanOnlySprintWhileMovingForward_MetaData), NewProp_CanOnlySprintWhileMovingForward_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_MinInputToSprint = { "MinInputToSprint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, MinInputToSprint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinInputToSprint_MetaData), NewProp_MinInputToSprint_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_MinSpeedToStartSprinting = { "MinSpeedToStartSprinting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, MinSpeedToStartSprinting), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinSpeedToStartSprinting_MetaData), NewProp_MinSpeedToStartSprinting_MetaData) };
void Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IsSprinting_SetBit(void* Obj)
{
	((AMultiplayerCharacter*)Obj)->IsSprinting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IsSprinting = { "IsSprinting", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerCharacter), &Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IsSprinting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsSprinting_MetaData), NewProp_IsSprinting_MetaData) };
void Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ShouldGoBackToSprinting_SetBit(void* Obj)
{
	((AMultiplayerCharacter*)Obj)->ShouldGoBackToSprinting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ShouldGoBackToSprinting = { "ShouldGoBackToSprinting", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerCharacter), &Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ShouldGoBackToSprinting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShouldGoBackToSprinting_MetaData), NewProp_ShouldGoBackToSprinting_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_TimeToPlaySprintAnimationAfterFire = { "TimeToPlaySprintAnimationAfterFire", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, TimeToPlaySprintAnimationAfterFire), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeToPlaySprintAnimationAfterFire_MetaData), NewProp_TimeToPlaySprintAnimationAfterFire_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_UseActorClassesForHitMarkers = { "UseActorClassesForHitMarkers", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, UseActorClassesForHitMarkers), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseActorClassesForHitMarkers_MetaData), NewProp_UseActorClassesForHitMarkers_MetaData) };
void Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CanGetHitMarkersOnSelf_SetBit(void* Obj)
{
	((AMultiplayerCharacter*)Obj)->CanGetHitMarkersOnSelf = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CanGetHitMarkersOnSelf = { "CanGetHitMarkersOnSelf", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerCharacter), &Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CanGetHitMarkersOnSelf_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanGetHitMarkersOnSelf_MetaData), NewProp_CanGetHitMarkersOnSelf_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HitMarkerActorSounds_ValueProp = { "HitMarkerActorSounds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HitMarkerActorSounds_Key_KeyProp = { "HitMarkerActorSounds_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HitMarkerActorSounds = { "HitMarkerActorSounds", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, HitMarkerActorSounds), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitMarkerActorSounds_MetaData), NewProp_HitMarkerActorSounds_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HitMarkerSurfaceSounds_ValueProp = { "HitMarkerSurfaceSounds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HitMarkerSurfaceSounds_Key_KeyProp = { "HitMarkerSurfaceSounds_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HitMarkerSurfaceSounds = { "HitMarkerSurfaceSounds", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, HitMarkerSurfaceSounds), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitMarkerSurfaceSounds_MetaData), NewProp_HitMarkerSurfaceSounds_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000024, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, PlayerIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerIndex_MetaData), NewProp_PlayerIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_OwningController = { "OwningController", nullptr, (EPropertyFlags)0x0010000000000024, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, OwningController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningController_MetaData), NewProp_OwningController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_OwningControllerCast = { "OwningControllerCast", nullptr, (EPropertyFlags)0x0020080000000024, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, OwningControllerCast), Z_Construct_UClass_AMultiplayerPlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningControllerCast_MetaData), NewProp_OwningControllerCast_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ReplicatedCameraLocation = { "ReplicatedCameraLocation", nullptr, (EPropertyFlags)0x0010000000000024, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, ReplicatedCameraLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicatedCameraLocation_MetaData), NewProp_ReplicatedCameraLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ReplicatedCameraRotation = { "ReplicatedCameraRotation", nullptr, (EPropertyFlags)0x0010000000000024, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, ReplicatedCameraRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicatedCameraRotation_MetaData), NewProp_ReplicatedCameraRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ReplicatedControlRotation = { "ReplicatedControlRotation", nullptr, (EPropertyFlags)0x0010000000000024, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, ReplicatedControlRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicatedControlRotation_MetaData), NewProp_ReplicatedControlRotation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HealthComponent = { "HealthComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, HealthComponent), Z_Construct_UClass_UMultiplayerHealthComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthComponent_MetaData), NewProp_HealthComponent_MetaData) };
void Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_UsingThirdPerson_SetBit(void* Obj)
{
	((AMultiplayerCharacter*)Obj)->UsingThirdPerson = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_UsingThirdPerson = { "UsingThirdPerson", nullptr, (EPropertyFlags)0x0010000000020025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerCharacter), &Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_UsingThirdPerson_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UsingThirdPerson_MetaData), NewProp_UsingThirdPerson_MetaData) };
void Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IsSwitchingPerspective_SetBit(void* Obj)
{
	((AMultiplayerCharacter*)Obj)->IsSwitchingPerspective = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IsSwitchingPerspective = { "IsSwitchingPerspective", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerCharacter), &Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IsSwitchingPerspective_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsSwitchingPerspective_MetaData), NewProp_IsSwitchingPerspective_MetaData) };
void Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_UsingThirdPersonLeftShoulder_SetBit(void* Obj)
{
	((AMultiplayerCharacter*)Obj)->UsingThirdPersonLeftShoulder = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_UsingThirdPersonLeftShoulder = { "UsingThirdPersonLeftShoulder", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerCharacter), &Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_UsingThirdPersonLeftShoulder_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UsingThirdPersonLeftShoulder_MetaData), NewProp_UsingThirdPersonLeftShoulder_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_FirstPersonSpringArmLength = { "FirstPersonSpringArmLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, FirstPersonSpringArmLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonSpringArmLength_MetaData), NewProp_FirstPersonSpringArmLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ThirdPersonSpringArmLengthRight = { "ThirdPersonSpringArmLengthRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, ThirdPersonSpringArmLengthRight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdPersonSpringArmLengthRight_MetaData), NewProp_ThirdPersonSpringArmLengthRight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ThirdPersonSpringArmLengthLeft = { "ThirdPersonSpringArmLengthLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, ThirdPersonSpringArmLengthLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdPersonSpringArmLengthLeft_MetaData), NewProp_ThirdPersonSpringArmLengthLeft_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_FirstPersonSpringArmLocation = { "FirstPersonSpringArmLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, FirstPersonSpringArmLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonSpringArmLocation_MetaData), NewProp_FirstPersonSpringArmLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ThirdPersonSpringArmLocationRight = { "ThirdPersonSpringArmLocationRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, ThirdPersonSpringArmLocationRight), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdPersonSpringArmLocationRight_MetaData), NewProp_ThirdPersonSpringArmLocationRight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ThirdPersonSpringArmLocationLeft = { "ThirdPersonSpringArmLocationLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, ThirdPersonSpringArmLocationLeft), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdPersonSpringArmLocationLeft_MetaData), NewProp_ThirdPersonSpringArmLocationLeft_MetaData) };
void Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_AttachSpringArmToPlayerModelFirstPerson_SetBit(void* Obj)
{
	((AMultiplayerCharacter*)Obj)->AttachSpringArmToPlayerModelFirstPerson = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_AttachSpringArmToPlayerModelFirstPerson = { "AttachSpringArmToPlayerModelFirstPerson", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerCharacter), &Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_AttachSpringArmToPlayerModelFirstPerson_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachSpringArmToPlayerModelFirstPerson_MetaData), NewProp_AttachSpringArmToPlayerModelFirstPerson_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_SocketToAttachSpringArmToFirstPerson = { "SocketToAttachSpringArmToFirstPerson", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, SocketToAttachSpringArmToFirstPerson), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketToAttachSpringArmToFirstPerson_MetaData), NewProp_SocketToAttachSpringArmToFirstPerson_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_FirstPersonPlayerModelMesh = { "FirstPersonPlayerModelMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, FirstPersonPlayerModelMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonPlayerModelMesh_MetaData), NewProp_FirstPersonPlayerModelMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_FirstPersonPlayerModelWithoutWeapons = { "FirstPersonPlayerModelWithoutWeapons", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, FirstPersonPlayerModelWithoutWeapons), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonPlayerModelWithoutWeapons_MetaData), NewProp_FirstPersonPlayerModelWithoutWeapons_MetaData) };
void Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_FirstPersonCameraLag_SetBit(void* Obj)
{
	((AMultiplayerCharacter*)Obj)->FirstPersonCameraLag = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_FirstPersonCameraLag = { "FirstPersonCameraLag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerCharacter), &Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_FirstPersonCameraLag_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonCameraLag_MetaData), NewProp_FirstPersonCameraLag_MetaData) };
void Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_FirstPersonCameraRotationLag_SetBit(void* Obj)
{
	((AMultiplayerCharacter*)Obj)->FirstPersonCameraRotationLag = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_FirstPersonCameraRotationLag = { "FirstPersonCameraRotationLag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerCharacter), &Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_FirstPersonCameraRotationLag_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonCameraRotationLag_MetaData), NewProp_FirstPersonCameraRotationLag_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_FirstPersonCameraLagSpeed = { "FirstPersonCameraLagSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, FirstPersonCameraLagSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonCameraLagSpeed_MetaData), NewProp_FirstPersonCameraLagSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_FirstPersonCameraRotationLagSpeed = { "FirstPersonCameraRotationLagSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, FirstPersonCameraRotationLagSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonCameraRotationLagSpeed_MetaData), NewProp_FirstPersonCameraRotationLagSpeed_MetaData) };
void Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ThirdPersonCameraLag_SetBit(void* Obj)
{
	((AMultiplayerCharacter*)Obj)->ThirdPersonCameraLag = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ThirdPersonCameraLag = { "ThirdPersonCameraLag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerCharacter), &Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ThirdPersonCameraLag_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdPersonCameraLag_MetaData), NewProp_ThirdPersonCameraLag_MetaData) };
void Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ThirdPersonCameraRotationLag_SetBit(void* Obj)
{
	((AMultiplayerCharacter*)Obj)->ThirdPersonCameraRotationLag = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ThirdPersonCameraRotationLag = { "ThirdPersonCameraRotationLag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerCharacter), &Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ThirdPersonCameraRotationLag_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdPersonCameraRotationLag_MetaData), NewProp_ThirdPersonCameraRotationLag_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ThirdPersonCameraLagSpeed = { "ThirdPersonCameraLagSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, ThirdPersonCameraLagSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdPersonCameraLagSpeed_MetaData), NewProp_ThirdPersonCameraLagSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ThirdPersonCameraRotationLagSpeed = { "ThirdPersonCameraRotationLagSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, ThirdPersonCameraRotationLagSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdPersonCameraRotationLagSpeed_MetaData), NewProp_ThirdPersonCameraRotationLagSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_PerspectiveTransitionTime = { "PerspectiveTransitionTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, PerspectiveTransitionTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerspectiveTransitionTime_MetaData), NewProp_PerspectiveTransitionTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ShoulderSwapTime = { "ShoulderSwapTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, ShoulderSwapTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShoulderSwapTime_MetaData), NewProp_ShoulderSwapTime_MetaData) };
void Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HidePlayerModelMeshInFirstPerson_SetBit(void* Obj)
{
	((AMultiplayerCharacter*)Obj)->HidePlayerModelMeshInFirstPerson = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HidePlayerModelMeshInFirstPerson = { "HidePlayerModelMeshInFirstPerson", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerCharacter), &Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HidePlayerModelMeshInFirstPerson_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HidePlayerModelMeshInFirstPerson_MetaData), NewProp_HidePlayerModelMeshInFirstPerson_MetaData) };
void Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HideFirstPersonArmsAndGunInFirstPerson_SetBit(void* Obj)
{
	((AMultiplayerCharacter*)Obj)->HideFirstPersonArmsAndGunInFirstPerson = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HideFirstPersonArmsAndGunInFirstPerson = { "HideFirstPersonArmsAndGunInFirstPerson", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerCharacter), &Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HideFirstPersonArmsAndGunInFirstPerson_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HideFirstPersonArmsAndGunInFirstPerson_MetaData), NewProp_HideFirstPersonArmsAndGunInFirstPerson_MetaData) };
void Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HideFirstPersonArmsWithoutWeapon_SetBit(void* Obj)
{
	((AMultiplayerCharacter*)Obj)->HideFirstPersonArmsWithoutWeapon = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HideFirstPersonArmsWithoutWeapon = { "HideFirstPersonArmsWithoutWeapon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerCharacter), &Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HideFirstPersonArmsWithoutWeapon_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HideFirstPersonArmsWithoutWeapon_MetaData), NewProp_HideFirstPersonArmsWithoutWeapon_MetaData) };
void Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HideThirdPersonGunInFirstPerson_SetBit(void* Obj)
{
	((AMultiplayerCharacter*)Obj)->HideThirdPersonGunInFirstPerson = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HideThirdPersonGunInFirstPerson = { "HideThirdPersonGunInFirstPerson", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerCharacter), &Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HideThirdPersonGunInFirstPerson_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HideThirdPersonGunInFirstPerson_MetaData), NewProp_HideThirdPersonGunInFirstPerson_MetaData) };
void Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CanInteract_SetBit(void* Obj)
{
	((AMultiplayerCharacter*)Obj)->CanInteract = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CanInteract = { "CanInteract", nullptr, (EPropertyFlags)0x0020080000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerCharacter), &Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CanInteract_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanInteract_MetaData), NewProp_CanInteract_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_InteractDistance = { "InteractDistance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, InteractDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractDistance_MetaData), NewProp_InteractDistance_MetaData) };
void Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_OverlappingInteractable_SetBit(void* Obj)
{
	((AMultiplayerCharacter*)Obj)->OverlappingInteractable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_OverlappingInteractable = { "OverlappingInteractable", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerCharacter), &Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_OverlappingInteractable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappingInteractable_MetaData), NewProp_OverlappingInteractable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_InteractableBeingOverlapped = { "InteractableBeingOverlapped", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, InteractableBeingOverlapped), Z_Construct_UClass_AInteractableItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractableBeingOverlapped_MetaData), NewProp_InteractableBeingOverlapped_MetaData) };
void Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CanShoot_SetBit(void* Obj)
{
	((AMultiplayerCharacter*)Obj)->CanShoot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CanShoot = { "CanShoot", nullptr, (EPropertyFlags)0x0020080000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerCharacter), &Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CanShoot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanShoot_MetaData), NewProp_CanShoot_MetaData) };
void Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ShootingCancelsReload_SetBit(void* Obj)
{
	((AMultiplayerCharacter*)Obj)->ShootingCancelsReload = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ShootingCancelsReload = { "ShootingCancelsReload", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerCharacter), &Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ShootingCancelsReload_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShootingCancelsReload_MetaData), NewProp_ShootingCancelsReload_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_DropWeaponsOnDeath = { "DropWeaponsOnDeath", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, DropWeaponsOnDeath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropWeaponsOnDeath_MetaData), NewProp_DropWeaponsOnDeath_MetaData) };
void Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HoldingFireInput_SetBit(void* Obj)
{
	((AMultiplayerCharacter*)Obj)->HoldingFireInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HoldingFireInput = { "HoldingFireInput", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerCharacter), &Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HoldingFireInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoldingFireInput_MetaData), NewProp_HoldingFireInput_MetaData) };
void Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ReturnToPreviousAnimationAfterFiring_SetBit(void* Obj)
{
	((AMultiplayerCharacter*)Obj)->ReturnToPreviousAnimationAfterFiring = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ReturnToPreviousAnimationAfterFiring = { "ReturnToPreviousAnimationAfterFiring", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerCharacter), &Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ReturnToPreviousAnimationAfterFiring_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnToPreviousAnimationAfterFiring_MetaData), NewProp_ReturnToPreviousAnimationAfterFiring_MetaData) };
void Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ResetArmsAnimationWhenFiring_SetBit(void* Obj)
{
	((AMultiplayerCharacter*)Obj)->ResetArmsAnimationWhenFiring = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ResetArmsAnimationWhenFiring = { "ResetArmsAnimationWhenFiring", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerCharacter), &Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ResetArmsAnimationWhenFiring_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResetArmsAnimationWhenFiring_MetaData), NewProp_ResetArmsAnimationWhenFiring_MetaData) };
void Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IsFiring_SetBit(void* Obj)
{
	((AMultiplayerCharacter*)Obj)->IsFiring = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IsFiring = { "IsFiring", nullptr, (EPropertyFlags)0x0020080000000024, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerCharacter), &Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IsFiring_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsFiring_MetaData), NewProp_IsFiring_MetaData) };
void Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HoldingJumpInput_SetBit(void* Obj)
{
	((AMultiplayerCharacter*)Obj)->HoldingJumpInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HoldingJumpInput = { "HoldingJumpInput", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerCharacter), &Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HoldingJumpInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoldingJumpInput_MetaData), NewProp_HoldingJumpInput_MetaData) };
void Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HoldingAimInput_SetBit(void* Obj)
{
	((AMultiplayerCharacter*)Obj)->HoldingAimInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HoldingAimInput = { "HoldingAimInput", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerCharacter), &Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HoldingAimInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoldingAimInput_MetaData), NewProp_HoldingAimInput_MetaData) };
void Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CanAim_SetBit(void* Obj)
{
	((AMultiplayerCharacter*)Obj)->CanAim = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CanAim = { "CanAim", nullptr, (EPropertyFlags)0x0020080000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerCharacter), &Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CanAim_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanAim_MetaData), NewProp_CanAim_MetaData) };
void Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_AimingCancelsReload_SetBit(void* Obj)
{
	((AMultiplayerCharacter*)Obj)->AimingCancelsReload = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_AimingCancelsReload = { "AimingCancelsReload", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerCharacter), &Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_AimingCancelsReload_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimingCancelsReload_MetaData), NewProp_AimingCancelsReload_MetaData) };
void Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HolsteringWeaponCancelsReload_SetBit(void* Obj)
{
	((AMultiplayerCharacter*)Obj)->HolsteringWeaponCancelsReload = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HolsteringWeaponCancelsReload = { "HolsteringWeaponCancelsReload", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerCharacter), &Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HolsteringWeaponCancelsReload_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HolsteringWeaponCancelsReload_MetaData), NewProp_HolsteringWeaponCancelsReload_MetaData) };
void Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IsAiming_SetBit(void* Obj)
{
	((AMultiplayerCharacter*)Obj)->IsAiming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IsAiming = { "IsAiming", nullptr, (EPropertyFlags)0x0020080000000024, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerCharacter), &Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IsAiming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsAiming_MetaData), NewProp_IsAiming_MetaData) };
void Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IsZoomingForAim_SetBit(void* Obj)
{
	((AMultiplayerCharacter*)Obj)->IsZoomingForAim = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IsZoomingForAim = { "IsZoomingForAim", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerCharacter), &Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IsZoomingForAim_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsZoomingForAim_MetaData), NewProp_IsZoomingForAim_MetaData) };
void Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IsADSing_SetBit(void* Obj)
{
	((AMultiplayerCharacter*)Obj)->IsADSing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IsADSing = { "IsADSing", nullptr, (EPropertyFlags)0x0020080000000024, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerCharacter), &Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IsADSing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsADSing_MetaData), NewProp_IsADSing_MetaData) };
void Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IsZoomedIn_SetBit(void* Obj)
{
	((AMultiplayerCharacter*)Obj)->IsZoomedIn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IsZoomedIn = { "IsZoomedIn", nullptr, (EPropertyFlags)0x0020080000000024, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerCharacter), &Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IsZoomedIn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsZoomedIn_MetaData), NewProp_IsZoomedIn_MetaData) };
void Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CanHolsterWeapons_SetBit(void* Obj)
{
	((AMultiplayerCharacter*)Obj)->CanHolsterWeapons = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CanHolsterWeapons = { "CanHolsterWeapons", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerCharacter), &Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CanHolsterWeapons_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanHolsterWeapons_MetaData), NewProp_CanHolsterWeapons_MetaData) };
void Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CanUnHolsterWeapons_SetBit(void* Obj)
{
	((AMultiplayerCharacter*)Obj)->CanUnHolsterWeapons = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CanUnHolsterWeapons = { "CanUnHolsterWeapons", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerCharacter), &Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CanUnHolsterWeapons_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanUnHolsterWeapons_MetaData), NewProp_CanUnHolsterWeapons_MetaData) };
void Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IsWeaponHolstered_SetBit(void* Obj)
{
	((AMultiplayerCharacter*)Obj)->IsWeaponHolstered = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IsWeaponHolstered = { "IsWeaponHolstered", nullptr, (EPropertyFlags)0x0020080000000024, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerCharacter), &Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IsWeaponHolstered_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsWeaponHolstered_MetaData), NewProp_IsWeaponHolstered_MetaData) };
void Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CanShootToUnHolsterWeapon_SetBit(void* Obj)
{
	((AMultiplayerCharacter*)Obj)->CanShootToUnHolsterWeapon = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CanShootToUnHolsterWeapon = { "CanShootToUnHolsterWeapon", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerCharacter), &Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CanShootToUnHolsterWeapon_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanShootToUnHolsterWeapon_MetaData), NewProp_CanShootToUnHolsterWeapon_MetaData) };
void Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CanAimToUnHolsterWeapon_SetBit(void* Obj)
{
	((AMultiplayerCharacter*)Obj)->CanAimToUnHolsterWeapon = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CanAimToUnHolsterWeapon = { "CanAimToUnHolsterWeapon", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerCharacter), &Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CanAimToUnHolsterWeapon_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanAimToUnHolsterWeapon_MetaData), NewProp_CanAimToUnHolsterWeapon_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_TimeToHolsterWeapon = { "TimeToHolsterWeapon", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, TimeToHolsterWeapon), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeToHolsterWeapon_MetaData), NewProp_TimeToHolsterWeapon_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_TimeToUnHolsterWeapon = { "TimeToUnHolsterWeapon", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, TimeToUnHolsterWeapon), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeToUnHolsterWeapon_MetaData), NewProp_TimeToUnHolsterWeapon_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_TimeToUnHolsterWeaponWhenFiring = { "TimeToUnHolsterWeaponWhenFiring", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, TimeToUnHolsterWeaponWhenFiring), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeToUnHolsterWeaponWhenFiring_MetaData), NewProp_TimeToUnHolsterWeaponWhenFiring_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_TimeToUnHolsterWeaponWhenAiming = { "TimeToUnHolsterWeaponWhenAiming", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, TimeToUnHolsterWeaponWhenAiming), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeToUnHolsterWeaponWhenAiming_MetaData), NewProp_TimeToUnHolsterWeaponWhenAiming_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_UseADS = { "UseADS", nullptr, (EPropertyFlags)0x0020080000000025, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, UseADS), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseADS_MetaData), NewProp_UseADS_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_OverrideSwitchPerspectiveWhenAiming = { "OverrideSwitchPerspectiveWhenAiming", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, OverrideSwitchPerspectiveWhenAiming), Z_Construct_UEnum_MultiplayerFPS_EAimSwitchPerspectiveType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideSwitchPerspectiveWhenAiming_MetaData), NewProp_OverrideSwitchPerspectiveWhenAiming_MetaData) }; // 1846365563
void Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_UsingThirdPersonBeforeAiming_SetBit(void* Obj)
{
	((AMultiplayerCharacter*)Obj)->UsingThirdPersonBeforeAiming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_UsingThirdPersonBeforeAiming = { "UsingThirdPersonBeforeAiming", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerCharacter), &Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_UsingThirdPersonBeforeAiming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UsingThirdPersonBeforeAiming_MetaData), NewProp_UsingThirdPersonBeforeAiming_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ArmsHorizontalRotaitonAxis = { "ArmsHorizontalRotaitonAxis", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, ArmsHorizontalRotaitonAxis), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmsHorizontalRotaitonAxis_MetaData), NewProp_ArmsHorizontalRotaitonAxis_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ArmsHorizontalLocationAxis = { "ArmsHorizontalLocationAxis", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, ArmsHorizontalLocationAxis), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmsHorizontalLocationAxis_MetaData), NewProp_ArmsHorizontalLocationAxis_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ArmsVerticalRotationAxis = { "ArmsVerticalRotationAxis", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, ArmsVerticalRotationAxis), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmsVerticalRotationAxis_MetaData), NewProp_ArmsVerticalRotationAxis_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ArmsVerticalLocationAxis = { "ArmsVerticalLocationAxis", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, ArmsVerticalLocationAxis), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmsVerticalLocationAxis_MetaData), NewProp_ArmsVerticalLocationAxis_MetaData) };
void Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CanHaveWeaponSway_SetBit(void* Obj)
{
	((AMultiplayerCharacter*)Obj)->CanHaveWeaponSway = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CanHaveWeaponSway = { "CanHaveWeaponSway", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerCharacter), &Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CanHaveWeaponSway_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanHaveWeaponSway_MetaData), NewProp_CanHaveWeaponSway_MetaData) };
void Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CanResetArmsPositionForWeaponSway_SetBit(void* Obj)
{
	((AMultiplayerCharacter*)Obj)->CanResetArmsPositionForWeaponSway = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CanResetArmsPositionForWeaponSway = { "CanResetArmsPositionForWeaponSway", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerCharacter), &Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CanResetArmsPositionForWeaponSway_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanResetArmsPositionForWeaponSway_MetaData), NewProp_CanResetArmsPositionForWeaponSway_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ArmsDefaultLocation = { "ArmsDefaultLocation", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, ArmsDefaultLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmsDefaultLocation_MetaData), NewProp_ArmsDefaultLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ArmsDefaultRotation = { "ArmsDefaultRotation", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, ArmsDefaultRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmsDefaultRotation_MetaData), NewProp_ArmsDefaultRotation_MetaData) };
void Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IsSwitchingWeapons_SetBit(void* Obj)
{
	((AMultiplayerCharacter*)Obj)->IsSwitchingWeapons = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IsSwitchingWeapons = { "IsSwitchingWeapons", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerCharacter), &Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IsSwitchingWeapons_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsSwitchingWeapons_MetaData), NewProp_IsSwitchingWeapons_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CurrentFOV = { "CurrentFOV", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, CurrentFOV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentFOV_MetaData), NewProp_CurrentFOV_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CurrentMouseSensitivityX = { "CurrentMouseSensitivityX", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, CurrentMouseSensitivityX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMouseSensitivityX_MetaData), NewProp_CurrentMouseSensitivityX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CurrentMouseSensitivityY = { "CurrentMouseSensitivityY", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, CurrentMouseSensitivityY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMouseSensitivityY_MetaData), NewProp_CurrentMouseSensitivityY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CurrentGamepadSensitivityX = { "CurrentGamepadSensitivityX", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, CurrentGamepadSensitivityX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentGamepadSensitivityX_MetaData), NewProp_CurrentGamepadSensitivityX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CurrentGamepadSensitivityY = { "CurrentGamepadSensitivityY", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, CurrentGamepadSensitivityY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentGamepadSensitivityY_MetaData), NewProp_CurrentGamepadSensitivityY_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HeadSocketName = { "HeadSocketName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, HeadSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeadSocketName_MetaData), NewProp_HeadSocketName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CameraHeadLocation = { "CameraHeadLocation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, CameraHeadLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraHeadLocation_MetaData), NewProp_CameraHeadLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CameraHeadRotation = { "CameraHeadRotation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, CameraHeadRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraHeadRotation_MetaData), NewProp_CameraHeadRotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_DelayToDestroyBody = { "DelayToDestroyBody", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, DelayToDestroyBody), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DelayToDestroyBody_MetaData), NewProp_DelayToDestroyBody_MetaData) };
void Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CanReload_SetBit(void* Obj)
{
	((AMultiplayerCharacter*)Obj)->CanReload = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CanReload = { "CanReload", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerCharacter), &Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CanReload_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanReload_MetaData), NewProp_CanReload_MetaData) };
void Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IsReloading_SetBit(void* Obj)
{
	((AMultiplayerCharacter*)Obj)->IsReloading = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IsReloading = { "IsReloading", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerCharacter), &Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IsReloading_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsReloading_MetaData), NewProp_IsReloading_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ReloadCharacterSound = { "ReloadCharacterSound", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, ReloadCharacterSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadCharacterSound_MetaData), NewProp_ReloadCharacterSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_AllWeapons_Inner = { "AllWeapons", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMultiplayerGun_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_AllWeapons = { "AllWeapons", nullptr, (EPropertyFlags)0x0020080000000024, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, AllWeapons), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllWeapons_MetaData), NewProp_AllWeapons_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_AllSharedCaliberNames_Inner = { "AllSharedCaliberNames", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_AllSharedCaliberNames = { "AllSharedCaliberNames", nullptr, (EPropertyFlags)0x0020080000020025, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, AllSharedCaliberNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllSharedCaliberNames_MetaData), NewProp_AllSharedCaliberNames_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_AllSharedCaliberAmounts_Inner = { "AllSharedCaliberAmounts", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_AllSharedCaliberAmounts = { "AllSharedCaliberAmounts", nullptr, (EPropertyFlags)0x0020080000020025, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, AllSharedCaliberAmounts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllSharedCaliberAmounts_MetaData), NewProp_AllSharedCaliberAmounts_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_TakeDamageCameraShake = { "TakeDamageCameraShake", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, TakeDamageCameraShake), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TakeDamageCameraShake_MetaData), NewProp_TakeDamageCameraShake_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_TakeDamageControllerVibration = { "TakeDamageControllerVibration", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, TakeDamageControllerVibration), Z_Construct_UClass_UForceFeedbackEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TakeDamageControllerVibration_MetaData), NewProp_TakeDamageControllerVibration_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_TakeDamageControllerVibrationTag = { "TakeDamageControllerVibrationTag", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, TakeDamageControllerVibrationTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TakeDamageControllerVibrationTag_MetaData), NewProp_TakeDamageControllerVibrationTag_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_DieDamageCameraShake = { "DieDamageCameraShake", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, DieDamageCameraShake), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DieDamageCameraShake_MetaData), NewProp_DieDamageCameraShake_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_DieControllerVibration = { "DieControllerVibration", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, DieControllerVibration), Z_Construct_UClass_UForceFeedbackEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DieControllerVibration_MetaData), NewProp_DieControllerVibration_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_DieControllerVibrationTag = { "DieControllerVibrationTag", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, DieControllerVibrationTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DieControllerVibrationTag_MetaData), NewProp_DieControllerVibrationTag_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_GetPlayerControllerTimerHandle = { "GetPlayerControllerTimerHandle", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, GetPlayerControllerTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GetPlayerControllerTimerHandle_MetaData), NewProp_GetPlayerControllerTimerHandle_MetaData) }; // 756291145
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_DestroySelfTimerHandle = { "DestroySelfTimerHandle", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, DestroySelfTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestroySelfTimerHandle_MetaData), NewProp_DestroySelfTimerHandle_MetaData) }; // 756291145
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_SwitchWeaponsTimerHandle = { "SwitchWeaponsTimerHandle", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, SwitchWeaponsTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwitchWeaponsTimerHandle_MetaData), NewProp_SwitchWeaponsTimerHandle_MetaData) }; // 756291145
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ReloadTimerHandle = { "ReloadTimerHandle", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, ReloadTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadTimerHandle_MetaData), NewProp_ReloadTimerHandle_MetaData) }; // 756291145
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ArmsAnimationModeTimerHandle = { "ArmsAnimationModeTimerHandle", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, ArmsAnimationModeTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmsAnimationModeTimerHandle_MetaData), NewProp_ArmsAnimationModeTimerHandle_MetaData) }; // 756291145
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_PlayerModelAnimationModeTimerHandle = { "PlayerModelAnimationModeTimerHandle", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, PlayerModelAnimationModeTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerModelAnimationModeTimerHandle_MetaData), NewProp_PlayerModelAnimationModeTimerHandle_MetaData) }; // 756291145
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HolsterWeaponsTimerHandle = { "HolsterWeaponsTimerHandle", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, HolsterWeaponsTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HolsterWeaponsTimerHandle_MetaData), NewProp_HolsterWeaponsTimerHandle_MetaData) }; // 756291145
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_SprintTimerHandle = { "SprintTimerHandle", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, SprintTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintTimerHandle_MetaData), NewProp_SprintTimerHandle_MetaData) }; // 756291145
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_GoBackToSprintTimerHandle = { "GoBackToSprintTimerHandle", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, GoBackToSprintTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoBackToSprintTimerHandle_MetaData), NewProp_GoBackToSprintTimerHandle_MetaData) }; // 756291145
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CheckIfCanSprintTimerHandle = { "CheckIfCanSprintTimerHandle", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerCharacter, CheckIfCanSprintTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckIfCanSprintTimerHandle_MetaData), NewProp_CheckIfCanSprintTimerHandle_MetaData) }; // 756291145
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMultiplayerCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IMC_Default,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IMC_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IA_Move,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IA_Look,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IA_GamepadLook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IA_Interact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IA_Jump,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IA_Fire,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IA_Aim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IA_Reload,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IA_NextWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IA_PreviousWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IA_GamepadSwitchWeapons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IA_SwitchPerspective,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IA_ThirdPersonShoulderSwap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IA_SwitchToWeapon1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IA_SwitchToWeapon2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IA_ToggleWeaponHolstered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IA_Sprint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_SpringArmParent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ArmsMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_FirstPersonPlayerModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_MovementVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HoldingMoveInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_AppliedPerspectiveVisibilityOnClient,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CurrentWeaponIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_FieldOfView,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_MouseDefaultSensitivityX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_MouseAimingSensitivityX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_MouseDefaultSensitivityY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_MouseAimingSensitivityY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_MouseAimingSensitivityMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_GamepadDefaultSensitivityX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_GamepadAimingSensitivityX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_GamepadDefaultSensitivityY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_GamepadAimingSensitivityY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_GamepadAimingSensitivityMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_UseAimSensitivityMultipler,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ToggleAim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HoldButtonToJump,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_DefaultMovementSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_SprintingMovementSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ApplySpeedPenaltyIfWeaponsHolstered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CanSprint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ToggleSprint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HoldingSprintInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_SprintCancelsReload,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_FiringCancelsSprint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_AimingCancelsSprint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ShouldHolsterWeaponsWhenSprinting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CanOnlySprintWhileMovingForward,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_MinInputToSprint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_MinSpeedToStartSprinting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IsSprinting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ShouldGoBackToSprinting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_TimeToPlaySprintAnimationAfterFire,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_UseActorClassesForHitMarkers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CanGetHitMarkersOnSelf,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HitMarkerActorSounds_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HitMarkerActorSounds_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HitMarkerActorSounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HitMarkerSurfaceSounds_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HitMarkerSurfaceSounds_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HitMarkerSurfaceSounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_PlayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_OwningController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_OwningControllerCast,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ReplicatedCameraLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ReplicatedCameraRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ReplicatedControlRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HealthComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_UsingThirdPerson,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IsSwitchingPerspective,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_UsingThirdPersonLeftShoulder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_FirstPersonSpringArmLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ThirdPersonSpringArmLengthRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ThirdPersonSpringArmLengthLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_FirstPersonSpringArmLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ThirdPersonSpringArmLocationRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ThirdPersonSpringArmLocationLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_AttachSpringArmToPlayerModelFirstPerson,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_SocketToAttachSpringArmToFirstPerson,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_FirstPersonPlayerModelMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_FirstPersonPlayerModelWithoutWeapons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_FirstPersonCameraLag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_FirstPersonCameraRotationLag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_FirstPersonCameraLagSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_FirstPersonCameraRotationLagSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ThirdPersonCameraLag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ThirdPersonCameraRotationLag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ThirdPersonCameraLagSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ThirdPersonCameraRotationLagSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_PerspectiveTransitionTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ShoulderSwapTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HidePlayerModelMeshInFirstPerson,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HideFirstPersonArmsAndGunInFirstPerson,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HideFirstPersonArmsWithoutWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HideThirdPersonGunInFirstPerson,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CanInteract,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_InteractDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_OverlappingInteractable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_InteractableBeingOverlapped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CanShoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ShootingCancelsReload,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_DropWeaponsOnDeath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HoldingFireInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ReturnToPreviousAnimationAfterFiring,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ResetArmsAnimationWhenFiring,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IsFiring,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HoldingJumpInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HoldingAimInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CanAim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_AimingCancelsReload,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HolsteringWeaponCancelsReload,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IsAiming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IsZoomingForAim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IsADSing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IsZoomedIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CanHolsterWeapons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CanUnHolsterWeapons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IsWeaponHolstered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CanShootToUnHolsterWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CanAimToUnHolsterWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_TimeToHolsterWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_TimeToUnHolsterWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_TimeToUnHolsterWeaponWhenFiring,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_TimeToUnHolsterWeaponWhenAiming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_UseADS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_OverrideSwitchPerspectiveWhenAiming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_UsingThirdPersonBeforeAiming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ArmsHorizontalRotaitonAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ArmsHorizontalLocationAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ArmsVerticalRotationAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ArmsVerticalLocationAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CanHaveWeaponSway,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CanResetArmsPositionForWeaponSway,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ArmsDefaultLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ArmsDefaultRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IsSwitchingWeapons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CurrentFOV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CurrentMouseSensitivityX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CurrentMouseSensitivityY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CurrentGamepadSensitivityX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CurrentGamepadSensitivityY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HeadSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CameraHeadLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CameraHeadRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_DelayToDestroyBody,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CanReload,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_IsReloading,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ReloadCharacterSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_AllWeapons_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_AllWeapons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_AllSharedCaliberNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_AllSharedCaliberNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_AllSharedCaliberAmounts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_AllSharedCaliberAmounts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_TakeDamageCameraShake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_TakeDamageControllerVibration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_TakeDamageControllerVibrationTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_DieDamageCameraShake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_DieControllerVibration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_DieControllerVibrationTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_GetPlayerControllerTimerHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_DestroySelfTimerHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_SwitchWeaponsTimerHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ReloadTimerHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ArmsAnimationModeTimerHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_PlayerModelAnimationModeTimerHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_HolsterWeaponsTimerHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_SprintTimerHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_GoBackToSprintTimerHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CheckIfCanSprintTimerHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMultiplayerCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMultiplayerCharacter_Statics::ClassParams = {
	&AMultiplayerCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMultiplayerCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMultiplayerCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMultiplayerCharacter()
{
	if (!Z_Registration_Info_UClass_AMultiplayerCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMultiplayerCharacter.OuterSingleton, Z_Construct_UClass_AMultiplayerCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMultiplayerCharacter.OuterSingleton;
}
template<> MULTIPLAYERFPS_API UClass* StaticClass<AMultiplayerCharacter>()
{
	return AMultiplayerCharacter::StaticClass();
}
void AMultiplayerCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_CurrentWeaponIndex(TEXT("CurrentWeaponIndex"));
	static const FName Name_PlayerIndex(TEXT("PlayerIndex"));
	static const FName Name_OwningController(TEXT("OwningController"));
	static const FName Name_OwningControllerCast(TEXT("OwningControllerCast"));
	static const FName Name_ReplicatedCameraLocation(TEXT("ReplicatedCameraLocation"));
	static const FName Name_ReplicatedCameraRotation(TEXT("ReplicatedCameraRotation"));
	static const FName Name_ReplicatedControlRotation(TEXT("ReplicatedControlRotation"));
	static const FName Name_UsingThirdPerson(TEXT("UsingThirdPerson"));
	static const FName Name_CanInteract(TEXT("CanInteract"));
	static const FName Name_CanShoot(TEXT("CanShoot"));
	static const FName Name_IsFiring(TEXT("IsFiring"));
	static const FName Name_CanAim(TEXT("CanAim"));
	static const FName Name_IsAiming(TEXT("IsAiming"));
	static const FName Name_IsADSing(TEXT("IsADSing"));
	static const FName Name_IsZoomedIn(TEXT("IsZoomedIn"));
	static const FName Name_IsWeaponHolstered(TEXT("IsWeaponHolstered"));
	static const FName Name_UseADS(TEXT("UseADS"));
	static const FName Name_AllWeapons(TEXT("AllWeapons"));
	static const FName Name_AllSharedCaliberNames(TEXT("AllSharedCaliberNames"));
	static const FName Name_AllSharedCaliberAmounts(TEXT("AllSharedCaliberAmounts"));
	const bool bIsValid = true
		&& Name_CurrentWeaponIndex == ClassReps[(int32)ENetFields_Private::CurrentWeaponIndex].Property->GetFName()
		&& Name_PlayerIndex == ClassReps[(int32)ENetFields_Private::PlayerIndex].Property->GetFName()
		&& Name_OwningController == ClassReps[(int32)ENetFields_Private::OwningController].Property->GetFName()
		&& Name_OwningControllerCast == ClassReps[(int32)ENetFields_Private::OwningControllerCast].Property->GetFName()
		&& Name_ReplicatedCameraLocation == ClassReps[(int32)ENetFields_Private::ReplicatedCameraLocation].Property->GetFName()
		&& Name_ReplicatedCameraRotation == ClassReps[(int32)ENetFields_Private::ReplicatedCameraRotation].Property->GetFName()
		&& Name_ReplicatedControlRotation == ClassReps[(int32)ENetFields_Private::ReplicatedControlRotation].Property->GetFName()
		&& Name_UsingThirdPerson == ClassReps[(int32)ENetFields_Private::UsingThirdPerson].Property->GetFName()
		&& Name_CanInteract == ClassReps[(int32)ENetFields_Private::CanInteract].Property->GetFName()
		&& Name_CanShoot == ClassReps[(int32)ENetFields_Private::CanShoot].Property->GetFName()
		&& Name_IsFiring == ClassReps[(int32)ENetFields_Private::IsFiring].Property->GetFName()
		&& Name_CanAim == ClassReps[(int32)ENetFields_Private::CanAim].Property->GetFName()
		&& Name_IsAiming == ClassReps[(int32)ENetFields_Private::IsAiming].Property->GetFName()
		&& Name_IsADSing == ClassReps[(int32)ENetFields_Private::IsADSing].Property->GetFName()
		&& Name_IsZoomedIn == ClassReps[(int32)ENetFields_Private::IsZoomedIn].Property->GetFName()
		&& Name_IsWeaponHolstered == ClassReps[(int32)ENetFields_Private::IsWeaponHolstered].Property->GetFName()
		&& Name_UseADS == ClassReps[(int32)ENetFields_Private::UseADS].Property->GetFName()
		&& Name_AllWeapons == ClassReps[(int32)ENetFields_Private::AllWeapons].Property->GetFName()
		&& Name_AllSharedCaliberNames == ClassReps[(int32)ENetFields_Private::AllSharedCaliberNames].Property->GetFName()
		&& Name_AllSharedCaliberAmounts == ClassReps[(int32)ENetFields_Private::AllSharedCaliberAmounts].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AMultiplayerCharacter"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMultiplayerCharacter);
AMultiplayerCharacter::~AMultiplayerCharacter() {}
// End Class AMultiplayerCharacter

// Begin Registration
<<<<<<< HEAD
struct Z_CompiledInDeferFile_FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerCharacter_h_Statics
=======
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_MultiplayerCharacter_h_Statics
>>>>>>> parent of f0bfb2a (SLN)
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMultiplayerCharacter, AMultiplayerCharacter::StaticClass, TEXT("AMultiplayerCharacter"), &Z_Registration_Info_UClass_AMultiplayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMultiplayerCharacter), 401469678U) },
	};
};
<<<<<<< HEAD
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerCharacter_h_2695158951(TEXT("/Script/MultiplayerFPS"),
	Z_CompiledInDeferFile_FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerCharacter_h_Statics::ClassInfo),
=======
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_MultiplayerCharacter_h_1651882602(TEXT("/Script/MultiplayerFPS"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_MultiplayerCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_MultiplayerCharacter_h_Statics::ClassInfo),
>>>>>>> parent of f0bfb2a (SLN)
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
