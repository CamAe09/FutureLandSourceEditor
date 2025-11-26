// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayerFPS/Public/InteractableItem.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractableItem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
MULTIPLAYERFPS_API UClass* Z_Construct_UClass_AInteractableItem();
MULTIPLAYERFPS_API UClass* Z_Construct_UClass_AInteractableItem_NoRegister();
MULTIPLAYERFPS_API UFunction* Z_Construct_UDelegateFunction_MultiplayerFPS_OnInteract__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_MultiplayerFPS();
// End Cross Module References

// Begin Delegate FOnInteract
struct Z_Construct_UDelegateFunction_MultiplayerFPS_OnInteract__DelegateSignature_Statics
{
	struct _Script_MultiplayerFPS_eventOnInteract_Parms
	{
		APawn* InteractingPlayer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractableItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractingPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MultiplayerFPS_OnInteract__DelegateSignature_Statics::NewProp_InteractingPlayer = { "InteractingPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MultiplayerFPS_eventOnInteract_Parms, InteractingPlayer), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MultiplayerFPS_OnInteract__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MultiplayerFPS_OnInteract__DelegateSignature_Statics::NewProp_InteractingPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayerFPS_OnInteract__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MultiplayerFPS_OnInteract__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MultiplayerFPS, nullptr, "OnInteract__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MultiplayerFPS_OnInteract__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayerFPS_OnInteract__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MultiplayerFPS_OnInteract__DelegateSignature_Statics::_Script_MultiplayerFPS_eventOnInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayerFPS_OnInteract__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MultiplayerFPS_OnInteract__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MultiplayerFPS_OnInteract__DelegateSignature_Statics::_Script_MultiplayerFPS_eventOnInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MultiplayerFPS_OnInteract__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MultiplayerFPS_OnInteract__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnInteract_DelegateWrapper(const FMulticastScriptDelegate& OnInteract, APawn* InteractingPlayer)
{
	struct _Script_MultiplayerFPS_eventOnInteract_Parms
	{
		APawn* InteractingPlayer;
	};
	_Script_MultiplayerFPS_eventOnInteract_Parms Parms;
	Parms.InteractingPlayer=InteractingPlayer;
	OnInteract.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnInteract

// Begin Class AInteractableItem Function Interact
struct Z_Construct_UFunction_AInteractableItem_Interact_Statics
{
	struct InteractableItem_eventInteract_Parms
	{
		APawn* InteractingPlayer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/InteractableItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractingPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractableItem_Interact_Statics::NewProp_InteractingPlayer = { "InteractingPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableItem_eventInteract_Parms, InteractingPlayer), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractableItem_Interact_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractableItem_Interact_Statics::NewProp_InteractingPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableItem_Interact_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractableItem_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractableItem, nullptr, "Interact", nullptr, nullptr, Z_Construct_UFunction_AInteractableItem_Interact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableItem_Interact_Statics::PropPointers), sizeof(Z_Construct_UFunction_AInteractableItem_Interact_Statics::InteractableItem_eventInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableItem_Interact_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInteractableItem_Interact_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AInteractableItem_Interact_Statics::InteractableItem_eventInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AInteractableItem_Interact()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractableItem_Interact_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AInteractableItem::execInteract)
{
	P_GET_OBJECT(APawn,Z_Param_InteractingPlayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Interact(Z_Param_InteractingPlayer);
	P_NATIVE_END;
}
// End Class AInteractableItem Function Interact

// Begin Class AInteractableItem Function Interact_BP
struct InteractableItem_eventInteract_BP_Parms
{
	APawn* InteractingPlayer;
};
static const FName NAME_AInteractableItem_Interact_BP = FName(TEXT("Interact_BP"));
void AInteractableItem::Interact_BP(APawn* InteractingPlayer)
{
	InteractableItem_eventInteract_BP_Parms Parms;
	Parms.InteractingPlayer=InteractingPlayer;
	UFunction* Func = FindFunctionChecked(NAME_AInteractableItem_Interact_BP);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AInteractableItem_Interact_BP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/InteractableItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractingPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractableItem_Interact_BP_Statics::NewProp_InteractingPlayer = { "InteractingPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableItem_eventInteract_BP_Parms, InteractingPlayer), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractableItem_Interact_BP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractableItem_Interact_BP_Statics::NewProp_InteractingPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableItem_Interact_BP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractableItem_Interact_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractableItem, nullptr, "Interact_BP", nullptr, nullptr, Z_Construct_UFunction_AInteractableItem_Interact_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableItem_Interact_BP_Statics::PropPointers), sizeof(InteractableItem_eventInteract_BP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableItem_Interact_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInteractableItem_Interact_BP_Statics::Function_MetaDataParams) };
static_assert(sizeof(InteractableItem_eventInteract_BP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AInteractableItem_Interact_BP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractableItem_Interact_BP_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AInteractableItem Function Interact_BP

// Begin Class AInteractableItem Function OnPickupBoxCollisionBeginOverlap
struct Z_Construct_UFunction_AInteractableItem_OnPickupBoxCollisionBeginOverlap_Statics
{
	struct InteractableItem_eventOnPickupBoxCollisionBeginOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/InteractableItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractableItem_OnPickupBoxCollisionBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableItem_eventOnPickupBoxCollisionBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractableItem_OnPickupBoxCollisionBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableItem_eventOnPickupBoxCollisionBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractableItem_OnPickupBoxCollisionBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableItem_eventOnPickupBoxCollisionBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AInteractableItem_OnPickupBoxCollisionBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableItem_eventOnPickupBoxCollisionBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AInteractableItem_OnPickupBoxCollisionBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((InteractableItem_eventOnPickupBoxCollisionBeginOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AInteractableItem_OnPickupBoxCollisionBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InteractableItem_eventOnPickupBoxCollisionBeginOverlap_Parms), &Z_Construct_UFunction_AInteractableItem_OnPickupBoxCollisionBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AInteractableItem_OnPickupBoxCollisionBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableItem_eventOnPickupBoxCollisionBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractableItem_OnPickupBoxCollisionBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractableItem_OnPickupBoxCollisionBeginOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractableItem_OnPickupBoxCollisionBeginOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractableItem_OnPickupBoxCollisionBeginOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractableItem_OnPickupBoxCollisionBeginOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractableItem_OnPickupBoxCollisionBeginOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractableItem_OnPickupBoxCollisionBeginOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableItem_OnPickupBoxCollisionBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractableItem_OnPickupBoxCollisionBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractableItem, nullptr, "OnPickupBoxCollisionBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_AInteractableItem_OnPickupBoxCollisionBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableItem_OnPickupBoxCollisionBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AInteractableItem_OnPickupBoxCollisionBeginOverlap_Statics::InteractableItem_eventOnPickupBoxCollisionBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableItem_OnPickupBoxCollisionBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInteractableItem_OnPickupBoxCollisionBeginOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AInteractableItem_OnPickupBoxCollisionBeginOverlap_Statics::InteractableItem_eventOnPickupBoxCollisionBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AInteractableItem_OnPickupBoxCollisionBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractableItem_OnPickupBoxCollisionBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AInteractableItem::execOnPickupBoxCollisionBeginOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPickupBoxCollisionBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AInteractableItem Function OnPickupBoxCollisionBeginOverlap

// Begin Class AInteractableItem Function OnPickupBoxCollisionEndOverlap
struct Z_Construct_UFunction_AInteractableItem_OnPickupBoxCollisionEndOverlap_Statics
{
	struct InteractableItem_eventOnPickupBoxCollisionEndOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/InteractableItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractableItem_OnPickupBoxCollisionEndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableItem_eventOnPickupBoxCollisionEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractableItem_OnPickupBoxCollisionEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableItem_eventOnPickupBoxCollisionEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractableItem_OnPickupBoxCollisionEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableItem_eventOnPickupBoxCollisionEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AInteractableItem_OnPickupBoxCollisionEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableItem_eventOnPickupBoxCollisionEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractableItem_OnPickupBoxCollisionEndOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractableItem_OnPickupBoxCollisionEndOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractableItem_OnPickupBoxCollisionEndOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractableItem_OnPickupBoxCollisionEndOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractableItem_OnPickupBoxCollisionEndOverlap_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableItem_OnPickupBoxCollisionEndOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractableItem_OnPickupBoxCollisionEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractableItem, nullptr, "OnPickupBoxCollisionEndOverlap", nullptr, nullptr, Z_Construct_UFunction_AInteractableItem_OnPickupBoxCollisionEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableItem_OnPickupBoxCollisionEndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AInteractableItem_OnPickupBoxCollisionEndOverlap_Statics::InteractableItem_eventOnPickupBoxCollisionEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableItem_OnPickupBoxCollisionEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInteractableItem_OnPickupBoxCollisionEndOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AInteractableItem_OnPickupBoxCollisionEndOverlap_Statics::InteractableItem_eventOnPickupBoxCollisionEndOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AInteractableItem_OnPickupBoxCollisionEndOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractableItem_OnPickupBoxCollisionEndOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AInteractableItem::execOnPickupBoxCollisionEndOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPickupBoxCollisionEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// End Class AInteractableItem Function OnPickupBoxCollisionEndOverlap

// Begin Class AInteractableItem
void AInteractableItem::StaticRegisterNativesAInteractableItem()
{
	UClass* Class = AInteractableItem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Interact", &AInteractableItem::execInteract },
		{ "OnPickupBoxCollisionBeginOverlap", &AInteractableItem::execOnPickupBoxCollisionBeginOverlap },
		{ "OnPickupBoxCollisionEndOverlap", &AInteractableItem::execOnPickupBoxCollisionEndOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInteractableItem);
UClass* Z_Construct_UClass_AInteractableItem_NoRegister()
{
	return AInteractableItem::StaticClass();
}
struct Z_Construct_UClass_AInteractableItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "InteractableItem.h" },
		{ "ModuleRelativePath", "Public/InteractableItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupBoxCollision_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractableItem.h" },
		{ "Tooltip", "This compnent needs to be created in child classes in order to not be the root component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInteract_MetaData[] = {
		{ "ModuleRelativePath", "Public/InteractableItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RunInteractOnServer_MetaData[] = {
		{ "Category", "Interact" },
		{ "ModuleRelativePath", "Public/InteractableItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MulticastInteract_MetaData[] = {
		{ "Category", "Interact" },
		{ "ModuleRelativePath", "Public/InteractableItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RunInteractOnClient_MetaData[] = {
		{ "Category", "Interact" },
		{ "ModuleRelativePath", "Public/InteractableItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupBoxCollision;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInteract;
	static void NewProp_RunInteractOnServer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RunInteractOnServer;
	static void NewProp_MulticastInteract_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_MulticastInteract;
	static void NewProp_RunInteractOnClient_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RunInteractOnClient;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AInteractableItem_Interact, "Interact" }, // 425313789
		{ &Z_Construct_UFunction_AInteractableItem_Interact_BP, "Interact_BP" }, // 3071545154
		{ &Z_Construct_UFunction_AInteractableItem_OnPickupBoxCollisionBeginOverlap, "OnPickupBoxCollisionBeginOverlap" }, // 4092054349
		{ &Z_Construct_UFunction_AInteractableItem_OnPickupBoxCollisionEndOverlap, "OnPickupBoxCollisionEndOverlap" }, // 133611315
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractableItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractableItem_Statics::NewProp_PickupBoxCollision = { "PickupBoxCollision", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractableItem, PickupBoxCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupBoxCollision_MetaData), NewProp_PickupBoxCollision_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AInteractableItem_Statics::NewProp_OnInteract = { "OnInteract", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractableItem, OnInteract), Z_Construct_UDelegateFunction_MultiplayerFPS_OnInteract__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInteract_MetaData), NewProp_OnInteract_MetaData) }; // 863311423
void Z_Construct_UClass_AInteractableItem_Statics::NewProp_RunInteractOnServer_SetBit(void* Obj)
{
	((AInteractableItem*)Obj)->RunInteractOnServer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AInteractableItem_Statics::NewProp_RunInteractOnServer = { "RunInteractOnServer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AInteractableItem), &Z_Construct_UClass_AInteractableItem_Statics::NewProp_RunInteractOnServer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RunInteractOnServer_MetaData), NewProp_RunInteractOnServer_MetaData) };
void Z_Construct_UClass_AInteractableItem_Statics::NewProp_MulticastInteract_SetBit(void* Obj)
{
	((AInteractableItem*)Obj)->MulticastInteract = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AInteractableItem_Statics::NewProp_MulticastInteract = { "MulticastInteract", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AInteractableItem), &Z_Construct_UClass_AInteractableItem_Statics::NewProp_MulticastInteract_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MulticastInteract_MetaData), NewProp_MulticastInteract_MetaData) };
void Z_Construct_UClass_AInteractableItem_Statics::NewProp_RunInteractOnClient_SetBit(void* Obj)
{
	((AInteractableItem*)Obj)->RunInteractOnClient = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AInteractableItem_Statics::NewProp_RunInteractOnClient = { "RunInteractOnClient", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AInteractableItem), &Z_Construct_UClass_AInteractableItem_Statics::NewProp_RunInteractOnClient_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RunInteractOnClient_MetaData), NewProp_RunInteractOnClient_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInteractableItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableItem_Statics::NewProp_PickupBoxCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableItem_Statics::NewProp_OnInteract,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableItem_Statics::NewProp_RunInteractOnServer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableItem_Statics::NewProp_MulticastInteract,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableItem_Statics::NewProp_RunInteractOnClient,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AInteractableItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInteractableItem_Statics::ClassParams = {
	&AInteractableItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AInteractableItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableItem_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableItem_Statics::Class_MetaDataParams), Z_Construct_UClass_AInteractableItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AInteractableItem()
{
	if (!Z_Registration_Info_UClass_AInteractableItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInteractableItem.OuterSingleton, Z_Construct_UClass_AInteractableItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AInteractableItem.OuterSingleton;
}
template<> MULTIPLAYERFPS_API UClass* StaticClass<AInteractableItem>()
{
	return AInteractableItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractableItem);
AInteractableItem::~AInteractableItem() {}
// End Class AInteractableItem

// Begin Registration
<<<<<<< HEAD
struct Z_CompiledInDeferFile_FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_InteractableItem_h_Statics
=======
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_InteractableItem_h_Statics
>>>>>>> parent of f0bfb2a (SLN)
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInteractableItem, AInteractableItem::StaticClass, TEXT("AInteractableItem"), &Z_Registration_Info_UClass_AInteractableItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInteractableItem), 1176412072U) },
	};
};
<<<<<<< HEAD
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_InteractableItem_h_4187881615(TEXT("/Script/MultiplayerFPS"),
	Z_CompiledInDeferFile_FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_InteractableItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_futurelandseres_FutureLandSourceEditor_Plugins_Multiplaf3f90aef00c9V8_Source_MultiplayerFPS_Public_InteractableItem_h_Statics::ClassInfo),
=======
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_InteractableItem_h_2695852495(TEXT("/Script/MultiplayerFPS"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_InteractableItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_InteractableItem_h_Statics::ClassInfo),
>>>>>>> parent of f0bfb2a (SLN)
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
