// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayerFPS/Public/MultiplayerBulletCasing.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
#include "Runtime/Engine/Classes/Engine/TimerHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerBulletCasing() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
MULTIPLAYERFPS_API UClass* Z_Construct_UClass_AMultiplayerBulletCasing();
MULTIPLAYERFPS_API UClass* Z_Construct_UClass_AMultiplayerBulletCasing_NoRegister();
MULTIPLAYERFPS_API UClass* Z_Construct_UClass_AMultiplayerGun_NoRegister();
PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
UPackage* Z_Construct_UPackage__Script_MultiplayerFPS();
// End Cross Module References

// Begin Class AMultiplayerBulletCasing Function DestroySelf
static const FName NAME_AMultiplayerBulletCasing_DestroySelf = FName(TEXT("DestroySelf"));
void AMultiplayerBulletCasing::DestroySelf()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerBulletCasing_DestroySelf);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerBulletCasing_DestroySelf_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerBulletCasing.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerBulletCasing_DestroySelf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerBulletCasing, nullptr, "DestroySelf", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerBulletCasing_DestroySelf_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerBulletCasing_DestroySelf_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerBulletCasing_DestroySelf()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerBulletCasing_DestroySelf_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerBulletCasing::execDestroySelf)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DestroySelf_Implementation();
	P_NATIVE_END;
}
// End Class AMultiplayerBulletCasing Function DestroySelf

// Begin Class AMultiplayerBulletCasing Function GetOwningGun
struct Z_Construct_UFunction_AMultiplayerBulletCasing_GetOwningGun_Statics
{
	struct MultiplayerBulletCasing_eventGetOwningGun_Parms
	{
		AMultiplayerGun* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerBulletCasing.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerBulletCasing_GetOwningGun_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerBulletCasing_eventGetOwningGun_Parms, ReturnValue), Z_Construct_UClass_AMultiplayerGun_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerBulletCasing_GetOwningGun_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerBulletCasing_GetOwningGun_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerBulletCasing_GetOwningGun_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerBulletCasing_GetOwningGun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerBulletCasing, nullptr, "GetOwningGun", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerBulletCasing_GetOwningGun_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerBulletCasing_GetOwningGun_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerBulletCasing_GetOwningGun_Statics::MultiplayerBulletCasing_eventGetOwningGun_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerBulletCasing_GetOwningGun_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerBulletCasing_GetOwningGun_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerBulletCasing_GetOwningGun_Statics::MultiplayerBulletCasing_eventGetOwningGun_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerBulletCasing_GetOwningGun()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerBulletCasing_GetOwningGun_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerBulletCasing::execGetOwningGun)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AMultiplayerGun**)Z_Param__Result=P_THIS->GetOwningGun();
	P_NATIVE_END;
}
// End Class AMultiplayerBulletCasing Function GetOwningGun

// Begin Class AMultiplayerBulletCasing Function LaunchCasing
struct Z_Construct_UFunction_AMultiplayerBulletCasing_LaunchCasing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerBulletCasing.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerBulletCasing_LaunchCasing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerBulletCasing, nullptr, "LaunchCasing", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerBulletCasing_LaunchCasing_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerBulletCasing_LaunchCasing_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerBulletCasing_LaunchCasing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerBulletCasing_LaunchCasing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerBulletCasing::execLaunchCasing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LaunchCasing();
	P_NATIVE_END;
}
// End Class AMultiplayerBulletCasing Function LaunchCasing

// Begin Class AMultiplayerBulletCasing Function OnCasingHit
struct Z_Construct_UFunction_AMultiplayerBulletCasing_OnCasingHit_Statics
{
	struct MultiplayerBulletCasing_eventOnCasingHit_Parms
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
		{ "ModuleRelativePath", "Public/MultiplayerBulletCasing.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerBulletCasing_OnCasingHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerBulletCasing_eventOnCasingHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitComponent_MetaData), NewProp_HitComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerBulletCasing_OnCasingHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerBulletCasing_eventOnCasingHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerBulletCasing_OnCasingHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerBulletCasing_eventOnCasingHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerBulletCasing_OnCasingHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerBulletCasing_eventOnCasingHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerBulletCasing_OnCasingHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerBulletCasing_eventOnCasingHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerBulletCasing_OnCasingHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerBulletCasing_OnCasingHit_Statics::NewProp_HitComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerBulletCasing_OnCasingHit_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerBulletCasing_OnCasingHit_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerBulletCasing_OnCasingHit_Statics::NewProp_NormalImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerBulletCasing_OnCasingHit_Statics::NewProp_Hit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerBulletCasing_OnCasingHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerBulletCasing_OnCasingHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerBulletCasing, nullptr, "OnCasingHit", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerBulletCasing_OnCasingHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerBulletCasing_OnCasingHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerBulletCasing_OnCasingHit_Statics::MultiplayerBulletCasing_eventOnCasingHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerBulletCasing_OnCasingHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerBulletCasing_OnCasingHit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerBulletCasing_OnCasingHit_Statics::MultiplayerBulletCasing_eventOnCasingHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerBulletCasing_OnCasingHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerBulletCasing_OnCasingHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerBulletCasing::execOnCasingHit)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCasingHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
	P_NATIVE_END;
}
// End Class AMultiplayerBulletCasing Function OnCasingHit

// Begin Class AMultiplayerBulletCasing Function PlayCasingHitSound_BP
struct MultiplayerBulletCasing_eventPlayCasingHitSound_BP_Parms
{
	USoundBase* CasingSound;
	float CasingSoundVolume;
};
static const FName NAME_AMultiplayerBulletCasing_PlayCasingHitSound_BP = FName(TEXT("PlayCasingHitSound_BP"));
void AMultiplayerBulletCasing::PlayCasingHitSound_BP(USoundBase* CasingSound, float CasingSoundVolume)
{
	MultiplayerBulletCasing_eventPlayCasingHitSound_BP_Parms Parms;
	Parms.CasingSound=CasingSound;
	Parms.CasingSoundVolume=CasingSoundVolume;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerBulletCasing_PlayCasingHitSound_BP);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerBulletCasing_PlayCasingHitSound_BP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerBulletCasing.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CasingSound;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CasingSoundVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerBulletCasing_PlayCasingHitSound_BP_Statics::NewProp_CasingSound = { "CasingSound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerBulletCasing_eventPlayCasingHitSound_BP_Parms, CasingSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerBulletCasing_PlayCasingHitSound_BP_Statics::NewProp_CasingSoundVolume = { "CasingSoundVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerBulletCasing_eventPlayCasingHitSound_BP_Parms, CasingSoundVolume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerBulletCasing_PlayCasingHitSound_BP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerBulletCasing_PlayCasingHitSound_BP_Statics::NewProp_CasingSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerBulletCasing_PlayCasingHitSound_BP_Statics::NewProp_CasingSoundVolume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerBulletCasing_PlayCasingHitSound_BP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerBulletCasing_PlayCasingHitSound_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerBulletCasing, nullptr, "PlayCasingHitSound_BP", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerBulletCasing_PlayCasingHitSound_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerBulletCasing_PlayCasingHitSound_BP_Statics::PropPointers), sizeof(MultiplayerBulletCasing_eventPlayCasingHitSound_BP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerBulletCasing_PlayCasingHitSound_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerBulletCasing_PlayCasingHitSound_BP_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerBulletCasing_eventPlayCasingHitSound_BP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerBulletCasing_PlayCasingHitSound_BP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerBulletCasing_PlayCasingHitSound_BP_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AMultiplayerBulletCasing Function PlayCasingHitSound_BP

// Begin Class AMultiplayerBulletCasing Function SetOwningGun
struct Z_Construct_UFunction_AMultiplayerBulletCasing_SetOwningGun_Statics
{
	struct MultiplayerBulletCasing_eventSetOwningGun_Parms
	{
		AMultiplayerGun* NewOwningPlayer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerBulletCasing.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewOwningPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerBulletCasing_SetOwningGun_Statics::NewProp_NewOwningPlayer = { "NewOwningPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerBulletCasing_eventSetOwningGun_Parms, NewOwningPlayer), Z_Construct_UClass_AMultiplayerGun_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerBulletCasing_SetOwningGun_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerBulletCasing_SetOwningGun_Statics::NewProp_NewOwningPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerBulletCasing_SetOwningGun_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerBulletCasing_SetOwningGun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerBulletCasing, nullptr, "SetOwningGun", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerBulletCasing_SetOwningGun_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerBulletCasing_SetOwningGun_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerBulletCasing_SetOwningGun_Statics::MultiplayerBulletCasing_eventSetOwningGun_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerBulletCasing_SetOwningGun_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerBulletCasing_SetOwningGun_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerBulletCasing_SetOwningGun_Statics::MultiplayerBulletCasing_eventSetOwningGun_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerBulletCasing_SetOwningGun()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerBulletCasing_SetOwningGun_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerBulletCasing::execSetOwningGun)
{
	P_GET_OBJECT(AMultiplayerGun,Z_Param_NewOwningPlayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOwningGun(Z_Param_NewOwningPlayer);
	P_NATIVE_END;
}
// End Class AMultiplayerBulletCasing Function SetOwningGun

// Begin Class AMultiplayerBulletCasing
void AMultiplayerBulletCasing::StaticRegisterNativesAMultiplayerBulletCasing()
{
	UClass* Class = AMultiplayerBulletCasing::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DestroySelf", &AMultiplayerBulletCasing::execDestroySelf },
		{ "GetOwningGun", &AMultiplayerBulletCasing::execGetOwningGun },
		{ "LaunchCasing", &AMultiplayerBulletCasing::execLaunchCasing },
		{ "OnCasingHit", &AMultiplayerBulletCasing::execOnCasingHit },
		{ "SetOwningGun", &AMultiplayerBulletCasing::execSetOwningGun },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMultiplayerBulletCasing);
UClass* Z_Construct_UClass_AMultiplayerBulletCasing_NoRegister()
{
	return AMultiplayerBulletCasing::StaticClass();
}
struct Z_Construct_UClass_AMultiplayerBulletCasing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MultiplayerBulletCasing.h" },
		{ "ModuleRelativePath", "Public/MultiplayerBulletCasing.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletCasingMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerBulletCasing.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaunchRotationScene_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerBulletCasing.h" },
		{ "Tooltip", "Rotate this to control which direction the casing launches" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningGun_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/MultiplayerBulletCasing.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaunchStrength_MetaData[] = {
		{ "Category", "Launching" },
		{ "ModuleRelativePath", "Public/MultiplayerBulletCasing.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaunchVelocityChange_MetaData[] = {
		{ "Category", "Launching" },
		{ "ModuleRelativePath", "Public/MultiplayerBulletCasing.h" },
		{ "Tooltip", "If true, the strength is taken as a change in velocity instead of an impulse (ie. mass will have no effect)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DelayToDestroySelf_MetaData[] = {
		{ "Category", "Destroy Self" },
		{ "ModuleRelativePath", "Public/MultiplayerBulletCasing.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CasingHitDefaultSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/MultiplayerBulletCasing.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CasingHitSounds_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/MultiplayerBulletCasing.h" },
		{ "Tooltip", "Using the physical material allows you to have a different sound for each surface" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CasingHitSoundMaxVolume_MetaData[] = {
		{ "Category", "Sound" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/MultiplayerBulletCasing.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitSoundVolumeBaseOnCasingVelocity_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/MultiplayerBulletCasing.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitSoundVolumeMinVelocity_MetaData[] = {
		{ "Category", "Sound" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/MultiplayerBulletCasing.h" },
		{ "Tooltip", "If the casing is at or above this speed then the sound volume will be at max, but any lower than this it be quieter" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestroySelfTimerHandle_MetaData[] = {
		{ "Category", "Timers" },
		{ "ModuleRelativePath", "Public/MultiplayerBulletCasing.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletCasingMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LaunchRotationScene;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningGun;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LaunchStrength;
	static void NewProp_LaunchVelocityChange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LaunchVelocityChange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayToDestroySelf;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CasingHitDefaultSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CasingHitSounds_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CasingHitSounds_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CasingHitSounds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CasingHitSoundMaxVolume;
	static void NewProp_HitSoundVolumeBaseOnCasingVelocity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HitSoundVolumeBaseOnCasingVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HitSoundVolumeMinVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DestroySelfTimerHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMultiplayerBulletCasing_DestroySelf, "DestroySelf" }, // 893710336
		{ &Z_Construct_UFunction_AMultiplayerBulletCasing_GetOwningGun, "GetOwningGun" }, // 349607700
		{ &Z_Construct_UFunction_AMultiplayerBulletCasing_LaunchCasing, "LaunchCasing" }, // 3860884712
		{ &Z_Construct_UFunction_AMultiplayerBulletCasing_OnCasingHit, "OnCasingHit" }, // 1837477263
		{ &Z_Construct_UFunction_AMultiplayerBulletCasing_PlayCasingHitSound_BP, "PlayCasingHitSound_BP" }, // 1066314449
		{ &Z_Construct_UFunction_AMultiplayerBulletCasing_SetOwningGun, "SetOwningGun" }, // 3551554399
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMultiplayerBulletCasing>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerBulletCasing_Statics::NewProp_BulletCasingMesh = { "BulletCasingMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerBulletCasing, BulletCasingMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletCasingMesh_MetaData), NewProp_BulletCasingMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerBulletCasing_Statics::NewProp_LaunchRotationScene = { "LaunchRotationScene", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerBulletCasing, LaunchRotationScene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaunchRotationScene_MetaData), NewProp_LaunchRotationScene_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerBulletCasing_Statics::NewProp_OwningGun = { "OwningGun", nullptr, (EPropertyFlags)0x0020080000000024, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerBulletCasing, OwningGun), Z_Construct_UClass_AMultiplayerGun_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningGun_MetaData), NewProp_OwningGun_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerBulletCasing_Statics::NewProp_LaunchStrength = { "LaunchStrength", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerBulletCasing, LaunchStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaunchStrength_MetaData), NewProp_LaunchStrength_MetaData) };
void Z_Construct_UClass_AMultiplayerBulletCasing_Statics::NewProp_LaunchVelocityChange_SetBit(void* Obj)
{
	((AMultiplayerBulletCasing*)Obj)->LaunchVelocityChange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerBulletCasing_Statics::NewProp_LaunchVelocityChange = { "LaunchVelocityChange", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerBulletCasing), &Z_Construct_UClass_AMultiplayerBulletCasing_Statics::NewProp_LaunchVelocityChange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaunchVelocityChange_MetaData), NewProp_LaunchVelocityChange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerBulletCasing_Statics::NewProp_DelayToDestroySelf = { "DelayToDestroySelf", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerBulletCasing, DelayToDestroySelf), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DelayToDestroySelf_MetaData), NewProp_DelayToDestroySelf_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerBulletCasing_Statics::NewProp_CasingHitDefaultSound = { "CasingHitDefaultSound", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerBulletCasing, CasingHitDefaultSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CasingHitDefaultSound_MetaData), NewProp_CasingHitDefaultSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerBulletCasing_Statics::NewProp_CasingHitSounds_ValueProp = { "CasingHitSounds", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerBulletCasing_Statics::NewProp_CasingHitSounds_Key_KeyProp = { "CasingHitSounds_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMultiplayerBulletCasing_Statics::NewProp_CasingHitSounds = { "CasingHitSounds", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerBulletCasing, CasingHitSounds), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CasingHitSounds_MetaData), NewProp_CasingHitSounds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerBulletCasing_Statics::NewProp_CasingHitSoundMaxVolume = { "CasingHitSoundMaxVolume", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerBulletCasing, CasingHitSoundMaxVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CasingHitSoundMaxVolume_MetaData), NewProp_CasingHitSoundMaxVolume_MetaData) };
void Z_Construct_UClass_AMultiplayerBulletCasing_Statics::NewProp_HitSoundVolumeBaseOnCasingVelocity_SetBit(void* Obj)
{
	((AMultiplayerBulletCasing*)Obj)->HitSoundVolumeBaseOnCasingVelocity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerBulletCasing_Statics::NewProp_HitSoundVolumeBaseOnCasingVelocity = { "HitSoundVolumeBaseOnCasingVelocity", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerBulletCasing), &Z_Construct_UClass_AMultiplayerBulletCasing_Statics::NewProp_HitSoundVolumeBaseOnCasingVelocity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitSoundVolumeBaseOnCasingVelocity_MetaData), NewProp_HitSoundVolumeBaseOnCasingVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerBulletCasing_Statics::NewProp_HitSoundVolumeMinVelocity = { "HitSoundVolumeMinVelocity", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerBulletCasing, HitSoundVolumeMinVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitSoundVolumeMinVelocity_MetaData), NewProp_HitSoundVolumeMinVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerBulletCasing_Statics::NewProp_DestroySelfTimerHandle = { "DestroySelfTimerHandle", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerBulletCasing, DestroySelfTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestroySelfTimerHandle_MetaData), NewProp_DestroySelfTimerHandle_MetaData) }; // 756291145
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMultiplayerBulletCasing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerBulletCasing_Statics::NewProp_BulletCasingMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerBulletCasing_Statics::NewProp_LaunchRotationScene,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerBulletCasing_Statics::NewProp_OwningGun,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerBulletCasing_Statics::NewProp_LaunchStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerBulletCasing_Statics::NewProp_LaunchVelocityChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerBulletCasing_Statics::NewProp_DelayToDestroySelf,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerBulletCasing_Statics::NewProp_CasingHitDefaultSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerBulletCasing_Statics::NewProp_CasingHitSounds_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerBulletCasing_Statics::NewProp_CasingHitSounds_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerBulletCasing_Statics::NewProp_CasingHitSounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerBulletCasing_Statics::NewProp_CasingHitSoundMaxVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerBulletCasing_Statics::NewProp_HitSoundVolumeBaseOnCasingVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerBulletCasing_Statics::NewProp_HitSoundVolumeMinVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerBulletCasing_Statics::NewProp_DestroySelfTimerHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerBulletCasing_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMultiplayerBulletCasing_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerBulletCasing_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMultiplayerBulletCasing_Statics::ClassParams = {
	&AMultiplayerBulletCasing::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMultiplayerBulletCasing_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerBulletCasing_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerBulletCasing_Statics::Class_MetaDataParams), Z_Construct_UClass_AMultiplayerBulletCasing_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMultiplayerBulletCasing()
{
	if (!Z_Registration_Info_UClass_AMultiplayerBulletCasing.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMultiplayerBulletCasing.OuterSingleton, Z_Construct_UClass_AMultiplayerBulletCasing_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMultiplayerBulletCasing.OuterSingleton;
}
template<> MULTIPLAYERFPS_API UClass* StaticClass<AMultiplayerBulletCasing>()
{
	return AMultiplayerBulletCasing::StaticClass();
}
void AMultiplayerBulletCasing::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_OwningGun(TEXT("OwningGun"));
	const bool bIsValid = true
		&& Name_OwningGun == ClassReps[(int32)ENetFields_Private::OwningGun].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AMultiplayerBulletCasing"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMultiplayerBulletCasing);
AMultiplayerBulletCasing::~AMultiplayerBulletCasing() {}
// End Class AMultiplayerBulletCasing

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_MultiplayerBulletCasing_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMultiplayerBulletCasing, AMultiplayerBulletCasing::StaticClass, TEXT("AMultiplayerBulletCasing"), &Z_Registration_Info_UClass_AMultiplayerBulletCasing, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMultiplayerBulletCasing), 461772532U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_MultiplayerBulletCasing_h_1847208974(TEXT("/Script/MultiplayerFPS"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_MultiplayerBulletCasing_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_MultiplayerBulletCasing_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
