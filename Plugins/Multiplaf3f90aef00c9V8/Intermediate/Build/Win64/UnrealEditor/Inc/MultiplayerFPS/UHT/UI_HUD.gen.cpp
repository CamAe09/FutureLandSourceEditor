// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayerFPS/Public/UI/UI_HUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUI_HUD() {}

// Begin Cross Module References
MULTIPLAYERFPS_API UClass* Z_Construct_UClass_UMultiplayerHealthComponent_NoRegister();
MULTIPLAYERFPS_API UClass* Z_Construct_UClass_UUI_HUD();
MULTIPLAYERFPS_API UClass* Z_Construct_UClass_UUI_HUD_NoRegister();
MULTIPLAYERFPS_API UClass* Z_Construct_UClass_UWidgetMasterClass();
UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
UPackage* Z_Construct_UPackage__Script_MultiplayerFPS();
// End Cross Module References

// Begin Class UUI_HUD Function AmmoVisibility
struct Z_Construct_UFunction_UUI_HUD_AmmoVisibility_Statics
{
	struct UI_HUD_eventAmmoVisibility_Parms
	{
		ESlateVisibility ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/UI/UI_HUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUI_HUD_AmmoVisibility_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUI_HUD_AmmoVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UI_HUD_eventAmmoVisibility_Parms, ReturnValue), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(0, nullptr) }; // 2974316103
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUI_HUD_AmmoVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUI_HUD_AmmoVisibility_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUI_HUD_AmmoVisibility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_HUD_AmmoVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUI_HUD_AmmoVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUI_HUD, nullptr, "AmmoVisibility", nullptr, nullptr, Z_Construct_UFunction_UUI_HUD_AmmoVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_HUD_AmmoVisibility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUI_HUD_AmmoVisibility_Statics::UI_HUD_eventAmmoVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_HUD_AmmoVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUI_HUD_AmmoVisibility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUI_HUD_AmmoVisibility_Statics::UI_HUD_eventAmmoVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUI_HUD_AmmoVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUI_HUD_AmmoVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUI_HUD::execAmmoVisibility)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESlateVisibility*)Z_Param__Result=P_THIS->AmmoVisibility();
	P_NATIVE_END;
}
// End Class UUI_HUD Function AmmoVisibility

// Begin Class UUI_HUD Function ChargeUpVisibility
struct Z_Construct_UFunction_UUI_HUD_ChargeUpVisibility_Statics
{
	struct UI_HUD_eventChargeUpVisibility_Parms
	{
		ESlateVisibility ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/UI/UI_HUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUI_HUD_ChargeUpVisibility_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUI_HUD_ChargeUpVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UI_HUD_eventChargeUpVisibility_Parms, ReturnValue), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(0, nullptr) }; // 2974316103
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUI_HUD_ChargeUpVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUI_HUD_ChargeUpVisibility_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUI_HUD_ChargeUpVisibility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_HUD_ChargeUpVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUI_HUD_ChargeUpVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUI_HUD, nullptr, "ChargeUpVisibility", nullptr, nullptr, Z_Construct_UFunction_UUI_HUD_ChargeUpVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_HUD_ChargeUpVisibility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUI_HUD_ChargeUpVisibility_Statics::UI_HUD_eventChargeUpVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_HUD_ChargeUpVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUI_HUD_ChargeUpVisibility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUI_HUD_ChargeUpVisibility_Statics::UI_HUD_eventChargeUpVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUI_HUD_ChargeUpVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUI_HUD_ChargeUpVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUI_HUD::execChargeUpVisibility)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESlateVisibility*)Z_Param__Result=P_THIS->ChargeUpVisibility();
	P_NATIVE_END;
}
// End Class UUI_HUD Function ChargeUpVisibility

// Begin Class UUI_HUD Function CrosshairVisibility
struct Z_Construct_UFunction_UUI_HUD_CrosshairVisibility_Statics
{
	struct UI_HUD_eventCrosshairVisibility_Parms
	{
		ESlateVisibility ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/UI/UI_HUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUI_HUD_CrosshairVisibility_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUI_HUD_CrosshairVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UI_HUD_eventCrosshairVisibility_Parms, ReturnValue), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(0, nullptr) }; // 2974316103
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUI_HUD_CrosshairVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUI_HUD_CrosshairVisibility_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUI_HUD_CrosshairVisibility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_HUD_CrosshairVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUI_HUD_CrosshairVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUI_HUD, nullptr, "CrosshairVisibility", nullptr, nullptr, Z_Construct_UFunction_UUI_HUD_CrosshairVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_HUD_CrosshairVisibility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUI_HUD_CrosshairVisibility_Statics::UI_HUD_eventCrosshairVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_HUD_CrosshairVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUI_HUD_CrosshairVisibility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUI_HUD_CrosshairVisibility_Statics::UI_HUD_eventCrosshairVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUI_HUD_CrosshairVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUI_HUD_CrosshairVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUI_HUD::execCrosshairVisibility)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESlateVisibility*)Z_Param__Result=P_THIS->CrosshairVisibility();
	P_NATIVE_END;
}
// End Class UUI_HUD Function CrosshairVisibility

// Begin Class UUI_HUD Function GetAmmo
struct Z_Construct_UFunction_UUI_HUD_GetAmmo_Statics
{
	struct UI_HUD_eventGetAmmo_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/UI/UI_HUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUI_HUD_GetAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UI_HUD_eventGetAmmo_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUI_HUD_GetAmmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUI_HUD_GetAmmo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_HUD_GetAmmo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUI_HUD_GetAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUI_HUD, nullptr, "GetAmmo", nullptr, nullptr, Z_Construct_UFunction_UUI_HUD_GetAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_HUD_GetAmmo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUI_HUD_GetAmmo_Statics::UI_HUD_eventGetAmmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_HUD_GetAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUI_HUD_GetAmmo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUI_HUD_GetAmmo_Statics::UI_HUD_eventGetAmmo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUI_HUD_GetAmmo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUI_HUD_GetAmmo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUI_HUD::execGetAmmo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetAmmo();
	P_NATIVE_END;
}
// End Class UUI_HUD Function GetAmmo

// Begin Class UUI_HUD Function GetHealth
struct Z_Construct_UFunction_UUI_HUD_GetHealth_Statics
{
	struct UI_HUD_eventGetHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/UI/UI_HUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUI_HUD_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UI_HUD_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUI_HUD_GetHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUI_HUD_GetHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_HUD_GetHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUI_HUD_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUI_HUD, nullptr, "GetHealth", nullptr, nullptr, Z_Construct_UFunction_UUI_HUD_GetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_HUD_GetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUI_HUD_GetHealth_Statics::UI_HUD_eventGetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_HUD_GetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUI_HUD_GetHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUI_HUD_GetHealth_Statics::UI_HUD_eventGetHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUI_HUD_GetHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUI_HUD_GetHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUI_HUD::execGetHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHealth();
	P_NATIVE_END;
}
// End Class UUI_HUD Function GetHealth

// Begin Class UUI_HUD Function GetHealthComponent
struct Z_Construct_UFunction_UUI_HUD_GetHealthComponent_Statics
{
	struct UI_HUD_eventGetHealthComponent_Parms
	{
		UMultiplayerHealthComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/UI/UI_HUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUI_HUD_GetHealthComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UI_HUD_eventGetHealthComponent_Parms, ReturnValue), Z_Construct_UClass_UMultiplayerHealthComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUI_HUD_GetHealthComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUI_HUD_GetHealthComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_HUD_GetHealthComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUI_HUD_GetHealthComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUI_HUD, nullptr, "GetHealthComponent", nullptr, nullptr, Z_Construct_UFunction_UUI_HUD_GetHealthComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_HUD_GetHealthComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUI_HUD_GetHealthComponent_Statics::UI_HUD_eventGetHealthComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_HUD_GetHealthComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUI_HUD_GetHealthComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUI_HUD_GetHealthComponent_Statics::UI_HUD_eventGetHealthComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUI_HUD_GetHealthComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUI_HUD_GetHealthComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUI_HUD::execGetHealthComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMultiplayerHealthComponent**)Z_Param__Result=P_THIS->GetHealthComponent();
	P_NATIVE_END;
}
// End Class UUI_HUD Function GetHealthComponent

// Begin Class UUI_HUD Function GetHealthNumber
struct Z_Construct_UFunction_UUI_HUD_GetHealthNumber_Statics
{
	struct UI_HUD_eventGetHealthNumber_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/UI/UI_HUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UUI_HUD_GetHealthNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UI_HUD_eventGetHealthNumber_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUI_HUD_GetHealthNumber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUI_HUD_GetHealthNumber_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_HUD_GetHealthNumber_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUI_HUD_GetHealthNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUI_HUD, nullptr, "GetHealthNumber", nullptr, nullptr, Z_Construct_UFunction_UUI_HUD_GetHealthNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_HUD_GetHealthNumber_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUI_HUD_GetHealthNumber_Statics::UI_HUD_eventGetHealthNumber_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_HUD_GetHealthNumber_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUI_HUD_GetHealthNumber_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUI_HUD_GetHealthNumber_Statics::UI_HUD_eventGetHealthNumber_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUI_HUD_GetHealthNumber()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUI_HUD_GetHealthNumber_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUI_HUD::execGetHealthNumber)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetHealthNumber();
	P_NATIVE_END;
}
// End Class UUI_HUD Function GetHealthNumber

// Begin Class UUI_HUD Function GetReserveAmmo
struct Z_Construct_UFunction_UUI_HUD_GetReserveAmmo_Statics
{
	struct UI_HUD_eventGetReserveAmmo_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/UI/UI_HUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUI_HUD_GetReserveAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UI_HUD_eventGetReserveAmmo_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUI_HUD_GetReserveAmmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUI_HUD_GetReserveAmmo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_HUD_GetReserveAmmo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUI_HUD_GetReserveAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUI_HUD, nullptr, "GetReserveAmmo", nullptr, nullptr, Z_Construct_UFunction_UUI_HUD_GetReserveAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_HUD_GetReserveAmmo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUI_HUD_GetReserveAmmo_Statics::UI_HUD_eventGetReserveAmmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_HUD_GetReserveAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUI_HUD_GetReserveAmmo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUI_HUD_GetReserveAmmo_Statics::UI_HUD_eventGetReserveAmmo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUI_HUD_GetReserveAmmo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUI_HUD_GetReserveAmmo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUI_HUD::execGetReserveAmmo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetReserveAmmo();
	P_NATIVE_END;
}
// End Class UUI_HUD Function GetReserveAmmo

// Begin Class UUI_HUD Function GetReserveAmmoCaliberName
struct Z_Construct_UFunction_UUI_HUD_GetReserveAmmoCaliberName_Statics
{
	struct UI_HUD_eventGetReserveAmmoCaliberName_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/UI/UI_HUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UUI_HUD_GetReserveAmmoCaliberName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UI_HUD_eventGetReserveAmmoCaliberName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUI_HUD_GetReserveAmmoCaliberName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUI_HUD_GetReserveAmmoCaliberName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_HUD_GetReserveAmmoCaliberName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUI_HUD_GetReserveAmmoCaliberName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUI_HUD, nullptr, "GetReserveAmmoCaliberName", nullptr, nullptr, Z_Construct_UFunction_UUI_HUD_GetReserveAmmoCaliberName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_HUD_GetReserveAmmoCaliberName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUI_HUD_GetReserveAmmoCaliberName_Statics::UI_HUD_eventGetReserveAmmoCaliberName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_HUD_GetReserveAmmoCaliberName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUI_HUD_GetReserveAmmoCaliberName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUI_HUD_GetReserveAmmoCaliberName_Statics::UI_HUD_eventGetReserveAmmoCaliberName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUI_HUD_GetReserveAmmoCaliberName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUI_HUD_GetReserveAmmoCaliberName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUI_HUD::execGetReserveAmmoCaliberName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetReserveAmmoCaliberName();
	P_NATIVE_END;
}
// End Class UUI_HUD Function GetReserveAmmoCaliberName

// Begin Class UUI_HUD Function GetWeaponChargeUp
struct Z_Construct_UFunction_UUI_HUD_GetWeaponChargeUp_Statics
{
	struct UI_HUD_eventGetWeaponChargeUp_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/UI/UI_HUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUI_HUD_GetWeaponChargeUp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UI_HUD_eventGetWeaponChargeUp_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUI_HUD_GetWeaponChargeUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUI_HUD_GetWeaponChargeUp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_HUD_GetWeaponChargeUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUI_HUD_GetWeaponChargeUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUI_HUD, nullptr, "GetWeaponChargeUp", nullptr, nullptr, Z_Construct_UFunction_UUI_HUD_GetWeaponChargeUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_HUD_GetWeaponChargeUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUI_HUD_GetWeaponChargeUp_Statics::UI_HUD_eventGetWeaponChargeUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_HUD_GetWeaponChargeUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUI_HUD_GetWeaponChargeUp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUI_HUD_GetWeaponChargeUp_Statics::UI_HUD_eventGetWeaponChargeUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUI_HUD_GetWeaponChargeUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUI_HUD_GetWeaponChargeUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUI_HUD::execGetWeaponChargeUp)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetWeaponChargeUp();
	P_NATIVE_END;
}
// End Class UUI_HUD Function GetWeaponChargeUp

// Begin Class UUI_HUD Function GetWeaponName
struct Z_Construct_UFunction_UUI_HUD_GetWeaponName_Statics
{
	struct UI_HUD_eventGetWeaponName_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/UI/UI_HUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UUI_HUD_GetWeaponName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UI_HUD_eventGetWeaponName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUI_HUD_GetWeaponName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUI_HUD_GetWeaponName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_HUD_GetWeaponName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUI_HUD_GetWeaponName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUI_HUD, nullptr, "GetWeaponName", nullptr, nullptr, Z_Construct_UFunction_UUI_HUD_GetWeaponName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_HUD_GetWeaponName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUI_HUD_GetWeaponName_Statics::UI_HUD_eventGetWeaponName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_HUD_GetWeaponName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUI_HUD_GetWeaponName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUI_HUD_GetWeaponName_Statics::UI_HUD_eventGetWeaponName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUI_HUD_GetWeaponName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUI_HUD_GetWeaponName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUI_HUD::execGetWeaponName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetWeaponName();
	P_NATIVE_END;
}
// End Class UUI_HUD Function GetWeaponName

// Begin Class UUI_HUD Function GetWeaponOverheat
struct Z_Construct_UFunction_UUI_HUD_GetWeaponOverheat_Statics
{
	struct UI_HUD_eventGetWeaponOverheat_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/UI/UI_HUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUI_HUD_GetWeaponOverheat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UI_HUD_eventGetWeaponOverheat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUI_HUD_GetWeaponOverheat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUI_HUD_GetWeaponOverheat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_HUD_GetWeaponOverheat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUI_HUD_GetWeaponOverheat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUI_HUD, nullptr, "GetWeaponOverheat", nullptr, nullptr, Z_Construct_UFunction_UUI_HUD_GetWeaponOverheat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_HUD_GetWeaponOverheat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUI_HUD_GetWeaponOverheat_Statics::UI_HUD_eventGetWeaponOverheat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_HUD_GetWeaponOverheat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUI_HUD_GetWeaponOverheat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUI_HUD_GetWeaponOverheat_Statics::UI_HUD_eventGetWeaponOverheat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUI_HUD_GetWeaponOverheat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUI_HUD_GetWeaponOverheat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUI_HUD::execGetWeaponOverheat)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetWeaponOverheat();
	P_NATIVE_END;
}
// End Class UUI_HUD Function GetWeaponOverheat

// Begin Class UUI_HUD Function InfiniteAmmoVisibility
struct Z_Construct_UFunction_UUI_HUD_InfiniteAmmoVisibility_Statics
{
	struct UI_HUD_eventInfiniteAmmoVisibility_Parms
	{
		ESlateVisibility ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/UI/UI_HUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUI_HUD_InfiniteAmmoVisibility_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUI_HUD_InfiniteAmmoVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UI_HUD_eventInfiniteAmmoVisibility_Parms, ReturnValue), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(0, nullptr) }; // 2974316103
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUI_HUD_InfiniteAmmoVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUI_HUD_InfiniteAmmoVisibility_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUI_HUD_InfiniteAmmoVisibility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_HUD_InfiniteAmmoVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUI_HUD_InfiniteAmmoVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUI_HUD, nullptr, "InfiniteAmmoVisibility", nullptr, nullptr, Z_Construct_UFunction_UUI_HUD_InfiniteAmmoVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_HUD_InfiniteAmmoVisibility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUI_HUD_InfiniteAmmoVisibility_Statics::UI_HUD_eventInfiniteAmmoVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_HUD_InfiniteAmmoVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUI_HUD_InfiniteAmmoVisibility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUI_HUD_InfiniteAmmoVisibility_Statics::UI_HUD_eventInfiniteAmmoVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUI_HUD_InfiniteAmmoVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUI_HUD_InfiniteAmmoVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUI_HUD::execInfiniteAmmoVisibility)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESlateVisibility*)Z_Param__Result=P_THIS->InfiniteAmmoVisibility();
	P_NATIVE_END;
}
// End Class UUI_HUD Function InfiniteAmmoVisibility

// Begin Class UUI_HUD Function OverheatVisibility
struct Z_Construct_UFunction_UUI_HUD_OverheatVisibility_Statics
{
	struct UI_HUD_eventOverheatVisibility_Parms
	{
		ESlateVisibility ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/UI/UI_HUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUI_HUD_OverheatVisibility_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUI_HUD_OverheatVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UI_HUD_eventOverheatVisibility_Parms, ReturnValue), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(0, nullptr) }; // 2974316103
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUI_HUD_OverheatVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUI_HUD_OverheatVisibility_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUI_HUD_OverheatVisibility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_HUD_OverheatVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUI_HUD_OverheatVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUI_HUD, nullptr, "OverheatVisibility", nullptr, nullptr, Z_Construct_UFunction_UUI_HUD_OverheatVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_HUD_OverheatVisibility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUI_HUD_OverheatVisibility_Statics::UI_HUD_eventOverheatVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_HUD_OverheatVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUI_HUD_OverheatVisibility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUI_HUD_OverheatVisibility_Statics::UI_HUD_eventOverheatVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUI_HUD_OverheatVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUI_HUD_OverheatVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUI_HUD::execOverheatVisibility)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESlateVisibility*)Z_Param__Result=P_THIS->OverheatVisibility();
	P_NATIVE_END;
}
// End Class UUI_HUD Function OverheatVisibility

// Begin Class UUI_HUD Function ReserveAmmoVisibility
struct Z_Construct_UFunction_UUI_HUD_ReserveAmmoVisibility_Statics
{
	struct UI_HUD_eventReserveAmmoVisibility_Parms
	{
		ESlateVisibility ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/UI/UI_HUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUI_HUD_ReserveAmmoVisibility_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUI_HUD_ReserveAmmoVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UI_HUD_eventReserveAmmoVisibility_Parms, ReturnValue), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(0, nullptr) }; // 2974316103
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUI_HUD_ReserveAmmoVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUI_HUD_ReserveAmmoVisibility_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUI_HUD_ReserveAmmoVisibility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_HUD_ReserveAmmoVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUI_HUD_ReserveAmmoVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUI_HUD, nullptr, "ReserveAmmoVisibility", nullptr, nullptr, Z_Construct_UFunction_UUI_HUD_ReserveAmmoVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_HUD_ReserveAmmoVisibility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUI_HUD_ReserveAmmoVisibility_Statics::UI_HUD_eventReserveAmmoVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_HUD_ReserveAmmoVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUI_HUD_ReserveAmmoVisibility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUI_HUD_ReserveAmmoVisibility_Statics::UI_HUD_eventReserveAmmoVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUI_HUD_ReserveAmmoVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUI_HUD_ReserveAmmoVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUI_HUD::execReserveAmmoVisibility)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESlateVisibility*)Z_Param__Result=P_THIS->ReserveAmmoVisibility();
	P_NATIVE_END;
}
// End Class UUI_HUD Function ReserveAmmoVisibility

// Begin Class UUI_HUD Function VisibleIfHasWeapon
struct Z_Construct_UFunction_UUI_HUD_VisibleIfHasWeapon_Statics
{
	struct UI_HUD_eventVisibleIfHasWeapon_Parms
	{
		ESlateVisibility ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/UI/UI_HUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUI_HUD_VisibleIfHasWeapon_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUI_HUD_VisibleIfHasWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UI_HUD_eventVisibleIfHasWeapon_Parms, ReturnValue), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(0, nullptr) }; // 2974316103
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUI_HUD_VisibleIfHasWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUI_HUD_VisibleIfHasWeapon_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUI_HUD_VisibleIfHasWeapon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_HUD_VisibleIfHasWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUI_HUD_VisibleIfHasWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUI_HUD, nullptr, "VisibleIfHasWeapon", nullptr, nullptr, Z_Construct_UFunction_UUI_HUD_VisibleIfHasWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_HUD_VisibleIfHasWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUI_HUD_VisibleIfHasWeapon_Statics::UI_HUD_eventVisibleIfHasWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_HUD_VisibleIfHasWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUI_HUD_VisibleIfHasWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUI_HUD_VisibleIfHasWeapon_Statics::UI_HUD_eventVisibleIfHasWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUI_HUD_VisibleIfHasWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUI_HUD_VisibleIfHasWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUI_HUD::execVisibleIfHasWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESlateVisibility*)Z_Param__Result=P_THIS->VisibleIfHasWeapon();
	P_NATIVE_END;
}
// End Class UUI_HUD Function VisibleIfHasWeapon

// Begin Class UUI_HUD Function VisibleIfUsesSharedCalibers
struct Z_Construct_UFunction_UUI_HUD_VisibleIfUsesSharedCalibers_Statics
{
	struct UI_HUD_eventVisibleIfUsesSharedCalibers_Parms
	{
		ESlateVisibility ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/UI/UI_HUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUI_HUD_VisibleIfUsesSharedCalibers_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUI_HUD_VisibleIfUsesSharedCalibers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UI_HUD_eventVisibleIfUsesSharedCalibers_Parms, ReturnValue), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(0, nullptr) }; // 2974316103
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUI_HUD_VisibleIfUsesSharedCalibers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUI_HUD_VisibleIfUsesSharedCalibers_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUI_HUD_VisibleIfUsesSharedCalibers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_HUD_VisibleIfUsesSharedCalibers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUI_HUD_VisibleIfUsesSharedCalibers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUI_HUD, nullptr, "VisibleIfUsesSharedCalibers", nullptr, nullptr, Z_Construct_UFunction_UUI_HUD_VisibleIfUsesSharedCalibers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_HUD_VisibleIfUsesSharedCalibers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUI_HUD_VisibleIfUsesSharedCalibers_Statics::UI_HUD_eventVisibleIfUsesSharedCalibers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUI_HUD_VisibleIfUsesSharedCalibers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUI_HUD_VisibleIfUsesSharedCalibers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUI_HUD_VisibleIfUsesSharedCalibers_Statics::UI_HUD_eventVisibleIfUsesSharedCalibers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUI_HUD_VisibleIfUsesSharedCalibers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUI_HUD_VisibleIfUsesSharedCalibers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUI_HUD::execVisibleIfUsesSharedCalibers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESlateVisibility*)Z_Param__Result=P_THIS->VisibleIfUsesSharedCalibers();
	P_NATIVE_END;
}
// End Class UUI_HUD Function VisibleIfUsesSharedCalibers

// Begin Class UUI_HUD
void UUI_HUD::StaticRegisterNativesUUI_HUD()
{
	UClass* Class = UUI_HUD::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AmmoVisibility", &UUI_HUD::execAmmoVisibility },
		{ "ChargeUpVisibility", &UUI_HUD::execChargeUpVisibility },
		{ "CrosshairVisibility", &UUI_HUD::execCrosshairVisibility },
		{ "GetAmmo", &UUI_HUD::execGetAmmo },
		{ "GetHealth", &UUI_HUD::execGetHealth },
		{ "GetHealthComponent", &UUI_HUD::execGetHealthComponent },
		{ "GetHealthNumber", &UUI_HUD::execGetHealthNumber },
		{ "GetReserveAmmo", &UUI_HUD::execGetReserveAmmo },
		{ "GetReserveAmmoCaliberName", &UUI_HUD::execGetReserveAmmoCaliberName },
		{ "GetWeaponChargeUp", &UUI_HUD::execGetWeaponChargeUp },
		{ "GetWeaponName", &UUI_HUD::execGetWeaponName },
		{ "GetWeaponOverheat", &UUI_HUD::execGetWeaponOverheat },
		{ "InfiniteAmmoVisibility", &UUI_HUD::execInfiniteAmmoVisibility },
		{ "OverheatVisibility", &UUI_HUD::execOverheatVisibility },
		{ "ReserveAmmoVisibility", &UUI_HUD::execReserveAmmoVisibility },
		{ "VisibleIfHasWeapon", &UUI_HUD::execVisibleIfHasWeapon },
		{ "VisibleIfUsesSharedCalibers", &UUI_HUD::execVisibleIfUsesSharedCalibers },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUI_HUD);
UClass* Z_Construct_UClass_UUI_HUD_NoRegister()
{
	return UUI_HUD::StaticClass();
}
struct Z_Construct_UClass_UUI_HUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/UI_HUD.h" },
		{ "ModuleRelativePath", "Public/UI/UI_HUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/UI_HUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUI_HUD_AmmoVisibility, "AmmoVisibility" }, // 2874671330
		{ &Z_Construct_UFunction_UUI_HUD_ChargeUpVisibility, "ChargeUpVisibility" }, // 274066435
		{ &Z_Construct_UFunction_UUI_HUD_CrosshairVisibility, "CrosshairVisibility" }, // 4041740356
		{ &Z_Construct_UFunction_UUI_HUD_GetAmmo, "GetAmmo" }, // 2674023156
		{ &Z_Construct_UFunction_UUI_HUD_GetHealth, "GetHealth" }, // 4274893340
		{ &Z_Construct_UFunction_UUI_HUD_GetHealthComponent, "GetHealthComponent" }, // 2517169057
		{ &Z_Construct_UFunction_UUI_HUD_GetHealthNumber, "GetHealthNumber" }, // 2858641808
		{ &Z_Construct_UFunction_UUI_HUD_GetReserveAmmo, "GetReserveAmmo" }, // 2393142833
		{ &Z_Construct_UFunction_UUI_HUD_GetReserveAmmoCaliberName, "GetReserveAmmoCaliberName" }, // 3113829141
		{ &Z_Construct_UFunction_UUI_HUD_GetWeaponChargeUp, "GetWeaponChargeUp" }, // 296574954
		{ &Z_Construct_UFunction_UUI_HUD_GetWeaponName, "GetWeaponName" }, // 3757553542
		{ &Z_Construct_UFunction_UUI_HUD_GetWeaponOverheat, "GetWeaponOverheat" }, // 750105456
		{ &Z_Construct_UFunction_UUI_HUD_InfiniteAmmoVisibility, "InfiniteAmmoVisibility" }, // 666012360
		{ &Z_Construct_UFunction_UUI_HUD_OverheatVisibility, "OverheatVisibility" }, // 3566993516
		{ &Z_Construct_UFunction_UUI_HUD_ReserveAmmoVisibility, "ReserveAmmoVisibility" }, // 364800354
		{ &Z_Construct_UFunction_UUI_HUD_VisibleIfHasWeapon, "VisibleIfHasWeapon" }, // 271740191
		{ &Z_Construct_UFunction_UUI_HUD_VisibleIfUsesSharedCalibers, "VisibleIfUsesSharedCalibers" }, // 3420403962
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUI_HUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUI_HUD_Statics::NewProp_HealthComponent = { "HealthComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUI_HUD, HealthComponent), Z_Construct_UClass_UMultiplayerHealthComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthComponent_MetaData), NewProp_HealthComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUI_HUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUI_HUD_Statics::NewProp_HealthComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUI_HUD_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUI_HUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidgetMasterClass,
	(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUI_HUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUI_HUD_Statics::ClassParams = {
	&UUI_HUD::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UUI_HUD_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UUI_HUD_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUI_HUD_Statics::Class_MetaDataParams), Z_Construct_UClass_UUI_HUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUI_HUD()
{
	if (!Z_Registration_Info_UClass_UUI_HUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUI_HUD.OuterSingleton, Z_Construct_UClass_UUI_HUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUI_HUD.OuterSingleton;
}
template<> MULTIPLAYERFPS_API UClass* StaticClass<UUI_HUD>()
{
	return UUI_HUD::StaticClass();
}
UUI_HUD::UUI_HUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUI_HUD);
UUI_HUD::~UUI_HUD() {}
// End Class UUI_HUD

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_camev_Documents_Unreal_Projects_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_UI_UI_HUD_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUI_HUD, UUI_HUD::StaticClass, TEXT("UUI_HUD"), &Z_Registration_Info_UClass_UUI_HUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUI_HUD), 2309734939U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_camev_Documents_Unreal_Projects_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_UI_UI_HUD_h_3913776440(TEXT("/Script/MultiplayerFPS"),
	Z_CompiledInDeferFile_FID_Users_camev_Documents_Unreal_Projects_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_UI_UI_HUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_camev_Documents_Unreal_Projects_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_UI_UI_HUD_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
