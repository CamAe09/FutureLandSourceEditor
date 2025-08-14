// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayerFPS/Public/MultiplayerGun.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
#include "Runtime/Engine/Classes/Engine/TimerHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerGun() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackAttenuation_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackEffect_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESpawnActorCollisionHandlingMethod();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
MULTIPLAYERFPS_API UClass* Z_Construct_UClass_AInteractableItem();
MULTIPLAYERFPS_API UClass* Z_Construct_UClass_AMultiplayerBulletCasing_NoRegister();
MULTIPLAYERFPS_API UClass* Z_Construct_UClass_AMultiplayerCharacter_NoRegister();
MULTIPLAYERFPS_API UClass* Z_Construct_UClass_AMultiplayerGun();
MULTIPLAYERFPS_API UClass* Z_Construct_UClass_AMultiplayerGun_NoRegister();
MULTIPLAYERFPS_API UClass* Z_Construct_UClass_AMultiplayerProjectile_NoRegister();
MULTIPLAYERFPS_API UEnum* Z_Construct_UEnum_MultiplayerFPS_EAimSwitchPerspectiveType();
MULTIPLAYERFPS_API UFunction* Z_Construct_UDelegateFunction_MultiplayerFPS_OnBulletHit__DelegateSignature();
MULTIPLAYERFPS_API UScriptStruct* Z_Construct_UScriptStruct_FGunHitEffectsReplication();
PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
UPackage* Z_Construct_UPackage__Script_MultiplayerFPS();
// End Cross Module References

// Begin Delegate FOnBulletHit
struct Z_Construct_UDelegateFunction_MultiplayerFPS_OnBulletHit__DelegateSignature_Statics
{
	struct _Script_MultiplayerFPS_eventOnBulletHit_Parms
	{
		AActor* ActorHit;
		UPhysicalMaterial* HitSurface;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorHit;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitSurface;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MultiplayerFPS_OnBulletHit__DelegateSignature_Statics::NewProp_ActorHit = { "ActorHit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MultiplayerFPS_eventOnBulletHit_Parms, ActorHit), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MultiplayerFPS_OnBulletHit__DelegateSignature_Statics::NewProp_HitSurface = { "HitSurface", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MultiplayerFPS_eventOnBulletHit_Parms, HitSurface), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MultiplayerFPS_OnBulletHit__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MultiplayerFPS_OnBulletHit__DelegateSignature_Statics::NewProp_ActorHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MultiplayerFPS_OnBulletHit__DelegateSignature_Statics::NewProp_HitSurface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayerFPS_OnBulletHit__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MultiplayerFPS_OnBulletHit__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MultiplayerFPS, nullptr, "OnBulletHit__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MultiplayerFPS_OnBulletHit__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayerFPS_OnBulletHit__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MultiplayerFPS_OnBulletHit__DelegateSignature_Statics::_Script_MultiplayerFPS_eventOnBulletHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayerFPS_OnBulletHit__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MultiplayerFPS_OnBulletHit__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MultiplayerFPS_OnBulletHit__DelegateSignature_Statics::_Script_MultiplayerFPS_eventOnBulletHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MultiplayerFPS_OnBulletHit__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MultiplayerFPS_OnBulletHit__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnBulletHit_DelegateWrapper(const FMulticastScriptDelegate& OnBulletHit, AActor* ActorHit, UPhysicalMaterial* HitSurface)
{
	struct _Script_MultiplayerFPS_eventOnBulletHit_Parms
	{
		AActor* ActorHit;
		UPhysicalMaterial* HitSurface;
	};
	_Script_MultiplayerFPS_eventOnBulletHit_Parms Parms;
	Parms.ActorHit=ActorHit;
	Parms.HitSurface=HitSurface;
	OnBulletHit.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnBulletHit

// Begin Enum EAimSwitchPerspectiveType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAimSwitchPerspectiveType;
static UEnum* EAimSwitchPerspectiveType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAimSwitchPerspectiveType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAimSwitchPerspectiveType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MultiplayerFPS_EAimSwitchPerspectiveType, (UObject*)Z_Construct_UPackage__Script_MultiplayerFPS(), TEXT("EAimSwitchPerspectiveType"));
	}
	return Z_Registration_Info_UEnum_EAimSwitchPerspectiveType.OuterSingleton;
}
template<> MULTIPLAYERFPS_API UEnum* StaticEnum<EAimSwitchPerspectiveType>()
{
	return EAimSwitchPerspectiveType_StaticEnum();
}
struct Z_Construct_UEnum_MultiplayerFPS_EAimSwitchPerspectiveType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "No.Name", "No" },
		{ "SwitchToFirstPerson.Name", "SwitchToFirstPerson" },
		{ "SwitchToOppositePerspective.Name", "SwitchToOppositePerspective" },
		{ "SwitchToThirdPerson.Name", "SwitchToThirdPerson" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "No", (int64)No },
		{ "SwitchToFirstPerson", (int64)SwitchToFirstPerson },
		{ "SwitchToThirdPerson", (int64)SwitchToThirdPerson },
		{ "SwitchToOppositePerspective", (int64)SwitchToOppositePerspective },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MultiplayerFPS_EAimSwitchPerspectiveType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MultiplayerFPS,
	nullptr,
	"EAimSwitchPerspectiveType",
	"EAimSwitchPerspectiveType",
	Z_Construct_UEnum_MultiplayerFPS_EAimSwitchPerspectiveType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MultiplayerFPS_EAimSwitchPerspectiveType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MultiplayerFPS_EAimSwitchPerspectiveType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MultiplayerFPS_EAimSwitchPerspectiveType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MultiplayerFPS_EAimSwitchPerspectiveType()
{
	if (!Z_Registration_Info_UEnum_EAimSwitchPerspectiveType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAimSwitchPerspectiveType.InnerSingleton, Z_Construct_UEnum_MultiplayerFPS_EAimSwitchPerspectiveType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAimSwitchPerspectiveType.InnerSingleton;
}
// End Enum EAimSwitchPerspectiveType

// Begin ScriptStruct FGunHitEffectsReplication
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GunHitEffectsReplication;
class UScriptStruct* FGunHitEffectsReplication::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GunHitEffectsReplication.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GunHitEffectsReplication.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGunHitEffectsReplication, (UObject*)Z_Construct_UPackage__Script_MultiplayerFPS(), TEXT("GunHitEffectsReplication"));
	}
	return Z_Registration_Info_UScriptStruct_GunHitEffectsReplication.OuterSingleton;
}
template<> MULTIPLAYERFPS_API UScriptStruct* StaticStruct<FGunHitEffectsReplication>()
{
	return FGunHitEffectsReplication::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGunHitEffectsReplication_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitEffect_MetaData[] = {
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[] = {
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FireLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitRotation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitEffect;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGunHitEffectsReplication>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGunHitEffectsReplication_Statics::NewProp_FireLocation = { "FireLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGunHitEffectsReplication, FireLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireLocation_MetaData), NewProp_FireLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGunHitEffectsReplication_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGunHitEffectsReplication, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitLocation_MetaData), NewProp_HitLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGunHitEffectsReplication_Statics::NewProp_HitRotation = { "HitRotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGunHitEffectsReplication, HitRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitRotation_MetaData), NewProp_HitRotation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGunHitEffectsReplication_Statics::NewProp_HitEffect = { "HitEffect", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGunHitEffectsReplication, HitEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitEffect_MetaData), NewProp_HitEffect_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGunHitEffectsReplication_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGunHitEffectsReplication, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitResult_MetaData), NewProp_HitResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGunHitEffectsReplication_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGunHitEffectsReplication_Statics::NewProp_FireLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGunHitEffectsReplication_Statics::NewProp_HitLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGunHitEffectsReplication_Statics::NewProp_HitRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGunHitEffectsReplication_Statics::NewProp_HitEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGunHitEffectsReplication_Statics::NewProp_HitResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGunHitEffectsReplication_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGunHitEffectsReplication_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerFPS,
	nullptr,
	&NewStructOps,
	"GunHitEffectsReplication",
	Z_Construct_UScriptStruct_FGunHitEffectsReplication_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGunHitEffectsReplication_Statics::PropPointers),
	sizeof(FGunHitEffectsReplication),
	alignof(FGunHitEffectsReplication),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGunHitEffectsReplication_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGunHitEffectsReplication_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGunHitEffectsReplication()
{
	if (!Z_Registration_Info_UScriptStruct_GunHitEffectsReplication.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GunHitEffectsReplication.InnerSingleton, Z_Construct_UScriptStruct_FGunHitEffectsReplication_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GunHitEffectsReplication.InnerSingleton;
}
// End ScriptStruct FGunHitEffectsReplication

// Begin Class AMultiplayerGun Function AddPredeterminedSpread
struct Z_Construct_UFunction_AMultiplayerGun_AddPredeterminedSpread_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_AddPredeterminedSpread_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "AddPredeterminedSpread", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_AddPredeterminedSpread_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_AddPredeterminedSpread_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerGun_AddPredeterminedSpread()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_AddPredeterminedSpread_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execAddPredeterminedSpread)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddPredeterminedSpread();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function AddPredeterminedSpread

// Begin Class AMultiplayerGun Function AddRecoil_BP
static const FName NAME_AMultiplayerGun_AddRecoil_BP = FName(TEXT("AddRecoil_BP"));
void AMultiplayerGun::AddRecoil_BP()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerGun_AddRecoil_BP);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerGun_AddRecoil_BP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_AddRecoil_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "AddRecoil_BP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_AddRecoil_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_AddRecoil_BP_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerGun_AddRecoil_BP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_AddRecoil_BP_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AMultiplayerGun Function AddRecoil_BP

// Begin Class AMultiplayerGun Function ApplyPerspective
struct Z_Construct_UFunction_AMultiplayerGun_ApplyPerspective_Statics
{
	struct MultiplayerGun_eventApplyPerspective_Parms
	{
		bool ThirdPerson;
		bool IsWeaponHolstered;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "CPP_Default_IsWeaponHolstered", "false" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "Do not call this function, this is used in the character SetUsingThirdPerson funtion" },
	};
#endif // WITH_METADATA
	static void NewProp_ThirdPerson_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ThirdPerson;
	static void NewProp_IsWeaponHolstered_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsWeaponHolstered;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerGun_ApplyPerspective_Statics::NewProp_ThirdPerson_SetBit(void* Obj)
{
	((MultiplayerGun_eventApplyPerspective_Parms*)Obj)->ThirdPerson = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerGun_ApplyPerspective_Statics::NewProp_ThirdPerson = { "ThirdPerson", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerGun_eventApplyPerspective_Parms), &Z_Construct_UFunction_AMultiplayerGun_ApplyPerspective_Statics::NewProp_ThirdPerson_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMultiplayerGun_ApplyPerspective_Statics::NewProp_IsWeaponHolstered_SetBit(void* Obj)
{
	((MultiplayerGun_eventApplyPerspective_Parms*)Obj)->IsWeaponHolstered = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerGun_ApplyPerspective_Statics::NewProp_IsWeaponHolstered = { "IsWeaponHolstered", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerGun_eventApplyPerspective_Parms), &Z_Construct_UFunction_AMultiplayerGun_ApplyPerspective_Statics::NewProp_IsWeaponHolstered_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_ApplyPerspective_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_ApplyPerspective_Statics::NewProp_ThirdPerson,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_ApplyPerspective_Statics::NewProp_IsWeaponHolstered,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_ApplyPerspective_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_ApplyPerspective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "ApplyPerspective", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_ApplyPerspective_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_ApplyPerspective_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_ApplyPerspective_Statics::MultiplayerGun_eventApplyPerspective_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_ApplyPerspective_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_ApplyPerspective_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_ApplyPerspective_Statics::MultiplayerGun_eventApplyPerspective_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_ApplyPerspective()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_ApplyPerspective_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execApplyPerspective)
{
	P_GET_UBOOL(Z_Param_ThirdPerson);
	P_GET_UBOOL(Z_Param_IsWeaponHolstered);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyPerspective(Z_Param_ThirdPerson,Z_Param_IsWeaponHolstered);
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function ApplyPerspective

// Begin Class AMultiplayerGun Function ApplyPerspective_BP
struct MultiplayerGun_eventApplyPerspective_BP_Parms
{
	bool ThirdPerson;
};
static const FName NAME_AMultiplayerGun_ApplyPerspective_BP = FName(TEXT("ApplyPerspective_BP"));
void AMultiplayerGun::ApplyPerspective_BP(bool ThirdPerson)
{
	MultiplayerGun_eventApplyPerspective_BP_Parms Parms;
	Parms.ThirdPerson=ThirdPerson ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerGun_ApplyPerspective_BP);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerGun_ApplyPerspective_BP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ThirdPerson_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ThirdPerson;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerGun_ApplyPerspective_BP_Statics::NewProp_ThirdPerson_SetBit(void* Obj)
{
	((MultiplayerGun_eventApplyPerspective_BP_Parms*)Obj)->ThirdPerson = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerGun_ApplyPerspective_BP_Statics::NewProp_ThirdPerson = { "ThirdPerson", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerGun_eventApplyPerspective_BP_Parms), &Z_Construct_UFunction_AMultiplayerGun_ApplyPerspective_BP_Statics::NewProp_ThirdPerson_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_ApplyPerspective_BP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_ApplyPerspective_BP_Statics::NewProp_ThirdPerson,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_ApplyPerspective_BP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_ApplyPerspective_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "ApplyPerspective_BP", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_ApplyPerspective_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_ApplyPerspective_BP_Statics::PropPointers), sizeof(MultiplayerGun_eventApplyPerspective_BP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_ApplyPerspective_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_ApplyPerspective_BP_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerGun_eventApplyPerspective_BP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_ApplyPerspective_BP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_ApplyPerspective_BP_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AMultiplayerGun Function ApplyPerspective_BP

// Begin Class AMultiplayerGun Function CallBulletHitDelegate
struct Z_Construct_UFunction_AMultiplayerGun_CallBulletHitDelegate_Statics
{
	struct MultiplayerGun_eventCallBulletHitDelegate_Parms
	{
		AActor* HitActor;
		UPhysicalMaterial* HitSurface;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitSurface;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerGun_CallBulletHitDelegate_Statics::NewProp_HitActor = { "HitActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventCallBulletHitDelegate_Parms, HitActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerGun_CallBulletHitDelegate_Statics::NewProp_HitSurface = { "HitSurface", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventCallBulletHitDelegate_Parms, HitSurface), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_CallBulletHitDelegate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_CallBulletHitDelegate_Statics::NewProp_HitActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_CallBulletHitDelegate_Statics::NewProp_HitSurface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_CallBulletHitDelegate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_CallBulletHitDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "CallBulletHitDelegate", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_CallBulletHitDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_CallBulletHitDelegate_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_CallBulletHitDelegate_Statics::MultiplayerGun_eventCallBulletHitDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_CallBulletHitDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_CallBulletHitDelegate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_CallBulletHitDelegate_Statics::MultiplayerGun_eventCallBulletHitDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_CallBulletHitDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_CallBulletHitDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execCallBulletHitDelegate)
{
	P_GET_OBJECT(AActor,Z_Param_HitActor);
	P_GET_OBJECT(UPhysicalMaterial,Z_Param_HitSurface);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CallBulletHitDelegate(Z_Param_HitActor,Z_Param_HitSurface);
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function CallBulletHitDelegate

// Begin Class AMultiplayerGun Function CancelChargeUp
struct Z_Construct_UFunction_AMultiplayerGun_CancelChargeUp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_CancelChargeUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "CancelChargeUp", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_CancelChargeUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_CancelChargeUp_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerGun_CancelChargeUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_CancelChargeUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execCancelChargeUp)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CancelChargeUp();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function CancelChargeUp

// Begin Class AMultiplayerGun Function CancelChargeUp1
struct Z_Construct_UFunction_AMultiplayerGun_CancelChargeUp1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_CancelChargeUp1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "CancelChargeUp1", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_CancelChargeUp1_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_CancelChargeUp1_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerGun_CancelChargeUp1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_CancelChargeUp1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execCancelChargeUp1)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CancelChargeUp1();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function CancelChargeUp1

// Begin Class AMultiplayerGun Function CancelChargeUp_BP
static const FName NAME_AMultiplayerGun_CancelChargeUp_BP = FName(TEXT("CancelChargeUp_BP"));
void AMultiplayerGun::CancelChargeUp_BP()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerGun_CancelChargeUp_BP);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerGun_CancelChargeUp_BP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_CancelChargeUp_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "CancelChargeUp_BP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_CancelChargeUp_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_CancelChargeUp_BP_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerGun_CancelChargeUp_BP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_CancelChargeUp_BP_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AMultiplayerGun Function CancelChargeUp_BP

// Begin Class AMultiplayerGun Function CancelSmokeEffect
struct Z_Construct_UFunction_AMultiplayerGun_CancelSmokeEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_CancelSmokeEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "CancelSmokeEffect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_CancelSmokeEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_CancelSmokeEffect_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerGun_CancelSmokeEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_CancelSmokeEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execCancelSmokeEffect)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CancelSmokeEffect();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function CancelSmokeEffect

// Begin Class AMultiplayerGun Function ChargeUp
struct Z_Construct_UFunction_AMultiplayerGun_ChargeUp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_ChargeUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "ChargeUp", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_ChargeUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_ChargeUp_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerGun_ChargeUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_ChargeUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execChargeUp)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChargeUp();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function ChargeUp

// Begin Class AMultiplayerGun Function ChargeUp1
struct Z_Construct_UFunction_AMultiplayerGun_ChargeUp1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_ChargeUp1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "ChargeUp1", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_ChargeUp1_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_ChargeUp1_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerGun_ChargeUp1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_ChargeUp1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execChargeUp1)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChargeUp1();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function ChargeUp1

// Begin Class AMultiplayerGun Function ChargeUp_BP
static const FName NAME_AMultiplayerGun_ChargeUp_BP = FName(TEXT("ChargeUp_BP"));
void AMultiplayerGun::ChargeUp_BP()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerGun_ChargeUp_BP);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerGun_ChargeUp_BP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_ChargeUp_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "ChargeUp_BP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_ChargeUp_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_ChargeUp_BP_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerGun_ChargeUp_BP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_ChargeUp_BP_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AMultiplayerGun Function ChargeUp_BP

// Begin Class AMultiplayerGun Function CheckBulletCasingLimit
static const FName NAME_AMultiplayerGun_CheckBulletCasingLimit = FName(TEXT("CheckBulletCasingLimit"));
void AMultiplayerGun::CheckBulletCasingLimit()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerGun_CheckBulletCasingLimit);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerGun_CheckBulletCasingLimit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_CheckBulletCasingLimit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "CheckBulletCasingLimit", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_CheckBulletCasingLimit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_CheckBulletCasingLimit_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerGun_CheckBulletCasingLimit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_CheckBulletCasingLimit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execCheckBulletCasingLimit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckBulletCasingLimit_Implementation();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function CheckBulletCasingLimit

// Begin Class AMultiplayerGun Function CheckForOwner
struct Z_Construct_UFunction_AMultiplayerGun_CheckForOwner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This will make sure the owner is valid so if for example a player disconnects their gun won't just be floating where they last were" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_CheckForOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "CheckForOwner", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_CheckForOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_CheckForOwner_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerGun_CheckForOwner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_CheckForOwner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execCheckForOwner)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckForOwner();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function CheckForOwner

// Begin Class AMultiplayerGun Function ClientFire
static const FName NAME_AMultiplayerGun_ClientFire = FName(TEXT("ClientFire"));
void AMultiplayerGun::ClientFire()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerGun_ClientFire);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerGun_ClientFire_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_ClientFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "ClientFire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_ClientFire_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_ClientFire_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerGun_ClientFire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_ClientFire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execClientFire)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientFire_Implementation();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function ClientFire

// Begin Class AMultiplayerGun Function ClientFire_BP
static const FName NAME_AMultiplayerGun_ClientFire_BP = FName(TEXT("ClientFire_BP"));
void AMultiplayerGun::ClientFire_BP()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerGun_ClientFire_BP);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerGun_ClientFire_BP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_ClientFire_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "ClientFire_BP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_ClientFire_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_ClientFire_BP_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerGun_ClientFire_BP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_ClientFire_BP_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AMultiplayerGun Function ClientFire_BP

// Begin Class AMultiplayerGun Function ContinuousFire
struct Z_Construct_UFunction_AMultiplayerGun_ContinuousFire_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_ContinuousFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "ContinuousFire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_ContinuousFire_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_ContinuousFire_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerGun_ContinuousFire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_ContinuousFire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execContinuousFire)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ContinuousFire();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function ContinuousFire

// Begin Class AMultiplayerGun Function ContinuousFire_BP
static const FName NAME_AMultiplayerGun_ContinuousFire_BP = FName(TEXT("ContinuousFire_BP"));
void AMultiplayerGun::ContinuousFire_BP()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerGun_ContinuousFire_BP);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerGun_ContinuousFire_BP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_ContinuousFire_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "ContinuousFire_BP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_ContinuousFire_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_ContinuousFire_BP_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerGun_ContinuousFire_BP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_ContinuousFire_BP_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AMultiplayerGun Function ContinuousFire_BP

// Begin Class AMultiplayerGun Function CoolDown_BP
static const FName NAME_AMultiplayerGun_CoolDown_BP = FName(TEXT("CoolDown_BP"));
void AMultiplayerGun::CoolDown_BP()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerGun_CoolDown_BP);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerGun_CoolDown_BP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_CoolDown_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "CoolDown_BP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_CoolDown_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_CoolDown_BP_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerGun_CoolDown_BP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_CoolDown_BP_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AMultiplayerGun Function CoolDown_BP

// Begin Class AMultiplayerGun Function DestroySelf
struct Z_Construct_UFunction_AMultiplayerGun_DestroySelf_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_DestroySelf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "DestroySelf", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_DestroySelf_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_DestroySelf_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerGun_DestroySelf()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_DestroySelf_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execDestroySelf)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DestroySelf();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function DestroySelf

// Begin Class AMultiplayerGun Function DestroySmokeEffect_BP
static const FName NAME_AMultiplayerGun_DestroySmokeEffect_BP = FName(TEXT("DestroySmokeEffect_BP"));
void AMultiplayerGun::DestroySmokeEffect_BP()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerGun_DestroySmokeEffect_BP);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerGun_DestroySmokeEffect_BP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_DestroySmokeEffect_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "DestroySmokeEffect_BP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_DestroySmokeEffect_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_DestroySmokeEffect_BP_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerGun_DestroySmokeEffect_BP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_DestroySmokeEffect_BP_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AMultiplayerGun Function DestroySmokeEffect_BP

// Begin Class AMultiplayerGun Function ExecuteHitFunction
struct MultiplayerGun_eventExecuteHitFunction_Parms
{
	AActor* ParentPlayer;
	AActor* HitActor;
};
static const FName NAME_AMultiplayerGun_ExecuteHitFunction = FName(TEXT("ExecuteHitFunction"));
void AMultiplayerGun::ExecuteHitFunction(AActor* ParentPlayer, AActor* HitActor)
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerGun_ExecuteHitFunction);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		MultiplayerGun_eventExecuteHitFunction_Parms Parms;
		Parms.ParentPlayer=ParentPlayer;
		Parms.HitActor=HitActor;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		ExecuteHitFunction_Implementation(ParentPlayer, HitActor);
	}
}
struct Z_Construct_UFunction_AMultiplayerGun_ExecuteHitFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "CPP_Default_HitActor", "None" },
		{ "CPP_Default_ParentPlayer", "None" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentPlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerGun_ExecuteHitFunction_Statics::NewProp_ParentPlayer = { "ParentPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventExecuteHitFunction_Parms, ParentPlayer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerGun_ExecuteHitFunction_Statics::NewProp_HitActor = { "HitActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventExecuteHitFunction_Parms, HitActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_ExecuteHitFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_ExecuteHitFunction_Statics::NewProp_ParentPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_ExecuteHitFunction_Statics::NewProp_HitActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_ExecuteHitFunction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_ExecuteHitFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "ExecuteHitFunction", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_ExecuteHitFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_ExecuteHitFunction_Statics::PropPointers), sizeof(MultiplayerGun_eventExecuteHitFunction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_ExecuteHitFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_ExecuteHitFunction_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerGun_eventExecuteHitFunction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_ExecuteHitFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_ExecuteHitFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execExecuteHitFunction)
{
	P_GET_OBJECT(AActor,Z_Param_ParentPlayer);
	P_GET_OBJECT(AActor,Z_Param_HitActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExecuteHitFunction_Implementation(Z_Param_ParentPlayer,Z_Param_HitActor);
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function ExecuteHitFunction

// Begin Class AMultiplayerGun Function Fire
struct Z_Construct_UFunction_AMultiplayerGun_Fire_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "Fire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_Fire_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_Fire_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerGun_Fire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_Fire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execFire)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Fire();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function Fire

// Begin Class AMultiplayerGun Function Fire_BP
static const FName NAME_AMultiplayerGun_Fire_BP = FName(TEXT("Fire_BP"));
void AMultiplayerGun::Fire_BP()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerGun_Fire_BP);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerGun_Fire_BP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_Fire_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "Fire_BP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_Fire_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_Fire_BP_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerGun_Fire_BP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_Fire_BP_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AMultiplayerGun Function Fire_BP

// Begin Class AMultiplayerGun Function FireInput
struct Z_Construct_UFunction_AMultiplayerGun_FireInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_FireInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "FireInput", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_FireInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_FireInput_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerGun_FireInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_FireInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execFireInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FireInput();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function FireInput

// Begin Class AMultiplayerGun Function GetADSArmsLocation
struct Z_Construct_UFunction_AMultiplayerGun_GetADSArmsLocation_Statics
{
	struct MultiplayerGun_eventGetADSArmsLocation_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerGun_GetADSArmsLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventGetADSArmsLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_GetADSArmsLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_GetADSArmsLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetADSArmsLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_GetADSArmsLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "GetADSArmsLocation", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_GetADSArmsLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetADSArmsLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_GetADSArmsLocation_Statics::MultiplayerGun_eventGetADSArmsLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetADSArmsLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_GetADSArmsLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_GetADSArmsLocation_Statics::MultiplayerGun_eventGetADSArmsLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_GetADSArmsLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_GetADSArmsLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execGetADSArmsLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetADSArmsLocation();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function GetADSArmsLocation

// Begin Class AMultiplayerGun Function GetADSArmsRotation
struct Z_Construct_UFunction_AMultiplayerGun_GetADSArmsRotation_Statics
{
	struct MultiplayerGun_eventGetADSArmsRotation_Parms
	{
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerGun_GetADSArmsRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventGetADSArmsRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_GetADSArmsRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_GetADSArmsRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetADSArmsRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_GetADSArmsRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "GetADSArmsRotation", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_GetADSArmsRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetADSArmsRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_GetADSArmsRotation_Statics::MultiplayerGun_eventGetADSArmsRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetADSArmsRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_GetADSArmsRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_GetADSArmsRotation_Statics::MultiplayerGun_eventGetADSArmsRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_GetADSArmsRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_GetADSArmsRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execGetADSArmsRotation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=P_THIS->GetADSArmsRotation();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function GetADSArmsRotation

// Begin Class AMultiplayerGun Function GetADSFOV
struct Z_Construct_UFunction_AMultiplayerGun_GetADSFOV_Statics
{
	struct MultiplayerGun_eventGetADSFOV_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerGun_GetADSFOV_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventGetADSFOV_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_GetADSFOV_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_GetADSFOV_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetADSFOV_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_GetADSFOV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "GetADSFOV", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_GetADSFOV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetADSFOV_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_GetADSFOV_Statics::MultiplayerGun_eventGetADSFOV_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetADSFOV_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_GetADSFOV_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_GetADSFOV_Statics::MultiplayerGun_eventGetADSFOV_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_GetADSFOV()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_GetADSFOV_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execGetADSFOV)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetADSFOV();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function GetADSFOV

// Begin Class AMultiplayerGun Function GetAmmoInMagazine
struct Z_Construct_UFunction_AMultiplayerGun_GetAmmoInMagazine_Statics
{
	struct MultiplayerGun_eventGetAmmoInMagazine_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerGun_GetAmmoInMagazine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventGetAmmoInMagazine_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_GetAmmoInMagazine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_GetAmmoInMagazine_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetAmmoInMagazine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_GetAmmoInMagazine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "GetAmmoInMagazine", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_GetAmmoInMagazine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetAmmoInMagazine_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_GetAmmoInMagazine_Statics::MultiplayerGun_eventGetAmmoInMagazine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetAmmoInMagazine_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_GetAmmoInMagazine_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_GetAmmoInMagazine_Statics::MultiplayerGun_eventGetAmmoInMagazine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_GetAmmoInMagazine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_GetAmmoInMagazine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execGetAmmoInMagazine)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetAmmoInMagazine();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function GetAmmoInMagazine

// Begin Class AMultiplayerGun Function GetBulletCasingSceneToUse
struct Z_Construct_UFunction_AMultiplayerGun_GetBulletCasingSceneToUse_Statics
{
	struct MultiplayerGun_eventGetBulletCasingSceneToUse_Parms
	{
		USceneComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerGun_GetBulletCasingSceneToUse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventGetBulletCasingSceneToUse_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_GetBulletCasingSceneToUse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_GetBulletCasingSceneToUse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetBulletCasingSceneToUse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_GetBulletCasingSceneToUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "GetBulletCasingSceneToUse", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_GetBulletCasingSceneToUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetBulletCasingSceneToUse_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_GetBulletCasingSceneToUse_Statics::MultiplayerGun_eventGetBulletCasingSceneToUse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetBulletCasingSceneToUse_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_GetBulletCasingSceneToUse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_GetBulletCasingSceneToUse_Statics::MultiplayerGun_eventGetBulletCasingSceneToUse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_GetBulletCasingSceneToUse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_GetBulletCasingSceneToUse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execGetBulletCasingSceneToUse)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USceneComponent**)Z_Param__Result=P_THIS->GetBulletCasingSceneToUse();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function GetBulletCasingSceneToUse

// Begin Class AMultiplayerGun Function GetCaliberToUse
struct Z_Construct_UFunction_AMultiplayerGun_GetCaliberToUse_Statics
{
	struct MultiplayerGun_eventGetCaliberToUse_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerGun_GetCaliberToUse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventGetCaliberToUse_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_GetCaliberToUse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_GetCaliberToUse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetCaliberToUse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_GetCaliberToUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "GetCaliberToUse", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_GetCaliberToUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetCaliberToUse_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_GetCaliberToUse_Statics::MultiplayerGun_eventGetCaliberToUse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetCaliberToUse_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_GetCaliberToUse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_GetCaliberToUse_Statics::MultiplayerGun_eventGetCaliberToUse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_GetCaliberToUse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_GetCaliberToUse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execGetCaliberToUse)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCaliberToUse();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function GetCaliberToUse

// Begin Class AMultiplayerGun Function GetCanShoot
struct Z_Construct_UFunction_AMultiplayerGun_GetCanShoot_Statics
{
	struct MultiplayerGun_eventGetCanShoot_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerGun_GetCanShoot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MultiplayerGun_eventGetCanShoot_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerGun_GetCanShoot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerGun_eventGetCanShoot_Parms), &Z_Construct_UFunction_AMultiplayerGun_GetCanShoot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_GetCanShoot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_GetCanShoot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetCanShoot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_GetCanShoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "GetCanShoot", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_GetCanShoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetCanShoot_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_GetCanShoot_Statics::MultiplayerGun_eventGetCanShoot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetCanShoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_GetCanShoot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_GetCanShoot_Statics::MultiplayerGun_eventGetCanShoot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_GetCanShoot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_GetCanShoot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execGetCanShoot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCanShoot();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function GetCanShoot

// Begin Class AMultiplayerGun Function GetChargeUpArmsAnimation
struct Z_Construct_UFunction_AMultiplayerGun_GetChargeUpArmsAnimation_Statics
{
	struct MultiplayerGun_eventGetChargeUpArmsAnimation_Parms
	{
		UAnimationAsset* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerGun_GetChargeUpArmsAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventGetChargeUpArmsAnimation_Parms, ReturnValue), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_GetChargeUpArmsAnimation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_GetChargeUpArmsAnimation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetChargeUpArmsAnimation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_GetChargeUpArmsAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "GetChargeUpArmsAnimation", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_GetChargeUpArmsAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetChargeUpArmsAnimation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_GetChargeUpArmsAnimation_Statics::MultiplayerGun_eventGetChargeUpArmsAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetChargeUpArmsAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_GetChargeUpArmsAnimation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_GetChargeUpArmsAnimation_Statics::MultiplayerGun_eventGetChargeUpArmsAnimation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_GetChargeUpArmsAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_GetChargeUpArmsAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execGetChargeUpArmsAnimation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAnimationAsset**)Z_Param__Result=P_THIS->GetChargeUpArmsAnimation();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function GetChargeUpArmsAnimation

// Begin Class AMultiplayerGun Function GetChargeUpArmsAnimationMontage
struct Z_Construct_UFunction_AMultiplayerGun_GetChargeUpArmsAnimationMontage_Statics
{
	struct MultiplayerGun_eventGetChargeUpArmsAnimationMontage_Parms
	{
		UAnimMontage* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerGun_GetChargeUpArmsAnimationMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventGetChargeUpArmsAnimationMontage_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_GetChargeUpArmsAnimationMontage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_GetChargeUpArmsAnimationMontage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetChargeUpArmsAnimationMontage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_GetChargeUpArmsAnimationMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "GetChargeUpArmsAnimationMontage", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_GetChargeUpArmsAnimationMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetChargeUpArmsAnimationMontage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_GetChargeUpArmsAnimationMontage_Statics::MultiplayerGun_eventGetChargeUpArmsAnimationMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetChargeUpArmsAnimationMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_GetChargeUpArmsAnimationMontage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_GetChargeUpArmsAnimationMontage_Statics::MultiplayerGun_eventGetChargeUpArmsAnimationMontage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_GetChargeUpArmsAnimationMontage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_GetChargeUpArmsAnimationMontage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execGetChargeUpArmsAnimationMontage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAnimMontage**)Z_Param__Result=P_THIS->GetChargeUpArmsAnimationMontage();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function GetChargeUpArmsAnimationMontage

// Begin Class AMultiplayerGun Function GetChargeUpTime
struct Z_Construct_UFunction_AMultiplayerGun_GetChargeUpTime_Statics
{
	struct MultiplayerGun_eventGetChargeUpTime_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerGun_GetChargeUpTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventGetChargeUpTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_GetChargeUpTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_GetChargeUpTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetChargeUpTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_GetChargeUpTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "GetChargeUpTime", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_GetChargeUpTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetChargeUpTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_GetChargeUpTime_Statics::MultiplayerGun_eventGetChargeUpTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetChargeUpTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_GetChargeUpTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_GetChargeUpTime_Statics::MultiplayerGun_eventGetChargeUpTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_GetChargeUpTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_GetChargeUpTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execGetChargeUpTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetChargeUpTime();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function GetChargeUpTime

// Begin Class AMultiplayerGun Function GetChargeUpTimeRemaining
struct Z_Construct_UFunction_AMultiplayerGun_GetChargeUpTimeRemaining_Statics
{
	struct MultiplayerGun_eventGetChargeUpTimeRemaining_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerGun_GetChargeUpTimeRemaining_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventGetChargeUpTimeRemaining_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_GetChargeUpTimeRemaining_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_GetChargeUpTimeRemaining_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetChargeUpTimeRemaining_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_GetChargeUpTimeRemaining_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "GetChargeUpTimeRemaining", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_GetChargeUpTimeRemaining_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetChargeUpTimeRemaining_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_GetChargeUpTimeRemaining_Statics::MultiplayerGun_eventGetChargeUpTimeRemaining_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetChargeUpTimeRemaining_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_GetChargeUpTimeRemaining_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_GetChargeUpTimeRemaining_Statics::MultiplayerGun_eventGetChargeUpTimeRemaining_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_GetChargeUpTimeRemaining()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_GetChargeUpTimeRemaining_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execGetChargeUpTimeRemaining)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetChargeUpTimeRemaining();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function GetChargeUpTimeRemaining

// Begin Class AMultiplayerGun Function GetCurrentChargeUpProgress
struct Z_Construct_UFunction_AMultiplayerGun_GetCurrentChargeUpProgress_Statics
{
	struct MultiplayerGun_eventGetCurrentChargeUpProgress_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerGun_GetCurrentChargeUpProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventGetCurrentChargeUpProgress_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_GetCurrentChargeUpProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_GetCurrentChargeUpProgress_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetCurrentChargeUpProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_GetCurrentChargeUpProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "GetCurrentChargeUpProgress", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_GetCurrentChargeUpProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetCurrentChargeUpProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_GetCurrentChargeUpProgress_Statics::MultiplayerGun_eventGetCurrentChargeUpProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetCurrentChargeUpProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_GetCurrentChargeUpProgress_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_GetCurrentChargeUpProgress_Statics::MultiplayerGun_eventGetCurrentChargeUpProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_GetCurrentChargeUpProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_GetCurrentChargeUpProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execGetCurrentChargeUpProgress)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurrentChargeUpProgress();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function GetCurrentChargeUpProgress

// Begin Class AMultiplayerGun Function GetCurrentHeat
struct Z_Construct_UFunction_AMultiplayerGun_GetCurrentHeat_Statics
{
	struct MultiplayerGun_eventGetCurrentHeat_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerGun_GetCurrentHeat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventGetCurrentHeat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_GetCurrentHeat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_GetCurrentHeat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetCurrentHeat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_GetCurrentHeat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "GetCurrentHeat", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_GetCurrentHeat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetCurrentHeat_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_GetCurrentHeat_Statics::MultiplayerGun_eventGetCurrentHeat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetCurrentHeat_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_GetCurrentHeat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_GetCurrentHeat_Statics::MultiplayerGun_eventGetCurrentHeat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_GetCurrentHeat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_GetCurrentHeat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execGetCurrentHeat)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurrentHeat();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function GetCurrentHeat

// Begin Class AMultiplayerGun Function GetDivideAimingFOV
struct Z_Construct_UFunction_AMultiplayerGun_GetDivideAimingFOV_Statics
{
	struct MultiplayerGun_eventGetDivideAimingFOV_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerGun_GetDivideAimingFOV_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MultiplayerGun_eventGetDivideAimingFOV_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerGun_GetDivideAimingFOV_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerGun_eventGetDivideAimingFOV_Parms), &Z_Construct_UFunction_AMultiplayerGun_GetDivideAimingFOV_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_GetDivideAimingFOV_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_GetDivideAimingFOV_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetDivideAimingFOV_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_GetDivideAimingFOV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "GetDivideAimingFOV", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_GetDivideAimingFOV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetDivideAimingFOV_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_GetDivideAimingFOV_Statics::MultiplayerGun_eventGetDivideAimingFOV_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetDivideAimingFOV_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_GetDivideAimingFOV_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_GetDivideAimingFOV_Statics::MultiplayerGun_eventGetDivideAimingFOV_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_GetDivideAimingFOV()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_GetDivideAimingFOV_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execGetDivideAimingFOV)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetDivideAimingFOV();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function GetDivideAimingFOV

// Begin Class AMultiplayerGun Function GetDoesOverheat
struct Z_Construct_UFunction_AMultiplayerGun_GetDoesOverheat_Statics
{
	struct MultiplayerGun_eventGetDoesOverheat_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerGun_GetDoesOverheat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MultiplayerGun_eventGetDoesOverheat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerGun_GetDoesOverheat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerGun_eventGetDoesOverheat_Parms), &Z_Construct_UFunction_AMultiplayerGun_GetDoesOverheat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_GetDoesOverheat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_GetDoesOverheat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetDoesOverheat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_GetDoesOverheat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "GetDoesOverheat", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_GetDoesOverheat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetDoesOverheat_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_GetDoesOverheat_Statics::MultiplayerGun_eventGetDoesOverheat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetDoesOverheat_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_GetDoesOverheat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_GetDoesOverheat_Statics::MultiplayerGun_eventGetDoesOverheat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_GetDoesOverheat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_GetDoesOverheat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execGetDoesOverheat)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetDoesOverheat();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function GetDoesOverheat

// Begin Class AMultiplayerGun Function GetFireMode
struct Z_Construct_UFunction_AMultiplayerGun_GetFireMode_Statics
{
	struct MultiplayerGun_eventGetFireMode_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerGun_GetFireMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventGetFireMode_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_GetFireMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_GetFireMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetFireMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_GetFireMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "GetFireMode", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_GetFireMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetFireMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_GetFireMode_Statics::MultiplayerGun_eventGetFireMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetFireMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_GetFireMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_GetFireMode_Statics::MultiplayerGun_eventGetFireMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_GetFireMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_GetFireMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execGetFireMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetFireMode();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function GetFireMode

// Begin Class AMultiplayerGun Function GetFireSceneToUse
struct Z_Construct_UFunction_AMultiplayerGun_GetFireSceneToUse_Statics
{
	struct MultiplayerGun_eventGetFireSceneToUse_Parms
	{
		USceneComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerGun_GetFireSceneToUse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventGetFireSceneToUse_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_GetFireSceneToUse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_GetFireSceneToUse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetFireSceneToUse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_GetFireSceneToUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "GetFireSceneToUse", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_GetFireSceneToUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetFireSceneToUse_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_GetFireSceneToUse_Statics::MultiplayerGun_eventGetFireSceneToUse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetFireSceneToUse_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_GetFireSceneToUse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_GetFireSceneToUse_Statics::MultiplayerGun_eventGetFireSceneToUse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_GetFireSceneToUse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_GetFireSceneToUse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execGetFireSceneToUse)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USceneComponent**)Z_Param__Result=P_THIS->GetFireSceneToUse();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function GetFireSceneToUse

// Begin Class AMultiplayerGun Function GetGunMesh
struct Z_Construct_UFunction_AMultiplayerGun_GetGunMesh_Statics
{
	struct MultiplayerGun_eventGetGunMesh_Parms
	{
		UPrimitiveComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerGun_GetGunMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventGetGunMesh_Parms, ReturnValue), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_GetGunMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_GetGunMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetGunMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_GetGunMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "GetGunMesh", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_GetGunMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetGunMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_GetGunMesh_Statics::MultiplayerGun_eventGetGunMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetGunMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_GetGunMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_GetGunMesh_Statics::MultiplayerGun_eventGetGunMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_GetGunMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_GetGunMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execGetGunMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPrimitiveComponent**)Z_Param__Result=P_THIS->GetGunMesh();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function GetGunMesh

// Begin Class AMultiplayerGun Function GetHasChargeUp
struct Z_Construct_UFunction_AMultiplayerGun_GetHasChargeUp_Statics
{
	struct MultiplayerGun_eventGetHasChargeUp_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerGun_GetHasChargeUp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MultiplayerGun_eventGetHasChargeUp_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerGun_GetHasChargeUp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerGun_eventGetHasChargeUp_Parms), &Z_Construct_UFunction_AMultiplayerGun_GetHasChargeUp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_GetHasChargeUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_GetHasChargeUp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetHasChargeUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_GetHasChargeUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "GetHasChargeUp", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_GetHasChargeUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetHasChargeUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_GetHasChargeUp_Statics::MultiplayerGun_eventGetHasChargeUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetHasChargeUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_GetHasChargeUp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_GetHasChargeUp_Statics::MultiplayerGun_eventGetHasChargeUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_GetHasChargeUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_GetHasChargeUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execGetHasChargeUp)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetHasChargeUp();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function GetHasChargeUp

// Begin Class AMultiplayerGun Function GetHitMarkerActorSounds
struct Z_Construct_UFunction_AMultiplayerGun_GetHitMarkerActorSounds_Statics
{
	struct MultiplayerGun_eventGetHitMarkerActorSounds_Parms
	{
		TMap<TSubclassOf<AActor> ,USoundBase*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerGun_GetHitMarkerActorSounds_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AMultiplayerGun_GetHitMarkerActorSounds_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_AMultiplayerGun_GetHitMarkerActorSounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventGetHitMarkerActorSounds_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_GetHitMarkerActorSounds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_GetHitMarkerActorSounds_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_GetHitMarkerActorSounds_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_GetHitMarkerActorSounds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetHitMarkerActorSounds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_GetHitMarkerActorSounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "GetHitMarkerActorSounds", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_GetHitMarkerActorSounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetHitMarkerActorSounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_GetHitMarkerActorSounds_Statics::MultiplayerGun_eventGetHitMarkerActorSounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetHitMarkerActorSounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_GetHitMarkerActorSounds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_GetHitMarkerActorSounds_Statics::MultiplayerGun_eventGetHitMarkerActorSounds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_GetHitMarkerActorSounds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_GetHitMarkerActorSounds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execGetHitMarkerActorSounds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<TSubclassOf<AActor> ,USoundBase*>*)Z_Param__Result=P_THIS->GetHitMarkerActorSounds();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function GetHitMarkerActorSounds

// Begin Class AMultiplayerGun Function GetHitMarkerSurfaceSounds
struct Z_Construct_UFunction_AMultiplayerGun_GetHitMarkerSurfaceSounds_Statics
{
	struct MultiplayerGun_eventGetHitMarkerSurfaceSounds_Parms
	{
		TMap<UPhysicalMaterial*,USoundBase*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerGun_GetHitMarkerSurfaceSounds_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerGun_GetHitMarkerSurfaceSounds_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_AMultiplayerGun_GetHitMarkerSurfaceSounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventGetHitMarkerSurfaceSounds_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_GetHitMarkerSurfaceSounds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_GetHitMarkerSurfaceSounds_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_GetHitMarkerSurfaceSounds_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_GetHitMarkerSurfaceSounds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetHitMarkerSurfaceSounds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_GetHitMarkerSurfaceSounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "GetHitMarkerSurfaceSounds", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_GetHitMarkerSurfaceSounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetHitMarkerSurfaceSounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_GetHitMarkerSurfaceSounds_Statics::MultiplayerGun_eventGetHitMarkerSurfaceSounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetHitMarkerSurfaceSounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_GetHitMarkerSurfaceSounds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_GetHitMarkerSurfaceSounds_Statics::MultiplayerGun_eventGetHitMarkerSurfaceSounds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_GetHitMarkerSurfaceSounds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_GetHitMarkerSurfaceSounds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execGetHitMarkerSurfaceSounds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<UPhysicalMaterial*,USoundBase*>*)Z_Param__Result=P_THIS->GetHitMarkerSurfaceSounds();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function GetHitMarkerSurfaceSounds

// Begin Class AMultiplayerGun Function GetHoldTriggerDuringChargeUp
struct Z_Construct_UFunction_AMultiplayerGun_GetHoldTriggerDuringChargeUp_Statics
{
	struct MultiplayerGun_eventGetHoldTriggerDuringChargeUp_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerGun_GetHoldTriggerDuringChargeUp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MultiplayerGun_eventGetHoldTriggerDuringChargeUp_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerGun_GetHoldTriggerDuringChargeUp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerGun_eventGetHoldTriggerDuringChargeUp_Parms), &Z_Construct_UFunction_AMultiplayerGun_GetHoldTriggerDuringChargeUp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_GetHoldTriggerDuringChargeUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_GetHoldTriggerDuringChargeUp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetHoldTriggerDuringChargeUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_GetHoldTriggerDuringChargeUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "GetHoldTriggerDuringChargeUp", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_GetHoldTriggerDuringChargeUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetHoldTriggerDuringChargeUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_GetHoldTriggerDuringChargeUp_Statics::MultiplayerGun_eventGetHoldTriggerDuringChargeUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetHoldTriggerDuringChargeUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_GetHoldTriggerDuringChargeUp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_GetHoldTriggerDuringChargeUp_Statics::MultiplayerGun_eventGetHoldTriggerDuringChargeUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_GetHoldTriggerDuringChargeUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_GetHoldTriggerDuringChargeUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execGetHoldTriggerDuringChargeUp)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetHoldTriggerDuringChargeUp();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function GetHoldTriggerDuringChargeUp

// Begin Class AMultiplayerGun Function GetInfiniteAmmo
struct Z_Construct_UFunction_AMultiplayerGun_GetInfiniteAmmo_Statics
{
	struct MultiplayerGun_eventGetInfiniteAmmo_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerGun_GetInfiniteAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventGetInfiniteAmmo_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_GetInfiniteAmmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_GetInfiniteAmmo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetInfiniteAmmo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_GetInfiniteAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "GetInfiniteAmmo", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_GetInfiniteAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetInfiniteAmmo_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_GetInfiniteAmmo_Statics::MultiplayerGun_eventGetInfiniteAmmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetInfiniteAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_GetInfiniteAmmo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_GetInfiniteAmmo_Statics::MultiplayerGun_eventGetInfiniteAmmo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_GetInfiniteAmmo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_GetInfiniteAmmo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execGetInfiniteAmmo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetInfiniteAmmo();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function GetInfiniteAmmo

// Begin Class AMultiplayerGun Function GetIsExplosive
struct Z_Construct_UFunction_AMultiplayerGun_GetIsExplosive_Statics
{
	struct MultiplayerGun_eventGetIsExplosive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerGun_GetIsExplosive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MultiplayerGun_eventGetIsExplosive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerGun_GetIsExplosive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerGun_eventGetIsExplosive_Parms), &Z_Construct_UFunction_AMultiplayerGun_GetIsExplosive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_GetIsExplosive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_GetIsExplosive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetIsExplosive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_GetIsExplosive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "GetIsExplosive", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_GetIsExplosive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetIsExplosive_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_GetIsExplosive_Statics::MultiplayerGun_eventGetIsExplosive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetIsExplosive_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_GetIsExplosive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_GetIsExplosive_Statics::MultiplayerGun_eventGetIsExplosive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_GetIsExplosive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_GetIsExplosive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execGetIsExplosive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsExplosive();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function GetIsExplosive

// Begin Class AMultiplayerGun Function GetManuallySetGunLocation
struct Z_Construct_UFunction_AMultiplayerGun_GetManuallySetGunLocation_Statics
{
	struct MultiplayerGun_eventGetManuallySetGunLocation_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerGun_GetManuallySetGunLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MultiplayerGun_eventGetManuallySetGunLocation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerGun_GetManuallySetGunLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerGun_eventGetManuallySetGunLocation_Parms), &Z_Construct_UFunction_AMultiplayerGun_GetManuallySetGunLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_GetManuallySetGunLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_GetManuallySetGunLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetManuallySetGunLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_GetManuallySetGunLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "GetManuallySetGunLocation", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_GetManuallySetGunLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetManuallySetGunLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_GetManuallySetGunLocation_Statics::MultiplayerGun_eventGetManuallySetGunLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetManuallySetGunLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_GetManuallySetGunLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_GetManuallySetGunLocation_Statics::MultiplayerGun_eventGetManuallySetGunLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_GetManuallySetGunLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_GetManuallySetGunLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execGetManuallySetGunLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetManuallySetGunLocation();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function GetManuallySetGunLocation

// Begin Class AMultiplayerGun Function GetMaxAmmoInMagazine
struct Z_Construct_UFunction_AMultiplayerGun_GetMaxAmmoInMagazine_Statics
{
	struct MultiplayerGun_eventGetMaxAmmoInMagazine_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerGun_GetMaxAmmoInMagazine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventGetMaxAmmoInMagazine_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_GetMaxAmmoInMagazine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_GetMaxAmmoInMagazine_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetMaxAmmoInMagazine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_GetMaxAmmoInMagazine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "GetMaxAmmoInMagazine", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_GetMaxAmmoInMagazine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetMaxAmmoInMagazine_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_GetMaxAmmoInMagazine_Statics::MultiplayerGun_eventGetMaxAmmoInMagazine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetMaxAmmoInMagazine_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_GetMaxAmmoInMagazine_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_GetMaxAmmoInMagazine_Statics::MultiplayerGun_eventGetMaxAmmoInMagazine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_GetMaxAmmoInMagazine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_GetMaxAmmoInMagazine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execGetMaxAmmoInMagazine)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMaxAmmoInMagazine();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function GetMaxAmmoInMagazine

// Begin Class AMultiplayerGun Function GetMaxHeat
struct Z_Construct_UFunction_AMultiplayerGun_GetMaxHeat_Statics
{
	struct MultiplayerGun_eventGetMaxHeat_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerGun_GetMaxHeat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventGetMaxHeat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_GetMaxHeat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_GetMaxHeat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetMaxHeat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_GetMaxHeat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "GetMaxHeat", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_GetMaxHeat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetMaxHeat_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_GetMaxHeat_Statics::MultiplayerGun_eventGetMaxHeat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetMaxHeat_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_GetMaxHeat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_GetMaxHeat_Statics::MultiplayerGun_eventGetMaxHeat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_GetMaxHeat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_GetMaxHeat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execGetMaxHeat)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxHeat();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function GetMaxHeat

// Begin Class AMultiplayerGun Function GetMaxReserveAmmo
struct Z_Construct_UFunction_AMultiplayerGun_GetMaxReserveAmmo_Statics
{
	struct MultiplayerGun_eventGetMaxReserveAmmo_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerGun_GetMaxReserveAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventGetMaxReserveAmmo_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_GetMaxReserveAmmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_GetMaxReserveAmmo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetMaxReserveAmmo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_GetMaxReserveAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "GetMaxReserveAmmo", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_GetMaxReserveAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetMaxReserveAmmo_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_GetMaxReserveAmmo_Statics::MultiplayerGun_eventGetMaxReserveAmmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetMaxReserveAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_GetMaxReserveAmmo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_GetMaxReserveAmmo_Statics::MultiplayerGun_eventGetMaxReserveAmmo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_GetMaxReserveAmmo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_GetMaxReserveAmmo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execGetMaxReserveAmmo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMaxReserveAmmo();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function GetMaxReserveAmmo

// Begin Class AMultiplayerGun Function GetOwningPlayer
struct Z_Construct_UFunction_AMultiplayerGun_GetOwningPlayer_Statics
{
	struct MultiplayerGun_eventGetOwningPlayer_Parms
	{
		APawn* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerGun_GetOwningPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventGetOwningPlayer_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_GetOwningPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_GetOwningPlayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetOwningPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_GetOwningPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "GetOwningPlayer", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_GetOwningPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetOwningPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_GetOwningPlayer_Statics::MultiplayerGun_eventGetOwningPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetOwningPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_GetOwningPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_GetOwningPlayer_Statics::MultiplayerGun_eventGetOwningPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_GetOwningPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_GetOwningPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execGetOwningPlayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APawn**)Z_Param__Result=P_THIS->GetOwningPlayer();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function GetOwningPlayer

// Begin Class AMultiplayerGun Function GetOwningPlayerCast
struct Z_Construct_UFunction_AMultiplayerGun_GetOwningPlayerCast_Statics
{
	struct MultiplayerGun_eventGetOwningPlayerCast_Parms
	{
		AMultiplayerCharacter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This can return nullptr so check that it's valid when using, requires using MultiplayerCharacter class" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerGun_GetOwningPlayerCast_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventGetOwningPlayerCast_Parms, ReturnValue), Z_Construct_UClass_AMultiplayerCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_GetOwningPlayerCast_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_GetOwningPlayerCast_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetOwningPlayerCast_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_GetOwningPlayerCast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "GetOwningPlayerCast", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_GetOwningPlayerCast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetOwningPlayerCast_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_GetOwningPlayerCast_Statics::MultiplayerGun_eventGetOwningPlayerCast_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetOwningPlayerCast_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_GetOwningPlayerCast_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_GetOwningPlayerCast_Statics::MultiplayerGun_eventGetOwningPlayerCast_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_GetOwningPlayerCast()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_GetOwningPlayerCast_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execGetOwningPlayerCast)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AMultiplayerCharacter**)Z_Param__Result=P_THIS->GetOwningPlayerCast();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function GetOwningPlayerCast

// Begin Class AMultiplayerGun Function GetPlayerArmsRelativeLocation
struct Z_Construct_UFunction_AMultiplayerGun_GetPlayerArmsRelativeLocation_Statics
{
	struct MultiplayerGun_eventGetPlayerArmsRelativeLocation_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerGun_GetPlayerArmsRelativeLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventGetPlayerArmsRelativeLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_GetPlayerArmsRelativeLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_GetPlayerArmsRelativeLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetPlayerArmsRelativeLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_GetPlayerArmsRelativeLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "GetPlayerArmsRelativeLocation", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_GetPlayerArmsRelativeLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetPlayerArmsRelativeLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_GetPlayerArmsRelativeLocation_Statics::MultiplayerGun_eventGetPlayerArmsRelativeLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetPlayerArmsRelativeLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_GetPlayerArmsRelativeLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_GetPlayerArmsRelativeLocation_Statics::MultiplayerGun_eventGetPlayerArmsRelativeLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_GetPlayerArmsRelativeLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_GetPlayerArmsRelativeLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execGetPlayerArmsRelativeLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetPlayerArmsRelativeLocation();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function GetPlayerArmsRelativeLocation

// Begin Class AMultiplayerGun Function GetPlayerArmsRelativeRotation
struct Z_Construct_UFunction_AMultiplayerGun_GetPlayerArmsRelativeRotation_Statics
{
	struct MultiplayerGun_eventGetPlayerArmsRelativeRotation_Parms
	{
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerGun_GetPlayerArmsRelativeRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventGetPlayerArmsRelativeRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_GetPlayerArmsRelativeRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_GetPlayerArmsRelativeRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetPlayerArmsRelativeRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_GetPlayerArmsRelativeRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "GetPlayerArmsRelativeRotation", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_GetPlayerArmsRelativeRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetPlayerArmsRelativeRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_GetPlayerArmsRelativeRotation_Statics::MultiplayerGun_eventGetPlayerArmsRelativeRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetPlayerArmsRelativeRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_GetPlayerArmsRelativeRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_GetPlayerArmsRelativeRotation_Statics::MultiplayerGun_eventGetPlayerArmsRelativeRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_GetPlayerArmsRelativeRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_GetPlayerArmsRelativeRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execGetPlayerArmsRelativeRotation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=P_THIS->GetPlayerArmsRelativeRotation();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function GetPlayerArmsRelativeRotation

// Begin Class AMultiplayerGun Function GetReloadGunSound
struct Z_Construct_UFunction_AMultiplayerGun_GetReloadGunSound_Statics
{
	struct MultiplayerGun_eventGetReloadGunSound_Parms
	{
		USoundBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerGun_GetReloadGunSound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventGetReloadGunSound_Parms, ReturnValue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_GetReloadGunSound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_GetReloadGunSound_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetReloadGunSound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_GetReloadGunSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "GetReloadGunSound", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_GetReloadGunSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetReloadGunSound_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_GetReloadGunSound_Statics::MultiplayerGun_eventGetReloadGunSound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetReloadGunSound_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_GetReloadGunSound_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_GetReloadGunSound_Statics::MultiplayerGun_eventGetReloadGunSound_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_GetReloadGunSound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_GetReloadGunSound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execGetReloadGunSound)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USoundBase**)Z_Param__Result=P_THIS->GetReloadGunSound();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function GetReloadGunSound

// Begin Class AMultiplayerGun Function GetReserveAmmo
struct Z_Construct_UFunction_AMultiplayerGun_GetReserveAmmo_Statics
{
	struct MultiplayerGun_eventGetReserveAmmo_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerGun_GetReserveAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventGetReserveAmmo_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_GetReserveAmmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_GetReserveAmmo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetReserveAmmo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_GetReserveAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "GetReserveAmmo", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_GetReserveAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetReserveAmmo_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_GetReserveAmmo_Statics::MultiplayerGun_eventGetReserveAmmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetReserveAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_GetReserveAmmo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_GetReserveAmmo_Statics::MultiplayerGun_eventGetReserveAmmo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_GetReserveAmmo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_GetReserveAmmo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execGetReserveAmmo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetReserveAmmo();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function GetReserveAmmo

// Begin Class AMultiplayerGun Function GetSharedCaliberAmount
struct Z_Construct_UFunction_AMultiplayerGun_GetSharedCaliberAmount_Statics
{
	struct MultiplayerGun_eventGetSharedCaliberAmount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerGun_GetSharedCaliberAmount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventGetSharedCaliberAmount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_GetSharedCaliberAmount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_GetSharedCaliberAmount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetSharedCaliberAmount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_GetSharedCaliberAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "GetSharedCaliberAmount", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_GetSharedCaliberAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetSharedCaliberAmount_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_GetSharedCaliberAmount_Statics::MultiplayerGun_eventGetSharedCaliberAmount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetSharedCaliberAmount_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_GetSharedCaliberAmount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_GetSharedCaliberAmount_Statics::MultiplayerGun_eventGetSharedCaliberAmount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_GetSharedCaliberAmount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_GetSharedCaliberAmount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execGetSharedCaliberAmount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetSharedCaliberAmount();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function GetSharedCaliberAmount

// Begin Class AMultiplayerGun Function GetSocketName
struct Z_Construct_UFunction_AMultiplayerGun_GetSocketName_Statics
{
	struct MultiplayerGun_eventGetSocketName_Parms
	{
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AMultiplayerGun_GetSocketName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventGetSocketName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_GetSocketName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_GetSocketName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetSocketName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_GetSocketName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "GetSocketName", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_GetSocketName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetSocketName_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_GetSocketName_Statics::MultiplayerGun_eventGetSocketName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetSocketName_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_GetSocketName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_GetSocketName_Statics::MultiplayerGun_eventGetSocketName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_GetSocketName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_GetSocketName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execGetSocketName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetSocketName();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function GetSocketName

// Begin Class AMultiplayerGun Function GetSwitchPerspectiveWhenAiming
struct Z_Construct_UFunction_AMultiplayerGun_GetSwitchPerspectiveWhenAiming_Statics
{
	struct MultiplayerGun_eventGetSwitchPerspectiveWhenAiming_Parms
	{
		TEnumAsByte<EAimSwitchPerspectiveType> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMultiplayerGun_GetSwitchPerspectiveWhenAiming_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventGetSwitchPerspectiveWhenAiming_Parms, ReturnValue), Z_Construct_UEnum_MultiplayerFPS_EAimSwitchPerspectiveType, METADATA_PARAMS(0, nullptr) }; // 1846365563
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_GetSwitchPerspectiveWhenAiming_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_GetSwitchPerspectiveWhenAiming_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetSwitchPerspectiveWhenAiming_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_GetSwitchPerspectiveWhenAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "GetSwitchPerspectiveWhenAiming", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_GetSwitchPerspectiveWhenAiming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetSwitchPerspectiveWhenAiming_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_GetSwitchPerspectiveWhenAiming_Statics::MultiplayerGun_eventGetSwitchPerspectiveWhenAiming_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetSwitchPerspectiveWhenAiming_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_GetSwitchPerspectiveWhenAiming_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_GetSwitchPerspectiveWhenAiming_Statics::MultiplayerGun_eventGetSwitchPerspectiveWhenAiming_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_GetSwitchPerspectiveWhenAiming()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_GetSwitchPerspectiveWhenAiming_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execGetSwitchPerspectiveWhenAiming)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EAimSwitchPerspectiveType>*)Z_Param__Result=P_THIS->GetSwitchPerspectiveWhenAiming();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function GetSwitchPerspectiveWhenAiming

// Begin Class AMultiplayerGun Function GetThirdPersonGunMesh
struct Z_Construct_UFunction_AMultiplayerGun_GetThirdPersonGunMesh_Statics
{
	struct MultiplayerGun_eventGetThirdPersonGunMesh_Parms
	{
		UPrimitiveComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerGun_GetThirdPersonGunMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventGetThirdPersonGunMesh_Parms, ReturnValue), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_GetThirdPersonGunMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_GetThirdPersonGunMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetThirdPersonGunMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_GetThirdPersonGunMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "GetThirdPersonGunMesh", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_GetThirdPersonGunMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetThirdPersonGunMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_GetThirdPersonGunMesh_Statics::MultiplayerGun_eventGetThirdPersonGunMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetThirdPersonGunMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_GetThirdPersonGunMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_GetThirdPersonGunMesh_Statics::MultiplayerGun_eventGetThirdPersonGunMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_GetThirdPersonGunMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_GetThirdPersonGunMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execGetThirdPersonGunMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPrimitiveComponent**)Z_Param__Result=P_THIS->GetThirdPersonGunMesh();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function GetThirdPersonGunMesh

// Begin Class AMultiplayerGun Function GetTimeToADS
struct Z_Construct_UFunction_AMultiplayerGun_GetTimeToADS_Statics
{
	struct MultiplayerGun_eventGetTimeToADS_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerGun_GetTimeToADS_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventGetTimeToADS_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_GetTimeToADS_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_GetTimeToADS_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetTimeToADS_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_GetTimeToADS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "GetTimeToADS", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_GetTimeToADS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetTimeToADS_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_GetTimeToADS_Statics::MultiplayerGun_eventGetTimeToADS_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetTimeToADS_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_GetTimeToADS_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_GetTimeToADS_Statics::MultiplayerGun_eventGetTimeToADS_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_GetTimeToADS()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_GetTimeToADS_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execGetTimeToADS)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetTimeToADS();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function GetTimeToADS

// Begin Class AMultiplayerGun Function GetTimeToZoom
struct Z_Construct_UFunction_AMultiplayerGun_GetTimeToZoom_Statics
{
	struct MultiplayerGun_eventGetTimeToZoom_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerGun_GetTimeToZoom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventGetTimeToZoom_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_GetTimeToZoom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_GetTimeToZoom_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetTimeToZoom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_GetTimeToZoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "GetTimeToZoom", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_GetTimeToZoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetTimeToZoom_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_GetTimeToZoom_Statics::MultiplayerGun_eventGetTimeToZoom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetTimeToZoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_GetTimeToZoom_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_GetTimeToZoom_Statics::MultiplayerGun_eventGetTimeToZoom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_GetTimeToZoom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_GetTimeToZoom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execGetTimeToZoom)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetTimeToZoom();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function GetTimeToZoom

// Begin Class AMultiplayerGun Function GetUseActorClassesForHitMarkers
struct Z_Construct_UFunction_AMultiplayerGun_GetUseActorClassesForHitMarkers_Statics
{
	struct MultiplayerGun_eventGetUseActorClassesForHitMarkers_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerGun_GetUseActorClassesForHitMarkers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventGetUseActorClassesForHitMarkers_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_GetUseActorClassesForHitMarkers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_GetUseActorClassesForHitMarkers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetUseActorClassesForHitMarkers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_GetUseActorClassesForHitMarkers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "GetUseActorClassesForHitMarkers", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_GetUseActorClassesForHitMarkers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetUseActorClassesForHitMarkers_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_GetUseActorClassesForHitMarkers_Statics::MultiplayerGun_eventGetUseActorClassesForHitMarkers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetUseActorClassesForHitMarkers_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_GetUseActorClassesForHitMarkers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_GetUseActorClassesForHitMarkers_Statics::MultiplayerGun_eventGetUseActorClassesForHitMarkers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_GetUseActorClassesForHitMarkers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_GetUseActorClassesForHitMarkers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execGetUseActorClassesForHitMarkers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetUseActorClassesForHitMarkers();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function GetUseActorClassesForHitMarkers

// Begin Class AMultiplayerGun Function GetUseADS
struct Z_Construct_UFunction_AMultiplayerGun_GetUseADS_Statics
{
	struct MultiplayerGun_eventGetUseADS_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerGun_GetUseADS_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventGetUseADS_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_GetUseADS_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_GetUseADS_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetUseADS_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_GetUseADS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "GetUseADS", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_GetUseADS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetUseADS_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_GetUseADS_Statics::MultiplayerGun_eventGetUseADS_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetUseADS_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_GetUseADS_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_GetUseADS_Statics::MultiplayerGun_eventGetUseADS_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_GetUseADS()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_GetUseADS_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execGetUseADS)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetUseADS();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function GetUseADS

// Begin Class AMultiplayerGun Function GetUseProjectile
struct Z_Construct_UFunction_AMultiplayerGun_GetUseProjectile_Statics
{
	struct MultiplayerGun_eventGetUseProjectile_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerGun_GetUseProjectile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MultiplayerGun_eventGetUseProjectile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerGun_GetUseProjectile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerGun_eventGetUseProjectile_Parms), &Z_Construct_UFunction_AMultiplayerGun_GetUseProjectile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_GetUseProjectile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_GetUseProjectile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetUseProjectile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_GetUseProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "GetUseProjectile", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_GetUseProjectile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetUseProjectile_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_GetUseProjectile_Statics::MultiplayerGun_eventGetUseProjectile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetUseProjectile_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_GetUseProjectile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_GetUseProjectile_Statics::MultiplayerGun_eventGetUseProjectile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_GetUseProjectile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_GetUseProjectile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execGetUseProjectile)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetUseProjectile();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function GetUseProjectile

// Begin Class AMultiplayerGun Function GetUseSharedCalibers
struct Z_Construct_UFunction_AMultiplayerGun_GetUseSharedCalibers_Statics
{
	struct MultiplayerGun_eventGetUseSharedCalibers_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerGun_GetUseSharedCalibers_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MultiplayerGun_eventGetUseSharedCalibers_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerGun_GetUseSharedCalibers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerGun_eventGetUseSharedCalibers_Parms), &Z_Construct_UFunction_AMultiplayerGun_GetUseSharedCalibers_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_GetUseSharedCalibers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_GetUseSharedCalibers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetUseSharedCalibers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_GetUseSharedCalibers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "GetUseSharedCalibers", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_GetUseSharedCalibers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetUseSharedCalibers_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_GetUseSharedCalibers_Statics::MultiplayerGun_eventGetUseSharedCalibers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetUseSharedCalibers_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_GetUseSharedCalibers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_GetUseSharedCalibers_Statics::MultiplayerGun_eventGetUseSharedCalibers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_GetUseSharedCalibers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_GetUseSharedCalibers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execGetUseSharedCalibers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetUseSharedCalibers();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function GetUseSharedCalibers

// Begin Class AMultiplayerGun Function GetUsingThirdPerson
struct Z_Construct_UFunction_AMultiplayerGun_GetUsingThirdPerson_Statics
{
	struct MultiplayerGun_eventGetUsingThirdPerson_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerGun_GetUsingThirdPerson_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MultiplayerGun_eventGetUsingThirdPerson_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerGun_GetUsingThirdPerson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerGun_eventGetUsingThirdPerson_Parms), &Z_Construct_UFunction_AMultiplayerGun_GetUsingThirdPerson_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_GetUsingThirdPerson_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_GetUsingThirdPerson_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetUsingThirdPerson_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_GetUsingThirdPerson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "GetUsingThirdPerson", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_GetUsingThirdPerson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetUsingThirdPerson_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_GetUsingThirdPerson_Statics::MultiplayerGun_eventGetUsingThirdPerson_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetUsingThirdPerson_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_GetUsingThirdPerson_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_GetUsingThirdPerson_Statics::MultiplayerGun_eventGetUsingThirdPerson_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_GetUsingThirdPerson()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_GetUsingThirdPerson_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execGetUsingThirdPerson)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetUsingThirdPerson();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function GetUsingThirdPerson

// Begin Class AMultiplayerGun Function GetWasPickedup
struct Z_Construct_UFunction_AMultiplayerGun_GetWasPickedup_Statics
{
	struct MultiplayerGun_eventGetWasPickedup_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerGun_GetWasPickedup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MultiplayerGun_eventGetWasPickedup_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerGun_GetWasPickedup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerGun_eventGetWasPickedup_Parms), &Z_Construct_UFunction_AMultiplayerGun_GetWasPickedup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_GetWasPickedup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_GetWasPickedup_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetWasPickedup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_GetWasPickedup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "GetWasPickedup", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_GetWasPickedup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetWasPickedup_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_GetWasPickedup_Statics::MultiplayerGun_eventGetWasPickedup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetWasPickedup_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_GetWasPickedup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_GetWasPickedup_Statics::MultiplayerGun_eventGetWasPickedup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_GetWasPickedup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_GetWasPickedup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execGetWasPickedup)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetWasPickedup();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function GetWasPickedup

// Begin Class AMultiplayerGun Function GetZoomArmsLocation
struct Z_Construct_UFunction_AMultiplayerGun_GetZoomArmsLocation_Statics
{
	struct MultiplayerGun_eventGetZoomArmsLocation_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerGun_GetZoomArmsLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventGetZoomArmsLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_GetZoomArmsLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_GetZoomArmsLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetZoomArmsLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_GetZoomArmsLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "GetZoomArmsLocation", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_GetZoomArmsLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetZoomArmsLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_GetZoomArmsLocation_Statics::MultiplayerGun_eventGetZoomArmsLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetZoomArmsLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_GetZoomArmsLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_GetZoomArmsLocation_Statics::MultiplayerGun_eventGetZoomArmsLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_GetZoomArmsLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_GetZoomArmsLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execGetZoomArmsLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetZoomArmsLocation();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function GetZoomArmsLocation

// Begin Class AMultiplayerGun Function GetZoomArmsRotation
struct Z_Construct_UFunction_AMultiplayerGun_GetZoomArmsRotation_Statics
{
	struct MultiplayerGun_eventGetZoomArmsRotation_Parms
	{
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerGun_GetZoomArmsRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventGetZoomArmsRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_GetZoomArmsRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_GetZoomArmsRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetZoomArmsRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_GetZoomArmsRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "GetZoomArmsRotation", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_GetZoomArmsRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetZoomArmsRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_GetZoomArmsRotation_Statics::MultiplayerGun_eventGetZoomArmsRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetZoomArmsRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_GetZoomArmsRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_GetZoomArmsRotation_Statics::MultiplayerGun_eventGetZoomArmsRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_GetZoomArmsRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_GetZoomArmsRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execGetZoomArmsRotation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=P_THIS->GetZoomArmsRotation();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function GetZoomArmsRotation

// Begin Class AMultiplayerGun Function GetZoomFOV
struct Z_Construct_UFunction_AMultiplayerGun_GetZoomFOV_Statics
{
	struct MultiplayerGun_eventGetZoomFOV_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerGun_GetZoomFOV_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventGetZoomFOV_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_GetZoomFOV_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_GetZoomFOV_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetZoomFOV_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_GetZoomFOV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "GetZoomFOV", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_GetZoomFOV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetZoomFOV_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_GetZoomFOV_Statics::MultiplayerGun_eventGetZoomFOV_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_GetZoomFOV_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_GetZoomFOV_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_GetZoomFOV_Statics::MultiplayerGun_eventGetZoomFOV_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_GetZoomFOV()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_GetZoomFOV_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execGetZoomFOV)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetZoomFOV();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function GetZoomFOV

// Begin Class AMultiplayerGun Function HolsterWeapon
struct Z_Construct_UFunction_AMultiplayerGun_HolsterWeapon_Statics
{
	struct MultiplayerGun_eventHolsterWeapon_Parms
	{
		bool IsHolstering;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "Set IsHolstering to false to un holster" },
	};
#endif // WITH_METADATA
	static void NewProp_IsHolstering_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsHolstering;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerGun_HolsterWeapon_Statics::NewProp_IsHolstering_SetBit(void* Obj)
{
	((MultiplayerGun_eventHolsterWeapon_Parms*)Obj)->IsHolstering = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerGun_HolsterWeapon_Statics::NewProp_IsHolstering = { "IsHolstering", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerGun_eventHolsterWeapon_Parms), &Z_Construct_UFunction_AMultiplayerGun_HolsterWeapon_Statics::NewProp_IsHolstering_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_HolsterWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_HolsterWeapon_Statics::NewProp_IsHolstering,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_HolsterWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_HolsterWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "HolsterWeapon", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_HolsterWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_HolsterWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_HolsterWeapon_Statics::MultiplayerGun_eventHolsterWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_HolsterWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_HolsterWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_HolsterWeapon_Statics::MultiplayerGun_eventHolsterWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_HolsterWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_HolsterWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execHolsterWeapon)
{
	P_GET_UBOOL(Z_Param_IsHolstering);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HolsterWeapon(Z_Param_IsHolstering);
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function HolsterWeapon

// Begin Class AMultiplayerGun Function HolsterWeapon_BP
static const FName NAME_AMultiplayerGun_HolsterWeapon_BP = FName(TEXT("HolsterWeapon_BP"));
void AMultiplayerGun::HolsterWeapon_BP()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerGun_HolsterWeapon_BP);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerGun_HolsterWeapon_BP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_HolsterWeapon_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "HolsterWeapon_BP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_HolsterWeapon_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_HolsterWeapon_BP_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerGun_HolsterWeapon_BP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_HolsterWeapon_BP_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AMultiplayerGun Function HolsterWeapon_BP

// Begin Class AMultiplayerGun Function MulticastReload
static const FName NAME_AMultiplayerGun_MulticastReload = FName(TEXT("MulticastReload"));
void AMultiplayerGun::MulticastReload()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerGun_MulticastReload);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerGun_MulticastReload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_MulticastReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "MulticastReload", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_MulticastReload_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_MulticastReload_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerGun_MulticastReload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_MulticastReload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execMulticastReload)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastReload_Implementation();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function MulticastReload

// Begin Class AMultiplayerGun Function MulticastSetOwningPlayer
struct MultiplayerGun_eventMulticastSetOwningPlayer_Parms
{
	APawn* NewOwningPlayer;
};
static const FName NAME_AMultiplayerGun_MulticastSetOwningPlayer = FName(TEXT("MulticastSetOwningPlayer"));
void AMultiplayerGun::MulticastSetOwningPlayer(APawn* NewOwningPlayer)
{
	MultiplayerGun_eventMulticastSetOwningPlayer_Parms Parms;
	Parms.NewOwningPlayer=NewOwningPlayer;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerGun_MulticastSetOwningPlayer);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerGun_MulticastSetOwningPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewOwningPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerGun_MulticastSetOwningPlayer_Statics::NewProp_NewOwningPlayer = { "NewOwningPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventMulticastSetOwningPlayer_Parms, NewOwningPlayer), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_MulticastSetOwningPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_MulticastSetOwningPlayer_Statics::NewProp_NewOwningPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_MulticastSetOwningPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_MulticastSetOwningPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "MulticastSetOwningPlayer", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_MulticastSetOwningPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_MulticastSetOwningPlayer_Statics::PropPointers), sizeof(MultiplayerGun_eventMulticastSetOwningPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_MulticastSetOwningPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_MulticastSetOwningPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerGun_eventMulticastSetOwningPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_MulticastSetOwningPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_MulticastSetOwningPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execMulticastSetOwningPlayer)
{
	P_GET_OBJECT(APawn,Z_Param_NewOwningPlayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastSetOwningPlayer_Implementation(Z_Param_NewOwningPlayer);
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function MulticastSetOwningPlayer

// Begin Class AMultiplayerGun Function MulticastSetPickupCollisionEnabled
static const FName NAME_AMultiplayerGun_MulticastSetPickupCollisionEnabled = FName(TEXT("MulticastSetPickupCollisionEnabled"));
void AMultiplayerGun::MulticastSetPickupCollisionEnabled()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerGun_MulticastSetPickupCollisionEnabled);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerGun_MulticastSetPickupCollisionEnabled_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_MulticastSetPickupCollisionEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "MulticastSetPickupCollisionEnabled", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_MulticastSetPickupCollisionEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_MulticastSetPickupCollisionEnabled_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerGun_MulticastSetPickupCollisionEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_MulticastSetPickupCollisionEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execMulticastSetPickupCollisionEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastSetPickupCollisionEnabled_Implementation();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function MulticastSetPickupCollisionEnabled

// Begin Class AMultiplayerGun Function MulticastSetUsingThirdPerson
struct MultiplayerGun_eventMulticastSetUsingThirdPerson_Parms
{
	bool NewUsingThirdPerson;
};
static const FName NAME_AMultiplayerGun_MulticastSetUsingThirdPerson = FName(TEXT("MulticastSetUsingThirdPerson"));
void AMultiplayerGun::MulticastSetUsingThirdPerson(bool NewUsingThirdPerson)
{
	MultiplayerGun_eventMulticastSetUsingThirdPerson_Parms Parms;
	Parms.NewUsingThirdPerson=NewUsingThirdPerson ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerGun_MulticastSetUsingThirdPerson);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerGun_MulticastSetUsingThirdPerson_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewUsingThirdPerson_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewUsingThirdPerson;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerGun_MulticastSetUsingThirdPerson_Statics::NewProp_NewUsingThirdPerson_SetBit(void* Obj)
{
	((MultiplayerGun_eventMulticastSetUsingThirdPerson_Parms*)Obj)->NewUsingThirdPerson = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerGun_MulticastSetUsingThirdPerson_Statics::NewProp_NewUsingThirdPerson = { "NewUsingThirdPerson", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerGun_eventMulticastSetUsingThirdPerson_Parms), &Z_Construct_UFunction_AMultiplayerGun_MulticastSetUsingThirdPerson_Statics::NewProp_NewUsingThirdPerson_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_MulticastSetUsingThirdPerson_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_MulticastSetUsingThirdPerson_Statics::NewProp_NewUsingThirdPerson,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_MulticastSetUsingThirdPerson_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_MulticastSetUsingThirdPerson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "MulticastSetUsingThirdPerson", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_MulticastSetUsingThirdPerson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_MulticastSetUsingThirdPerson_Statics::PropPointers), sizeof(MultiplayerGun_eventMulticastSetUsingThirdPerson_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_MulticastSetUsingThirdPerson_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_MulticastSetUsingThirdPerson_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerGun_eventMulticastSetUsingThirdPerson_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_MulticastSetUsingThirdPerson()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_MulticastSetUsingThirdPerson_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execMulticastSetUsingThirdPerson)
{
	P_GET_UBOOL(Z_Param_NewUsingThirdPerson);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastSetUsingThirdPerson_Implementation(Z_Param_NewUsingThirdPerson);
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function MulticastSetUsingThirdPerson

// Begin Class AMultiplayerGun Function MulticastSetWasPickedup
struct MultiplayerGun_eventMulticastSetWasPickedup_Parms
{
	bool Pickedup;
	UPrimitiveComponent* ComponentToAttachTo;
};
static const FName NAME_AMultiplayerGun_MulticastSetWasPickedup = FName(TEXT("MulticastSetWasPickedup"));
void AMultiplayerGun::MulticastSetWasPickedup(bool Pickedup, UPrimitiveComponent* ComponentToAttachTo)
{
	MultiplayerGun_eventMulticastSetWasPickedup_Parms Parms;
	Parms.Pickedup=Pickedup ? true : false;
	Parms.ComponentToAttachTo=ComponentToAttachTo;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerGun_MulticastSetWasPickedup);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerGun_MulticastSetWasPickedup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentToAttachTo_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static void NewProp_Pickedup_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Pickedup;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComponentToAttachTo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerGun_MulticastSetWasPickedup_Statics::NewProp_Pickedup_SetBit(void* Obj)
{
	((MultiplayerGun_eventMulticastSetWasPickedup_Parms*)Obj)->Pickedup = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerGun_MulticastSetWasPickedup_Statics::NewProp_Pickedup = { "Pickedup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerGun_eventMulticastSetWasPickedup_Parms), &Z_Construct_UFunction_AMultiplayerGun_MulticastSetWasPickedup_Statics::NewProp_Pickedup_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerGun_MulticastSetWasPickedup_Statics::NewProp_ComponentToAttachTo = { "ComponentToAttachTo", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventMulticastSetWasPickedup_Parms, ComponentToAttachTo), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentToAttachTo_MetaData), NewProp_ComponentToAttachTo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_MulticastSetWasPickedup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_MulticastSetWasPickedup_Statics::NewProp_Pickedup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_MulticastSetWasPickedup_Statics::NewProp_ComponentToAttachTo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_MulticastSetWasPickedup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_MulticastSetWasPickedup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "MulticastSetWasPickedup", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_MulticastSetWasPickedup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_MulticastSetWasPickedup_Statics::PropPointers), sizeof(MultiplayerGun_eventMulticastSetWasPickedup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_MulticastSetWasPickedup_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_MulticastSetWasPickedup_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerGun_eventMulticastSetWasPickedup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_MulticastSetWasPickedup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_MulticastSetWasPickedup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execMulticastSetWasPickedup)
{
	P_GET_UBOOL(Z_Param_Pickedup);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_ComponentToAttachTo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastSetWasPickedup_Implementation(Z_Param_Pickedup,Z_Param_ComponentToAttachTo);
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function MulticastSetWasPickedup

// Begin Class AMultiplayerGun Function OnRep_GunHitEffects
struct Z_Construct_UFunction_AMultiplayerGun_OnRep_GunHitEffects_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_OnRep_GunHitEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "OnRep_GunHitEffects", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_OnRep_GunHitEffects_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_OnRep_GunHitEffects_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerGun_OnRep_GunHitEffects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_OnRep_GunHitEffects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execOnRep_GunHitEffects)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_GunHitEffects();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function OnRep_GunHitEffects

// Begin Class AMultiplayerGun Function Overheat_BP
static const FName NAME_AMultiplayerGun_Overheat_BP = FName(TEXT("Overheat_BP"));
void AMultiplayerGun::Overheat_BP()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerGun_Overheat_BP);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerGun_Overheat_BP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_Overheat_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "Overheat_BP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_Overheat_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_Overheat_BP_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerGun_Overheat_BP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_Overheat_BP_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AMultiplayerGun Function Overheat_BP

// Begin Class AMultiplayerGun Function PrintDistanceTraved_BP
struct MultiplayerGun_eventPrintDistanceTraved_BP_Parms
{
	float Distance;
};
static const FName NAME_AMultiplayerGun_PrintDistanceTraved_BP = FName(TEXT("PrintDistanceTraved_BP"));
void AMultiplayerGun::PrintDistanceTraved_BP(float Distance)
{
	MultiplayerGun_eventPrintDistanceTraved_BP_Parms Parms;
	Parms.Distance=Distance;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerGun_PrintDistanceTraved_BP);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerGun_PrintDistanceTraved_BP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerGun_PrintDistanceTraved_BP_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventPrintDistanceTraved_BP_Parms, Distance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_PrintDistanceTraved_BP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_PrintDistanceTraved_BP_Statics::NewProp_Distance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_PrintDistanceTraved_BP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_PrintDistanceTraved_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "PrintDistanceTraved_BP", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_PrintDistanceTraved_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_PrintDistanceTraved_BP_Statics::PropPointers), sizeof(MultiplayerGun_eventPrintDistanceTraved_BP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_PrintDistanceTraved_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_PrintDistanceTraved_BP_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerGun_eventPrintDistanceTraved_BP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_PrintDistanceTraved_BP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_PrintDistanceTraved_BP_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AMultiplayerGun Function PrintDistanceTraved_BP

// Begin Class AMultiplayerGun Function Reload
struct Z_Construct_UFunction_AMultiplayerGun_Reload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_Reload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "Reload", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_Reload_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_Reload_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerGun_Reload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_Reload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execReload)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Reload();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function Reload

// Begin Class AMultiplayerGun Function Reload_BP
static const FName NAME_AMultiplayerGun_Reload_BP = FName(TEXT("Reload_BP"));
void AMultiplayerGun::Reload_BP()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerGun_Reload_BP);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerGun_Reload_BP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_Reload_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "Reload_BP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_Reload_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_Reload_BP_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerGun_Reload_BP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_Reload_BP_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AMultiplayerGun Function Reload_BP

// Begin Class AMultiplayerGun Function ServerContinuousFire
static const FName NAME_AMultiplayerGun_ServerContinuousFire = FName(TEXT("ServerContinuousFire"));
void AMultiplayerGun::ServerContinuousFire()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerGun_ServerContinuousFire);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerGun_ServerContinuousFire_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_ServerContinuousFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "ServerContinuousFire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_ServerContinuousFire_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_ServerContinuousFire_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerGun_ServerContinuousFire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_ServerContinuousFire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execServerContinuousFire)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerContinuousFire_Implementation();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function ServerContinuousFire

// Begin Class AMultiplayerGun Function ServerFire
static const FName NAME_AMultiplayerGun_ServerFire = FName(TEXT("ServerFire"));
void AMultiplayerGun::ServerFire()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerGun_ServerFire);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerGun_ServerFire_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_ServerFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "ServerFire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_ServerFire_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_ServerFire_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerGun_ServerFire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_ServerFire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execServerFire)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerFire_Implementation();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function ServerFire

// Begin Class AMultiplayerGun Function ServerFire_BP
static const FName NAME_AMultiplayerGun_ServerFire_BP = FName(TEXT("ServerFire_BP"));
void AMultiplayerGun::ServerFire_BP()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerGun_ServerFire_BP);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerGun_ServerFire_BP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_ServerFire_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "ServerFire_BP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_ServerFire_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_ServerFire_BP_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerGun_ServerFire_BP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_ServerFire_BP_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AMultiplayerGun Function ServerFire_BP

// Begin Class AMultiplayerGun Function ServerReload
static const FName NAME_AMultiplayerGun_ServerReload = FName(TEXT("ServerReload"));
void AMultiplayerGun::ServerReload()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerGun_ServerReload);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerGun_ServerReload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_ServerReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "ServerReload", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_ServerReload_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_ServerReload_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerGun_ServerReload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_ServerReload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execServerReload)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerReload_Implementation();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function ServerReload

// Begin Class AMultiplayerGun Function ServerReload_BP
static const FName NAME_AMultiplayerGun_ServerReload_BP = FName(TEXT("ServerReload_BP"));
void AMultiplayerGun::ServerReload_BP()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerGun_ServerReload_BP);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerGun_ServerReload_BP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_ServerReload_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "ServerReload_BP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_ServerReload_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_ServerReload_BP_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerGun_ServerReload_BP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_ServerReload_BP_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AMultiplayerGun Function ServerReload_BP

// Begin Class AMultiplayerGun Function ServerSetOwningPlayer
struct MultiplayerGun_eventServerSetOwningPlayer_Parms
{
	APawn* NewOwningPlayer;
	int32 ReplicationMethod;
};
static const FName NAME_AMultiplayerGun_ServerSetOwningPlayer = FName(TEXT("ServerSetOwningPlayer"));
void AMultiplayerGun::ServerSetOwningPlayer(APawn* NewOwningPlayer, int32 ReplicationMethod)
{
	MultiplayerGun_eventServerSetOwningPlayer_Parms Parms;
	Parms.NewOwningPlayer=NewOwningPlayer;
	Parms.ReplicationMethod=ReplicationMethod;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerGun_ServerSetOwningPlayer);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerGun_ServerSetOwningPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ClampMax", "3" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewOwningPlayer;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReplicationMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerGun_ServerSetOwningPlayer_Statics::NewProp_NewOwningPlayer = { "NewOwningPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventServerSetOwningPlayer_Parms, NewOwningPlayer), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerGun_ServerSetOwningPlayer_Statics::NewProp_ReplicationMethod = { "ReplicationMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventServerSetOwningPlayer_Parms, ReplicationMethod), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_ServerSetOwningPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_ServerSetOwningPlayer_Statics::NewProp_NewOwningPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_ServerSetOwningPlayer_Statics::NewProp_ReplicationMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_ServerSetOwningPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_ServerSetOwningPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "ServerSetOwningPlayer", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_ServerSetOwningPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_ServerSetOwningPlayer_Statics::PropPointers), sizeof(MultiplayerGun_eventServerSetOwningPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_ServerSetOwningPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_ServerSetOwningPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerGun_eventServerSetOwningPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_ServerSetOwningPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_ServerSetOwningPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execServerSetOwningPlayer)
{
	P_GET_OBJECT(APawn,Z_Param_NewOwningPlayer);
	P_GET_PROPERTY(FIntProperty,Z_Param_ReplicationMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerSetOwningPlayer_Implementation(Z_Param_NewOwningPlayer,Z_Param_ReplicationMethod);
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function ServerSetOwningPlayer

// Begin Class AMultiplayerGun Function ServerSetPickupCollisionEnabled
static const FName NAME_AMultiplayerGun_ServerSetPickupCollisionEnabled = FName(TEXT("ServerSetPickupCollisionEnabled"));
void AMultiplayerGun::ServerSetPickupCollisionEnabled()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerGun_ServerSetPickupCollisionEnabled);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerGun_ServerSetPickupCollisionEnabled_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_ServerSetPickupCollisionEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "ServerSetPickupCollisionEnabled", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_ServerSetPickupCollisionEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_ServerSetPickupCollisionEnabled_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerGun_ServerSetPickupCollisionEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_ServerSetPickupCollisionEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execServerSetPickupCollisionEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerSetPickupCollisionEnabled_Implementation();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function ServerSetPickupCollisionEnabled

// Begin Class AMultiplayerGun Function ServerSetUsingThirdPerson
struct MultiplayerGun_eventServerSetUsingThirdPerson_Parms
{
	bool NewUsingThirdPerson;
};
static const FName NAME_AMultiplayerGun_ServerSetUsingThirdPerson = FName(TEXT("ServerSetUsingThirdPerson"));
void AMultiplayerGun::ServerSetUsingThirdPerson(bool NewUsingThirdPerson)
{
	MultiplayerGun_eventServerSetUsingThirdPerson_Parms Parms;
	Parms.NewUsingThirdPerson=NewUsingThirdPerson ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerGun_ServerSetUsingThirdPerson);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerGun_ServerSetUsingThirdPerson_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewUsingThirdPerson_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewUsingThirdPerson;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerGun_ServerSetUsingThirdPerson_Statics::NewProp_NewUsingThirdPerson_SetBit(void* Obj)
{
	((MultiplayerGun_eventServerSetUsingThirdPerson_Parms*)Obj)->NewUsingThirdPerson = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerGun_ServerSetUsingThirdPerson_Statics::NewProp_NewUsingThirdPerson = { "NewUsingThirdPerson", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerGun_eventServerSetUsingThirdPerson_Parms), &Z_Construct_UFunction_AMultiplayerGun_ServerSetUsingThirdPerson_Statics::NewProp_NewUsingThirdPerson_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_ServerSetUsingThirdPerson_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_ServerSetUsingThirdPerson_Statics::NewProp_NewUsingThirdPerson,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_ServerSetUsingThirdPerson_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_ServerSetUsingThirdPerson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "ServerSetUsingThirdPerson", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_ServerSetUsingThirdPerson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_ServerSetUsingThirdPerson_Statics::PropPointers), sizeof(MultiplayerGun_eventServerSetUsingThirdPerson_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_ServerSetUsingThirdPerson_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_ServerSetUsingThirdPerson_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerGun_eventServerSetUsingThirdPerson_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_ServerSetUsingThirdPerson()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_ServerSetUsingThirdPerson_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execServerSetUsingThirdPerson)
{
	P_GET_UBOOL(Z_Param_NewUsingThirdPerson);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerSetUsingThirdPerson_Implementation(Z_Param_NewUsingThirdPerson);
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function ServerSetUsingThirdPerson

// Begin Class AMultiplayerGun Function ServerSetWasPickedup
struct MultiplayerGun_eventServerSetWasPickedup_Parms
{
	bool Pickedup;
	UPrimitiveComponent* ComponentToAttachTo;
};
static const FName NAME_AMultiplayerGun_ServerSetWasPickedup = FName(TEXT("ServerSetWasPickedup"));
void AMultiplayerGun::ServerSetWasPickedup(bool Pickedup, UPrimitiveComponent* ComponentToAttachTo)
{
	MultiplayerGun_eventServerSetWasPickedup_Parms Parms;
	Parms.Pickedup=Pickedup ? true : false;
	Parms.ComponentToAttachTo=ComponentToAttachTo;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerGun_ServerSetWasPickedup);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerGun_ServerSetWasPickedup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentToAttachTo_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static void NewProp_Pickedup_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Pickedup;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComponentToAttachTo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerGun_ServerSetWasPickedup_Statics::NewProp_Pickedup_SetBit(void* Obj)
{
	((MultiplayerGun_eventServerSetWasPickedup_Parms*)Obj)->Pickedup = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerGun_ServerSetWasPickedup_Statics::NewProp_Pickedup = { "Pickedup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerGun_eventServerSetWasPickedup_Parms), &Z_Construct_UFunction_AMultiplayerGun_ServerSetWasPickedup_Statics::NewProp_Pickedup_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerGun_ServerSetWasPickedup_Statics::NewProp_ComponentToAttachTo = { "ComponentToAttachTo", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventServerSetWasPickedup_Parms, ComponentToAttachTo), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentToAttachTo_MetaData), NewProp_ComponentToAttachTo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_ServerSetWasPickedup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_ServerSetWasPickedup_Statics::NewProp_Pickedup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_ServerSetWasPickedup_Statics::NewProp_ComponentToAttachTo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_ServerSetWasPickedup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_ServerSetWasPickedup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "ServerSetWasPickedup", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_ServerSetWasPickedup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_ServerSetWasPickedup_Statics::PropPointers), sizeof(MultiplayerGun_eventServerSetWasPickedup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_ServerSetWasPickedup_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_ServerSetWasPickedup_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerGun_eventServerSetWasPickedup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_ServerSetWasPickedup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_ServerSetWasPickedup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execServerSetWasPickedup)
{
	P_GET_UBOOL(Z_Param_Pickedup);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_ComponentToAttachTo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerSetWasPickedup_Implementation(Z_Param_Pickedup,Z_Param_ComponentToAttachTo);
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function ServerSetWasPickedup

// Begin Class AMultiplayerGun Function ServerShotgunFire
static const FName NAME_AMultiplayerGun_ServerShotgunFire = FName(TEXT("ServerShotgunFire"));
void AMultiplayerGun::ServerShotgunFire()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerGun_ServerShotgunFire);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerGun_ServerShotgunFire_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_ServerShotgunFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "ServerShotgunFire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_ServerShotgunFire_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_ServerShotgunFire_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerGun_ServerShotgunFire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_ServerShotgunFire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execServerShotgunFire)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerShotgunFire_Implementation();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function ServerShotgunFire

// Begin Class AMultiplayerGun Function ServerStopFiring
struct MultiplayerGun_eventServerStopFiring_Parms
{
	bool EvenCancelBurst;
};
static const FName NAME_AMultiplayerGun_ServerStopFiring = FName(TEXT("ServerStopFiring"));
void AMultiplayerGun::ServerStopFiring(bool EvenCancelBurst)
{
	MultiplayerGun_eventServerStopFiring_Parms Parms;
	Parms.EvenCancelBurst=EvenCancelBurst ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerGun_ServerStopFiring);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerGun_ServerStopFiring_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "CPP_Default_EvenCancelBurst", "false" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static void NewProp_EvenCancelBurst_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EvenCancelBurst;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerGun_ServerStopFiring_Statics::NewProp_EvenCancelBurst_SetBit(void* Obj)
{
	((MultiplayerGun_eventServerStopFiring_Parms*)Obj)->EvenCancelBurst = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerGun_ServerStopFiring_Statics::NewProp_EvenCancelBurst = { "EvenCancelBurst", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerGun_eventServerStopFiring_Parms), &Z_Construct_UFunction_AMultiplayerGun_ServerStopFiring_Statics::NewProp_EvenCancelBurst_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_ServerStopFiring_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_ServerStopFiring_Statics::NewProp_EvenCancelBurst,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_ServerStopFiring_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_ServerStopFiring_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "ServerStopFiring", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_ServerStopFiring_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_ServerStopFiring_Statics::PropPointers), sizeof(MultiplayerGun_eventServerStopFiring_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_ServerStopFiring_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_ServerStopFiring_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerGun_eventServerStopFiring_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_ServerStopFiring()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_ServerStopFiring_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execServerStopFiring)
{
	P_GET_UBOOL(Z_Param_EvenCancelBurst);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerStopFiring_Implementation(Z_Param_EvenCancelBurst);
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function ServerStopFiring

// Begin Class AMultiplayerGun Function SetADSArmsLocation
struct Z_Construct_UFunction_AMultiplayerGun_SetADSArmsLocation_Statics
{
	struct MultiplayerGun_eventSetADSArmsLocation_Parms
	{
		FVector NewADSArmsLocation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewADSArmsLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerGun_SetADSArmsLocation_Statics::NewProp_NewADSArmsLocation = { "NewADSArmsLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventSetADSArmsLocation_Parms, NewADSArmsLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_SetADSArmsLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_SetADSArmsLocation_Statics::NewProp_NewADSArmsLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetADSArmsLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_SetADSArmsLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "SetADSArmsLocation", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_SetADSArmsLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetADSArmsLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_SetADSArmsLocation_Statics::MultiplayerGun_eventSetADSArmsLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetADSArmsLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_SetADSArmsLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_SetADSArmsLocation_Statics::MultiplayerGun_eventSetADSArmsLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_SetADSArmsLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_SetADSArmsLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execSetADSArmsLocation)
{
	P_GET_STRUCT(FVector,Z_Param_NewADSArmsLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetADSArmsLocation(Z_Param_NewADSArmsLocation);
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function SetADSArmsLocation

// Begin Class AMultiplayerGun Function SetADSArmsRotation
struct Z_Construct_UFunction_AMultiplayerGun_SetADSArmsRotation_Statics
{
	struct MultiplayerGun_eventSetADSArmsRotation_Parms
	{
		FRotator NewADSArmsRotation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewADSArmsRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerGun_SetADSArmsRotation_Statics::NewProp_NewADSArmsRotation = { "NewADSArmsRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventSetADSArmsRotation_Parms, NewADSArmsRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_SetADSArmsRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_SetADSArmsRotation_Statics::NewProp_NewADSArmsRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetADSArmsRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_SetADSArmsRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "SetADSArmsRotation", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_SetADSArmsRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetADSArmsRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_SetADSArmsRotation_Statics::MultiplayerGun_eventSetADSArmsRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetADSArmsRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_SetADSArmsRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_SetADSArmsRotation_Statics::MultiplayerGun_eventSetADSArmsRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_SetADSArmsRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_SetADSArmsRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execSetADSArmsRotation)
{
	P_GET_STRUCT(FRotator,Z_Param_NewADSArmsRotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetADSArmsRotation(Z_Param_NewADSArmsRotation);
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function SetADSArmsRotation

// Begin Class AMultiplayerGun Function SetADSFOV
struct Z_Construct_UFunction_AMultiplayerGun_SetADSFOV_Statics
{
	struct MultiplayerGun_eventSetADSFOV_Parms
	{
		float NewADSFOV;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewADSFOV;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerGun_SetADSFOV_Statics::NewProp_NewADSFOV = { "NewADSFOV", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventSetADSFOV_Parms, NewADSFOV), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_SetADSFOV_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_SetADSFOV_Statics::NewProp_NewADSFOV,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetADSFOV_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_SetADSFOV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "SetADSFOV", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_SetADSFOV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetADSFOV_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_SetADSFOV_Statics::MultiplayerGun_eventSetADSFOV_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetADSFOV_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_SetADSFOV_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_SetADSFOV_Statics::MultiplayerGun_eventSetADSFOV_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_SetADSFOV()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_SetADSFOV_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execSetADSFOV)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewADSFOV);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetADSFOV(Z_Param_NewADSFOV);
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function SetADSFOV

// Begin Class AMultiplayerGun Function SetAmmoInMagazine
struct Z_Construct_UFunction_AMultiplayerGun_SetAmmoInMagazine_Statics
{
	struct MultiplayerGun_eventSetAmmoInMagazine_Parms
	{
		int32 NewAmmoInMagazine;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewAmmoInMagazine;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerGun_SetAmmoInMagazine_Statics::NewProp_NewAmmoInMagazine = { "NewAmmoInMagazine", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventSetAmmoInMagazine_Parms, NewAmmoInMagazine), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_SetAmmoInMagazine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_SetAmmoInMagazine_Statics::NewProp_NewAmmoInMagazine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetAmmoInMagazine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_SetAmmoInMagazine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "SetAmmoInMagazine", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_SetAmmoInMagazine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetAmmoInMagazine_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_SetAmmoInMagazine_Statics::MultiplayerGun_eventSetAmmoInMagazine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetAmmoInMagazine_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_SetAmmoInMagazine_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_SetAmmoInMagazine_Statics::MultiplayerGun_eventSetAmmoInMagazine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_SetAmmoInMagazine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_SetAmmoInMagazine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execSetAmmoInMagazine)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewAmmoInMagazine);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAmmoInMagazine(Z_Param_NewAmmoInMagazine);
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function SetAmmoInMagazine

// Begin Class AMultiplayerGun Function SetCaliberToUse
struct Z_Construct_UFunction_AMultiplayerGun_SetCaliberToUse_Statics
{
	struct MultiplayerGun_eventSetCaliberToUse_Parms
	{
		int32 NewCaliberToUse;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewCaliberToUse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerGun_SetCaliberToUse_Statics::NewProp_NewCaliberToUse = { "NewCaliberToUse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventSetCaliberToUse_Parms, NewCaliberToUse), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_SetCaliberToUse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_SetCaliberToUse_Statics::NewProp_NewCaliberToUse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetCaliberToUse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_SetCaliberToUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "SetCaliberToUse", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_SetCaliberToUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetCaliberToUse_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_SetCaliberToUse_Statics::MultiplayerGun_eventSetCaliberToUse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetCaliberToUse_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_SetCaliberToUse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_SetCaliberToUse_Statics::MultiplayerGun_eventSetCaliberToUse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_SetCaliberToUse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_SetCaliberToUse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execSetCaliberToUse)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewCaliberToUse);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCaliberToUse(Z_Param_NewCaliberToUse);
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function SetCaliberToUse

// Begin Class AMultiplayerGun Function SetCanShoot
struct Z_Construct_UFunction_AMultiplayerGun_SetCanShoot_Statics
{
	struct MultiplayerGun_eventSetCanShoot_Parms
	{
		bool NewCanShoot;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewCanShoot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewCanShoot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerGun_SetCanShoot_Statics::NewProp_NewCanShoot_SetBit(void* Obj)
{
	((MultiplayerGun_eventSetCanShoot_Parms*)Obj)->NewCanShoot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerGun_SetCanShoot_Statics::NewProp_NewCanShoot = { "NewCanShoot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerGun_eventSetCanShoot_Parms), &Z_Construct_UFunction_AMultiplayerGun_SetCanShoot_Statics::NewProp_NewCanShoot_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_SetCanShoot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_SetCanShoot_Statics::NewProp_NewCanShoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetCanShoot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_SetCanShoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "SetCanShoot", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_SetCanShoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetCanShoot_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_SetCanShoot_Statics::MultiplayerGun_eventSetCanShoot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetCanShoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_SetCanShoot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_SetCanShoot_Statics::MultiplayerGun_eventSetCanShoot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_SetCanShoot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_SetCanShoot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execSetCanShoot)
{
	P_GET_UBOOL(Z_Param_NewCanShoot);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCanShoot(Z_Param_NewCanShoot);
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function SetCanShoot

// Begin Class AMultiplayerGun Function SetChargeUpProgressTimeForTimeline
struct MultiplayerGun_eventSetChargeUpProgressTimeForTimeline_Parms
{
	float NewTime;
};
static const FName NAME_AMultiplayerGun_SetChargeUpProgressTimeForTimeline = FName(TEXT("SetChargeUpProgressTimeForTimeline"));
void AMultiplayerGun::SetChargeUpProgressTimeForTimeline(float NewTime)
{
	MultiplayerGun_eventSetChargeUpProgressTimeForTimeline_Parms Parms;
	Parms.NewTime=NewTime;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerGun_SetChargeUpProgressTimeForTimeline);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerGun_SetChargeUpProgressTimeForTimeline_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerGun_SetChargeUpProgressTimeForTimeline_Statics::NewProp_NewTime = { "NewTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventSetChargeUpProgressTimeForTimeline_Parms, NewTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_SetChargeUpProgressTimeForTimeline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_SetChargeUpProgressTimeForTimeline_Statics::NewProp_NewTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetChargeUpProgressTimeForTimeline_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_SetChargeUpProgressTimeForTimeline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "SetChargeUpProgressTimeForTimeline", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_SetChargeUpProgressTimeForTimeline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetChargeUpProgressTimeForTimeline_Statics::PropPointers), sizeof(MultiplayerGun_eventSetChargeUpProgressTimeForTimeline_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetChargeUpProgressTimeForTimeline_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_SetChargeUpProgressTimeForTimeline_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerGun_eventSetChargeUpProgressTimeForTimeline_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_SetChargeUpProgressTimeForTimeline()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_SetChargeUpProgressTimeForTimeline_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AMultiplayerGun Function SetChargeUpProgressTimeForTimeline

// Begin Class AMultiplayerGun Function SetChargeUpTime
struct Z_Construct_UFunction_AMultiplayerGun_SetChargeUpTime_Statics
{
	struct MultiplayerGun_eventSetChargeUpTime_Parms
	{
		float NewChargeUpTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewChargeUpTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerGun_SetChargeUpTime_Statics::NewProp_NewChargeUpTime = { "NewChargeUpTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventSetChargeUpTime_Parms, NewChargeUpTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_SetChargeUpTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_SetChargeUpTime_Statics::NewProp_NewChargeUpTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetChargeUpTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_SetChargeUpTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "SetChargeUpTime", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_SetChargeUpTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetChargeUpTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_SetChargeUpTime_Statics::MultiplayerGun_eventSetChargeUpTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetChargeUpTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_SetChargeUpTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_SetChargeUpTime_Statics::MultiplayerGun_eventSetChargeUpTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_SetChargeUpTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_SetChargeUpTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execSetChargeUpTime)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewChargeUpTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetChargeUpTime(Z_Param_NewChargeUpTime);
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function SetChargeUpTime

// Begin Class AMultiplayerGun Function SetCurrentChargeUpProgress
struct Z_Construct_UFunction_AMultiplayerGun_SetCurrentChargeUpProgress_Statics
{
	struct MultiplayerGun_eventSetCurrentChargeUpProgress_Parms
	{
		float NewCurrentChargeUpProgress;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewCurrentChargeUpProgress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerGun_SetCurrentChargeUpProgress_Statics::NewProp_NewCurrentChargeUpProgress = { "NewCurrentChargeUpProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventSetCurrentChargeUpProgress_Parms, NewCurrentChargeUpProgress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_SetCurrentChargeUpProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_SetCurrentChargeUpProgress_Statics::NewProp_NewCurrentChargeUpProgress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetCurrentChargeUpProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_SetCurrentChargeUpProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "SetCurrentChargeUpProgress", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_SetCurrentChargeUpProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetCurrentChargeUpProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_SetCurrentChargeUpProgress_Statics::MultiplayerGun_eventSetCurrentChargeUpProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetCurrentChargeUpProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_SetCurrentChargeUpProgress_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_SetCurrentChargeUpProgress_Statics::MultiplayerGun_eventSetCurrentChargeUpProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_SetCurrentChargeUpProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_SetCurrentChargeUpProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execSetCurrentChargeUpProgress)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewCurrentChargeUpProgress);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCurrentChargeUpProgress(Z_Param_NewCurrentChargeUpProgress);
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function SetCurrentChargeUpProgress

// Begin Class AMultiplayerGun Function SetDivideAimingFOV
struct Z_Construct_UFunction_AMultiplayerGun_SetDivideAimingFOV_Statics
{
	struct MultiplayerGun_eventSetDivideAimingFOV_Parms
	{
		bool NewDivideAimingFOV;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewDivideAimingFOV_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewDivideAimingFOV;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerGun_SetDivideAimingFOV_Statics::NewProp_NewDivideAimingFOV_SetBit(void* Obj)
{
	((MultiplayerGun_eventSetDivideAimingFOV_Parms*)Obj)->NewDivideAimingFOV = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerGun_SetDivideAimingFOV_Statics::NewProp_NewDivideAimingFOV = { "NewDivideAimingFOV", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerGun_eventSetDivideAimingFOV_Parms), &Z_Construct_UFunction_AMultiplayerGun_SetDivideAimingFOV_Statics::NewProp_NewDivideAimingFOV_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_SetDivideAimingFOV_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_SetDivideAimingFOV_Statics::NewProp_NewDivideAimingFOV,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetDivideAimingFOV_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_SetDivideAimingFOV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "SetDivideAimingFOV", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_SetDivideAimingFOV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetDivideAimingFOV_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_SetDivideAimingFOV_Statics::MultiplayerGun_eventSetDivideAimingFOV_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetDivideAimingFOV_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_SetDivideAimingFOV_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_SetDivideAimingFOV_Statics::MultiplayerGun_eventSetDivideAimingFOV_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_SetDivideAimingFOV()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_SetDivideAimingFOV_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execSetDivideAimingFOV)
{
	P_GET_UBOOL(Z_Param_NewDivideAimingFOV);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDivideAimingFOV(Z_Param_NewDivideAimingFOV);
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function SetDivideAimingFOV

// Begin Class AMultiplayerGun Function SetFireMode
struct Z_Construct_UFunction_AMultiplayerGun_SetFireMode_Statics
{
	struct MultiplayerGun_eventSetFireMode_Parms
	{
		int32 NewFireMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewFireMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerGun_SetFireMode_Statics::NewProp_NewFireMode = { "NewFireMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventSetFireMode_Parms, NewFireMode), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_SetFireMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_SetFireMode_Statics::NewProp_NewFireMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetFireMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_SetFireMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "SetFireMode", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_SetFireMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetFireMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_SetFireMode_Statics::MultiplayerGun_eventSetFireMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetFireMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_SetFireMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_SetFireMode_Statics::MultiplayerGun_eventSetFireMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_SetFireMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_SetFireMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execSetFireMode)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewFireMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFireMode(Z_Param_NewFireMode);
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function SetFireMode

// Begin Class AMultiplayerGun Function SetHasChargeUp
struct Z_Construct_UFunction_AMultiplayerGun_SetHasChargeUp_Statics
{
	struct MultiplayerGun_eventSetHasChargeUp_Parms
	{
		bool NewHasChargeup;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewHasChargeup_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewHasChargeup;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerGun_SetHasChargeUp_Statics::NewProp_NewHasChargeup_SetBit(void* Obj)
{
	((MultiplayerGun_eventSetHasChargeUp_Parms*)Obj)->NewHasChargeup = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerGun_SetHasChargeUp_Statics::NewProp_NewHasChargeup = { "NewHasChargeup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerGun_eventSetHasChargeUp_Parms), &Z_Construct_UFunction_AMultiplayerGun_SetHasChargeUp_Statics::NewProp_NewHasChargeup_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_SetHasChargeUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_SetHasChargeUp_Statics::NewProp_NewHasChargeup,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetHasChargeUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_SetHasChargeUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "SetHasChargeUp", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_SetHasChargeUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetHasChargeUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_SetHasChargeUp_Statics::MultiplayerGun_eventSetHasChargeUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetHasChargeUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_SetHasChargeUp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_SetHasChargeUp_Statics::MultiplayerGun_eventSetHasChargeUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_SetHasChargeUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_SetHasChargeUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execSetHasChargeUp)
{
	P_GET_UBOOL(Z_Param_NewHasChargeup);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHasChargeUp(Z_Param_NewHasChargeup);
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function SetHasChargeUp

// Begin Class AMultiplayerGun Function SetHitMarkerActorSounds
struct Z_Construct_UFunction_AMultiplayerGun_SetHitMarkerActorSounds_Statics
{
	struct MultiplayerGun_eventSetHitMarkerActorSounds_Parms
	{
		TMap<TSubclassOf<AActor> ,USoundBase*> NewHitMarkerActorSounds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewHitMarkerActorSounds_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_NewHitMarkerActorSounds_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_NewHitMarkerActorSounds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerGun_SetHitMarkerActorSounds_Statics::NewProp_NewHitMarkerActorSounds_ValueProp = { "NewHitMarkerActorSounds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AMultiplayerGun_SetHitMarkerActorSounds_Statics::NewProp_NewHitMarkerActorSounds_Key_KeyProp = { "NewHitMarkerActorSounds_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_AMultiplayerGun_SetHitMarkerActorSounds_Statics::NewProp_NewHitMarkerActorSounds = { "NewHitMarkerActorSounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventSetHitMarkerActorSounds_Parms, NewHitMarkerActorSounds), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_SetHitMarkerActorSounds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_SetHitMarkerActorSounds_Statics::NewProp_NewHitMarkerActorSounds_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_SetHitMarkerActorSounds_Statics::NewProp_NewHitMarkerActorSounds_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_SetHitMarkerActorSounds_Statics::NewProp_NewHitMarkerActorSounds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetHitMarkerActorSounds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_SetHitMarkerActorSounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "SetHitMarkerActorSounds", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_SetHitMarkerActorSounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetHitMarkerActorSounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_SetHitMarkerActorSounds_Statics::MultiplayerGun_eventSetHitMarkerActorSounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetHitMarkerActorSounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_SetHitMarkerActorSounds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_SetHitMarkerActorSounds_Statics::MultiplayerGun_eventSetHitMarkerActorSounds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_SetHitMarkerActorSounds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_SetHitMarkerActorSounds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execSetHitMarkerActorSounds)
{
	P_GET_TMAP(TSubclassOf<AActor>,USoundBase*,Z_Param_NewHitMarkerActorSounds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHitMarkerActorSounds(Z_Param_NewHitMarkerActorSounds);
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function SetHitMarkerActorSounds

// Begin Class AMultiplayerGun Function SetHitMarkerSurfaceSounds
struct Z_Construct_UFunction_AMultiplayerGun_SetHitMarkerSurfaceSounds_Statics
{
	struct MultiplayerGun_eventSetHitMarkerSurfaceSounds_Parms
	{
		TMap<UPhysicalMaterial*,USoundBase*> NewHitMarkerSurfaceSounds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewHitMarkerSurfaceSounds_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewHitMarkerSurfaceSounds_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_NewHitMarkerSurfaceSounds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerGun_SetHitMarkerSurfaceSounds_Statics::NewProp_NewHitMarkerSurfaceSounds_ValueProp = { "NewHitMarkerSurfaceSounds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerGun_SetHitMarkerSurfaceSounds_Statics::NewProp_NewHitMarkerSurfaceSounds_Key_KeyProp = { "NewHitMarkerSurfaceSounds_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_AMultiplayerGun_SetHitMarkerSurfaceSounds_Statics::NewProp_NewHitMarkerSurfaceSounds = { "NewHitMarkerSurfaceSounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventSetHitMarkerSurfaceSounds_Parms, NewHitMarkerSurfaceSounds), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_SetHitMarkerSurfaceSounds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_SetHitMarkerSurfaceSounds_Statics::NewProp_NewHitMarkerSurfaceSounds_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_SetHitMarkerSurfaceSounds_Statics::NewProp_NewHitMarkerSurfaceSounds_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_SetHitMarkerSurfaceSounds_Statics::NewProp_NewHitMarkerSurfaceSounds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetHitMarkerSurfaceSounds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_SetHitMarkerSurfaceSounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "SetHitMarkerSurfaceSounds", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_SetHitMarkerSurfaceSounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetHitMarkerSurfaceSounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_SetHitMarkerSurfaceSounds_Statics::MultiplayerGun_eventSetHitMarkerSurfaceSounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetHitMarkerSurfaceSounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_SetHitMarkerSurfaceSounds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_SetHitMarkerSurfaceSounds_Statics::MultiplayerGun_eventSetHitMarkerSurfaceSounds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_SetHitMarkerSurfaceSounds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_SetHitMarkerSurfaceSounds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execSetHitMarkerSurfaceSounds)
{
	P_GET_TMAP(UPhysicalMaterial*,USoundBase*,Z_Param_NewHitMarkerSurfaceSounds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHitMarkerSurfaceSounds(Z_Param_NewHitMarkerSurfaceSounds);
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function SetHitMarkerSurfaceSounds

// Begin Class AMultiplayerGun Function SetHoldTriggerDuringChargeUp
struct Z_Construct_UFunction_AMultiplayerGun_SetHoldTriggerDuringChargeUp_Statics
{
	struct MultiplayerGun_eventSetHoldTriggerDuringChargeUp_Parms
	{
		bool NewHoldTriggerDuringChargeUp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewHoldTriggerDuringChargeUp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewHoldTriggerDuringChargeUp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerGun_SetHoldTriggerDuringChargeUp_Statics::NewProp_NewHoldTriggerDuringChargeUp_SetBit(void* Obj)
{
	((MultiplayerGun_eventSetHoldTriggerDuringChargeUp_Parms*)Obj)->NewHoldTriggerDuringChargeUp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerGun_SetHoldTriggerDuringChargeUp_Statics::NewProp_NewHoldTriggerDuringChargeUp = { "NewHoldTriggerDuringChargeUp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerGun_eventSetHoldTriggerDuringChargeUp_Parms), &Z_Construct_UFunction_AMultiplayerGun_SetHoldTriggerDuringChargeUp_Statics::NewProp_NewHoldTriggerDuringChargeUp_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_SetHoldTriggerDuringChargeUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_SetHoldTriggerDuringChargeUp_Statics::NewProp_NewHoldTriggerDuringChargeUp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetHoldTriggerDuringChargeUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_SetHoldTriggerDuringChargeUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "SetHoldTriggerDuringChargeUp", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_SetHoldTriggerDuringChargeUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetHoldTriggerDuringChargeUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_SetHoldTriggerDuringChargeUp_Statics::MultiplayerGun_eventSetHoldTriggerDuringChargeUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetHoldTriggerDuringChargeUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_SetHoldTriggerDuringChargeUp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_SetHoldTriggerDuringChargeUp_Statics::MultiplayerGun_eventSetHoldTriggerDuringChargeUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_SetHoldTriggerDuringChargeUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_SetHoldTriggerDuringChargeUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execSetHoldTriggerDuringChargeUp)
{
	P_GET_UBOOL(Z_Param_NewHoldTriggerDuringChargeUp);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHoldTriggerDuringChargeUp(Z_Param_NewHoldTriggerDuringChargeUp);
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function SetHoldTriggerDuringChargeUp

// Begin Class AMultiplayerGun Function SetInfiniteAmmo
struct Z_Construct_UFunction_AMultiplayerGun_SetInfiniteAmmo_Statics
{
	struct MultiplayerGun_eventSetInfiniteAmmo_Parms
	{
		int32 NewInfiniteAmmo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewInfiniteAmmo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerGun_SetInfiniteAmmo_Statics::NewProp_NewInfiniteAmmo = { "NewInfiniteAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventSetInfiniteAmmo_Parms, NewInfiniteAmmo), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_SetInfiniteAmmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_SetInfiniteAmmo_Statics::NewProp_NewInfiniteAmmo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetInfiniteAmmo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_SetInfiniteAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "SetInfiniteAmmo", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_SetInfiniteAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetInfiniteAmmo_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_SetInfiniteAmmo_Statics::MultiplayerGun_eventSetInfiniteAmmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetInfiniteAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_SetInfiniteAmmo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_SetInfiniteAmmo_Statics::MultiplayerGun_eventSetInfiniteAmmo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_SetInfiniteAmmo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_SetInfiniteAmmo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execSetInfiniteAmmo)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewInfiniteAmmo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInfiniteAmmo(Z_Param_NewInfiniteAmmo);
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function SetInfiniteAmmo

// Begin Class AMultiplayerGun Function SetIsExplosive
struct Z_Construct_UFunction_AMultiplayerGun_SetIsExplosive_Statics
{
	struct MultiplayerGun_eventSetIsExplosive_Parms
	{
		bool NewIsExplosive;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewIsExplosive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewIsExplosive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerGun_SetIsExplosive_Statics::NewProp_NewIsExplosive_SetBit(void* Obj)
{
	((MultiplayerGun_eventSetIsExplosive_Parms*)Obj)->NewIsExplosive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerGun_SetIsExplosive_Statics::NewProp_NewIsExplosive = { "NewIsExplosive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerGun_eventSetIsExplosive_Parms), &Z_Construct_UFunction_AMultiplayerGun_SetIsExplosive_Statics::NewProp_NewIsExplosive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_SetIsExplosive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_SetIsExplosive_Statics::NewProp_NewIsExplosive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetIsExplosive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_SetIsExplosive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "SetIsExplosive", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_SetIsExplosive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetIsExplosive_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_SetIsExplosive_Statics::MultiplayerGun_eventSetIsExplosive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetIsExplosive_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_SetIsExplosive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_SetIsExplosive_Statics::MultiplayerGun_eventSetIsExplosive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_SetIsExplosive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_SetIsExplosive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execSetIsExplosive)
{
	P_GET_UBOOL(Z_Param_NewIsExplosive);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsExplosive(Z_Param_NewIsExplosive);
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function SetIsExplosive

// Begin Class AMultiplayerGun Function SetManuallySetGunLocation
struct Z_Construct_UFunction_AMultiplayerGun_SetManuallySetGunLocation_Statics
{
	struct MultiplayerGun_eventSetManuallySetGunLocation_Parms
	{
		bool NewManuallySetGunLocation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewManuallySetGunLocation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewManuallySetGunLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerGun_SetManuallySetGunLocation_Statics::NewProp_NewManuallySetGunLocation_SetBit(void* Obj)
{
	((MultiplayerGun_eventSetManuallySetGunLocation_Parms*)Obj)->NewManuallySetGunLocation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerGun_SetManuallySetGunLocation_Statics::NewProp_NewManuallySetGunLocation = { "NewManuallySetGunLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerGun_eventSetManuallySetGunLocation_Parms), &Z_Construct_UFunction_AMultiplayerGun_SetManuallySetGunLocation_Statics::NewProp_NewManuallySetGunLocation_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_SetManuallySetGunLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_SetManuallySetGunLocation_Statics::NewProp_NewManuallySetGunLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetManuallySetGunLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_SetManuallySetGunLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "SetManuallySetGunLocation", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_SetManuallySetGunLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetManuallySetGunLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_SetManuallySetGunLocation_Statics::MultiplayerGun_eventSetManuallySetGunLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetManuallySetGunLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_SetManuallySetGunLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_SetManuallySetGunLocation_Statics::MultiplayerGun_eventSetManuallySetGunLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_SetManuallySetGunLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_SetManuallySetGunLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execSetManuallySetGunLocation)
{
	P_GET_UBOOL(Z_Param_NewManuallySetGunLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetManuallySetGunLocation(Z_Param_NewManuallySetGunLocation);
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function SetManuallySetGunLocation

// Begin Class AMultiplayerGun Function SetOwningPlayer
struct Z_Construct_UFunction_AMultiplayerGun_SetOwningPlayer_Statics
{
	struct MultiplayerGun_eventSetOwningPlayer_Parms
	{
		APawn* NewOwningPlayer;
		int32 ReplicationMethod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ClampMax", "4" },
		{ "ClampMin", "0" },
		{ "CPP_Default_ReplicationMethod", "0" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "For ReplicationMethod 0 = Not replicated, 1 = Server only, 2 = Multicast only, 3 = Both server and multicast, 4 = Server if client and multicast if host" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewOwningPlayer;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReplicationMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerGun_SetOwningPlayer_Statics::NewProp_NewOwningPlayer = { "NewOwningPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventSetOwningPlayer_Parms, NewOwningPlayer), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerGun_SetOwningPlayer_Statics::NewProp_ReplicationMethod = { "ReplicationMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventSetOwningPlayer_Parms, ReplicationMethod), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_SetOwningPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_SetOwningPlayer_Statics::NewProp_NewOwningPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_SetOwningPlayer_Statics::NewProp_ReplicationMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetOwningPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_SetOwningPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "SetOwningPlayer", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_SetOwningPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetOwningPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_SetOwningPlayer_Statics::MultiplayerGun_eventSetOwningPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetOwningPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_SetOwningPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_SetOwningPlayer_Statics::MultiplayerGun_eventSetOwningPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_SetOwningPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_SetOwningPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execSetOwningPlayer)
{
	P_GET_OBJECT(APawn,Z_Param_NewOwningPlayer);
	P_GET_PROPERTY(FIntProperty,Z_Param_ReplicationMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOwningPlayer(Z_Param_NewOwningPlayer,Z_Param_ReplicationMethod);
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function SetOwningPlayer

// Begin Class AMultiplayerGun Function SetPickupCollisionEnabled
struct Z_Construct_UFunction_AMultiplayerGun_SetPickupCollisionEnabled_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_SetPickupCollisionEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "SetPickupCollisionEnabled", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetPickupCollisionEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_SetPickupCollisionEnabled_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerGun_SetPickupCollisionEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_SetPickupCollisionEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execSetPickupCollisionEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPickupCollisionEnabled();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function SetPickupCollisionEnabled

// Begin Class AMultiplayerGun Function SetReloadGunSound
struct Z_Construct_UFunction_AMultiplayerGun_SetReloadGunSound_Statics
{
	struct MultiplayerGun_eventSetReloadGunSound_Parms
	{
		USoundBase* NewReloadGunSound;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewReloadGunSound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerGun_SetReloadGunSound_Statics::NewProp_NewReloadGunSound = { "NewReloadGunSound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventSetReloadGunSound_Parms, NewReloadGunSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_SetReloadGunSound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_SetReloadGunSound_Statics::NewProp_NewReloadGunSound,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetReloadGunSound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_SetReloadGunSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "SetReloadGunSound", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_SetReloadGunSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetReloadGunSound_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_SetReloadGunSound_Statics::MultiplayerGun_eventSetReloadGunSound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetReloadGunSound_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_SetReloadGunSound_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_SetReloadGunSound_Statics::MultiplayerGun_eventSetReloadGunSound_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_SetReloadGunSound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_SetReloadGunSound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execSetReloadGunSound)
{
	P_GET_OBJECT(USoundBase,Z_Param_NewReloadGunSound);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetReloadGunSound(Z_Param_NewReloadGunSound);
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function SetReloadGunSound

// Begin Class AMultiplayerGun Function SetSocketName
struct Z_Construct_UFunction_AMultiplayerGun_SetSocketName_Statics
{
	struct MultiplayerGun_eventSetSocketName_Parms
	{
		FName NewSocketName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_NewSocketName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AMultiplayerGun_SetSocketName_Statics::NewProp_NewSocketName = { "NewSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventSetSocketName_Parms, NewSocketName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_SetSocketName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_SetSocketName_Statics::NewProp_NewSocketName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetSocketName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_SetSocketName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "SetSocketName", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_SetSocketName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetSocketName_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_SetSocketName_Statics::MultiplayerGun_eventSetSocketName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetSocketName_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_SetSocketName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_SetSocketName_Statics::MultiplayerGun_eventSetSocketName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_SetSocketName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_SetSocketName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execSetSocketName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_NewSocketName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSocketName(Z_Param_NewSocketName);
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function SetSocketName

// Begin Class AMultiplayerGun Function SetSwitchPerspectiveWhenAiming
struct Z_Construct_UFunction_AMultiplayerGun_SetSwitchPerspectiveWhenAiming_Statics
{
	struct MultiplayerGun_eventSetSwitchPerspectiveWhenAiming_Parms
	{
		TEnumAsByte<EAimSwitchPerspectiveType> NewSwitchPerspectiveWhenAiming;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewSwitchPerspectiveWhenAiming;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMultiplayerGun_SetSwitchPerspectiveWhenAiming_Statics::NewProp_NewSwitchPerspectiveWhenAiming = { "NewSwitchPerspectiveWhenAiming", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventSetSwitchPerspectiveWhenAiming_Parms, NewSwitchPerspectiveWhenAiming), Z_Construct_UEnum_MultiplayerFPS_EAimSwitchPerspectiveType, METADATA_PARAMS(0, nullptr) }; // 1846365563
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_SetSwitchPerspectiveWhenAiming_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_SetSwitchPerspectiveWhenAiming_Statics::NewProp_NewSwitchPerspectiveWhenAiming,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetSwitchPerspectiveWhenAiming_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_SetSwitchPerspectiveWhenAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "SetSwitchPerspectiveWhenAiming", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_SetSwitchPerspectiveWhenAiming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetSwitchPerspectiveWhenAiming_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_SetSwitchPerspectiveWhenAiming_Statics::MultiplayerGun_eventSetSwitchPerspectiveWhenAiming_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetSwitchPerspectiveWhenAiming_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_SetSwitchPerspectiveWhenAiming_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_SetSwitchPerspectiveWhenAiming_Statics::MultiplayerGun_eventSetSwitchPerspectiveWhenAiming_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_SetSwitchPerspectiveWhenAiming()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_SetSwitchPerspectiveWhenAiming_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execSetSwitchPerspectiveWhenAiming)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_NewSwitchPerspectiveWhenAiming);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSwitchPerspectiveWhenAiming(EAimSwitchPerspectiveType(Z_Param_NewSwitchPerspectiveWhenAiming));
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function SetSwitchPerspectiveWhenAiming

// Begin Class AMultiplayerGun Function SetTimeToADS
struct Z_Construct_UFunction_AMultiplayerGun_SetTimeToADS_Statics
{
	struct MultiplayerGun_eventSetTimeToADS_Parms
	{
		float NewTimeToADS;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewTimeToADS;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerGun_SetTimeToADS_Statics::NewProp_NewTimeToADS = { "NewTimeToADS", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventSetTimeToADS_Parms, NewTimeToADS), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_SetTimeToADS_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_SetTimeToADS_Statics::NewProp_NewTimeToADS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetTimeToADS_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_SetTimeToADS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "SetTimeToADS", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_SetTimeToADS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetTimeToADS_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_SetTimeToADS_Statics::MultiplayerGun_eventSetTimeToADS_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetTimeToADS_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_SetTimeToADS_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_SetTimeToADS_Statics::MultiplayerGun_eventSetTimeToADS_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_SetTimeToADS()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_SetTimeToADS_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execSetTimeToADS)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewTimeToADS);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTimeToADS(Z_Param_NewTimeToADS);
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function SetTimeToADS

// Begin Class AMultiplayerGun Function SetTimeToZoom
struct Z_Construct_UFunction_AMultiplayerGun_SetTimeToZoom_Statics
{
	struct MultiplayerGun_eventSetTimeToZoom_Parms
	{
		float NewTimeToZoom;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewTimeToZoom;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerGun_SetTimeToZoom_Statics::NewProp_NewTimeToZoom = { "NewTimeToZoom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventSetTimeToZoom_Parms, NewTimeToZoom), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_SetTimeToZoom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_SetTimeToZoom_Statics::NewProp_NewTimeToZoom,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetTimeToZoom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_SetTimeToZoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "SetTimeToZoom", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_SetTimeToZoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetTimeToZoom_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_SetTimeToZoom_Statics::MultiplayerGun_eventSetTimeToZoom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetTimeToZoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_SetTimeToZoom_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_SetTimeToZoom_Statics::MultiplayerGun_eventSetTimeToZoom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_SetTimeToZoom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_SetTimeToZoom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execSetTimeToZoom)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewTimeToZoom);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTimeToZoom(Z_Param_NewTimeToZoom);
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function SetTimeToZoom

// Begin Class AMultiplayerGun Function SetUseActorClassesForHitMarkers
struct Z_Construct_UFunction_AMultiplayerGun_SetUseActorClassesForHitMarkers_Statics
{
	struct MultiplayerGun_eventSetUseActorClassesForHitMarkers_Parms
	{
		int32 NewUseActorClassesForHitMarkers;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewUseActorClassesForHitMarkers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerGun_SetUseActorClassesForHitMarkers_Statics::NewProp_NewUseActorClassesForHitMarkers = { "NewUseActorClassesForHitMarkers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventSetUseActorClassesForHitMarkers_Parms, NewUseActorClassesForHitMarkers), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_SetUseActorClassesForHitMarkers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_SetUseActorClassesForHitMarkers_Statics::NewProp_NewUseActorClassesForHitMarkers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetUseActorClassesForHitMarkers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_SetUseActorClassesForHitMarkers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "SetUseActorClassesForHitMarkers", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_SetUseActorClassesForHitMarkers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetUseActorClassesForHitMarkers_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_SetUseActorClassesForHitMarkers_Statics::MultiplayerGun_eventSetUseActorClassesForHitMarkers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetUseActorClassesForHitMarkers_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_SetUseActorClassesForHitMarkers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_SetUseActorClassesForHitMarkers_Statics::MultiplayerGun_eventSetUseActorClassesForHitMarkers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_SetUseActorClassesForHitMarkers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_SetUseActorClassesForHitMarkers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execSetUseActorClassesForHitMarkers)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewUseActorClassesForHitMarkers);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUseActorClassesForHitMarkers(Z_Param_NewUseActorClassesForHitMarkers);
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function SetUseActorClassesForHitMarkers

// Begin Class AMultiplayerGun Function SetUseADS
struct Z_Construct_UFunction_AMultiplayerGun_SetUseADS_Statics
{
	struct MultiplayerGun_eventSetUseADS_Parms
	{
		int32 NewUseADS;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewUseADS;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerGun_SetUseADS_Statics::NewProp_NewUseADS = { "NewUseADS", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventSetUseADS_Parms, NewUseADS), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_SetUseADS_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_SetUseADS_Statics::NewProp_NewUseADS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetUseADS_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_SetUseADS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "SetUseADS", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_SetUseADS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetUseADS_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_SetUseADS_Statics::MultiplayerGun_eventSetUseADS_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetUseADS_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_SetUseADS_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_SetUseADS_Statics::MultiplayerGun_eventSetUseADS_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_SetUseADS()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_SetUseADS_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execSetUseADS)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewUseADS);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUseADS(Z_Param_NewUseADS);
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function SetUseADS

// Begin Class AMultiplayerGun Function SetUseSharedCalibers
struct Z_Construct_UFunction_AMultiplayerGun_SetUseSharedCalibers_Statics
{
	struct MultiplayerGun_eventSetUseSharedCalibers_Parms
	{
		bool NewUseSharedCalibers;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewUseSharedCalibers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewUseSharedCalibers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerGun_SetUseSharedCalibers_Statics::NewProp_NewUseSharedCalibers_SetBit(void* Obj)
{
	((MultiplayerGun_eventSetUseSharedCalibers_Parms*)Obj)->NewUseSharedCalibers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerGun_SetUseSharedCalibers_Statics::NewProp_NewUseSharedCalibers = { "NewUseSharedCalibers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerGun_eventSetUseSharedCalibers_Parms), &Z_Construct_UFunction_AMultiplayerGun_SetUseSharedCalibers_Statics::NewProp_NewUseSharedCalibers_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_SetUseSharedCalibers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_SetUseSharedCalibers_Statics::NewProp_NewUseSharedCalibers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetUseSharedCalibers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_SetUseSharedCalibers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "SetUseSharedCalibers", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_SetUseSharedCalibers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetUseSharedCalibers_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_SetUseSharedCalibers_Statics::MultiplayerGun_eventSetUseSharedCalibers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetUseSharedCalibers_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_SetUseSharedCalibers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_SetUseSharedCalibers_Statics::MultiplayerGun_eventSetUseSharedCalibers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_SetUseSharedCalibers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_SetUseSharedCalibers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execSetUseSharedCalibers)
{
	P_GET_UBOOL(Z_Param_NewUseSharedCalibers);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUseSharedCalibers(Z_Param_NewUseSharedCalibers);
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function SetUseSharedCalibers

// Begin Class AMultiplayerGun Function SetUsingThirdPerson
struct Z_Construct_UFunction_AMultiplayerGun_SetUsingThirdPerson_Statics
{
	struct MultiplayerGun_eventSetUsingThirdPerson_Parms
	{
		bool NewUsingThirdPerson;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewUsingThirdPerson_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewUsingThirdPerson;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerGun_SetUsingThirdPerson_Statics::NewProp_NewUsingThirdPerson_SetBit(void* Obj)
{
	((MultiplayerGun_eventSetUsingThirdPerson_Parms*)Obj)->NewUsingThirdPerson = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerGun_SetUsingThirdPerson_Statics::NewProp_NewUsingThirdPerson = { "NewUsingThirdPerson", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerGun_eventSetUsingThirdPerson_Parms), &Z_Construct_UFunction_AMultiplayerGun_SetUsingThirdPerson_Statics::NewProp_NewUsingThirdPerson_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_SetUsingThirdPerson_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_SetUsingThirdPerson_Statics::NewProp_NewUsingThirdPerson,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetUsingThirdPerson_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_SetUsingThirdPerson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "SetUsingThirdPerson", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_SetUsingThirdPerson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetUsingThirdPerson_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_SetUsingThirdPerson_Statics::MultiplayerGun_eventSetUsingThirdPerson_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetUsingThirdPerson_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_SetUsingThirdPerson_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_SetUsingThirdPerson_Statics::MultiplayerGun_eventSetUsingThirdPerson_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_SetUsingThirdPerson()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_SetUsingThirdPerson_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execSetUsingThirdPerson)
{
	P_GET_UBOOL(Z_Param_NewUsingThirdPerson);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUsingThirdPerson(Z_Param_NewUsingThirdPerson);
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function SetUsingThirdPerson

// Begin Class AMultiplayerGun Function SetWasPickedup
struct Z_Construct_UFunction_AMultiplayerGun_SetWasPickedup_Statics
{
	struct MultiplayerGun_eventSetWasPickedup_Parms
	{
		bool Pickedup;
		UPrimitiveComponent* ComponentToAttachTo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "CPP_Default_ComponentToAttachTo", "None" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentToAttachTo_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static void NewProp_Pickedup_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Pickedup;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComponentToAttachTo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerGun_SetWasPickedup_Statics::NewProp_Pickedup_SetBit(void* Obj)
{
	((MultiplayerGun_eventSetWasPickedup_Parms*)Obj)->Pickedup = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerGun_SetWasPickedup_Statics::NewProp_Pickedup = { "Pickedup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerGun_eventSetWasPickedup_Parms), &Z_Construct_UFunction_AMultiplayerGun_SetWasPickedup_Statics::NewProp_Pickedup_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerGun_SetWasPickedup_Statics::NewProp_ComponentToAttachTo = { "ComponentToAttachTo", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventSetWasPickedup_Parms, ComponentToAttachTo), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentToAttachTo_MetaData), NewProp_ComponentToAttachTo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_SetWasPickedup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_SetWasPickedup_Statics::NewProp_Pickedup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_SetWasPickedup_Statics::NewProp_ComponentToAttachTo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetWasPickedup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_SetWasPickedup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "SetWasPickedup", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_SetWasPickedup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetWasPickedup_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_SetWasPickedup_Statics::MultiplayerGun_eventSetWasPickedup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetWasPickedup_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_SetWasPickedup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_SetWasPickedup_Statics::MultiplayerGun_eventSetWasPickedup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_SetWasPickedup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_SetWasPickedup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execSetWasPickedup)
{
	P_GET_UBOOL(Z_Param_Pickedup);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_ComponentToAttachTo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWasPickedup(Z_Param_Pickedup,Z_Param_ComponentToAttachTo);
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function SetWasPickedup

// Begin Class AMultiplayerGun Function SetWasPickedup_BP
struct MultiplayerGun_eventSetWasPickedup_BP_Parms
{
	bool Pickedup;
	UPrimitiveComponent* ComponentToAttachTo;
};
static const FName NAME_AMultiplayerGun_SetWasPickedup_BP = FName(TEXT("SetWasPickedup_BP"));
void AMultiplayerGun::SetWasPickedup_BP(bool Pickedup, UPrimitiveComponent* ComponentToAttachTo)
{
	MultiplayerGun_eventSetWasPickedup_BP_Parms Parms;
	Parms.Pickedup=Pickedup ? true : false;
	Parms.ComponentToAttachTo=ComponentToAttachTo;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerGun_SetWasPickedup_BP);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerGun_SetWasPickedup_BP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "CPP_Default_ComponentToAttachTo", "None" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentToAttachTo_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static void NewProp_Pickedup_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Pickedup;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComponentToAttachTo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerGun_SetWasPickedup_BP_Statics::NewProp_Pickedup_SetBit(void* Obj)
{
	((MultiplayerGun_eventSetWasPickedup_BP_Parms*)Obj)->Pickedup = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerGun_SetWasPickedup_BP_Statics::NewProp_Pickedup = { "Pickedup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerGun_eventSetWasPickedup_BP_Parms), &Z_Construct_UFunction_AMultiplayerGun_SetWasPickedup_BP_Statics::NewProp_Pickedup_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerGun_SetWasPickedup_BP_Statics::NewProp_ComponentToAttachTo = { "ComponentToAttachTo", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventSetWasPickedup_BP_Parms, ComponentToAttachTo), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentToAttachTo_MetaData), NewProp_ComponentToAttachTo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_SetWasPickedup_BP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_SetWasPickedup_BP_Statics::NewProp_Pickedup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_SetWasPickedup_BP_Statics::NewProp_ComponentToAttachTo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetWasPickedup_BP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_SetWasPickedup_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "SetWasPickedup_BP", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_SetWasPickedup_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetWasPickedup_BP_Statics::PropPointers), sizeof(MultiplayerGun_eventSetWasPickedup_BP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetWasPickedup_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_SetWasPickedup_BP_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerGun_eventSetWasPickedup_BP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_SetWasPickedup_BP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_SetWasPickedup_BP_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AMultiplayerGun Function SetWasPickedup_BP

// Begin Class AMultiplayerGun Function SetZoomArmsLocation
struct Z_Construct_UFunction_AMultiplayerGun_SetZoomArmsLocation_Statics
{
	struct MultiplayerGun_eventSetZoomArmsLocation_Parms
	{
		FVector NewZoomArmsLocation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewZoomArmsLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerGun_SetZoomArmsLocation_Statics::NewProp_NewZoomArmsLocation = { "NewZoomArmsLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventSetZoomArmsLocation_Parms, NewZoomArmsLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_SetZoomArmsLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_SetZoomArmsLocation_Statics::NewProp_NewZoomArmsLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetZoomArmsLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_SetZoomArmsLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "SetZoomArmsLocation", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_SetZoomArmsLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetZoomArmsLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_SetZoomArmsLocation_Statics::MultiplayerGun_eventSetZoomArmsLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetZoomArmsLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_SetZoomArmsLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_SetZoomArmsLocation_Statics::MultiplayerGun_eventSetZoomArmsLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_SetZoomArmsLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_SetZoomArmsLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execSetZoomArmsLocation)
{
	P_GET_STRUCT(FVector,Z_Param_NewZoomArmsLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetZoomArmsLocation(Z_Param_NewZoomArmsLocation);
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function SetZoomArmsLocation

// Begin Class AMultiplayerGun Function SetZoomArmsRotation
struct Z_Construct_UFunction_AMultiplayerGun_SetZoomArmsRotation_Statics
{
	struct MultiplayerGun_eventSetZoomArmsRotation_Parms
	{
		FRotator NewZoomArmsRotation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewZoomArmsRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerGun_SetZoomArmsRotation_Statics::NewProp_NewZoomArmsRotation = { "NewZoomArmsRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventSetZoomArmsRotation_Parms, NewZoomArmsRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_SetZoomArmsRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_SetZoomArmsRotation_Statics::NewProp_NewZoomArmsRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetZoomArmsRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_SetZoomArmsRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "SetZoomArmsRotation", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_SetZoomArmsRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetZoomArmsRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_SetZoomArmsRotation_Statics::MultiplayerGun_eventSetZoomArmsRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetZoomArmsRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_SetZoomArmsRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_SetZoomArmsRotation_Statics::MultiplayerGun_eventSetZoomArmsRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_SetZoomArmsRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_SetZoomArmsRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execSetZoomArmsRotation)
{
	P_GET_STRUCT(FRotator,Z_Param_NewZoomArmsRotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetZoomArmsRotation(Z_Param_NewZoomArmsRotation);
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function SetZoomArmsRotation

// Begin Class AMultiplayerGun Function SetZoomFOV
struct Z_Construct_UFunction_AMultiplayerGun_SetZoomFOV_Statics
{
	struct MultiplayerGun_eventSetZoomFOV_Parms
	{
		float NewZoomFOV;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewZoomFOV;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerGun_SetZoomFOV_Statics::NewProp_NewZoomFOV = { "NewZoomFOV", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventSetZoomFOV_Parms, NewZoomFOV), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_SetZoomFOV_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_SetZoomFOV_Statics::NewProp_NewZoomFOV,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetZoomFOV_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_SetZoomFOV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "SetZoomFOV", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_SetZoomFOV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetZoomFOV_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_SetZoomFOV_Statics::MultiplayerGun_eventSetZoomFOV_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SetZoomFOV_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_SetZoomFOV_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_SetZoomFOV_Statics::MultiplayerGun_eventSetZoomFOV_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_SetZoomFOV()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_SetZoomFOV_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execSetZoomFOV)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewZoomFOV);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetZoomFOV(Z_Param_NewZoomFOV);
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function SetZoomFOV

// Begin Class AMultiplayerGun Function ShotgunFire
struct Z_Construct_UFunction_AMultiplayerGun_ShotgunFire_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_ShotgunFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "ShotgunFire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_ShotgunFire_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_ShotgunFire_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerGun_ShotgunFire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_ShotgunFire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execShotgunFire)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShotgunFire();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function ShotgunFire

// Begin Class AMultiplayerGun Function SpawnBulletCasing
static const FName NAME_AMultiplayerGun_SpawnBulletCasing = FName(TEXT("SpawnBulletCasing"));
void AMultiplayerGun::SpawnBulletCasing()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerGun_SpawnBulletCasing);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerGun_SpawnBulletCasing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_SpawnBulletCasing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "SpawnBulletCasing", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SpawnBulletCasing_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_SpawnBulletCasing_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerGun_SpawnBulletCasing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_SpawnBulletCasing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execSpawnBulletCasing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnBulletCasing_Implementation();
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function SpawnBulletCasing

// Begin Class AMultiplayerGun Function SpawnProjectile
struct MultiplayerGun_eventSpawnProjectile_Parms
{
	FVector FireLocation;
	FRotator FireRotation;
	FVector TraceDirection;
};
static const FName NAME_AMultiplayerGun_SpawnProjectile = FName(TEXT("SpawnProjectile"));
void AMultiplayerGun::SpawnProjectile(FVector FireLocation, FRotator FireRotation, FVector TraceDirection)
{
	MultiplayerGun_eventSpawnProjectile_Parms Parms;
	Parms.FireLocation=FireLocation;
	Parms.FireRotation=FireRotation;
	Parms.TraceDirection=TraceDirection;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerGun_SpawnProjectile);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerGun_SpawnProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FireLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FireRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerGun_SpawnProjectile_Statics::NewProp_FireLocation = { "FireLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventSpawnProjectile_Parms, FireLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerGun_SpawnProjectile_Statics::NewProp_FireRotation = { "FireRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventSpawnProjectile_Parms, FireRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerGun_SpawnProjectile_Statics::NewProp_TraceDirection = { "TraceDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGun_eventSpawnProjectile_Parms, TraceDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_SpawnProjectile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_SpawnProjectile_Statics::NewProp_FireLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_SpawnProjectile_Statics::NewProp_FireRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_SpawnProjectile_Statics::NewProp_TraceDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SpawnProjectile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_SpawnProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "SpawnProjectile", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_SpawnProjectile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SpawnProjectile_Statics::PropPointers), sizeof(MultiplayerGun_eventSpawnProjectile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04A20CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SpawnProjectile_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_SpawnProjectile_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerGun_eventSpawnProjectile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_SpawnProjectile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_SpawnProjectile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execSpawnProjectile)
{
	P_GET_STRUCT(FVector,Z_Param_FireLocation);
	P_GET_STRUCT(FRotator,Z_Param_FireRotation);
	P_GET_STRUCT(FVector,Z_Param_TraceDirection);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnProjectile_Implementation(Z_Param_FireLocation,Z_Param_FireRotation,Z_Param_TraceDirection);
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function SpawnProjectile

// Begin Class AMultiplayerGun Function SpawnSmokeEffect_BP
static const FName NAME_AMultiplayerGun_SpawnSmokeEffect_BP = FName(TEXT("SpawnSmokeEffect_BP"));
void AMultiplayerGun::SpawnSmokeEffect_BP()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerGun_SpawnSmokeEffect_BP);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerGun_SpawnSmokeEffect_BP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_SpawnSmokeEffect_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "SpawnSmokeEffect_BP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_SpawnSmokeEffect_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_SpawnSmokeEffect_BP_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerGun_SpawnSmokeEffect_BP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_SpawnSmokeEffect_BP_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AMultiplayerGun Function SpawnSmokeEffect_BP

// Begin Class AMultiplayerGun Function StopContinuousFire_BP
static const FName NAME_AMultiplayerGun_StopContinuousFire_BP = FName(TEXT("StopContinuousFire_BP"));
void AMultiplayerGun::StopContinuousFire_BP()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerGun_StopContinuousFire_BP);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerGun_StopContinuousFire_BP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_StopContinuousFire_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "StopContinuousFire_BP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_StopContinuousFire_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_StopContinuousFire_BP_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerGun_StopContinuousFire_BP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_StopContinuousFire_BP_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AMultiplayerGun Function StopContinuousFire_BP

// Begin Class AMultiplayerGun Function StopFiring
struct Z_Construct_UFunction_AMultiplayerGun_StopFiring_Statics
{
	struct MultiplayerGun_eventStopFiring_Parms
	{
		bool EvenCancelBurst;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "CPP_Default_EvenCancelBurst", "false" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static void NewProp_EvenCancelBurst_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EvenCancelBurst;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerGun_StopFiring_Statics::NewProp_EvenCancelBurst_SetBit(void* Obj)
{
	((MultiplayerGun_eventStopFiring_Parms*)Obj)->EvenCancelBurst = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerGun_StopFiring_Statics::NewProp_EvenCancelBurst = { "EvenCancelBurst", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerGun_eventStopFiring_Parms), &Z_Construct_UFunction_AMultiplayerGun_StopFiring_Statics::NewProp_EvenCancelBurst_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGun_StopFiring_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGun_StopFiring_Statics::NewProp_EvenCancelBurst,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_StopFiring_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGun_StopFiring_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGun, nullptr, "StopFiring", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGun_StopFiring_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_StopFiring_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGun_StopFiring_Statics::MultiplayerGun_eventStopFiring_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGun_StopFiring_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGun_StopFiring_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGun_StopFiring_Statics::MultiplayerGun_eventStopFiring_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGun_StopFiring()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGun_StopFiring_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGun::execStopFiring)
{
	P_GET_UBOOL(Z_Param_EvenCancelBurst);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopFiring(Z_Param_EvenCancelBurst);
	P_NATIVE_END;
}
// End Class AMultiplayerGun Function StopFiring

// Begin Class AMultiplayerGun
void AMultiplayerGun::StaticRegisterNativesAMultiplayerGun()
{
	UClass* Class = AMultiplayerGun::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddPredeterminedSpread", &AMultiplayerGun::execAddPredeterminedSpread },
		{ "ApplyPerspective", &AMultiplayerGun::execApplyPerspective },
		{ "CallBulletHitDelegate", &AMultiplayerGun::execCallBulletHitDelegate },
		{ "CancelChargeUp", &AMultiplayerGun::execCancelChargeUp },
		{ "CancelChargeUp1", &AMultiplayerGun::execCancelChargeUp1 },
		{ "CancelSmokeEffect", &AMultiplayerGun::execCancelSmokeEffect },
		{ "ChargeUp", &AMultiplayerGun::execChargeUp },
		{ "ChargeUp1", &AMultiplayerGun::execChargeUp1 },
		{ "CheckBulletCasingLimit", &AMultiplayerGun::execCheckBulletCasingLimit },
		{ "CheckForOwner", &AMultiplayerGun::execCheckForOwner },
		{ "ClientFire", &AMultiplayerGun::execClientFire },
		{ "ContinuousFire", &AMultiplayerGun::execContinuousFire },
		{ "DestroySelf", &AMultiplayerGun::execDestroySelf },
		{ "ExecuteHitFunction", &AMultiplayerGun::execExecuteHitFunction },
		{ "Fire", &AMultiplayerGun::execFire },
		{ "FireInput", &AMultiplayerGun::execFireInput },
		{ "GetADSArmsLocation", &AMultiplayerGun::execGetADSArmsLocation },
		{ "GetADSArmsRotation", &AMultiplayerGun::execGetADSArmsRotation },
		{ "GetADSFOV", &AMultiplayerGun::execGetADSFOV },
		{ "GetAmmoInMagazine", &AMultiplayerGun::execGetAmmoInMagazine },
		{ "GetBulletCasingSceneToUse", &AMultiplayerGun::execGetBulletCasingSceneToUse },
		{ "GetCaliberToUse", &AMultiplayerGun::execGetCaliberToUse },
		{ "GetCanShoot", &AMultiplayerGun::execGetCanShoot },
		{ "GetChargeUpArmsAnimation", &AMultiplayerGun::execGetChargeUpArmsAnimation },
		{ "GetChargeUpArmsAnimationMontage", &AMultiplayerGun::execGetChargeUpArmsAnimationMontage },
		{ "GetChargeUpTime", &AMultiplayerGun::execGetChargeUpTime },
		{ "GetChargeUpTimeRemaining", &AMultiplayerGun::execGetChargeUpTimeRemaining },
		{ "GetCurrentChargeUpProgress", &AMultiplayerGun::execGetCurrentChargeUpProgress },
		{ "GetCurrentHeat", &AMultiplayerGun::execGetCurrentHeat },
		{ "GetDivideAimingFOV", &AMultiplayerGun::execGetDivideAimingFOV },
		{ "GetDoesOverheat", &AMultiplayerGun::execGetDoesOverheat },
		{ "GetFireMode", &AMultiplayerGun::execGetFireMode },
		{ "GetFireSceneToUse", &AMultiplayerGun::execGetFireSceneToUse },
		{ "GetGunMesh", &AMultiplayerGun::execGetGunMesh },
		{ "GetHasChargeUp", &AMultiplayerGun::execGetHasChargeUp },
		{ "GetHitMarkerActorSounds", &AMultiplayerGun::execGetHitMarkerActorSounds },
		{ "GetHitMarkerSurfaceSounds", &AMultiplayerGun::execGetHitMarkerSurfaceSounds },
		{ "GetHoldTriggerDuringChargeUp", &AMultiplayerGun::execGetHoldTriggerDuringChargeUp },
		{ "GetInfiniteAmmo", &AMultiplayerGun::execGetInfiniteAmmo },
		{ "GetIsExplosive", &AMultiplayerGun::execGetIsExplosive },
		{ "GetManuallySetGunLocation", &AMultiplayerGun::execGetManuallySetGunLocation },
		{ "GetMaxAmmoInMagazine", &AMultiplayerGun::execGetMaxAmmoInMagazine },
		{ "GetMaxHeat", &AMultiplayerGun::execGetMaxHeat },
		{ "GetMaxReserveAmmo", &AMultiplayerGun::execGetMaxReserveAmmo },
		{ "GetOwningPlayer", &AMultiplayerGun::execGetOwningPlayer },
		{ "GetOwningPlayerCast", &AMultiplayerGun::execGetOwningPlayerCast },
		{ "GetPlayerArmsRelativeLocation", &AMultiplayerGun::execGetPlayerArmsRelativeLocation },
		{ "GetPlayerArmsRelativeRotation", &AMultiplayerGun::execGetPlayerArmsRelativeRotation },
		{ "GetReloadGunSound", &AMultiplayerGun::execGetReloadGunSound },
		{ "GetReserveAmmo", &AMultiplayerGun::execGetReserveAmmo },
		{ "GetSharedCaliberAmount", &AMultiplayerGun::execGetSharedCaliberAmount },
		{ "GetSocketName", &AMultiplayerGun::execGetSocketName },
		{ "GetSwitchPerspectiveWhenAiming", &AMultiplayerGun::execGetSwitchPerspectiveWhenAiming },
		{ "GetThirdPersonGunMesh", &AMultiplayerGun::execGetThirdPersonGunMesh },
		{ "GetTimeToADS", &AMultiplayerGun::execGetTimeToADS },
		{ "GetTimeToZoom", &AMultiplayerGun::execGetTimeToZoom },
		{ "GetUseActorClassesForHitMarkers", &AMultiplayerGun::execGetUseActorClassesForHitMarkers },
		{ "GetUseADS", &AMultiplayerGun::execGetUseADS },
		{ "GetUseProjectile", &AMultiplayerGun::execGetUseProjectile },
		{ "GetUseSharedCalibers", &AMultiplayerGun::execGetUseSharedCalibers },
		{ "GetUsingThirdPerson", &AMultiplayerGun::execGetUsingThirdPerson },
		{ "GetWasPickedup", &AMultiplayerGun::execGetWasPickedup },
		{ "GetZoomArmsLocation", &AMultiplayerGun::execGetZoomArmsLocation },
		{ "GetZoomArmsRotation", &AMultiplayerGun::execGetZoomArmsRotation },
		{ "GetZoomFOV", &AMultiplayerGun::execGetZoomFOV },
		{ "HolsterWeapon", &AMultiplayerGun::execHolsterWeapon },
		{ "MulticastReload", &AMultiplayerGun::execMulticastReload },
		{ "MulticastSetOwningPlayer", &AMultiplayerGun::execMulticastSetOwningPlayer },
		{ "MulticastSetPickupCollisionEnabled", &AMultiplayerGun::execMulticastSetPickupCollisionEnabled },
		{ "MulticastSetUsingThirdPerson", &AMultiplayerGun::execMulticastSetUsingThirdPerson },
		{ "MulticastSetWasPickedup", &AMultiplayerGun::execMulticastSetWasPickedup },
		{ "OnRep_GunHitEffects", &AMultiplayerGun::execOnRep_GunHitEffects },
		{ "Reload", &AMultiplayerGun::execReload },
		{ "ServerContinuousFire", &AMultiplayerGun::execServerContinuousFire },
		{ "ServerFire", &AMultiplayerGun::execServerFire },
		{ "ServerReload", &AMultiplayerGun::execServerReload },
		{ "ServerSetOwningPlayer", &AMultiplayerGun::execServerSetOwningPlayer },
		{ "ServerSetPickupCollisionEnabled", &AMultiplayerGun::execServerSetPickupCollisionEnabled },
		{ "ServerSetUsingThirdPerson", &AMultiplayerGun::execServerSetUsingThirdPerson },
		{ "ServerSetWasPickedup", &AMultiplayerGun::execServerSetWasPickedup },
		{ "ServerShotgunFire", &AMultiplayerGun::execServerShotgunFire },
		{ "ServerStopFiring", &AMultiplayerGun::execServerStopFiring },
		{ "SetADSArmsLocation", &AMultiplayerGun::execSetADSArmsLocation },
		{ "SetADSArmsRotation", &AMultiplayerGun::execSetADSArmsRotation },
		{ "SetADSFOV", &AMultiplayerGun::execSetADSFOV },
		{ "SetAmmoInMagazine", &AMultiplayerGun::execSetAmmoInMagazine },
		{ "SetCaliberToUse", &AMultiplayerGun::execSetCaliberToUse },
		{ "SetCanShoot", &AMultiplayerGun::execSetCanShoot },
		{ "SetChargeUpTime", &AMultiplayerGun::execSetChargeUpTime },
		{ "SetCurrentChargeUpProgress", &AMultiplayerGun::execSetCurrentChargeUpProgress },
		{ "SetDivideAimingFOV", &AMultiplayerGun::execSetDivideAimingFOV },
		{ "SetFireMode", &AMultiplayerGun::execSetFireMode },
		{ "SetHasChargeUp", &AMultiplayerGun::execSetHasChargeUp },
		{ "SetHitMarkerActorSounds", &AMultiplayerGun::execSetHitMarkerActorSounds },
		{ "SetHitMarkerSurfaceSounds", &AMultiplayerGun::execSetHitMarkerSurfaceSounds },
		{ "SetHoldTriggerDuringChargeUp", &AMultiplayerGun::execSetHoldTriggerDuringChargeUp },
		{ "SetInfiniteAmmo", &AMultiplayerGun::execSetInfiniteAmmo },
		{ "SetIsExplosive", &AMultiplayerGun::execSetIsExplosive },
		{ "SetManuallySetGunLocation", &AMultiplayerGun::execSetManuallySetGunLocation },
		{ "SetOwningPlayer", &AMultiplayerGun::execSetOwningPlayer },
		{ "SetPickupCollisionEnabled", &AMultiplayerGun::execSetPickupCollisionEnabled },
		{ "SetReloadGunSound", &AMultiplayerGun::execSetReloadGunSound },
		{ "SetSocketName", &AMultiplayerGun::execSetSocketName },
		{ "SetSwitchPerspectiveWhenAiming", &AMultiplayerGun::execSetSwitchPerspectiveWhenAiming },
		{ "SetTimeToADS", &AMultiplayerGun::execSetTimeToADS },
		{ "SetTimeToZoom", &AMultiplayerGun::execSetTimeToZoom },
		{ "SetUseActorClassesForHitMarkers", &AMultiplayerGun::execSetUseActorClassesForHitMarkers },
		{ "SetUseADS", &AMultiplayerGun::execSetUseADS },
		{ "SetUseSharedCalibers", &AMultiplayerGun::execSetUseSharedCalibers },
		{ "SetUsingThirdPerson", &AMultiplayerGun::execSetUsingThirdPerson },
		{ "SetWasPickedup", &AMultiplayerGun::execSetWasPickedup },
		{ "SetZoomArmsLocation", &AMultiplayerGun::execSetZoomArmsLocation },
		{ "SetZoomArmsRotation", &AMultiplayerGun::execSetZoomArmsRotation },
		{ "SetZoomFOV", &AMultiplayerGun::execSetZoomFOV },
		{ "ShotgunFire", &AMultiplayerGun::execShotgunFire },
		{ "SpawnBulletCasing", &AMultiplayerGun::execSpawnBulletCasing },
		{ "SpawnProjectile", &AMultiplayerGun::execSpawnProjectile },
		{ "StopFiring", &AMultiplayerGun::execStopFiring },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMultiplayerGun);
UClass* Z_Construct_UClass_AMultiplayerGun_NoRegister()
{
	return AMultiplayerGun::StaticClass();
}
struct Z_Construct_UClass_AMultiplayerGun_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MultiplayerGun.h" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBulletHit_MetaData[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GunStaticMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This is only visible to the owning player" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GunSkeletalMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This is only visible to the owning player" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonGunStaticMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This is only visible to other players" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonGunSkeletalMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This is only visible to other players" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GripSceneComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseSkeletalMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This needs to be changed in C++" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponName_MetaData[] = {
		{ "Category", "Weapon Name" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WasPickedupBeginPlay_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "Only set this variable if you are placing the gun in the level, do not set this at runtime" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShouldDivideMovementSpeedPenalty_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "If true movement speed is divided by the movement speed penalty instead of subtracted" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShouldDivideSprintSpeedPenalty_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "If true movement speed is divided by the movement speed penalty instead of subtracted" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeedPenalty_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintSpeedPenalty_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadSpeed_MetaData[] = {
		{ "Category", "Ammo" },
		{ "ClampMin", "-2" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "The amount of time it takes to refill the magazine, 0 = instant, -1 = time for player animation to finish, -2 = time for gun animation to finish, if you have animation montages assigned time will be based on the animation montage" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadSpeed1_MetaData[] = {
		{ "Category", "Ammo" },
		{ "ClampMin", "-2" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "The amount of time it takes to finish reloading after the magazine was refilled, 0 = instant, -1 = time for player animation to finish, -2 = time for gun animation to finish, if you have animation montages assigned time will be based on the animation montage" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireMode_MetaData[] = {
		{ "Category", "Firing" },
		{ "ClampMax", "3" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "0 = Semi-Auto, 1 = Full-Auto, 2 = Burst, 3 = Continuous, continuous fire would be for something like a flamethrower that is constantly firing so for example sound isn't played when damage is applied it's looped until you stop firing, if this is true it is recommended to set UseProjectile to false and BulletCasingToSpawn to none" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseBoxCollisionForDamage_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This would be useful for something like a flamethrower that has an area of effect rather than having the player hit only what is in the center of the screen, does not apply if UseProjectile = true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsShotgun_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "Does not work with projectiles" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShotgunAmountOfPellets_MetaData[] = {
		{ "Category", "Firing" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShotgunAmountOfPelletsShot_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShotgunPelletHitLocations_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireFromBarrel_MetaData[] = {
		{ "Category", "Firing" },
		{ "ClampMax", "3" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "0 = no, 1 = fire location is at FireSceneComponent, 2 = fire rotation is based on FireSceneComponent, 3 = fire location and rotation is at FireSceneComponent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletSpawnLocationOffset_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "X axis is to the left and right, Y is forward and backword, and Z is up and down" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseAimingSpreadMultiplier_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "Overrides aiming spread variables" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpreadAimingMultiplier_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinHipFireVerticalSpread_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHipFireVerticalSpread_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinHipFireHorizontalSpread_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHipFireHorizontalSpread_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinAimingFireVerticalSpread_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAimingFireVerticalSpread_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinAimingFireHorizontalSpread_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAimingFireHorizontalSpread_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutomaticallyAddPreDeterminedSpread_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "Spread is pre determined so it can replicate properly" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreDeterminedSpread_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "If AutomaticallyAddPreDeterminedSpread = true 15 values will automatically be added, if you want to add your own you can manually do it here, setting this manually will override the min and max spread variables, only set the X and Y axes Z or 'yaw' does nothing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreDeterminedAimingSpread_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "If AutomaticallyAddPreDeterminedSpread = true 15 values will automatically be added, if you want to add your own you can manually do it here, setting this manually will override the min and max spread variables, only set the X and Y axes Z or 'yaw' does nothing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreDeterminedAimingSpreadWithMultiplier_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "If AutomaticallyAddPreDeterminedSpread = true 15 values will automatically be added, if you want to add your own you can manually do it here, setting this manually will override the min and max spread variables, only set the X and Y axes Z or 'yaw' does nothing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreDeterminedSpreadIndex_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreDeterminedAimingSpreadIndex_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreDeterminedAimingSpreadWithMultiplierIndex_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasChargeUp_MetaData[] = {
		{ "Category", "Chargeup" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "If true there will be a chargeup before the gun can fire" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoldTriggerDuringChargeUp_MetaData[] = {
		{ "Category", "Chargeup" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "If true then releasing the trigger during the chargeup will cancel firing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChargeUpTime_MetaData[] = {
		{ "Category", "Chargeup" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "The amount of time it takes to chargeup" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentChargeUpProgress_MetaData[] = {
		{ "Category", "Chargeup" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChargeUpParticleEffect_MetaData[] = {
		{ "Category", "Chargeup" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedChargeUpParticleEffect_MetaData[] = {
		{ "Category", "Chargeup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnChargeUpParticleAttached_MetaData[] = {
		{ "Category", "Chargeup" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "If this is true then the muzzle flash will move with the gun instead of staying in the same spot" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestroyChargeUpParticleWhenChargeUpCanceled_MetaData[] = {
		{ "Category", "Chargeup" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoesOverheat_MetaData[] = {
		{ "Category", "Overheating" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "Only applies if FireMode = 1 or 3, if this is true firing will make it overheat instead of using ammo" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProhibitFiringWhileCoolingDown_MetaData[] = {
		{ "Category", "Overheating" },
		{ "ClampMax", "2" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "0 = can fire while cooling down, 1 = can't fire while cooling down if max heat is reached, 2 = can't fire while cooling down no matter what" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReachedMaxHeat_MetaData[] = {
		{ "Category", "Overheating" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeToOverheat_MetaData[] = {
		{ "Category", "Overheating" },
		{ "ClampMin", "0.001000" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeToCooldown_MetaData[] = {
		{ "Category", "Overheating" },
		{ "ClampMin", "0.001000" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHeat_MetaData[] = {
		{ "Category", "Overheating" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHeat_MetaData[] = {
		{ "Category", "Overheating" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsOverheating_MetaData[] = {
		{ "Category", "Overheating" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinLookInputForWeaponSway_MetaData[] = {
		{ "Category", "Weapon Sway" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This is the minimum input for weapon sway for example how slow you can move your mouse and still have sway or how far you move the thumbstick on a controller" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShouldHaveHorizontalWeaponSway_MetaData[] = {
		{ "Category", "Weapon Sway" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShouldHaveVerticalWeaponSway_MetaData[] = {
		{ "Category", "Weapon Sway" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseRotationForHorizontalWeaponSway_MetaData[] = {
		{ "Category", "Weapon Sway" },
		{ "ClampMax", "2" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "0 = Yes, 1 = Use both location and rotation, 2 = Use location" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalWeaponSwayOppositeDirection_MetaData[] = {
		{ "Category", "Weapon Sway" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "If true the weapon will sway in the opposite direction of where the player is looking" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHorzontalWeaponSwayRotation_MetaData[] = {
		{ "Category", "Weapon Sway" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHorzontalWeaponSwayDistance_MetaData[] = {
		{ "Category", "Weapon Sway" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseRotationForVerticalWeaponSway_MetaData[] = {
		{ "Category", "Weapon Sway" },
		{ "ClampMax", "2" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "0 = Yes, 1 = Use both location and rotation, 2 = Use location, NOTE: For the default arms mesh DO NOT use rotation for becuase the origin point is way too low, instead use a model with the origin point in the correct position" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalWeaponSwayOppositeDirection_MetaData[] = {
		{ "Category", "Weapon Sway" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "If true the weapon will sway in the opposite direction of where the player is looking" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxVerticalWeaponSwayRotation_MetaData[] = {
		{ "Category", "Weapon Sway" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxVerticalWeaponSwayDistance_MetaData[] = {
		{ "Category", "Weapon Sway" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalWeaponSwaySpeed_MetaData[] = {
		{ "Category", "Weapon Sway" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "Lower numbers make it slower but 0 makes it instant" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalWeaponSwaySpeed_MetaData[] = {
		{ "Category", "Weapon Sway" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "Lower numbers make it slower but 0 makes it instant" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponSwitchTime_MetaData[] = {
		{ "Category", "Animations" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "If set to 0 it will just use the animation length, if this is not 0 it will use this to determine how long it takes to switch off of and onto this weapon, if you have animation montages assigned time will be based on the animation montage" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponSwitchAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This plays on the character's arms" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponSwitchAnimationMontage_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This plays on the character's arms" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResetArmsAnimationAfterWeaponSwitch_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonWeaponSwitchAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This plays on the character's arms" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonWeaponSwitchAnimationMontage_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This plays on the character's arms" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseTwoWeaponSwitchAnimations_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponSwitchAnimation1_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This plays on the character's arms" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponSwitchAnimation1Montage_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This plays on the character's arms" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonWeaponSwitchAnimation1_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This plays on the character's arms" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonWeaponSwitchAnimation1Montage_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This plays on the character's arms" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwitchToGunAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "Played when switching to this gun, only applies if you are using a skeletal mesh for your gun" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwitchToGunAnimationMontage_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "Played when switching to this gun, only applies if you are using a skeletal mesh for your gun" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwitchOffGunAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "Played when switching to another gun, only applies if you are using a skeletal mesh for your gun" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwitchOffGunAnimationMontage_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "Played when switching to another gun, only applies if you are using a skeletal mesh for your gun" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HolsterWeaponGunAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This plays on the gun's mesh component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HolsterWeaponGunAnimationMontage_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This plays on the gun's mesh component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HolsterWeaponAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This plays on the character's arms" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HolsterWeaponAnimationMontage_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This plays on the character's arms" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResetArmsAnimationAfterHolster_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HolsterWeaponThirdPersonAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This plays on the character's mesh component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HolsterWeaponThirdPersonAnimationMontage_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This plays on the character's mesh component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnHolsterWeaponGunAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This plays on the gun's mesh component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnHolsterWeaponGunAnimationMontage_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This plays on the gun's mesh component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnHolsterWeaponAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This plays on the character's arms" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnHolsterWeaponAnimationMontage_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This plays on the character's arms" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResetArmsAnimationAfterUnHolster_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnHolsterWeaponThirdPersonAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This plays on the character's mesh component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnHolsterWeaponThirdPersonAnimationMontage_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This plays on the character's mesh component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This plays on the character's arms" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadAnimationMontage_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This plays on the character's arms" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResetArmsAnimationAfterReload_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResetArmsAnimationAfterCanceledReload_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadEmptyAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This plays on the character's arms when the gun is emptied" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadEmptyAnimationMontage_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This plays on the character's arms when the gun is emptied" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonReloadAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This plays on the character's mesh component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonReloadAnimationMontage_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This plays on the character's mesh component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonReloadEmptyAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This plays on the character's mesh component when the gun is emptied" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonReloadEmptyAnimationMontage_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This plays on the character's mesh component when the gun is emptied" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseTwoReloadAnimations_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadAnimation1_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This plays on the character's arms if UseTwoReloadAnimations = true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadAnimation1Montage_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This plays on the character's arms if UseTwoReloadAnimations = true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadEmptyAnimation1_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This plays on the character's arms when the gun is emptied if UseTwoReloadAnimations = true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadEmptyAnimation1Montage_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This plays on the character's arms when the gun is emptied if UseTwoReloadAnimations = true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseTwoThirdPersonReloadAnimations_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonReloadAnimation1_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This plays on the character's mesh component if UseTwoReloadAnimations = true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonReloadAnimation1Montage_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This plays on the character's mesh component if UseTwoReloadAnimations = true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonReloadEmptyAnimation1_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This plays on the character's mesh component when the gun is emptied if UseTwoReloadAnimations = true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonReloadEmptyAnimation1Montage_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This plays on the character's mesh component when the gun is emptied if UseTwoReloadAnimations = true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadGunAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "Only applies if you are using a skeletal mesh for your gun" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadGunAnimationMontage_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "Only applies if you are using a skeletal mesh for your gun" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadEmptyGunAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "Plays when the gun is emptied, only applies if you are using a skeletal mesh for your gun" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadEmptyGunAnimationMontage_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "Plays when the gun is emptied, only applies if you are using a skeletal mesh for your gun" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "Clear this if you want to set the animation in the animation blueprint or if you just don't want an animation, this plays on the player character" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoopSprintAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResetArmsAnimationAfterUnSprinting_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SetSprintingSpeedAfterAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnSprintAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "Clear this if you want to set the animation in the animation blueprint or if you just don't want an animation, this plays on the player character" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SetDefaultSpeedAfterAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonSprintAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "Clear this if you want to set the animation in the animation blueprint or if you just don't want an animation, this plays on the player character" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonUnSprintAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "Clear this if you want to set the animation in the animation blueprint or if you just don't want an animation, this plays on the player character" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoopThirdPersonSprintAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedBulletCasings_MetaData[] = {
		{ "Category", "Ammo" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireSceneComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This is where the muzzle flash will be" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonFireSceneComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This is where the muzzle flash will be for other players" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletCasingSceneComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonBulletCasingSceneComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireBoxScene_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This only matters if UseBoxCollisionForDamage = true, rescale this instead of the box collision" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageBoxCollision_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This only matters if UseBoxCollisionForDamage = true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningPlayer_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningPlayerCast_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanShoot_MetaData[] = {
		{ "Category", "Variables" },
		{ "Comment", "// This is only used to control fire rate, to control if the player can fire set can shoot in the player character class\n" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "ToolTip", "This is only used to control fire rate, to control if the player can fire set can shoot in the player character class" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmmoInMagazine_MetaData[] = {
		{ "Category", "Ammo" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAmmoInMagazine_MetaData[] = {
		{ "Category", "Ammo" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReserveAmmo_MetaData[] = {
		{ "Category", "Ammo" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxReserveAmmo_MetaData[] = {
		{ "Category", "Ammo" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseSharedCalibers_MetaData[] = {
		{ "Category", "Ammo" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "Whether to use reserve ammo specific to this gun or use calibers shared by other guns that are chambered in the same caliber" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaliberToUse_MetaData[] = {
		{ "Category", "Ammo" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This will use the index of the AllSharedCalibers variable on the player character starting at 0, only applies if UseSharedCalibers = true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InfiniteAmmo_MetaData[] = {
		{ "Category", "Ammo" },
		{ "ClampMax", "2" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "0 = limited ammo, 1 = infinite reserve ammo, 2 = infinite ammo, this will override DoesOverheat" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletCasingToSpawn_MetaData[] = {
		{ "Category", "Ammo" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletCasingSpawnCollisionHandlingMethod_MetaData[] = {
		{ "Category", "Ammo" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletCasingInheritsVelocity_MetaData[] = {
		{ "Category", "Ammo" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAmountOfBulletCasings_MetaData[] = {
		{ "Category", "Ammo" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[] = {
		{ "Category", "Firing" },
		{ "ClampMin", "0.001000" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "The amount of time between shots" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContinuousFireDamageRate_MetaData[] = {
		{ "Category", "Firing" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "The amount of time between applying damage for continuous fire" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmountOfShotsForBurst_MetaData[] = {
		{ "Category", "Firing" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmountOfBurstShotsFired_MetaData[] = {
		{ "Category", "Firing" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireRange_MetaData[] = {
		{ "Category", "Firing" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "Only applies if UseProjectile = false" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaunchPhysicsObjects_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "For this to replicate you need to replicate movement for the actor you're launching, for explosives this only applies to projectiles" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaunchObjectStrength_MetaData[] = {
		{ "Category", "Firing" },
		{ "ClampMin", "0.001000" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "Only applies if LaunchPhysicsObjects = true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaunchObjectVelocityChange_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "Only applies if LaunchPhysicsObjects = true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsExplosive_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionIgnoreOwner_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionIgnoredActors_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "Set this at runtime rather than setting the default value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionIgnoredClasses_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseProjectile_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "Does not work with shotguns" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileToSpawn_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileSpawnCollisionHandlingMethod_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileInheritsVelocity_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeToDespawnProjectile_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "ToolTip", "This will determine the amount of time before projectile despawn if they don't hit anything, for explosives this will detonate them, 0 = disabled, only applies if UseProjectile = true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionChannel_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This will also be the collision channel for explosives" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalActorsToIgnore_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "The owner and the gun are already ignored, if you want to ignore more actors set this at runtime, only applies if UseProjectile = false" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDamage_MetaData[] = {
		{ "Category", "Damage" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "Damage applied to everything that has either no physical material or one not included in damage variable, for explosives this will serve as the base damage" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "Add pysical materials like the head to apply different damage, if left blank it will just apply default damage" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplosiveDamageRadius_MetaData[] = {
		{ "Category", "Damage" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplosiveDoFullDamage_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletHitMode_MetaData[] = {
		{ "Category", "Damage" },
		{ "ClampMax", "2" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "0 = just apply damage, 1 = apply damage and execute ExecuteHitFunction(), 2 = just execute ExecuteHitFunction(), to use this override the ExecuteHitFunction() or add event ExecuteHitFunction, for projectiles you will need to define this function in the projectile, this function only runs on server" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageFalloffMultiplierAtRange_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "The first float is the distance traveled and the second float is the damage multiplier at that range, values above 1 do more damage, does not apply to explosives" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpolateDamageBetweenRanges_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "Only applies if DamageFalloffMultiplierAtRange has 2 or more values, if the target distance is in between 2 distances in the DamageFalloffMultiplierAtRange variable the damage will also be in between the 2 damages in the DamageFalloffMultiplierAtRange variable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrintDistanceTraveled_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This will print a string showing how far the bullet went" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UsingThirdPerson_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WasPickedup_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmountOfTimesPickedup_MetaData[] = {
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeToDespawnAfterDropped_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "Set to 0 to disable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManuallySetGunLocation_MetaData[] = {
		{ "Category", "Gun Location" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "If false the Grip scene component will be used to set gun location, this does not apply to the third person mesh, setting this to false will require a socket name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnapToSocket_MetaData[] = {
		{ "Category", "Gun Location" },
		{ "ClampMax", "2" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "Setting this to 0 will make the gun not use a socket and instead just use relative location and rotation, setting this to 1 will snap to socket without scale, and 2 will snap to socket including scale, if ManuallySetGunLocation is false this will act as though it is 0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[] = {
		{ "Category", "Gun Location" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "If SnapToSocket = 0 then it will just attach to a socket if you set this variable, this is required to be filled in if ManuallySetGunLocation is false" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonSocketName_MetaData[] = {
		{ "Category", "Gun Location" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "If SnapToSocket = 0 then it will just attach to a socket if you set this variable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GunRelativeLocation_MetaData[] = {
		{ "Category", "Gun Location" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "Only applies if SnapToSocket = 0 and is relative to its parent component (usually the player character's hands)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GunRelativeRotation_MetaData[] = {
		{ "Category", "Gun Location" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "Only applies if SnapToSocket = 0 and is relative to its parent component (usually the player character's hands)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonGunRelativeLocation_MetaData[] = {
		{ "Category", "Gun Location" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "Only applies if SnapToSocket = 0 and is relative to its parent component (usually the player character's hands), usually you can set this to the same as for first person" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonGunRelativeRotation_MetaData[] = {
		{ "Category", "Gun Location" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "Only applies if SnapToSocket = 0 and is relative to its parent component (usually the player character's hands), usually you can set this to the same as for first person" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerArmsRelativeLocation_MetaData[] = {
		{ "Category", "Gun Location" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerArmsRelativeRotation_MetaData[] = {
		{ "Category", "Gun Location" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultHitEffect_MetaData[] = {
		{ "Category", "Hit Effects" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This will also serve as the explosion for explosives" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitEffectScale_MetaData[] = {
		{ "Category", "Hit Effects" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "For explosives this will also be the explosion scale" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitEffects_MetaData[] = {
		{ "Category", "Hit Effects" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "Add pysical materials like the head to spawn different particle effects, if left blank it will just use the default hit effect" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleFlash_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnMuzzleFlashAttached_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "If this is true then the muzzle flash will move with the gun instead of staying in the same spot" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicateMuzzleFlashLocation_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "If this is false other players will see the muzzle flash at the ThirdPersonFireSceneComponent, if this is true other players will see the muzzle flash in the same location as the player firing, this also applies to the charge up particle if you have the gun charge up before firing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseFirstPersonRotationForThirdPersonMuzzleFlash_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This also applies to the charge up particle if you have the gun charge up before firing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedContinuousMuzzleFlash_MetaData[] = {
		{ "Category", "Firing" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnSmokeEffectWhenShooting_MetaData[] = {
		{ "Category", "Firing" },
		{ "ClampMax", "2" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "0 = no, 1 = yes, 2 = indicator for overheating if DoesOverheat = true, will be set to 1 if DoesOverheat = false" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmountOfShotsToSpawnSmoke_MetaData[] = {
		{ "Category", "Firing" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "only applies if SpawnSmokeEffectWhenShooting = 1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmountOfTimeToCancelSmoke_MetaData[] = {
		{ "Category", "Firing" },
		{ "ClampMin", "0.001000" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "Amount of time to not shoot to cancel spawning smoke" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestroySmokeEffectWhenNotShooting_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This would be used if you have a particle effect that loops and will not auto destroy" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestroySmokeSoundWhenNotShooting_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This would be used if you have a sound effect that loops and will not auto destroy" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeToDestroySmokeWhenNotShooting_MetaData[] = {
		{ "Category", "Firing" },
		{ "ClampMin", "0.001000" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "Amount of time to not shoot after spawning the smoke to destroy it, set to 0 to disable, this would be used if you have a particle effect that loops and will not auto destroy, overrides TimeToDestroySmokeSoundWhenNotShooting" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeToDestroySmokeSoundWhenNotShooting_MetaData[] = {
		{ "Category", "Firing" },
		{ "ClampMin", "0.001000" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PercentageOfOverheatToSpawnSmoke_MetaData[] = {
		{ "Category", "Firing" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0.001000" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "Between 0 and 1, only applies if SpawnSmokeEffectWhenShooting = 2" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmokeEffectToSpawn_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedSmokeEffect_MetaData[] = {
		{ "Category", "Firing" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmokeSoundToSpawn_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "Only applies if SpawnSmokeEffectWhenShooting is not 0, clear to not have a sound" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedSmokeSound_MetaData[] = {
		{ "Category", "Firing" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletsShotForSmokeEffect_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletHitModeDelay_MetaData[] = {
		{ "Category", "Firing" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "Only applies if BulletHitMode equals 1 or 2, and works better for projectiles, set to 0 to disable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireControllerVibration_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "Clear this to disable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireControllerVibrationTag_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "Used to cancel vibration with continuous fire" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletHitControllerVibration_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This also applies to explosives, clear this to disable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletHitControllerVibrationAttenuation_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletHitControllerVibrationTag_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnFireSoundAttached_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "If this is true then the fire sound will move with the gun instead of staying in the same spot" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnFireSound2DForOwner_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This will only affect the player firing the gun, this is to avoid the sound being louder in one ear" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnFireSound2DForOwnerThirdPerson_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This will only affect the player firing the gun, this is to avoid the sound being louder in one ear" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireSoundAttenuationOverride_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonFireSoundAttenuationOverride_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChargeUpSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedChargeUpSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnChargeUpSoundAttached_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "If this is true then the fire sound will move with the gun instead of staying in the same spot" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnChargeUpSound2DForOwner_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This will only affect the player firing the gun, this is to avoid the sound being louder in one ear" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnChargeUpSound2DForOwnerThirdPerson_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This will only affect the player firing the gun, this is to avoid the sound being louder in one ear" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestroyChargeUpSoundWhenChargeUpCanceled_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "Does not apply if SpawnChargeUpSoundAttached = false" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChargeUpSoundAttenuationOverride_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonChargeUpSoundAttenuationOverride_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadGunSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedContinuousFireSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletWhizzingSoundVolumeBasedOnSpeed_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "Only applies to projectiles" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBulletHitSound_MetaData[] = {
		{ "Category", "Hit Effects" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This will also serve as the explosion sound for explosives" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletHitSounds_MetaData[] = {
		{ "Category", "Hit Effects" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "Using the physical material allows you to have a different sound for each surface" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBulletHitDecal_MetaData[] = {
		{ "Category", "Hit Effects" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletHitDecals_MetaData[] = {
		{ "Category", "Hit Effects" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "Using the physical material allows you to have a different decal for each surface" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletHitDecalSize_MetaData[] = {
		{ "Category", "Hit Effects" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseActorClassesForHitMarkers_MetaData[] = {
		{ "Category", "Hit Effects" },
		{ "ClampMax", "2" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "0 = hit actor classes, 1 = hit physical materials, 2 = prioritize physical material but fallback on actor class, only 0 works for explosives and box collision damage" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitMarkerActorSounds_MetaData[] = {
		{ "Category", "Hit Effects" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "Only applies if UseActorClassesForHitMarkers = true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitMarkerSurfaceSounds_MetaData[] = {
		{ "Category", "Hit Effects" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "Using the physical material allows you to have a different sound for each surface, only applies if UseActorClassesForHitMarkers = false" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseFireArmsAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ClampMax", "2" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "If set to 0 it will play the animation montage, if set to 1 it will play the animation, if set to 2 it will play both" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireArmsAnimationMontage_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireArmsAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireGunAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "Only applies if you are using a skeletal mesh for your gun" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChargeUpArmsAnimationMontage_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChargeUpArmsAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChargeUpGunAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseADS_MetaData[] = {
		{ "Category", "Aiming" },
		{ "ClampMax", "3" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "0 = will use ADS if player character allows, 1 = will use zoom if player character allows, 2 = will use ADS overriding variable in player character, 3 = will use zoom overriding variable in player character" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwitchPerspectiveWhenAiming_MetaData[] = {
		{ "Category", "Aiming" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "There is an option to override this on the player character, this will still apply even if the player doesn't have the option to switch perspective" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DivideAimingFOV_MetaData[] = {
		{ "Category", "Aiming" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "If false aiming will subtract from current FOV, if true aiming will divide from current FOV" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ADSFOV_MetaData[] = {
		{ "Category", "Aiming" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This is how much to subtract or divide from current FOV" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoomFOV_MetaData[] = {
		{ "Category", "Aiming" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This is how much to subtract or divide from current FOV" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeToADS_MetaData[] = {
		{ "Category", "Aiming" },
		{ "ClampMin", "0.001000" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeToZoom_MetaData[] = {
		{ "Category", "Aiming" },
		{ "ClampMin", "0.001000" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ADSArmsLocation_MetaData[] = {
		{ "Category", "Aiming" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ADSArmsRotation_MetaData[] = {
		{ "Category", "Aiming" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoomArmsLocation_MetaData[] = {
		{ "Category", "Aiming" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoomArmsRotation_MetaData[] = {
		{ "Category", "Aiming" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalRecoil_MetaData[] = {
		{ "Category", "Recoil" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalRecoil_MetaData[] = {
		{ "Category", "Recoil" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireCameraShake_MetaData[] = {
		{ "Category", "Recoil" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanCrumbleDestructibleMeshes_MetaData[] = {
		{ "Category", "Chaos Destruction" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "Can cause stutters when firing especially on the client" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrumbleDestructibleMeshesWithEveryShotgunPellet_MetaData[] = {
		{ "Category", "Chaos Destruction" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "Only applies if IsShotgun = true, having this equal false will crumble destructibles at the average hit location of each pellet, setting this to true can cause stutters when firing especially on the client" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestructionSphereSize_MetaData[] = {
		{ "Category", "Chaos Destruction" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "Also set this for explosives, destruction sphere will use this not damage radius" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestructionSphereToSpawn_MetaData[] = {
		{ "Category", "Chaos Destruction" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "This is used to destroy destructible meshes, make this either FS_MasterField or a child of it" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowBulletPath_MetaData[] = {
		{ "Category", "Debugging" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
		{ "Tooltip", "Only applies if UseProjectile = false, if true a debug line will be drawn when firing to show where the line trace goes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletPathColor_MetaData[] = {
		{ "Category", "Debugging" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletPathPersists_MetaData[] = {
		{ "Category", "Debugging" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletPathDuration_MetaData[] = {
		{ "Category", "Debugging" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GunHitEffectsReplication_MetaData[] = {
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwitchedFireToServer_MetaData[] = {
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckForOwnerTimerHandle_MetaData[] = {
		{ "Category", "Timers" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DespawnTimerHandle_MetaData[] = {
		{ "Category", "Timers" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChargeUpTimerHandle_MetaData[] = {
		{ "Category", "Timers" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CancelChargeUpTimerHandle_MetaData[] = {
		{ "Category", "Timers" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnProjectileTimerHandle_MetaData[] = {
		{ "Category", "Timers" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireTimerHandle_MetaData[] = {
		{ "Category", "Timers" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireFullAutoTimerHandle_MetaData[] = {
		{ "Category", "Timers" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BurstFireTimerHandle_MetaData[] = {
		{ "Category", "Timers" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CancelSmokeEffectTimerHandle_MetaData[] = {
		{ "Category", "Timers" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestroySmokeEffectTimerHandle_MetaData[] = {
		{ "Category", "Timers" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletHitModeTimerHandle_MetaData[] = {
		{ "Category", "Timers" },
		{ "ModuleRelativePath", "Public/MultiplayerGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBulletHit;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GunStaticMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GunSkeletalMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThirdPersonGunStaticMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThirdPersonGunSkeletalMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GripSceneComponent;
	static void NewProp_UseSkeletalMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseSkeletalMesh;
	static const UECodeGen_Private::FNamePropertyParams NewProp_WeaponName;
	static void NewProp_WasPickedupBeginPlay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_WasPickedupBeginPlay;
	static void NewProp_ShouldDivideMovementSpeedPenalty_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldDivideMovementSpeedPenalty;
	static void NewProp_ShouldDivideSprintSpeedPenalty_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldDivideSprintSpeedPenalty;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeedPenalty;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintSpeedPenalty;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReloadSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReloadSpeed1;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FireMode;
	static void NewProp_UseBoxCollisionForDamage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseBoxCollisionForDamage;
	static void NewProp_IsShotgun_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsShotgun;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ShotgunAmountOfPellets;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ShotgunAmountOfPelletsShot;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShotgunPelletHitLocations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ShotgunPelletHitLocations;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FireFromBarrel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BulletSpawnLocationOffset;
	static void NewProp_UseAimingSpreadMultiplier_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseAimingSpreadMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpreadAimingMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinHipFireVerticalSpread;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHipFireVerticalSpread;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinHipFireHorizontalSpread;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHipFireHorizontalSpread;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinAimingFireVerticalSpread;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAimingFireVerticalSpread;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinAimingFireHorizontalSpread;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAimingFireHorizontalSpread;
	static void NewProp_AutomaticallyAddPreDeterminedSpread_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AutomaticallyAddPreDeterminedSpread;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreDeterminedSpread_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PreDeterminedSpread;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreDeterminedAimingSpread_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PreDeterminedAimingSpread;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreDeterminedAimingSpreadWithMultiplier_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PreDeterminedAimingSpreadWithMultiplier;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PreDeterminedSpreadIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PreDeterminedAimingSpreadIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PreDeterminedAimingSpreadWithMultiplierIndex;
	static void NewProp_HasChargeUp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HasChargeUp;
	static void NewProp_HoldTriggerDuringChargeUp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HoldTriggerDuringChargeUp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChargeUpTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentChargeUpProgress;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChargeUpParticleEffect;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedChargeUpParticleEffect;
	static void NewProp_SpawnChargeUpParticleAttached_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SpawnChargeUpParticleAttached;
	static void NewProp_DestroyChargeUpParticleWhenChargeUpCanceled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DestroyChargeUpParticleWhenChargeUpCanceled;
	static void NewProp_DoesOverheat_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DoesOverheat;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ProhibitFiringWhileCoolingDown;
	static void NewProp_ReachedMaxHeat_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReachedMaxHeat;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToOverheat;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToCooldown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHeat;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHeat;
	static void NewProp_IsOverheating_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsOverheating;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinLookInputForWeaponSway;
	static void NewProp_ShouldHaveHorizontalWeaponSway_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldHaveHorizontalWeaponSway;
	static void NewProp_ShouldHaveVerticalWeaponSway_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldHaveVerticalWeaponSway;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UseRotationForHorizontalWeaponSway;
	static void NewProp_HorizontalWeaponSwayOppositeDirection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HorizontalWeaponSwayOppositeDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHorzontalWeaponSwayRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHorzontalWeaponSwayDistance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UseRotationForVerticalWeaponSway;
	static void NewProp_VerticalWeaponSwayOppositeDirection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_VerticalWeaponSwayOppositeDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxVerticalWeaponSwayRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxVerticalWeaponSwayDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HorizontalWeaponSwaySpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VerticalWeaponSwaySpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeaponSwitchTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponSwitchAnimation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponSwitchAnimationMontage;
	static void NewProp_ResetArmsAnimationAfterWeaponSwitch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ResetArmsAnimationAfterWeaponSwitch;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThirdPersonWeaponSwitchAnimation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThirdPersonWeaponSwitchAnimationMontage;
	static void NewProp_UseTwoWeaponSwitchAnimations_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseTwoWeaponSwitchAnimations;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponSwitchAnimation1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponSwitchAnimation1Montage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThirdPersonWeaponSwitchAnimation1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThirdPersonWeaponSwitchAnimation1Montage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SwitchToGunAnimation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SwitchToGunAnimationMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SwitchOffGunAnimation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SwitchOffGunAnimationMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HolsterWeaponGunAnimation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HolsterWeaponGunAnimationMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HolsterWeaponAnimation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HolsterWeaponAnimationMontage;
	static void NewProp_ResetArmsAnimationAfterHolster_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ResetArmsAnimationAfterHolster;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HolsterWeaponThirdPersonAnimation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HolsterWeaponThirdPersonAnimationMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UnHolsterWeaponGunAnimation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UnHolsterWeaponGunAnimationMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UnHolsterWeaponAnimation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UnHolsterWeaponAnimationMontage;
	static void NewProp_ResetArmsAnimationAfterUnHolster_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ResetArmsAnimationAfterUnHolster;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UnHolsterWeaponThirdPersonAnimation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UnHolsterWeaponThirdPersonAnimationMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadAnimation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadAnimationMontage;
	static void NewProp_ResetArmsAnimationAfterReload_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ResetArmsAnimationAfterReload;
	static void NewProp_ResetArmsAnimationAfterCanceledReload_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ResetArmsAnimationAfterCanceledReload;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadEmptyAnimation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadEmptyAnimationMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThirdPersonReloadAnimation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThirdPersonReloadAnimationMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThirdPersonReloadEmptyAnimation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThirdPersonReloadEmptyAnimationMontage;
	static void NewProp_UseTwoReloadAnimations_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseTwoReloadAnimations;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadAnimation1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadAnimation1Montage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadEmptyAnimation1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadEmptyAnimation1Montage;
	static void NewProp_UseTwoThirdPersonReloadAnimations_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseTwoThirdPersonReloadAnimations;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThirdPersonReloadAnimation1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThirdPersonReloadAnimation1Montage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThirdPersonReloadEmptyAnimation1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThirdPersonReloadEmptyAnimation1Montage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadGunAnimation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadGunAnimationMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadEmptyGunAnimation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadEmptyGunAnimationMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SprintAnimation;
	static void NewProp_LoopSprintAnimation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LoopSprintAnimation;
	static void NewProp_ResetArmsAnimationAfterUnSprinting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ResetArmsAnimationAfterUnSprinting;
	static void NewProp_SetSprintingSpeedAfterAnimation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SetSprintingSpeedAfterAnimation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UnSprintAnimation;
	static void NewProp_SetDefaultSpeedAfterAnimation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SetDefaultSpeedAfterAnimation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThirdPersonSprintAnimation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThirdPersonUnSprintAnimation;
	static void NewProp_LoopThirdPersonSprintAnimation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LoopThirdPersonSprintAnimation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedBulletCasings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnedBulletCasings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireSceneComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThirdPersonFireSceneComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletCasingSceneComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThirdPersonBulletCasingSceneComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireBoxScene;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageBoxCollision;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningPlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningPlayerCast;
	static void NewProp_CanShoot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanShoot;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AmmoInMagazine;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAmmoInMagazine;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReserveAmmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxReserveAmmo;
	static void NewProp_UseSharedCalibers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseSharedCalibers;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CaliberToUse;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InfiniteAmmo;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BulletCasingToSpawn;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BulletCasingSpawnCollisionHandlingMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BulletCasingSpawnCollisionHandlingMethod;
	static void NewProp_BulletCasingInheritsVelocity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_BulletCasingInheritsVelocity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAmountOfBulletCasings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FireRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ContinuousFireDamageRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AmountOfShotsForBurst;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AmountOfBurstShotsFired;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FireRange;
	static void NewProp_LaunchPhysicsObjects_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LaunchPhysicsObjects;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LaunchObjectStrength;
	static void NewProp_LaunchObjectVelocityChange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LaunchObjectVelocityChange;
	static void NewProp_IsExplosive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsExplosive;
	static void NewProp_ExplosionIgnoreOwner_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ExplosionIgnoreOwner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExplosionIgnoredActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExplosionIgnoredActors;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ExplosionIgnoredClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExplosionIgnoredClasses;
	static void NewProp_UseProjectile_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseProjectile;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileToSpawn;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ProjectileSpawnCollisionHandlingMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ProjectileSpawnCollisionHandlingMethod;
	static void NewProp_ProjectileInheritsVelocity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ProjectileInheritsVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToDespawnProjectile;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionChannel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AdditionalActorsToIgnore_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalActorsToIgnore;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Damage_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExplosiveDamageRadius;
	static void NewProp_ExplosiveDoFullDamage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ExplosiveDoFullDamage;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BulletHitMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageFalloffMultiplierAtRange_ValueProp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageFalloffMultiplierAtRange_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DamageFalloffMultiplierAtRange;
	static void NewProp_InterpolateDamageBetweenRanges_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InterpolateDamageBetweenRanges;
	static void NewProp_PrintDistanceTraveled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PrintDistanceTraveled;
	static void NewProp_UsingThirdPerson_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UsingThirdPerson;
	static void NewProp_WasPickedup_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_WasPickedup;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AmountOfTimesPickedup;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToDespawnAfterDropped;
	static void NewProp_ManuallySetGunLocation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ManuallySetGunLocation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SnapToSocket;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ThirdPersonSocketName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GunRelativeLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GunRelativeRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ThirdPersonGunRelativeLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ThirdPersonGunRelativeRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerArmsRelativeLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerArmsRelativeRotation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultHitEffect;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitEffectScale;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitEffects_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitEffects_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_HitEffects;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MuzzleFlash;
	static void NewProp_SpawnMuzzleFlashAttached_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SpawnMuzzleFlashAttached;
	static void NewProp_ReplicateMuzzleFlashLocation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReplicateMuzzleFlashLocation;
	static void NewProp_UseFirstPersonRotationForThirdPersonMuzzleFlash_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseFirstPersonRotationForThirdPersonMuzzleFlash;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedContinuousMuzzleFlash;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpawnSmokeEffectWhenShooting;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AmountOfShotsToSpawnSmoke;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AmountOfTimeToCancelSmoke;
	static void NewProp_DestroySmokeEffectWhenNotShooting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DestroySmokeEffectWhenNotShooting;
	static void NewProp_DestroySmokeSoundWhenNotShooting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DestroySmokeSoundWhenNotShooting;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToDestroySmokeWhenNotShooting;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToDestroySmokeSoundWhenNotShooting;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PercentageOfOverheatToSpawnSmoke;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SmokeEffectToSpawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedSmokeEffect;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SmokeSoundToSpawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedSmokeSound;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BulletsShotForSmokeEffect;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BulletHitModeDelay;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireControllerVibration;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FireControllerVibrationTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletHitControllerVibration;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletHitControllerVibrationAttenuation;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BulletHitControllerVibrationTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireSound;
	static void NewProp_SpawnFireSoundAttached_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SpawnFireSoundAttached;
	static void NewProp_SpawnFireSound2DForOwner_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SpawnFireSound2DForOwner;
	static void NewProp_SpawnFireSound2DForOwnerThirdPerson_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SpawnFireSound2DForOwnerThirdPerson;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireSoundAttenuationOverride;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThirdPersonFireSoundAttenuationOverride;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChargeUpSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedChargeUpSound;
	static void NewProp_SpawnChargeUpSoundAttached_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SpawnChargeUpSoundAttached;
	static void NewProp_SpawnChargeUpSound2DForOwner_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SpawnChargeUpSound2DForOwner;
	static void NewProp_SpawnChargeUpSound2DForOwnerThirdPerson_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SpawnChargeUpSound2DForOwnerThirdPerson;
	static void NewProp_DestroyChargeUpSoundWhenChargeUpCanceled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DestroyChargeUpSoundWhenChargeUpCanceled;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChargeUpSoundAttenuationOverride;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThirdPersonChargeUpSoundAttenuationOverride;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadGunSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedContinuousFireSound;
	static void NewProp_BulletWhizzingSoundVolumeBasedOnSpeed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_BulletWhizzingSoundVolumeBasedOnSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultBulletHitSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletHitSounds_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletHitSounds_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_BulletHitSounds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultBulletHitDecal;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletHitDecals_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletHitDecals_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_BulletHitDecals;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BulletHitDecalSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UseActorClassesForHitMarkers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitMarkerActorSounds_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_HitMarkerActorSounds_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_HitMarkerActorSounds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitMarkerSurfaceSounds_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitMarkerSurfaceSounds_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_HitMarkerSurfaceSounds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UseFireArmsAnimation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireArmsAnimationMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireArmsAnimation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireGunAnimation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChargeUpArmsAnimationMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChargeUpArmsAnimation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChargeUpGunAnimation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UseADS;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SwitchPerspectiveWhenAiming;
	static void NewProp_DivideAimingFOV_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DivideAimingFOV;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ADSFOV;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomFOV;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToADS;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToZoom;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ADSArmsLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ADSArmsRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ZoomArmsLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ZoomArmsRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VerticalRecoil;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HorizontalRecoil;
	static const UECodeGen_Private::FClassPropertyParams NewProp_FireCameraShake;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DamageType;
	static void NewProp_CanCrumbleDestructibleMeshes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanCrumbleDestructibleMeshes;
	static void NewProp_CrumbleDestructibleMeshesWithEveryShotgunPellet_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CrumbleDestructibleMeshesWithEveryShotgunPellet;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DestructionSphereSize;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DestructionSphereToSpawn;
	static void NewProp_ShowBulletPath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowBulletPath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BulletPathColor;
	static void NewProp_BulletPathPersists_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_BulletPathPersists;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BulletPathDuration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GunHitEffectsReplication;
	static void NewProp_SwitchedFireToServer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SwitchedFireToServer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CheckForOwnerTimerHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DespawnTimerHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChargeUpTimerHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CancelChargeUpTimerHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnProjectileTimerHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FireTimerHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FireFullAutoTimerHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BurstFireTimerHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CancelSmokeEffectTimerHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DestroySmokeEffectTimerHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BulletHitModeTimerHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMultiplayerGun_AddPredeterminedSpread, "AddPredeterminedSpread" }, // 2730258481
		{ &Z_Construct_UFunction_AMultiplayerGun_AddRecoil_BP, "AddRecoil_BP" }, // 352764097
		{ &Z_Construct_UFunction_AMultiplayerGun_ApplyPerspective, "ApplyPerspective" }, // 3806751337
		{ &Z_Construct_UFunction_AMultiplayerGun_ApplyPerspective_BP, "ApplyPerspective_BP" }, // 645246866
		{ &Z_Construct_UFunction_AMultiplayerGun_CallBulletHitDelegate, "CallBulletHitDelegate" }, // 2526698964
		{ &Z_Construct_UFunction_AMultiplayerGun_CancelChargeUp, "CancelChargeUp" }, // 4155403434
		{ &Z_Construct_UFunction_AMultiplayerGun_CancelChargeUp1, "CancelChargeUp1" }, // 3791337713
		{ &Z_Construct_UFunction_AMultiplayerGun_CancelChargeUp_BP, "CancelChargeUp_BP" }, // 2542835823
		{ &Z_Construct_UFunction_AMultiplayerGun_CancelSmokeEffect, "CancelSmokeEffect" }, // 1067519287
		{ &Z_Construct_UFunction_AMultiplayerGun_ChargeUp, "ChargeUp" }, // 1024995823
		{ &Z_Construct_UFunction_AMultiplayerGun_ChargeUp1, "ChargeUp1" }, // 1104877037
		{ &Z_Construct_UFunction_AMultiplayerGun_ChargeUp_BP, "ChargeUp_BP" }, // 500331106
		{ &Z_Construct_UFunction_AMultiplayerGun_CheckBulletCasingLimit, "CheckBulletCasingLimit" }, // 2882867566
		{ &Z_Construct_UFunction_AMultiplayerGun_CheckForOwner, "CheckForOwner" }, // 3571210799
		{ &Z_Construct_UFunction_AMultiplayerGun_ClientFire, "ClientFire" }, // 4191027175
		{ &Z_Construct_UFunction_AMultiplayerGun_ClientFire_BP, "ClientFire_BP" }, // 3258375683
		{ &Z_Construct_UFunction_AMultiplayerGun_ContinuousFire, "ContinuousFire" }, // 2087044903
		{ &Z_Construct_UFunction_AMultiplayerGun_ContinuousFire_BP, "ContinuousFire_BP" }, // 1885151359
		{ &Z_Construct_UFunction_AMultiplayerGun_CoolDown_BP, "CoolDown_BP" }, // 2412432494
		{ &Z_Construct_UFunction_AMultiplayerGun_DestroySelf, "DestroySelf" }, // 4066851428
		{ &Z_Construct_UFunction_AMultiplayerGun_DestroySmokeEffect_BP, "DestroySmokeEffect_BP" }, // 1957647834
		{ &Z_Construct_UFunction_AMultiplayerGun_ExecuteHitFunction, "ExecuteHitFunction" }, // 62108132
		{ &Z_Construct_UFunction_AMultiplayerGun_Fire, "Fire" }, // 3655589598
		{ &Z_Construct_UFunction_AMultiplayerGun_Fire_BP, "Fire_BP" }, // 3310874417
		{ &Z_Construct_UFunction_AMultiplayerGun_FireInput, "FireInput" }, // 1665374204
		{ &Z_Construct_UFunction_AMultiplayerGun_GetADSArmsLocation, "GetADSArmsLocation" }, // 3075310309
		{ &Z_Construct_UFunction_AMultiplayerGun_GetADSArmsRotation, "GetADSArmsRotation" }, // 4281720611
		{ &Z_Construct_UFunction_AMultiplayerGun_GetADSFOV, "GetADSFOV" }, // 64273308
		{ &Z_Construct_UFunction_AMultiplayerGun_GetAmmoInMagazine, "GetAmmoInMagazine" }, // 3832420178
		{ &Z_Construct_UFunction_AMultiplayerGun_GetBulletCasingSceneToUse, "GetBulletCasingSceneToUse" }, // 3130476185
		{ &Z_Construct_UFunction_AMultiplayerGun_GetCaliberToUse, "GetCaliberToUse" }, // 3418821282
		{ &Z_Construct_UFunction_AMultiplayerGun_GetCanShoot, "GetCanShoot" }, // 1835344650
		{ &Z_Construct_UFunction_AMultiplayerGun_GetChargeUpArmsAnimation, "GetChargeUpArmsAnimation" }, // 2886807894
		{ &Z_Construct_UFunction_AMultiplayerGun_GetChargeUpArmsAnimationMontage, "GetChargeUpArmsAnimationMontage" }, // 873984112
		{ &Z_Construct_UFunction_AMultiplayerGun_GetChargeUpTime, "GetChargeUpTime" }, // 986731955
		{ &Z_Construct_UFunction_AMultiplayerGun_GetChargeUpTimeRemaining, "GetChargeUpTimeRemaining" }, // 3769899478
		{ &Z_Construct_UFunction_AMultiplayerGun_GetCurrentChargeUpProgress, "GetCurrentChargeUpProgress" }, // 1527944792
		{ &Z_Construct_UFunction_AMultiplayerGun_GetCurrentHeat, "GetCurrentHeat" }, // 3098223788
		{ &Z_Construct_UFunction_AMultiplayerGun_GetDivideAimingFOV, "GetDivideAimingFOV" }, // 2854367705
		{ &Z_Construct_UFunction_AMultiplayerGun_GetDoesOverheat, "GetDoesOverheat" }, // 679255904
		{ &Z_Construct_UFunction_AMultiplayerGun_GetFireMode, "GetFireMode" }, // 1940970410
		{ &Z_Construct_UFunction_AMultiplayerGun_GetFireSceneToUse, "GetFireSceneToUse" }, // 1899631489
		{ &Z_Construct_UFunction_AMultiplayerGun_GetGunMesh, "GetGunMesh" }, // 3268658408
		{ &Z_Construct_UFunction_AMultiplayerGun_GetHasChargeUp, "GetHasChargeUp" }, // 3736297512
		{ &Z_Construct_UFunction_AMultiplayerGun_GetHitMarkerActorSounds, "GetHitMarkerActorSounds" }, // 312943705
		{ &Z_Construct_UFunction_AMultiplayerGun_GetHitMarkerSurfaceSounds, "GetHitMarkerSurfaceSounds" }, // 2849341782
		{ &Z_Construct_UFunction_AMultiplayerGun_GetHoldTriggerDuringChargeUp, "GetHoldTriggerDuringChargeUp" }, // 1018658250
		{ &Z_Construct_UFunction_AMultiplayerGun_GetInfiniteAmmo, "GetInfiniteAmmo" }, // 3284067366
		{ &Z_Construct_UFunction_AMultiplayerGun_GetIsExplosive, "GetIsExplosive" }, // 3613307737
		{ &Z_Construct_UFunction_AMultiplayerGun_GetManuallySetGunLocation, "GetManuallySetGunLocation" }, // 3393579332
		{ &Z_Construct_UFunction_AMultiplayerGun_GetMaxAmmoInMagazine, "GetMaxAmmoInMagazine" }, // 802457459
		{ &Z_Construct_UFunction_AMultiplayerGun_GetMaxHeat, "GetMaxHeat" }, // 1775318102
		{ &Z_Construct_UFunction_AMultiplayerGun_GetMaxReserveAmmo, "GetMaxReserveAmmo" }, // 3953796515
		{ &Z_Construct_UFunction_AMultiplayerGun_GetOwningPlayer, "GetOwningPlayer" }, // 3675164470
		{ &Z_Construct_UFunction_AMultiplayerGun_GetOwningPlayerCast, "GetOwningPlayerCast" }, // 151099360
		{ &Z_Construct_UFunction_AMultiplayerGun_GetPlayerArmsRelativeLocation, "GetPlayerArmsRelativeLocation" }, // 1798500332
		{ &Z_Construct_UFunction_AMultiplayerGun_GetPlayerArmsRelativeRotation, "GetPlayerArmsRelativeRotation" }, // 2224031031
		{ &Z_Construct_UFunction_AMultiplayerGun_GetReloadGunSound, "GetReloadGunSound" }, // 3517788741
		{ &Z_Construct_UFunction_AMultiplayerGun_GetReserveAmmo, "GetReserveAmmo" }, // 66283151
		{ &Z_Construct_UFunction_AMultiplayerGun_GetSharedCaliberAmount, "GetSharedCaliberAmount" }, // 2939743768
		{ &Z_Construct_UFunction_AMultiplayerGun_GetSocketName, "GetSocketName" }, // 3180047703
		{ &Z_Construct_UFunction_AMultiplayerGun_GetSwitchPerspectiveWhenAiming, "GetSwitchPerspectiveWhenAiming" }, // 3463143033
		{ &Z_Construct_UFunction_AMultiplayerGun_GetThirdPersonGunMesh, "GetThirdPersonGunMesh" }, // 2283414804
		{ &Z_Construct_UFunction_AMultiplayerGun_GetTimeToADS, "GetTimeToADS" }, // 109292189
		{ &Z_Construct_UFunction_AMultiplayerGun_GetTimeToZoom, "GetTimeToZoom" }, // 1124173484
		{ &Z_Construct_UFunction_AMultiplayerGun_GetUseActorClassesForHitMarkers, "GetUseActorClassesForHitMarkers" }, // 1818041687
		{ &Z_Construct_UFunction_AMultiplayerGun_GetUseADS, "GetUseADS" }, // 3208499998
		{ &Z_Construct_UFunction_AMultiplayerGun_GetUseProjectile, "GetUseProjectile" }, // 1304604874
		{ &Z_Construct_UFunction_AMultiplayerGun_GetUseSharedCalibers, "GetUseSharedCalibers" }, // 493732714
		{ &Z_Construct_UFunction_AMultiplayerGun_GetUsingThirdPerson, "GetUsingThirdPerson" }, // 4108620313
		{ &Z_Construct_UFunction_AMultiplayerGun_GetWasPickedup, "GetWasPickedup" }, // 927183883
		{ &Z_Construct_UFunction_AMultiplayerGun_GetZoomArmsLocation, "GetZoomArmsLocation" }, // 1662274593
		{ &Z_Construct_UFunction_AMultiplayerGun_GetZoomArmsRotation, "GetZoomArmsRotation" }, // 3654947262
		{ &Z_Construct_UFunction_AMultiplayerGun_GetZoomFOV, "GetZoomFOV" }, // 4282680857
		{ &Z_Construct_UFunction_AMultiplayerGun_HolsterWeapon, "HolsterWeapon" }, // 1880367031
		{ &Z_Construct_UFunction_AMultiplayerGun_HolsterWeapon_BP, "HolsterWeapon_BP" }, // 1213723286
		{ &Z_Construct_UFunction_AMultiplayerGun_MulticastReload, "MulticastReload" }, // 2952476806
		{ &Z_Construct_UFunction_AMultiplayerGun_MulticastSetOwningPlayer, "MulticastSetOwningPlayer" }, // 1452889208
		{ &Z_Construct_UFunction_AMultiplayerGun_MulticastSetPickupCollisionEnabled, "MulticastSetPickupCollisionEnabled" }, // 1513065343
		{ &Z_Construct_UFunction_AMultiplayerGun_MulticastSetUsingThirdPerson, "MulticastSetUsingThirdPerson" }, // 1860134875
		{ &Z_Construct_UFunction_AMultiplayerGun_MulticastSetWasPickedup, "MulticastSetWasPickedup" }, // 2711681027
		{ &Z_Construct_UFunction_AMultiplayerGun_OnRep_GunHitEffects, "OnRep_GunHitEffects" }, // 2992867911
		{ &Z_Construct_UFunction_AMultiplayerGun_Overheat_BP, "Overheat_BP" }, // 266543877
		{ &Z_Construct_UFunction_AMultiplayerGun_PrintDistanceTraved_BP, "PrintDistanceTraved_BP" }, // 3075515591
		{ &Z_Construct_UFunction_AMultiplayerGun_Reload, "Reload" }, // 1007175103
		{ &Z_Construct_UFunction_AMultiplayerGun_Reload_BP, "Reload_BP" }, // 990334803
		{ &Z_Construct_UFunction_AMultiplayerGun_ServerContinuousFire, "ServerContinuousFire" }, // 1012390338
		{ &Z_Construct_UFunction_AMultiplayerGun_ServerFire, "ServerFire" }, // 1427219666
		{ &Z_Construct_UFunction_AMultiplayerGun_ServerFire_BP, "ServerFire_BP" }, // 1622997130
		{ &Z_Construct_UFunction_AMultiplayerGun_ServerReload, "ServerReload" }, // 3995441228
		{ &Z_Construct_UFunction_AMultiplayerGun_ServerReload_BP, "ServerReload_BP" }, // 2394082101
		{ &Z_Construct_UFunction_AMultiplayerGun_ServerSetOwningPlayer, "ServerSetOwningPlayer" }, // 3473641893
		{ &Z_Construct_UFunction_AMultiplayerGun_ServerSetPickupCollisionEnabled, "ServerSetPickupCollisionEnabled" }, // 951898651
		{ &Z_Construct_UFunction_AMultiplayerGun_ServerSetUsingThirdPerson, "ServerSetUsingThirdPerson" }, // 2353327014
		{ &Z_Construct_UFunction_AMultiplayerGun_ServerSetWasPickedup, "ServerSetWasPickedup" }, // 3483878143
		{ &Z_Construct_UFunction_AMultiplayerGun_ServerShotgunFire, "ServerShotgunFire" }, // 243069440
		{ &Z_Construct_UFunction_AMultiplayerGun_ServerStopFiring, "ServerStopFiring" }, // 3893884263
		{ &Z_Construct_UFunction_AMultiplayerGun_SetADSArmsLocation, "SetADSArmsLocation" }, // 3004304002
		{ &Z_Construct_UFunction_AMultiplayerGun_SetADSArmsRotation, "SetADSArmsRotation" }, // 1692248558
		{ &Z_Construct_UFunction_AMultiplayerGun_SetADSFOV, "SetADSFOV" }, // 3618502337
		{ &Z_Construct_UFunction_AMultiplayerGun_SetAmmoInMagazine, "SetAmmoInMagazine" }, // 935993371
		{ &Z_Construct_UFunction_AMultiplayerGun_SetCaliberToUse, "SetCaliberToUse" }, // 3892414317
		{ &Z_Construct_UFunction_AMultiplayerGun_SetCanShoot, "SetCanShoot" }, // 346240513
		{ &Z_Construct_UFunction_AMultiplayerGun_SetChargeUpProgressTimeForTimeline, "SetChargeUpProgressTimeForTimeline" }, // 1050272383
		{ &Z_Construct_UFunction_AMultiplayerGun_SetChargeUpTime, "SetChargeUpTime" }, // 3362545732
		{ &Z_Construct_UFunction_AMultiplayerGun_SetCurrentChargeUpProgress, "SetCurrentChargeUpProgress" }, // 3354348236
		{ &Z_Construct_UFunction_AMultiplayerGun_SetDivideAimingFOV, "SetDivideAimingFOV" }, // 2642013700
		{ &Z_Construct_UFunction_AMultiplayerGun_SetFireMode, "SetFireMode" }, // 3984751358
		{ &Z_Construct_UFunction_AMultiplayerGun_SetHasChargeUp, "SetHasChargeUp" }, // 2471284353
		{ &Z_Construct_UFunction_AMultiplayerGun_SetHitMarkerActorSounds, "SetHitMarkerActorSounds" }, // 1176539679
		{ &Z_Construct_UFunction_AMultiplayerGun_SetHitMarkerSurfaceSounds, "SetHitMarkerSurfaceSounds" }, // 3585237861
		{ &Z_Construct_UFunction_AMultiplayerGun_SetHoldTriggerDuringChargeUp, "SetHoldTriggerDuringChargeUp" }, // 1919779614
		{ &Z_Construct_UFunction_AMultiplayerGun_SetInfiniteAmmo, "SetInfiniteAmmo" }, // 3951831440
		{ &Z_Construct_UFunction_AMultiplayerGun_SetIsExplosive, "SetIsExplosive" }, // 2027114648
		{ &Z_Construct_UFunction_AMultiplayerGun_SetManuallySetGunLocation, "SetManuallySetGunLocation" }, // 3120185406
		{ &Z_Construct_UFunction_AMultiplayerGun_SetOwningPlayer, "SetOwningPlayer" }, // 726103515
		{ &Z_Construct_UFunction_AMultiplayerGun_SetPickupCollisionEnabled, "SetPickupCollisionEnabled" }, // 4020565095
		{ &Z_Construct_UFunction_AMultiplayerGun_SetReloadGunSound, "SetReloadGunSound" }, // 1055869463
		{ &Z_Construct_UFunction_AMultiplayerGun_SetSocketName, "SetSocketName" }, // 490335757
		{ &Z_Construct_UFunction_AMultiplayerGun_SetSwitchPerspectiveWhenAiming, "SetSwitchPerspectiveWhenAiming" }, // 3986342696
		{ &Z_Construct_UFunction_AMultiplayerGun_SetTimeToADS, "SetTimeToADS" }, // 729324826
		{ &Z_Construct_UFunction_AMultiplayerGun_SetTimeToZoom, "SetTimeToZoom" }, // 1328197561
		{ &Z_Construct_UFunction_AMultiplayerGun_SetUseActorClassesForHitMarkers, "SetUseActorClassesForHitMarkers" }, // 1006489408
		{ &Z_Construct_UFunction_AMultiplayerGun_SetUseADS, "SetUseADS" }, // 1230044037
		{ &Z_Construct_UFunction_AMultiplayerGun_SetUseSharedCalibers, "SetUseSharedCalibers" }, // 2692033838
		{ &Z_Construct_UFunction_AMultiplayerGun_SetUsingThirdPerson, "SetUsingThirdPerson" }, // 3484940840
		{ &Z_Construct_UFunction_AMultiplayerGun_SetWasPickedup, "SetWasPickedup" }, // 4055751771
		{ &Z_Construct_UFunction_AMultiplayerGun_SetWasPickedup_BP, "SetWasPickedup_BP" }, // 2874246258
		{ &Z_Construct_UFunction_AMultiplayerGun_SetZoomArmsLocation, "SetZoomArmsLocation" }, // 2835585770
		{ &Z_Construct_UFunction_AMultiplayerGun_SetZoomArmsRotation, "SetZoomArmsRotation" }, // 3298855431
		{ &Z_Construct_UFunction_AMultiplayerGun_SetZoomFOV, "SetZoomFOV" }, // 731322953
		{ &Z_Construct_UFunction_AMultiplayerGun_ShotgunFire, "ShotgunFire" }, // 550658246
		{ &Z_Construct_UFunction_AMultiplayerGun_SpawnBulletCasing, "SpawnBulletCasing" }, // 1350010239
		{ &Z_Construct_UFunction_AMultiplayerGun_SpawnProjectile, "SpawnProjectile" }, // 781418311
		{ &Z_Construct_UFunction_AMultiplayerGun_SpawnSmokeEffect_BP, "SpawnSmokeEffect_BP" }, // 2803150914
		{ &Z_Construct_UFunction_AMultiplayerGun_StopContinuousFire_BP, "StopContinuousFire_BP" }, // 3956893160
		{ &Z_Construct_UFunction_AMultiplayerGun_StopFiring, "StopFiring" }, // 594280022
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMultiplayerGun>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_OnBulletHit = { "OnBulletHit", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, OnBulletHit), Z_Construct_UDelegateFunction_MultiplayerFPS_OnBulletHit__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBulletHit_MetaData), NewProp_OnBulletHit_MetaData) }; // 921080338
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_GunStaticMesh = { "GunStaticMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, GunStaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GunStaticMesh_MetaData), NewProp_GunStaticMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_GunSkeletalMesh = { "GunSkeletalMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, GunSkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GunSkeletalMesh_MetaData), NewProp_GunSkeletalMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ThirdPersonGunStaticMesh = { "ThirdPersonGunStaticMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ThirdPersonGunStaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdPersonGunStaticMesh_MetaData), NewProp_ThirdPersonGunStaticMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ThirdPersonGunSkeletalMesh = { "ThirdPersonGunSkeletalMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ThirdPersonGunSkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdPersonGunSkeletalMesh_MetaData), NewProp_ThirdPersonGunSkeletalMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_GripSceneComponent = { "GripSceneComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, GripSceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GripSceneComponent_MetaData), NewProp_GripSceneComponent_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UseSkeletalMesh_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->UseSkeletalMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UseSkeletalMesh = { "UseSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UseSkeletalMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseSkeletalMesh_MetaData), NewProp_UseSkeletalMesh_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_WeaponName = { "WeaponName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, WeaponName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponName_MetaData), NewProp_WeaponName_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_WasPickedupBeginPlay_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->WasPickedupBeginPlay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_WasPickedupBeginPlay = { "WasPickedupBeginPlay", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_WasPickedupBeginPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WasPickedupBeginPlay_MetaData), NewProp_WasPickedupBeginPlay_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ShouldDivideMovementSpeedPenalty_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->ShouldDivideMovementSpeedPenalty = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ShouldDivideMovementSpeedPenalty = { "ShouldDivideMovementSpeedPenalty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ShouldDivideMovementSpeedPenalty_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShouldDivideMovementSpeedPenalty_MetaData), NewProp_ShouldDivideMovementSpeedPenalty_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ShouldDivideSprintSpeedPenalty_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->ShouldDivideSprintSpeedPenalty = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ShouldDivideSprintSpeedPenalty = { "ShouldDivideSprintSpeedPenalty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ShouldDivideSprintSpeedPenalty_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShouldDivideSprintSpeedPenalty_MetaData), NewProp_ShouldDivideSprintSpeedPenalty_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_MovementSpeedPenalty = { "MovementSpeedPenalty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, MovementSpeedPenalty), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementSpeedPenalty_MetaData), NewProp_MovementSpeedPenalty_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SprintSpeedPenalty = { "SprintSpeedPenalty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, SprintSpeedPenalty), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintSpeedPenalty_MetaData), NewProp_SprintSpeedPenalty_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ReloadSpeed = { "ReloadSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ReloadSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadSpeed_MetaData), NewProp_ReloadSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ReloadSpeed1 = { "ReloadSpeed1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ReloadSpeed1), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadSpeed1_MetaData), NewProp_ReloadSpeed1_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_FireMode = { "FireMode", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, FireMode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireMode_MetaData), NewProp_FireMode_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UseBoxCollisionForDamage_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->UseBoxCollisionForDamage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UseBoxCollisionForDamage = { "UseBoxCollisionForDamage", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UseBoxCollisionForDamage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseBoxCollisionForDamage_MetaData), NewProp_UseBoxCollisionForDamage_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_IsShotgun_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->IsShotgun = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_IsShotgun = { "IsShotgun", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_IsShotgun_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsShotgun_MetaData), NewProp_IsShotgun_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ShotgunAmountOfPellets = { "ShotgunAmountOfPellets", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ShotgunAmountOfPellets), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShotgunAmountOfPellets_MetaData), NewProp_ShotgunAmountOfPellets_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ShotgunAmountOfPelletsShot = { "ShotgunAmountOfPelletsShot", nullptr, (EPropertyFlags)0x0020080000000024, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ShotgunAmountOfPelletsShot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShotgunAmountOfPelletsShot_MetaData), NewProp_ShotgunAmountOfPelletsShot_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ShotgunPelletHitLocations_Inner = { "ShotgunPelletHitLocations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ShotgunPelletHitLocations = { "ShotgunPelletHitLocations", nullptr, (EPropertyFlags)0x0020080000000024, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ShotgunPelletHitLocations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShotgunPelletHitLocations_MetaData), NewProp_ShotgunPelletHitLocations_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_FireFromBarrel = { "FireFromBarrel", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, FireFromBarrel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireFromBarrel_MetaData), NewProp_FireFromBarrel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_BulletSpawnLocationOffset = { "BulletSpawnLocationOffset", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, BulletSpawnLocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletSpawnLocationOffset_MetaData), NewProp_BulletSpawnLocationOffset_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UseAimingSpreadMultiplier_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->UseAimingSpreadMultiplier = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UseAimingSpreadMultiplier = { "UseAimingSpreadMultiplier", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UseAimingSpreadMultiplier_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseAimingSpreadMultiplier_MetaData), NewProp_UseAimingSpreadMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SpreadAimingMultiplier = { "SpreadAimingMultiplier", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, SpreadAimingMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpreadAimingMultiplier_MetaData), NewProp_SpreadAimingMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_MinHipFireVerticalSpread = { "MinHipFireVerticalSpread", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, MinHipFireVerticalSpread), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinHipFireVerticalSpread_MetaData), NewProp_MinHipFireVerticalSpread_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_MaxHipFireVerticalSpread = { "MaxHipFireVerticalSpread", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, MaxHipFireVerticalSpread), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHipFireVerticalSpread_MetaData), NewProp_MaxHipFireVerticalSpread_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_MinHipFireHorizontalSpread = { "MinHipFireHorizontalSpread", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, MinHipFireHorizontalSpread), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinHipFireHorizontalSpread_MetaData), NewProp_MinHipFireHorizontalSpread_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_MaxHipFireHorizontalSpread = { "MaxHipFireHorizontalSpread", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, MaxHipFireHorizontalSpread), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHipFireHorizontalSpread_MetaData), NewProp_MaxHipFireHorizontalSpread_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_MinAimingFireVerticalSpread = { "MinAimingFireVerticalSpread", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, MinAimingFireVerticalSpread), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinAimingFireVerticalSpread_MetaData), NewProp_MinAimingFireVerticalSpread_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_MaxAimingFireVerticalSpread = { "MaxAimingFireVerticalSpread", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, MaxAimingFireVerticalSpread), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAimingFireVerticalSpread_MetaData), NewProp_MaxAimingFireVerticalSpread_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_MinAimingFireHorizontalSpread = { "MinAimingFireHorizontalSpread", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, MinAimingFireHorizontalSpread), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinAimingFireHorizontalSpread_MetaData), NewProp_MinAimingFireHorizontalSpread_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_MaxAimingFireHorizontalSpread = { "MaxAimingFireHorizontalSpread", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, MaxAimingFireHorizontalSpread), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAimingFireHorizontalSpread_MetaData), NewProp_MaxAimingFireHorizontalSpread_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_AutomaticallyAddPreDeterminedSpread_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->AutomaticallyAddPreDeterminedSpread = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_AutomaticallyAddPreDeterminedSpread = { "AutomaticallyAddPreDeterminedSpread", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_AutomaticallyAddPreDeterminedSpread_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutomaticallyAddPreDeterminedSpread_MetaData), NewProp_AutomaticallyAddPreDeterminedSpread_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_PreDeterminedSpread_Inner = { "PreDeterminedSpread", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_PreDeterminedSpread = { "PreDeterminedSpread", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, PreDeterminedSpread), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreDeterminedSpread_MetaData), NewProp_PreDeterminedSpread_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_PreDeterminedAimingSpread_Inner = { "PreDeterminedAimingSpread", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_PreDeterminedAimingSpread = { "PreDeterminedAimingSpread", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, PreDeterminedAimingSpread), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreDeterminedAimingSpread_MetaData), NewProp_PreDeterminedAimingSpread_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_PreDeterminedAimingSpreadWithMultiplier_Inner = { "PreDeterminedAimingSpreadWithMultiplier", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_PreDeterminedAimingSpreadWithMultiplier = { "PreDeterminedAimingSpreadWithMultiplier", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, PreDeterminedAimingSpreadWithMultiplier), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreDeterminedAimingSpreadWithMultiplier_MetaData), NewProp_PreDeterminedAimingSpreadWithMultiplier_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_PreDeterminedSpreadIndex = { "PreDeterminedSpreadIndex", nullptr, (EPropertyFlags)0x0020080000000024, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, PreDeterminedSpreadIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreDeterminedSpreadIndex_MetaData), NewProp_PreDeterminedSpreadIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_PreDeterminedAimingSpreadIndex = { "PreDeterminedAimingSpreadIndex", nullptr, (EPropertyFlags)0x0020080000000024, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, PreDeterminedAimingSpreadIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreDeterminedAimingSpreadIndex_MetaData), NewProp_PreDeterminedAimingSpreadIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_PreDeterminedAimingSpreadWithMultiplierIndex = { "PreDeterminedAimingSpreadWithMultiplierIndex", nullptr, (EPropertyFlags)0x0020080000000024, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, PreDeterminedAimingSpreadWithMultiplierIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreDeterminedAimingSpreadWithMultiplierIndex_MetaData), NewProp_PreDeterminedAimingSpreadWithMultiplierIndex_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_HasChargeUp_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->HasChargeUp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_HasChargeUp = { "HasChargeUp", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_HasChargeUp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasChargeUp_MetaData), NewProp_HasChargeUp_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_HoldTriggerDuringChargeUp_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->HoldTriggerDuringChargeUp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_HoldTriggerDuringChargeUp = { "HoldTriggerDuringChargeUp", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_HoldTriggerDuringChargeUp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoldTriggerDuringChargeUp_MetaData), NewProp_HoldTriggerDuringChargeUp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ChargeUpTime = { "ChargeUpTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ChargeUpTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChargeUpTime_MetaData), NewProp_ChargeUpTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_CurrentChargeUpProgress = { "CurrentChargeUpProgress", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, CurrentChargeUpProgress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentChargeUpProgress_MetaData), NewProp_CurrentChargeUpProgress_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ChargeUpParticleEffect = { "ChargeUpParticleEffect", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ChargeUpParticleEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChargeUpParticleEffect_MetaData), NewProp_ChargeUpParticleEffect_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SpawnedChargeUpParticleEffect = { "SpawnedChargeUpParticleEffect", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, SpawnedChargeUpParticleEffect), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedChargeUpParticleEffect_MetaData), NewProp_SpawnedChargeUpParticleEffect_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SpawnChargeUpParticleAttached_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->SpawnChargeUpParticleAttached = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SpawnChargeUpParticleAttached = { "SpawnChargeUpParticleAttached", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SpawnChargeUpParticleAttached_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnChargeUpParticleAttached_MetaData), NewProp_SpawnChargeUpParticleAttached_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_DestroyChargeUpParticleWhenChargeUpCanceled_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->DestroyChargeUpParticleWhenChargeUpCanceled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_DestroyChargeUpParticleWhenChargeUpCanceled = { "DestroyChargeUpParticleWhenChargeUpCanceled", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_DestroyChargeUpParticleWhenChargeUpCanceled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestroyChargeUpParticleWhenChargeUpCanceled_MetaData), NewProp_DestroyChargeUpParticleWhenChargeUpCanceled_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_DoesOverheat_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->DoesOverheat = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_DoesOverheat = { "DoesOverheat", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_DoesOverheat_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoesOverheat_MetaData), NewProp_DoesOverheat_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ProhibitFiringWhileCoolingDown = { "ProhibitFiringWhileCoolingDown", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ProhibitFiringWhileCoolingDown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProhibitFiringWhileCoolingDown_MetaData), NewProp_ProhibitFiringWhileCoolingDown_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ReachedMaxHeat_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->ReachedMaxHeat = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ReachedMaxHeat = { "ReachedMaxHeat", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ReachedMaxHeat_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReachedMaxHeat_MetaData), NewProp_ReachedMaxHeat_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_TimeToOverheat = { "TimeToOverheat", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, TimeToOverheat), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeToOverheat_MetaData), NewProp_TimeToOverheat_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_TimeToCooldown = { "TimeToCooldown", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, TimeToCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeToCooldown_MetaData), NewProp_TimeToCooldown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_MaxHeat = { "MaxHeat", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, MaxHeat), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHeat_MetaData), NewProp_MaxHeat_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_CurrentHeat = { "CurrentHeat", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, CurrentHeat), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHeat_MetaData), NewProp_CurrentHeat_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_IsOverheating_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->IsOverheating = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_IsOverheating = { "IsOverheating", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_IsOverheating_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsOverheating_MetaData), NewProp_IsOverheating_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_MinLookInputForWeaponSway = { "MinLookInputForWeaponSway", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, MinLookInputForWeaponSway), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinLookInputForWeaponSway_MetaData), NewProp_MinLookInputForWeaponSway_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ShouldHaveHorizontalWeaponSway_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->ShouldHaveHorizontalWeaponSway = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ShouldHaveHorizontalWeaponSway = { "ShouldHaveHorizontalWeaponSway", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ShouldHaveHorizontalWeaponSway_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShouldHaveHorizontalWeaponSway_MetaData), NewProp_ShouldHaveHorizontalWeaponSway_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ShouldHaveVerticalWeaponSway_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->ShouldHaveVerticalWeaponSway = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ShouldHaveVerticalWeaponSway = { "ShouldHaveVerticalWeaponSway", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ShouldHaveVerticalWeaponSway_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShouldHaveVerticalWeaponSway_MetaData), NewProp_ShouldHaveVerticalWeaponSway_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UseRotationForHorizontalWeaponSway = { "UseRotationForHorizontalWeaponSway", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, UseRotationForHorizontalWeaponSway), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseRotationForHorizontalWeaponSway_MetaData), NewProp_UseRotationForHorizontalWeaponSway_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_HorizontalWeaponSwayOppositeDirection_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->HorizontalWeaponSwayOppositeDirection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_HorizontalWeaponSwayOppositeDirection = { "HorizontalWeaponSwayOppositeDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_HorizontalWeaponSwayOppositeDirection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalWeaponSwayOppositeDirection_MetaData), NewProp_HorizontalWeaponSwayOppositeDirection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_MaxHorzontalWeaponSwayRotation = { "MaxHorzontalWeaponSwayRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, MaxHorzontalWeaponSwayRotation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHorzontalWeaponSwayRotation_MetaData), NewProp_MaxHorzontalWeaponSwayRotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_MaxHorzontalWeaponSwayDistance = { "MaxHorzontalWeaponSwayDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, MaxHorzontalWeaponSwayDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHorzontalWeaponSwayDistance_MetaData), NewProp_MaxHorzontalWeaponSwayDistance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UseRotationForVerticalWeaponSway = { "UseRotationForVerticalWeaponSway", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, UseRotationForVerticalWeaponSway), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseRotationForVerticalWeaponSway_MetaData), NewProp_UseRotationForVerticalWeaponSway_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_VerticalWeaponSwayOppositeDirection_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->VerticalWeaponSwayOppositeDirection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_VerticalWeaponSwayOppositeDirection = { "VerticalWeaponSwayOppositeDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_VerticalWeaponSwayOppositeDirection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalWeaponSwayOppositeDirection_MetaData), NewProp_VerticalWeaponSwayOppositeDirection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_MaxVerticalWeaponSwayRotation = { "MaxVerticalWeaponSwayRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, MaxVerticalWeaponSwayRotation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxVerticalWeaponSwayRotation_MetaData), NewProp_MaxVerticalWeaponSwayRotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_MaxVerticalWeaponSwayDistance = { "MaxVerticalWeaponSwayDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, MaxVerticalWeaponSwayDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxVerticalWeaponSwayDistance_MetaData), NewProp_MaxVerticalWeaponSwayDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_HorizontalWeaponSwaySpeed = { "HorizontalWeaponSwaySpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, HorizontalWeaponSwaySpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalWeaponSwaySpeed_MetaData), NewProp_HorizontalWeaponSwaySpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_VerticalWeaponSwaySpeed = { "VerticalWeaponSwaySpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, VerticalWeaponSwaySpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalWeaponSwaySpeed_MetaData), NewProp_VerticalWeaponSwaySpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_WeaponSwitchTime = { "WeaponSwitchTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, WeaponSwitchTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponSwitchTime_MetaData), NewProp_WeaponSwitchTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_WeaponSwitchAnimation = { "WeaponSwitchAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, WeaponSwitchAnimation), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponSwitchAnimation_MetaData), NewProp_WeaponSwitchAnimation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_WeaponSwitchAnimationMontage = { "WeaponSwitchAnimationMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, WeaponSwitchAnimationMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponSwitchAnimationMontage_MetaData), NewProp_WeaponSwitchAnimationMontage_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ResetArmsAnimationAfterWeaponSwitch_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->ResetArmsAnimationAfterWeaponSwitch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ResetArmsAnimationAfterWeaponSwitch = { "ResetArmsAnimationAfterWeaponSwitch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ResetArmsAnimationAfterWeaponSwitch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResetArmsAnimationAfterWeaponSwitch_MetaData), NewProp_ResetArmsAnimationAfterWeaponSwitch_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ThirdPersonWeaponSwitchAnimation = { "ThirdPersonWeaponSwitchAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ThirdPersonWeaponSwitchAnimation), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdPersonWeaponSwitchAnimation_MetaData), NewProp_ThirdPersonWeaponSwitchAnimation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ThirdPersonWeaponSwitchAnimationMontage = { "ThirdPersonWeaponSwitchAnimationMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ThirdPersonWeaponSwitchAnimationMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdPersonWeaponSwitchAnimationMontage_MetaData), NewProp_ThirdPersonWeaponSwitchAnimationMontage_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UseTwoWeaponSwitchAnimations_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->UseTwoWeaponSwitchAnimations = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UseTwoWeaponSwitchAnimations = { "UseTwoWeaponSwitchAnimations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UseTwoWeaponSwitchAnimations_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseTwoWeaponSwitchAnimations_MetaData), NewProp_UseTwoWeaponSwitchAnimations_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_WeaponSwitchAnimation1 = { "WeaponSwitchAnimation1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, WeaponSwitchAnimation1), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponSwitchAnimation1_MetaData), NewProp_WeaponSwitchAnimation1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_WeaponSwitchAnimation1Montage = { "WeaponSwitchAnimation1Montage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, WeaponSwitchAnimation1Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponSwitchAnimation1Montage_MetaData), NewProp_WeaponSwitchAnimation1Montage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ThirdPersonWeaponSwitchAnimation1 = { "ThirdPersonWeaponSwitchAnimation1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ThirdPersonWeaponSwitchAnimation1), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdPersonWeaponSwitchAnimation1_MetaData), NewProp_ThirdPersonWeaponSwitchAnimation1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ThirdPersonWeaponSwitchAnimation1Montage = { "ThirdPersonWeaponSwitchAnimation1Montage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ThirdPersonWeaponSwitchAnimation1Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdPersonWeaponSwitchAnimation1Montage_MetaData), NewProp_ThirdPersonWeaponSwitchAnimation1Montage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SwitchToGunAnimation = { "SwitchToGunAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, SwitchToGunAnimation), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwitchToGunAnimation_MetaData), NewProp_SwitchToGunAnimation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SwitchToGunAnimationMontage = { "SwitchToGunAnimationMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, SwitchToGunAnimationMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwitchToGunAnimationMontage_MetaData), NewProp_SwitchToGunAnimationMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SwitchOffGunAnimation = { "SwitchOffGunAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, SwitchOffGunAnimation), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwitchOffGunAnimation_MetaData), NewProp_SwitchOffGunAnimation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SwitchOffGunAnimationMontage = { "SwitchOffGunAnimationMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, SwitchOffGunAnimationMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwitchOffGunAnimationMontage_MetaData), NewProp_SwitchOffGunAnimationMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_HolsterWeaponGunAnimation = { "HolsterWeaponGunAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, HolsterWeaponGunAnimation), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HolsterWeaponGunAnimation_MetaData), NewProp_HolsterWeaponGunAnimation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_HolsterWeaponGunAnimationMontage = { "HolsterWeaponGunAnimationMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, HolsterWeaponGunAnimationMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HolsterWeaponGunAnimationMontage_MetaData), NewProp_HolsterWeaponGunAnimationMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_HolsterWeaponAnimation = { "HolsterWeaponAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, HolsterWeaponAnimation), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HolsterWeaponAnimation_MetaData), NewProp_HolsterWeaponAnimation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_HolsterWeaponAnimationMontage = { "HolsterWeaponAnimationMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, HolsterWeaponAnimationMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HolsterWeaponAnimationMontage_MetaData), NewProp_HolsterWeaponAnimationMontage_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ResetArmsAnimationAfterHolster_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->ResetArmsAnimationAfterHolster = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ResetArmsAnimationAfterHolster = { "ResetArmsAnimationAfterHolster", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ResetArmsAnimationAfterHolster_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResetArmsAnimationAfterHolster_MetaData), NewProp_ResetArmsAnimationAfterHolster_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_HolsterWeaponThirdPersonAnimation = { "HolsterWeaponThirdPersonAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, HolsterWeaponThirdPersonAnimation), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HolsterWeaponThirdPersonAnimation_MetaData), NewProp_HolsterWeaponThirdPersonAnimation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_HolsterWeaponThirdPersonAnimationMontage = { "HolsterWeaponThirdPersonAnimationMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, HolsterWeaponThirdPersonAnimationMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HolsterWeaponThirdPersonAnimationMontage_MetaData), NewProp_HolsterWeaponThirdPersonAnimationMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UnHolsterWeaponGunAnimation = { "UnHolsterWeaponGunAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, UnHolsterWeaponGunAnimation), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnHolsterWeaponGunAnimation_MetaData), NewProp_UnHolsterWeaponGunAnimation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UnHolsterWeaponGunAnimationMontage = { "UnHolsterWeaponGunAnimationMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, UnHolsterWeaponGunAnimationMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnHolsterWeaponGunAnimationMontage_MetaData), NewProp_UnHolsterWeaponGunAnimationMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UnHolsterWeaponAnimation = { "UnHolsterWeaponAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, UnHolsterWeaponAnimation), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnHolsterWeaponAnimation_MetaData), NewProp_UnHolsterWeaponAnimation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UnHolsterWeaponAnimationMontage = { "UnHolsterWeaponAnimationMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, UnHolsterWeaponAnimationMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnHolsterWeaponAnimationMontage_MetaData), NewProp_UnHolsterWeaponAnimationMontage_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ResetArmsAnimationAfterUnHolster_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->ResetArmsAnimationAfterUnHolster = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ResetArmsAnimationAfterUnHolster = { "ResetArmsAnimationAfterUnHolster", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ResetArmsAnimationAfterUnHolster_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResetArmsAnimationAfterUnHolster_MetaData), NewProp_ResetArmsAnimationAfterUnHolster_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UnHolsterWeaponThirdPersonAnimation = { "UnHolsterWeaponThirdPersonAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, UnHolsterWeaponThirdPersonAnimation), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnHolsterWeaponThirdPersonAnimation_MetaData), NewProp_UnHolsterWeaponThirdPersonAnimation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UnHolsterWeaponThirdPersonAnimationMontage = { "UnHolsterWeaponThirdPersonAnimationMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, UnHolsterWeaponThirdPersonAnimationMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnHolsterWeaponThirdPersonAnimationMontage_MetaData), NewProp_UnHolsterWeaponThirdPersonAnimationMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ReloadAnimation = { "ReloadAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ReloadAnimation), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadAnimation_MetaData), NewProp_ReloadAnimation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ReloadAnimationMontage = { "ReloadAnimationMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ReloadAnimationMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadAnimationMontage_MetaData), NewProp_ReloadAnimationMontage_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ResetArmsAnimationAfterReload_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->ResetArmsAnimationAfterReload = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ResetArmsAnimationAfterReload = { "ResetArmsAnimationAfterReload", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ResetArmsAnimationAfterReload_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResetArmsAnimationAfterReload_MetaData), NewProp_ResetArmsAnimationAfterReload_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ResetArmsAnimationAfterCanceledReload_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->ResetArmsAnimationAfterCanceledReload = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ResetArmsAnimationAfterCanceledReload = { "ResetArmsAnimationAfterCanceledReload", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ResetArmsAnimationAfterCanceledReload_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResetArmsAnimationAfterCanceledReload_MetaData), NewProp_ResetArmsAnimationAfterCanceledReload_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ReloadEmptyAnimation = { "ReloadEmptyAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ReloadEmptyAnimation), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadEmptyAnimation_MetaData), NewProp_ReloadEmptyAnimation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ReloadEmptyAnimationMontage = { "ReloadEmptyAnimationMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ReloadEmptyAnimationMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadEmptyAnimationMontage_MetaData), NewProp_ReloadEmptyAnimationMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ThirdPersonReloadAnimation = { "ThirdPersonReloadAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ThirdPersonReloadAnimation), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdPersonReloadAnimation_MetaData), NewProp_ThirdPersonReloadAnimation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ThirdPersonReloadAnimationMontage = { "ThirdPersonReloadAnimationMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ThirdPersonReloadAnimationMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdPersonReloadAnimationMontage_MetaData), NewProp_ThirdPersonReloadAnimationMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ThirdPersonReloadEmptyAnimation = { "ThirdPersonReloadEmptyAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ThirdPersonReloadEmptyAnimation), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdPersonReloadEmptyAnimation_MetaData), NewProp_ThirdPersonReloadEmptyAnimation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ThirdPersonReloadEmptyAnimationMontage = { "ThirdPersonReloadEmptyAnimationMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ThirdPersonReloadEmptyAnimationMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdPersonReloadEmptyAnimationMontage_MetaData), NewProp_ThirdPersonReloadEmptyAnimationMontage_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UseTwoReloadAnimations_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->UseTwoReloadAnimations = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UseTwoReloadAnimations = { "UseTwoReloadAnimations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UseTwoReloadAnimations_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseTwoReloadAnimations_MetaData), NewProp_UseTwoReloadAnimations_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ReloadAnimation1 = { "ReloadAnimation1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ReloadAnimation1), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadAnimation1_MetaData), NewProp_ReloadAnimation1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ReloadAnimation1Montage = { "ReloadAnimation1Montage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ReloadAnimation1Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadAnimation1Montage_MetaData), NewProp_ReloadAnimation1Montage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ReloadEmptyAnimation1 = { "ReloadEmptyAnimation1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ReloadEmptyAnimation1), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadEmptyAnimation1_MetaData), NewProp_ReloadEmptyAnimation1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ReloadEmptyAnimation1Montage = { "ReloadEmptyAnimation1Montage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ReloadEmptyAnimation1Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadEmptyAnimation1Montage_MetaData), NewProp_ReloadEmptyAnimation1Montage_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UseTwoThirdPersonReloadAnimations_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->UseTwoThirdPersonReloadAnimations = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UseTwoThirdPersonReloadAnimations = { "UseTwoThirdPersonReloadAnimations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UseTwoThirdPersonReloadAnimations_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseTwoThirdPersonReloadAnimations_MetaData), NewProp_UseTwoThirdPersonReloadAnimations_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ThirdPersonReloadAnimation1 = { "ThirdPersonReloadAnimation1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ThirdPersonReloadAnimation1), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdPersonReloadAnimation1_MetaData), NewProp_ThirdPersonReloadAnimation1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ThirdPersonReloadAnimation1Montage = { "ThirdPersonReloadAnimation1Montage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ThirdPersonReloadAnimation1Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdPersonReloadAnimation1Montage_MetaData), NewProp_ThirdPersonReloadAnimation1Montage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ThirdPersonReloadEmptyAnimation1 = { "ThirdPersonReloadEmptyAnimation1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ThirdPersonReloadEmptyAnimation1), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdPersonReloadEmptyAnimation1_MetaData), NewProp_ThirdPersonReloadEmptyAnimation1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ThirdPersonReloadEmptyAnimation1Montage = { "ThirdPersonReloadEmptyAnimation1Montage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ThirdPersonReloadEmptyAnimation1Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdPersonReloadEmptyAnimation1Montage_MetaData), NewProp_ThirdPersonReloadEmptyAnimation1Montage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ReloadGunAnimation = { "ReloadGunAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ReloadGunAnimation), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadGunAnimation_MetaData), NewProp_ReloadGunAnimation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ReloadGunAnimationMontage = { "ReloadGunAnimationMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ReloadGunAnimationMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadGunAnimationMontage_MetaData), NewProp_ReloadGunAnimationMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ReloadEmptyGunAnimation = { "ReloadEmptyGunAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ReloadEmptyGunAnimation), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadEmptyGunAnimation_MetaData), NewProp_ReloadEmptyGunAnimation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ReloadEmptyGunAnimationMontage = { "ReloadEmptyGunAnimationMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ReloadEmptyGunAnimationMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadEmptyGunAnimationMontage_MetaData), NewProp_ReloadEmptyGunAnimationMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SprintAnimation = { "SprintAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, SprintAnimation), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintAnimation_MetaData), NewProp_SprintAnimation_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_LoopSprintAnimation_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->LoopSprintAnimation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_LoopSprintAnimation = { "LoopSprintAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_LoopSprintAnimation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoopSprintAnimation_MetaData), NewProp_LoopSprintAnimation_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ResetArmsAnimationAfterUnSprinting_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->ResetArmsAnimationAfterUnSprinting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ResetArmsAnimationAfterUnSprinting = { "ResetArmsAnimationAfterUnSprinting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ResetArmsAnimationAfterUnSprinting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResetArmsAnimationAfterUnSprinting_MetaData), NewProp_ResetArmsAnimationAfterUnSprinting_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SetSprintingSpeedAfterAnimation_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->SetSprintingSpeedAfterAnimation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SetSprintingSpeedAfterAnimation = { "SetSprintingSpeedAfterAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SetSprintingSpeedAfterAnimation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SetSprintingSpeedAfterAnimation_MetaData), NewProp_SetSprintingSpeedAfterAnimation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UnSprintAnimation = { "UnSprintAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, UnSprintAnimation), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnSprintAnimation_MetaData), NewProp_UnSprintAnimation_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SetDefaultSpeedAfterAnimation_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->SetDefaultSpeedAfterAnimation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SetDefaultSpeedAfterAnimation = { "SetDefaultSpeedAfterAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SetDefaultSpeedAfterAnimation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SetDefaultSpeedAfterAnimation_MetaData), NewProp_SetDefaultSpeedAfterAnimation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ThirdPersonSprintAnimation = { "ThirdPersonSprintAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ThirdPersonSprintAnimation), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdPersonSprintAnimation_MetaData), NewProp_ThirdPersonSprintAnimation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ThirdPersonUnSprintAnimation = { "ThirdPersonUnSprintAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ThirdPersonUnSprintAnimation), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdPersonUnSprintAnimation_MetaData), NewProp_ThirdPersonUnSprintAnimation_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_LoopThirdPersonSprintAnimation_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->LoopThirdPersonSprintAnimation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_LoopThirdPersonSprintAnimation = { "LoopThirdPersonSprintAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_LoopThirdPersonSprintAnimation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoopThirdPersonSprintAnimation_MetaData), NewProp_LoopThirdPersonSprintAnimation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SpawnedBulletCasings_Inner = { "SpawnedBulletCasings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMultiplayerBulletCasing_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SpawnedBulletCasings = { "SpawnedBulletCasings", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, SpawnedBulletCasings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedBulletCasings_MetaData), NewProp_SpawnedBulletCasings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_FireSceneComponent = { "FireSceneComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, FireSceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireSceneComponent_MetaData), NewProp_FireSceneComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ThirdPersonFireSceneComponent = { "ThirdPersonFireSceneComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ThirdPersonFireSceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdPersonFireSceneComponent_MetaData), NewProp_ThirdPersonFireSceneComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_BulletCasingSceneComponent = { "BulletCasingSceneComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, BulletCasingSceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletCasingSceneComponent_MetaData), NewProp_BulletCasingSceneComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ThirdPersonBulletCasingSceneComponent = { "ThirdPersonBulletCasingSceneComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ThirdPersonBulletCasingSceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdPersonBulletCasingSceneComponent_MetaData), NewProp_ThirdPersonBulletCasingSceneComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_FireBoxScene = { "FireBoxScene", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, FireBoxScene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireBoxScene_MetaData), NewProp_FireBoxScene_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_DamageBoxCollision = { "DamageBoxCollision", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, DamageBoxCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageBoxCollision_MetaData), NewProp_DamageBoxCollision_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_OwningPlayer = { "OwningPlayer", nullptr, (EPropertyFlags)0x0020080000000024, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, OwningPlayer), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningPlayer_MetaData), NewProp_OwningPlayer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_OwningPlayerCast = { "OwningPlayerCast", nullptr, (EPropertyFlags)0x0020080000000024, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, OwningPlayerCast), Z_Construct_UClass_AMultiplayerCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningPlayerCast_MetaData), NewProp_OwningPlayerCast_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_CanShoot_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->CanShoot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_CanShoot = { "CanShoot", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_CanShoot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanShoot_MetaData), NewProp_CanShoot_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_AmmoInMagazine = { "AmmoInMagazine", nullptr, (EPropertyFlags)0x0020080000000025, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, AmmoInMagazine), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmmoInMagazine_MetaData), NewProp_AmmoInMagazine_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_MaxAmmoInMagazine = { "MaxAmmoInMagazine", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, MaxAmmoInMagazine), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAmmoInMagazine_MetaData), NewProp_MaxAmmoInMagazine_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ReserveAmmo = { "ReserveAmmo", nullptr, (EPropertyFlags)0x0020080000000025, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ReserveAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReserveAmmo_MetaData), NewProp_ReserveAmmo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_MaxReserveAmmo = { "MaxReserveAmmo", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, MaxReserveAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxReserveAmmo_MetaData), NewProp_MaxReserveAmmo_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UseSharedCalibers_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->UseSharedCalibers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UseSharedCalibers = { "UseSharedCalibers", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UseSharedCalibers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseSharedCalibers_MetaData), NewProp_UseSharedCalibers_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_CaliberToUse = { "CaliberToUse", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, CaliberToUse), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaliberToUse_MetaData), NewProp_CaliberToUse_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_InfiniteAmmo = { "InfiniteAmmo", nullptr, (EPropertyFlags)0x0020080000000025, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, InfiniteAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InfiniteAmmo_MetaData), NewProp_InfiniteAmmo_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_BulletCasingToSpawn = { "BulletCasingToSpawn", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, BulletCasingToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_AMultiplayerBulletCasing_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletCasingToSpawn_MetaData), NewProp_BulletCasingToSpawn_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_BulletCasingSpawnCollisionHandlingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_BulletCasingSpawnCollisionHandlingMethod = { "BulletCasingSpawnCollisionHandlingMethod", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, BulletCasingSpawnCollisionHandlingMethod), Z_Construct_UEnum_Engine_ESpawnActorCollisionHandlingMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletCasingSpawnCollisionHandlingMethod_MetaData), NewProp_BulletCasingSpawnCollisionHandlingMethod_MetaData) }; // 2749820453
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_BulletCasingInheritsVelocity_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->BulletCasingInheritsVelocity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_BulletCasingInheritsVelocity = { "BulletCasingInheritsVelocity", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_BulletCasingInheritsVelocity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletCasingInheritsVelocity_MetaData), NewProp_BulletCasingInheritsVelocity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_MaxAmountOfBulletCasings = { "MaxAmountOfBulletCasings", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, MaxAmountOfBulletCasings), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAmountOfBulletCasings_MetaData), NewProp_MaxAmountOfBulletCasings_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, FireRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireRate_MetaData), NewProp_FireRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ContinuousFireDamageRate = { "ContinuousFireDamageRate", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ContinuousFireDamageRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContinuousFireDamageRate_MetaData), NewProp_ContinuousFireDamageRate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_AmountOfShotsForBurst = { "AmountOfShotsForBurst", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, AmountOfShotsForBurst), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmountOfShotsForBurst_MetaData), NewProp_AmountOfShotsForBurst_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_AmountOfBurstShotsFired = { "AmountOfBurstShotsFired", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, AmountOfBurstShotsFired), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmountOfBurstShotsFired_MetaData), NewProp_AmountOfBurstShotsFired_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_FireRange = { "FireRange", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, FireRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireRange_MetaData), NewProp_FireRange_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_LaunchPhysicsObjects_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->LaunchPhysicsObjects = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_LaunchPhysicsObjects = { "LaunchPhysicsObjects", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_LaunchPhysicsObjects_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaunchPhysicsObjects_MetaData), NewProp_LaunchPhysicsObjects_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_LaunchObjectStrength = { "LaunchObjectStrength", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, LaunchObjectStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaunchObjectStrength_MetaData), NewProp_LaunchObjectStrength_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_LaunchObjectVelocityChange_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->LaunchObjectVelocityChange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_LaunchObjectVelocityChange = { "LaunchObjectVelocityChange", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_LaunchObjectVelocityChange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaunchObjectVelocityChange_MetaData), NewProp_LaunchObjectVelocityChange_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_IsExplosive_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->IsExplosive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_IsExplosive = { "IsExplosive", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_IsExplosive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsExplosive_MetaData), NewProp_IsExplosive_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ExplosionIgnoreOwner_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->ExplosionIgnoreOwner = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ExplosionIgnoreOwner = { "ExplosionIgnoreOwner", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ExplosionIgnoreOwner_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplosionIgnoreOwner_MetaData), NewProp_ExplosionIgnoreOwner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ExplosionIgnoredActors_Inner = { "ExplosionIgnoredActors", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ExplosionIgnoredActors = { "ExplosionIgnoredActors", nullptr, (EPropertyFlags)0x0020080000030005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ExplosionIgnoredActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplosionIgnoredActors_MetaData), NewProp_ExplosionIgnoredActors_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ExplosionIgnoredClasses_Inner = { "ExplosionIgnoredClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ExplosionIgnoredClasses = { "ExplosionIgnoredClasses", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ExplosionIgnoredClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplosionIgnoredClasses_MetaData), NewProp_ExplosionIgnoredClasses_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UseProjectile_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->UseProjectile = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UseProjectile = { "UseProjectile", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UseProjectile_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseProjectile_MetaData), NewProp_UseProjectile_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ProjectileToSpawn = { "ProjectileToSpawn", nullptr, (EPropertyFlags)0x0024080000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ProjectileToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_AMultiplayerProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileToSpawn_MetaData), NewProp_ProjectileToSpawn_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ProjectileSpawnCollisionHandlingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ProjectileSpawnCollisionHandlingMethod = { "ProjectileSpawnCollisionHandlingMethod", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ProjectileSpawnCollisionHandlingMethod), Z_Construct_UEnum_Engine_ESpawnActorCollisionHandlingMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileSpawnCollisionHandlingMethod_MetaData), NewProp_ProjectileSpawnCollisionHandlingMethod_MetaData) }; // 2749820453
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ProjectileInheritsVelocity_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->ProjectileInheritsVelocity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ProjectileInheritsVelocity = { "ProjectileInheritsVelocity", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ProjectileInheritsVelocity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileInheritsVelocity_MetaData), NewProp_ProjectileInheritsVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_TimeToDespawnProjectile = { "TimeToDespawnProjectile", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, TimeToDespawnProjectile), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeToDespawnProjectile_MetaData), NewProp_TimeToDespawnProjectile_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_CollisionChannel = { "CollisionChannel", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, CollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionChannel_MetaData), NewProp_CollisionChannel_MetaData) }; // 756624936
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_AdditionalActorsToIgnore_Inner = { "AdditionalActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_AdditionalActorsToIgnore = { "AdditionalActorsToIgnore", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, AdditionalActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalActorsToIgnore_MetaData), NewProp_AdditionalActorsToIgnore_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_DefaultDamage = { "DefaultDamage", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, DefaultDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultDamage_MetaData), NewProp_DefaultDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_Damage_ValueProp = { "Damage", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_Damage_Key_KeyProp = { "Damage_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, Damage), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ExplosiveDamageRadius = { "ExplosiveDamageRadius", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ExplosiveDamageRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplosiveDamageRadius_MetaData), NewProp_ExplosiveDamageRadius_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ExplosiveDoFullDamage_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->ExplosiveDoFullDamage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ExplosiveDoFullDamage = { "ExplosiveDoFullDamage", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ExplosiveDoFullDamage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplosiveDoFullDamage_MetaData), NewProp_ExplosiveDoFullDamage_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_BulletHitMode = { "BulletHitMode", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, BulletHitMode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletHitMode_MetaData), NewProp_BulletHitMode_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_DamageFalloffMultiplierAtRange_ValueProp = { "DamageFalloffMultiplierAtRange", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_DamageFalloffMultiplierAtRange_Key_KeyProp = { "DamageFalloffMultiplierAtRange_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_DamageFalloffMultiplierAtRange = { "DamageFalloffMultiplierAtRange", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, DamageFalloffMultiplierAtRange), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageFalloffMultiplierAtRange_MetaData), NewProp_DamageFalloffMultiplierAtRange_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_InterpolateDamageBetweenRanges_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->InterpolateDamageBetweenRanges = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_InterpolateDamageBetweenRanges = { "InterpolateDamageBetweenRanges", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_InterpolateDamageBetweenRanges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpolateDamageBetweenRanges_MetaData), NewProp_InterpolateDamageBetweenRanges_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_PrintDistanceTraveled_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->PrintDistanceTraveled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_PrintDistanceTraveled = { "PrintDistanceTraveled", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_PrintDistanceTraveled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrintDistanceTraveled_MetaData), NewProp_PrintDistanceTraveled_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UsingThirdPerson_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->UsingThirdPerson = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UsingThirdPerson = { "UsingThirdPerson", nullptr, (EPropertyFlags)0x0020080000000024, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UsingThirdPerson_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UsingThirdPerson_MetaData), NewProp_UsingThirdPerson_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_WasPickedup_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->WasPickedup = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_WasPickedup = { "WasPickedup", nullptr, (EPropertyFlags)0x0020080000000024, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_WasPickedup_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WasPickedup_MetaData), NewProp_WasPickedup_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_AmountOfTimesPickedup = { "AmountOfTimesPickedup", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, AmountOfTimesPickedup), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmountOfTimesPickedup_MetaData), NewProp_AmountOfTimesPickedup_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_TimeToDespawnAfterDropped = { "TimeToDespawnAfterDropped", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, TimeToDespawnAfterDropped), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeToDespawnAfterDropped_MetaData), NewProp_TimeToDespawnAfterDropped_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ManuallySetGunLocation_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->ManuallySetGunLocation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ManuallySetGunLocation = { "ManuallySetGunLocation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ManuallySetGunLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManuallySetGunLocation_MetaData), NewProp_ManuallySetGunLocation_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SnapToSocket = { "SnapToSocket", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, SnapToSocket), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapToSocket_MetaData), NewProp_SnapToSocket_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, SocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketName_MetaData), NewProp_SocketName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ThirdPersonSocketName = { "ThirdPersonSocketName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ThirdPersonSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdPersonSocketName_MetaData), NewProp_ThirdPersonSocketName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_GunRelativeLocation = { "GunRelativeLocation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, GunRelativeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GunRelativeLocation_MetaData), NewProp_GunRelativeLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_GunRelativeRotation = { "GunRelativeRotation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, GunRelativeRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GunRelativeRotation_MetaData), NewProp_GunRelativeRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ThirdPersonGunRelativeLocation = { "ThirdPersonGunRelativeLocation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ThirdPersonGunRelativeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdPersonGunRelativeLocation_MetaData), NewProp_ThirdPersonGunRelativeLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ThirdPersonGunRelativeRotation = { "ThirdPersonGunRelativeRotation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ThirdPersonGunRelativeRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdPersonGunRelativeRotation_MetaData), NewProp_ThirdPersonGunRelativeRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_PlayerArmsRelativeLocation = { "PlayerArmsRelativeLocation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, PlayerArmsRelativeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerArmsRelativeLocation_MetaData), NewProp_PlayerArmsRelativeLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_PlayerArmsRelativeRotation = { "PlayerArmsRelativeRotation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, PlayerArmsRelativeRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerArmsRelativeRotation_MetaData), NewProp_PlayerArmsRelativeRotation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_DefaultHitEffect = { "DefaultHitEffect", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, DefaultHitEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultHitEffect_MetaData), NewProp_DefaultHitEffect_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_HitEffectScale = { "HitEffectScale", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, HitEffectScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitEffectScale_MetaData), NewProp_HitEffectScale_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_HitEffects_ValueProp = { "HitEffects", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_HitEffects_Key_KeyProp = { "HitEffects_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_HitEffects = { "HitEffects", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, HitEffects), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitEffects_MetaData), NewProp_HitEffects_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_MuzzleFlash = { "MuzzleFlash", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, MuzzleFlash), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MuzzleFlash_MetaData), NewProp_MuzzleFlash_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SpawnMuzzleFlashAttached_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->SpawnMuzzleFlashAttached = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SpawnMuzzleFlashAttached = { "SpawnMuzzleFlashAttached", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SpawnMuzzleFlashAttached_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnMuzzleFlashAttached_MetaData), NewProp_SpawnMuzzleFlashAttached_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ReplicateMuzzleFlashLocation_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->ReplicateMuzzleFlashLocation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ReplicateMuzzleFlashLocation = { "ReplicateMuzzleFlashLocation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ReplicateMuzzleFlashLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicateMuzzleFlashLocation_MetaData), NewProp_ReplicateMuzzleFlashLocation_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UseFirstPersonRotationForThirdPersonMuzzleFlash_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->UseFirstPersonRotationForThirdPersonMuzzleFlash = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UseFirstPersonRotationForThirdPersonMuzzleFlash = { "UseFirstPersonRotationForThirdPersonMuzzleFlash", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UseFirstPersonRotationForThirdPersonMuzzleFlash_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseFirstPersonRotationForThirdPersonMuzzleFlash_MetaData), NewProp_UseFirstPersonRotationForThirdPersonMuzzleFlash_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SpawnedContinuousMuzzleFlash = { "SpawnedContinuousMuzzleFlash", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, SpawnedContinuousMuzzleFlash), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedContinuousMuzzleFlash_MetaData), NewProp_SpawnedContinuousMuzzleFlash_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SpawnSmokeEffectWhenShooting = { "SpawnSmokeEffectWhenShooting", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, SpawnSmokeEffectWhenShooting), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnSmokeEffectWhenShooting_MetaData), NewProp_SpawnSmokeEffectWhenShooting_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_AmountOfShotsToSpawnSmoke = { "AmountOfShotsToSpawnSmoke", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, AmountOfShotsToSpawnSmoke), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmountOfShotsToSpawnSmoke_MetaData), NewProp_AmountOfShotsToSpawnSmoke_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_AmountOfTimeToCancelSmoke = { "AmountOfTimeToCancelSmoke", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, AmountOfTimeToCancelSmoke), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmountOfTimeToCancelSmoke_MetaData), NewProp_AmountOfTimeToCancelSmoke_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_DestroySmokeEffectWhenNotShooting_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->DestroySmokeEffectWhenNotShooting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_DestroySmokeEffectWhenNotShooting = { "DestroySmokeEffectWhenNotShooting", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_DestroySmokeEffectWhenNotShooting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestroySmokeEffectWhenNotShooting_MetaData), NewProp_DestroySmokeEffectWhenNotShooting_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_DestroySmokeSoundWhenNotShooting_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->DestroySmokeSoundWhenNotShooting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_DestroySmokeSoundWhenNotShooting = { "DestroySmokeSoundWhenNotShooting", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_DestroySmokeSoundWhenNotShooting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestroySmokeSoundWhenNotShooting_MetaData), NewProp_DestroySmokeSoundWhenNotShooting_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_TimeToDestroySmokeWhenNotShooting = { "TimeToDestroySmokeWhenNotShooting", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, TimeToDestroySmokeWhenNotShooting), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeToDestroySmokeWhenNotShooting_MetaData), NewProp_TimeToDestroySmokeWhenNotShooting_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_TimeToDestroySmokeSoundWhenNotShooting = { "TimeToDestroySmokeSoundWhenNotShooting", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, TimeToDestroySmokeSoundWhenNotShooting), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeToDestroySmokeSoundWhenNotShooting_MetaData), NewProp_TimeToDestroySmokeSoundWhenNotShooting_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_PercentageOfOverheatToSpawnSmoke = { "PercentageOfOverheatToSpawnSmoke", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, PercentageOfOverheatToSpawnSmoke), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PercentageOfOverheatToSpawnSmoke_MetaData), NewProp_PercentageOfOverheatToSpawnSmoke_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SmokeEffectToSpawn = { "SmokeEffectToSpawn", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, SmokeEffectToSpawn), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmokeEffectToSpawn_MetaData), NewProp_SmokeEffectToSpawn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SpawnedSmokeEffect = { "SpawnedSmokeEffect", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, SpawnedSmokeEffect), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedSmokeEffect_MetaData), NewProp_SpawnedSmokeEffect_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SmokeSoundToSpawn = { "SmokeSoundToSpawn", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, SmokeSoundToSpawn), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmokeSoundToSpawn_MetaData), NewProp_SmokeSoundToSpawn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SpawnedSmokeSound = { "SpawnedSmokeSound", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, SpawnedSmokeSound), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedSmokeSound_MetaData), NewProp_SpawnedSmokeSound_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_BulletsShotForSmokeEffect = { "BulletsShotForSmokeEffect", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, BulletsShotForSmokeEffect), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletsShotForSmokeEffect_MetaData), NewProp_BulletsShotForSmokeEffect_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_BulletHitModeDelay = { "BulletHitModeDelay", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, BulletHitModeDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletHitModeDelay_MetaData), NewProp_BulletHitModeDelay_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_FireControllerVibration = { "FireControllerVibration", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, FireControllerVibration), Z_Construct_UClass_UForceFeedbackEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireControllerVibration_MetaData), NewProp_FireControllerVibration_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_FireControllerVibrationTag = { "FireControllerVibrationTag", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, FireControllerVibrationTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireControllerVibrationTag_MetaData), NewProp_FireControllerVibrationTag_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_BulletHitControllerVibration = { "BulletHitControllerVibration", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, BulletHitControllerVibration), Z_Construct_UClass_UForceFeedbackEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletHitControllerVibration_MetaData), NewProp_BulletHitControllerVibration_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_BulletHitControllerVibrationAttenuation = { "BulletHitControllerVibrationAttenuation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, BulletHitControllerVibrationAttenuation), Z_Construct_UClass_UForceFeedbackAttenuation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletHitControllerVibrationAttenuation_MetaData), NewProp_BulletHitControllerVibrationAttenuation_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_BulletHitControllerVibrationTag = { "BulletHitControllerVibrationTag", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, BulletHitControllerVibrationTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletHitControllerVibrationTag_MetaData), NewProp_BulletHitControllerVibrationTag_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_FireSound = { "FireSound", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireSound_MetaData), NewProp_FireSound_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SpawnFireSoundAttached_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->SpawnFireSoundAttached = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SpawnFireSoundAttached = { "SpawnFireSoundAttached", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SpawnFireSoundAttached_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnFireSoundAttached_MetaData), NewProp_SpawnFireSoundAttached_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SpawnFireSound2DForOwner_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->SpawnFireSound2DForOwner = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SpawnFireSound2DForOwner = { "SpawnFireSound2DForOwner", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SpawnFireSound2DForOwner_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnFireSound2DForOwner_MetaData), NewProp_SpawnFireSound2DForOwner_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SpawnFireSound2DForOwnerThirdPerson_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->SpawnFireSound2DForOwnerThirdPerson = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SpawnFireSound2DForOwnerThirdPerson = { "SpawnFireSound2DForOwnerThirdPerson", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SpawnFireSound2DForOwnerThirdPerson_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnFireSound2DForOwnerThirdPerson_MetaData), NewProp_SpawnFireSound2DForOwnerThirdPerson_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_FireSoundAttenuationOverride = { "FireSoundAttenuationOverride", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, FireSoundAttenuationOverride), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireSoundAttenuationOverride_MetaData), NewProp_FireSoundAttenuationOverride_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ThirdPersonFireSoundAttenuationOverride = { "ThirdPersonFireSoundAttenuationOverride", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ThirdPersonFireSoundAttenuationOverride), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdPersonFireSoundAttenuationOverride_MetaData), NewProp_ThirdPersonFireSoundAttenuationOverride_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ChargeUpSound = { "ChargeUpSound", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ChargeUpSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChargeUpSound_MetaData), NewProp_ChargeUpSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SpawnedChargeUpSound = { "SpawnedChargeUpSound", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, SpawnedChargeUpSound), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedChargeUpSound_MetaData), NewProp_SpawnedChargeUpSound_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SpawnChargeUpSoundAttached_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->SpawnChargeUpSoundAttached = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SpawnChargeUpSoundAttached = { "SpawnChargeUpSoundAttached", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SpawnChargeUpSoundAttached_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnChargeUpSoundAttached_MetaData), NewProp_SpawnChargeUpSoundAttached_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SpawnChargeUpSound2DForOwner_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->SpawnChargeUpSound2DForOwner = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SpawnChargeUpSound2DForOwner = { "SpawnChargeUpSound2DForOwner", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SpawnChargeUpSound2DForOwner_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnChargeUpSound2DForOwner_MetaData), NewProp_SpawnChargeUpSound2DForOwner_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SpawnChargeUpSound2DForOwnerThirdPerson_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->SpawnChargeUpSound2DForOwnerThirdPerson = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SpawnChargeUpSound2DForOwnerThirdPerson = { "SpawnChargeUpSound2DForOwnerThirdPerson", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SpawnChargeUpSound2DForOwnerThirdPerson_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnChargeUpSound2DForOwnerThirdPerson_MetaData), NewProp_SpawnChargeUpSound2DForOwnerThirdPerson_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_DestroyChargeUpSoundWhenChargeUpCanceled_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->DestroyChargeUpSoundWhenChargeUpCanceled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_DestroyChargeUpSoundWhenChargeUpCanceled = { "DestroyChargeUpSoundWhenChargeUpCanceled", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_DestroyChargeUpSoundWhenChargeUpCanceled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestroyChargeUpSoundWhenChargeUpCanceled_MetaData), NewProp_DestroyChargeUpSoundWhenChargeUpCanceled_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ChargeUpSoundAttenuationOverride = { "ChargeUpSoundAttenuationOverride", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ChargeUpSoundAttenuationOverride), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChargeUpSoundAttenuationOverride_MetaData), NewProp_ChargeUpSoundAttenuationOverride_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ThirdPersonChargeUpSoundAttenuationOverride = { "ThirdPersonChargeUpSoundAttenuationOverride", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ThirdPersonChargeUpSoundAttenuationOverride), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdPersonChargeUpSoundAttenuationOverride_MetaData), NewProp_ThirdPersonChargeUpSoundAttenuationOverride_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ReloadGunSound = { "ReloadGunSound", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ReloadGunSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadGunSound_MetaData), NewProp_ReloadGunSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SpawnedContinuousFireSound = { "SpawnedContinuousFireSound", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, SpawnedContinuousFireSound), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedContinuousFireSound_MetaData), NewProp_SpawnedContinuousFireSound_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_BulletWhizzingSoundVolumeBasedOnSpeed_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->BulletWhizzingSoundVolumeBasedOnSpeed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_BulletWhizzingSoundVolumeBasedOnSpeed = { "BulletWhizzingSoundVolumeBasedOnSpeed", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_BulletWhizzingSoundVolumeBasedOnSpeed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletWhizzingSoundVolumeBasedOnSpeed_MetaData), NewProp_BulletWhizzingSoundVolumeBasedOnSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_DefaultBulletHitSound = { "DefaultBulletHitSound", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, DefaultBulletHitSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultBulletHitSound_MetaData), NewProp_DefaultBulletHitSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_BulletHitSounds_ValueProp = { "BulletHitSounds", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_BulletHitSounds_Key_KeyProp = { "BulletHitSounds_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_BulletHitSounds = { "BulletHitSounds", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, BulletHitSounds), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletHitSounds_MetaData), NewProp_BulletHitSounds_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_DefaultBulletHitDecal = { "DefaultBulletHitDecal", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, DefaultBulletHitDecal), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultBulletHitDecal_MetaData), NewProp_DefaultBulletHitDecal_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_BulletHitDecals_ValueProp = { "BulletHitDecals", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_BulletHitDecals_Key_KeyProp = { "BulletHitDecals_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_BulletHitDecals = { "BulletHitDecals", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, BulletHitDecals), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletHitDecals_MetaData), NewProp_BulletHitDecals_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_BulletHitDecalSize = { "BulletHitDecalSize", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, BulletHitDecalSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletHitDecalSize_MetaData), NewProp_BulletHitDecalSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UseActorClassesForHitMarkers = { "UseActorClassesForHitMarkers", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, UseActorClassesForHitMarkers), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseActorClassesForHitMarkers_MetaData), NewProp_UseActorClassesForHitMarkers_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_HitMarkerActorSounds_ValueProp = { "HitMarkerActorSounds", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_HitMarkerActorSounds_Key_KeyProp = { "HitMarkerActorSounds_Key", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_HitMarkerActorSounds = { "HitMarkerActorSounds", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, HitMarkerActorSounds), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitMarkerActorSounds_MetaData), NewProp_HitMarkerActorSounds_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_HitMarkerSurfaceSounds_ValueProp = { "HitMarkerSurfaceSounds", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_HitMarkerSurfaceSounds_Key_KeyProp = { "HitMarkerSurfaceSounds_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_HitMarkerSurfaceSounds = { "HitMarkerSurfaceSounds", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, HitMarkerSurfaceSounds), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitMarkerSurfaceSounds_MetaData), NewProp_HitMarkerSurfaceSounds_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UseFireArmsAnimation = { "UseFireArmsAnimation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, UseFireArmsAnimation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseFireArmsAnimation_MetaData), NewProp_UseFireArmsAnimation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_FireArmsAnimationMontage = { "FireArmsAnimationMontage", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, FireArmsAnimationMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireArmsAnimationMontage_MetaData), NewProp_FireArmsAnimationMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_FireArmsAnimation = { "FireArmsAnimation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, FireArmsAnimation), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireArmsAnimation_MetaData), NewProp_FireArmsAnimation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_FireGunAnimation = { "FireGunAnimation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, FireGunAnimation), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireGunAnimation_MetaData), NewProp_FireGunAnimation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ChargeUpArmsAnimationMontage = { "ChargeUpArmsAnimationMontage", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ChargeUpArmsAnimationMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChargeUpArmsAnimationMontage_MetaData), NewProp_ChargeUpArmsAnimationMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ChargeUpArmsAnimation = { "ChargeUpArmsAnimation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ChargeUpArmsAnimation), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChargeUpArmsAnimation_MetaData), NewProp_ChargeUpArmsAnimation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ChargeUpGunAnimation = { "ChargeUpGunAnimation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ChargeUpGunAnimation), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChargeUpGunAnimation_MetaData), NewProp_ChargeUpGunAnimation_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UseADS = { "UseADS", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, UseADS), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseADS_MetaData), NewProp_UseADS_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SwitchPerspectiveWhenAiming = { "SwitchPerspectiveWhenAiming", nullptr, (EPropertyFlags)0x0020080000000025, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, SwitchPerspectiveWhenAiming), Z_Construct_UEnum_MultiplayerFPS_EAimSwitchPerspectiveType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwitchPerspectiveWhenAiming_MetaData), NewProp_SwitchPerspectiveWhenAiming_MetaData) }; // 1846365563
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_DivideAimingFOV_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->DivideAimingFOV = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_DivideAimingFOV = { "DivideAimingFOV", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_DivideAimingFOV_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DivideAimingFOV_MetaData), NewProp_DivideAimingFOV_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ADSFOV = { "ADSFOV", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ADSFOV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ADSFOV_MetaData), NewProp_ADSFOV_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ZoomFOV = { "ZoomFOV", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ZoomFOV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoomFOV_MetaData), NewProp_ZoomFOV_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_TimeToADS = { "TimeToADS", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, TimeToADS), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeToADS_MetaData), NewProp_TimeToADS_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_TimeToZoom = { "TimeToZoom", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, TimeToZoom), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeToZoom_MetaData), NewProp_TimeToZoom_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ADSArmsLocation = { "ADSArmsLocation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ADSArmsLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ADSArmsLocation_MetaData), NewProp_ADSArmsLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ADSArmsRotation = { "ADSArmsRotation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ADSArmsRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ADSArmsRotation_MetaData), NewProp_ADSArmsRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ZoomArmsLocation = { "ZoomArmsLocation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ZoomArmsLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoomArmsLocation_MetaData), NewProp_ZoomArmsLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ZoomArmsRotation = { "ZoomArmsRotation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ZoomArmsRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoomArmsRotation_MetaData), NewProp_ZoomArmsRotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_VerticalRecoil = { "VerticalRecoil", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, VerticalRecoil), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalRecoil_MetaData), NewProp_VerticalRecoil_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_HorizontalRecoil = { "HorizontalRecoil", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, HorizontalRecoil), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalRecoil_MetaData), NewProp_HorizontalRecoil_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_FireCameraShake = { "FireCameraShake", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, FireCameraShake), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireCameraShake_MetaData), NewProp_FireCameraShake_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, DamageType), Z_Construct_UClass_UClass, Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_CanCrumbleDestructibleMeshes_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->CanCrumbleDestructibleMeshes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_CanCrumbleDestructibleMeshes = { "CanCrumbleDestructibleMeshes", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_CanCrumbleDestructibleMeshes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanCrumbleDestructibleMeshes_MetaData), NewProp_CanCrumbleDestructibleMeshes_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_CrumbleDestructibleMeshesWithEveryShotgunPellet_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->CrumbleDestructibleMeshesWithEveryShotgunPellet = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_CrumbleDestructibleMeshesWithEveryShotgunPellet = { "CrumbleDestructibleMeshesWithEveryShotgunPellet", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_CrumbleDestructibleMeshesWithEveryShotgunPellet_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrumbleDestructibleMeshesWithEveryShotgunPellet_MetaData), NewProp_CrumbleDestructibleMeshesWithEveryShotgunPellet_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_DestructionSphereSize = { "DestructionSphereSize", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, DestructionSphereSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestructionSphereSize_MetaData), NewProp_DestructionSphereSize_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_DestructionSphereToSpawn = { "DestructionSphereToSpawn", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, DestructionSphereToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestructionSphereToSpawn_MetaData), NewProp_DestructionSphereToSpawn_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ShowBulletPath_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->ShowBulletPath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ShowBulletPath = { "ShowBulletPath", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ShowBulletPath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowBulletPath_MetaData), NewProp_ShowBulletPath_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_BulletPathColor = { "BulletPathColor", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, BulletPathColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletPathColor_MetaData), NewProp_BulletPathColor_MetaData) };
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_BulletPathPersists_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->BulletPathPersists = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_BulletPathPersists = { "BulletPathPersists", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_BulletPathPersists_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletPathPersists_MetaData), NewProp_BulletPathPersists_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_BulletPathDuration = { "BulletPathDuration", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, BulletPathDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletPathDuration_MetaData), NewProp_BulletPathDuration_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_GunHitEffectsReplication = { "GunHitEffectsReplication", "OnRep_GunHitEffects", (EPropertyFlags)0x0020088100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, GunHitEffectsReplication), Z_Construct_UScriptStruct_FGunHitEffectsReplication, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GunHitEffectsReplication_MetaData), NewProp_GunHitEffectsReplication_MetaData) }; // 1684226226
void Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SwitchedFireToServer_SetBit(void* Obj)
{
	((AMultiplayerGun*)Obj)->SwitchedFireToServer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SwitchedFireToServer = { "SwitchedFireToServer", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerGun), &Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SwitchedFireToServer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwitchedFireToServer_MetaData), NewProp_SwitchedFireToServer_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_CheckForOwnerTimerHandle = { "CheckForOwnerTimerHandle", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, CheckForOwnerTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckForOwnerTimerHandle_MetaData), NewProp_CheckForOwnerTimerHandle_MetaData) }; // 756291145
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_DespawnTimerHandle = { "DespawnTimerHandle", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, DespawnTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DespawnTimerHandle_MetaData), NewProp_DespawnTimerHandle_MetaData) }; // 756291145
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ChargeUpTimerHandle = { "ChargeUpTimerHandle", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, ChargeUpTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChargeUpTimerHandle_MetaData), NewProp_ChargeUpTimerHandle_MetaData) }; // 756291145
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_CancelChargeUpTimerHandle = { "CancelChargeUpTimerHandle", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, CancelChargeUpTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CancelChargeUpTimerHandle_MetaData), NewProp_CancelChargeUpTimerHandle_MetaData) }; // 756291145
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SpawnProjectileTimerHandle = { "SpawnProjectileTimerHandle", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, SpawnProjectileTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnProjectileTimerHandle_MetaData), NewProp_SpawnProjectileTimerHandle_MetaData) }; // 756291145
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_FireTimerHandle = { "FireTimerHandle", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, FireTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireTimerHandle_MetaData), NewProp_FireTimerHandle_MetaData) }; // 756291145
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_FireFullAutoTimerHandle = { "FireFullAutoTimerHandle", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, FireFullAutoTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireFullAutoTimerHandle_MetaData), NewProp_FireFullAutoTimerHandle_MetaData) }; // 756291145
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_BurstFireTimerHandle = { "BurstFireTimerHandle", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, BurstFireTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BurstFireTimerHandle_MetaData), NewProp_BurstFireTimerHandle_MetaData) }; // 756291145
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_CancelSmokeEffectTimerHandle = { "CancelSmokeEffectTimerHandle", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, CancelSmokeEffectTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CancelSmokeEffectTimerHandle_MetaData), NewProp_CancelSmokeEffectTimerHandle_MetaData) }; // 756291145
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_DestroySmokeEffectTimerHandle = { "DestroySmokeEffectTimerHandle", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, DestroySmokeEffectTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestroySmokeEffectTimerHandle_MetaData), NewProp_DestroySmokeEffectTimerHandle_MetaData) }; // 756291145
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_BulletHitModeTimerHandle = { "BulletHitModeTimerHandle", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGun, BulletHitModeTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletHitModeTimerHandle_MetaData), NewProp_BulletHitModeTimerHandle_MetaData) }; // 756291145
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMultiplayerGun_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_OnBulletHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_GunStaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_GunSkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ThirdPersonGunStaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ThirdPersonGunSkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_GripSceneComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UseSkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_WeaponName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_WasPickedupBeginPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ShouldDivideMovementSpeedPenalty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ShouldDivideSprintSpeedPenalty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_MovementSpeedPenalty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SprintSpeedPenalty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ReloadSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ReloadSpeed1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_FireMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UseBoxCollisionForDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_IsShotgun,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ShotgunAmountOfPellets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ShotgunAmountOfPelletsShot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ShotgunPelletHitLocations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ShotgunPelletHitLocations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_FireFromBarrel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_BulletSpawnLocationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UseAimingSpreadMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SpreadAimingMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_MinHipFireVerticalSpread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_MaxHipFireVerticalSpread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_MinHipFireHorizontalSpread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_MaxHipFireHorizontalSpread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_MinAimingFireVerticalSpread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_MaxAimingFireVerticalSpread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_MinAimingFireHorizontalSpread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_MaxAimingFireHorizontalSpread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_AutomaticallyAddPreDeterminedSpread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_PreDeterminedSpread_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_PreDeterminedSpread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_PreDeterminedAimingSpread_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_PreDeterminedAimingSpread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_PreDeterminedAimingSpreadWithMultiplier_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_PreDeterminedAimingSpreadWithMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_PreDeterminedSpreadIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_PreDeterminedAimingSpreadIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_PreDeterminedAimingSpreadWithMultiplierIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_HasChargeUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_HoldTriggerDuringChargeUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ChargeUpTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_CurrentChargeUpProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ChargeUpParticleEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SpawnedChargeUpParticleEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SpawnChargeUpParticleAttached,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_DestroyChargeUpParticleWhenChargeUpCanceled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_DoesOverheat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ProhibitFiringWhileCoolingDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ReachedMaxHeat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_TimeToOverheat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_TimeToCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_MaxHeat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_CurrentHeat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_IsOverheating,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_MinLookInputForWeaponSway,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ShouldHaveHorizontalWeaponSway,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ShouldHaveVerticalWeaponSway,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UseRotationForHorizontalWeaponSway,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_HorizontalWeaponSwayOppositeDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_MaxHorzontalWeaponSwayRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_MaxHorzontalWeaponSwayDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UseRotationForVerticalWeaponSway,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_VerticalWeaponSwayOppositeDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_MaxVerticalWeaponSwayRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_MaxVerticalWeaponSwayDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_HorizontalWeaponSwaySpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_VerticalWeaponSwaySpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_WeaponSwitchTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_WeaponSwitchAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_WeaponSwitchAnimationMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ResetArmsAnimationAfterWeaponSwitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ThirdPersonWeaponSwitchAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ThirdPersonWeaponSwitchAnimationMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UseTwoWeaponSwitchAnimations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_WeaponSwitchAnimation1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_WeaponSwitchAnimation1Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ThirdPersonWeaponSwitchAnimation1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ThirdPersonWeaponSwitchAnimation1Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SwitchToGunAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SwitchToGunAnimationMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SwitchOffGunAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SwitchOffGunAnimationMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_HolsterWeaponGunAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_HolsterWeaponGunAnimationMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_HolsterWeaponAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_HolsterWeaponAnimationMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ResetArmsAnimationAfterHolster,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_HolsterWeaponThirdPersonAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_HolsterWeaponThirdPersonAnimationMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UnHolsterWeaponGunAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UnHolsterWeaponGunAnimationMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UnHolsterWeaponAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UnHolsterWeaponAnimationMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ResetArmsAnimationAfterUnHolster,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UnHolsterWeaponThirdPersonAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UnHolsterWeaponThirdPersonAnimationMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ReloadAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ReloadAnimationMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ResetArmsAnimationAfterReload,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ResetArmsAnimationAfterCanceledReload,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ReloadEmptyAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ReloadEmptyAnimationMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ThirdPersonReloadAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ThirdPersonReloadAnimationMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ThirdPersonReloadEmptyAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ThirdPersonReloadEmptyAnimationMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UseTwoReloadAnimations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ReloadAnimation1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ReloadAnimation1Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ReloadEmptyAnimation1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ReloadEmptyAnimation1Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UseTwoThirdPersonReloadAnimations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ThirdPersonReloadAnimation1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ThirdPersonReloadAnimation1Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ThirdPersonReloadEmptyAnimation1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ThirdPersonReloadEmptyAnimation1Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ReloadGunAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ReloadGunAnimationMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ReloadEmptyGunAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ReloadEmptyGunAnimationMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SprintAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_LoopSprintAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ResetArmsAnimationAfterUnSprinting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SetSprintingSpeedAfterAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UnSprintAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SetDefaultSpeedAfterAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ThirdPersonSprintAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ThirdPersonUnSprintAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_LoopThirdPersonSprintAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SpawnedBulletCasings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SpawnedBulletCasings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_FireSceneComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ThirdPersonFireSceneComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_BulletCasingSceneComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ThirdPersonBulletCasingSceneComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_FireBoxScene,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_DamageBoxCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_OwningPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_OwningPlayerCast,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_CanShoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_AmmoInMagazine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_MaxAmmoInMagazine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ReserveAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_MaxReserveAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UseSharedCalibers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_CaliberToUse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_InfiniteAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_BulletCasingToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_BulletCasingSpawnCollisionHandlingMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_BulletCasingSpawnCollisionHandlingMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_BulletCasingInheritsVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_MaxAmountOfBulletCasings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_FireRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ContinuousFireDamageRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_AmountOfShotsForBurst,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_AmountOfBurstShotsFired,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_FireRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_LaunchPhysicsObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_LaunchObjectStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_LaunchObjectVelocityChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_IsExplosive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ExplosionIgnoreOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ExplosionIgnoredActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ExplosionIgnoredActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ExplosionIgnoredClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ExplosionIgnoredClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UseProjectile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ProjectileToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ProjectileSpawnCollisionHandlingMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ProjectileSpawnCollisionHandlingMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ProjectileInheritsVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_TimeToDespawnProjectile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_CollisionChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_AdditionalActorsToIgnore_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_AdditionalActorsToIgnore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_DefaultDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_Damage_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_Damage_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ExplosiveDamageRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ExplosiveDoFullDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_BulletHitMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_DamageFalloffMultiplierAtRange_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_DamageFalloffMultiplierAtRange_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_DamageFalloffMultiplierAtRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_InterpolateDamageBetweenRanges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_PrintDistanceTraveled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UsingThirdPerson,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_WasPickedup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_AmountOfTimesPickedup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_TimeToDespawnAfterDropped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ManuallySetGunLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SnapToSocket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ThirdPersonSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_GunRelativeLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_GunRelativeRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ThirdPersonGunRelativeLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ThirdPersonGunRelativeRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_PlayerArmsRelativeLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_PlayerArmsRelativeRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_DefaultHitEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_HitEffectScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_HitEffects_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_HitEffects_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_HitEffects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_MuzzleFlash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SpawnMuzzleFlashAttached,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ReplicateMuzzleFlashLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UseFirstPersonRotationForThirdPersonMuzzleFlash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SpawnedContinuousMuzzleFlash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SpawnSmokeEffectWhenShooting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_AmountOfShotsToSpawnSmoke,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_AmountOfTimeToCancelSmoke,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_DestroySmokeEffectWhenNotShooting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_DestroySmokeSoundWhenNotShooting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_TimeToDestroySmokeWhenNotShooting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_TimeToDestroySmokeSoundWhenNotShooting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_PercentageOfOverheatToSpawnSmoke,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SmokeEffectToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SpawnedSmokeEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SmokeSoundToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SpawnedSmokeSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_BulletsShotForSmokeEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_BulletHitModeDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_FireControllerVibration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_FireControllerVibrationTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_BulletHitControllerVibration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_BulletHitControllerVibrationAttenuation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_BulletHitControllerVibrationTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_FireSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SpawnFireSoundAttached,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SpawnFireSound2DForOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SpawnFireSound2DForOwnerThirdPerson,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_FireSoundAttenuationOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ThirdPersonFireSoundAttenuationOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ChargeUpSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SpawnedChargeUpSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SpawnChargeUpSoundAttached,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SpawnChargeUpSound2DForOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SpawnChargeUpSound2DForOwnerThirdPerson,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_DestroyChargeUpSoundWhenChargeUpCanceled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ChargeUpSoundAttenuationOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ThirdPersonChargeUpSoundAttenuationOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ReloadGunSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SpawnedContinuousFireSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_BulletWhizzingSoundVolumeBasedOnSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_DefaultBulletHitSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_BulletHitSounds_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_BulletHitSounds_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_BulletHitSounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_DefaultBulletHitDecal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_BulletHitDecals_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_BulletHitDecals_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_BulletHitDecals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_BulletHitDecalSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UseActorClassesForHitMarkers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_HitMarkerActorSounds_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_HitMarkerActorSounds_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_HitMarkerActorSounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_HitMarkerSurfaceSounds_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_HitMarkerSurfaceSounds_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_HitMarkerSurfaceSounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UseFireArmsAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_FireArmsAnimationMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_FireArmsAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_FireGunAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ChargeUpArmsAnimationMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ChargeUpArmsAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ChargeUpGunAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_UseADS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SwitchPerspectiveWhenAiming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_DivideAimingFOV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ADSFOV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ZoomFOV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_TimeToADS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_TimeToZoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ADSArmsLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ADSArmsRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ZoomArmsLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ZoomArmsRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_VerticalRecoil,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_HorizontalRecoil,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_FireCameraShake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_CanCrumbleDestructibleMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_CrumbleDestructibleMeshesWithEveryShotgunPellet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_DestructionSphereSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_DestructionSphereToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ShowBulletPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_BulletPathColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_BulletPathPersists,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_BulletPathDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_GunHitEffectsReplication,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SwitchedFireToServer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_CheckForOwnerTimerHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_DespawnTimerHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_ChargeUpTimerHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_CancelChargeUpTimerHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_SpawnProjectileTimerHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_FireTimerHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_FireFullAutoTimerHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_BurstFireTimerHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_CancelSmokeEffectTimerHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_DestroySmokeEffectTimerHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGun_Statics::NewProp_BulletHitModeTimerHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGun_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMultiplayerGun_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AInteractableItem,
	(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGun_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMultiplayerGun_Statics::ClassParams = {
	&AMultiplayerGun::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMultiplayerGun_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGun_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGun_Statics::Class_MetaDataParams), Z_Construct_UClass_AMultiplayerGun_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMultiplayerGun()
{
	if (!Z_Registration_Info_UClass_AMultiplayerGun.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMultiplayerGun.OuterSingleton, Z_Construct_UClass_AMultiplayerGun_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMultiplayerGun.OuterSingleton;
}
template<> MULTIPLAYERFPS_API UClass* StaticClass<AMultiplayerGun>()
{
	return AMultiplayerGun::StaticClass();
}
void AMultiplayerGun::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_ShotgunAmountOfPelletsShot(TEXT("ShotgunAmountOfPelletsShot"));
	static const FName Name_ShotgunPelletHitLocations(TEXT("ShotgunPelletHitLocations"));
	static const FName Name_PreDeterminedSpreadIndex(TEXT("PreDeterminedSpreadIndex"));
	static const FName Name_PreDeterminedAimingSpreadIndex(TEXT("PreDeterminedAimingSpreadIndex"));
	static const FName Name_PreDeterminedAimingSpreadWithMultiplierIndex(TEXT("PreDeterminedAimingSpreadWithMultiplierIndex"));
	static const FName Name_OwningPlayer(TEXT("OwningPlayer"));
	static const FName Name_OwningPlayerCast(TEXT("OwningPlayerCast"));
	static const FName Name_AmmoInMagazine(TEXT("AmmoInMagazine"));
	static const FName Name_ReserveAmmo(TEXT("ReserveAmmo"));
	static const FName Name_InfiniteAmmo(TEXT("InfiniteAmmo"));
	static const FName Name_UsingThirdPerson(TEXT("UsingThirdPerson"));
	static const FName Name_WasPickedup(TEXT("WasPickedup"));
	static const FName Name_SwitchPerspectiveWhenAiming(TEXT("SwitchPerspectiveWhenAiming"));
	static const FName Name_GunHitEffectsReplication(TEXT("GunHitEffectsReplication"));
	const bool bIsValid = true
		&& Name_ShotgunAmountOfPelletsShot == ClassReps[(int32)ENetFields_Private::ShotgunAmountOfPelletsShot].Property->GetFName()
		&& Name_ShotgunPelletHitLocations == ClassReps[(int32)ENetFields_Private::ShotgunPelletHitLocations].Property->GetFName()
		&& Name_PreDeterminedSpreadIndex == ClassReps[(int32)ENetFields_Private::PreDeterminedSpreadIndex].Property->GetFName()
		&& Name_PreDeterminedAimingSpreadIndex == ClassReps[(int32)ENetFields_Private::PreDeterminedAimingSpreadIndex].Property->GetFName()
		&& Name_PreDeterminedAimingSpreadWithMultiplierIndex == ClassReps[(int32)ENetFields_Private::PreDeterminedAimingSpreadWithMultiplierIndex].Property->GetFName()
		&& Name_OwningPlayer == ClassReps[(int32)ENetFields_Private::OwningPlayer].Property->GetFName()
		&& Name_OwningPlayerCast == ClassReps[(int32)ENetFields_Private::OwningPlayerCast].Property->GetFName()
		&& Name_AmmoInMagazine == ClassReps[(int32)ENetFields_Private::AmmoInMagazine].Property->GetFName()
		&& Name_ReserveAmmo == ClassReps[(int32)ENetFields_Private::ReserveAmmo].Property->GetFName()
		&& Name_InfiniteAmmo == ClassReps[(int32)ENetFields_Private::InfiniteAmmo].Property->GetFName()
		&& Name_UsingThirdPerson == ClassReps[(int32)ENetFields_Private::UsingThirdPerson].Property->GetFName()
		&& Name_WasPickedup == ClassReps[(int32)ENetFields_Private::WasPickedup].Property->GetFName()
		&& Name_SwitchPerspectiveWhenAiming == ClassReps[(int32)ENetFields_Private::SwitchPerspectiveWhenAiming].Property->GetFName()
		&& Name_GunHitEffectsReplication == ClassReps[(int32)ENetFields_Private::GunHitEffectsReplication].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AMultiplayerGun"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMultiplayerGun);
AMultiplayerGun::~AMultiplayerGun() {}
// End Class AMultiplayerGun

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_MultiplayerGun_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAimSwitchPerspectiveType_StaticEnum, TEXT("EAimSwitchPerspectiveType"), &Z_Registration_Info_UEnum_EAimSwitchPerspectiveType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1846365563U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGunHitEffectsReplication::StaticStruct, Z_Construct_UScriptStruct_FGunHitEffectsReplication_Statics::NewStructOps, TEXT("GunHitEffectsReplication"), &Z_Registration_Info_UScriptStruct_GunHitEffectsReplication, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGunHitEffectsReplication), 1684226226U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMultiplayerGun, AMultiplayerGun::StaticClass, TEXT("AMultiplayerGun"), &Z_Registration_Info_UClass_AMultiplayerGun, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMultiplayerGun), 719663402U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_MultiplayerGun_h_3795798271(TEXT("/Script/MultiplayerFPS"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_MultiplayerGun_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_MultiplayerGun_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_MultiplayerGun_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_MultiplayerGun_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_MultiplayerGun_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_MultiplayerGun_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
