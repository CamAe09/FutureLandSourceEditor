// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayerFPS/Public/UI/WidgetMasterClass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetMasterClass() {}

// Begin Cross Module References
MULTIPLAYERFPS_API UClass* Z_Construct_UClass_AMultiplayerCharacter_NoRegister();
MULTIPLAYERFPS_API UClass* Z_Construct_UClass_AMultiplayerPlayerController_NoRegister();
MULTIPLAYERFPS_API UClass* Z_Construct_UClass_UWidgetMasterClass();
MULTIPLAYERFPS_API UClass* Z_Construct_UClass_UWidgetMasterClass_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_MultiplayerFPS();
// End Cross Module References

// Begin Class UWidgetMasterClass Function UIGetMultiplayerCharacter
struct Z_Construct_UFunction_UWidgetMasterClass_UIGetMultiplayerCharacter_Statics
{
	struct WidgetMasterClass_eventUIGetMultiplayerCharacter_Parms
	{
		AMultiplayerCharacter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/UI/WidgetMasterClass.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetMasterClass_UIGetMultiplayerCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetMasterClass_eventUIGetMultiplayerCharacter_Parms, ReturnValue), Z_Construct_UClass_AMultiplayerCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetMasterClass_UIGetMultiplayerCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetMasterClass_UIGetMultiplayerCharacter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetMasterClass_UIGetMultiplayerCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetMasterClass_UIGetMultiplayerCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetMasterClass, nullptr, "UIGetMultiplayerCharacter", nullptr, nullptr, Z_Construct_UFunction_UWidgetMasterClass_UIGetMultiplayerCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetMasterClass_UIGetMultiplayerCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetMasterClass_UIGetMultiplayerCharacter_Statics::WidgetMasterClass_eventUIGetMultiplayerCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetMasterClass_UIGetMultiplayerCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetMasterClass_UIGetMultiplayerCharacter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetMasterClass_UIGetMultiplayerCharacter_Statics::WidgetMasterClass_eventUIGetMultiplayerCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetMasterClass_UIGetMultiplayerCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetMasterClass_UIGetMultiplayerCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetMasterClass::execUIGetMultiplayerCharacter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AMultiplayerCharacter**)Z_Param__Result=P_THIS->UIGetMultiplayerCharacter();
	P_NATIVE_END;
}
// End Class UWidgetMasterClass Function UIGetMultiplayerCharacter

// Begin Class UWidgetMasterClass Function UIGetMultiplayerController
struct Z_Construct_UFunction_UWidgetMasterClass_UIGetMultiplayerController_Statics
{
	struct WidgetMasterClass_eventUIGetMultiplayerController_Parms
	{
		AMultiplayerPlayerController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/UI/WidgetMasterClass.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetMasterClass_UIGetMultiplayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetMasterClass_eventUIGetMultiplayerController_Parms, ReturnValue), Z_Construct_UClass_AMultiplayerPlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetMasterClass_UIGetMultiplayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetMasterClass_UIGetMultiplayerController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetMasterClass_UIGetMultiplayerController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetMasterClass_UIGetMultiplayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetMasterClass, nullptr, "UIGetMultiplayerController", nullptr, nullptr, Z_Construct_UFunction_UWidgetMasterClass_UIGetMultiplayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetMasterClass_UIGetMultiplayerController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetMasterClass_UIGetMultiplayerController_Statics::WidgetMasterClass_eventUIGetMultiplayerController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetMasterClass_UIGetMultiplayerController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetMasterClass_UIGetMultiplayerController_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetMasterClass_UIGetMultiplayerController_Statics::WidgetMasterClass_eventUIGetMultiplayerController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetMasterClass_UIGetMultiplayerController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetMasterClass_UIGetMultiplayerController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetMasterClass::execUIGetMultiplayerController)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AMultiplayerPlayerController**)Z_Param__Result=P_THIS->UIGetMultiplayerController();
	P_NATIVE_END;
}
// End Class UWidgetMasterClass Function UIGetMultiplayerController

// Begin Class UWidgetMasterClass
void UWidgetMasterClass::StaticRegisterNativesUWidgetMasterClass()
{
	UClass* Class = UWidgetMasterClass::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UIGetMultiplayerCharacter", &UWidgetMasterClass::execUIGetMultiplayerCharacter },
		{ "UIGetMultiplayerController", &UWidgetMasterClass::execUIGetMultiplayerController },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetMasterClass);
UClass* Z_Construct_UClass_UWidgetMasterClass_NoRegister()
{
	return UWidgetMasterClass::StaticClass();
}
struct Z_Construct_UClass_UWidgetMasterClass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/WidgetMasterClass.h" },
		{ "ModuleRelativePath", "Public/UI/WidgetMasterClass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiplayerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetMasterClass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiplayerController_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetMasterClass.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MultiplayerCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MultiplayerController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWidgetMasterClass_UIGetMultiplayerCharacter, "UIGetMultiplayerCharacter" }, // 2787504334
		{ &Z_Construct_UFunction_UWidgetMasterClass_UIGetMultiplayerController, "UIGetMultiplayerController" }, // 2931038143
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetMasterClass>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetMasterClass_Statics::NewProp_MultiplayerCharacter = { "MultiplayerCharacter", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidgetMasterClass, MultiplayerCharacter), Z_Construct_UClass_AMultiplayerCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiplayerCharacter_MetaData), NewProp_MultiplayerCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetMasterClass_Statics::NewProp_MultiplayerController = { "MultiplayerController", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidgetMasterClass, MultiplayerController), Z_Construct_UClass_AMultiplayerPlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiplayerController_MetaData), NewProp_MultiplayerController_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidgetMasterClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetMasterClass_Statics::NewProp_MultiplayerCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetMasterClass_Statics::NewProp_MultiplayerController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetMasterClass_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWidgetMasterClass_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetMasterClass_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetMasterClass_Statics::ClassParams = {
	&UWidgetMasterClass::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWidgetMasterClass_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetMasterClass_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetMasterClass_Statics::Class_MetaDataParams), Z_Construct_UClass_UWidgetMasterClass_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWidgetMasterClass()
{
	if (!Z_Registration_Info_UClass_UWidgetMasterClass.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetMasterClass.OuterSingleton, Z_Construct_UClass_UWidgetMasterClass_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWidgetMasterClass.OuterSingleton;
}
template<> MULTIPLAYERFPS_API UClass* StaticClass<UWidgetMasterClass>()
{
	return UWidgetMasterClass::StaticClass();
}
UWidgetMasterClass::UWidgetMasterClass(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetMasterClass);
UWidgetMasterClass::~UWidgetMasterClass() {}
// End Class UWidgetMasterClass

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_UI_WidgetMasterClass_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetMasterClass, UWidgetMasterClass::StaticClass, TEXT("UWidgetMasterClass"), &Z_Registration_Info_UClass_UWidgetMasterClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetMasterClass), 2755900389U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_UI_WidgetMasterClass_h_4179649856(TEXT("/Script/MultiplayerFPS"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_UI_WidgetMasterClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_UI_WidgetMasterClass_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
