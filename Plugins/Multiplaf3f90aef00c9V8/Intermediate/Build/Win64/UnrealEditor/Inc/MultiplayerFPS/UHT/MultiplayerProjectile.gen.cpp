// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayerFPS/Public/MultiplayerProjectile.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
#include "Runtime/Engine/Classes/Engine/TimerHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerProjectile() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackAttenuation_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackEffect_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_URadialForceComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
MULTIPLAYERFPS_API UClass* Z_Construct_UClass_AMultiplayerProjectile();
MULTIPLAYERFPS_API UClass* Z_Construct_UClass_AMultiplayerProjectile_NoRegister();
MULTIPLAYERFPS_API UFunction* Z_Construct_UDelegateFunction_MultiplayerFPS_OnProjectileHit__DelegateSignature();
PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
UPackage* Z_Construct_UPackage__Script_MultiplayerFPS();
// End Cross Module References

// Begin Delegate FOnProjectileHit
struct Z_Construct_UDelegateFunction_MultiplayerFPS_OnProjectileHit__DelegateSignature_Statics
{
	struct _Script_MultiplayerFPS_eventOnProjectileHit_Parms
	{
		AActor* ActorHit;
		UPhysicalMaterial* HitSurface;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorHit;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitSurface;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MultiplayerFPS_OnProjectileHit__DelegateSignature_Statics::NewProp_ActorHit = { "ActorHit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MultiplayerFPS_eventOnProjectileHit_Parms, ActorHit), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MultiplayerFPS_OnProjectileHit__DelegateSignature_Statics::NewProp_HitSurface = { "HitSurface", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MultiplayerFPS_eventOnProjectileHit_Parms, HitSurface), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MultiplayerFPS_OnProjectileHit__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MultiplayerFPS_OnProjectileHit__DelegateSignature_Statics::NewProp_ActorHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MultiplayerFPS_OnProjectileHit__DelegateSignature_Statics::NewProp_HitSurface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayerFPS_OnProjectileHit__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MultiplayerFPS_OnProjectileHit__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MultiplayerFPS, nullptr, "OnProjectileHit__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MultiplayerFPS_OnProjectileHit__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayerFPS_OnProjectileHit__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MultiplayerFPS_OnProjectileHit__DelegateSignature_Statics::_Script_MultiplayerFPS_eventOnProjectileHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayerFPS_OnProjectileHit__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MultiplayerFPS_OnProjectileHit__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MultiplayerFPS_OnProjectileHit__DelegateSignature_Statics::_Script_MultiplayerFPS_eventOnProjectileHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MultiplayerFPS_OnProjectileHit__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MultiplayerFPS_OnProjectileHit__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnProjectileHit_DelegateWrapper(const FMulticastScriptDelegate& OnProjectileHit, AActor* ActorHit, UPhysicalMaterial* HitSurface)
{
	struct _Script_MultiplayerFPS_eventOnProjectileHit_Parms
	{
		AActor* ActorHit;
		UPhysicalMaterial* HitSurface;
	};
	_Script_MultiplayerFPS_eventOnProjectileHit_Parms Parms;
	Parms.ActorHit=ActorHit;
	Parms.HitSurface=HitSurface;
	OnProjectileHit.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnProjectileHit

// Begin Class AMultiplayerProjectile Function DestroySelf
struct Z_Construct_UFunction_AMultiplayerProjectile_DestroySelf_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_DestroySelf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "DestroySelf", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_DestroySelf_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_DestroySelf_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_DestroySelf()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_DestroySelf_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execDestroySelf)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DestroySelf();
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function DestroySelf

// Begin Class AMultiplayerProjectile Function DetermineBeginPlayDespawnTimer
struct Z_Construct_UFunction_AMultiplayerProjectile_DetermineBeginPlayDespawnTimer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_DetermineBeginPlayDespawnTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "DetermineBeginPlayDespawnTimer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_DetermineBeginPlayDespawnTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_DetermineBeginPlayDespawnTimer_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_DetermineBeginPlayDespawnTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_DetermineBeginPlayDespawnTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execDetermineBeginPlayDespawnTimer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DetermineBeginPlayDespawnTimer();
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function DetermineBeginPlayDespawnTimer

// Begin Class AMultiplayerProjectile Function DetermineBulletHitModeDelay
struct Z_Construct_UFunction_AMultiplayerProjectile_DetermineBulletHitModeDelay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_DetermineBulletHitModeDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "DetermineBulletHitModeDelay", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_DetermineBulletHitModeDelay_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_DetermineBulletHitModeDelay_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_DetermineBulletHitModeDelay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_DetermineBulletHitModeDelay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execDetermineBulletHitModeDelay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DetermineBulletHitModeDelay();
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function DetermineBulletHitModeDelay

// Begin Class AMultiplayerProjectile Function ExecuteHitFunction
struct MultiplayerProjectile_eventExecuteHitFunction_Parms
{
	AActor* ParentPlayer;
	AActor* HitActor;
};
static const FName NAME_AMultiplayerProjectile_ExecuteHitFunction = FName(TEXT("ExecuteHitFunction"));
void AMultiplayerProjectile::ExecuteHitFunction(AActor* ParentPlayer, AActor* HitActor)
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerProjectile_ExecuteHitFunction);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		MultiplayerProjectile_eventExecuteHitFunction_Parms Parms;
		Parms.ParentPlayer=ParentPlayer;
		Parms.HitActor=HitActor;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		ExecuteHitFunction_Implementation(ParentPlayer, HitActor);
	}
}
struct Z_Construct_UFunction_AMultiplayerProjectile_ExecuteHitFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "CPP_Default_HitActor", "None" },
		{ "CPP_Default_ParentPlayer", "None" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentPlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_ExecuteHitFunction_Statics::NewProp_ParentPlayer = { "ParentPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventExecuteHitFunction_Parms, ParentPlayer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_ExecuteHitFunction_Statics::NewProp_HitActor = { "HitActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventExecuteHitFunction_Parms, HitActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_ExecuteHitFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_ExecuteHitFunction_Statics::NewProp_ParentPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_ExecuteHitFunction_Statics::NewProp_HitActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_ExecuteHitFunction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_ExecuteHitFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "ExecuteHitFunction", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_ExecuteHitFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_ExecuteHitFunction_Statics::PropPointers), sizeof(MultiplayerProjectile_eventExecuteHitFunction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_ExecuteHitFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_ExecuteHitFunction_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerProjectile_eventExecuteHitFunction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_ExecuteHitFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_ExecuteHitFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execExecuteHitFunction)
{
	P_GET_OBJECT(AActor,Z_Param_ParentPlayer);
	P_GET_OBJECT(AActor,Z_Param_HitActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExecuteHitFunction_Implementation(Z_Param_ParentPlayer,Z_Param_HitActor);
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function ExecuteHitFunction

// Begin Class AMultiplayerProjectile Function Explode
struct MultiplayerProjectile_eventExplode_Parms
{
	FHitResult Hit;
	bool UseCurrentLocationForHit;
};
static const FName NAME_AMultiplayerProjectile_Explode = FName(TEXT("Explode"));
void AMultiplayerProjectile::Explode(FHitResult const& Hit, bool UseCurrentLocationForHit)
{
	MultiplayerProjectile_eventExplode_Parms Parms;
	Parms.Hit=Hit;
	Parms.UseCurrentLocationForHit=UseCurrentLocationForHit ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerProjectile_Explode);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerProjectile_Explode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "CPP_Default_UseCurrentLocationForHit", "false" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static void NewProp_UseCurrentLocationForHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseCurrentLocationForHit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_Explode_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventExplode_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 4100991306
void Z_Construct_UFunction_AMultiplayerProjectile_Explode_Statics::NewProp_UseCurrentLocationForHit_SetBit(void* Obj)
{
	((MultiplayerProjectile_eventExplode_Parms*)Obj)->UseCurrentLocationForHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_Explode_Statics::NewProp_UseCurrentLocationForHit = { "UseCurrentLocationForHit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerProjectile_eventExplode_Parms), &Z_Construct_UFunction_AMultiplayerProjectile_Explode_Statics::NewProp_UseCurrentLocationForHit_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_Explode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_Explode_Statics::NewProp_Hit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_Explode_Statics::NewProp_UseCurrentLocationForHit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_Explode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_Explode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "Explode", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_Explode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_Explode_Statics::PropPointers), sizeof(MultiplayerProjectile_eventExplode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_Explode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_Explode_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerProjectile_eventExplode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_Explode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_Explode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execExplode)
{
	P_GET_STRUCT(FHitResult,Z_Param_Hit);
	P_GET_UBOOL(Z_Param_UseCurrentLocationForHit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Explode_Implementation(Z_Param_Hit,Z_Param_UseCurrentLocationForHit);
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function Explode

// Begin Class AMultiplayerProjectile Function GetBulletHitControllerVibration
struct Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitControllerVibration_Statics
{
	struct MultiplayerProjectile_eventGetBulletHitControllerVibration_Parms
	{
		UForceFeedbackEffect* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitControllerVibration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventGetBulletHitControllerVibration_Parms, ReturnValue), Z_Construct_UClass_UForceFeedbackEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitControllerVibration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitControllerVibration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitControllerVibration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitControllerVibration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "GetBulletHitControllerVibration", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitControllerVibration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitControllerVibration_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitControllerVibration_Statics::MultiplayerProjectile_eventGetBulletHitControllerVibration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitControllerVibration_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitControllerVibration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitControllerVibration_Statics::MultiplayerProjectile_eventGetBulletHitControllerVibration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitControllerVibration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitControllerVibration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execGetBulletHitControllerVibration)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UForceFeedbackEffect**)Z_Param__Result=P_THIS->GetBulletHitControllerVibration();
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function GetBulletHitControllerVibration

// Begin Class AMultiplayerProjectile Function GetBulletHitControllerVibrationAttenuation
struct Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitControllerVibrationAttenuation_Statics
{
	struct MultiplayerProjectile_eventGetBulletHitControllerVibrationAttenuation_Parms
	{
		UForceFeedbackAttenuation* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitControllerVibrationAttenuation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventGetBulletHitControllerVibrationAttenuation_Parms, ReturnValue), Z_Construct_UClass_UForceFeedbackAttenuation_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitControllerVibrationAttenuation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitControllerVibrationAttenuation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitControllerVibrationAttenuation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitControllerVibrationAttenuation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "GetBulletHitControllerVibrationAttenuation", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitControllerVibrationAttenuation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitControllerVibrationAttenuation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitControllerVibrationAttenuation_Statics::MultiplayerProjectile_eventGetBulletHitControllerVibrationAttenuation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitControllerVibrationAttenuation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitControllerVibrationAttenuation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitControllerVibrationAttenuation_Statics::MultiplayerProjectile_eventGetBulletHitControllerVibrationAttenuation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitControllerVibrationAttenuation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitControllerVibrationAttenuation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execGetBulletHitControllerVibrationAttenuation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UForceFeedbackAttenuation**)Z_Param__Result=P_THIS->GetBulletHitControllerVibrationAttenuation();
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function GetBulletHitControllerVibrationAttenuation

// Begin Class AMultiplayerProjectile Function GetBulletHitControllerVibrationTag
struct Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitControllerVibrationTag_Statics
{
	struct MultiplayerProjectile_eventGetBulletHitControllerVibrationTag_Parms
	{
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitControllerVibrationTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventGetBulletHitControllerVibrationTag_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitControllerVibrationTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitControllerVibrationTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitControllerVibrationTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitControllerVibrationTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "GetBulletHitControllerVibrationTag", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitControllerVibrationTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitControllerVibrationTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitControllerVibrationTag_Statics::MultiplayerProjectile_eventGetBulletHitControllerVibrationTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitControllerVibrationTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitControllerVibrationTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitControllerVibrationTag_Statics::MultiplayerProjectile_eventGetBulletHitControllerVibrationTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitControllerVibrationTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitControllerVibrationTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execGetBulletHitControllerVibrationTag)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetBulletHitControllerVibrationTag();
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function GetBulletHitControllerVibrationTag

// Begin Class AMultiplayerProjectile Function GetBulletHitDecals
struct Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitDecals_Statics
{
	struct MultiplayerProjectile_eventGetBulletHitDecals_Parms
	{
		TMap<UMaterialInterface*,UPhysicalMaterial*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitDecals_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitDecals_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitDecals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventGetBulletHitDecals_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitDecals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitDecals_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitDecals_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitDecals_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitDecals_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitDecals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "GetBulletHitDecals", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitDecals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitDecals_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitDecals_Statics::MultiplayerProjectile_eventGetBulletHitDecals_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitDecals_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitDecals_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitDecals_Statics::MultiplayerProjectile_eventGetBulletHitDecals_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitDecals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitDecals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execGetBulletHitDecals)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<UMaterialInterface*,UPhysicalMaterial*>*)Z_Param__Result=P_THIS->GetBulletHitDecals();
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function GetBulletHitDecals

// Begin Class AMultiplayerProjectile Function GetBulletHitDecalSize
struct Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitDecalSize_Statics
{
	struct MultiplayerProjectile_eventGetBulletHitDecalSize_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitDecalSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventGetBulletHitDecalSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitDecalSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitDecalSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitDecalSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitDecalSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "GetBulletHitDecalSize", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitDecalSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitDecalSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitDecalSize_Statics::MultiplayerProjectile_eventGetBulletHitDecalSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitDecalSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitDecalSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitDecalSize_Statics::MultiplayerProjectile_eventGetBulletHitDecalSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitDecalSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitDecalSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execGetBulletHitDecalSize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetBulletHitDecalSize();
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function GetBulletHitDecalSize

// Begin Class AMultiplayerProjectile Function GetBulletHitMode
struct Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitMode_Statics
{
	struct MultiplayerProjectile_eventGetBulletHitMode_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventGetBulletHitMode_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "GetBulletHitMode", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitMode_Statics::MultiplayerProjectile_eventGetBulletHitMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitMode_Statics::MultiplayerProjectile_eventGetBulletHitMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execGetBulletHitMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetBulletHitMode();
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function GetBulletHitMode

// Begin Class AMultiplayerProjectile Function GetBulletHitModeDelay
struct Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitModeDelay_Statics
{
	struct MultiplayerProjectile_eventGetBulletHitModeDelay_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitModeDelay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventGetBulletHitModeDelay_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitModeDelay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitModeDelay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitModeDelay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitModeDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "GetBulletHitModeDelay", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitModeDelay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitModeDelay_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitModeDelay_Statics::MultiplayerProjectile_eventGetBulletHitModeDelay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitModeDelay_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitModeDelay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitModeDelay_Statics::MultiplayerProjectile_eventGetBulletHitModeDelay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitModeDelay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitModeDelay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execGetBulletHitModeDelay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetBulletHitModeDelay();
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function GetBulletHitModeDelay

// Begin Class AMultiplayerProjectile Function GetBulletHitSounds
struct Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitSounds_Statics
{
	struct MultiplayerProjectile_eventGetBulletHitSounds_Parms
	{
		TMap<USoundBase*,UPhysicalMaterial*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitSounds_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitSounds_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitSounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventGetBulletHitSounds_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitSounds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitSounds_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitSounds_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitSounds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitSounds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitSounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "GetBulletHitSounds", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitSounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitSounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitSounds_Statics::MultiplayerProjectile_eventGetBulletHitSounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitSounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitSounds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitSounds_Statics::MultiplayerProjectile_eventGetBulletHitSounds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitSounds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitSounds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execGetBulletHitSounds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<USoundBase*,UPhysicalMaterial*>*)Z_Param__Result=P_THIS->GetBulletHitSounds();
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function GetBulletHitSounds

// Begin Class AMultiplayerProjectile Function GetCanCrumbleDestructibleMeshes
struct Z_Construct_UFunction_AMultiplayerProjectile_GetCanCrumbleDestructibleMeshes_Statics
{
	struct MultiplayerProjectile_eventGetCanCrumbleDestructibleMeshes_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerProjectile_GetCanCrumbleDestructibleMeshes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MultiplayerProjectile_eventGetCanCrumbleDestructibleMeshes_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_GetCanCrumbleDestructibleMeshes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerProjectile_eventGetCanCrumbleDestructibleMeshes_Parms), &Z_Construct_UFunction_AMultiplayerProjectile_GetCanCrumbleDestructibleMeshes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_GetCanCrumbleDestructibleMeshes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_GetCanCrumbleDestructibleMeshes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetCanCrumbleDestructibleMeshes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_GetCanCrumbleDestructibleMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "GetCanCrumbleDestructibleMeshes", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_GetCanCrumbleDestructibleMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetCanCrumbleDestructibleMeshes_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetCanCrumbleDestructibleMeshes_Statics::MultiplayerProjectile_eventGetCanCrumbleDestructibleMeshes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetCanCrumbleDestructibleMeshes_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_GetCanCrumbleDestructibleMeshes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetCanCrumbleDestructibleMeshes_Statics::MultiplayerProjectile_eventGetCanCrumbleDestructibleMeshes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_GetCanCrumbleDestructibleMeshes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_GetCanCrumbleDestructibleMeshes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execGetCanCrumbleDestructibleMeshes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCanCrumbleDestructibleMeshes();
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function GetCanCrumbleDestructibleMeshes

// Begin Class AMultiplayerProjectile Function GetDamage
struct Z_Construct_UFunction_AMultiplayerProjectile_GetDamage_Statics
{
	struct MultiplayerProjectile_eventGetDamage_Parms
	{
		TMap<UPhysicalMaterial*,float> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_GetDamage_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_GetDamage_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_GetDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventGetDamage_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_GetDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_GetDamage_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_GetDamage_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_GetDamage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_GetDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "GetDamage", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_GetDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetDamage_Statics::MultiplayerProjectile_eventGetDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_GetDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetDamage_Statics::MultiplayerProjectile_eventGetDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_GetDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_GetDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execGetDamage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<UPhysicalMaterial*,float>*)Z_Param__Result=P_THIS->GetDamage();
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function GetDamage

// Begin Class AMultiplayerProjectile Function GetDamageFalloffMultiplierAtRange
struct Z_Construct_UFunction_AMultiplayerProjectile_GetDamageFalloffMultiplierAtRange_Statics
{
	struct MultiplayerProjectile_eventGetDamageFalloffMultiplierAtRange_Parms
	{
		TMap<float,float> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_GetDamageFalloffMultiplierAtRange_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_GetDamageFalloffMultiplierAtRange_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_GetDamageFalloffMultiplierAtRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventGetDamageFalloffMultiplierAtRange_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_GetDamageFalloffMultiplierAtRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_GetDamageFalloffMultiplierAtRange_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_GetDamageFalloffMultiplierAtRange_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_GetDamageFalloffMultiplierAtRange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetDamageFalloffMultiplierAtRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_GetDamageFalloffMultiplierAtRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "GetDamageFalloffMultiplierAtRange", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_GetDamageFalloffMultiplierAtRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetDamageFalloffMultiplierAtRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetDamageFalloffMultiplierAtRange_Statics::MultiplayerProjectile_eventGetDamageFalloffMultiplierAtRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetDamageFalloffMultiplierAtRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_GetDamageFalloffMultiplierAtRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetDamageFalloffMultiplierAtRange_Statics::MultiplayerProjectile_eventGetDamageFalloffMultiplierAtRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_GetDamageFalloffMultiplierAtRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_GetDamageFalloffMultiplierAtRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execGetDamageFalloffMultiplierAtRange)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<float,float>*)Z_Param__Result=P_THIS->GetDamageFalloffMultiplierAtRange();
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function GetDamageFalloffMultiplierAtRange

// Begin Class AMultiplayerProjectile Function GetDamageType
struct Z_Construct_UFunction_AMultiplayerProjectile_GetDamageType_Statics
{
	struct MultiplayerProjectile_eventGetDamageType_Parms
	{
		TSubclassOf<UDamageType> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_GetDamageType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventGetDamageType_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_GetDamageType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_GetDamageType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetDamageType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_GetDamageType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "GetDamageType", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_GetDamageType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetDamageType_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetDamageType_Statics::MultiplayerProjectile_eventGetDamageType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetDamageType_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_GetDamageType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetDamageType_Statics::MultiplayerProjectile_eventGetDamageType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_GetDamageType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_GetDamageType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execGetDamageType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSubclassOf<UDamageType>*)Z_Param__Result=P_THIS->GetDamageType();
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function GetDamageType

// Begin Class AMultiplayerProjectile Function GetDefaultBulletHitDecal
struct Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultBulletHitDecal_Statics
{
	struct MultiplayerProjectile_eventGetDefaultBulletHitDecal_Parms
	{
		UMaterialInterface* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultBulletHitDecal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventGetDefaultBulletHitDecal_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultBulletHitDecal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultBulletHitDecal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultBulletHitDecal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultBulletHitDecal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "GetDefaultBulletHitDecal", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultBulletHitDecal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultBulletHitDecal_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultBulletHitDecal_Statics::MultiplayerProjectile_eventGetDefaultBulletHitDecal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultBulletHitDecal_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultBulletHitDecal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultBulletHitDecal_Statics::MultiplayerProjectile_eventGetDefaultBulletHitDecal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultBulletHitDecal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultBulletHitDecal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execGetDefaultBulletHitDecal)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMaterialInterface**)Z_Param__Result=P_THIS->GetDefaultBulletHitDecal();
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function GetDefaultBulletHitDecal

// Begin Class AMultiplayerProjectile Function GetDefaultBulletHitSound
struct Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultBulletHitSound_Statics
{
	struct MultiplayerProjectile_eventGetDefaultBulletHitSound_Parms
	{
		USoundBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultBulletHitSound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventGetDefaultBulletHitSound_Parms, ReturnValue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultBulletHitSound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultBulletHitSound_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultBulletHitSound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultBulletHitSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "GetDefaultBulletHitSound", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultBulletHitSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultBulletHitSound_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultBulletHitSound_Statics::MultiplayerProjectile_eventGetDefaultBulletHitSound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultBulletHitSound_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultBulletHitSound_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultBulletHitSound_Statics::MultiplayerProjectile_eventGetDefaultBulletHitSound_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultBulletHitSound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultBulletHitSound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execGetDefaultBulletHitSound)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USoundBase**)Z_Param__Result=P_THIS->GetDefaultBulletHitSound();
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function GetDefaultBulletHitSound

// Begin Class AMultiplayerProjectile Function GetDefaultDamage
struct Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultDamage_Statics
{
	struct MultiplayerProjectile_eventGetDefaultDamage_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventGetDefaultDamage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultDamage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "GetDefaultDamage", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultDamage_Statics::MultiplayerProjectile_eventGetDefaultDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultDamage_Statics::MultiplayerProjectile_eventGetDefaultDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execGetDefaultDamage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDefaultDamage();
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function GetDefaultDamage

// Begin Class AMultiplayerProjectile Function GetDefaultHitEffect
struct Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultHitEffect_Statics
{
	struct MultiplayerProjectile_eventGetDefaultHitEffect_Parms
	{
		UParticleSystem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultHitEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventGetDefaultHitEffect_Parms, ReturnValue), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultHitEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultHitEffect_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultHitEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultHitEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "GetDefaultHitEffect", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultHitEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultHitEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultHitEffect_Statics::MultiplayerProjectile_eventGetDefaultHitEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultHitEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultHitEffect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultHitEffect_Statics::MultiplayerProjectile_eventGetDefaultHitEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultHitEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultHitEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execGetDefaultHitEffect)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UParticleSystem**)Z_Param__Result=P_THIS->GetDefaultHitEffect();
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function GetDefaultHitEffect

// Begin Class AMultiplayerProjectile Function GetDestructionSphereSize
struct Z_Construct_UFunction_AMultiplayerProjectile_GetDestructionSphereSize_Statics
{
	struct MultiplayerProjectile_eventGetDestructionSphereSize_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_GetDestructionSphereSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventGetDestructionSphereSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_GetDestructionSphereSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_GetDestructionSphereSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetDestructionSphereSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_GetDestructionSphereSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "GetDestructionSphereSize", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_GetDestructionSphereSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetDestructionSphereSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetDestructionSphereSize_Statics::MultiplayerProjectile_eventGetDestructionSphereSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetDestructionSphereSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_GetDestructionSphereSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetDestructionSphereSize_Statics::MultiplayerProjectile_eventGetDestructionSphereSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_GetDestructionSphereSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_GetDestructionSphereSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execGetDestructionSphereSize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetDestructionSphereSize();
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function GetDestructionSphereSize

// Begin Class AMultiplayerProjectile Function GetDestructionSphereToSpawn
struct Z_Construct_UFunction_AMultiplayerProjectile_GetDestructionSphereToSpawn_Statics
{
	struct MultiplayerProjectile_eventGetDestructionSphereToSpawn_Parms
	{
		TSubclassOf<AActor> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_GetDestructionSphereToSpawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventGetDestructionSphereToSpawn_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_GetDestructionSphereToSpawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_GetDestructionSphereToSpawn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetDestructionSphereToSpawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_GetDestructionSphereToSpawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "GetDestructionSphereToSpawn", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_GetDestructionSphereToSpawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetDestructionSphereToSpawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetDestructionSphereToSpawn_Statics::MultiplayerProjectile_eventGetDestructionSphereToSpawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetDestructionSphereToSpawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_GetDestructionSphereToSpawn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetDestructionSphereToSpawn_Statics::MultiplayerProjectile_eventGetDestructionSphereToSpawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_GetDestructionSphereToSpawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_GetDestructionSphereToSpawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execGetDestructionSphereToSpawn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSubclassOf<AActor>*)Z_Param__Result=P_THIS->GetDestructionSphereToSpawn();
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function GetDestructionSphereToSpawn

// Begin Class AMultiplayerProjectile Function GetExplosionIgnoredActors
struct Z_Construct_UFunction_AMultiplayerProjectile_GetExplosionIgnoredActors_Statics
{
	struct MultiplayerProjectile_eventGetExplosionIgnoredActors_Parms
	{
		TArray<AActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_GetExplosionIgnoredActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_GetExplosionIgnoredActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventGetExplosionIgnoredActors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_GetExplosionIgnoredActors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_GetExplosionIgnoredActors_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_GetExplosionIgnoredActors_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetExplosionIgnoredActors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_GetExplosionIgnoredActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "GetExplosionIgnoredActors", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_GetExplosionIgnoredActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetExplosionIgnoredActors_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetExplosionIgnoredActors_Statics::MultiplayerProjectile_eventGetExplosionIgnoredActors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetExplosionIgnoredActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_GetExplosionIgnoredActors_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetExplosionIgnoredActors_Statics::MultiplayerProjectile_eventGetExplosionIgnoredActors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_GetExplosionIgnoredActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_GetExplosionIgnoredActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execGetExplosionIgnoredActors)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetExplosionIgnoredActors();
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function GetExplosionIgnoredActors

// Begin Class AMultiplayerProjectile Function GetExplosionIgnoredClasses
struct Z_Construct_UFunction_AMultiplayerProjectile_GetExplosionIgnoredClasses_Statics
{
	struct MultiplayerProjectile_eventGetExplosionIgnoredClasses_Parms
	{
		TArray<TSubclassOf<AActor> > ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_GetExplosionIgnoredClasses_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_GetExplosionIgnoredClasses_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventGetExplosionIgnoredClasses_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_GetExplosionIgnoredClasses_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_GetExplosionIgnoredClasses_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_GetExplosionIgnoredClasses_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetExplosionIgnoredClasses_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_GetExplosionIgnoredClasses_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "GetExplosionIgnoredClasses", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_GetExplosionIgnoredClasses_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetExplosionIgnoredClasses_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetExplosionIgnoredClasses_Statics::MultiplayerProjectile_eventGetExplosionIgnoredClasses_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetExplosionIgnoredClasses_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_GetExplosionIgnoredClasses_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetExplosionIgnoredClasses_Statics::MultiplayerProjectile_eventGetExplosionIgnoredClasses_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_GetExplosionIgnoredClasses()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_GetExplosionIgnoredClasses_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execGetExplosionIgnoredClasses)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<TSubclassOf<AActor> >*)Z_Param__Result=P_THIS->GetExplosionIgnoredClasses();
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function GetExplosionIgnoredClasses

// Begin Class AMultiplayerProjectile Function GetExplosionIgnoreOwner
struct Z_Construct_UFunction_AMultiplayerProjectile_GetExplosionIgnoreOwner_Statics
{
	struct MultiplayerProjectile_eventGetExplosionIgnoreOwner_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerProjectile_GetExplosionIgnoreOwner_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MultiplayerProjectile_eventGetExplosionIgnoreOwner_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_GetExplosionIgnoreOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerProjectile_eventGetExplosionIgnoreOwner_Parms), &Z_Construct_UFunction_AMultiplayerProjectile_GetExplosionIgnoreOwner_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_GetExplosionIgnoreOwner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_GetExplosionIgnoreOwner_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetExplosionIgnoreOwner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_GetExplosionIgnoreOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "GetExplosionIgnoreOwner", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_GetExplosionIgnoreOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetExplosionIgnoreOwner_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetExplosionIgnoreOwner_Statics::MultiplayerProjectile_eventGetExplosionIgnoreOwner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetExplosionIgnoreOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_GetExplosionIgnoreOwner_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetExplosionIgnoreOwner_Statics::MultiplayerProjectile_eventGetExplosionIgnoreOwner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_GetExplosionIgnoreOwner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_GetExplosionIgnoreOwner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execGetExplosionIgnoreOwner)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetExplosionIgnoreOwner();
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function GetExplosionIgnoreOwner

// Begin Class AMultiplayerProjectile Function GetExplosiveCollisionChannel
struct Z_Construct_UFunction_AMultiplayerProjectile_GetExplosiveCollisionChannel_Statics
{
	struct MultiplayerProjectile_eventGetExplosiveCollisionChannel_Parms
	{
		TEnumAsByte<ECollisionChannel> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMultiplayerProjectile_GetExplosiveCollisionChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventGetExplosiveCollisionChannel_Parms, ReturnValue), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 756624936
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_GetExplosiveCollisionChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_GetExplosiveCollisionChannel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetExplosiveCollisionChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_GetExplosiveCollisionChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "GetExplosiveCollisionChannel", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_GetExplosiveCollisionChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetExplosiveCollisionChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetExplosiveCollisionChannel_Statics::MultiplayerProjectile_eventGetExplosiveCollisionChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetExplosiveCollisionChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_GetExplosiveCollisionChannel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetExplosiveCollisionChannel_Statics::MultiplayerProjectile_eventGetExplosiveCollisionChannel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_GetExplosiveCollisionChannel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_GetExplosiveCollisionChannel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execGetExplosiveCollisionChannel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ECollisionChannel>*)Z_Param__Result=P_THIS->GetExplosiveCollisionChannel();
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function GetExplosiveCollisionChannel

// Begin Class AMultiplayerProjectile Function GetExplosiveDamageRadius
struct Z_Construct_UFunction_AMultiplayerProjectile_GetExplosiveDamageRadius_Statics
{
	struct MultiplayerProjectile_eventGetExplosiveDamageRadius_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_GetExplosiveDamageRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventGetExplosiveDamageRadius_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_GetExplosiveDamageRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_GetExplosiveDamageRadius_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetExplosiveDamageRadius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_GetExplosiveDamageRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "GetExplosiveDamageRadius", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_GetExplosiveDamageRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetExplosiveDamageRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetExplosiveDamageRadius_Statics::MultiplayerProjectile_eventGetExplosiveDamageRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetExplosiveDamageRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_GetExplosiveDamageRadius_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetExplosiveDamageRadius_Statics::MultiplayerProjectile_eventGetExplosiveDamageRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_GetExplosiveDamageRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_GetExplosiveDamageRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execGetExplosiveDamageRadius)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetExplosiveDamageRadius();
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function GetExplosiveDamageRadius

// Begin Class AMultiplayerProjectile Function GetExplosiveDoFullDamage
struct Z_Construct_UFunction_AMultiplayerProjectile_GetExplosiveDoFullDamage_Statics
{
	struct MultiplayerProjectile_eventGetExplosiveDoFullDamage_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerProjectile_GetExplosiveDoFullDamage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MultiplayerProjectile_eventGetExplosiveDoFullDamage_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_GetExplosiveDoFullDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerProjectile_eventGetExplosiveDoFullDamage_Parms), &Z_Construct_UFunction_AMultiplayerProjectile_GetExplosiveDoFullDamage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_GetExplosiveDoFullDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_GetExplosiveDoFullDamage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetExplosiveDoFullDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_GetExplosiveDoFullDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "GetExplosiveDoFullDamage", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_GetExplosiveDoFullDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetExplosiveDoFullDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetExplosiveDoFullDamage_Statics::MultiplayerProjectile_eventGetExplosiveDoFullDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetExplosiveDoFullDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_GetExplosiveDoFullDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetExplosiveDoFullDamage_Statics::MultiplayerProjectile_eventGetExplosiveDoFullDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_GetExplosiveDoFullDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_GetExplosiveDoFullDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execGetExplosiveDoFullDamage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetExplosiveDoFullDamage();
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function GetExplosiveDoFullDamage

// Begin Class AMultiplayerProjectile Function GetFireLocation
struct Z_Construct_UFunction_AMultiplayerProjectile_GetFireLocation_Statics
{
	struct MultiplayerProjectile_eventGetFireLocation_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_GetFireLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventGetFireLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_GetFireLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_GetFireLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetFireLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_GetFireLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "GetFireLocation", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_GetFireLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetFireLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetFireLocation_Statics::MultiplayerProjectile_eventGetFireLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetFireLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_GetFireLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetFireLocation_Statics::MultiplayerProjectile_eventGetFireLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_GetFireLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_GetFireLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execGetFireLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetFireLocation();
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function GetFireLocation

// Begin Class AMultiplayerProjectile Function GetHitDirection
struct Z_Construct_UFunction_AMultiplayerProjectile_GetHitDirection_Statics
{
	struct MultiplayerProjectile_eventGetHitDirection_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_GetHitDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventGetHitDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_GetHitDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_GetHitDirection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetHitDirection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_GetHitDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "GetHitDirection", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_GetHitDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetHitDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetHitDirection_Statics::MultiplayerProjectile_eventGetHitDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetHitDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_GetHitDirection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetHitDirection_Statics::MultiplayerProjectile_eventGetHitDirection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_GetHitDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_GetHitDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execGetHitDirection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetHitDirection();
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function GetHitDirection

// Begin Class AMultiplayerProjectile Function GetHitEffects
struct Z_Construct_UFunction_AMultiplayerProjectile_GetHitEffects_Statics
{
	struct MultiplayerProjectile_eventGetHitEffects_Parms
	{
		TMap<UPhysicalMaterial*,UParticleSystem*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_GetHitEffects_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_GetHitEffects_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_GetHitEffects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventGetHitEffects_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_GetHitEffects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_GetHitEffects_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_GetHitEffects_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_GetHitEffects_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetHitEffects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_GetHitEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "GetHitEffects", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_GetHitEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetHitEffects_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetHitEffects_Statics::MultiplayerProjectile_eventGetHitEffects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetHitEffects_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_GetHitEffects_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetHitEffects_Statics::MultiplayerProjectile_eventGetHitEffects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_GetHitEffects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_GetHitEffects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execGetHitEffects)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<UPhysicalMaterial*,UParticleSystem*>*)Z_Param__Result=P_THIS->GetHitEffects();
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function GetHitEffects

// Begin Class AMultiplayerProjectile Function GetHitEffectScale
struct Z_Construct_UFunction_AMultiplayerProjectile_GetHitEffectScale_Statics
{
	struct MultiplayerProjectile_eventGetHitEffectScale_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_GetHitEffectScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventGetHitEffectScale_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_GetHitEffectScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_GetHitEffectScale_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetHitEffectScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_GetHitEffectScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "GetHitEffectScale", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_GetHitEffectScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetHitEffectScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetHitEffectScale_Statics::MultiplayerProjectile_eventGetHitEffectScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetHitEffectScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_GetHitEffectScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetHitEffectScale_Statics::MultiplayerProjectile_eventGetHitEffectScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_GetHitEffectScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_GetHitEffectScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execGetHitEffectScale)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetHitEffectScale();
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function GetHitEffectScale

// Begin Class AMultiplayerProjectile Function GetHitMarkerActorSounds
struct Z_Construct_UFunction_AMultiplayerProjectile_GetHitMarkerActorSounds_Statics
{
	struct MultiplayerProjectile_eventGetHitMarkerActorSounds_Parms
	{
		TMap<TSubclassOf<AActor> ,USoundBase*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_GetHitMarkerActorSounds_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_GetHitMarkerActorSounds_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_GetHitMarkerActorSounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventGetHitMarkerActorSounds_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_GetHitMarkerActorSounds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_GetHitMarkerActorSounds_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_GetHitMarkerActorSounds_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_GetHitMarkerActorSounds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetHitMarkerActorSounds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_GetHitMarkerActorSounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "GetHitMarkerActorSounds", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_GetHitMarkerActorSounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetHitMarkerActorSounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetHitMarkerActorSounds_Statics::MultiplayerProjectile_eventGetHitMarkerActorSounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetHitMarkerActorSounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_GetHitMarkerActorSounds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetHitMarkerActorSounds_Statics::MultiplayerProjectile_eventGetHitMarkerActorSounds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_GetHitMarkerActorSounds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_GetHitMarkerActorSounds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execGetHitMarkerActorSounds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<TSubclassOf<AActor> ,USoundBase*>*)Z_Param__Result=P_THIS->GetHitMarkerActorSounds();
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function GetHitMarkerActorSounds

// Begin Class AMultiplayerProjectile Function GetHitMarkerSurfaceSounds
struct Z_Construct_UFunction_AMultiplayerProjectile_GetHitMarkerSurfaceSounds_Statics
{
	struct MultiplayerProjectile_eventGetHitMarkerSurfaceSounds_Parms
	{
		TMap<UPhysicalMaterial*,USoundBase*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_GetHitMarkerSurfaceSounds_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_GetHitMarkerSurfaceSounds_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_GetHitMarkerSurfaceSounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventGetHitMarkerSurfaceSounds_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_GetHitMarkerSurfaceSounds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_GetHitMarkerSurfaceSounds_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_GetHitMarkerSurfaceSounds_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_GetHitMarkerSurfaceSounds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetHitMarkerSurfaceSounds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_GetHitMarkerSurfaceSounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "GetHitMarkerSurfaceSounds", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_GetHitMarkerSurfaceSounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetHitMarkerSurfaceSounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetHitMarkerSurfaceSounds_Statics::MultiplayerProjectile_eventGetHitMarkerSurfaceSounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetHitMarkerSurfaceSounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_GetHitMarkerSurfaceSounds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetHitMarkerSurfaceSounds_Statics::MultiplayerProjectile_eventGetHitMarkerSurfaceSounds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_GetHitMarkerSurfaceSounds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_GetHitMarkerSurfaceSounds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execGetHitMarkerSurfaceSounds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<UPhysicalMaterial*,USoundBase*>*)Z_Param__Result=P_THIS->GetHitMarkerSurfaceSounds();
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function GetHitMarkerSurfaceSounds

// Begin Class AMultiplayerProjectile Function GetInterpolateDamageBetweenRanges
struct Z_Construct_UFunction_AMultiplayerProjectile_GetInterpolateDamageBetweenRanges_Statics
{
	struct MultiplayerProjectile_eventGetInterpolateDamageBetweenRanges_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerProjectile_GetInterpolateDamageBetweenRanges_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MultiplayerProjectile_eventGetInterpolateDamageBetweenRanges_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_GetInterpolateDamageBetweenRanges_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerProjectile_eventGetInterpolateDamageBetweenRanges_Parms), &Z_Construct_UFunction_AMultiplayerProjectile_GetInterpolateDamageBetweenRanges_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_GetInterpolateDamageBetweenRanges_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_GetInterpolateDamageBetweenRanges_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetInterpolateDamageBetweenRanges_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_GetInterpolateDamageBetweenRanges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "GetInterpolateDamageBetweenRanges", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_GetInterpolateDamageBetweenRanges_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetInterpolateDamageBetweenRanges_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetInterpolateDamageBetweenRanges_Statics::MultiplayerProjectile_eventGetInterpolateDamageBetweenRanges_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetInterpolateDamageBetweenRanges_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_GetInterpolateDamageBetweenRanges_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetInterpolateDamageBetweenRanges_Statics::MultiplayerProjectile_eventGetInterpolateDamageBetweenRanges_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_GetInterpolateDamageBetweenRanges()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_GetInterpolateDamageBetweenRanges_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execGetInterpolateDamageBetweenRanges)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetInterpolateDamageBetweenRanges();
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function GetInterpolateDamageBetweenRanges

// Begin Class AMultiplayerProjectile Function GetIsExplosive
struct Z_Construct_UFunction_AMultiplayerProjectile_GetIsExplosive_Statics
{
	struct MultiplayerProjectile_eventGetIsExplosive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerProjectile_GetIsExplosive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MultiplayerProjectile_eventGetIsExplosive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_GetIsExplosive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerProjectile_eventGetIsExplosive_Parms), &Z_Construct_UFunction_AMultiplayerProjectile_GetIsExplosive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_GetIsExplosive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_GetIsExplosive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetIsExplosive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_GetIsExplosive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "GetIsExplosive", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_GetIsExplosive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetIsExplosive_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetIsExplosive_Statics::MultiplayerProjectile_eventGetIsExplosive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetIsExplosive_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_GetIsExplosive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetIsExplosive_Statics::MultiplayerProjectile_eventGetIsExplosive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_GetIsExplosive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_GetIsExplosive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execGetIsExplosive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsExplosive();
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function GetIsExplosive

// Begin Class AMultiplayerProjectile Function GetLaunchObjectStrength
struct Z_Construct_UFunction_AMultiplayerProjectile_GetLaunchObjectStrength_Statics
{
	struct MultiplayerProjectile_eventGetLaunchObjectStrength_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_GetLaunchObjectStrength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventGetLaunchObjectStrength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_GetLaunchObjectStrength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_GetLaunchObjectStrength_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetLaunchObjectStrength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_GetLaunchObjectStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "GetLaunchObjectStrength", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_GetLaunchObjectStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetLaunchObjectStrength_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetLaunchObjectStrength_Statics::MultiplayerProjectile_eventGetLaunchObjectStrength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetLaunchObjectStrength_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_GetLaunchObjectStrength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetLaunchObjectStrength_Statics::MultiplayerProjectile_eventGetLaunchObjectStrength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_GetLaunchObjectStrength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_GetLaunchObjectStrength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execGetLaunchObjectStrength)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetLaunchObjectStrength();
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function GetLaunchObjectStrength

// Begin Class AMultiplayerProjectile Function GetLaunchObjectVelocityChange
struct Z_Construct_UFunction_AMultiplayerProjectile_GetLaunchObjectVelocityChange_Statics
{
	struct MultiplayerProjectile_eventGetLaunchObjectVelocityChange_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerProjectile_GetLaunchObjectVelocityChange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MultiplayerProjectile_eventGetLaunchObjectVelocityChange_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_GetLaunchObjectVelocityChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerProjectile_eventGetLaunchObjectVelocityChange_Parms), &Z_Construct_UFunction_AMultiplayerProjectile_GetLaunchObjectVelocityChange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_GetLaunchObjectVelocityChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_GetLaunchObjectVelocityChange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetLaunchObjectVelocityChange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_GetLaunchObjectVelocityChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "GetLaunchObjectVelocityChange", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_GetLaunchObjectVelocityChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetLaunchObjectVelocityChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetLaunchObjectVelocityChange_Statics::MultiplayerProjectile_eventGetLaunchObjectVelocityChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetLaunchObjectVelocityChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_GetLaunchObjectVelocityChange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetLaunchObjectVelocityChange_Statics::MultiplayerProjectile_eventGetLaunchObjectVelocityChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_GetLaunchObjectVelocityChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_GetLaunchObjectVelocityChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execGetLaunchObjectVelocityChange)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetLaunchObjectVelocityChange();
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function GetLaunchObjectVelocityChange

// Begin Class AMultiplayerProjectile Function GetLaunchPhysicsObjects
struct Z_Construct_UFunction_AMultiplayerProjectile_GetLaunchPhysicsObjects_Statics
{
	struct MultiplayerProjectile_eventGetLaunchPhysicsObjects_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerProjectile_GetLaunchPhysicsObjects_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MultiplayerProjectile_eventGetLaunchPhysicsObjects_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_GetLaunchPhysicsObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerProjectile_eventGetLaunchPhysicsObjects_Parms), &Z_Construct_UFunction_AMultiplayerProjectile_GetLaunchPhysicsObjects_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_GetLaunchPhysicsObjects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_GetLaunchPhysicsObjects_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetLaunchPhysicsObjects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_GetLaunchPhysicsObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "GetLaunchPhysicsObjects", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_GetLaunchPhysicsObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetLaunchPhysicsObjects_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetLaunchPhysicsObjects_Statics::MultiplayerProjectile_eventGetLaunchPhysicsObjects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetLaunchPhysicsObjects_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_GetLaunchPhysicsObjects_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetLaunchPhysicsObjects_Statics::MultiplayerProjectile_eventGetLaunchPhysicsObjects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_GetLaunchPhysicsObjects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_GetLaunchPhysicsObjects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execGetLaunchPhysicsObjects)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetLaunchPhysicsObjects();
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function GetLaunchPhysicsObjects

// Begin Class AMultiplayerProjectile Function GetOwningPlayer
struct Z_Construct_UFunction_AMultiplayerProjectile_GetOwningPlayer_Statics
{
	struct MultiplayerProjectile_eventGetOwningPlayer_Parms
	{
		APawn* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_GetOwningPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventGetOwningPlayer_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_GetOwningPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_GetOwningPlayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetOwningPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_GetOwningPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "GetOwningPlayer", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_GetOwningPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetOwningPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetOwningPlayer_Statics::MultiplayerProjectile_eventGetOwningPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetOwningPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_GetOwningPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetOwningPlayer_Statics::MultiplayerProjectile_eventGetOwningPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_GetOwningPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_GetOwningPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execGetOwningPlayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APawn**)Z_Param__Result=P_THIS->GetOwningPlayer();
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function GetOwningPlayer

// Begin Class AMultiplayerProjectile Function GetPrintDistanceTraveled
struct Z_Construct_UFunction_AMultiplayerProjectile_GetPrintDistanceTraveled_Statics
{
	struct MultiplayerProjectile_eventGetPrintDistanceTraveled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerProjectile_GetPrintDistanceTraveled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MultiplayerProjectile_eventGetPrintDistanceTraveled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_GetPrintDistanceTraveled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerProjectile_eventGetPrintDistanceTraveled_Parms), &Z_Construct_UFunction_AMultiplayerProjectile_GetPrintDistanceTraveled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_GetPrintDistanceTraveled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_GetPrintDistanceTraveled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetPrintDistanceTraveled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_GetPrintDistanceTraveled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "GetPrintDistanceTraveled", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_GetPrintDistanceTraveled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetPrintDistanceTraveled_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetPrintDistanceTraveled_Statics::MultiplayerProjectile_eventGetPrintDistanceTraveled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetPrintDistanceTraveled_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_GetPrintDistanceTraveled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetPrintDistanceTraveled_Statics::MultiplayerProjectile_eventGetPrintDistanceTraveled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_GetPrintDistanceTraveled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_GetPrintDistanceTraveled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execGetPrintDistanceTraveled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetPrintDistanceTraveled();
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function GetPrintDistanceTraveled

// Begin Class AMultiplayerProjectile Function GetTimeToDespawnProjectile
struct Z_Construct_UFunction_AMultiplayerProjectile_GetTimeToDespawnProjectile_Statics
{
	struct MultiplayerProjectile_eventGetTimeToDespawnProjectile_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_GetTimeToDespawnProjectile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventGetTimeToDespawnProjectile_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_GetTimeToDespawnProjectile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_GetTimeToDespawnProjectile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetTimeToDespawnProjectile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_GetTimeToDespawnProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "GetTimeToDespawnProjectile", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_GetTimeToDespawnProjectile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetTimeToDespawnProjectile_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetTimeToDespawnProjectile_Statics::MultiplayerProjectile_eventGetTimeToDespawnProjectile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetTimeToDespawnProjectile_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_GetTimeToDespawnProjectile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetTimeToDespawnProjectile_Statics::MultiplayerProjectile_eventGetTimeToDespawnProjectile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_GetTimeToDespawnProjectile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_GetTimeToDespawnProjectile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execGetTimeToDespawnProjectile)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetTimeToDespawnProjectile();
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function GetTimeToDespawnProjectile

// Begin Class AMultiplayerProjectile Function GetUseActorClassesForHitMarkers
struct Z_Construct_UFunction_AMultiplayerProjectile_GetUseActorClassesForHitMarkers_Statics
{
	struct MultiplayerProjectile_eventGetUseActorClassesForHitMarkers_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_GetUseActorClassesForHitMarkers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventGetUseActorClassesForHitMarkers_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_GetUseActorClassesForHitMarkers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_GetUseActorClassesForHitMarkers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetUseActorClassesForHitMarkers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_GetUseActorClassesForHitMarkers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "GetUseActorClassesForHitMarkers", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_GetUseActorClassesForHitMarkers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetUseActorClassesForHitMarkers_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetUseActorClassesForHitMarkers_Statics::MultiplayerProjectile_eventGetUseActorClassesForHitMarkers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetUseActorClassesForHitMarkers_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_GetUseActorClassesForHitMarkers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetUseActorClassesForHitMarkers_Statics::MultiplayerProjectile_eventGetUseActorClassesForHitMarkers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_GetUseActorClassesForHitMarkers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_GetUseActorClassesForHitMarkers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execGetUseActorClassesForHitMarkers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetUseActorClassesForHitMarkers();
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function GetUseActorClassesForHitMarkers

// Begin Class AMultiplayerProjectile Function GetWhizzingSoundVolumeBasedOnSpeed
struct Z_Construct_UFunction_AMultiplayerProjectile_GetWhizzingSoundVolumeBasedOnSpeed_Statics
{
	struct MultiplayerProjectile_eventGetWhizzingSoundVolumeBasedOnSpeed_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerProjectile_GetWhizzingSoundVolumeBasedOnSpeed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MultiplayerProjectile_eventGetWhizzingSoundVolumeBasedOnSpeed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_GetWhizzingSoundVolumeBasedOnSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerProjectile_eventGetWhizzingSoundVolumeBasedOnSpeed_Parms), &Z_Construct_UFunction_AMultiplayerProjectile_GetWhizzingSoundVolumeBasedOnSpeed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_GetWhizzingSoundVolumeBasedOnSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_GetWhizzingSoundVolumeBasedOnSpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetWhizzingSoundVolumeBasedOnSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_GetWhizzingSoundVolumeBasedOnSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "GetWhizzingSoundVolumeBasedOnSpeed", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_GetWhizzingSoundVolumeBasedOnSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetWhizzingSoundVolumeBasedOnSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetWhizzingSoundVolumeBasedOnSpeed_Statics::MultiplayerProjectile_eventGetWhizzingSoundVolumeBasedOnSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_GetWhizzingSoundVolumeBasedOnSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_GetWhizzingSoundVolumeBasedOnSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_GetWhizzingSoundVolumeBasedOnSpeed_Statics::MultiplayerProjectile_eventGetWhizzingSoundVolumeBasedOnSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_GetWhizzingSoundVolumeBasedOnSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_GetWhizzingSoundVolumeBasedOnSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execGetWhizzingSoundVolumeBasedOnSpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetWhizzingSoundVolumeBasedOnSpeed();
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function GetWhizzingSoundVolumeBasedOnSpeed

// Begin Class AMultiplayerProjectile Function MulticastSilenceBulletWhizzingSound
static const FName NAME_AMultiplayerProjectile_MulticastSilenceBulletWhizzingSound = FName(TEXT("MulticastSilenceBulletWhizzingSound"));
void AMultiplayerProjectile::MulticastSilenceBulletWhizzingSound()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerProjectile_MulticastSilenceBulletWhizzingSound);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerProjectile_MulticastSilenceBulletWhizzingSound_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_MulticastSilenceBulletWhizzingSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "MulticastSilenceBulletWhizzingSound", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_MulticastSilenceBulletWhizzingSound_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_MulticastSilenceBulletWhizzingSound_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_MulticastSilenceBulletWhizzingSound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_MulticastSilenceBulletWhizzingSound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execMulticastSilenceBulletWhizzingSound)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastSilenceBulletWhizzingSound_Implementation();
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function MulticastSilenceBulletWhizzingSound

// Begin Class AMultiplayerProjectile Function MulticastSoftDestroyProjectile
static const FName NAME_AMultiplayerProjectile_MulticastSoftDestroyProjectile = FName(TEXT("MulticastSoftDestroyProjectile"));
void AMultiplayerProjectile::MulticastSoftDestroyProjectile()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerProjectile_MulticastSoftDestroyProjectile);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerProjectile_MulticastSoftDestroyProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_MulticastSoftDestroyProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "MulticastSoftDestroyProjectile", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_MulticastSoftDestroyProjectile_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_MulticastSoftDestroyProjectile_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_MulticastSoftDestroyProjectile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_MulticastSoftDestroyProjectile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execMulticastSoftDestroyProjectile)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastSoftDestroyProjectile_Implementation();
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function MulticastSoftDestroyProjectile

// Begin Class AMultiplayerProjectile Function MulticastSpawnHitParticleEffect
struct MultiplayerProjectile_eventMulticastSpawnHitParticleEffect_Parms
{
	UParticleSystem* ParticleEffect;
	FVector ImpactPoint;
	FRotator ImpactRotation;
	FHitResult Hit;
	bool UseCurrentLocationForHit;
};
static const FName NAME_AMultiplayerProjectile_MulticastSpawnHitParticleEffect = FName(TEXT("MulticastSpawnHitParticleEffect"));
void AMultiplayerProjectile::MulticastSpawnHitParticleEffect(UParticleSystem* ParticleEffect, FVector ImpactPoint, FRotator ImpactRotation, FHitResult Hit, bool UseCurrentLocationForHit)
{
	MultiplayerProjectile_eventMulticastSpawnHitParticleEffect_Parms Parms;
	Parms.ParticleEffect=ParticleEffect;
	Parms.ImpactPoint=ImpactPoint;
	Parms.ImpactRotation=ImpactRotation;
	Parms.Hit=Hit;
	Parms.UseCurrentLocationForHit=UseCurrentLocationForHit ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerProjectile_MulticastSpawnHitParticleEffect);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerProjectile_MulticastSpawnHitParticleEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParticleEffect;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static void NewProp_UseCurrentLocationForHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseCurrentLocationForHit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_MulticastSpawnHitParticleEffect_Statics::NewProp_ParticleEffect = { "ParticleEffect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventMulticastSpawnHitParticleEffect_Parms, ParticleEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_MulticastSpawnHitParticleEffect_Statics::NewProp_ImpactPoint = { "ImpactPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventMulticastSpawnHitParticleEffect_Parms, ImpactPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_MulticastSpawnHitParticleEffect_Statics::NewProp_ImpactRotation = { "ImpactRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventMulticastSpawnHitParticleEffect_Parms, ImpactRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_MulticastSpawnHitParticleEffect_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventMulticastSpawnHitParticleEffect_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
void Z_Construct_UFunction_AMultiplayerProjectile_MulticastSpawnHitParticleEffect_Statics::NewProp_UseCurrentLocationForHit_SetBit(void* Obj)
{
	((MultiplayerProjectile_eventMulticastSpawnHitParticleEffect_Parms*)Obj)->UseCurrentLocationForHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_MulticastSpawnHitParticleEffect_Statics::NewProp_UseCurrentLocationForHit = { "UseCurrentLocationForHit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerProjectile_eventMulticastSpawnHitParticleEffect_Parms), &Z_Construct_UFunction_AMultiplayerProjectile_MulticastSpawnHitParticleEffect_Statics::NewProp_UseCurrentLocationForHit_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_MulticastSpawnHitParticleEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_MulticastSpawnHitParticleEffect_Statics::NewProp_ParticleEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_MulticastSpawnHitParticleEffect_Statics::NewProp_ImpactPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_MulticastSpawnHitParticleEffect_Statics::NewProp_ImpactRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_MulticastSpawnHitParticleEffect_Statics::NewProp_Hit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_MulticastSpawnHitParticleEffect_Statics::NewProp_UseCurrentLocationForHit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_MulticastSpawnHitParticleEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_MulticastSpawnHitParticleEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "MulticastSpawnHitParticleEffect", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_MulticastSpawnHitParticleEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_MulticastSpawnHitParticleEffect_Statics::PropPointers), sizeof(MultiplayerProjectile_eventMulticastSpawnHitParticleEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00824CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_MulticastSpawnHitParticleEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_MulticastSpawnHitParticleEffect_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerProjectile_eventMulticastSpawnHitParticleEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_MulticastSpawnHitParticleEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_MulticastSpawnHitParticleEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execMulticastSpawnHitParticleEffect)
{
	P_GET_OBJECT(UParticleSystem,Z_Param_ParticleEffect);
	P_GET_STRUCT(FVector,Z_Param_ImpactPoint);
	P_GET_STRUCT(FRotator,Z_Param_ImpactRotation);
	P_GET_STRUCT(FHitResult,Z_Param_Hit);
	P_GET_UBOOL(Z_Param_UseCurrentLocationForHit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastSpawnHitParticleEffect_Implementation(Z_Param_ParticleEffect,Z_Param_ImpactPoint,Z_Param_ImpactRotation,Z_Param_Hit,Z_Param_UseCurrentLocationForHit);
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function MulticastSpawnHitParticleEffect

// Begin Class AMultiplayerProjectile Function OnProjectileMeshHit
struct Z_Construct_UFunction_AMultiplayerProjectile_OnProjectileMeshHit_Statics
{
	struct MultiplayerProjectile_eventOnProjectileMeshHit_Parms
	{
		UPrimitiveComponent* HitComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		FVector NormalImpulse;
		FHitResult Hit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_OnProjectileMeshHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventOnProjectileMeshHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitComponent_MetaData), NewProp_HitComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_OnProjectileMeshHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventOnProjectileMeshHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_OnProjectileMeshHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventOnProjectileMeshHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_OnProjectileMeshHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventOnProjectileMeshHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_OnProjectileMeshHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventOnProjectileMeshHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_OnProjectileMeshHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_OnProjectileMeshHit_Statics::NewProp_HitComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_OnProjectileMeshHit_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_OnProjectileMeshHit_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_OnProjectileMeshHit_Statics::NewProp_NormalImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_OnProjectileMeshHit_Statics::NewProp_Hit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_OnProjectileMeshHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_OnProjectileMeshHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "OnProjectileMeshHit", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_OnProjectileMeshHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_OnProjectileMeshHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_OnProjectileMeshHit_Statics::MultiplayerProjectile_eventOnProjectileMeshHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_OnProjectileMeshHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_OnProjectileMeshHit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_OnProjectileMeshHit_Statics::MultiplayerProjectile_eventOnProjectileMeshHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_OnProjectileMeshHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_OnProjectileMeshHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execOnProjectileMeshHit)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnProjectileMeshHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function OnProjectileMeshHit

// Begin Class AMultiplayerProjectile Function PrintDistanceTraved_BP
struct MultiplayerProjectile_eventPrintDistanceTraved_BP_Parms
{
	float Distance;
};
static const FName NAME_AMultiplayerProjectile_PrintDistanceTraved_BP = FName(TEXT("PrintDistanceTraved_BP"));
void AMultiplayerProjectile::PrintDistanceTraved_BP(float Distance)
{
	MultiplayerProjectile_eventPrintDistanceTraved_BP_Parms Parms;
	Parms.Distance=Distance;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerProjectile_PrintDistanceTraved_BP);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerProjectile_PrintDistanceTraved_BP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_PrintDistanceTraved_BP_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventPrintDistanceTraved_BP_Parms, Distance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_PrintDistanceTraved_BP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_PrintDistanceTraved_BP_Statics::NewProp_Distance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_PrintDistanceTraved_BP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_PrintDistanceTraved_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "PrintDistanceTraved_BP", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_PrintDistanceTraved_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_PrintDistanceTraved_BP_Statics::PropPointers), sizeof(MultiplayerProjectile_eventPrintDistanceTraved_BP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_PrintDistanceTraved_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_PrintDistanceTraved_BP_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerProjectile_eventPrintDistanceTraved_BP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_PrintDistanceTraved_BP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_PrintDistanceTraved_BP_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AMultiplayerProjectile Function PrintDistanceTraved_BP

// Begin Class AMultiplayerProjectile Function RegisterHit
struct MultiplayerProjectile_eventRegisterHit_Parms
{
	FHitResult Hit;
};
static const FName NAME_AMultiplayerProjectile_RegisterHit = FName(TEXT("RegisterHit"));
void AMultiplayerProjectile::RegisterHit(FHitResult const& Hit)
{
	MultiplayerProjectile_eventRegisterHit_Parms Parms;
	Parms.Hit=Hit;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerProjectile_RegisterHit);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerProjectile_RegisterHit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_RegisterHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventRegisterHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_RegisterHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_RegisterHit_Statics::NewProp_Hit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_RegisterHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_RegisterHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "RegisterHit", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_RegisterHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_RegisterHit_Statics::PropPointers), sizeof(MultiplayerProjectile_eventRegisterHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_RegisterHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_RegisterHit_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerProjectile_eventRegisterHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_RegisterHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_RegisterHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execRegisterHit)
{
	P_GET_STRUCT(FHitResult,Z_Param_Hit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterHit_Implementation(Z_Param_Hit);
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function RegisterHit

// Begin Class AMultiplayerProjectile Function ServerSilenceBulletWhizzingSound
static const FName NAME_AMultiplayerProjectile_ServerSilenceBulletWhizzingSound = FName(TEXT("ServerSilenceBulletWhizzingSound"));
void AMultiplayerProjectile::ServerSilenceBulletWhizzingSound()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerProjectile_ServerSilenceBulletWhizzingSound);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerProjectile_ServerSilenceBulletWhizzingSound_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_ServerSilenceBulletWhizzingSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "ServerSilenceBulletWhizzingSound", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_ServerSilenceBulletWhizzingSound_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_ServerSilenceBulletWhizzingSound_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_ServerSilenceBulletWhizzingSound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_ServerSilenceBulletWhizzingSound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execServerSilenceBulletWhizzingSound)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerSilenceBulletWhizzingSound_Implementation();
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function ServerSilenceBulletWhizzingSound

// Begin Class AMultiplayerProjectile Function ServerSoftDestroyProjectile
static const FName NAME_AMultiplayerProjectile_ServerSoftDestroyProjectile = FName(TEXT("ServerSoftDestroyProjectile"));
void AMultiplayerProjectile::ServerSoftDestroyProjectile()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerProjectile_ServerSoftDestroyProjectile);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerProjectile_ServerSoftDestroyProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_ServerSoftDestroyProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "ServerSoftDestroyProjectile", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_ServerSoftDestroyProjectile_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_ServerSoftDestroyProjectile_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_ServerSoftDestroyProjectile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_ServerSoftDestroyProjectile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execServerSoftDestroyProjectile)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerSoftDestroyProjectile_Implementation();
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function ServerSoftDestroyProjectile

// Begin Class AMultiplayerProjectile Function ServerSpawnHitParticleEffect
struct MultiplayerProjectile_eventServerSpawnHitParticleEffect_Parms
{
	UParticleSystem* ParticleEffect;
	FVector ImpactPoint;
	FRotator ImpactRotation;
	FHitResult Hit;
	bool UseCurrentLocationForHit;
};
static const FName NAME_AMultiplayerProjectile_ServerSpawnHitParticleEffect = FName(TEXT("ServerSpawnHitParticleEffect"));
void AMultiplayerProjectile::ServerSpawnHitParticleEffect(UParticleSystem* ParticleEffect, FVector ImpactPoint, FRotator ImpactRotation, FHitResult Hit, bool UseCurrentLocationForHit)
{
	MultiplayerProjectile_eventServerSpawnHitParticleEffect_Parms Parms;
	Parms.ParticleEffect=ParticleEffect;
	Parms.ImpactPoint=ImpactPoint;
	Parms.ImpactRotation=ImpactRotation;
	Parms.Hit=Hit;
	Parms.UseCurrentLocationForHit=UseCurrentLocationForHit ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerProjectile_ServerSpawnHitParticleEffect);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerProjectile_ServerSpawnHitParticleEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParticleEffect;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static void NewProp_UseCurrentLocationForHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseCurrentLocationForHit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_ServerSpawnHitParticleEffect_Statics::NewProp_ParticleEffect = { "ParticleEffect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventServerSpawnHitParticleEffect_Parms, ParticleEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_ServerSpawnHitParticleEffect_Statics::NewProp_ImpactPoint = { "ImpactPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventServerSpawnHitParticleEffect_Parms, ImpactPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_ServerSpawnHitParticleEffect_Statics::NewProp_ImpactRotation = { "ImpactRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventServerSpawnHitParticleEffect_Parms, ImpactRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_ServerSpawnHitParticleEffect_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventServerSpawnHitParticleEffect_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
void Z_Construct_UFunction_AMultiplayerProjectile_ServerSpawnHitParticleEffect_Statics::NewProp_UseCurrentLocationForHit_SetBit(void* Obj)
{
	((MultiplayerProjectile_eventServerSpawnHitParticleEffect_Parms*)Obj)->UseCurrentLocationForHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_ServerSpawnHitParticleEffect_Statics::NewProp_UseCurrentLocationForHit = { "UseCurrentLocationForHit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerProjectile_eventServerSpawnHitParticleEffect_Parms), &Z_Construct_UFunction_AMultiplayerProjectile_ServerSpawnHitParticleEffect_Statics::NewProp_UseCurrentLocationForHit_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_ServerSpawnHitParticleEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_ServerSpawnHitParticleEffect_Statics::NewProp_ParticleEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_ServerSpawnHitParticleEffect_Statics::NewProp_ImpactPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_ServerSpawnHitParticleEffect_Statics::NewProp_ImpactRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_ServerSpawnHitParticleEffect_Statics::NewProp_Hit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_ServerSpawnHitParticleEffect_Statics::NewProp_UseCurrentLocationForHit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_ServerSpawnHitParticleEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_ServerSpawnHitParticleEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "ServerSpawnHitParticleEffect", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_ServerSpawnHitParticleEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_ServerSpawnHitParticleEffect_Statics::PropPointers), sizeof(MultiplayerProjectile_eventServerSpawnHitParticleEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A20CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_ServerSpawnHitParticleEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_ServerSpawnHitParticleEffect_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerProjectile_eventServerSpawnHitParticleEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_ServerSpawnHitParticleEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_ServerSpawnHitParticleEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execServerSpawnHitParticleEffect)
{
	P_GET_OBJECT(UParticleSystem,Z_Param_ParticleEffect);
	P_GET_STRUCT(FVector,Z_Param_ImpactPoint);
	P_GET_STRUCT(FRotator,Z_Param_ImpactRotation);
	P_GET_STRUCT(FHitResult,Z_Param_Hit);
	P_GET_UBOOL(Z_Param_UseCurrentLocationForHit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerSpawnHitParticleEffect_Implementation(Z_Param_ParticleEffect,Z_Param_ImpactPoint,Z_Param_ImpactRotation,Z_Param_Hit,Z_Param_UseCurrentLocationForHit);
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function ServerSpawnHitParticleEffect

// Begin Class AMultiplayerProjectile Function SetBulletHitControllerVibration
struct Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitControllerVibration_Statics
{
	struct MultiplayerProjectile_eventSetBulletHitControllerVibration_Parms
	{
		UForceFeedbackEffect* NewBulletHitControllerVibration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewBulletHitControllerVibration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitControllerVibration_Statics::NewProp_NewBulletHitControllerVibration = { "NewBulletHitControllerVibration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventSetBulletHitControllerVibration_Parms, NewBulletHitControllerVibration), Z_Construct_UClass_UForceFeedbackEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitControllerVibration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitControllerVibration_Statics::NewProp_NewBulletHitControllerVibration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitControllerVibration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitControllerVibration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "SetBulletHitControllerVibration", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitControllerVibration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitControllerVibration_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitControllerVibration_Statics::MultiplayerProjectile_eventSetBulletHitControllerVibration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitControllerVibration_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitControllerVibration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitControllerVibration_Statics::MultiplayerProjectile_eventSetBulletHitControllerVibration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitControllerVibration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitControllerVibration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execSetBulletHitControllerVibration)
{
	P_GET_OBJECT(UForceFeedbackEffect,Z_Param_NewBulletHitControllerVibration);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBulletHitControllerVibration(Z_Param_NewBulletHitControllerVibration);
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function SetBulletHitControllerVibration

// Begin Class AMultiplayerProjectile Function SetBulletHitControllerVibrationAttenuation
struct Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitControllerVibrationAttenuation_Statics
{
	struct MultiplayerProjectile_eventSetBulletHitControllerVibrationAttenuation_Parms
	{
		UForceFeedbackAttenuation* NewBulletHitControllerVibrationAttenuation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewBulletHitControllerVibrationAttenuation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitControllerVibrationAttenuation_Statics::NewProp_NewBulletHitControllerVibrationAttenuation = { "NewBulletHitControllerVibrationAttenuation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventSetBulletHitControllerVibrationAttenuation_Parms, NewBulletHitControllerVibrationAttenuation), Z_Construct_UClass_UForceFeedbackAttenuation_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitControllerVibrationAttenuation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitControllerVibrationAttenuation_Statics::NewProp_NewBulletHitControllerVibrationAttenuation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitControllerVibrationAttenuation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitControllerVibrationAttenuation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "SetBulletHitControllerVibrationAttenuation", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitControllerVibrationAttenuation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitControllerVibrationAttenuation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitControllerVibrationAttenuation_Statics::MultiplayerProjectile_eventSetBulletHitControllerVibrationAttenuation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitControllerVibrationAttenuation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitControllerVibrationAttenuation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitControllerVibrationAttenuation_Statics::MultiplayerProjectile_eventSetBulletHitControllerVibrationAttenuation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitControllerVibrationAttenuation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitControllerVibrationAttenuation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execSetBulletHitControllerVibrationAttenuation)
{
	P_GET_OBJECT(UForceFeedbackAttenuation,Z_Param_NewBulletHitControllerVibrationAttenuation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBulletHitControllerVibrationAttenuation(Z_Param_NewBulletHitControllerVibrationAttenuation);
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function SetBulletHitControllerVibrationAttenuation

// Begin Class AMultiplayerProjectile Function SetBulletHitControllerVibrationTag
struct Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitControllerVibrationTag_Statics
{
	struct MultiplayerProjectile_eventSetBulletHitControllerVibrationTag_Parms
	{
		FName NewBulletHitControllerVibrationTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_NewBulletHitControllerVibrationTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitControllerVibrationTag_Statics::NewProp_NewBulletHitControllerVibrationTag = { "NewBulletHitControllerVibrationTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventSetBulletHitControllerVibrationTag_Parms, NewBulletHitControllerVibrationTag), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitControllerVibrationTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitControllerVibrationTag_Statics::NewProp_NewBulletHitControllerVibrationTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitControllerVibrationTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitControllerVibrationTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "SetBulletHitControllerVibrationTag", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitControllerVibrationTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitControllerVibrationTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitControllerVibrationTag_Statics::MultiplayerProjectile_eventSetBulletHitControllerVibrationTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitControllerVibrationTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitControllerVibrationTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitControllerVibrationTag_Statics::MultiplayerProjectile_eventSetBulletHitControllerVibrationTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitControllerVibrationTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitControllerVibrationTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execSetBulletHitControllerVibrationTag)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_NewBulletHitControllerVibrationTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBulletHitControllerVibrationTag(Z_Param_NewBulletHitControllerVibrationTag);
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function SetBulletHitControllerVibrationTag

// Begin Class AMultiplayerProjectile Function SetBulletHitDecals
struct Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitDecals_Statics
{
	struct MultiplayerProjectile_eventSetBulletHitDecals_Parms
	{
		TMap<UMaterialInterface*,UPhysicalMaterial*> NewBulletHitDecals;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewBulletHitDecals_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewBulletHitDecals_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_NewBulletHitDecals;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitDecals_Statics::NewProp_NewBulletHitDecals_ValueProp = { "NewBulletHitDecals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitDecals_Statics::NewProp_NewBulletHitDecals_Key_KeyProp = { "NewBulletHitDecals_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitDecals_Statics::NewProp_NewBulletHitDecals = { "NewBulletHitDecals", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventSetBulletHitDecals_Parms, NewBulletHitDecals), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitDecals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitDecals_Statics::NewProp_NewBulletHitDecals_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitDecals_Statics::NewProp_NewBulletHitDecals_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitDecals_Statics::NewProp_NewBulletHitDecals,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitDecals_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitDecals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "SetBulletHitDecals", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitDecals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitDecals_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitDecals_Statics::MultiplayerProjectile_eventSetBulletHitDecals_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitDecals_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitDecals_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitDecals_Statics::MultiplayerProjectile_eventSetBulletHitDecals_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitDecals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitDecals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execSetBulletHitDecals)
{
	P_GET_TMAP(UMaterialInterface*,UPhysicalMaterial*,Z_Param_NewBulletHitDecals);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBulletHitDecals(Z_Param_NewBulletHitDecals);
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function SetBulletHitDecals

// Begin Class AMultiplayerProjectile Function SetBulletHitDecalSize
struct Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitDecalSize_Statics
{
	struct MultiplayerProjectile_eventSetBulletHitDecalSize_Parms
	{
		FVector NewBulletHitDecalSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewBulletHitDecalSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitDecalSize_Statics::NewProp_NewBulletHitDecalSize = { "NewBulletHitDecalSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventSetBulletHitDecalSize_Parms, NewBulletHitDecalSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitDecalSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitDecalSize_Statics::NewProp_NewBulletHitDecalSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitDecalSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitDecalSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "SetBulletHitDecalSize", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitDecalSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitDecalSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitDecalSize_Statics::MultiplayerProjectile_eventSetBulletHitDecalSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitDecalSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitDecalSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitDecalSize_Statics::MultiplayerProjectile_eventSetBulletHitDecalSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitDecalSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitDecalSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execSetBulletHitDecalSize)
{
	P_GET_STRUCT(FVector,Z_Param_NewBulletHitDecalSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBulletHitDecalSize(Z_Param_NewBulletHitDecalSize);
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function SetBulletHitDecalSize

// Begin Class AMultiplayerProjectile Function SetBulletHitMode
struct Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitMode_Statics
{
	struct MultiplayerProjectile_eventSetBulletHitMode_Parms
	{
		int32 NewBulletHitMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewBulletHitMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitMode_Statics::NewProp_NewBulletHitMode = { "NewBulletHitMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventSetBulletHitMode_Parms, NewBulletHitMode), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitMode_Statics::NewProp_NewBulletHitMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "SetBulletHitMode", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitMode_Statics::MultiplayerProjectile_eventSetBulletHitMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitMode_Statics::MultiplayerProjectile_eventSetBulletHitMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execSetBulletHitMode)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewBulletHitMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBulletHitMode(Z_Param_NewBulletHitMode);
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function SetBulletHitMode

// Begin Class AMultiplayerProjectile Function SetBulletHitModeDelay
struct Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitModeDelay_Statics
{
	struct MultiplayerProjectile_eventSetBulletHitModeDelay_Parms
	{
		float NewBulletHitModeDelay;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewBulletHitModeDelay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitModeDelay_Statics::NewProp_NewBulletHitModeDelay = { "NewBulletHitModeDelay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventSetBulletHitModeDelay_Parms, NewBulletHitModeDelay), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitModeDelay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitModeDelay_Statics::NewProp_NewBulletHitModeDelay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitModeDelay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitModeDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "SetBulletHitModeDelay", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitModeDelay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitModeDelay_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitModeDelay_Statics::MultiplayerProjectile_eventSetBulletHitModeDelay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitModeDelay_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitModeDelay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitModeDelay_Statics::MultiplayerProjectile_eventSetBulletHitModeDelay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitModeDelay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitModeDelay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execSetBulletHitModeDelay)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewBulletHitModeDelay);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBulletHitModeDelay(Z_Param_NewBulletHitModeDelay);
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function SetBulletHitModeDelay

// Begin Class AMultiplayerProjectile Function SetBulletHitSounds
struct Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitSounds_Statics
{
	struct MultiplayerProjectile_eventSetBulletHitSounds_Parms
	{
		TMap<USoundBase*,UPhysicalMaterial*> NewBulletHitSounds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewBulletHitSounds_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewBulletHitSounds_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_NewBulletHitSounds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitSounds_Statics::NewProp_NewBulletHitSounds_ValueProp = { "NewBulletHitSounds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitSounds_Statics::NewProp_NewBulletHitSounds_Key_KeyProp = { "NewBulletHitSounds_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitSounds_Statics::NewProp_NewBulletHitSounds = { "NewBulletHitSounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventSetBulletHitSounds_Parms, NewBulletHitSounds), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitSounds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitSounds_Statics::NewProp_NewBulletHitSounds_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitSounds_Statics::NewProp_NewBulletHitSounds_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitSounds_Statics::NewProp_NewBulletHitSounds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitSounds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitSounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "SetBulletHitSounds", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitSounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitSounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitSounds_Statics::MultiplayerProjectile_eventSetBulletHitSounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitSounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitSounds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitSounds_Statics::MultiplayerProjectile_eventSetBulletHitSounds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitSounds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitSounds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execSetBulletHitSounds)
{
	P_GET_TMAP(USoundBase*,UPhysicalMaterial*,Z_Param_NewBulletHitSounds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBulletHitSounds(Z_Param_NewBulletHitSounds);
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function SetBulletHitSounds

// Begin Class AMultiplayerProjectile Function SetCanCrumbleDestructibleMeshes
struct Z_Construct_UFunction_AMultiplayerProjectile_SetCanCrumbleDestructibleMeshes_Statics
{
	struct MultiplayerProjectile_eventSetCanCrumbleDestructibleMeshes_Parms
	{
		bool NewCanCrumbleDestructibleMeshes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewCanCrumbleDestructibleMeshes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewCanCrumbleDestructibleMeshes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerProjectile_SetCanCrumbleDestructibleMeshes_Statics::NewProp_NewCanCrumbleDestructibleMeshes_SetBit(void* Obj)
{
	((MultiplayerProjectile_eventSetCanCrumbleDestructibleMeshes_Parms*)Obj)->NewCanCrumbleDestructibleMeshes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SetCanCrumbleDestructibleMeshes_Statics::NewProp_NewCanCrumbleDestructibleMeshes = { "NewCanCrumbleDestructibleMeshes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerProjectile_eventSetCanCrumbleDestructibleMeshes_Parms), &Z_Construct_UFunction_AMultiplayerProjectile_SetCanCrumbleDestructibleMeshes_Statics::NewProp_NewCanCrumbleDestructibleMeshes_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_SetCanCrumbleDestructibleMeshes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SetCanCrumbleDestructibleMeshes_Statics::NewProp_NewCanCrumbleDestructibleMeshes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetCanCrumbleDestructibleMeshes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_SetCanCrumbleDestructibleMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "SetCanCrumbleDestructibleMeshes", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_SetCanCrumbleDestructibleMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetCanCrumbleDestructibleMeshes_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetCanCrumbleDestructibleMeshes_Statics::MultiplayerProjectile_eventSetCanCrumbleDestructibleMeshes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetCanCrumbleDestructibleMeshes_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_SetCanCrumbleDestructibleMeshes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetCanCrumbleDestructibleMeshes_Statics::MultiplayerProjectile_eventSetCanCrumbleDestructibleMeshes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_SetCanCrumbleDestructibleMeshes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_SetCanCrumbleDestructibleMeshes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execSetCanCrumbleDestructibleMeshes)
{
	P_GET_UBOOL(Z_Param_NewCanCrumbleDestructibleMeshes);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCanCrumbleDestructibleMeshes(Z_Param_NewCanCrumbleDestructibleMeshes);
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function SetCanCrumbleDestructibleMeshes

// Begin Class AMultiplayerProjectile Function SetDamage
struct Z_Construct_UFunction_AMultiplayerProjectile_SetDamage_Statics
{
	struct MultiplayerProjectile_eventSetDamage_Parms
	{
		TMap<UPhysicalMaterial*,float> NewDamage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewDamage_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewDamage_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_NewDamage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SetDamage_Statics::NewProp_NewDamage_ValueProp = { "NewDamage", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SetDamage_Statics::NewProp_NewDamage_Key_KeyProp = { "NewDamage_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SetDamage_Statics::NewProp_NewDamage = { "NewDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventSetDamage_Parms, NewDamage), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_SetDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SetDamage_Statics::NewProp_NewDamage_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SetDamage_Statics::NewProp_NewDamage_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SetDamage_Statics::NewProp_NewDamage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_SetDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "SetDamage", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_SetDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetDamage_Statics::MultiplayerProjectile_eventSetDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_SetDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetDamage_Statics::MultiplayerProjectile_eventSetDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_SetDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_SetDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execSetDamage)
{
	P_GET_TMAP(UPhysicalMaterial*,float,Z_Param_NewDamage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDamage(Z_Param_NewDamage);
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function SetDamage

// Begin Class AMultiplayerProjectile Function SetDamageFalloffMultiplierAtRange
struct Z_Construct_UFunction_AMultiplayerProjectile_SetDamageFalloffMultiplierAtRange_Statics
{
	struct MultiplayerProjectile_eventSetDamageFalloffMultiplierAtRange_Parms
	{
		TMap<float,float> NewDamageFalloffMultiplierAtRange;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewDamageFalloffMultiplierAtRange_ValueProp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewDamageFalloffMultiplierAtRange_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_NewDamageFalloffMultiplierAtRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SetDamageFalloffMultiplierAtRange_Statics::NewProp_NewDamageFalloffMultiplierAtRange_ValueProp = { "NewDamageFalloffMultiplierAtRange", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SetDamageFalloffMultiplierAtRange_Statics::NewProp_NewDamageFalloffMultiplierAtRange_Key_KeyProp = { "NewDamageFalloffMultiplierAtRange_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SetDamageFalloffMultiplierAtRange_Statics::NewProp_NewDamageFalloffMultiplierAtRange = { "NewDamageFalloffMultiplierAtRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventSetDamageFalloffMultiplierAtRange_Parms, NewDamageFalloffMultiplierAtRange), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_SetDamageFalloffMultiplierAtRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SetDamageFalloffMultiplierAtRange_Statics::NewProp_NewDamageFalloffMultiplierAtRange_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SetDamageFalloffMultiplierAtRange_Statics::NewProp_NewDamageFalloffMultiplierAtRange_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SetDamageFalloffMultiplierAtRange_Statics::NewProp_NewDamageFalloffMultiplierAtRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetDamageFalloffMultiplierAtRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_SetDamageFalloffMultiplierAtRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "SetDamageFalloffMultiplierAtRange", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_SetDamageFalloffMultiplierAtRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetDamageFalloffMultiplierAtRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetDamageFalloffMultiplierAtRange_Statics::MultiplayerProjectile_eventSetDamageFalloffMultiplierAtRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetDamageFalloffMultiplierAtRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_SetDamageFalloffMultiplierAtRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetDamageFalloffMultiplierAtRange_Statics::MultiplayerProjectile_eventSetDamageFalloffMultiplierAtRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_SetDamageFalloffMultiplierAtRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_SetDamageFalloffMultiplierAtRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execSetDamageFalloffMultiplierAtRange)
{
	P_GET_TMAP(float,float,Z_Param_NewDamageFalloffMultiplierAtRange);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDamageFalloffMultiplierAtRange(Z_Param_NewDamageFalloffMultiplierAtRange);
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function SetDamageFalloffMultiplierAtRange

// Begin Class AMultiplayerProjectile Function SetDamageType
struct Z_Construct_UFunction_AMultiplayerProjectile_SetDamageType_Statics
{
	struct MultiplayerProjectile_eventSetDamageType_Parms
	{
		TSubclassOf<UDamageType> NewDamageType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_NewDamageType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SetDamageType_Statics::NewProp_NewDamageType = { "NewDamageType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventSetDamageType_Parms, NewDamageType), Z_Construct_UClass_UClass, Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_SetDamageType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SetDamageType_Statics::NewProp_NewDamageType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetDamageType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_SetDamageType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "SetDamageType", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_SetDamageType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetDamageType_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetDamageType_Statics::MultiplayerProjectile_eventSetDamageType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetDamageType_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_SetDamageType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetDamageType_Statics::MultiplayerProjectile_eventSetDamageType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_SetDamageType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_SetDamageType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execSetDamageType)
{
	P_GET_OBJECT(UClass,Z_Param_NewDamageType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDamageType(Z_Param_NewDamageType);
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function SetDamageType

// Begin Class AMultiplayerProjectile Function SetDefaultBulletHitDecal
struct Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultBulletHitDecal_Statics
{
	struct MultiplayerProjectile_eventSetDefaultBulletHitDecal_Parms
	{
		UMaterialInterface* NewBulletHitDecal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewBulletHitDecal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultBulletHitDecal_Statics::NewProp_NewBulletHitDecal = { "NewBulletHitDecal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventSetDefaultBulletHitDecal_Parms, NewBulletHitDecal), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultBulletHitDecal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultBulletHitDecal_Statics::NewProp_NewBulletHitDecal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultBulletHitDecal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultBulletHitDecal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "SetDefaultBulletHitDecal", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultBulletHitDecal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultBulletHitDecal_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultBulletHitDecal_Statics::MultiplayerProjectile_eventSetDefaultBulletHitDecal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultBulletHitDecal_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultBulletHitDecal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultBulletHitDecal_Statics::MultiplayerProjectile_eventSetDefaultBulletHitDecal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultBulletHitDecal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultBulletHitDecal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execSetDefaultBulletHitDecal)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_NewBulletHitDecal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDefaultBulletHitDecal(Z_Param_NewBulletHitDecal);
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function SetDefaultBulletHitDecal

// Begin Class AMultiplayerProjectile Function SetDefaultBulletHitSound
struct Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultBulletHitSound_Statics
{
	struct MultiplayerProjectile_eventSetDefaultBulletHitSound_Parms
	{
		USoundBase* NewDefaultBulletHitSound;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewDefaultBulletHitSound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultBulletHitSound_Statics::NewProp_NewDefaultBulletHitSound = { "NewDefaultBulletHitSound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventSetDefaultBulletHitSound_Parms, NewDefaultBulletHitSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultBulletHitSound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultBulletHitSound_Statics::NewProp_NewDefaultBulletHitSound,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultBulletHitSound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultBulletHitSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "SetDefaultBulletHitSound", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultBulletHitSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultBulletHitSound_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultBulletHitSound_Statics::MultiplayerProjectile_eventSetDefaultBulletHitSound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultBulletHitSound_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultBulletHitSound_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultBulletHitSound_Statics::MultiplayerProjectile_eventSetDefaultBulletHitSound_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultBulletHitSound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultBulletHitSound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execSetDefaultBulletHitSound)
{
	P_GET_OBJECT(USoundBase,Z_Param_NewDefaultBulletHitSound);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDefaultBulletHitSound(Z_Param_NewDefaultBulletHitSound);
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function SetDefaultBulletHitSound

// Begin Class AMultiplayerProjectile Function SetDefaultDamage
struct Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultDamage_Statics
{
	struct MultiplayerProjectile_eventSetDefaultDamage_Parms
	{
		float NewDefaultDamage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewDefaultDamage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultDamage_Statics::NewProp_NewDefaultDamage = { "NewDefaultDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventSetDefaultDamage_Parms, NewDefaultDamage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultDamage_Statics::NewProp_NewDefaultDamage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "SetDefaultDamage", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultDamage_Statics::MultiplayerProjectile_eventSetDefaultDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultDamage_Statics::MultiplayerProjectile_eventSetDefaultDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execSetDefaultDamage)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewDefaultDamage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDefaultDamage(Z_Param_NewDefaultDamage);
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function SetDefaultDamage

// Begin Class AMultiplayerProjectile Function SetDefaultHitEffect
struct Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultHitEffect_Statics
{
	struct MultiplayerProjectile_eventSetDefaultHitEffect_Parms
	{
		UParticleSystem* NewDefaultHitEffect;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewDefaultHitEffect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultHitEffect_Statics::NewProp_NewDefaultHitEffect = { "NewDefaultHitEffect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventSetDefaultHitEffect_Parms, NewDefaultHitEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultHitEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultHitEffect_Statics::NewProp_NewDefaultHitEffect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultHitEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultHitEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "SetDefaultHitEffect", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultHitEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultHitEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultHitEffect_Statics::MultiplayerProjectile_eventSetDefaultHitEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultHitEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultHitEffect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultHitEffect_Statics::MultiplayerProjectile_eventSetDefaultHitEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultHitEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultHitEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execSetDefaultHitEffect)
{
	P_GET_OBJECT(UParticleSystem,Z_Param_NewDefaultHitEffect);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDefaultHitEffect(Z_Param_NewDefaultHitEffect);
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function SetDefaultHitEffect

// Begin Class AMultiplayerProjectile Function SetDestructionSphereSize
struct Z_Construct_UFunction_AMultiplayerProjectile_SetDestructionSphereSize_Statics
{
	struct MultiplayerProjectile_eventSetDestructionSphereSize_Parms
	{
		FVector NewDestructionSphereSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewDestructionSphereSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SetDestructionSphereSize_Statics::NewProp_NewDestructionSphereSize = { "NewDestructionSphereSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventSetDestructionSphereSize_Parms, NewDestructionSphereSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_SetDestructionSphereSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SetDestructionSphereSize_Statics::NewProp_NewDestructionSphereSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetDestructionSphereSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_SetDestructionSphereSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "SetDestructionSphereSize", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_SetDestructionSphereSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetDestructionSphereSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetDestructionSphereSize_Statics::MultiplayerProjectile_eventSetDestructionSphereSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetDestructionSphereSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_SetDestructionSphereSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetDestructionSphereSize_Statics::MultiplayerProjectile_eventSetDestructionSphereSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_SetDestructionSphereSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_SetDestructionSphereSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execSetDestructionSphereSize)
{
	P_GET_STRUCT(FVector,Z_Param_NewDestructionSphereSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDestructionSphereSize(Z_Param_NewDestructionSphereSize);
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function SetDestructionSphereSize

// Begin Class AMultiplayerProjectile Function SetDestructionSphereToSpawn
struct Z_Construct_UFunction_AMultiplayerProjectile_SetDestructionSphereToSpawn_Statics
{
	struct MultiplayerProjectile_eventSetDestructionSphereToSpawn_Parms
	{
		TSubclassOf<AActor> NewDestructionSphereToSpawn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_NewDestructionSphereToSpawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SetDestructionSphereToSpawn_Statics::NewProp_NewDestructionSphereToSpawn = { "NewDestructionSphereToSpawn", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventSetDestructionSphereToSpawn_Parms, NewDestructionSphereToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_SetDestructionSphereToSpawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SetDestructionSphereToSpawn_Statics::NewProp_NewDestructionSphereToSpawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetDestructionSphereToSpawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_SetDestructionSphereToSpawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "SetDestructionSphereToSpawn", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_SetDestructionSphereToSpawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetDestructionSphereToSpawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetDestructionSphereToSpawn_Statics::MultiplayerProjectile_eventSetDestructionSphereToSpawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetDestructionSphereToSpawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_SetDestructionSphereToSpawn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetDestructionSphereToSpawn_Statics::MultiplayerProjectile_eventSetDestructionSphereToSpawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_SetDestructionSphereToSpawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_SetDestructionSphereToSpawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execSetDestructionSphereToSpawn)
{
	P_GET_OBJECT(UClass,Z_Param_NewDestructionSphereToSpawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDestructionSphereToSpawn(Z_Param_NewDestructionSphereToSpawn);
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function SetDestructionSphereToSpawn

// Begin Class AMultiplayerProjectile Function SetExplosionIgnoredActors
struct Z_Construct_UFunction_AMultiplayerProjectile_SetExplosionIgnoredActors_Statics
{
	struct MultiplayerProjectile_eventSetExplosionIgnoredActors_Parms
	{
		TArray<AActor*> NewExplosionIgnoredActors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewExplosionIgnoredActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NewExplosionIgnoredActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SetExplosionIgnoredActors_Statics::NewProp_NewExplosionIgnoredActors_Inner = { "NewExplosionIgnoredActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SetExplosionIgnoredActors_Statics::NewProp_NewExplosionIgnoredActors = { "NewExplosionIgnoredActors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventSetExplosionIgnoredActors_Parms, NewExplosionIgnoredActors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_SetExplosionIgnoredActors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SetExplosionIgnoredActors_Statics::NewProp_NewExplosionIgnoredActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SetExplosionIgnoredActors_Statics::NewProp_NewExplosionIgnoredActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetExplosionIgnoredActors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_SetExplosionIgnoredActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "SetExplosionIgnoredActors", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_SetExplosionIgnoredActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetExplosionIgnoredActors_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetExplosionIgnoredActors_Statics::MultiplayerProjectile_eventSetExplosionIgnoredActors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetExplosionIgnoredActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_SetExplosionIgnoredActors_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetExplosionIgnoredActors_Statics::MultiplayerProjectile_eventSetExplosionIgnoredActors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_SetExplosionIgnoredActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_SetExplosionIgnoredActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execSetExplosionIgnoredActors)
{
	P_GET_TARRAY(AActor*,Z_Param_NewExplosionIgnoredActors);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetExplosionIgnoredActors(Z_Param_NewExplosionIgnoredActors);
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function SetExplosionIgnoredActors

// Begin Class AMultiplayerProjectile Function SetExplosionIgnoredClasses
struct Z_Construct_UFunction_AMultiplayerProjectile_SetExplosionIgnoredClasses_Statics
{
	struct MultiplayerProjectile_eventSetExplosionIgnoredClasses_Parms
	{
		TArray<TSubclassOf<AActor> > NewExplosionIgnoredClasses;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_NewExplosionIgnoredClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NewExplosionIgnoredClasses;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SetExplosionIgnoredClasses_Statics::NewProp_NewExplosionIgnoredClasses_Inner = { "NewExplosionIgnoredClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SetExplosionIgnoredClasses_Statics::NewProp_NewExplosionIgnoredClasses = { "NewExplosionIgnoredClasses", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventSetExplosionIgnoredClasses_Parms, NewExplosionIgnoredClasses), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_SetExplosionIgnoredClasses_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SetExplosionIgnoredClasses_Statics::NewProp_NewExplosionIgnoredClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SetExplosionIgnoredClasses_Statics::NewProp_NewExplosionIgnoredClasses,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetExplosionIgnoredClasses_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_SetExplosionIgnoredClasses_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "SetExplosionIgnoredClasses", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_SetExplosionIgnoredClasses_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetExplosionIgnoredClasses_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetExplosionIgnoredClasses_Statics::MultiplayerProjectile_eventSetExplosionIgnoredClasses_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetExplosionIgnoredClasses_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_SetExplosionIgnoredClasses_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetExplosionIgnoredClasses_Statics::MultiplayerProjectile_eventSetExplosionIgnoredClasses_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_SetExplosionIgnoredClasses()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_SetExplosionIgnoredClasses_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execSetExplosionIgnoredClasses)
{
	P_GET_TARRAY(TSubclassOf<AActor>,Z_Param_NewExplosionIgnoredClasses);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetExplosionIgnoredClasses(Z_Param_NewExplosionIgnoredClasses);
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function SetExplosionIgnoredClasses

// Begin Class AMultiplayerProjectile Function SetExplosionIgnoreOwner
struct Z_Construct_UFunction_AMultiplayerProjectile_SetExplosionIgnoreOwner_Statics
{
	struct MultiplayerProjectile_eventSetExplosionIgnoreOwner_Parms
	{
		bool NewExplosionIgnoreOwner;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewExplosionIgnoreOwner_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewExplosionIgnoreOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerProjectile_SetExplosionIgnoreOwner_Statics::NewProp_NewExplosionIgnoreOwner_SetBit(void* Obj)
{
	((MultiplayerProjectile_eventSetExplosionIgnoreOwner_Parms*)Obj)->NewExplosionIgnoreOwner = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SetExplosionIgnoreOwner_Statics::NewProp_NewExplosionIgnoreOwner = { "NewExplosionIgnoreOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerProjectile_eventSetExplosionIgnoreOwner_Parms), &Z_Construct_UFunction_AMultiplayerProjectile_SetExplosionIgnoreOwner_Statics::NewProp_NewExplosionIgnoreOwner_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_SetExplosionIgnoreOwner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SetExplosionIgnoreOwner_Statics::NewProp_NewExplosionIgnoreOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetExplosionIgnoreOwner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_SetExplosionIgnoreOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "SetExplosionIgnoreOwner", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_SetExplosionIgnoreOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetExplosionIgnoreOwner_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetExplosionIgnoreOwner_Statics::MultiplayerProjectile_eventSetExplosionIgnoreOwner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetExplosionIgnoreOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_SetExplosionIgnoreOwner_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetExplosionIgnoreOwner_Statics::MultiplayerProjectile_eventSetExplosionIgnoreOwner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_SetExplosionIgnoreOwner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_SetExplosionIgnoreOwner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execSetExplosionIgnoreOwner)
{
	P_GET_UBOOL(Z_Param_NewExplosionIgnoreOwner);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetExplosionIgnoreOwner(Z_Param_NewExplosionIgnoreOwner);
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function SetExplosionIgnoreOwner

// Begin Class AMultiplayerProjectile Function SetExplosiveCollisionChannel
struct Z_Construct_UFunction_AMultiplayerProjectile_SetExplosiveCollisionChannel_Statics
{
	struct MultiplayerProjectile_eventSetExplosiveCollisionChannel_Parms
	{
		TEnumAsByte<ECollisionChannel> NewExplosiveCollisionChannel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewExplosiveCollisionChannel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SetExplosiveCollisionChannel_Statics::NewProp_NewExplosiveCollisionChannel = { "NewExplosiveCollisionChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventSetExplosiveCollisionChannel_Parms, NewExplosiveCollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 756624936
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_SetExplosiveCollisionChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SetExplosiveCollisionChannel_Statics::NewProp_NewExplosiveCollisionChannel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetExplosiveCollisionChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_SetExplosiveCollisionChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "SetExplosiveCollisionChannel", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_SetExplosiveCollisionChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetExplosiveCollisionChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetExplosiveCollisionChannel_Statics::MultiplayerProjectile_eventSetExplosiveCollisionChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetExplosiveCollisionChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_SetExplosiveCollisionChannel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetExplosiveCollisionChannel_Statics::MultiplayerProjectile_eventSetExplosiveCollisionChannel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_SetExplosiveCollisionChannel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_SetExplosiveCollisionChannel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execSetExplosiveCollisionChannel)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_NewExplosiveCollisionChannel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetExplosiveCollisionChannel(ECollisionChannel(Z_Param_NewExplosiveCollisionChannel));
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function SetExplosiveCollisionChannel

// Begin Class AMultiplayerProjectile Function SetExplosiveDamageRadius
struct Z_Construct_UFunction_AMultiplayerProjectile_SetExplosiveDamageRadius_Statics
{
	struct MultiplayerProjectile_eventSetExplosiveDamageRadius_Parms
	{
		float NewExplosiveDamageRadius;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewExplosiveDamageRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SetExplosiveDamageRadius_Statics::NewProp_NewExplosiveDamageRadius = { "NewExplosiveDamageRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventSetExplosiveDamageRadius_Parms, NewExplosiveDamageRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_SetExplosiveDamageRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SetExplosiveDamageRadius_Statics::NewProp_NewExplosiveDamageRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetExplosiveDamageRadius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_SetExplosiveDamageRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "SetExplosiveDamageRadius", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_SetExplosiveDamageRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetExplosiveDamageRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetExplosiveDamageRadius_Statics::MultiplayerProjectile_eventSetExplosiveDamageRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetExplosiveDamageRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_SetExplosiveDamageRadius_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetExplosiveDamageRadius_Statics::MultiplayerProjectile_eventSetExplosiveDamageRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_SetExplosiveDamageRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_SetExplosiveDamageRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execSetExplosiveDamageRadius)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewExplosiveDamageRadius);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetExplosiveDamageRadius(Z_Param_NewExplosiveDamageRadius);
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function SetExplosiveDamageRadius

// Begin Class AMultiplayerProjectile Function SetExplosiveDoFullDamage
struct Z_Construct_UFunction_AMultiplayerProjectile_SetExplosiveDoFullDamage_Statics
{
	struct MultiplayerProjectile_eventSetExplosiveDoFullDamage_Parms
	{
		bool NewExplosiveDoFullDamage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewExplosiveDoFullDamage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewExplosiveDoFullDamage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerProjectile_SetExplosiveDoFullDamage_Statics::NewProp_NewExplosiveDoFullDamage_SetBit(void* Obj)
{
	((MultiplayerProjectile_eventSetExplosiveDoFullDamage_Parms*)Obj)->NewExplosiveDoFullDamage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SetExplosiveDoFullDamage_Statics::NewProp_NewExplosiveDoFullDamage = { "NewExplosiveDoFullDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerProjectile_eventSetExplosiveDoFullDamage_Parms), &Z_Construct_UFunction_AMultiplayerProjectile_SetExplosiveDoFullDamage_Statics::NewProp_NewExplosiveDoFullDamage_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_SetExplosiveDoFullDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SetExplosiveDoFullDamage_Statics::NewProp_NewExplosiveDoFullDamage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetExplosiveDoFullDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_SetExplosiveDoFullDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "SetExplosiveDoFullDamage", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_SetExplosiveDoFullDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetExplosiveDoFullDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetExplosiveDoFullDamage_Statics::MultiplayerProjectile_eventSetExplosiveDoFullDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetExplosiveDoFullDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_SetExplosiveDoFullDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetExplosiveDoFullDamage_Statics::MultiplayerProjectile_eventSetExplosiveDoFullDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_SetExplosiveDoFullDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_SetExplosiveDoFullDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execSetExplosiveDoFullDamage)
{
	P_GET_UBOOL(Z_Param_NewExplosiveDoFullDamage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetExplosiveDoFullDamage(Z_Param_NewExplosiveDoFullDamage);
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function SetExplosiveDoFullDamage

// Begin Class AMultiplayerProjectile Function SetFireLocation
struct Z_Construct_UFunction_AMultiplayerProjectile_SetFireLocation_Statics
{
	struct MultiplayerProjectile_eventSetFireLocation_Parms
	{
		FVector NewFireLocation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewFireLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SetFireLocation_Statics::NewProp_NewFireLocation = { "NewFireLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventSetFireLocation_Parms, NewFireLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_SetFireLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SetFireLocation_Statics::NewProp_NewFireLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetFireLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_SetFireLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "SetFireLocation", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_SetFireLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetFireLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetFireLocation_Statics::MultiplayerProjectile_eventSetFireLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetFireLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_SetFireLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetFireLocation_Statics::MultiplayerProjectile_eventSetFireLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_SetFireLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_SetFireLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execSetFireLocation)
{
	P_GET_STRUCT(FVector,Z_Param_NewFireLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFireLocation(Z_Param_NewFireLocation);
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function SetFireLocation

// Begin Class AMultiplayerProjectile Function SetHitDirection
struct Z_Construct_UFunction_AMultiplayerProjectile_SetHitDirection_Statics
{
	struct MultiplayerProjectile_eventSetHitDirection_Parms
	{
		FVector NewHitDirection;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewHitDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SetHitDirection_Statics::NewProp_NewHitDirection = { "NewHitDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventSetHitDirection_Parms, NewHitDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_SetHitDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SetHitDirection_Statics::NewProp_NewHitDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetHitDirection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_SetHitDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "SetHitDirection", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_SetHitDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetHitDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetHitDirection_Statics::MultiplayerProjectile_eventSetHitDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetHitDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_SetHitDirection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetHitDirection_Statics::MultiplayerProjectile_eventSetHitDirection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_SetHitDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_SetHitDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execSetHitDirection)
{
	P_GET_STRUCT(FVector,Z_Param_NewHitDirection);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHitDirection(Z_Param_NewHitDirection);
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function SetHitDirection

// Begin Class AMultiplayerProjectile Function SetHitEffects
struct Z_Construct_UFunction_AMultiplayerProjectile_SetHitEffects_Statics
{
	struct MultiplayerProjectile_eventSetHitEffects_Parms
	{
		TMap<UPhysicalMaterial*,UParticleSystem*> NewHitEffects;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewHitEffects_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewHitEffects_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_NewHitEffects;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SetHitEffects_Statics::NewProp_NewHitEffects_ValueProp = { "NewHitEffects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SetHitEffects_Statics::NewProp_NewHitEffects_Key_KeyProp = { "NewHitEffects_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SetHitEffects_Statics::NewProp_NewHitEffects = { "NewHitEffects", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventSetHitEffects_Parms, NewHitEffects), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_SetHitEffects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SetHitEffects_Statics::NewProp_NewHitEffects_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SetHitEffects_Statics::NewProp_NewHitEffects_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SetHitEffects_Statics::NewProp_NewHitEffects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetHitEffects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_SetHitEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "SetHitEffects", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_SetHitEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetHitEffects_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetHitEffects_Statics::MultiplayerProjectile_eventSetHitEffects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetHitEffects_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_SetHitEffects_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetHitEffects_Statics::MultiplayerProjectile_eventSetHitEffects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_SetHitEffects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_SetHitEffects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execSetHitEffects)
{
	P_GET_TMAP(UPhysicalMaterial*,UParticleSystem*,Z_Param_NewHitEffects);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHitEffects(Z_Param_NewHitEffects);
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function SetHitEffects

// Begin Class AMultiplayerProjectile Function SetHitEffectScale
struct Z_Construct_UFunction_AMultiplayerProjectile_SetHitEffectScale_Statics
{
	struct MultiplayerProjectile_eventSetHitEffectScale_Parms
	{
		FVector NewHitEffectScale;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewHitEffectScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SetHitEffectScale_Statics::NewProp_NewHitEffectScale = { "NewHitEffectScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventSetHitEffectScale_Parms, NewHitEffectScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_SetHitEffectScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SetHitEffectScale_Statics::NewProp_NewHitEffectScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetHitEffectScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_SetHitEffectScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "SetHitEffectScale", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_SetHitEffectScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetHitEffectScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetHitEffectScale_Statics::MultiplayerProjectile_eventSetHitEffectScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetHitEffectScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_SetHitEffectScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetHitEffectScale_Statics::MultiplayerProjectile_eventSetHitEffectScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_SetHitEffectScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_SetHitEffectScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execSetHitEffectScale)
{
	P_GET_STRUCT(FVector,Z_Param_NewHitEffectScale);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHitEffectScale(Z_Param_NewHitEffectScale);
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function SetHitEffectScale

// Begin Class AMultiplayerProjectile Function SetHitMarkerActorSounds
struct Z_Construct_UFunction_AMultiplayerProjectile_SetHitMarkerActorSounds_Statics
{
	struct MultiplayerProjectile_eventSetHitMarkerActorSounds_Parms
	{
		TMap<TSubclassOf<AActor> ,USoundBase*> NewHitMarkerActorSounds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewHitMarkerActorSounds_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_NewHitMarkerActorSounds_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_NewHitMarkerActorSounds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SetHitMarkerActorSounds_Statics::NewProp_NewHitMarkerActorSounds_ValueProp = { "NewHitMarkerActorSounds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SetHitMarkerActorSounds_Statics::NewProp_NewHitMarkerActorSounds_Key_KeyProp = { "NewHitMarkerActorSounds_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SetHitMarkerActorSounds_Statics::NewProp_NewHitMarkerActorSounds = { "NewHitMarkerActorSounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventSetHitMarkerActorSounds_Parms, NewHitMarkerActorSounds), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_SetHitMarkerActorSounds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SetHitMarkerActorSounds_Statics::NewProp_NewHitMarkerActorSounds_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SetHitMarkerActorSounds_Statics::NewProp_NewHitMarkerActorSounds_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SetHitMarkerActorSounds_Statics::NewProp_NewHitMarkerActorSounds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetHitMarkerActorSounds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_SetHitMarkerActorSounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "SetHitMarkerActorSounds", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_SetHitMarkerActorSounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetHitMarkerActorSounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetHitMarkerActorSounds_Statics::MultiplayerProjectile_eventSetHitMarkerActorSounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetHitMarkerActorSounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_SetHitMarkerActorSounds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetHitMarkerActorSounds_Statics::MultiplayerProjectile_eventSetHitMarkerActorSounds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_SetHitMarkerActorSounds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_SetHitMarkerActorSounds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execSetHitMarkerActorSounds)
{
	P_GET_TMAP(TSubclassOf<AActor>,USoundBase*,Z_Param_NewHitMarkerActorSounds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHitMarkerActorSounds(Z_Param_NewHitMarkerActorSounds);
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function SetHitMarkerActorSounds

// Begin Class AMultiplayerProjectile Function SetHitMarkerSurfaceSounds
struct Z_Construct_UFunction_AMultiplayerProjectile_SetHitMarkerSurfaceSounds_Statics
{
	struct MultiplayerProjectile_eventSetHitMarkerSurfaceSounds_Parms
	{
		TMap<UPhysicalMaterial*,USoundBase*> NewHitMarkerSurfaceSounds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewHitMarkerSurfaceSounds_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewHitMarkerSurfaceSounds_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_NewHitMarkerSurfaceSounds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SetHitMarkerSurfaceSounds_Statics::NewProp_NewHitMarkerSurfaceSounds_ValueProp = { "NewHitMarkerSurfaceSounds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SetHitMarkerSurfaceSounds_Statics::NewProp_NewHitMarkerSurfaceSounds_Key_KeyProp = { "NewHitMarkerSurfaceSounds_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SetHitMarkerSurfaceSounds_Statics::NewProp_NewHitMarkerSurfaceSounds = { "NewHitMarkerSurfaceSounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventSetHitMarkerSurfaceSounds_Parms, NewHitMarkerSurfaceSounds), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_SetHitMarkerSurfaceSounds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SetHitMarkerSurfaceSounds_Statics::NewProp_NewHitMarkerSurfaceSounds_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SetHitMarkerSurfaceSounds_Statics::NewProp_NewHitMarkerSurfaceSounds_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SetHitMarkerSurfaceSounds_Statics::NewProp_NewHitMarkerSurfaceSounds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetHitMarkerSurfaceSounds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_SetHitMarkerSurfaceSounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "SetHitMarkerSurfaceSounds", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_SetHitMarkerSurfaceSounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetHitMarkerSurfaceSounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetHitMarkerSurfaceSounds_Statics::MultiplayerProjectile_eventSetHitMarkerSurfaceSounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetHitMarkerSurfaceSounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_SetHitMarkerSurfaceSounds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetHitMarkerSurfaceSounds_Statics::MultiplayerProjectile_eventSetHitMarkerSurfaceSounds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_SetHitMarkerSurfaceSounds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_SetHitMarkerSurfaceSounds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execSetHitMarkerSurfaceSounds)
{
	P_GET_TMAP(UPhysicalMaterial*,USoundBase*,Z_Param_NewHitMarkerSurfaceSounds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHitMarkerSurfaceSounds(Z_Param_NewHitMarkerSurfaceSounds);
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function SetHitMarkerSurfaceSounds

// Begin Class AMultiplayerProjectile Function SetInterpolateDamageBetweenRanges
struct Z_Construct_UFunction_AMultiplayerProjectile_SetInterpolateDamageBetweenRanges_Statics
{
	struct MultiplayerProjectile_eventSetInterpolateDamageBetweenRanges_Parms
	{
		bool NewInterpolateDamageBetweenRanges;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewInterpolateDamageBetweenRanges_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewInterpolateDamageBetweenRanges;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerProjectile_SetInterpolateDamageBetweenRanges_Statics::NewProp_NewInterpolateDamageBetweenRanges_SetBit(void* Obj)
{
	((MultiplayerProjectile_eventSetInterpolateDamageBetweenRanges_Parms*)Obj)->NewInterpolateDamageBetweenRanges = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SetInterpolateDamageBetweenRanges_Statics::NewProp_NewInterpolateDamageBetweenRanges = { "NewInterpolateDamageBetweenRanges", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerProjectile_eventSetInterpolateDamageBetweenRanges_Parms), &Z_Construct_UFunction_AMultiplayerProjectile_SetInterpolateDamageBetweenRanges_Statics::NewProp_NewInterpolateDamageBetweenRanges_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_SetInterpolateDamageBetweenRanges_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SetInterpolateDamageBetweenRanges_Statics::NewProp_NewInterpolateDamageBetweenRanges,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetInterpolateDamageBetweenRanges_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_SetInterpolateDamageBetweenRanges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "SetInterpolateDamageBetweenRanges", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_SetInterpolateDamageBetweenRanges_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetInterpolateDamageBetweenRanges_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetInterpolateDamageBetweenRanges_Statics::MultiplayerProjectile_eventSetInterpolateDamageBetweenRanges_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetInterpolateDamageBetweenRanges_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_SetInterpolateDamageBetweenRanges_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetInterpolateDamageBetweenRanges_Statics::MultiplayerProjectile_eventSetInterpolateDamageBetweenRanges_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_SetInterpolateDamageBetweenRanges()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_SetInterpolateDamageBetweenRanges_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execSetInterpolateDamageBetweenRanges)
{
	P_GET_UBOOL(Z_Param_NewInterpolateDamageBetweenRanges);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInterpolateDamageBetweenRanges(Z_Param_NewInterpolateDamageBetweenRanges);
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function SetInterpolateDamageBetweenRanges

// Begin Class AMultiplayerProjectile Function SetIsExplosive
struct Z_Construct_UFunction_AMultiplayerProjectile_SetIsExplosive_Statics
{
	struct MultiplayerProjectile_eventSetIsExplosive_Parms
	{
		bool NewIsExplosive;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewIsExplosive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewIsExplosive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerProjectile_SetIsExplosive_Statics::NewProp_NewIsExplosive_SetBit(void* Obj)
{
	((MultiplayerProjectile_eventSetIsExplosive_Parms*)Obj)->NewIsExplosive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SetIsExplosive_Statics::NewProp_NewIsExplosive = { "NewIsExplosive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerProjectile_eventSetIsExplosive_Parms), &Z_Construct_UFunction_AMultiplayerProjectile_SetIsExplosive_Statics::NewProp_NewIsExplosive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_SetIsExplosive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SetIsExplosive_Statics::NewProp_NewIsExplosive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetIsExplosive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_SetIsExplosive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "SetIsExplosive", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_SetIsExplosive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetIsExplosive_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetIsExplosive_Statics::MultiplayerProjectile_eventSetIsExplosive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetIsExplosive_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_SetIsExplosive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetIsExplosive_Statics::MultiplayerProjectile_eventSetIsExplosive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_SetIsExplosive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_SetIsExplosive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execSetIsExplosive)
{
	P_GET_UBOOL(Z_Param_NewIsExplosive);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsExplosive(Z_Param_NewIsExplosive);
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function SetIsExplosive

// Begin Class AMultiplayerProjectile Function SetLaunchObjectStrength
struct Z_Construct_UFunction_AMultiplayerProjectile_SetLaunchObjectStrength_Statics
{
	struct MultiplayerProjectile_eventSetLaunchObjectStrength_Parms
	{
		float NewLaunchObjectStrength;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewLaunchObjectStrength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SetLaunchObjectStrength_Statics::NewProp_NewLaunchObjectStrength = { "NewLaunchObjectStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventSetLaunchObjectStrength_Parms, NewLaunchObjectStrength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_SetLaunchObjectStrength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SetLaunchObjectStrength_Statics::NewProp_NewLaunchObjectStrength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetLaunchObjectStrength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_SetLaunchObjectStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "SetLaunchObjectStrength", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_SetLaunchObjectStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetLaunchObjectStrength_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetLaunchObjectStrength_Statics::MultiplayerProjectile_eventSetLaunchObjectStrength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetLaunchObjectStrength_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_SetLaunchObjectStrength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetLaunchObjectStrength_Statics::MultiplayerProjectile_eventSetLaunchObjectStrength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_SetLaunchObjectStrength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_SetLaunchObjectStrength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execSetLaunchObjectStrength)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewLaunchObjectStrength);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLaunchObjectStrength(Z_Param_NewLaunchObjectStrength);
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function SetLaunchObjectStrength

// Begin Class AMultiplayerProjectile Function SetLaunchObjectVelocityChange
struct Z_Construct_UFunction_AMultiplayerProjectile_SetLaunchObjectVelocityChange_Statics
{
	struct MultiplayerProjectile_eventSetLaunchObjectVelocityChange_Parms
	{
		bool NewLaunchObjectVelocityChange;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewLaunchObjectVelocityChange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewLaunchObjectVelocityChange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerProjectile_SetLaunchObjectVelocityChange_Statics::NewProp_NewLaunchObjectVelocityChange_SetBit(void* Obj)
{
	((MultiplayerProjectile_eventSetLaunchObjectVelocityChange_Parms*)Obj)->NewLaunchObjectVelocityChange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SetLaunchObjectVelocityChange_Statics::NewProp_NewLaunchObjectVelocityChange = { "NewLaunchObjectVelocityChange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerProjectile_eventSetLaunchObjectVelocityChange_Parms), &Z_Construct_UFunction_AMultiplayerProjectile_SetLaunchObjectVelocityChange_Statics::NewProp_NewLaunchObjectVelocityChange_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_SetLaunchObjectVelocityChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SetLaunchObjectVelocityChange_Statics::NewProp_NewLaunchObjectVelocityChange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetLaunchObjectVelocityChange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_SetLaunchObjectVelocityChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "SetLaunchObjectVelocityChange", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_SetLaunchObjectVelocityChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetLaunchObjectVelocityChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetLaunchObjectVelocityChange_Statics::MultiplayerProjectile_eventSetLaunchObjectVelocityChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetLaunchObjectVelocityChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_SetLaunchObjectVelocityChange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetLaunchObjectVelocityChange_Statics::MultiplayerProjectile_eventSetLaunchObjectVelocityChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_SetLaunchObjectVelocityChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_SetLaunchObjectVelocityChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execSetLaunchObjectVelocityChange)
{
	P_GET_UBOOL(Z_Param_NewLaunchObjectVelocityChange);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLaunchObjectVelocityChange(Z_Param_NewLaunchObjectVelocityChange);
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function SetLaunchObjectVelocityChange

// Begin Class AMultiplayerProjectile Function SetLaunchPhysicsObjects
struct Z_Construct_UFunction_AMultiplayerProjectile_SetLaunchPhysicsObjects_Statics
{
	struct MultiplayerProjectile_eventSetLaunchPhysicsObjects_Parms
	{
		bool NewLaunchPhysicsObjects;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewLaunchPhysicsObjects_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewLaunchPhysicsObjects;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerProjectile_SetLaunchPhysicsObjects_Statics::NewProp_NewLaunchPhysicsObjects_SetBit(void* Obj)
{
	((MultiplayerProjectile_eventSetLaunchPhysicsObjects_Parms*)Obj)->NewLaunchPhysicsObjects = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SetLaunchPhysicsObjects_Statics::NewProp_NewLaunchPhysicsObjects = { "NewLaunchPhysicsObjects", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerProjectile_eventSetLaunchPhysicsObjects_Parms), &Z_Construct_UFunction_AMultiplayerProjectile_SetLaunchPhysicsObjects_Statics::NewProp_NewLaunchPhysicsObjects_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_SetLaunchPhysicsObjects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SetLaunchPhysicsObjects_Statics::NewProp_NewLaunchPhysicsObjects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetLaunchPhysicsObjects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_SetLaunchPhysicsObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "SetLaunchPhysicsObjects", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_SetLaunchPhysicsObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetLaunchPhysicsObjects_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetLaunchPhysicsObjects_Statics::MultiplayerProjectile_eventSetLaunchPhysicsObjects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetLaunchPhysicsObjects_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_SetLaunchPhysicsObjects_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetLaunchPhysicsObjects_Statics::MultiplayerProjectile_eventSetLaunchPhysicsObjects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_SetLaunchPhysicsObjects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_SetLaunchPhysicsObjects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execSetLaunchPhysicsObjects)
{
	P_GET_UBOOL(Z_Param_NewLaunchPhysicsObjects);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLaunchPhysicsObjects(Z_Param_NewLaunchPhysicsObjects);
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function SetLaunchPhysicsObjects

// Begin Class AMultiplayerProjectile Function SetOwningPlayer
struct Z_Construct_UFunction_AMultiplayerProjectile_SetOwningPlayer_Statics
{
	struct MultiplayerProjectile_eventSetOwningPlayer_Parms
	{
		APawn* NewOwningPlayer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewOwningPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SetOwningPlayer_Statics::NewProp_NewOwningPlayer = { "NewOwningPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventSetOwningPlayer_Parms, NewOwningPlayer), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_SetOwningPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SetOwningPlayer_Statics::NewProp_NewOwningPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetOwningPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_SetOwningPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "SetOwningPlayer", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_SetOwningPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetOwningPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetOwningPlayer_Statics::MultiplayerProjectile_eventSetOwningPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetOwningPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_SetOwningPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetOwningPlayer_Statics::MultiplayerProjectile_eventSetOwningPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_SetOwningPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_SetOwningPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execSetOwningPlayer)
{
	P_GET_OBJECT(APawn,Z_Param_NewOwningPlayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOwningPlayer(Z_Param_NewOwningPlayer);
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function SetOwningPlayer

// Begin Class AMultiplayerProjectile Function SetPrintDistanceTraveled
struct Z_Construct_UFunction_AMultiplayerProjectile_SetPrintDistanceTraveled_Statics
{
	struct MultiplayerProjectile_eventSetPrintDistanceTraveled_Parms
	{
		bool NewPrintDistanceTraveled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewPrintDistanceTraveled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewPrintDistanceTraveled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerProjectile_SetPrintDistanceTraveled_Statics::NewProp_NewPrintDistanceTraveled_SetBit(void* Obj)
{
	((MultiplayerProjectile_eventSetPrintDistanceTraveled_Parms*)Obj)->NewPrintDistanceTraveled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SetPrintDistanceTraveled_Statics::NewProp_NewPrintDistanceTraveled = { "NewPrintDistanceTraveled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerProjectile_eventSetPrintDistanceTraveled_Parms), &Z_Construct_UFunction_AMultiplayerProjectile_SetPrintDistanceTraveled_Statics::NewProp_NewPrintDistanceTraveled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_SetPrintDistanceTraveled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SetPrintDistanceTraveled_Statics::NewProp_NewPrintDistanceTraveled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetPrintDistanceTraveled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_SetPrintDistanceTraveled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "SetPrintDistanceTraveled", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_SetPrintDistanceTraveled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetPrintDistanceTraveled_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetPrintDistanceTraveled_Statics::MultiplayerProjectile_eventSetPrintDistanceTraveled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetPrintDistanceTraveled_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_SetPrintDistanceTraveled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetPrintDistanceTraveled_Statics::MultiplayerProjectile_eventSetPrintDistanceTraveled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_SetPrintDistanceTraveled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_SetPrintDistanceTraveled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execSetPrintDistanceTraveled)
{
	P_GET_UBOOL(Z_Param_NewPrintDistanceTraveled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPrintDistanceTraveled(Z_Param_NewPrintDistanceTraveled);
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function SetPrintDistanceTraveled

// Begin Class AMultiplayerProjectile Function SetTimeToDespawnProjectile
struct Z_Construct_UFunction_AMultiplayerProjectile_SetTimeToDespawnProjectile_Statics
{
	struct MultiplayerProjectile_eventSetTimeToDespawnProjectile_Parms
	{
		float NewTimeToDespawnProjectile;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewTimeToDespawnProjectile;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SetTimeToDespawnProjectile_Statics::NewProp_NewTimeToDespawnProjectile = { "NewTimeToDespawnProjectile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventSetTimeToDespawnProjectile_Parms, NewTimeToDespawnProjectile), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_SetTimeToDespawnProjectile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SetTimeToDespawnProjectile_Statics::NewProp_NewTimeToDespawnProjectile,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetTimeToDespawnProjectile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_SetTimeToDespawnProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "SetTimeToDespawnProjectile", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_SetTimeToDespawnProjectile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetTimeToDespawnProjectile_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetTimeToDespawnProjectile_Statics::MultiplayerProjectile_eventSetTimeToDespawnProjectile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetTimeToDespawnProjectile_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_SetTimeToDespawnProjectile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetTimeToDespawnProjectile_Statics::MultiplayerProjectile_eventSetTimeToDespawnProjectile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_SetTimeToDespawnProjectile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_SetTimeToDespawnProjectile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execSetTimeToDespawnProjectile)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewTimeToDespawnProjectile);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTimeToDespawnProjectile(Z_Param_NewTimeToDespawnProjectile);
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function SetTimeToDespawnProjectile

// Begin Class AMultiplayerProjectile Function SetUseActorClassesForHitMarkers
struct Z_Construct_UFunction_AMultiplayerProjectile_SetUseActorClassesForHitMarkers_Statics
{
	struct MultiplayerProjectile_eventSetUseActorClassesForHitMarkers_Parms
	{
		int32 NewUseActorClassesForHitMarkers;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewUseActorClassesForHitMarkers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SetUseActorClassesForHitMarkers_Statics::NewProp_NewUseActorClassesForHitMarkers = { "NewUseActorClassesForHitMarkers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventSetUseActorClassesForHitMarkers_Parms, NewUseActorClassesForHitMarkers), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_SetUseActorClassesForHitMarkers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SetUseActorClassesForHitMarkers_Statics::NewProp_NewUseActorClassesForHitMarkers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetUseActorClassesForHitMarkers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_SetUseActorClassesForHitMarkers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "SetUseActorClassesForHitMarkers", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_SetUseActorClassesForHitMarkers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetUseActorClassesForHitMarkers_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetUseActorClassesForHitMarkers_Statics::MultiplayerProjectile_eventSetUseActorClassesForHitMarkers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetUseActorClassesForHitMarkers_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_SetUseActorClassesForHitMarkers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetUseActorClassesForHitMarkers_Statics::MultiplayerProjectile_eventSetUseActorClassesForHitMarkers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_SetUseActorClassesForHitMarkers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_SetUseActorClassesForHitMarkers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execSetUseActorClassesForHitMarkers)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewUseActorClassesForHitMarkers);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUseActorClassesForHitMarkers(Z_Param_NewUseActorClassesForHitMarkers);
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function SetUseActorClassesForHitMarkers

// Begin Class AMultiplayerProjectile Function SetWhizzingSoundVolumeBasedOnSpeed
struct Z_Construct_UFunction_AMultiplayerProjectile_SetWhizzingSoundVolumeBasedOnSpeed_Statics
{
	struct MultiplayerProjectile_eventSetWhizzingSoundVolumeBasedOnSpeed_Parms
	{
		bool NewWhizzingSoundVolumeBasedOnSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewWhizzingSoundVolumeBasedOnSpeed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewWhizzingSoundVolumeBasedOnSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerProjectile_SetWhizzingSoundVolumeBasedOnSpeed_Statics::NewProp_NewWhizzingSoundVolumeBasedOnSpeed_SetBit(void* Obj)
{
	((MultiplayerProjectile_eventSetWhizzingSoundVolumeBasedOnSpeed_Parms*)Obj)->NewWhizzingSoundVolumeBasedOnSpeed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SetWhizzingSoundVolumeBasedOnSpeed_Statics::NewProp_NewWhizzingSoundVolumeBasedOnSpeed = { "NewWhizzingSoundVolumeBasedOnSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerProjectile_eventSetWhizzingSoundVolumeBasedOnSpeed_Parms), &Z_Construct_UFunction_AMultiplayerProjectile_SetWhizzingSoundVolumeBasedOnSpeed_Statics::NewProp_NewWhizzingSoundVolumeBasedOnSpeed_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_SetWhizzingSoundVolumeBasedOnSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SetWhizzingSoundVolumeBasedOnSpeed_Statics::NewProp_NewWhizzingSoundVolumeBasedOnSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetWhizzingSoundVolumeBasedOnSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_SetWhizzingSoundVolumeBasedOnSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "SetWhizzingSoundVolumeBasedOnSpeed", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_SetWhizzingSoundVolumeBasedOnSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetWhizzingSoundVolumeBasedOnSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetWhizzingSoundVolumeBasedOnSpeed_Statics::MultiplayerProjectile_eventSetWhizzingSoundVolumeBasedOnSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SetWhizzingSoundVolumeBasedOnSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_SetWhizzingSoundVolumeBasedOnSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SetWhizzingSoundVolumeBasedOnSpeed_Statics::MultiplayerProjectile_eventSetWhizzingSoundVolumeBasedOnSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_SetWhizzingSoundVolumeBasedOnSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_SetWhizzingSoundVolumeBasedOnSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execSetWhizzingSoundVolumeBasedOnSpeed)
{
	P_GET_UBOOL(Z_Param_NewWhizzingSoundVolumeBasedOnSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWhizzingSoundVolumeBasedOnSpeed(Z_Param_NewWhizzingSoundVolumeBasedOnSpeed);
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function SetWhizzingSoundVolumeBasedOnSpeed

// Begin Class AMultiplayerProjectile Function SilenceBulletWhizzingSound
struct Z_Construct_UFunction_AMultiplayerProjectile_SilenceBulletWhizzingSound_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_SilenceBulletWhizzingSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "SilenceBulletWhizzingSound", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SilenceBulletWhizzingSound_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_SilenceBulletWhizzingSound_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_SilenceBulletWhizzingSound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_SilenceBulletWhizzingSound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execSilenceBulletWhizzingSound)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SilenceBulletWhizzingSound();
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function SilenceBulletWhizzingSound

// Begin Class AMultiplayerProjectile Function SoftDestroyProjectile
struct Z_Construct_UFunction_AMultiplayerProjectile_SoftDestroyProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "This will hide the projectile if you need it to not be actually destroyed but still hidden" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_SoftDestroyProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "SoftDestroyProjectile", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SoftDestroyProjectile_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_SoftDestroyProjectile_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_SoftDestroyProjectile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_SoftDestroyProjectile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execSoftDestroyProjectile)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SoftDestroyProjectile();
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function SoftDestroyProjectile

// Begin Class AMultiplayerProjectile Function SpawnHitParticleEffect
struct Z_Construct_UFunction_AMultiplayerProjectile_SpawnHitParticleEffect_Statics
{
	struct MultiplayerProjectile_eventSpawnHitParticleEffect_Parms
	{
		UParticleSystem* ParticleEffect;
		FVector ImpactPoint;
		FRotator ImpactRotation;
		FHitResult Hit;
		bool UseCurrentLocationForHit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "CPP_Default_UseCurrentLocationForHit", "false" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParticleEffect;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static void NewProp_UseCurrentLocationForHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseCurrentLocationForHit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SpawnHitParticleEffect_Statics::NewProp_ParticleEffect = { "ParticleEffect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventSpawnHitParticleEffect_Parms, ParticleEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SpawnHitParticleEffect_Statics::NewProp_ImpactPoint = { "ImpactPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventSpawnHitParticleEffect_Parms, ImpactPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SpawnHitParticleEffect_Statics::NewProp_ImpactRotation = { "ImpactRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventSpawnHitParticleEffect_Parms, ImpactRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SpawnHitParticleEffect_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerProjectile_eventSpawnHitParticleEffect_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
void Z_Construct_UFunction_AMultiplayerProjectile_SpawnHitParticleEffect_Statics::NewProp_UseCurrentLocationForHit_SetBit(void* Obj)
{
	((MultiplayerProjectile_eventSpawnHitParticleEffect_Parms*)Obj)->UseCurrentLocationForHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerProjectile_SpawnHitParticleEffect_Statics::NewProp_UseCurrentLocationForHit = { "UseCurrentLocationForHit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerProjectile_eventSpawnHitParticleEffect_Parms), &Z_Construct_UFunction_AMultiplayerProjectile_SpawnHitParticleEffect_Statics::NewProp_UseCurrentLocationForHit_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerProjectile_SpawnHitParticleEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SpawnHitParticleEffect_Statics::NewProp_ParticleEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SpawnHitParticleEffect_Statics::NewProp_ImpactPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SpawnHitParticleEffect_Statics::NewProp_ImpactRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SpawnHitParticleEffect_Statics::NewProp_Hit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerProjectile_SpawnHitParticleEffect_Statics::NewProp_UseCurrentLocationForHit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SpawnHitParticleEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjectile_SpawnHitParticleEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjectile, nullptr, "SpawnHitParticleEffect", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerProjectile_SpawnHitParticleEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SpawnHitParticleEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SpawnHitParticleEffect_Statics::MultiplayerProjectile_eventSpawnHitParticleEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjectile_SpawnHitParticleEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerProjectile_SpawnHitParticleEffect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerProjectile_SpawnHitParticleEffect_Statics::MultiplayerProjectile_eventSpawnHitParticleEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerProjectile_SpawnHitParticleEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjectile_SpawnHitParticleEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerProjectile::execSpawnHitParticleEffect)
{
	P_GET_OBJECT(UParticleSystem,Z_Param_ParticleEffect);
	P_GET_STRUCT(FVector,Z_Param_ImpactPoint);
	P_GET_STRUCT(FRotator,Z_Param_ImpactRotation);
	P_GET_STRUCT(FHitResult,Z_Param_Hit);
	P_GET_UBOOL(Z_Param_UseCurrentLocationForHit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnHitParticleEffect(Z_Param_ParticleEffect,Z_Param_ImpactPoint,Z_Param_ImpactRotation,Z_Param_Hit,Z_Param_UseCurrentLocationForHit);
	P_NATIVE_END;
}
// End Class AMultiplayerProjectile Function SpawnHitParticleEffect

// Begin Class AMultiplayerProjectile
void AMultiplayerProjectile::StaticRegisterNativesAMultiplayerProjectile()
{
	UClass* Class = AMultiplayerProjectile::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DestroySelf", &AMultiplayerProjectile::execDestroySelf },
		{ "DetermineBeginPlayDespawnTimer", &AMultiplayerProjectile::execDetermineBeginPlayDespawnTimer },
		{ "DetermineBulletHitModeDelay", &AMultiplayerProjectile::execDetermineBulletHitModeDelay },
		{ "ExecuteHitFunction", &AMultiplayerProjectile::execExecuteHitFunction },
		{ "Explode", &AMultiplayerProjectile::execExplode },
		{ "GetBulletHitControllerVibration", &AMultiplayerProjectile::execGetBulletHitControllerVibration },
		{ "GetBulletHitControllerVibrationAttenuation", &AMultiplayerProjectile::execGetBulletHitControllerVibrationAttenuation },
		{ "GetBulletHitControllerVibrationTag", &AMultiplayerProjectile::execGetBulletHitControllerVibrationTag },
		{ "GetBulletHitDecals", &AMultiplayerProjectile::execGetBulletHitDecals },
		{ "GetBulletHitDecalSize", &AMultiplayerProjectile::execGetBulletHitDecalSize },
		{ "GetBulletHitMode", &AMultiplayerProjectile::execGetBulletHitMode },
		{ "GetBulletHitModeDelay", &AMultiplayerProjectile::execGetBulletHitModeDelay },
		{ "GetBulletHitSounds", &AMultiplayerProjectile::execGetBulletHitSounds },
		{ "GetCanCrumbleDestructibleMeshes", &AMultiplayerProjectile::execGetCanCrumbleDestructibleMeshes },
		{ "GetDamage", &AMultiplayerProjectile::execGetDamage },
		{ "GetDamageFalloffMultiplierAtRange", &AMultiplayerProjectile::execGetDamageFalloffMultiplierAtRange },
		{ "GetDamageType", &AMultiplayerProjectile::execGetDamageType },
		{ "GetDefaultBulletHitDecal", &AMultiplayerProjectile::execGetDefaultBulletHitDecal },
		{ "GetDefaultBulletHitSound", &AMultiplayerProjectile::execGetDefaultBulletHitSound },
		{ "GetDefaultDamage", &AMultiplayerProjectile::execGetDefaultDamage },
		{ "GetDefaultHitEffect", &AMultiplayerProjectile::execGetDefaultHitEffect },
		{ "GetDestructionSphereSize", &AMultiplayerProjectile::execGetDestructionSphereSize },
		{ "GetDestructionSphereToSpawn", &AMultiplayerProjectile::execGetDestructionSphereToSpawn },
		{ "GetExplosionIgnoredActors", &AMultiplayerProjectile::execGetExplosionIgnoredActors },
		{ "GetExplosionIgnoredClasses", &AMultiplayerProjectile::execGetExplosionIgnoredClasses },
		{ "GetExplosionIgnoreOwner", &AMultiplayerProjectile::execGetExplosionIgnoreOwner },
		{ "GetExplosiveCollisionChannel", &AMultiplayerProjectile::execGetExplosiveCollisionChannel },
		{ "GetExplosiveDamageRadius", &AMultiplayerProjectile::execGetExplosiveDamageRadius },
		{ "GetExplosiveDoFullDamage", &AMultiplayerProjectile::execGetExplosiveDoFullDamage },
		{ "GetFireLocation", &AMultiplayerProjectile::execGetFireLocation },
		{ "GetHitDirection", &AMultiplayerProjectile::execGetHitDirection },
		{ "GetHitEffects", &AMultiplayerProjectile::execGetHitEffects },
		{ "GetHitEffectScale", &AMultiplayerProjectile::execGetHitEffectScale },
		{ "GetHitMarkerActorSounds", &AMultiplayerProjectile::execGetHitMarkerActorSounds },
		{ "GetHitMarkerSurfaceSounds", &AMultiplayerProjectile::execGetHitMarkerSurfaceSounds },
		{ "GetInterpolateDamageBetweenRanges", &AMultiplayerProjectile::execGetInterpolateDamageBetweenRanges },
		{ "GetIsExplosive", &AMultiplayerProjectile::execGetIsExplosive },
		{ "GetLaunchObjectStrength", &AMultiplayerProjectile::execGetLaunchObjectStrength },
		{ "GetLaunchObjectVelocityChange", &AMultiplayerProjectile::execGetLaunchObjectVelocityChange },
		{ "GetLaunchPhysicsObjects", &AMultiplayerProjectile::execGetLaunchPhysicsObjects },
		{ "GetOwningPlayer", &AMultiplayerProjectile::execGetOwningPlayer },
		{ "GetPrintDistanceTraveled", &AMultiplayerProjectile::execGetPrintDistanceTraveled },
		{ "GetTimeToDespawnProjectile", &AMultiplayerProjectile::execGetTimeToDespawnProjectile },
		{ "GetUseActorClassesForHitMarkers", &AMultiplayerProjectile::execGetUseActorClassesForHitMarkers },
		{ "GetWhizzingSoundVolumeBasedOnSpeed", &AMultiplayerProjectile::execGetWhizzingSoundVolumeBasedOnSpeed },
		{ "MulticastSilenceBulletWhizzingSound", &AMultiplayerProjectile::execMulticastSilenceBulletWhizzingSound },
		{ "MulticastSoftDestroyProjectile", &AMultiplayerProjectile::execMulticastSoftDestroyProjectile },
		{ "MulticastSpawnHitParticleEffect", &AMultiplayerProjectile::execMulticastSpawnHitParticleEffect },
		{ "OnProjectileMeshHit", &AMultiplayerProjectile::execOnProjectileMeshHit },
		{ "RegisterHit", &AMultiplayerProjectile::execRegisterHit },
		{ "ServerSilenceBulletWhizzingSound", &AMultiplayerProjectile::execServerSilenceBulletWhizzingSound },
		{ "ServerSoftDestroyProjectile", &AMultiplayerProjectile::execServerSoftDestroyProjectile },
		{ "ServerSpawnHitParticleEffect", &AMultiplayerProjectile::execServerSpawnHitParticleEffect },
		{ "SetBulletHitControllerVibration", &AMultiplayerProjectile::execSetBulletHitControllerVibration },
		{ "SetBulletHitControllerVibrationAttenuation", &AMultiplayerProjectile::execSetBulletHitControllerVibrationAttenuation },
		{ "SetBulletHitControllerVibrationTag", &AMultiplayerProjectile::execSetBulletHitControllerVibrationTag },
		{ "SetBulletHitDecals", &AMultiplayerProjectile::execSetBulletHitDecals },
		{ "SetBulletHitDecalSize", &AMultiplayerProjectile::execSetBulletHitDecalSize },
		{ "SetBulletHitMode", &AMultiplayerProjectile::execSetBulletHitMode },
		{ "SetBulletHitModeDelay", &AMultiplayerProjectile::execSetBulletHitModeDelay },
		{ "SetBulletHitSounds", &AMultiplayerProjectile::execSetBulletHitSounds },
		{ "SetCanCrumbleDestructibleMeshes", &AMultiplayerProjectile::execSetCanCrumbleDestructibleMeshes },
		{ "SetDamage", &AMultiplayerProjectile::execSetDamage },
		{ "SetDamageFalloffMultiplierAtRange", &AMultiplayerProjectile::execSetDamageFalloffMultiplierAtRange },
		{ "SetDamageType", &AMultiplayerProjectile::execSetDamageType },
		{ "SetDefaultBulletHitDecal", &AMultiplayerProjectile::execSetDefaultBulletHitDecal },
		{ "SetDefaultBulletHitSound", &AMultiplayerProjectile::execSetDefaultBulletHitSound },
		{ "SetDefaultDamage", &AMultiplayerProjectile::execSetDefaultDamage },
		{ "SetDefaultHitEffect", &AMultiplayerProjectile::execSetDefaultHitEffect },
		{ "SetDestructionSphereSize", &AMultiplayerProjectile::execSetDestructionSphereSize },
		{ "SetDestructionSphereToSpawn", &AMultiplayerProjectile::execSetDestructionSphereToSpawn },
		{ "SetExplosionIgnoredActors", &AMultiplayerProjectile::execSetExplosionIgnoredActors },
		{ "SetExplosionIgnoredClasses", &AMultiplayerProjectile::execSetExplosionIgnoredClasses },
		{ "SetExplosionIgnoreOwner", &AMultiplayerProjectile::execSetExplosionIgnoreOwner },
		{ "SetExplosiveCollisionChannel", &AMultiplayerProjectile::execSetExplosiveCollisionChannel },
		{ "SetExplosiveDamageRadius", &AMultiplayerProjectile::execSetExplosiveDamageRadius },
		{ "SetExplosiveDoFullDamage", &AMultiplayerProjectile::execSetExplosiveDoFullDamage },
		{ "SetFireLocation", &AMultiplayerProjectile::execSetFireLocation },
		{ "SetHitDirection", &AMultiplayerProjectile::execSetHitDirection },
		{ "SetHitEffects", &AMultiplayerProjectile::execSetHitEffects },
		{ "SetHitEffectScale", &AMultiplayerProjectile::execSetHitEffectScale },
		{ "SetHitMarkerActorSounds", &AMultiplayerProjectile::execSetHitMarkerActorSounds },
		{ "SetHitMarkerSurfaceSounds", &AMultiplayerProjectile::execSetHitMarkerSurfaceSounds },
		{ "SetInterpolateDamageBetweenRanges", &AMultiplayerProjectile::execSetInterpolateDamageBetweenRanges },
		{ "SetIsExplosive", &AMultiplayerProjectile::execSetIsExplosive },
		{ "SetLaunchObjectStrength", &AMultiplayerProjectile::execSetLaunchObjectStrength },
		{ "SetLaunchObjectVelocityChange", &AMultiplayerProjectile::execSetLaunchObjectVelocityChange },
		{ "SetLaunchPhysicsObjects", &AMultiplayerProjectile::execSetLaunchPhysicsObjects },
		{ "SetOwningPlayer", &AMultiplayerProjectile::execSetOwningPlayer },
		{ "SetPrintDistanceTraveled", &AMultiplayerProjectile::execSetPrintDistanceTraveled },
		{ "SetTimeToDespawnProjectile", &AMultiplayerProjectile::execSetTimeToDespawnProjectile },
		{ "SetUseActorClassesForHitMarkers", &AMultiplayerProjectile::execSetUseActorClassesForHitMarkers },
		{ "SetWhizzingSoundVolumeBasedOnSpeed", &AMultiplayerProjectile::execSetWhizzingSoundVolumeBasedOnSpeed },
		{ "SilenceBulletWhizzingSound", &AMultiplayerProjectile::execSilenceBulletWhizzingSound },
		{ "SoftDestroyProjectile", &AMultiplayerProjectile::execSoftDestroyProjectile },
		{ "SpawnHitParticleEffect", &AMultiplayerProjectile::execSpawnHitParticleEffect },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMultiplayerProjectile);
UClass* Z_Construct_UClass_AMultiplayerProjectile_NoRegister()
{
	return AMultiplayerProjectile::StaticClass();
}
struct Z_Construct_UClass_AMultiplayerProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MultiplayerProjectile.h" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FOnProjectileHit_MetaData[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletWhizzingSoundComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovement_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadialForceComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningPlayer_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaunchPhysicsObjects_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "For this to replicate you need to replicate movement for the actor you're launching" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaunchObjectStrength_MetaData[] = {
		{ "Category", "Firing" },
		{ "ClampMin", "0.001000" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Only applies if LaunchPhysicsObjects = true" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaunchObjectVelocityChange_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Only applies if LaunchPhysicsObjects = true" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsExplosive_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitEffectScale_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionIgnoreOwner_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletHitMode_MetaData[] = {
		{ "Category", "Firing" },
		{ "ClampMax", "2" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "0 = just apply damage, 1 = apply damage and execute ExecuteHitFunction(), 2 = just execute ExecuteHitFunction(), to use this override the ExecuteHitFunction() or add event ExecuteHitFunction, for projectiles you will need to define this function in the projectile, this function only runs on server" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletHitModeDelay_MetaData[] = {
		{ "Category", "Firing" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Only applies if BulletHitMode equals 1 or 2, and works better for projectiles, set to 0 to disable" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionIgnoredActors_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionIgnoredClasses_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeToDespawnProjectile_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This will determine the amount of time before explosive projectiles explode if they don't hit anything, 0 = disabled, only applies if UseProjectile and IsExplosive are true" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDamage_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Add pysical materials like the head to apply different damage, if left blank it will just apply default damage" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplosiveDamageRadius_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplosiveDoFullDamage_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplosiveCollisionChannel_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageFalloffMultiplierAtRange_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "The first float is the distance traveled and the second float is the damage multiplier at that range, values above 1 do more damage, does not apply to explosives" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpolateDamageBetweenRanges_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Only applies if DamageFalloffMultiplierAtRange has 2 or more values, if the target distance is in between 2 distances in the DamageFalloffMultiplierAtRange variable the damage will also be in between the 2 damages in the DamageFalloffMultiplierAtRange variable" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrintDistanceTraveled_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "This will print a string showing how far the bullet went" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireLocation_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitDirection_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultHitEffect_MetaData[] = {
		{ "Category", "Particles" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitEffects_MetaData[] = {
		{ "Category", "Hit Effects" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Add pysical materials like the head to spawn different particle effects, if left blank it will just use the default hit effect" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBulletHitSound_MetaData[] = {
		{ "Category", "Hit Effects" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletHitSounds_MetaData[] = {
		{ "Category", "Hit Effects" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBulletHitDecal_MetaData[] = {
		{ "Category", "Hit Effects" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletHitDecals_MetaData[] = {
		{ "Category", "Hit Effects" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Using the physical material allows you to have a different decal for each surface" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletHitDecalSize_MetaData[] = {
		{ "Category", "Hit Effects" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WhizzingSoundVolumeBasedOnSpeed_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletWhizzingSoundVolume_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseActorClassesForHitMarkers_MetaData[] = {
		{ "Category", "Hit Effects" },
		{ "ClampMax", "2" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "0 = hit actor classes, 1 = hit physical materials, 2 = prioritize physical material but fallback on actor class, does not apply to explosives" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitMarkerActorSounds_MetaData[] = {
		{ "Category", "Hit Effects" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Only applies if UseActorClassesForHitMarkers = true" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitMarkerSurfaceSounds_MetaData[] = {
		{ "Category", "Hit Effects" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Using the physical material allows you to have a different sound for each surface, only applies if UseActorClassesForHitMarkers = false" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanCrumbleDestructibleMeshes_MetaData[] = {
		{ "Category", "Chaos Destruction" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestructionSphereSize_MetaData[] = {
		{ "Category", "Chaos Destruction" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Also set this for explosives, destruction sphere will use this not damage radius" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestructionSphereToSpawn_MetaData[] = {
		{ "Category", "Chaos Destruction" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "This is used to destroy destructible meshes, make this either FS_MasterField or a child of it" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletHitControllerVibration_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "This also applies to explosives, clear this to disable" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletHitControllerVibrationAttenuation_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletHitControllerVibrationTag_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredHit_MetaData[] = {
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletHitModeTimerHandle_MetaData[] = {
		{ "Category", "Timers" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BeginPlayDespawnTimerHandle_MetaData[] = {
		{ "Category", "Timers" },
		{ "ModuleRelativePath", "Public/MultiplayerProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_FOnProjectileHit;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletWhizzingSoundComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovement;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RadialForceComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningPlayer;
	static void NewProp_LaunchPhysicsObjects_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LaunchPhysicsObjects;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LaunchObjectStrength;
	static void NewProp_LaunchObjectVelocityChange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LaunchObjectVelocityChange;
	static void NewProp_IsExplosive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsExplosive;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitEffectScale;
	static void NewProp_ExplosionIgnoreOwner_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ExplosionIgnoreOwner;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BulletHitMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BulletHitModeDelay;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExplosionIgnoredActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExplosionIgnoredActors;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ExplosionIgnoredClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExplosionIgnoredClasses;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToDespawnProjectile;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Damage_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExplosiveDamageRadius;
	static void NewProp_ExplosiveDoFullDamage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ExplosiveDoFullDamage;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ExplosiveCollisionChannel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageFalloffMultiplierAtRange_ValueProp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageFalloffMultiplierAtRange_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DamageFalloffMultiplierAtRange;
	static void NewProp_InterpolateDamageBetweenRanges_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InterpolateDamageBetweenRanges;
	static void NewProp_PrintDistanceTraveled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PrintDistanceTraveled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FireLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitDirection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultHitEffect;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitEffects_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitEffects_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_HitEffects;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultBulletHitSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletHitSounds_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletHitSounds_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_BulletHitSounds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultBulletHitDecal;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletHitDecals_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletHitDecals_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_BulletHitDecals;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BulletHitDecalSize;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DamageType;
	static void NewProp_WhizzingSoundVolumeBasedOnSpeed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_WhizzingSoundVolumeBasedOnSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BulletWhizzingSoundVolume;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UseActorClassesForHitMarkers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitMarkerActorSounds_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_HitMarkerActorSounds_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_HitMarkerActorSounds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitMarkerSurfaceSounds_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitMarkerSurfaceSounds_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_HitMarkerSurfaceSounds;
	static void NewProp_CanCrumbleDestructibleMeshes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanCrumbleDestructibleMeshes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DestructionSphereSize;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DestructionSphereToSpawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletHitControllerVibration;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletHitControllerVibrationAttenuation;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BulletHitControllerVibrationTag;
	static void NewProp_RegisteredHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RegisteredHit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BulletHitModeTimerHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BeginPlayDespawnTimerHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMultiplayerProjectile_DestroySelf, "DestroySelf" }, // 3864433405
		{ &Z_Construct_UFunction_AMultiplayerProjectile_DetermineBeginPlayDespawnTimer, "DetermineBeginPlayDespawnTimer" }, // 664982993
		{ &Z_Construct_UFunction_AMultiplayerProjectile_DetermineBulletHitModeDelay, "DetermineBulletHitModeDelay" }, // 1483088529
		{ &Z_Construct_UFunction_AMultiplayerProjectile_ExecuteHitFunction, "ExecuteHitFunction" }, // 1872779974
		{ &Z_Construct_UFunction_AMultiplayerProjectile_Explode, "Explode" }, // 3875442760
		{ &Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitControllerVibration, "GetBulletHitControllerVibration" }, // 3243790254
		{ &Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitControllerVibrationAttenuation, "GetBulletHitControllerVibrationAttenuation" }, // 1615471008
		{ &Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitControllerVibrationTag, "GetBulletHitControllerVibrationTag" }, // 962416498
		{ &Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitDecals, "GetBulletHitDecals" }, // 426927385
		{ &Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitDecalSize, "GetBulletHitDecalSize" }, // 2799630127
		{ &Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitMode, "GetBulletHitMode" }, // 2419527426
		{ &Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitModeDelay, "GetBulletHitModeDelay" }, // 317458121
		{ &Z_Construct_UFunction_AMultiplayerProjectile_GetBulletHitSounds, "GetBulletHitSounds" }, // 1571683097
		{ &Z_Construct_UFunction_AMultiplayerProjectile_GetCanCrumbleDestructibleMeshes, "GetCanCrumbleDestructibleMeshes" }, // 3433528657
		{ &Z_Construct_UFunction_AMultiplayerProjectile_GetDamage, "GetDamage" }, // 1053630075
		{ &Z_Construct_UFunction_AMultiplayerProjectile_GetDamageFalloffMultiplierAtRange, "GetDamageFalloffMultiplierAtRange" }, // 1813350766
		{ &Z_Construct_UFunction_AMultiplayerProjectile_GetDamageType, "GetDamageType" }, // 3694302664
		{ &Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultBulletHitDecal, "GetDefaultBulletHitDecal" }, // 3448700175
		{ &Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultBulletHitSound, "GetDefaultBulletHitSound" }, // 398733877
		{ &Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultDamage, "GetDefaultDamage" }, // 3326240522
		{ &Z_Construct_UFunction_AMultiplayerProjectile_GetDefaultHitEffect, "GetDefaultHitEffect" }, // 2961369987
		{ &Z_Construct_UFunction_AMultiplayerProjectile_GetDestructionSphereSize, "GetDestructionSphereSize" }, // 3226444064
		{ &Z_Construct_UFunction_AMultiplayerProjectile_GetDestructionSphereToSpawn, "GetDestructionSphereToSpawn" }, // 2466278235
		{ &Z_Construct_UFunction_AMultiplayerProjectile_GetExplosionIgnoredActors, "GetExplosionIgnoredActors" }, // 1324831363
		{ &Z_Construct_UFunction_AMultiplayerProjectile_GetExplosionIgnoredClasses, "GetExplosionIgnoredClasses" }, // 2100010936
		{ &Z_Construct_UFunction_AMultiplayerProjectile_GetExplosionIgnoreOwner, "GetExplosionIgnoreOwner" }, // 1365135703
		{ &Z_Construct_UFunction_AMultiplayerProjectile_GetExplosiveCollisionChannel, "GetExplosiveCollisionChannel" }, // 2974625811
		{ &Z_Construct_UFunction_AMultiplayerProjectile_GetExplosiveDamageRadius, "GetExplosiveDamageRadius" }, // 2571179993
		{ &Z_Construct_UFunction_AMultiplayerProjectile_GetExplosiveDoFullDamage, "GetExplosiveDoFullDamage" }, // 505297827
		{ &Z_Construct_UFunction_AMultiplayerProjectile_GetFireLocation, "GetFireLocation" }, // 2209675709
		{ &Z_Construct_UFunction_AMultiplayerProjectile_GetHitDirection, "GetHitDirection" }, // 3999914316
		{ &Z_Construct_UFunction_AMultiplayerProjectile_GetHitEffects, "GetHitEffects" }, // 2506205162
		{ &Z_Construct_UFunction_AMultiplayerProjectile_GetHitEffectScale, "GetHitEffectScale" }, // 3585302310
		{ &Z_Construct_UFunction_AMultiplayerProjectile_GetHitMarkerActorSounds, "GetHitMarkerActorSounds" }, // 4055088411
		{ &Z_Construct_UFunction_AMultiplayerProjectile_GetHitMarkerSurfaceSounds, "GetHitMarkerSurfaceSounds" }, // 321289355
		{ &Z_Construct_UFunction_AMultiplayerProjectile_GetInterpolateDamageBetweenRanges, "GetInterpolateDamageBetweenRanges" }, // 2144085006
		{ &Z_Construct_UFunction_AMultiplayerProjectile_GetIsExplosive, "GetIsExplosive" }, // 1956385422
		{ &Z_Construct_UFunction_AMultiplayerProjectile_GetLaunchObjectStrength, "GetLaunchObjectStrength" }, // 1347797047
		{ &Z_Construct_UFunction_AMultiplayerProjectile_GetLaunchObjectVelocityChange, "GetLaunchObjectVelocityChange" }, // 898183326
		{ &Z_Construct_UFunction_AMultiplayerProjectile_GetLaunchPhysicsObjects, "GetLaunchPhysicsObjects" }, // 792997682
		{ &Z_Construct_UFunction_AMultiplayerProjectile_GetOwningPlayer, "GetOwningPlayer" }, // 2467453986
		{ &Z_Construct_UFunction_AMultiplayerProjectile_GetPrintDistanceTraveled, "GetPrintDistanceTraveled" }, // 1521431988
		{ &Z_Construct_UFunction_AMultiplayerProjectile_GetTimeToDespawnProjectile, "GetTimeToDespawnProjectile" }, // 3596359709
		{ &Z_Construct_UFunction_AMultiplayerProjectile_GetUseActorClassesForHitMarkers, "GetUseActorClassesForHitMarkers" }, // 3226252814
		{ &Z_Construct_UFunction_AMultiplayerProjectile_GetWhizzingSoundVolumeBasedOnSpeed, "GetWhizzingSoundVolumeBasedOnSpeed" }, // 3130109655
		{ &Z_Construct_UFunction_AMultiplayerProjectile_MulticastSilenceBulletWhizzingSound, "MulticastSilenceBulletWhizzingSound" }, // 1858824847
		{ &Z_Construct_UFunction_AMultiplayerProjectile_MulticastSoftDestroyProjectile, "MulticastSoftDestroyProjectile" }, // 535896195
		{ &Z_Construct_UFunction_AMultiplayerProjectile_MulticastSpawnHitParticleEffect, "MulticastSpawnHitParticleEffect" }, // 960592328
		{ &Z_Construct_UFunction_AMultiplayerProjectile_OnProjectileMeshHit, "OnProjectileMeshHit" }, // 472965357
		{ &Z_Construct_UFunction_AMultiplayerProjectile_PrintDistanceTraved_BP, "PrintDistanceTraved_BP" }, // 2763618763
		{ &Z_Construct_UFunction_AMultiplayerProjectile_RegisterHit, "RegisterHit" }, // 2691083804
		{ &Z_Construct_UFunction_AMultiplayerProjectile_ServerSilenceBulletWhizzingSound, "ServerSilenceBulletWhizzingSound" }, // 987955359
		{ &Z_Construct_UFunction_AMultiplayerProjectile_ServerSoftDestroyProjectile, "ServerSoftDestroyProjectile" }, // 2369668679
		{ &Z_Construct_UFunction_AMultiplayerProjectile_ServerSpawnHitParticleEffect, "ServerSpawnHitParticleEffect" }, // 469683608
		{ &Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitControllerVibration, "SetBulletHitControllerVibration" }, // 2837390451
		{ &Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitControllerVibrationAttenuation, "SetBulletHitControllerVibrationAttenuation" }, // 1644736595
		{ &Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitControllerVibrationTag, "SetBulletHitControllerVibrationTag" }, // 329206861
		{ &Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitDecals, "SetBulletHitDecals" }, // 2300240847
		{ &Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitDecalSize, "SetBulletHitDecalSize" }, // 1477150552
		{ &Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitMode, "SetBulletHitMode" }, // 3765589787
		{ &Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitModeDelay, "SetBulletHitModeDelay" }, // 550232591
		{ &Z_Construct_UFunction_AMultiplayerProjectile_SetBulletHitSounds, "SetBulletHitSounds" }, // 2015984324
		{ &Z_Construct_UFunction_AMultiplayerProjectile_SetCanCrumbleDestructibleMeshes, "SetCanCrumbleDestructibleMeshes" }, // 1201490356
		{ &Z_Construct_UFunction_AMultiplayerProjectile_SetDamage, "SetDamage" }, // 1771243149
		{ &Z_Construct_UFunction_AMultiplayerProjectile_SetDamageFalloffMultiplierAtRange, "SetDamageFalloffMultiplierAtRange" }, // 3566230908
		{ &Z_Construct_UFunction_AMultiplayerProjectile_SetDamageType, "SetDamageType" }, // 433869
		{ &Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultBulletHitDecal, "SetDefaultBulletHitDecal" }, // 3194605920
		{ &Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultBulletHitSound, "SetDefaultBulletHitSound" }, // 629966171
		{ &Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultDamage, "SetDefaultDamage" }, // 3796770433
		{ &Z_Construct_UFunction_AMultiplayerProjectile_SetDefaultHitEffect, "SetDefaultHitEffect" }, // 3866410219
		{ &Z_Construct_UFunction_AMultiplayerProjectile_SetDestructionSphereSize, "SetDestructionSphereSize" }, // 2746501291
		{ &Z_Construct_UFunction_AMultiplayerProjectile_SetDestructionSphereToSpawn, "SetDestructionSphereToSpawn" }, // 3661904645
		{ &Z_Construct_UFunction_AMultiplayerProjectile_SetExplosionIgnoredActors, "SetExplosionIgnoredActors" }, // 2283309084
		{ &Z_Construct_UFunction_AMultiplayerProjectile_SetExplosionIgnoredClasses, "SetExplosionIgnoredClasses" }, // 2606272111
		{ &Z_Construct_UFunction_AMultiplayerProjectile_SetExplosionIgnoreOwner, "SetExplosionIgnoreOwner" }, // 69884112
		{ &Z_Construct_UFunction_AMultiplayerProjectile_SetExplosiveCollisionChannel, "SetExplosiveCollisionChannel" }, // 2482958374
		{ &Z_Construct_UFunction_AMultiplayerProjectile_SetExplosiveDamageRadius, "SetExplosiveDamageRadius" }, // 2665690754
		{ &Z_Construct_UFunction_AMultiplayerProjectile_SetExplosiveDoFullDamage, "SetExplosiveDoFullDamage" }, // 1894131268
		{ &Z_Construct_UFunction_AMultiplayerProjectile_SetFireLocation, "SetFireLocation" }, // 3561072481
		{ &Z_Construct_UFunction_AMultiplayerProjectile_SetHitDirection, "SetHitDirection" }, // 3923387571
		{ &Z_Construct_UFunction_AMultiplayerProjectile_SetHitEffects, "SetHitEffects" }, // 1070797275
		{ &Z_Construct_UFunction_AMultiplayerProjectile_SetHitEffectScale, "SetHitEffectScale" }, // 3796335462
		{ &Z_Construct_UFunction_AMultiplayerProjectile_SetHitMarkerActorSounds, "SetHitMarkerActorSounds" }, // 857840971
		{ &Z_Construct_UFunction_AMultiplayerProjectile_SetHitMarkerSurfaceSounds, "SetHitMarkerSurfaceSounds" }, // 3207594445
		{ &Z_Construct_UFunction_AMultiplayerProjectile_SetInterpolateDamageBetweenRanges, "SetInterpolateDamageBetweenRanges" }, // 3110002857
		{ &Z_Construct_UFunction_AMultiplayerProjectile_SetIsExplosive, "SetIsExplosive" }, // 1322404373
		{ &Z_Construct_UFunction_AMultiplayerProjectile_SetLaunchObjectStrength, "SetLaunchObjectStrength" }, // 670735942
		{ &Z_Construct_UFunction_AMultiplayerProjectile_SetLaunchObjectVelocityChange, "SetLaunchObjectVelocityChange" }, // 1770705067
		{ &Z_Construct_UFunction_AMultiplayerProjectile_SetLaunchPhysicsObjects, "SetLaunchPhysicsObjects" }, // 132687351
		{ &Z_Construct_UFunction_AMultiplayerProjectile_SetOwningPlayer, "SetOwningPlayer" }, // 244065982
		{ &Z_Construct_UFunction_AMultiplayerProjectile_SetPrintDistanceTraveled, "SetPrintDistanceTraveled" }, // 3990572843
		{ &Z_Construct_UFunction_AMultiplayerProjectile_SetTimeToDespawnProjectile, "SetTimeToDespawnProjectile" }, // 2565896433
		{ &Z_Construct_UFunction_AMultiplayerProjectile_SetUseActorClassesForHitMarkers, "SetUseActorClassesForHitMarkers" }, // 147834330
		{ &Z_Construct_UFunction_AMultiplayerProjectile_SetWhizzingSoundVolumeBasedOnSpeed, "SetWhizzingSoundVolumeBasedOnSpeed" }, // 1329108446
		{ &Z_Construct_UFunction_AMultiplayerProjectile_SilenceBulletWhizzingSound, "SilenceBulletWhizzingSound" }, // 408612587
		{ &Z_Construct_UFunction_AMultiplayerProjectile_SoftDestroyProjectile, "SoftDestroyProjectile" }, // 3313441226
		{ &Z_Construct_UFunction_AMultiplayerProjectile_SpawnHitParticleEffect, "SpawnHitParticleEffect" }, // 3940634715
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMultiplayerProjectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_FOnProjectileHit = { "FOnProjectileHit", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerProjectile, FOnProjectileHit), Z_Construct_UDelegateFunction_MultiplayerFPS_OnProjectileHit__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FOnProjectileHit_MetaData), NewProp_FOnProjectileHit_MetaData) }; // 737952504
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_ProjectileMesh = { "ProjectileMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerProjectile, ProjectileMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileMesh_MetaData), NewProp_ProjectileMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_BulletWhizzingSoundComponent = { "BulletWhizzingSoundComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerProjectile, BulletWhizzingSoundComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletWhizzingSoundComponent_MetaData), NewProp_BulletWhizzingSoundComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_ProjectileMovement = { "ProjectileMovement", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerProjectile, ProjectileMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileMovement_MetaData), NewProp_ProjectileMovement_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_RadialForceComponent = { "RadialForceComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerProjectile, RadialForceComponent), Z_Construct_UClass_URadialForceComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadialForceComponent_MetaData), NewProp_RadialForceComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_OwningPlayer = { "OwningPlayer", nullptr, (EPropertyFlags)0x0020080000000024, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerProjectile, OwningPlayer), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningPlayer_MetaData), NewProp_OwningPlayer_MetaData) };
void Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_LaunchPhysicsObjects_SetBit(void* Obj)
{
	((AMultiplayerProjectile*)Obj)->LaunchPhysicsObjects = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_LaunchPhysicsObjects = { "LaunchPhysicsObjects", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerProjectile), &Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_LaunchPhysicsObjects_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaunchPhysicsObjects_MetaData), NewProp_LaunchPhysicsObjects_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_LaunchObjectStrength = { "LaunchObjectStrength", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerProjectile, LaunchObjectStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaunchObjectStrength_MetaData), NewProp_LaunchObjectStrength_MetaData) };
void Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_LaunchObjectVelocityChange_SetBit(void* Obj)
{
	((AMultiplayerProjectile*)Obj)->LaunchObjectVelocityChange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_LaunchObjectVelocityChange = { "LaunchObjectVelocityChange", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerProjectile), &Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_LaunchObjectVelocityChange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaunchObjectVelocityChange_MetaData), NewProp_LaunchObjectVelocityChange_MetaData) };
void Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_IsExplosive_SetBit(void* Obj)
{
	((AMultiplayerProjectile*)Obj)->IsExplosive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_IsExplosive = { "IsExplosive", nullptr, (EPropertyFlags)0x0020080000000024, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerProjectile), &Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_IsExplosive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsExplosive_MetaData), NewProp_IsExplosive_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_HitEffectScale = { "HitEffectScale", nullptr, (EPropertyFlags)0x0020080000000024, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerProjectile, HitEffectScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitEffectScale_MetaData), NewProp_HitEffectScale_MetaData) };
void Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_ExplosionIgnoreOwner_SetBit(void* Obj)
{
	((AMultiplayerProjectile*)Obj)->ExplosionIgnoreOwner = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_ExplosionIgnoreOwner = { "ExplosionIgnoreOwner", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerProjectile), &Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_ExplosionIgnoreOwner_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplosionIgnoreOwner_MetaData), NewProp_ExplosionIgnoreOwner_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_BulletHitMode = { "BulletHitMode", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerProjectile, BulletHitMode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletHitMode_MetaData), NewProp_BulletHitMode_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_BulletHitModeDelay = { "BulletHitModeDelay", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerProjectile, BulletHitModeDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletHitModeDelay_MetaData), NewProp_BulletHitModeDelay_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_ExplosionIgnoredActors_Inner = { "ExplosionIgnoredActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_ExplosionIgnoredActors = { "ExplosionIgnoredActors", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerProjectile, ExplosionIgnoredActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplosionIgnoredActors_MetaData), NewProp_ExplosionIgnoredActors_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_ExplosionIgnoredClasses_Inner = { "ExplosionIgnoredClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_ExplosionIgnoredClasses = { "ExplosionIgnoredClasses", nullptr, (EPropertyFlags)0x0024080000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerProjectile, ExplosionIgnoredClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplosionIgnoredClasses_MetaData), NewProp_ExplosionIgnoredClasses_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_TimeToDespawnProjectile = { "TimeToDespawnProjectile", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerProjectile, TimeToDespawnProjectile), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeToDespawnProjectile_MetaData), NewProp_TimeToDespawnProjectile_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_DefaultDamage = { "DefaultDamage", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerProjectile, DefaultDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultDamage_MetaData), NewProp_DefaultDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_Damage_ValueProp = { "Damage", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_Damage_Key_KeyProp = { "Damage_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerProjectile, Damage), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_ExplosiveDamageRadius = { "ExplosiveDamageRadius", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerProjectile, ExplosiveDamageRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplosiveDamageRadius_MetaData), NewProp_ExplosiveDamageRadius_MetaData) };
void Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_ExplosiveDoFullDamage_SetBit(void* Obj)
{
	((AMultiplayerProjectile*)Obj)->ExplosiveDoFullDamage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_ExplosiveDoFullDamage = { "ExplosiveDoFullDamage", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerProjectile), &Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_ExplosiveDoFullDamage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplosiveDoFullDamage_MetaData), NewProp_ExplosiveDoFullDamage_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_ExplosiveCollisionChannel = { "ExplosiveCollisionChannel", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerProjectile, ExplosiveCollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplosiveCollisionChannel_MetaData), NewProp_ExplosiveCollisionChannel_MetaData) }; // 756624936
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_DamageFalloffMultiplierAtRange_ValueProp = { "DamageFalloffMultiplierAtRange", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_DamageFalloffMultiplierAtRange_Key_KeyProp = { "DamageFalloffMultiplierAtRange_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_DamageFalloffMultiplierAtRange = { "DamageFalloffMultiplierAtRange", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerProjectile, DamageFalloffMultiplierAtRange), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageFalloffMultiplierAtRange_MetaData), NewProp_DamageFalloffMultiplierAtRange_MetaData) };
void Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_InterpolateDamageBetweenRanges_SetBit(void* Obj)
{
	((AMultiplayerProjectile*)Obj)->InterpolateDamageBetweenRanges = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_InterpolateDamageBetweenRanges = { "InterpolateDamageBetweenRanges", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerProjectile), &Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_InterpolateDamageBetweenRanges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpolateDamageBetweenRanges_MetaData), NewProp_InterpolateDamageBetweenRanges_MetaData) };
void Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_PrintDistanceTraveled_SetBit(void* Obj)
{
	((AMultiplayerProjectile*)Obj)->PrintDistanceTraveled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_PrintDistanceTraveled = { "PrintDistanceTraveled", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerProjectile), &Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_PrintDistanceTraveled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrintDistanceTraveled_MetaData), NewProp_PrintDistanceTraveled_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_FireLocation = { "FireLocation", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerProjectile, FireLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireLocation_MetaData), NewProp_FireLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_HitDirection = { "HitDirection", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerProjectile, HitDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitDirection_MetaData), NewProp_HitDirection_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_DefaultHitEffect = { "DefaultHitEffect", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerProjectile, DefaultHitEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultHitEffect_MetaData), NewProp_DefaultHitEffect_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_HitEffects_ValueProp = { "HitEffects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_HitEffects_Key_KeyProp = { "HitEffects_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_HitEffects = { "HitEffects", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerProjectile, HitEffects), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitEffects_MetaData), NewProp_HitEffects_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_DefaultBulletHitSound = { "DefaultBulletHitSound", nullptr, (EPropertyFlags)0x0020080000000024, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerProjectile, DefaultBulletHitSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultBulletHitSound_MetaData), NewProp_DefaultBulletHitSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_BulletHitSounds_ValueProp = { "BulletHitSounds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_BulletHitSounds_Key_KeyProp = { "BulletHitSounds_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_BulletHitSounds = { "BulletHitSounds", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerProjectile, BulletHitSounds), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletHitSounds_MetaData), NewProp_BulletHitSounds_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_DefaultBulletHitDecal = { "DefaultBulletHitDecal", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerProjectile, DefaultBulletHitDecal), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultBulletHitDecal_MetaData), NewProp_DefaultBulletHitDecal_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_BulletHitDecals_ValueProp = { "BulletHitDecals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_BulletHitDecals_Key_KeyProp = { "BulletHitDecals_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_BulletHitDecals = { "BulletHitDecals", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerProjectile, BulletHitDecals), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletHitDecals_MetaData), NewProp_BulletHitDecals_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_BulletHitDecalSize = { "BulletHitDecalSize", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerProjectile, BulletHitDecalSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletHitDecalSize_MetaData), NewProp_BulletHitDecalSize_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerProjectile, DamageType), Z_Construct_UClass_UClass, Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
void Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_WhizzingSoundVolumeBasedOnSpeed_SetBit(void* Obj)
{
	((AMultiplayerProjectile*)Obj)->WhizzingSoundVolumeBasedOnSpeed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_WhizzingSoundVolumeBasedOnSpeed = { "WhizzingSoundVolumeBasedOnSpeed", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerProjectile), &Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_WhizzingSoundVolumeBasedOnSpeed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WhizzingSoundVolumeBasedOnSpeed_MetaData), NewProp_WhizzingSoundVolumeBasedOnSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_BulletWhizzingSoundVolume = { "BulletWhizzingSoundVolume", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerProjectile, BulletWhizzingSoundVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletWhizzingSoundVolume_MetaData), NewProp_BulletWhizzingSoundVolume_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_UseActorClassesForHitMarkers = { "UseActorClassesForHitMarkers", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerProjectile, UseActorClassesForHitMarkers), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseActorClassesForHitMarkers_MetaData), NewProp_UseActorClassesForHitMarkers_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_HitMarkerActorSounds_ValueProp = { "HitMarkerActorSounds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_HitMarkerActorSounds_Key_KeyProp = { "HitMarkerActorSounds_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_HitMarkerActorSounds = { "HitMarkerActorSounds", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerProjectile, HitMarkerActorSounds), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitMarkerActorSounds_MetaData), NewProp_HitMarkerActorSounds_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_HitMarkerSurfaceSounds_ValueProp = { "HitMarkerSurfaceSounds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_HitMarkerSurfaceSounds_Key_KeyProp = { "HitMarkerSurfaceSounds_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_HitMarkerSurfaceSounds = { "HitMarkerSurfaceSounds", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerProjectile, HitMarkerSurfaceSounds), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitMarkerSurfaceSounds_MetaData), NewProp_HitMarkerSurfaceSounds_MetaData) };
void Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_CanCrumbleDestructibleMeshes_SetBit(void* Obj)
{
	((AMultiplayerProjectile*)Obj)->CanCrumbleDestructibleMeshes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_CanCrumbleDestructibleMeshes = { "CanCrumbleDestructibleMeshes", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerProjectile), &Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_CanCrumbleDestructibleMeshes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanCrumbleDestructibleMeshes_MetaData), NewProp_CanCrumbleDestructibleMeshes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_DestructionSphereSize = { "DestructionSphereSize", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerProjectile, DestructionSphereSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestructionSphereSize_MetaData), NewProp_DestructionSphereSize_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_DestructionSphereToSpawn = { "DestructionSphereToSpawn", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerProjectile, DestructionSphereToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestructionSphereToSpawn_MetaData), NewProp_DestructionSphereToSpawn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_BulletHitControllerVibration = { "BulletHitControllerVibration", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerProjectile, BulletHitControllerVibration), Z_Construct_UClass_UForceFeedbackEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletHitControllerVibration_MetaData), NewProp_BulletHitControllerVibration_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_BulletHitControllerVibrationAttenuation = { "BulletHitControllerVibrationAttenuation", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerProjectile, BulletHitControllerVibrationAttenuation), Z_Construct_UClass_UForceFeedbackAttenuation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletHitControllerVibrationAttenuation_MetaData), NewProp_BulletHitControllerVibrationAttenuation_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_BulletHitControllerVibrationTag = { "BulletHitControllerVibrationTag", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerProjectile, BulletHitControllerVibrationTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletHitControllerVibrationTag_MetaData), NewProp_BulletHitControllerVibrationTag_MetaData) };
void Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_RegisteredHit_SetBit(void* Obj)
{
	((AMultiplayerProjectile*)Obj)->RegisteredHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_RegisteredHit = { "RegisteredHit", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerProjectile), &Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_RegisteredHit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegisteredHit_MetaData), NewProp_RegisteredHit_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_BulletHitModeTimerHandle = { "BulletHitModeTimerHandle", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerProjectile, BulletHitModeTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletHitModeTimerHandle_MetaData), NewProp_BulletHitModeTimerHandle_MetaData) }; // 756291145
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_BeginPlayDespawnTimerHandle = { "BeginPlayDespawnTimerHandle", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerProjectile, BeginPlayDespawnTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BeginPlayDespawnTimerHandle_MetaData), NewProp_BeginPlayDespawnTimerHandle_MetaData) }; // 756291145
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMultiplayerProjectile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_FOnProjectileHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_ProjectileMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_BulletWhizzingSoundComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_ProjectileMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_RadialForceComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_OwningPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_LaunchPhysicsObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_LaunchObjectStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_LaunchObjectVelocityChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_IsExplosive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_HitEffectScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_ExplosionIgnoreOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_BulletHitMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_BulletHitModeDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_ExplosionIgnoredActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_ExplosionIgnoredActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_ExplosionIgnoredClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_ExplosionIgnoredClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_TimeToDespawnProjectile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_DefaultDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_Damage_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_Damage_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_ExplosiveDamageRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_ExplosiveDoFullDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_ExplosiveCollisionChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_DamageFalloffMultiplierAtRange_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_DamageFalloffMultiplierAtRange_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_DamageFalloffMultiplierAtRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_InterpolateDamageBetweenRanges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_PrintDistanceTraveled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_FireLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_HitDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_DefaultHitEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_HitEffects_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_HitEffects_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_HitEffects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_DefaultBulletHitSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_BulletHitSounds_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_BulletHitSounds_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_BulletHitSounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_DefaultBulletHitDecal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_BulletHitDecals_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_BulletHitDecals_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_BulletHitDecals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_BulletHitDecalSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_WhizzingSoundVolumeBasedOnSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_BulletWhizzingSoundVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_UseActorClassesForHitMarkers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_HitMarkerActorSounds_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_HitMarkerActorSounds_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_HitMarkerActorSounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_HitMarkerSurfaceSounds_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_HitMarkerSurfaceSounds_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_HitMarkerSurfaceSounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_CanCrumbleDestructibleMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_DestructionSphereSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_DestructionSphereToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_BulletHitControllerVibration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_BulletHitControllerVibrationAttenuation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_BulletHitControllerVibrationTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_RegisteredHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_BulletHitModeTimerHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerProjectile_Statics::NewProp_BeginPlayDespawnTimerHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerProjectile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMultiplayerProjectile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerProjectile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMultiplayerProjectile_Statics::ClassParams = {
	&AMultiplayerProjectile::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMultiplayerProjectile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerProjectile_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_AMultiplayerProjectile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMultiplayerProjectile()
{
	if (!Z_Registration_Info_UClass_AMultiplayerProjectile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMultiplayerProjectile.OuterSingleton, Z_Construct_UClass_AMultiplayerProjectile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMultiplayerProjectile.OuterSingleton;
}
template<> MULTIPLAYERFPS_API UClass* StaticClass<AMultiplayerProjectile>()
{
	return AMultiplayerProjectile::StaticClass();
}
void AMultiplayerProjectile::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_OwningPlayer(TEXT("OwningPlayer"));
	static const FName Name_IsExplosive(TEXT("IsExplosive"));
	static const FName Name_HitEffectScale(TEXT("HitEffectScale"));
	static const FName Name_DefaultBulletHitSound(TEXT("DefaultBulletHitSound"));
	static const FName Name_RegisteredHit(TEXT("RegisteredHit"));
	const bool bIsValid = true
		&& Name_OwningPlayer == ClassReps[(int32)ENetFields_Private::OwningPlayer].Property->GetFName()
		&& Name_IsExplosive == ClassReps[(int32)ENetFields_Private::IsExplosive].Property->GetFName()
		&& Name_HitEffectScale == ClassReps[(int32)ENetFields_Private::HitEffectScale].Property->GetFName()
		&& Name_DefaultBulletHitSound == ClassReps[(int32)ENetFields_Private::DefaultBulletHitSound].Property->GetFName()
		&& Name_RegisteredHit == ClassReps[(int32)ENetFields_Private::RegisteredHit].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AMultiplayerProjectile"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMultiplayerProjectile);
AMultiplayerProjectile::~AMultiplayerProjectile() {}
// End Class AMultiplayerProjectile

// Begin Registration
struct Z_CompiledInDeferFile_FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerProjectile_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMultiplayerProjectile, AMultiplayerProjectile::StaticClass, TEXT("AMultiplayerProjectile"), &Z_Registration_Info_UClass_AMultiplayerProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMultiplayerProjectile), 1761578586U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerProjectile_h_198913427(TEXT("/Script/MultiplayerFPS"),
	Z_CompiledInDeferFile_FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerProjectile_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
