// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayerFPS/Public/MultiplayerHealthComponent.h"
#include "Runtime/Engine/Classes/Engine/TimerHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerHealthComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
MULTIPLAYERFPS_API UClass* Z_Construct_UClass_UMultiplayerHealthComponent();
MULTIPLAYERFPS_API UClass* Z_Construct_UClass_UMultiplayerHealthComponent_NoRegister();
MULTIPLAYERFPS_API UFunction* Z_Construct_UDelegateFunction_MultiplayerFPS_OnDie__DelegateSignature();
MULTIPLAYERFPS_API UFunction* Z_Construct_UDelegateFunction_MultiplayerFPS_OnDieUnreplicated__DelegateSignature();
MULTIPLAYERFPS_API UFunction* Z_Construct_UDelegateFunction_MultiplayerFPS_OnHealthChanged__DelegateSignature();
MULTIPLAYERFPS_API UFunction* Z_Construct_UDelegateFunction_MultiplayerFPS_OnTakeDamage__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_MultiplayerFPS();
// End Cross Module References

// Begin Delegate FOnHealthChanged
struct Z_Construct_UDelegateFunction_MultiplayerFPS_OnHealthChanged__DelegateSignature_Statics
{
	struct _Script_MultiplayerFPS_eventOnHealthChanged_Parms
	{
		float NewHealth;
		bool IsRegenerating;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiplayerHealthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHealth;
	static void NewProp_IsRegenerating_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsRegenerating;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_MultiplayerFPS_OnHealthChanged__DelegateSignature_Statics::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MultiplayerFPS_eventOnHealthChanged_Parms, NewHealth), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_MultiplayerFPS_OnHealthChanged__DelegateSignature_Statics::NewProp_IsRegenerating_SetBit(void* Obj)
{
	((_Script_MultiplayerFPS_eventOnHealthChanged_Parms*)Obj)->IsRegenerating = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_MultiplayerFPS_OnHealthChanged__DelegateSignature_Statics::NewProp_IsRegenerating = { "IsRegenerating", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_MultiplayerFPS_eventOnHealthChanged_Parms), &Z_Construct_UDelegateFunction_MultiplayerFPS_OnHealthChanged__DelegateSignature_Statics::NewProp_IsRegenerating_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MultiplayerFPS_OnHealthChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MultiplayerFPS_OnHealthChanged__DelegateSignature_Statics::NewProp_NewHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MultiplayerFPS_OnHealthChanged__DelegateSignature_Statics::NewProp_IsRegenerating,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayerFPS_OnHealthChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MultiplayerFPS_OnHealthChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MultiplayerFPS, nullptr, "OnHealthChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MultiplayerFPS_OnHealthChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayerFPS_OnHealthChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MultiplayerFPS_OnHealthChanged__DelegateSignature_Statics::_Script_MultiplayerFPS_eventOnHealthChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayerFPS_OnHealthChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MultiplayerFPS_OnHealthChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MultiplayerFPS_OnHealthChanged__DelegateSignature_Statics::_Script_MultiplayerFPS_eventOnHealthChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MultiplayerFPS_OnHealthChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MultiplayerFPS_OnHealthChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHealthChanged_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChanged, float NewHealth, bool IsRegenerating)
{
	struct _Script_MultiplayerFPS_eventOnHealthChanged_Parms
	{
		float NewHealth;
		bool IsRegenerating;
	};
	_Script_MultiplayerFPS_eventOnHealthChanged_Parms Parms;
	Parms.NewHealth=NewHealth;
	Parms.IsRegenerating=IsRegenerating ? true : false;
	OnHealthChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnHealthChanged

// Begin Delegate FOnTakeDamage
struct Z_Construct_UDelegateFunction_MultiplayerFPS_OnTakeDamage__DelegateSignature_Statics
{
	struct _Script_MultiplayerFPS_eventOnTakeDamage_Parms
	{
		int32 OldHealth;
		int32 NewHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiplayerHealthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_OldHealth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_MultiplayerFPS_OnTakeDamage__DelegateSignature_Statics::NewProp_OldHealth = { "OldHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MultiplayerFPS_eventOnTakeDamage_Parms, OldHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_MultiplayerFPS_OnTakeDamage__DelegateSignature_Statics::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MultiplayerFPS_eventOnTakeDamage_Parms, NewHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MultiplayerFPS_OnTakeDamage__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MultiplayerFPS_OnTakeDamage__DelegateSignature_Statics::NewProp_OldHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MultiplayerFPS_OnTakeDamage__DelegateSignature_Statics::NewProp_NewHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayerFPS_OnTakeDamage__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MultiplayerFPS_OnTakeDamage__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MultiplayerFPS, nullptr, "OnTakeDamage__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MultiplayerFPS_OnTakeDamage__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayerFPS_OnTakeDamage__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MultiplayerFPS_OnTakeDamage__DelegateSignature_Statics::_Script_MultiplayerFPS_eventOnTakeDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayerFPS_OnTakeDamage__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MultiplayerFPS_OnTakeDamage__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MultiplayerFPS_OnTakeDamage__DelegateSignature_Statics::_Script_MultiplayerFPS_eventOnTakeDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MultiplayerFPS_OnTakeDamage__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MultiplayerFPS_OnTakeDamage__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTakeDamage_DelegateWrapper(const FMulticastScriptDelegate& OnTakeDamage, int32 OldHealth, int32 NewHealth)
{
	struct _Script_MultiplayerFPS_eventOnTakeDamage_Parms
	{
		int32 OldHealth;
		int32 NewHealth;
	};
	_Script_MultiplayerFPS_eventOnTakeDamage_Parms Parms;
	Parms.OldHealth=OldHealth;
	Parms.NewHealth=NewHealth;
	OnTakeDamage.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnTakeDamage

// Begin Delegate FOnDie
struct Z_Construct_UDelegateFunction_MultiplayerFPS_OnDie__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiplayerHealthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MultiplayerFPS_OnDie__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MultiplayerFPS, nullptr, "OnDie__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayerFPS_OnDie__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MultiplayerFPS_OnDie__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_MultiplayerFPS_OnDie__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MultiplayerFPS_OnDie__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDie_DelegateWrapper(const FMulticastScriptDelegate& OnDie)
{
	OnDie.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnDie

// Begin Delegate FOnDieUnreplicated
struct Z_Construct_UDelegateFunction_MultiplayerFPS_OnDieUnreplicated__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiplayerHealthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MultiplayerFPS_OnDieUnreplicated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MultiplayerFPS, nullptr, "OnDieUnreplicated__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayerFPS_OnDieUnreplicated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MultiplayerFPS_OnDieUnreplicated__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_MultiplayerFPS_OnDieUnreplicated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MultiplayerFPS_OnDieUnreplicated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDieUnreplicated_DelegateWrapper(const FMulticastScriptDelegate& OnDieUnreplicated)
{
	OnDieUnreplicated.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnDieUnreplicated

// Begin Class UMultiplayerHealthComponent Function Die
struct Z_Construct_UFunction_UMultiplayerHealthComponent_Die_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerHealthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayerHealthComponent_Die_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayerHealthComponent, nullptr, "Die", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerHealthComponent_Die_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiplayerHealthComponent_Die_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMultiplayerHealthComponent_Die()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayerHealthComponent_Die_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultiplayerHealthComponent::execDie)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Die();
	P_NATIVE_END;
}
// End Class UMultiplayerHealthComponent Function Die

// Begin Class UMultiplayerHealthComponent Function GetAmountOfHealthRegenPerTick
struct Z_Construct_UFunction_UMultiplayerHealthComponent_GetAmountOfHealthRegenPerTick_Statics
{
	struct MultiplayerHealthComponent_eventGetAmountOfHealthRegenPerTick_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerHealthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMultiplayerHealthComponent_GetAmountOfHealthRegenPerTick_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerHealthComponent_eventGetAmountOfHealthRegenPerTick_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiplayerHealthComponent_GetAmountOfHealthRegenPerTick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayerHealthComponent_GetAmountOfHealthRegenPerTick_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerHealthComponent_GetAmountOfHealthRegenPerTick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayerHealthComponent_GetAmountOfHealthRegenPerTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayerHealthComponent, nullptr, "GetAmountOfHealthRegenPerTick", nullptr, nullptr, Z_Construct_UFunction_UMultiplayerHealthComponent_GetAmountOfHealthRegenPerTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerHealthComponent_GetAmountOfHealthRegenPerTick_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMultiplayerHealthComponent_GetAmountOfHealthRegenPerTick_Statics::MultiplayerHealthComponent_eventGetAmountOfHealthRegenPerTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerHealthComponent_GetAmountOfHealthRegenPerTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiplayerHealthComponent_GetAmountOfHealthRegenPerTick_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMultiplayerHealthComponent_GetAmountOfHealthRegenPerTick_Statics::MultiplayerHealthComponent_eventGetAmountOfHealthRegenPerTick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMultiplayerHealthComponent_GetAmountOfHealthRegenPerTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayerHealthComponent_GetAmountOfHealthRegenPerTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultiplayerHealthComponent::execGetAmountOfHealthRegenPerTick)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetAmountOfHealthRegenPerTick();
	P_NATIVE_END;
}
// End Class UMultiplayerHealthComponent Function GetAmountOfHealthRegenPerTick

// Begin Class UMultiplayerHealthComponent Function GetAutoHealthRegen
struct Z_Construct_UFunction_UMultiplayerHealthComponent_GetAutoHealthRegen_Statics
{
	struct MultiplayerHealthComponent_eventGetAutoHealthRegen_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerHealthComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMultiplayerHealthComponent_GetAutoHealthRegen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MultiplayerHealthComponent_eventGetAutoHealthRegen_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMultiplayerHealthComponent_GetAutoHealthRegen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerHealthComponent_eventGetAutoHealthRegen_Parms), &Z_Construct_UFunction_UMultiplayerHealthComponent_GetAutoHealthRegen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiplayerHealthComponent_GetAutoHealthRegen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayerHealthComponent_GetAutoHealthRegen_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerHealthComponent_GetAutoHealthRegen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayerHealthComponent_GetAutoHealthRegen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayerHealthComponent, nullptr, "GetAutoHealthRegen", nullptr, nullptr, Z_Construct_UFunction_UMultiplayerHealthComponent_GetAutoHealthRegen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerHealthComponent_GetAutoHealthRegen_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMultiplayerHealthComponent_GetAutoHealthRegen_Statics::MultiplayerHealthComponent_eventGetAutoHealthRegen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerHealthComponent_GetAutoHealthRegen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiplayerHealthComponent_GetAutoHealthRegen_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMultiplayerHealthComponent_GetAutoHealthRegen_Statics::MultiplayerHealthComponent_eventGetAutoHealthRegen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMultiplayerHealthComponent_GetAutoHealthRegen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayerHealthComponent_GetAutoHealthRegen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultiplayerHealthComponent::execGetAutoHealthRegen)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetAutoHealthRegen();
	P_NATIVE_END;
}
// End Class UMultiplayerHealthComponent Function GetAutoHealthRegen

// Begin Class UMultiplayerHealthComponent Function GetHealth
struct Z_Construct_UFunction_UMultiplayerHealthComponent_GetHealth_Statics
{
	struct MultiplayerHealthComponent_eventGetHealth_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerHealthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMultiplayerHealthComponent_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerHealthComponent_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiplayerHealthComponent_GetHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayerHealthComponent_GetHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerHealthComponent_GetHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayerHealthComponent_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayerHealthComponent, nullptr, "GetHealth", nullptr, nullptr, Z_Construct_UFunction_UMultiplayerHealthComponent_GetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerHealthComponent_GetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMultiplayerHealthComponent_GetHealth_Statics::MultiplayerHealthComponent_eventGetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerHealthComponent_GetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiplayerHealthComponent_GetHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMultiplayerHealthComponent_GetHealth_Statics::MultiplayerHealthComponent_eventGetHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMultiplayerHealthComponent_GetHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayerHealthComponent_GetHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultiplayerHealthComponent::execGetHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetHealth();
	P_NATIVE_END;
}
// End Class UMultiplayerHealthComponent Function GetHealth

// Begin Class UMultiplayerHealthComponent Function GetHealthRegenTimeBetweenTicks
struct Z_Construct_UFunction_UMultiplayerHealthComponent_GetHealthRegenTimeBetweenTicks_Statics
{
	struct MultiplayerHealthComponent_eventGetHealthRegenTimeBetweenTicks_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerHealthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMultiplayerHealthComponent_GetHealthRegenTimeBetweenTicks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerHealthComponent_eventGetHealthRegenTimeBetweenTicks_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiplayerHealthComponent_GetHealthRegenTimeBetweenTicks_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayerHealthComponent_GetHealthRegenTimeBetweenTicks_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerHealthComponent_GetHealthRegenTimeBetweenTicks_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayerHealthComponent_GetHealthRegenTimeBetweenTicks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayerHealthComponent, nullptr, "GetHealthRegenTimeBetweenTicks", nullptr, nullptr, Z_Construct_UFunction_UMultiplayerHealthComponent_GetHealthRegenTimeBetweenTicks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerHealthComponent_GetHealthRegenTimeBetweenTicks_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMultiplayerHealthComponent_GetHealthRegenTimeBetweenTicks_Statics::MultiplayerHealthComponent_eventGetHealthRegenTimeBetweenTicks_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerHealthComponent_GetHealthRegenTimeBetweenTicks_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiplayerHealthComponent_GetHealthRegenTimeBetweenTicks_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMultiplayerHealthComponent_GetHealthRegenTimeBetweenTicks_Statics::MultiplayerHealthComponent_eventGetHealthRegenTimeBetweenTicks_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMultiplayerHealthComponent_GetHealthRegenTimeBetweenTicks()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayerHealthComponent_GetHealthRegenTimeBetweenTicks_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultiplayerHealthComponent::execGetHealthRegenTimeBetweenTicks)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHealthRegenTimeBetweenTicks();
	P_NATIVE_END;
}
// End Class UMultiplayerHealthComponent Function GetHealthRegenTimeBetweenTicks

// Begin Class UMultiplayerHealthComponent Function GetIsDead
struct Z_Construct_UFunction_UMultiplayerHealthComponent_GetIsDead_Statics
{
	struct MultiplayerHealthComponent_eventGetIsDead_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerHealthComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMultiplayerHealthComponent_GetIsDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MultiplayerHealthComponent_eventGetIsDead_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMultiplayerHealthComponent_GetIsDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerHealthComponent_eventGetIsDead_Parms), &Z_Construct_UFunction_UMultiplayerHealthComponent_GetIsDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiplayerHealthComponent_GetIsDead_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayerHealthComponent_GetIsDead_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerHealthComponent_GetIsDead_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayerHealthComponent_GetIsDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayerHealthComponent, nullptr, "GetIsDead", nullptr, nullptr, Z_Construct_UFunction_UMultiplayerHealthComponent_GetIsDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerHealthComponent_GetIsDead_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMultiplayerHealthComponent_GetIsDead_Statics::MultiplayerHealthComponent_eventGetIsDead_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerHealthComponent_GetIsDead_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiplayerHealthComponent_GetIsDead_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMultiplayerHealthComponent_GetIsDead_Statics::MultiplayerHealthComponent_eventGetIsDead_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMultiplayerHealthComponent_GetIsDead()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayerHealthComponent_GetIsDead_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultiplayerHealthComponent::execGetIsDead)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsDead();
	P_NATIVE_END;
}
// End Class UMultiplayerHealthComponent Function GetIsDead

// Begin Class UMultiplayerHealthComponent Function GetMaxHealth
struct Z_Construct_UFunction_UMultiplayerHealthComponent_GetMaxHealth_Statics
{
	struct MultiplayerHealthComponent_eventGetMaxHealth_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerHealthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMultiplayerHealthComponent_GetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerHealthComponent_eventGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiplayerHealthComponent_GetMaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayerHealthComponent_GetMaxHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerHealthComponent_GetMaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayerHealthComponent_GetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayerHealthComponent, nullptr, "GetMaxHealth", nullptr, nullptr, Z_Construct_UFunction_UMultiplayerHealthComponent_GetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerHealthComponent_GetMaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMultiplayerHealthComponent_GetMaxHealth_Statics::MultiplayerHealthComponent_eventGetMaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerHealthComponent_GetMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiplayerHealthComponent_GetMaxHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMultiplayerHealthComponent_GetMaxHealth_Statics::MultiplayerHealthComponent_eventGetMaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMultiplayerHealthComponent_GetMaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayerHealthComponent_GetMaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultiplayerHealthComponent::execGetMaxHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMaxHealth();
	P_NATIVE_END;
}
// End Class UMultiplayerHealthComponent Function GetMaxHealth

// Begin Class UMultiplayerHealthComponent Function GetOwningPlayerController
struct Z_Construct_UFunction_UMultiplayerHealthComponent_GetOwningPlayerController_Statics
{
	struct MultiplayerHealthComponent_eventGetOwningPlayerController_Parms
	{
		APlayerController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerHealthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMultiplayerHealthComponent_GetOwningPlayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerHealthComponent_eventGetOwningPlayerController_Parms, ReturnValue), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiplayerHealthComponent_GetOwningPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayerHealthComponent_GetOwningPlayerController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerHealthComponent_GetOwningPlayerController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayerHealthComponent_GetOwningPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayerHealthComponent, nullptr, "GetOwningPlayerController", nullptr, nullptr, Z_Construct_UFunction_UMultiplayerHealthComponent_GetOwningPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerHealthComponent_GetOwningPlayerController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMultiplayerHealthComponent_GetOwningPlayerController_Statics::MultiplayerHealthComponent_eventGetOwningPlayerController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerHealthComponent_GetOwningPlayerController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiplayerHealthComponent_GetOwningPlayerController_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMultiplayerHealthComponent_GetOwningPlayerController_Statics::MultiplayerHealthComponent_eventGetOwningPlayerController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMultiplayerHealthComponent_GetOwningPlayerController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayerHealthComponent_GetOwningPlayerController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultiplayerHealthComponent::execGetOwningPlayerController)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APlayerController**)Z_Param__Result=P_THIS->GetOwningPlayerController();
	P_NATIVE_END;
}
// End Class UMultiplayerHealthComponent Function GetOwningPlayerController

// Begin Class UMultiplayerHealthComponent Function GetTimeToStartHealthRegen
struct Z_Construct_UFunction_UMultiplayerHealthComponent_GetTimeToStartHealthRegen_Statics
{
	struct MultiplayerHealthComponent_eventGetTimeToStartHealthRegen_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerHealthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMultiplayerHealthComponent_GetTimeToStartHealthRegen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerHealthComponent_eventGetTimeToStartHealthRegen_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiplayerHealthComponent_GetTimeToStartHealthRegen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayerHealthComponent_GetTimeToStartHealthRegen_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerHealthComponent_GetTimeToStartHealthRegen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayerHealthComponent_GetTimeToStartHealthRegen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayerHealthComponent, nullptr, "GetTimeToStartHealthRegen", nullptr, nullptr, Z_Construct_UFunction_UMultiplayerHealthComponent_GetTimeToStartHealthRegen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerHealthComponent_GetTimeToStartHealthRegen_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMultiplayerHealthComponent_GetTimeToStartHealthRegen_Statics::MultiplayerHealthComponent_eventGetTimeToStartHealthRegen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerHealthComponent_GetTimeToStartHealthRegen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiplayerHealthComponent_GetTimeToStartHealthRegen_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMultiplayerHealthComponent_GetTimeToStartHealthRegen_Statics::MultiplayerHealthComponent_eventGetTimeToStartHealthRegen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMultiplayerHealthComponent_GetTimeToStartHealthRegen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayerHealthComponent_GetTimeToStartHealthRegen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultiplayerHealthComponent::execGetTimeToStartHealthRegen)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetTimeToStartHealthRegen();
	P_NATIVE_END;
}
// End Class UMultiplayerHealthComponent Function GetTimeToStartHealthRegen

// Begin Class UMultiplayerHealthComponent Function HealthRegenTick
struct Z_Construct_UFunction_UMultiplayerHealthComponent_HealthRegenTick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerHealthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayerHealthComponent_HealthRegenTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayerHealthComponent, nullptr, "HealthRegenTick", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerHealthComponent_HealthRegenTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiplayerHealthComponent_HealthRegenTick_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMultiplayerHealthComponent_HealthRegenTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayerHealthComponent_HealthRegenTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultiplayerHealthComponent::execHealthRegenTick)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HealthRegenTick();
	P_NATIVE_END;
}
// End Class UMultiplayerHealthComponent Function HealthRegenTick

// Begin Class UMultiplayerHealthComponent Function IsDead
struct Z_Construct_UFunction_UMultiplayerHealthComponent_IsDead_Statics
{
	struct MultiplayerHealthComponent_eventIsDead_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerHealthComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMultiplayerHealthComponent_IsDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MultiplayerHealthComponent_eventIsDead_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMultiplayerHealthComponent_IsDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerHealthComponent_eventIsDead_Parms), &Z_Construct_UFunction_UMultiplayerHealthComponent_IsDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiplayerHealthComponent_IsDead_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayerHealthComponent_IsDead_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerHealthComponent_IsDead_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayerHealthComponent_IsDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayerHealthComponent, nullptr, "IsDead", nullptr, nullptr, Z_Construct_UFunction_UMultiplayerHealthComponent_IsDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerHealthComponent_IsDead_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMultiplayerHealthComponent_IsDead_Statics::MultiplayerHealthComponent_eventIsDead_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerHealthComponent_IsDead_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiplayerHealthComponent_IsDead_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMultiplayerHealthComponent_IsDead_Statics::MultiplayerHealthComponent_eventIsDead_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMultiplayerHealthComponent_IsDead()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayerHealthComponent_IsDead_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultiplayerHealthComponent::execIsDead)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsDead();
	P_NATIVE_END;
}
// End Class UMultiplayerHealthComponent Function IsDead

// Begin Class UMultiplayerHealthComponent Function MulticastDie
static const FName NAME_UMultiplayerHealthComponent_MulticastDie = FName(TEXT("MulticastDie"));
void UMultiplayerHealthComponent::MulticastDie()
{
	UFunction* Func = FindFunctionChecked(NAME_UMultiplayerHealthComponent_MulticastDie);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UMultiplayerHealthComponent_MulticastDie_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerHealthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayerHealthComponent_MulticastDie_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayerHealthComponent, nullptr, "MulticastDie", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerHealthComponent_MulticastDie_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiplayerHealthComponent_MulticastDie_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMultiplayerHealthComponent_MulticastDie()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayerHealthComponent_MulticastDie_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultiplayerHealthComponent::execMulticastDie)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastDie_Implementation();
	P_NATIVE_END;
}
// End Class UMultiplayerHealthComponent Function MulticastDie

// Begin Class UMultiplayerHealthComponent Function OnDamaged
struct Z_Construct_UFunction_UMultiplayerHealthComponent_OnDamaged_Statics
{
	struct MultiplayerHealthComponent_eventOnDamaged_Parms
	{
		AActor* DamagedActor;
		float Damage;
		const UDamageType* DamageType;
		AController* InstigatedBy;
		AActor* DamageCauser;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerHealthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMultiplayerHealthComponent_OnDamaged_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerHealthComponent_eventOnDamaged_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMultiplayerHealthComponent_OnDamaged_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerHealthComponent_eventOnDamaged_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMultiplayerHealthComponent_OnDamaged_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerHealthComponent_eventOnDamaged_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMultiplayerHealthComponent_OnDamaged_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerHealthComponent_eventOnDamaged_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMultiplayerHealthComponent_OnDamaged_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerHealthComponent_eventOnDamaged_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiplayerHealthComponent_OnDamaged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayerHealthComponent_OnDamaged_Statics::NewProp_DamagedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayerHealthComponent_OnDamaged_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayerHealthComponent_OnDamaged_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayerHealthComponent_OnDamaged_Statics::NewProp_InstigatedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayerHealthComponent_OnDamaged_Statics::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerHealthComponent_OnDamaged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayerHealthComponent_OnDamaged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayerHealthComponent, nullptr, "OnDamaged", nullptr, nullptr, Z_Construct_UFunction_UMultiplayerHealthComponent_OnDamaged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerHealthComponent_OnDamaged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMultiplayerHealthComponent_OnDamaged_Statics::MultiplayerHealthComponent_eventOnDamaged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerHealthComponent_OnDamaged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiplayerHealthComponent_OnDamaged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMultiplayerHealthComponent_OnDamaged_Statics::MultiplayerHealthComponent_eventOnDamaged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMultiplayerHealthComponent_OnDamaged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayerHealthComponent_OnDamaged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultiplayerHealthComponent::execOnDamaged)
{
	P_GET_OBJECT(AActor,Z_Param_DamagedActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
	P_GET_OBJECT(UDamageType,Z_Param_DamageType);
	P_GET_OBJECT(AController,Z_Param_InstigatedBy);
	P_GET_OBJECT(AActor,Z_Param_DamageCauser);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDamaged(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser);
	P_NATIVE_END;
}
// End Class UMultiplayerHealthComponent Function OnDamaged

// Begin Class UMultiplayerHealthComponent Function ServerDie
static const FName NAME_UMultiplayerHealthComponent_ServerDie = FName(TEXT("ServerDie"));
void UMultiplayerHealthComponent::ServerDie()
{
	UFunction* Func = FindFunctionChecked(NAME_UMultiplayerHealthComponent_ServerDie);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UMultiplayerHealthComponent_ServerDie_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerHealthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayerHealthComponent_ServerDie_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayerHealthComponent, nullptr, "ServerDie", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerHealthComponent_ServerDie_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiplayerHealthComponent_ServerDie_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMultiplayerHealthComponent_ServerDie()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayerHealthComponent_ServerDie_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultiplayerHealthComponent::execServerDie)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerDie_Implementation();
	P_NATIVE_END;
}
// End Class UMultiplayerHealthComponent Function ServerDie

// Begin Class UMultiplayerHealthComponent Function SetAmountOfHealthRegenPerTick
struct Z_Construct_UFunction_UMultiplayerHealthComponent_SetAmountOfHealthRegenPerTick_Statics
{
	struct MultiplayerHealthComponent_eventSetAmountOfHealthRegenPerTick_Parms
	{
		int32 NewAmountOfHealthRegenPerTick;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerHealthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewAmountOfHealthRegenPerTick;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMultiplayerHealthComponent_SetAmountOfHealthRegenPerTick_Statics::NewProp_NewAmountOfHealthRegenPerTick = { "NewAmountOfHealthRegenPerTick", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerHealthComponent_eventSetAmountOfHealthRegenPerTick_Parms, NewAmountOfHealthRegenPerTick), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiplayerHealthComponent_SetAmountOfHealthRegenPerTick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayerHealthComponent_SetAmountOfHealthRegenPerTick_Statics::NewProp_NewAmountOfHealthRegenPerTick,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerHealthComponent_SetAmountOfHealthRegenPerTick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayerHealthComponent_SetAmountOfHealthRegenPerTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayerHealthComponent, nullptr, "SetAmountOfHealthRegenPerTick", nullptr, nullptr, Z_Construct_UFunction_UMultiplayerHealthComponent_SetAmountOfHealthRegenPerTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerHealthComponent_SetAmountOfHealthRegenPerTick_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMultiplayerHealthComponent_SetAmountOfHealthRegenPerTick_Statics::MultiplayerHealthComponent_eventSetAmountOfHealthRegenPerTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerHealthComponent_SetAmountOfHealthRegenPerTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiplayerHealthComponent_SetAmountOfHealthRegenPerTick_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMultiplayerHealthComponent_SetAmountOfHealthRegenPerTick_Statics::MultiplayerHealthComponent_eventSetAmountOfHealthRegenPerTick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMultiplayerHealthComponent_SetAmountOfHealthRegenPerTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayerHealthComponent_SetAmountOfHealthRegenPerTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultiplayerHealthComponent::execSetAmountOfHealthRegenPerTick)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewAmountOfHealthRegenPerTick);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAmountOfHealthRegenPerTick(Z_Param_NewAmountOfHealthRegenPerTick);
	P_NATIVE_END;
}
// End Class UMultiplayerHealthComponent Function SetAmountOfHealthRegenPerTick

// Begin Class UMultiplayerHealthComponent Function SetAutoHealthRegen
struct Z_Construct_UFunction_UMultiplayerHealthComponent_SetAutoHealthRegen_Statics
{
	struct MultiplayerHealthComponent_eventSetAutoHealthRegen_Parms
	{
		bool NewAutoHealthRegen;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerHealthComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewAutoHealthRegen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewAutoHealthRegen;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMultiplayerHealthComponent_SetAutoHealthRegen_Statics::NewProp_NewAutoHealthRegen_SetBit(void* Obj)
{
	((MultiplayerHealthComponent_eventSetAutoHealthRegen_Parms*)Obj)->NewAutoHealthRegen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMultiplayerHealthComponent_SetAutoHealthRegen_Statics::NewProp_NewAutoHealthRegen = { "NewAutoHealthRegen", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerHealthComponent_eventSetAutoHealthRegen_Parms), &Z_Construct_UFunction_UMultiplayerHealthComponent_SetAutoHealthRegen_Statics::NewProp_NewAutoHealthRegen_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiplayerHealthComponent_SetAutoHealthRegen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayerHealthComponent_SetAutoHealthRegen_Statics::NewProp_NewAutoHealthRegen,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerHealthComponent_SetAutoHealthRegen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayerHealthComponent_SetAutoHealthRegen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayerHealthComponent, nullptr, "SetAutoHealthRegen", nullptr, nullptr, Z_Construct_UFunction_UMultiplayerHealthComponent_SetAutoHealthRegen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerHealthComponent_SetAutoHealthRegen_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMultiplayerHealthComponent_SetAutoHealthRegen_Statics::MultiplayerHealthComponent_eventSetAutoHealthRegen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerHealthComponent_SetAutoHealthRegen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiplayerHealthComponent_SetAutoHealthRegen_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMultiplayerHealthComponent_SetAutoHealthRegen_Statics::MultiplayerHealthComponent_eventSetAutoHealthRegen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMultiplayerHealthComponent_SetAutoHealthRegen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayerHealthComponent_SetAutoHealthRegen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultiplayerHealthComponent::execSetAutoHealthRegen)
{
	P_GET_UBOOL(Z_Param_NewAutoHealthRegen);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAutoHealthRegen(Z_Param_NewAutoHealthRegen);
	P_NATIVE_END;
}
// End Class UMultiplayerHealthComponent Function SetAutoHealthRegen

// Begin Class UMultiplayerHealthComponent Function SetHealth
struct Z_Construct_UFunction_UMultiplayerHealthComponent_SetHealth_Statics
{
	struct MultiplayerHealthComponent_eventSetHealth_Parms
	{
		int32 NewHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerHealthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMultiplayerHealthComponent_SetHealth_Statics::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerHealthComponent_eventSetHealth_Parms, NewHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiplayerHealthComponent_SetHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayerHealthComponent_SetHealth_Statics::NewProp_NewHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerHealthComponent_SetHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayerHealthComponent_SetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayerHealthComponent, nullptr, "SetHealth", nullptr, nullptr, Z_Construct_UFunction_UMultiplayerHealthComponent_SetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerHealthComponent_SetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMultiplayerHealthComponent_SetHealth_Statics::MultiplayerHealthComponent_eventSetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerHealthComponent_SetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiplayerHealthComponent_SetHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMultiplayerHealthComponent_SetHealth_Statics::MultiplayerHealthComponent_eventSetHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMultiplayerHealthComponent_SetHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayerHealthComponent_SetHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultiplayerHealthComponent::execSetHealth)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHealth(Z_Param_NewHealth);
	P_NATIVE_END;
}
// End Class UMultiplayerHealthComponent Function SetHealth

// Begin Class UMultiplayerHealthComponent Function SetHealthRegenTimeBetweenTicks
struct Z_Construct_UFunction_UMultiplayerHealthComponent_SetHealthRegenTimeBetweenTicks_Statics
{
	struct MultiplayerHealthComponent_eventSetHealthRegenTimeBetweenTicks_Parms
	{
		float NewHealthRegenTimeBetweenTicks;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerHealthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHealthRegenTimeBetweenTicks;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMultiplayerHealthComponent_SetHealthRegenTimeBetweenTicks_Statics::NewProp_NewHealthRegenTimeBetweenTicks = { "NewHealthRegenTimeBetweenTicks", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerHealthComponent_eventSetHealthRegenTimeBetweenTicks_Parms, NewHealthRegenTimeBetweenTicks), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiplayerHealthComponent_SetHealthRegenTimeBetweenTicks_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayerHealthComponent_SetHealthRegenTimeBetweenTicks_Statics::NewProp_NewHealthRegenTimeBetweenTicks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerHealthComponent_SetHealthRegenTimeBetweenTicks_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayerHealthComponent_SetHealthRegenTimeBetweenTicks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayerHealthComponent, nullptr, "SetHealthRegenTimeBetweenTicks", nullptr, nullptr, Z_Construct_UFunction_UMultiplayerHealthComponent_SetHealthRegenTimeBetweenTicks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerHealthComponent_SetHealthRegenTimeBetweenTicks_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMultiplayerHealthComponent_SetHealthRegenTimeBetweenTicks_Statics::MultiplayerHealthComponent_eventSetHealthRegenTimeBetweenTicks_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerHealthComponent_SetHealthRegenTimeBetweenTicks_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiplayerHealthComponent_SetHealthRegenTimeBetweenTicks_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMultiplayerHealthComponent_SetHealthRegenTimeBetweenTicks_Statics::MultiplayerHealthComponent_eventSetHealthRegenTimeBetweenTicks_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMultiplayerHealthComponent_SetHealthRegenTimeBetweenTicks()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayerHealthComponent_SetHealthRegenTimeBetweenTicks_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultiplayerHealthComponent::execSetHealthRegenTimeBetweenTicks)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewHealthRegenTimeBetweenTicks);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHealthRegenTimeBetweenTicks(Z_Param_NewHealthRegenTimeBetweenTicks);
	P_NATIVE_END;
}
// End Class UMultiplayerHealthComponent Function SetHealthRegenTimeBetweenTicks

// Begin Class UMultiplayerHealthComponent Function SetMaxHealth
struct Z_Construct_UFunction_UMultiplayerHealthComponent_SetMaxHealth_Statics
{
	struct MultiplayerHealthComponent_eventSetMaxHealth_Parms
	{
		int32 NewMaxHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerHealthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewMaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMultiplayerHealthComponent_SetMaxHealth_Statics::NewProp_NewMaxHealth = { "NewMaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerHealthComponent_eventSetMaxHealth_Parms, NewMaxHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiplayerHealthComponent_SetMaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayerHealthComponent_SetMaxHealth_Statics::NewProp_NewMaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerHealthComponent_SetMaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayerHealthComponent_SetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayerHealthComponent, nullptr, "SetMaxHealth", nullptr, nullptr, Z_Construct_UFunction_UMultiplayerHealthComponent_SetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerHealthComponent_SetMaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMultiplayerHealthComponent_SetMaxHealth_Statics::MultiplayerHealthComponent_eventSetMaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerHealthComponent_SetMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiplayerHealthComponent_SetMaxHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMultiplayerHealthComponent_SetMaxHealth_Statics::MultiplayerHealthComponent_eventSetMaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMultiplayerHealthComponent_SetMaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayerHealthComponent_SetMaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultiplayerHealthComponent::execSetMaxHealth)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewMaxHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMaxHealth(Z_Param_NewMaxHealth);
	P_NATIVE_END;
}
// End Class UMultiplayerHealthComponent Function SetMaxHealth

// Begin Class UMultiplayerHealthComponent Function SetOwningPlayerController
struct Z_Construct_UFunction_UMultiplayerHealthComponent_SetOwningPlayerController_Statics
{
	struct MultiplayerHealthComponent_eventSetOwningPlayerController_Parms
	{
		APlayerController* NewOwningPlayerController;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerHealthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewOwningPlayerController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMultiplayerHealthComponent_SetOwningPlayerController_Statics::NewProp_NewOwningPlayerController = { "NewOwningPlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerHealthComponent_eventSetOwningPlayerController_Parms, NewOwningPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiplayerHealthComponent_SetOwningPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayerHealthComponent_SetOwningPlayerController_Statics::NewProp_NewOwningPlayerController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerHealthComponent_SetOwningPlayerController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayerHealthComponent_SetOwningPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayerHealthComponent, nullptr, "SetOwningPlayerController", nullptr, nullptr, Z_Construct_UFunction_UMultiplayerHealthComponent_SetOwningPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerHealthComponent_SetOwningPlayerController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMultiplayerHealthComponent_SetOwningPlayerController_Statics::MultiplayerHealthComponent_eventSetOwningPlayerController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerHealthComponent_SetOwningPlayerController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiplayerHealthComponent_SetOwningPlayerController_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMultiplayerHealthComponent_SetOwningPlayerController_Statics::MultiplayerHealthComponent_eventSetOwningPlayerController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMultiplayerHealthComponent_SetOwningPlayerController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayerHealthComponent_SetOwningPlayerController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultiplayerHealthComponent::execSetOwningPlayerController)
{
	P_GET_OBJECT(APlayerController,Z_Param_NewOwningPlayerController);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOwningPlayerController(Z_Param_NewOwningPlayerController);
	P_NATIVE_END;
}
// End Class UMultiplayerHealthComponent Function SetOwningPlayerController

// Begin Class UMultiplayerHealthComponent Function SetTimeToStartHealthRegen
struct Z_Construct_UFunction_UMultiplayerHealthComponent_SetTimeToStartHealthRegen_Statics
{
	struct MultiplayerHealthComponent_eventSetTimeToStartHealthRegen_Parms
	{
		float NewTimeToStartHealthRegen;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerHealthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewTimeToStartHealthRegen;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMultiplayerHealthComponent_SetTimeToStartHealthRegen_Statics::NewProp_NewTimeToStartHealthRegen = { "NewTimeToStartHealthRegen", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerHealthComponent_eventSetTimeToStartHealthRegen_Parms, NewTimeToStartHealthRegen), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiplayerHealthComponent_SetTimeToStartHealthRegen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayerHealthComponent_SetTimeToStartHealthRegen_Statics::NewProp_NewTimeToStartHealthRegen,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerHealthComponent_SetTimeToStartHealthRegen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayerHealthComponent_SetTimeToStartHealthRegen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayerHealthComponent, nullptr, "SetTimeToStartHealthRegen", nullptr, nullptr, Z_Construct_UFunction_UMultiplayerHealthComponent_SetTimeToStartHealthRegen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerHealthComponent_SetTimeToStartHealthRegen_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMultiplayerHealthComponent_SetTimeToStartHealthRegen_Statics::MultiplayerHealthComponent_eventSetTimeToStartHealthRegen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerHealthComponent_SetTimeToStartHealthRegen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiplayerHealthComponent_SetTimeToStartHealthRegen_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMultiplayerHealthComponent_SetTimeToStartHealthRegen_Statics::MultiplayerHealthComponent_eventSetTimeToStartHealthRegen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMultiplayerHealthComponent_SetTimeToStartHealthRegen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayerHealthComponent_SetTimeToStartHealthRegen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultiplayerHealthComponent::execSetTimeToStartHealthRegen)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewTimeToStartHealthRegen);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTimeToStartHealthRegen(Z_Param_NewTimeToStartHealthRegen);
	P_NATIVE_END;
}
// End Class UMultiplayerHealthComponent Function SetTimeToStartHealthRegen

// Begin Class UMultiplayerHealthComponent Function StartHealthRegen
struct Z_Construct_UFunction_UMultiplayerHealthComponent_StartHealthRegen_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerHealthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayerHealthComponent_StartHealthRegen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayerHealthComponent, nullptr, "StartHealthRegen", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayerHealthComponent_StartHealthRegen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiplayerHealthComponent_StartHealthRegen_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMultiplayerHealthComponent_StartHealthRegen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayerHealthComponent_StartHealthRegen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultiplayerHealthComponent::execStartHealthRegen)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartHealthRegen();
	P_NATIVE_END;
}
// End Class UMultiplayerHealthComponent Function StartHealthRegen

// Begin Class UMultiplayerHealthComponent
void UMultiplayerHealthComponent::StaticRegisterNativesUMultiplayerHealthComponent()
{
	UClass* Class = UMultiplayerHealthComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Die", &UMultiplayerHealthComponent::execDie },
		{ "GetAmountOfHealthRegenPerTick", &UMultiplayerHealthComponent::execGetAmountOfHealthRegenPerTick },
		{ "GetAutoHealthRegen", &UMultiplayerHealthComponent::execGetAutoHealthRegen },
		{ "GetHealth", &UMultiplayerHealthComponent::execGetHealth },
		{ "GetHealthRegenTimeBetweenTicks", &UMultiplayerHealthComponent::execGetHealthRegenTimeBetweenTicks },
		{ "GetIsDead", &UMultiplayerHealthComponent::execGetIsDead },
		{ "GetMaxHealth", &UMultiplayerHealthComponent::execGetMaxHealth },
		{ "GetOwningPlayerController", &UMultiplayerHealthComponent::execGetOwningPlayerController },
		{ "GetTimeToStartHealthRegen", &UMultiplayerHealthComponent::execGetTimeToStartHealthRegen },
		{ "HealthRegenTick", &UMultiplayerHealthComponent::execHealthRegenTick },
		{ "IsDead", &UMultiplayerHealthComponent::execIsDead },
		{ "MulticastDie", &UMultiplayerHealthComponent::execMulticastDie },
		{ "OnDamaged", &UMultiplayerHealthComponent::execOnDamaged },
		{ "ServerDie", &UMultiplayerHealthComponent::execServerDie },
		{ "SetAmountOfHealthRegenPerTick", &UMultiplayerHealthComponent::execSetAmountOfHealthRegenPerTick },
		{ "SetAutoHealthRegen", &UMultiplayerHealthComponent::execSetAutoHealthRegen },
		{ "SetHealth", &UMultiplayerHealthComponent::execSetHealth },
		{ "SetHealthRegenTimeBetweenTicks", &UMultiplayerHealthComponent::execSetHealthRegenTimeBetweenTicks },
		{ "SetMaxHealth", &UMultiplayerHealthComponent::execSetMaxHealth },
		{ "SetOwningPlayerController", &UMultiplayerHealthComponent::execSetOwningPlayerController },
		{ "SetTimeToStartHealthRegen", &UMultiplayerHealthComponent::execSetTimeToStartHealthRegen },
		{ "StartHealthRegen", &UMultiplayerHealthComponent::execStartHealthRegen },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMultiplayerHealthComponent);
UClass* Z_Construct_UClass_UMultiplayerHealthComponent_NoRegister()
{
	return UMultiplayerHealthComponent::StaticClass();
}
struct Z_Construct_UClass_UMultiplayerHealthComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MultiplayerHealthComponent.h" },
		{ "ModuleRelativePath", "Public/MultiplayerHealthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTakeDamage_MetaData[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerHealthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthChanged_MetaData[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerHealthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDie_MetaData[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerHealthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDieUnreplicated_MetaData[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerHealthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Health" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/MultiplayerHealthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/MultiplayerHealthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoHealthRegen_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/MultiplayerHealthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeToStartHealthRegen_MetaData[] = {
		{ "Category", "Health" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/MultiplayerHealthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthRegenTimeBetweenTicks_MetaData[] = {
		{ "Category", "Health" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/MultiplayerHealthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmountOfHealthRegenPerTick_MetaData[] = {
		{ "Category", "Health" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/MultiplayerHealthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningActor_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/MultiplayerHealthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningPlayerController_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/MultiplayerHealthComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Only applies when attached to players" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartHealthRegenTimerHandle_MetaData[] = {
		{ "Category", "Timers" },
		{ "ModuleRelativePath", "Public/MultiplayerHealthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthRegenTickTimerHandle_MetaData[] = {
		{ "Category", "Timers" },
		{ "ModuleRelativePath", "Public/MultiplayerHealthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTakeDamage;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDie;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDieUnreplicated;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Health;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxHealth;
	static void NewProp_AutoHealthRegen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AutoHealthRegen;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToStartHealthRegen;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthRegenTimeBetweenTicks;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AmountOfHealthRegenPerTick;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningPlayerController;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartHealthRegenTimerHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HealthRegenTickTimerHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMultiplayerHealthComponent_Die, "Die" }, // 846078111
		{ &Z_Construct_UFunction_UMultiplayerHealthComponent_GetAmountOfHealthRegenPerTick, "GetAmountOfHealthRegenPerTick" }, // 1730525116
		{ &Z_Construct_UFunction_UMultiplayerHealthComponent_GetAutoHealthRegen, "GetAutoHealthRegen" }, // 1066333888
		{ &Z_Construct_UFunction_UMultiplayerHealthComponent_GetHealth, "GetHealth" }, // 2789846460
		{ &Z_Construct_UFunction_UMultiplayerHealthComponent_GetHealthRegenTimeBetweenTicks, "GetHealthRegenTimeBetweenTicks" }, // 3996949746
		{ &Z_Construct_UFunction_UMultiplayerHealthComponent_GetIsDead, "GetIsDead" }, // 1898945976
		{ &Z_Construct_UFunction_UMultiplayerHealthComponent_GetMaxHealth, "GetMaxHealth" }, // 3702159497
		{ &Z_Construct_UFunction_UMultiplayerHealthComponent_GetOwningPlayerController, "GetOwningPlayerController" }, // 1799174730
		{ &Z_Construct_UFunction_UMultiplayerHealthComponent_GetTimeToStartHealthRegen, "GetTimeToStartHealthRegen" }, // 3327304596
		{ &Z_Construct_UFunction_UMultiplayerHealthComponent_HealthRegenTick, "HealthRegenTick" }, // 1480015581
		{ &Z_Construct_UFunction_UMultiplayerHealthComponent_IsDead, "IsDead" }, // 1005817602
		{ &Z_Construct_UFunction_UMultiplayerHealthComponent_MulticastDie, "MulticastDie" }, // 1269643514
		{ &Z_Construct_UFunction_UMultiplayerHealthComponent_OnDamaged, "OnDamaged" }, // 1869983653
		{ &Z_Construct_UFunction_UMultiplayerHealthComponent_ServerDie, "ServerDie" }, // 2466059648
		{ &Z_Construct_UFunction_UMultiplayerHealthComponent_SetAmountOfHealthRegenPerTick, "SetAmountOfHealthRegenPerTick" }, // 521565331
		{ &Z_Construct_UFunction_UMultiplayerHealthComponent_SetAutoHealthRegen, "SetAutoHealthRegen" }, // 4184181902
		{ &Z_Construct_UFunction_UMultiplayerHealthComponent_SetHealth, "SetHealth" }, // 1353949032
		{ &Z_Construct_UFunction_UMultiplayerHealthComponent_SetHealthRegenTimeBetweenTicks, "SetHealthRegenTimeBetweenTicks" }, // 2107539128
		{ &Z_Construct_UFunction_UMultiplayerHealthComponent_SetMaxHealth, "SetMaxHealth" }, // 3935208607
		{ &Z_Construct_UFunction_UMultiplayerHealthComponent_SetOwningPlayerController, "SetOwningPlayerController" }, // 1878044016
		{ &Z_Construct_UFunction_UMultiplayerHealthComponent_SetTimeToStartHealthRegen, "SetTimeToStartHealthRegen" }, // 2363130027
		{ &Z_Construct_UFunction_UMultiplayerHealthComponent_StartHealthRegen, "StartHealthRegen" }, // 1451524032
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMultiplayerHealthComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMultiplayerHealthComponent_Statics::NewProp_OnTakeDamage = { "OnTakeDamage", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMultiplayerHealthComponent, OnTakeDamage), Z_Construct_UDelegateFunction_MultiplayerFPS_OnTakeDamage__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTakeDamage_MetaData), NewProp_OnTakeDamage_MetaData) }; // 1767623355
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMultiplayerHealthComponent_Statics::NewProp_OnHealthChanged = { "OnHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMultiplayerHealthComponent, OnHealthChanged), Z_Construct_UDelegateFunction_MultiplayerFPS_OnHealthChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHealthChanged_MetaData), NewProp_OnHealthChanged_MetaData) }; // 697963971
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMultiplayerHealthComponent_Statics::NewProp_OnDie = { "OnDie", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMultiplayerHealthComponent, OnDie), Z_Construct_UDelegateFunction_MultiplayerFPS_OnDie__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDie_MetaData), NewProp_OnDie_MetaData) }; // 4004639923
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMultiplayerHealthComponent_Statics::NewProp_OnDieUnreplicated = { "OnDieUnreplicated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMultiplayerHealthComponent, OnDieUnreplicated), Z_Construct_UDelegateFunction_MultiplayerFPS_OnDieUnreplicated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDieUnreplicated_MetaData), NewProp_OnDieUnreplicated_MetaData) }; // 1786958932
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMultiplayerHealthComponent_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0020080000000025, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMultiplayerHealthComponent, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMultiplayerHealthComponent_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0020080000000025, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMultiplayerHealthComponent, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
void Z_Construct_UClass_UMultiplayerHealthComponent_Statics::NewProp_AutoHealthRegen_SetBit(void* Obj)
{
	((UMultiplayerHealthComponent*)Obj)->AutoHealthRegen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMultiplayerHealthComponent_Statics::NewProp_AutoHealthRegen = { "AutoHealthRegen", nullptr, (EPropertyFlags)0x0020080000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMultiplayerHealthComponent), &Z_Construct_UClass_UMultiplayerHealthComponent_Statics::NewProp_AutoHealthRegen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoHealthRegen_MetaData), NewProp_AutoHealthRegen_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMultiplayerHealthComponent_Statics::NewProp_TimeToStartHealthRegen = { "TimeToStartHealthRegen", nullptr, (EPropertyFlags)0x0020080000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMultiplayerHealthComponent, TimeToStartHealthRegen), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeToStartHealthRegen_MetaData), NewProp_TimeToStartHealthRegen_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMultiplayerHealthComponent_Statics::NewProp_HealthRegenTimeBetweenTicks = { "HealthRegenTimeBetweenTicks", nullptr, (EPropertyFlags)0x0020080000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMultiplayerHealthComponent, HealthRegenTimeBetweenTicks), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthRegenTimeBetweenTicks_MetaData), NewProp_HealthRegenTimeBetweenTicks_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMultiplayerHealthComponent_Statics::NewProp_AmountOfHealthRegenPerTick = { "AmountOfHealthRegenPerTick", nullptr, (EPropertyFlags)0x0020080000000025, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMultiplayerHealthComponent, AmountOfHealthRegenPerTick), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmountOfHealthRegenPerTick_MetaData), NewProp_AmountOfHealthRegenPerTick_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMultiplayerHealthComponent_Statics::NewProp_OwningActor = { "OwningActor", nullptr, (EPropertyFlags)0x0020080000000024, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMultiplayerHealthComponent, OwningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningActor_MetaData), NewProp_OwningActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMultiplayerHealthComponent_Statics::NewProp_OwningPlayerController = { "OwningPlayerController", nullptr, (EPropertyFlags)0x0020080000000024, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMultiplayerHealthComponent, OwningPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningPlayerController_MetaData), NewProp_OwningPlayerController_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultiplayerHealthComponent_Statics::NewProp_StartHealthRegenTimerHandle = { "StartHealthRegenTimerHandle", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMultiplayerHealthComponent, StartHealthRegenTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartHealthRegenTimerHandle_MetaData), NewProp_StartHealthRegenTimerHandle_MetaData) }; // 756291145
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultiplayerHealthComponent_Statics::NewProp_HealthRegenTickTimerHandle = { "HealthRegenTickTimerHandle", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMultiplayerHealthComponent, HealthRegenTickTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthRegenTickTimerHandle_MetaData), NewProp_HealthRegenTickTimerHandle_MetaData) }; // 756291145
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMultiplayerHealthComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiplayerHealthComponent_Statics::NewProp_OnTakeDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiplayerHealthComponent_Statics::NewProp_OnHealthChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiplayerHealthComponent_Statics::NewProp_OnDie,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiplayerHealthComponent_Statics::NewProp_OnDieUnreplicated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiplayerHealthComponent_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiplayerHealthComponent_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiplayerHealthComponent_Statics::NewProp_AutoHealthRegen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiplayerHealthComponent_Statics::NewProp_TimeToStartHealthRegen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiplayerHealthComponent_Statics::NewProp_HealthRegenTimeBetweenTicks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiplayerHealthComponent_Statics::NewProp_AmountOfHealthRegenPerTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiplayerHealthComponent_Statics::NewProp_OwningActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiplayerHealthComponent_Statics::NewProp_OwningPlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiplayerHealthComponent_Statics::NewProp_StartHealthRegenTimerHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiplayerHealthComponent_Statics::NewProp_HealthRegenTickTimerHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMultiplayerHealthComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMultiplayerHealthComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMultiplayerHealthComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMultiplayerHealthComponent_Statics::ClassParams = {
	&UMultiplayerHealthComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMultiplayerHealthComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMultiplayerHealthComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMultiplayerHealthComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMultiplayerHealthComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMultiplayerHealthComponent()
{
	if (!Z_Registration_Info_UClass_UMultiplayerHealthComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMultiplayerHealthComponent.OuterSingleton, Z_Construct_UClass_UMultiplayerHealthComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMultiplayerHealthComponent.OuterSingleton;
}
template<> MULTIPLAYERFPS_API UClass* StaticClass<UMultiplayerHealthComponent>()
{
	return UMultiplayerHealthComponent::StaticClass();
}
void UMultiplayerHealthComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_Health(TEXT("Health"));
	static const FName Name_MaxHealth(TEXT("MaxHealth"));
	static const FName Name_AutoHealthRegen(TEXT("AutoHealthRegen"));
	static const FName Name_TimeToStartHealthRegen(TEXT("TimeToStartHealthRegen"));
	static const FName Name_HealthRegenTimeBetweenTicks(TEXT("HealthRegenTimeBetweenTicks"));
	static const FName Name_AmountOfHealthRegenPerTick(TEXT("AmountOfHealthRegenPerTick"));
	static const FName Name_OwningActor(TEXT("OwningActor"));
	static const FName Name_OwningPlayerController(TEXT("OwningPlayerController"));
	const bool bIsValid = true
		&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
		&& Name_MaxHealth == ClassReps[(int32)ENetFields_Private::MaxHealth].Property->GetFName()
		&& Name_AutoHealthRegen == ClassReps[(int32)ENetFields_Private::AutoHealthRegen].Property->GetFName()
		&& Name_TimeToStartHealthRegen == ClassReps[(int32)ENetFields_Private::TimeToStartHealthRegen].Property->GetFName()
		&& Name_HealthRegenTimeBetweenTicks == ClassReps[(int32)ENetFields_Private::HealthRegenTimeBetweenTicks].Property->GetFName()
		&& Name_AmountOfHealthRegenPerTick == ClassReps[(int32)ENetFields_Private::AmountOfHealthRegenPerTick].Property->GetFName()
		&& Name_OwningActor == ClassReps[(int32)ENetFields_Private::OwningActor].Property->GetFName()
		&& Name_OwningPlayerController == ClassReps[(int32)ENetFields_Private::OwningPlayerController].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UMultiplayerHealthComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMultiplayerHealthComponent);
UMultiplayerHealthComponent::~UMultiplayerHealthComponent() {}
// End Class UMultiplayerHealthComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_camev_Documents_Unreal_Projects_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerHealthComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMultiplayerHealthComponent, UMultiplayerHealthComponent::StaticClass, TEXT("UMultiplayerHealthComponent"), &Z_Registration_Info_UClass_UMultiplayerHealthComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMultiplayerHealthComponent), 683959567U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_camev_Documents_Unreal_Projects_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerHealthComponent_h_3616461009(TEXT("/Script/MultiplayerFPS"),
	Z_CompiledInDeferFile_FID_Users_camev_Documents_Unreal_Projects_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerHealthComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_camev_Documents_Unreal_Projects_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_MultiplayerHealthComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
