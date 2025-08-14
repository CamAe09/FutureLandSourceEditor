// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayerFPS/Public/MultiplayerGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
MULTIPLAYERFPS_API UClass* Z_Construct_UClass_AMultiplayerGameMode();
MULTIPLAYERFPS_API UClass* Z_Construct_UClass_AMultiplayerGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_MultiplayerFPS();
// End Cross Module References

// Begin Class AMultiplayerGameMode Function AddPlayerController
struct Z_Construct_UFunction_AMultiplayerGameMode_AddPlayerController_Statics
{
	struct MultiplayerGameMode_eventAddPlayerController_Parms
	{
		APlayerController* NewController;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerGameMode_AddPlayerController_Statics::NewProp_NewController = { "NewController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGameMode_eventAddPlayerController_Parms, NewController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGameMode_AddPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGameMode_AddPlayerController_Statics::NewProp_NewController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGameMode_AddPlayerController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGameMode_AddPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGameMode, nullptr, "AddPlayerController", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGameMode_AddPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGameMode_AddPlayerController_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGameMode_AddPlayerController_Statics::MultiplayerGameMode_eventAddPlayerController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGameMode_AddPlayerController_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGameMode_AddPlayerController_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGameMode_AddPlayerController_Statics::MultiplayerGameMode_eventAddPlayerController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGameMode_AddPlayerController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGameMode_AddPlayerController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGameMode::execAddPlayerController)
{
	P_GET_OBJECT(APlayerController,Z_Param_NewController);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddPlayerController(Z_Param_NewController);
	P_NATIVE_END;
}
// End Class AMultiplayerGameMode Function AddPlayerController

// Begin Class AMultiplayerGameMode Function AddPlayerPawn
struct Z_Construct_UFunction_AMultiplayerGameMode_AddPlayerPawn_Statics
{
	struct MultiplayerGameMode_eventAddPlayerPawn_Parms
	{
		APawn* NewPawn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerGameMode_AddPlayerPawn_Statics::NewProp_NewPawn = { "NewPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGameMode_eventAddPlayerPawn_Parms, NewPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGameMode_AddPlayerPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGameMode_AddPlayerPawn_Statics::NewProp_NewPawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGameMode_AddPlayerPawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGameMode_AddPlayerPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGameMode, nullptr, "AddPlayerPawn", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGameMode_AddPlayerPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGameMode_AddPlayerPawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGameMode_AddPlayerPawn_Statics::MultiplayerGameMode_eventAddPlayerPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGameMode_AddPlayerPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGameMode_AddPlayerPawn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGameMode_AddPlayerPawn_Statics::MultiplayerGameMode_eventAddPlayerPawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGameMode_AddPlayerPawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGameMode_AddPlayerPawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGameMode::execAddPlayerPawn)
{
	P_GET_OBJECT(APawn,Z_Param_NewPawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddPlayerPawn(Z_Param_NewPawn);
	P_NATIVE_END;
}
// End Class AMultiplayerGameMode Function AddPlayerPawn

// Begin Class AMultiplayerGameMode Function GetAllPlayerControllers
struct Z_Construct_UFunction_AMultiplayerGameMode_GetAllPlayerControllers_Statics
{
	struct MultiplayerGameMode_eventGetAllPlayerControllers_Parms
	{
		TArray<APlayerController*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerGameMode_GetAllPlayerControllers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMultiplayerGameMode_GetAllPlayerControllers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGameMode_eventGetAllPlayerControllers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGameMode_GetAllPlayerControllers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGameMode_GetAllPlayerControllers_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGameMode_GetAllPlayerControllers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGameMode_GetAllPlayerControllers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGameMode_GetAllPlayerControllers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGameMode, nullptr, "GetAllPlayerControllers", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGameMode_GetAllPlayerControllers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGameMode_GetAllPlayerControllers_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGameMode_GetAllPlayerControllers_Statics::MultiplayerGameMode_eventGetAllPlayerControllers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGameMode_GetAllPlayerControllers_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGameMode_GetAllPlayerControllers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGameMode_GetAllPlayerControllers_Statics::MultiplayerGameMode_eventGetAllPlayerControllers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGameMode_GetAllPlayerControllers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGameMode_GetAllPlayerControllers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGameMode::execGetAllPlayerControllers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<APlayerController*>*)Z_Param__Result=P_THIS->GetAllPlayerControllers();
	P_NATIVE_END;
}
// End Class AMultiplayerGameMode Function GetAllPlayerControllers

// Begin Class AMultiplayerGameMode Function GetAllPlayerPawns
struct Z_Construct_UFunction_AMultiplayerGameMode_GetAllPlayerPawns_Statics
{
	struct MultiplayerGameMode_eventGetAllPlayerPawns_Parms
	{
		TArray<APawn*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerGameMode_GetAllPlayerPawns_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMultiplayerGameMode_GetAllPlayerPawns_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGameMode_eventGetAllPlayerPawns_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGameMode_GetAllPlayerPawns_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGameMode_GetAllPlayerPawns_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGameMode_GetAllPlayerPawns_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGameMode_GetAllPlayerPawns_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGameMode_GetAllPlayerPawns_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGameMode, nullptr, "GetAllPlayerPawns", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGameMode_GetAllPlayerPawns_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGameMode_GetAllPlayerPawns_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGameMode_GetAllPlayerPawns_Statics::MultiplayerGameMode_eventGetAllPlayerPawns_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGameMode_GetAllPlayerPawns_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGameMode_GetAllPlayerPawns_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGameMode_GetAllPlayerPawns_Statics::MultiplayerGameMode_eventGetAllPlayerPawns_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGameMode_GetAllPlayerPawns()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGameMode_GetAllPlayerPawns_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGameMode::execGetAllPlayerPawns)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<APawn*>*)Z_Param__Result=P_THIS->GetAllPlayerPawns();
	P_NATIVE_END;
}
// End Class AMultiplayerGameMode Function GetAllPlayerPawns

// Begin Class AMultiplayerGameMode Function RemovePlayerController
struct Z_Construct_UFunction_AMultiplayerGameMode_RemovePlayerController_Statics
{
	struct MultiplayerGameMode_eventRemovePlayerController_Parms
	{
		APlayerController* ControllerToRemove;
		bool RemoveByIndex;
		int32 Index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "CPP_Default_Index", "0" },
		{ "CPP_Default_RemoveByIndex", "false" },
		{ "ModuleRelativePath", "Public/MultiplayerGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControllerToRemove;
	static void NewProp_RemoveByIndex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RemoveByIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerGameMode_RemovePlayerController_Statics::NewProp_ControllerToRemove = { "ControllerToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGameMode_eventRemovePlayerController_Parms, ControllerToRemove), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMultiplayerGameMode_RemovePlayerController_Statics::NewProp_RemoveByIndex_SetBit(void* Obj)
{
	((MultiplayerGameMode_eventRemovePlayerController_Parms*)Obj)->RemoveByIndex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerGameMode_RemovePlayerController_Statics::NewProp_RemoveByIndex = { "RemoveByIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerGameMode_eventRemovePlayerController_Parms), &Z_Construct_UFunction_AMultiplayerGameMode_RemovePlayerController_Statics::NewProp_RemoveByIndex_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerGameMode_RemovePlayerController_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGameMode_eventRemovePlayerController_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGameMode_RemovePlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGameMode_RemovePlayerController_Statics::NewProp_ControllerToRemove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGameMode_RemovePlayerController_Statics::NewProp_RemoveByIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGameMode_RemovePlayerController_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGameMode_RemovePlayerController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGameMode_RemovePlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGameMode, nullptr, "RemovePlayerController", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGameMode_RemovePlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGameMode_RemovePlayerController_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGameMode_RemovePlayerController_Statics::MultiplayerGameMode_eventRemovePlayerController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGameMode_RemovePlayerController_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGameMode_RemovePlayerController_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGameMode_RemovePlayerController_Statics::MultiplayerGameMode_eventRemovePlayerController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGameMode_RemovePlayerController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGameMode_RemovePlayerController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGameMode::execRemovePlayerController)
{
	P_GET_OBJECT(APlayerController,Z_Param_ControllerToRemove);
	P_GET_UBOOL(Z_Param_RemoveByIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemovePlayerController(Z_Param_ControllerToRemove,Z_Param_RemoveByIndex,Z_Param_Index);
	P_NATIVE_END;
}
// End Class AMultiplayerGameMode Function RemovePlayerController

// Begin Class AMultiplayerGameMode Function RemovePlayerPawn
struct Z_Construct_UFunction_AMultiplayerGameMode_RemovePlayerPawn_Statics
{
	struct MultiplayerGameMode_eventRemovePlayerPawn_Parms
	{
		APawn* PawnToRemove;
		bool RemoveByIndex;
		int32 Index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "CPP_Default_Index", "0" },
		{ "CPP_Default_RemoveByIndex", "false" },
		{ "ModuleRelativePath", "Public/MultiplayerGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnToRemove;
	static void NewProp_RemoveByIndex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RemoveByIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerGameMode_RemovePlayerPawn_Statics::NewProp_PawnToRemove = { "PawnToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGameMode_eventRemovePlayerPawn_Parms, PawnToRemove), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMultiplayerGameMode_RemovePlayerPawn_Statics::NewProp_RemoveByIndex_SetBit(void* Obj)
{
	((MultiplayerGameMode_eventRemovePlayerPawn_Parms*)Obj)->RemoveByIndex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerGameMode_RemovePlayerPawn_Statics::NewProp_RemoveByIndex = { "RemoveByIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerGameMode_eventRemovePlayerPawn_Parms), &Z_Construct_UFunction_AMultiplayerGameMode_RemovePlayerPawn_Statics::NewProp_RemoveByIndex_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerGameMode_RemovePlayerPawn_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerGameMode_eventRemovePlayerPawn_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGameMode_RemovePlayerPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGameMode_RemovePlayerPawn_Statics::NewProp_PawnToRemove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGameMode_RemovePlayerPawn_Statics::NewProp_RemoveByIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGameMode_RemovePlayerPawn_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGameMode_RemovePlayerPawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGameMode_RemovePlayerPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGameMode, nullptr, "RemovePlayerPawn", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerGameMode_RemovePlayerPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGameMode_RemovePlayerPawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerGameMode_RemovePlayerPawn_Statics::MultiplayerGameMode_eventRemovePlayerPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGameMode_RemovePlayerPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerGameMode_RemovePlayerPawn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerGameMode_RemovePlayerPawn_Statics::MultiplayerGameMode_eventRemovePlayerPawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerGameMode_RemovePlayerPawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerGameMode_RemovePlayerPawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerGameMode::execRemovePlayerPawn)
{
	P_GET_OBJECT(APawn,Z_Param_PawnToRemove);
	P_GET_UBOOL(Z_Param_RemoveByIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemovePlayerPawn(Z_Param_PawnToRemove,Z_Param_RemoveByIndex,Z_Param_Index);
	P_NATIVE_END;
}
// End Class AMultiplayerGameMode Function RemovePlayerPawn

// Begin Class AMultiplayerGameMode
void AMultiplayerGameMode::StaticRegisterNativesAMultiplayerGameMode()
{
	UClass* Class = AMultiplayerGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddPlayerController", &AMultiplayerGameMode::execAddPlayerController },
		{ "AddPlayerPawn", &AMultiplayerGameMode::execAddPlayerPawn },
		{ "GetAllPlayerControllers", &AMultiplayerGameMode::execGetAllPlayerControllers },
		{ "GetAllPlayerPawns", &AMultiplayerGameMode::execGetAllPlayerPawns },
		{ "RemovePlayerController", &AMultiplayerGameMode::execRemovePlayerController },
		{ "RemovePlayerPawn", &AMultiplayerGameMode::execRemovePlayerPawn },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMultiplayerGameMode);
UClass* Z_Construct_UClass_AMultiplayerGameMode_NoRegister()
{
	return AMultiplayerGameMode::StaticClass();
}
struct Z_Construct_UClass_AMultiplayerGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MultiplayerGameMode.h" },
		{ "ModuleRelativePath", "Public/MultiplayerGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllPlayerControllers_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/MultiplayerGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllPlayerPawns_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/MultiplayerGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllPlayerControllers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllPlayerControllers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllPlayerPawns_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllPlayerPawns;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMultiplayerGameMode_AddPlayerController, "AddPlayerController" }, // 3098400942
		{ &Z_Construct_UFunction_AMultiplayerGameMode_AddPlayerPawn, "AddPlayerPawn" }, // 4014283154
		{ &Z_Construct_UFunction_AMultiplayerGameMode_GetAllPlayerControllers, "GetAllPlayerControllers" }, // 3639429955
		{ &Z_Construct_UFunction_AMultiplayerGameMode_GetAllPlayerPawns, "GetAllPlayerPawns" }, // 964369790
		{ &Z_Construct_UFunction_AMultiplayerGameMode_RemovePlayerController, "RemovePlayerController" }, // 4208751683
		{ &Z_Construct_UFunction_AMultiplayerGameMode_RemovePlayerPawn, "RemovePlayerPawn" }, // 2670677475
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMultiplayerGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGameMode_Statics::NewProp_AllPlayerControllers_Inner = { "AllPlayerControllers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMultiplayerGameMode_Statics::NewProp_AllPlayerControllers = { "AllPlayerControllers", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGameMode, AllPlayerControllers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllPlayerControllers_MetaData), NewProp_AllPlayerControllers_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerGameMode_Statics::NewProp_AllPlayerPawns_Inner = { "AllPlayerPawns", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMultiplayerGameMode_Statics::NewProp_AllPlayerPawns = { "AllPlayerPawns", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerGameMode, AllPlayerPawns), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllPlayerPawns_MetaData), NewProp_AllPlayerPawns_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMultiplayerGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGameMode_Statics::NewProp_AllPlayerControllers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGameMode_Statics::NewProp_AllPlayerControllers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGameMode_Statics::NewProp_AllPlayerPawns_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGameMode_Statics::NewProp_AllPlayerPawns,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMultiplayerGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMultiplayerGameMode_Statics::ClassParams = {
	&AMultiplayerGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMultiplayerGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGameMode_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMultiplayerGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMultiplayerGameMode()
{
	if (!Z_Registration_Info_UClass_AMultiplayerGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMultiplayerGameMode.OuterSingleton, Z_Construct_UClass_AMultiplayerGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMultiplayerGameMode.OuterSingleton;
}
template<> MULTIPLAYERFPS_API UClass* StaticClass<AMultiplayerGameMode>()
{
	return AMultiplayerGameMode::StaticClass();
}
AMultiplayerGameMode::AMultiplayerGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMultiplayerGameMode);
AMultiplayerGameMode::~AMultiplayerGameMode() {}
// End Class AMultiplayerGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_MultiplayerGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMultiplayerGameMode, AMultiplayerGameMode::StaticClass, TEXT("AMultiplayerGameMode"), &Z_Registration_Info_UClass_AMultiplayerGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMultiplayerGameMode), 4204867639U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_MultiplayerGameMode_h_3678749860(TEXT("/Script/MultiplayerFPS"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_MultiplayerGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_MultiplayerGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
