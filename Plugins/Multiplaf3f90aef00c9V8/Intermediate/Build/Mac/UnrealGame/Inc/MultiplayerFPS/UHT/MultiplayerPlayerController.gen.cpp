// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayerFPS/Public/MultiplayerPlayerController.h"
#include "Runtime/Engine/Classes/Engine/TimerHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerPlayerController() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackEffect_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
MULTIPLAYERFPS_API UClass* Z_Construct_UClass_AMultiplayerGun_NoRegister();
MULTIPLAYERFPS_API UClass* Z_Construct_UClass_AMultiplayerPlayerController();
MULTIPLAYERFPS_API UClass* Z_Construct_UClass_AMultiplayerPlayerController_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_MultiplayerFPS();
// End Cross Module References

// Begin Class AMultiplayerPlayerController Function ApplySettingsToCharacter
struct Z_Construct_UFunction_AMultiplayerPlayerController_ApplySettingsToCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerController_ApplySettingsToCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerController, nullptr, "ApplySettingsToCharacter", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_ApplySettingsToCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerController_ApplySettingsToCharacter_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerPlayerController_ApplySettingsToCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerController_ApplySettingsToCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerPlayerController::execApplySettingsToCharacter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplySettingsToCharacter();
	P_NATIVE_END;
}
// End Class AMultiplayerPlayerController Function ApplySettingsToCharacter

// Begin Class AMultiplayerPlayerController Function ChooseNewCharacter
struct Z_Construct_UFunction_AMultiplayerPlayerController_ChooseNewCharacter_Statics
{
	struct MultiplayerPlayerController_eventChooseNewCharacter_Parms
	{
		TSubclassOf<APawn> NewCharacter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_NewCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_ChooseNewCharacter_Statics::NewProp_NewCharacter = { "NewCharacter", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerPlayerController_eventChooseNewCharacter_Parms, NewCharacter), Z_Construct_UClass_UClass, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerController_ChooseNewCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_ChooseNewCharacter_Statics::NewProp_NewCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_ChooseNewCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerController_ChooseNewCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerController, nullptr, "ChooseNewCharacter", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerController_ChooseNewCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_ChooseNewCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_ChooseNewCharacter_Statics::MultiplayerPlayerController_eventChooseNewCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_ChooseNewCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerController_ChooseNewCharacter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_ChooseNewCharacter_Statics::MultiplayerPlayerController_eventChooseNewCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerPlayerController_ChooseNewCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerController_ChooseNewCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerPlayerController::execChooseNewCharacter)
{
	P_GET_OBJECT(UClass,Z_Param_NewCharacter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChooseNewCharacter(Z_Param_NewCharacter);
	P_NATIVE_END;
}
// End Class AMultiplayerPlayerController Function ChooseNewCharacter

// Begin Class AMultiplayerPlayerController Function ClientSetControlRotation
struct MultiplayerPlayerController_eventClientSetControlRotation_Parms
{
	FRotator Rotation;
};
static const FName NAME_AMultiplayerPlayerController_ClientSetControlRotation = FName(TEXT("ClientSetControlRotation"));
void AMultiplayerPlayerController::ClientSetControlRotation(FRotator Rotation)
{
	MultiplayerPlayerController_eventClientSetControlRotation_Parms Parms;
	Parms.Rotation=Rotation;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerPlayerController_ClientSetControlRotation);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerPlayerController_ClientSetControlRotation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_ClientSetControlRotation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerPlayerController_eventClientSetControlRotation_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerController_ClientSetControlRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_ClientSetControlRotation_Statics::NewProp_Rotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_ClientSetControlRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerController_ClientSetControlRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerController, nullptr, "ClientSetControlRotation", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerController_ClientSetControlRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_ClientSetControlRotation_Statics::PropPointers), sizeof(MultiplayerPlayerController_eventClientSetControlRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05820CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_ClientSetControlRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerController_ClientSetControlRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerPlayerController_eventClientSetControlRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerPlayerController_ClientSetControlRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerController_ClientSetControlRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerPlayerController::execClientSetControlRotation)
{
	P_GET_STRUCT(FRotator,Z_Param_Rotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientSetControlRotation_Implementation(Z_Param_Rotation);
	P_NATIVE_END;
}
// End Class AMultiplayerPlayerController Function ClientSetControlRotation

// Begin Class AMultiplayerPlayerController Function CreateUIWidget
struct MultiplayerPlayerController_eventCreateUIWidget_Parms
{
	TSubclassOf<UUserWidget> NewWidget;
	int32 ZOrder;
	bool RemoveAllWidgetsFirst;
	UUserWidget* WidgetToRemove;
	bool ChangeCursor;
	bool ShowCursor;
	bool ChangeInput;
	bool GameInput;
	bool ChangePaused;
	bool PauseGame;
};
static const FName NAME_AMultiplayerPlayerController_CreateUIWidget = FName(TEXT("CreateUIWidget"));
void AMultiplayerPlayerController::CreateUIWidget(TSubclassOf<UUserWidget> NewWidget, int32 ZOrder, bool RemoveAllWidgetsFirst, UUserWidget* WidgetToRemove, bool ChangeCursor, bool ShowCursor, bool ChangeInput, bool GameInput, bool ChangePaused, bool PauseGame)
{
	MultiplayerPlayerController_eventCreateUIWidget_Parms Parms;
	Parms.NewWidget=NewWidget;
	Parms.ZOrder=ZOrder;
	Parms.RemoveAllWidgetsFirst=RemoveAllWidgetsFirst ? true : false;
	Parms.WidgetToRemove=WidgetToRemove;
	Parms.ChangeCursor=ChangeCursor ? true : false;
	Parms.ShowCursor=ShowCursor ? true : false;
	Parms.ChangeInput=ChangeInput ? true : false;
	Parms.GameInput=GameInput ? true : false;
	Parms.ChangePaused=ChangePaused ? true : false;
	Parms.PauseGame=PauseGame ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerPlayerController_CreateUIWidget);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerPlayerController_CreateUIWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "CPP_Default_ChangeCursor", "false" },
		{ "CPP_Default_ChangeInput", "false" },
		{ "CPP_Default_ChangePaused", "false" },
		{ "CPP_Default_GameInput", "true" },
		{ "CPP_Default_PauseGame", "false" },
		{ "CPP_Default_RemoveAllWidgetsFirst", "false" },
		{ "CPP_Default_ShowCursor", "false" },
		{ "CPP_Default_WidgetToRemove", "None" },
		{ "CPP_Default_ZOrder", "0" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
		{ "Tooltip", "Only pause offline, does not work in multiplayer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetToRemove_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_NewWidget;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ZOrder;
	static void NewProp_RemoveAllWidgetsFirst_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RemoveAllWidgetsFirst;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetToRemove;
	static void NewProp_ChangeCursor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ChangeCursor;
	static void NewProp_ShowCursor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowCursor;
	static void NewProp_ChangeInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ChangeInput;
	static void NewProp_GameInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_GameInput;
	static void NewProp_ChangePaused_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ChangePaused;
	static void NewProp_PauseGame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PauseGame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_CreateUIWidget_Statics::NewProp_NewWidget = { "NewWidget", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerPlayerController_eventCreateUIWidget_Parms, NewWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_CreateUIWidget_Statics::NewProp_ZOrder = { "ZOrder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerPlayerController_eventCreateUIWidget_Parms, ZOrder), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMultiplayerPlayerController_CreateUIWidget_Statics::NewProp_RemoveAllWidgetsFirst_SetBit(void* Obj)
{
	((MultiplayerPlayerController_eventCreateUIWidget_Parms*)Obj)->RemoveAllWidgetsFirst = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_CreateUIWidget_Statics::NewProp_RemoveAllWidgetsFirst = { "RemoveAllWidgetsFirst", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerPlayerController_eventCreateUIWidget_Parms), &Z_Construct_UFunction_AMultiplayerPlayerController_CreateUIWidget_Statics::NewProp_RemoveAllWidgetsFirst_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_CreateUIWidget_Statics::NewProp_WidgetToRemove = { "WidgetToRemove", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerPlayerController_eventCreateUIWidget_Parms, WidgetToRemove), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetToRemove_MetaData), NewProp_WidgetToRemove_MetaData) };
void Z_Construct_UFunction_AMultiplayerPlayerController_CreateUIWidget_Statics::NewProp_ChangeCursor_SetBit(void* Obj)
{
	((MultiplayerPlayerController_eventCreateUIWidget_Parms*)Obj)->ChangeCursor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_CreateUIWidget_Statics::NewProp_ChangeCursor = { "ChangeCursor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerPlayerController_eventCreateUIWidget_Parms), &Z_Construct_UFunction_AMultiplayerPlayerController_CreateUIWidget_Statics::NewProp_ChangeCursor_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMultiplayerPlayerController_CreateUIWidget_Statics::NewProp_ShowCursor_SetBit(void* Obj)
{
	((MultiplayerPlayerController_eventCreateUIWidget_Parms*)Obj)->ShowCursor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_CreateUIWidget_Statics::NewProp_ShowCursor = { "ShowCursor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerPlayerController_eventCreateUIWidget_Parms), &Z_Construct_UFunction_AMultiplayerPlayerController_CreateUIWidget_Statics::NewProp_ShowCursor_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMultiplayerPlayerController_CreateUIWidget_Statics::NewProp_ChangeInput_SetBit(void* Obj)
{
	((MultiplayerPlayerController_eventCreateUIWidget_Parms*)Obj)->ChangeInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_CreateUIWidget_Statics::NewProp_ChangeInput = { "ChangeInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerPlayerController_eventCreateUIWidget_Parms), &Z_Construct_UFunction_AMultiplayerPlayerController_CreateUIWidget_Statics::NewProp_ChangeInput_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMultiplayerPlayerController_CreateUIWidget_Statics::NewProp_GameInput_SetBit(void* Obj)
{
	((MultiplayerPlayerController_eventCreateUIWidget_Parms*)Obj)->GameInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_CreateUIWidget_Statics::NewProp_GameInput = { "GameInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerPlayerController_eventCreateUIWidget_Parms), &Z_Construct_UFunction_AMultiplayerPlayerController_CreateUIWidget_Statics::NewProp_GameInput_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMultiplayerPlayerController_CreateUIWidget_Statics::NewProp_ChangePaused_SetBit(void* Obj)
{
	((MultiplayerPlayerController_eventCreateUIWidget_Parms*)Obj)->ChangePaused = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_CreateUIWidget_Statics::NewProp_ChangePaused = { "ChangePaused", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerPlayerController_eventCreateUIWidget_Parms), &Z_Construct_UFunction_AMultiplayerPlayerController_CreateUIWidget_Statics::NewProp_ChangePaused_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMultiplayerPlayerController_CreateUIWidget_Statics::NewProp_PauseGame_SetBit(void* Obj)
{
	((MultiplayerPlayerController_eventCreateUIWidget_Parms*)Obj)->PauseGame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_CreateUIWidget_Statics::NewProp_PauseGame = { "PauseGame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerPlayerController_eventCreateUIWidget_Parms), &Z_Construct_UFunction_AMultiplayerPlayerController_CreateUIWidget_Statics::NewProp_PauseGame_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerController_CreateUIWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_CreateUIWidget_Statics::NewProp_NewWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_CreateUIWidget_Statics::NewProp_ZOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_CreateUIWidget_Statics::NewProp_RemoveAllWidgetsFirst,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_CreateUIWidget_Statics::NewProp_WidgetToRemove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_CreateUIWidget_Statics::NewProp_ChangeCursor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_CreateUIWidget_Statics::NewProp_ShowCursor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_CreateUIWidget_Statics::NewProp_ChangeInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_CreateUIWidget_Statics::NewProp_GameInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_CreateUIWidget_Statics::NewProp_ChangePaused,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_CreateUIWidget_Statics::NewProp_PauseGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_CreateUIWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerController_CreateUIWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerController, nullptr, "CreateUIWidget", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerController_CreateUIWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_CreateUIWidget_Statics::PropPointers), sizeof(MultiplayerPlayerController_eventCreateUIWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_CreateUIWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerController_CreateUIWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerPlayerController_eventCreateUIWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerPlayerController_CreateUIWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerController_CreateUIWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerPlayerController::execCreateUIWidget)
{
	P_GET_OBJECT(UClass,Z_Param_NewWidget);
	P_GET_PROPERTY(FIntProperty,Z_Param_ZOrder);
	P_GET_UBOOL(Z_Param_RemoveAllWidgetsFirst);
	P_GET_OBJECT(UUserWidget,Z_Param_WidgetToRemove);
	P_GET_UBOOL(Z_Param_ChangeCursor);
	P_GET_UBOOL(Z_Param_ShowCursor);
	P_GET_UBOOL(Z_Param_ChangeInput);
	P_GET_UBOOL(Z_Param_GameInput);
	P_GET_UBOOL(Z_Param_ChangePaused);
	P_GET_UBOOL(Z_Param_PauseGame);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateUIWidget_Implementation(Z_Param_NewWidget,Z_Param_ZOrder,Z_Param_RemoveAllWidgetsFirst,Z_Param_WidgetToRemove,Z_Param_ChangeCursor,Z_Param_ShowCursor,Z_Param_ChangeInput,Z_Param_GameInput,Z_Param_ChangePaused,Z_Param_PauseGame);
	P_NATIVE_END;
}
// End Class AMultiplayerPlayerController Function CreateUIWidget

// Begin Class AMultiplayerPlayerController Function GetAllSharedCalibersOnSpawn
struct Z_Construct_UFunction_AMultiplayerPlayerController_GetAllSharedCalibersOnSpawn_Statics
{
	struct MultiplayerPlayerController_eventGetAllSharedCalibersOnSpawn_Parms
	{
		TMap<FName,int32> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_GetAllSharedCalibersOnSpawn_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_GetAllSharedCalibersOnSpawn_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_GetAllSharedCalibersOnSpawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerPlayerController_eventGetAllSharedCalibersOnSpawn_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerController_GetAllSharedCalibersOnSpawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_GetAllSharedCalibersOnSpawn_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_GetAllSharedCalibersOnSpawn_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_GetAllSharedCalibersOnSpawn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetAllSharedCalibersOnSpawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerController_GetAllSharedCalibersOnSpawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerController, nullptr, "GetAllSharedCalibersOnSpawn", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerController_GetAllSharedCalibersOnSpawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetAllSharedCalibersOnSpawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_GetAllSharedCalibersOnSpawn_Statics::MultiplayerPlayerController_eventGetAllSharedCalibersOnSpawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetAllSharedCalibersOnSpawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerController_GetAllSharedCalibersOnSpawn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_GetAllSharedCalibersOnSpawn_Statics::MultiplayerPlayerController_eventGetAllSharedCalibersOnSpawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerPlayerController_GetAllSharedCalibersOnSpawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerController_GetAllSharedCalibersOnSpawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerPlayerController::execGetAllSharedCalibersOnSpawn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<FName,int32>*)Z_Param__Result=P_THIS->GetAllSharedCalibersOnSpawn();
	P_NATIVE_END;
}
// End Class AMultiplayerPlayerController Function GetAllSharedCalibersOnSpawn

// Begin Class AMultiplayerPlayerController Function GetAvoidDuplicatesForRandomWeapons
struct Z_Construct_UFunction_AMultiplayerPlayerController_GetAvoidDuplicatesForRandomWeapons_Statics
{
	struct MultiplayerPlayerController_eventGetAvoidDuplicatesForRandomWeapons_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_GetAvoidDuplicatesForRandomWeapons_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerPlayerController_eventGetAvoidDuplicatesForRandomWeapons_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerController_GetAvoidDuplicatesForRandomWeapons_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_GetAvoidDuplicatesForRandomWeapons_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetAvoidDuplicatesForRandomWeapons_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerController_GetAvoidDuplicatesForRandomWeapons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerController, nullptr, "GetAvoidDuplicatesForRandomWeapons", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerController_GetAvoidDuplicatesForRandomWeapons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetAvoidDuplicatesForRandomWeapons_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_GetAvoidDuplicatesForRandomWeapons_Statics::MultiplayerPlayerController_eventGetAvoidDuplicatesForRandomWeapons_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetAvoidDuplicatesForRandomWeapons_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerController_GetAvoidDuplicatesForRandomWeapons_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_GetAvoidDuplicatesForRandomWeapons_Statics::MultiplayerPlayerController_eventGetAvoidDuplicatesForRandomWeapons_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerPlayerController_GetAvoidDuplicatesForRandomWeapons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerController_GetAvoidDuplicatesForRandomWeapons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerPlayerController::execGetAvoidDuplicatesForRandomWeapons)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetAvoidDuplicatesForRandomWeapons();
	P_NATIVE_END;
}
// End Class AMultiplayerPlayerController Function GetAvoidDuplicatesForRandomWeapons

// Begin Class AMultiplayerPlayerController Function GetCanRespawn
struct Z_Construct_UFunction_AMultiplayerPlayerController_GetCanRespawn_Statics
{
	struct MultiplayerPlayerController_eventGetCanRespawn_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerPlayerController_GetCanRespawn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MultiplayerPlayerController_eventGetCanRespawn_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_GetCanRespawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerPlayerController_eventGetCanRespawn_Parms), &Z_Construct_UFunction_AMultiplayerPlayerController_GetCanRespawn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerController_GetCanRespawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_GetCanRespawn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetCanRespawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerController_GetCanRespawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerController, nullptr, "GetCanRespawn", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerController_GetCanRespawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetCanRespawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_GetCanRespawn_Statics::MultiplayerPlayerController_eventGetCanRespawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetCanRespawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerController_GetCanRespawn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_GetCanRespawn_Statics::MultiplayerPlayerController_eventGetCanRespawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerPlayerController_GetCanRespawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerController_GetCanRespawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerPlayerController::execGetCanRespawn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCanRespawn();
	P_NATIVE_END;
}
// End Class AMultiplayerPlayerController Function GetCanRespawn

// Begin Class AMultiplayerPlayerController Function GetCanShoulderSwapThirdPerson
struct Z_Construct_UFunction_AMultiplayerPlayerController_GetCanShoulderSwapThirdPerson_Statics
{
	struct MultiplayerPlayerController_eventGetCanShoulderSwapThirdPerson_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerPlayerController_GetCanShoulderSwapThirdPerson_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MultiplayerPlayerController_eventGetCanShoulderSwapThirdPerson_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_GetCanShoulderSwapThirdPerson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerPlayerController_eventGetCanShoulderSwapThirdPerson_Parms), &Z_Construct_UFunction_AMultiplayerPlayerController_GetCanShoulderSwapThirdPerson_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerController_GetCanShoulderSwapThirdPerson_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_GetCanShoulderSwapThirdPerson_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetCanShoulderSwapThirdPerson_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerController_GetCanShoulderSwapThirdPerson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerController, nullptr, "GetCanShoulderSwapThirdPerson", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerController_GetCanShoulderSwapThirdPerson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetCanShoulderSwapThirdPerson_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_GetCanShoulderSwapThirdPerson_Statics::MultiplayerPlayerController_eventGetCanShoulderSwapThirdPerson_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetCanShoulderSwapThirdPerson_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerController_GetCanShoulderSwapThirdPerson_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_GetCanShoulderSwapThirdPerson_Statics::MultiplayerPlayerController_eventGetCanShoulderSwapThirdPerson_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerPlayerController_GetCanShoulderSwapThirdPerson()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerController_GetCanShoulderSwapThirdPerson_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerPlayerController::execGetCanShoulderSwapThirdPerson)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCanShoulderSwapThirdPerson();
	P_NATIVE_END;
}
// End Class AMultiplayerPlayerController Function GetCanShoulderSwapThirdPerson

// Begin Class AMultiplayerPlayerController Function GetCanShoulderSwapWhileInFirstPerson
struct Z_Construct_UFunction_AMultiplayerPlayerController_GetCanShoulderSwapWhileInFirstPerson_Statics
{
	struct MultiplayerPlayerController_eventGetCanShoulderSwapWhileInFirstPerson_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerPlayerController_GetCanShoulderSwapWhileInFirstPerson_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MultiplayerPlayerController_eventGetCanShoulderSwapWhileInFirstPerson_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_GetCanShoulderSwapWhileInFirstPerson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerPlayerController_eventGetCanShoulderSwapWhileInFirstPerson_Parms), &Z_Construct_UFunction_AMultiplayerPlayerController_GetCanShoulderSwapWhileInFirstPerson_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerController_GetCanShoulderSwapWhileInFirstPerson_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_GetCanShoulderSwapWhileInFirstPerson_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetCanShoulderSwapWhileInFirstPerson_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerController_GetCanShoulderSwapWhileInFirstPerson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerController, nullptr, "GetCanShoulderSwapWhileInFirstPerson", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerController_GetCanShoulderSwapWhileInFirstPerson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetCanShoulderSwapWhileInFirstPerson_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_GetCanShoulderSwapWhileInFirstPerson_Statics::MultiplayerPlayerController_eventGetCanShoulderSwapWhileInFirstPerson_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetCanShoulderSwapWhileInFirstPerson_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerController_GetCanShoulderSwapWhileInFirstPerson_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_GetCanShoulderSwapWhileInFirstPerson_Statics::MultiplayerPlayerController_eventGetCanShoulderSwapWhileInFirstPerson_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerPlayerController_GetCanShoulderSwapWhileInFirstPerson()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerController_GetCanShoulderSwapWhileInFirstPerson_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerPlayerController::execGetCanShoulderSwapWhileInFirstPerson)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCanShoulderSwapWhileInFirstPerson();
	P_NATIVE_END;
}
// End Class AMultiplayerPlayerController Function GetCanShoulderSwapWhileInFirstPerson

// Begin Class AMultiplayerPlayerController Function GetCanSwitchPerspective
struct Z_Construct_UFunction_AMultiplayerPlayerController_GetCanSwitchPerspective_Statics
{
	struct MultiplayerPlayerController_eventGetCanSwitchPerspective_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerPlayerController_GetCanSwitchPerspective_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MultiplayerPlayerController_eventGetCanSwitchPerspective_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_GetCanSwitchPerspective_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerPlayerController_eventGetCanSwitchPerspective_Parms), &Z_Construct_UFunction_AMultiplayerPlayerController_GetCanSwitchPerspective_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerController_GetCanSwitchPerspective_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_GetCanSwitchPerspective_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetCanSwitchPerspective_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerController_GetCanSwitchPerspective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerController, nullptr, "GetCanSwitchPerspective", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerController_GetCanSwitchPerspective_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetCanSwitchPerspective_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_GetCanSwitchPerspective_Statics::MultiplayerPlayerController_eventGetCanSwitchPerspective_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetCanSwitchPerspective_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerController_GetCanSwitchPerspective_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_GetCanSwitchPerspective_Statics::MultiplayerPlayerController_eventGetCanSwitchPerspective_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerPlayerController_GetCanSwitchPerspective()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerController_GetCanSwitchPerspective_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerPlayerController::execGetCanSwitchPerspective)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCanSwitchPerspective();
	P_NATIVE_END;
}
// End Class AMultiplayerPlayerController Function GetCanSwitchPerspective

// Begin Class AMultiplayerPlayerController Function GetCharacterSelectWidget
struct Z_Construct_UFunction_AMultiplayerPlayerController_GetCharacterSelectWidget_Statics
{
	struct MultiplayerPlayerController_eventGetCharacterSelectWidget_Parms
	{
		TSubclassOf<UUserWidget> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_GetCharacterSelectWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerPlayerController_eventGetCharacterSelectWidget_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerController_GetCharacterSelectWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_GetCharacterSelectWidget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetCharacterSelectWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerController_GetCharacterSelectWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerController, nullptr, "GetCharacterSelectWidget", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerController_GetCharacterSelectWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetCharacterSelectWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_GetCharacterSelectWidget_Statics::MultiplayerPlayerController_eventGetCharacterSelectWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetCharacterSelectWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerController_GetCharacterSelectWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_GetCharacterSelectWidget_Statics::MultiplayerPlayerController_eventGetCharacterSelectWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerPlayerController_GetCharacterSelectWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerController_GetCharacterSelectWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerPlayerController::execGetCharacterSelectWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSubclassOf<UUserWidget>*)Z_Param__Result=P_THIS->GetCharacterSelectWidget();
	P_NATIVE_END;
}
// End Class AMultiplayerPlayerController Function GetCharacterSelectWidget

// Begin Class AMultiplayerPlayerController Function GetChooseCharacterOnRespawn
struct Z_Construct_UFunction_AMultiplayerPlayerController_GetChooseCharacterOnRespawn_Statics
{
	struct MultiplayerPlayerController_eventGetChooseCharacterOnRespawn_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerPlayerController_GetChooseCharacterOnRespawn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MultiplayerPlayerController_eventGetChooseCharacterOnRespawn_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_GetChooseCharacterOnRespawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerPlayerController_eventGetChooseCharacterOnRespawn_Parms), &Z_Construct_UFunction_AMultiplayerPlayerController_GetChooseCharacterOnRespawn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerController_GetChooseCharacterOnRespawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_GetChooseCharacterOnRespawn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetChooseCharacterOnRespawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerController_GetChooseCharacterOnRespawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerController, nullptr, "GetChooseCharacterOnRespawn", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerController_GetChooseCharacterOnRespawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetChooseCharacterOnRespawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_GetChooseCharacterOnRespawn_Statics::MultiplayerPlayerController_eventGetChooseCharacterOnRespawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetChooseCharacterOnRespawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerController_GetChooseCharacterOnRespawn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_GetChooseCharacterOnRespawn_Statics::MultiplayerPlayerController_eventGetChooseCharacterOnRespawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerPlayerController_GetChooseCharacterOnRespawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerController_GetChooseCharacterOnRespawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerPlayerController::execGetChooseCharacterOnRespawn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetChooseCharacterOnRespawn();
	P_NATIVE_END;
}
// End Class AMultiplayerPlayerController Function GetChooseCharacterOnRespawn

// Begin Class AMultiplayerPlayerController Function GetControlledPawn
struct Z_Construct_UFunction_AMultiplayerPlayerController_GetControlledPawn_Statics
{
	struct MultiplayerPlayerController_eventGetControlledPawn_Parms
	{
		APawn* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
		{ "Tooltip", "This is exactly the same as the engine function, the reason it is BlueprintCallable is because you can override this function" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_GetControlledPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerPlayerController_eventGetControlledPawn_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerController_GetControlledPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_GetControlledPawn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetControlledPawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerController_GetControlledPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerController, nullptr, "GetControlledPawn", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerController_GetControlledPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetControlledPawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_GetControlledPawn_Statics::MultiplayerPlayerController_eventGetControlledPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetControlledPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerController_GetControlledPawn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_GetControlledPawn_Statics::MultiplayerPlayerController_eventGetControlledPawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerPlayerController_GetControlledPawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerController_GetControlledPawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerPlayerController::execGetControlledPawn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APawn**)Z_Param__Result=P_THIS->GetControlledPawn();
	P_NATIVE_END;
}
// End Class AMultiplayerPlayerController Function GetControlledPawn

// Begin Class AMultiplayerPlayerController Function GetDieWhenChoosingNewCharacter
struct Z_Construct_UFunction_AMultiplayerPlayerController_GetDieWhenChoosingNewCharacter_Statics
{
	struct MultiplayerPlayerController_eventGetDieWhenChoosingNewCharacter_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerPlayerController_GetDieWhenChoosingNewCharacter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MultiplayerPlayerController_eventGetDieWhenChoosingNewCharacter_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_GetDieWhenChoosingNewCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerPlayerController_eventGetDieWhenChoosingNewCharacter_Parms), &Z_Construct_UFunction_AMultiplayerPlayerController_GetDieWhenChoosingNewCharacter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerController_GetDieWhenChoosingNewCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_GetDieWhenChoosingNewCharacter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetDieWhenChoosingNewCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerController_GetDieWhenChoosingNewCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerController, nullptr, "GetDieWhenChoosingNewCharacter", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerController_GetDieWhenChoosingNewCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetDieWhenChoosingNewCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_GetDieWhenChoosingNewCharacter_Statics::MultiplayerPlayerController_eventGetDieWhenChoosingNewCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetDieWhenChoosingNewCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerController_GetDieWhenChoosingNewCharacter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_GetDieWhenChoosingNewCharacter_Statics::MultiplayerPlayerController_eventGetDieWhenChoosingNewCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerPlayerController_GetDieWhenChoosingNewCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerController_GetDieWhenChoosingNewCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerPlayerController::execGetDieWhenChoosingNewCharacter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetDieWhenChoosingNewCharacter();
	P_NATIVE_END;
}
// End Class AMultiplayerPlayerController Function GetDieWhenChoosingNewCharacter

// Begin Class AMultiplayerPlayerController Function GetGiveLoadoutOnBeginPlay
struct Z_Construct_UFunction_AMultiplayerPlayerController_GetGiveLoadoutOnBeginPlay_Statics
{
	struct MultiplayerPlayerController_eventGetGiveLoadoutOnBeginPlay_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerPlayerController_GetGiveLoadoutOnBeginPlay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MultiplayerPlayerController_eventGetGiveLoadoutOnBeginPlay_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_GetGiveLoadoutOnBeginPlay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerPlayerController_eventGetGiveLoadoutOnBeginPlay_Parms), &Z_Construct_UFunction_AMultiplayerPlayerController_GetGiveLoadoutOnBeginPlay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerController_GetGiveLoadoutOnBeginPlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_GetGiveLoadoutOnBeginPlay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetGiveLoadoutOnBeginPlay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerController_GetGiveLoadoutOnBeginPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerController, nullptr, "GetGiveLoadoutOnBeginPlay", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerController_GetGiveLoadoutOnBeginPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetGiveLoadoutOnBeginPlay_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_GetGiveLoadoutOnBeginPlay_Statics::MultiplayerPlayerController_eventGetGiveLoadoutOnBeginPlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetGiveLoadoutOnBeginPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerController_GetGiveLoadoutOnBeginPlay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_GetGiveLoadoutOnBeginPlay_Statics::MultiplayerPlayerController_eventGetGiveLoadoutOnBeginPlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerPlayerController_GetGiveLoadoutOnBeginPlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerController_GetGiveLoadoutOnBeginPlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerPlayerController::execGetGiveLoadoutOnBeginPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetGiveLoadoutOnBeginPlay();
	P_NATIVE_END;
}
// End Class AMultiplayerPlayerController Function GetGiveLoadoutOnBeginPlay

// Begin Class AMultiplayerPlayerController Function GetHasSpawnedPlayer
struct Z_Construct_UFunction_AMultiplayerPlayerController_GetHasSpawnedPlayer_Statics
{
	struct MultiplayerPlayerController_eventGetHasSpawnedPlayer_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerPlayerController_GetHasSpawnedPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MultiplayerPlayerController_eventGetHasSpawnedPlayer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_GetHasSpawnedPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerPlayerController_eventGetHasSpawnedPlayer_Parms), &Z_Construct_UFunction_AMultiplayerPlayerController_GetHasSpawnedPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerController_GetHasSpawnedPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_GetHasSpawnedPlayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetHasSpawnedPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerController_GetHasSpawnedPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerController, nullptr, "GetHasSpawnedPlayer", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerController_GetHasSpawnedPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetHasSpawnedPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_GetHasSpawnedPlayer_Statics::MultiplayerPlayerController_eventGetHasSpawnedPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetHasSpawnedPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerController_GetHasSpawnedPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_GetHasSpawnedPlayer_Statics::MultiplayerPlayerController_eventGetHasSpawnedPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerPlayerController_GetHasSpawnedPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerController_GetHasSpawnedPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerPlayerController::execGetHasSpawnedPlayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetHasSpawnedPlayer();
	P_NATIVE_END;
}
// End Class AMultiplayerPlayerController Function GetHasSpawnedPlayer

// Begin Class AMultiplayerPlayerController Function GetMaxWeaponAmount
struct Z_Construct_UFunction_AMultiplayerPlayerController_GetMaxWeaponAmount_Statics
{
	struct MultiplayerPlayerController_eventGetMaxWeaponAmount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_GetMaxWeaponAmount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerPlayerController_eventGetMaxWeaponAmount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerController_GetMaxWeaponAmount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_GetMaxWeaponAmount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetMaxWeaponAmount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerController_GetMaxWeaponAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerController, nullptr, "GetMaxWeaponAmount", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerController_GetMaxWeaponAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetMaxWeaponAmount_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_GetMaxWeaponAmount_Statics::MultiplayerPlayerController_eventGetMaxWeaponAmount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetMaxWeaponAmount_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerController_GetMaxWeaponAmount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_GetMaxWeaponAmount_Statics::MultiplayerPlayerController_eventGetMaxWeaponAmount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerPlayerController_GetMaxWeaponAmount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerController_GetMaxWeaponAmount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerPlayerController::execGetMaxWeaponAmount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMaxWeaponAmount();
	P_NATIVE_END;
}
// End Class AMultiplayerPlayerController Function GetMaxWeaponAmount

// Begin Class AMultiplayerPlayerController Function GetPlayerIndex
struct Z_Construct_UFunction_AMultiplayerPlayerController_GetPlayerIndex_Statics
{
	struct MultiplayerPlayerController_eventGetPlayerIndex_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_GetPlayerIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerPlayerController_eventGetPlayerIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerController_GetPlayerIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_GetPlayerIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetPlayerIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerController_GetPlayerIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerController, nullptr, "GetPlayerIndex", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerController_GetPlayerIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetPlayerIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_GetPlayerIndex_Statics::MultiplayerPlayerController_eventGetPlayerIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetPlayerIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerController_GetPlayerIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_GetPlayerIndex_Statics::MultiplayerPlayerController_eventGetPlayerIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerPlayerController_GetPlayerIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerController_GetPlayerIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerPlayerController::execGetPlayerIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPlayerIndex();
	P_NATIVE_END;
}
// End Class AMultiplayerPlayerController Function GetPlayerIndex

// Begin Class AMultiplayerPlayerController Function GetPlayerPawnClass
struct Z_Construct_UFunction_AMultiplayerPlayerController_GetPlayerPawnClass_Statics
{
	struct MultiplayerPlayerController_eventGetPlayerPawnClass_Parms
	{
		TSubclassOf<APawn> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_GetPlayerPawnClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerPlayerController_eventGetPlayerPawnClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerController_GetPlayerPawnClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_GetPlayerPawnClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetPlayerPawnClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerController_GetPlayerPawnClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerController, nullptr, "GetPlayerPawnClass", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerController_GetPlayerPawnClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetPlayerPawnClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_GetPlayerPawnClass_Statics::MultiplayerPlayerController_eventGetPlayerPawnClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetPlayerPawnClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerController_GetPlayerPawnClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_GetPlayerPawnClass_Statics::MultiplayerPlayerController_eventGetPlayerPawnClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerPlayerController_GetPlayerPawnClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerController_GetPlayerPawnClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerPlayerController::execGetPlayerPawnClass)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSubclassOf<APawn>*)Z_Param__Result=P_THIS->GetPlayerPawnClass();
	P_NATIVE_END;
}
// End Class AMultiplayerPlayerController Function GetPlayerPawnClass

// Begin Class AMultiplayerPlayerController Function GetRandomizeUnselectedWeapons
struct Z_Construct_UFunction_AMultiplayerPlayerController_GetRandomizeUnselectedWeapons_Statics
{
	struct MultiplayerPlayerController_eventGetRandomizeUnselectedWeapons_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerPlayerController_GetRandomizeUnselectedWeapons_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MultiplayerPlayerController_eventGetRandomizeUnselectedWeapons_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_GetRandomizeUnselectedWeapons_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerPlayerController_eventGetRandomizeUnselectedWeapons_Parms), &Z_Construct_UFunction_AMultiplayerPlayerController_GetRandomizeUnselectedWeapons_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerController_GetRandomizeUnselectedWeapons_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_GetRandomizeUnselectedWeapons_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetRandomizeUnselectedWeapons_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerController_GetRandomizeUnselectedWeapons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerController, nullptr, "GetRandomizeUnselectedWeapons", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerController_GetRandomizeUnselectedWeapons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetRandomizeUnselectedWeapons_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_GetRandomizeUnselectedWeapons_Statics::MultiplayerPlayerController_eventGetRandomizeUnselectedWeapons_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetRandomizeUnselectedWeapons_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerController_GetRandomizeUnselectedWeapons_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_GetRandomizeUnselectedWeapons_Statics::MultiplayerPlayerController_eventGetRandomizeUnselectedWeapons_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerPlayerController_GetRandomizeUnselectedWeapons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerController_GetRandomizeUnselectedWeapons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerPlayerController::execGetRandomizeUnselectedWeapons)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetRandomizeUnselectedWeapons();
	P_NATIVE_END;
}
// End Class AMultiplayerPlayerController Function GetRandomizeUnselectedWeapons

// Begin Class AMultiplayerPlayerController Function GetRespawnDelay
struct Z_Construct_UFunction_AMultiplayerPlayerController_GetRespawnDelay_Statics
{
	struct MultiplayerPlayerController_eventGetRespawnDelay_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_GetRespawnDelay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerPlayerController_eventGetRespawnDelay_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerController_GetRespawnDelay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_GetRespawnDelay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetRespawnDelay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerController_GetRespawnDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerController, nullptr, "GetRespawnDelay", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerController_GetRespawnDelay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetRespawnDelay_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_GetRespawnDelay_Statics::MultiplayerPlayerController_eventGetRespawnDelay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetRespawnDelay_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerController_GetRespawnDelay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_GetRespawnDelay_Statics::MultiplayerPlayerController_eventGetRespawnDelay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerPlayerController_GetRespawnDelay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerController_GetRespawnDelay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerPlayerController::execGetRespawnDelay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetRespawnDelay();
	P_NATIVE_END;
}
// End Class AMultiplayerPlayerController Function GetRespawnDelay

// Begin Class AMultiplayerPlayerController Function GetRespawnPoints
struct Z_Construct_UFunction_AMultiplayerPlayerController_GetRespawnPoints_Statics
{
	struct MultiplayerPlayerController_eventGetRespawnPoints_Parms
	{
		TMap<FVector,FRotator> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_GetRespawnPoints_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_GetRespawnPoints_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_GetRespawnPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerPlayerController_eventGetRespawnPoints_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerController_GetRespawnPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_GetRespawnPoints_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_GetRespawnPoints_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_GetRespawnPoints_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetRespawnPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerController_GetRespawnPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerController, nullptr, "GetRespawnPoints", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerController_GetRespawnPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetRespawnPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_GetRespawnPoints_Statics::MultiplayerPlayerController_eventGetRespawnPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetRespawnPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerController_GetRespawnPoints_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_GetRespawnPoints_Statics::MultiplayerPlayerController_eventGetRespawnPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerPlayerController_GetRespawnPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerController_GetRespawnPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerPlayerController::execGetRespawnPoints)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<FVector,FRotator>*)Z_Param__Result=P_THIS->GetRespawnPoints();
	P_NATIVE_END;
}
// End Class AMultiplayerPlayerController Function GetRespawnPoints

// Begin Class AMultiplayerPlayerController Function GetUILastIndex
struct Z_Construct_UFunction_AMultiplayerPlayerController_GetUILastIndex_Statics
{
	struct MultiplayerPlayerController_eventGetUILastIndex_Parms
	{
		UUserWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_GetUILastIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerPlayerController_eventGetUILastIndex_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerController_GetUILastIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_GetUILastIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetUILastIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerController_GetUILastIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerController, nullptr, "GetUILastIndex", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerController_GetUILastIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetUILastIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_GetUILastIndex_Statics::MultiplayerPlayerController_eventGetUILastIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetUILastIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerController_GetUILastIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_GetUILastIndex_Statics::MultiplayerPlayerController_eventGetUILastIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerPlayerController_GetUILastIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerController_GetUILastIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerPlayerController::execGetUILastIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UUserWidget**)Z_Param__Result=P_THIS->GetUILastIndex();
	P_NATIVE_END;
}
// End Class AMultiplayerPlayerController Function GetUILastIndex

// Begin Class AMultiplayerPlayerController Function GetUsingThirdPerson
struct Z_Construct_UFunction_AMultiplayerPlayerController_GetUsingThirdPerson_Statics
{
	struct MultiplayerPlayerController_eventGetUsingThirdPerson_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerPlayerController_GetUsingThirdPerson_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MultiplayerPlayerController_eventGetUsingThirdPerson_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_GetUsingThirdPerson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerPlayerController_eventGetUsingThirdPerson_Parms), &Z_Construct_UFunction_AMultiplayerPlayerController_GetUsingThirdPerson_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerController_GetUsingThirdPerson_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_GetUsingThirdPerson_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetUsingThirdPerson_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerController_GetUsingThirdPerson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerController, nullptr, "GetUsingThirdPerson", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerController_GetUsingThirdPerson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetUsingThirdPerson_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_GetUsingThirdPerson_Statics::MultiplayerPlayerController_eventGetUsingThirdPerson_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetUsingThirdPerson_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerController_GetUsingThirdPerson_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_GetUsingThirdPerson_Statics::MultiplayerPlayerController_eventGetUsingThirdPerson_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerPlayerController_GetUsingThirdPerson()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerController_GetUsingThirdPerson_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerPlayerController::execGetUsingThirdPerson)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetUsingThirdPerson();
	P_NATIVE_END;
}
// End Class AMultiplayerPlayerController Function GetUsingThirdPerson

// Begin Class AMultiplayerPlayerController Function GetUsingThirdPersonLeftShoulder
struct Z_Construct_UFunction_AMultiplayerPlayerController_GetUsingThirdPersonLeftShoulder_Statics
{
	struct MultiplayerPlayerController_eventGetUsingThirdPersonLeftShoulder_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerPlayerController_GetUsingThirdPersonLeftShoulder_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MultiplayerPlayerController_eventGetUsingThirdPersonLeftShoulder_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_GetUsingThirdPersonLeftShoulder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerPlayerController_eventGetUsingThirdPersonLeftShoulder_Parms), &Z_Construct_UFunction_AMultiplayerPlayerController_GetUsingThirdPersonLeftShoulder_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerController_GetUsingThirdPersonLeftShoulder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_GetUsingThirdPersonLeftShoulder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetUsingThirdPersonLeftShoulder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerController_GetUsingThirdPersonLeftShoulder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerController, nullptr, "GetUsingThirdPersonLeftShoulder", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerController_GetUsingThirdPersonLeftShoulder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetUsingThirdPersonLeftShoulder_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_GetUsingThirdPersonLeftShoulder_Statics::MultiplayerPlayerController_eventGetUsingThirdPersonLeftShoulder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GetUsingThirdPersonLeftShoulder_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerController_GetUsingThirdPersonLeftShoulder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_GetUsingThirdPersonLeftShoulder_Statics::MultiplayerPlayerController_eventGetUsingThirdPersonLeftShoulder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerPlayerController_GetUsingThirdPersonLeftShoulder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerController_GetUsingThirdPersonLeftShoulder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerPlayerController::execGetUsingThirdPersonLeftShoulder)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetUsingThirdPersonLeftShoulder();
	P_NATIVE_END;
}
// End Class AMultiplayerPlayerController Function GetUsingThirdPersonLeftShoulder

// Begin Class AMultiplayerPlayerController Function GiveLoadout
static const FName NAME_AMultiplayerPlayerController_GiveLoadout = FName(TEXT("GiveLoadout"));
void AMultiplayerPlayerController::GiveLoadout()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerPlayerController_GiveLoadout);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerPlayerController_GiveLoadout_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerController_GiveLoadout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerController, nullptr, "GiveLoadout", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_GiveLoadout_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerController_GiveLoadout_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerPlayerController_GiveLoadout()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerController_GiveLoadout_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerPlayerController::execGiveLoadout)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GiveLoadout_Implementation();
	P_NATIVE_END;
}
// End Class AMultiplayerPlayerController Function GiveLoadout

// Begin Class AMultiplayerPlayerController Function PossessPawn
struct Z_Construct_UFunction_AMultiplayerPlayerController_PossessPawn_Statics
{
	struct MultiplayerPlayerController_eventPossessPawn_Parms
	{
		TSubclassOf<APawn> NewPawnToSpawn;
		APawn* NewPawn;
		bool SpawnNewPawn;
		FVector Location;
		FRotator Rotation;
		bool DestroyOldPawn;
		bool KeepControlRotation;
		bool KeepVelocity;
		bool ChangeStartingVelocity;
		FVector NewVelocity;
		bool UsePlayerPawnChoice;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "CPP_Default_ChangeStartingVelocity", "false" },
		{ "CPP_Default_KeepControlRotation", "true" },
		{ "CPP_Default_KeepVelocity", "false" },
		{ "CPP_Default_NewVelocity", "" },
		{ "CPP_Default_UsePlayerPawnChoice", "false" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
		{ "Tooltip", "Velocity options only apply to characters, UsePlayerPawnChoice will override NewPawnToSpawn and NewPawn and only applies if ChooseCharacterOnSpawn is not 0, keep velocity won't work if you have ChooseCharacterOnSpawn not at 0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_NewPawnToSpawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPawn;
	static void NewProp_SpawnNewPawn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SpawnNewPawn;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static void NewProp_DestroyOldPawn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DestroyOldPawn;
	static void NewProp_KeepControlRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_KeepControlRotation;
	static void NewProp_KeepVelocity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_KeepVelocity;
	static void NewProp_ChangeStartingVelocity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ChangeStartingVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewVelocity;
	static void NewProp_UsePlayerPawnChoice_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UsePlayerPawnChoice;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_PossessPawn_Statics::NewProp_NewPawnToSpawn = { "NewPawnToSpawn", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerPlayerController_eventPossessPawn_Parms, NewPawnToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_PossessPawn_Statics::NewProp_NewPawn = { "NewPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerPlayerController_eventPossessPawn_Parms, NewPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMultiplayerPlayerController_PossessPawn_Statics::NewProp_SpawnNewPawn_SetBit(void* Obj)
{
	((MultiplayerPlayerController_eventPossessPawn_Parms*)Obj)->SpawnNewPawn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_PossessPawn_Statics::NewProp_SpawnNewPawn = { "SpawnNewPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerPlayerController_eventPossessPawn_Parms), &Z_Construct_UFunction_AMultiplayerPlayerController_PossessPawn_Statics::NewProp_SpawnNewPawn_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_PossessPawn_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerPlayerController_eventPossessPawn_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_PossessPawn_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerPlayerController_eventPossessPawn_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMultiplayerPlayerController_PossessPawn_Statics::NewProp_DestroyOldPawn_SetBit(void* Obj)
{
	((MultiplayerPlayerController_eventPossessPawn_Parms*)Obj)->DestroyOldPawn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_PossessPawn_Statics::NewProp_DestroyOldPawn = { "DestroyOldPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerPlayerController_eventPossessPawn_Parms), &Z_Construct_UFunction_AMultiplayerPlayerController_PossessPawn_Statics::NewProp_DestroyOldPawn_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMultiplayerPlayerController_PossessPawn_Statics::NewProp_KeepControlRotation_SetBit(void* Obj)
{
	((MultiplayerPlayerController_eventPossessPawn_Parms*)Obj)->KeepControlRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_PossessPawn_Statics::NewProp_KeepControlRotation = { "KeepControlRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerPlayerController_eventPossessPawn_Parms), &Z_Construct_UFunction_AMultiplayerPlayerController_PossessPawn_Statics::NewProp_KeepControlRotation_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMultiplayerPlayerController_PossessPawn_Statics::NewProp_KeepVelocity_SetBit(void* Obj)
{
	((MultiplayerPlayerController_eventPossessPawn_Parms*)Obj)->KeepVelocity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_PossessPawn_Statics::NewProp_KeepVelocity = { "KeepVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerPlayerController_eventPossessPawn_Parms), &Z_Construct_UFunction_AMultiplayerPlayerController_PossessPawn_Statics::NewProp_KeepVelocity_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMultiplayerPlayerController_PossessPawn_Statics::NewProp_ChangeStartingVelocity_SetBit(void* Obj)
{
	((MultiplayerPlayerController_eventPossessPawn_Parms*)Obj)->ChangeStartingVelocity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_PossessPawn_Statics::NewProp_ChangeStartingVelocity = { "ChangeStartingVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerPlayerController_eventPossessPawn_Parms), &Z_Construct_UFunction_AMultiplayerPlayerController_PossessPawn_Statics::NewProp_ChangeStartingVelocity_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_PossessPawn_Statics::NewProp_NewVelocity = { "NewVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerPlayerController_eventPossessPawn_Parms, NewVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMultiplayerPlayerController_PossessPawn_Statics::NewProp_UsePlayerPawnChoice_SetBit(void* Obj)
{
	((MultiplayerPlayerController_eventPossessPawn_Parms*)Obj)->UsePlayerPawnChoice = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_PossessPawn_Statics::NewProp_UsePlayerPawnChoice = { "UsePlayerPawnChoice", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerPlayerController_eventPossessPawn_Parms), &Z_Construct_UFunction_AMultiplayerPlayerController_PossessPawn_Statics::NewProp_UsePlayerPawnChoice_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerController_PossessPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_PossessPawn_Statics::NewProp_NewPawnToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_PossessPawn_Statics::NewProp_NewPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_PossessPawn_Statics::NewProp_SpawnNewPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_PossessPawn_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_PossessPawn_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_PossessPawn_Statics::NewProp_DestroyOldPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_PossessPawn_Statics::NewProp_KeepControlRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_PossessPawn_Statics::NewProp_KeepVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_PossessPawn_Statics::NewProp_ChangeStartingVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_PossessPawn_Statics::NewProp_NewVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_PossessPawn_Statics::NewProp_UsePlayerPawnChoice,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_PossessPawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerController_PossessPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerController, nullptr, "PossessPawn", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerController_PossessPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_PossessPawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_PossessPawn_Statics::MultiplayerPlayerController_eventPossessPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_PossessPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerController_PossessPawn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_PossessPawn_Statics::MultiplayerPlayerController_eventPossessPawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerPlayerController_PossessPawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerController_PossessPawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerPlayerController::execPossessPawn)
{
	P_GET_OBJECT(UClass,Z_Param_NewPawnToSpawn);
	P_GET_OBJECT(APawn,Z_Param_NewPawn);
	P_GET_UBOOL(Z_Param_SpawnNewPawn);
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_STRUCT(FRotator,Z_Param_Rotation);
	P_GET_UBOOL(Z_Param_DestroyOldPawn);
	P_GET_UBOOL(Z_Param_KeepControlRotation);
	P_GET_UBOOL(Z_Param_KeepVelocity);
	P_GET_UBOOL(Z_Param_ChangeStartingVelocity);
	P_GET_STRUCT(FVector,Z_Param_NewVelocity);
	P_GET_UBOOL(Z_Param_UsePlayerPawnChoice);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PossessPawn(Z_Param_NewPawnToSpawn,Z_Param_NewPawn,Z_Param_SpawnNewPawn,Z_Param_Location,Z_Param_Rotation,Z_Param_DestroyOldPawn,Z_Param_KeepControlRotation,Z_Param_KeepVelocity,Z_Param_ChangeStartingVelocity,Z_Param_NewVelocity,Z_Param_UsePlayerPawnChoice);
	P_NATIVE_END;
}
// End Class AMultiplayerPlayerController Function PossessPawn

// Begin Class AMultiplayerPlayerController Function PrintStringForControlledPawnInvalidApplySettings
struct Z_Construct_UFunction_AMultiplayerPlayerController_PrintStringForControlledPawnInvalidApplySettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerController_PrintStringForControlledPawnInvalidApplySettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerController, nullptr, "PrintStringForControlledPawnInvalidApplySettings", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_PrintStringForControlledPawnInvalidApplySettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerController_PrintStringForControlledPawnInvalidApplySettings_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerPlayerController_PrintStringForControlledPawnInvalidApplySettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerController_PrintStringForControlledPawnInvalidApplySettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerPlayerController::execPrintStringForControlledPawnInvalidApplySettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PrintStringForControlledPawnInvalidApplySettings();
	P_NATIVE_END;
}
// End Class AMultiplayerPlayerController Function PrintStringForControlledPawnInvalidApplySettings

// Begin Class AMultiplayerPlayerController Function RemoveUIWidget
struct MultiplayerPlayerController_eventRemoveUIWidget_Parms
{
	UUserWidget* WidgetToRemove;
	bool RemoveAllWidgets;
	bool ChangeCursor;
	bool ShowCursor;
	bool ChangeInput;
	bool GameInput;
	bool ChangePaused;
	bool PauseGame;
};
static const FName NAME_AMultiplayerPlayerController_RemoveUIWidget = FName(TEXT("RemoveUIWidget"));
void AMultiplayerPlayerController::RemoveUIWidget(UUserWidget* WidgetToRemove, bool RemoveAllWidgets, bool ChangeCursor, bool ShowCursor, bool ChangeInput, bool GameInput, bool ChangePaused, bool PauseGame)
{
	MultiplayerPlayerController_eventRemoveUIWidget_Parms Parms;
	Parms.WidgetToRemove=WidgetToRemove;
	Parms.RemoveAllWidgets=RemoveAllWidgets ? true : false;
	Parms.ChangeCursor=ChangeCursor ? true : false;
	Parms.ShowCursor=ShowCursor ? true : false;
	Parms.ChangeInput=ChangeInput ? true : false;
	Parms.GameInput=GameInput ? true : false;
	Parms.ChangePaused=ChangePaused ? true : false;
	Parms.PauseGame=PauseGame ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerPlayerController_RemoveUIWidget);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerPlayerController_RemoveUIWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "CPP_Default_ChangeCursor", "false" },
		{ "CPP_Default_ChangeInput", "false" },
		{ "CPP_Default_ChangePaused", "false" },
		{ "CPP_Default_GameInput", "true" },
		{ "CPP_Default_PauseGame", "false" },
		{ "CPP_Default_RemoveAllWidgets", "false" },
		{ "CPP_Default_ShowCursor", "false" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetToRemove_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetToRemove;
	static void NewProp_RemoveAllWidgets_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RemoveAllWidgets;
	static void NewProp_ChangeCursor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ChangeCursor;
	static void NewProp_ShowCursor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowCursor;
	static void NewProp_ChangeInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ChangeInput;
	static void NewProp_GameInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_GameInput;
	static void NewProp_ChangePaused_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ChangePaused;
	static void NewProp_PauseGame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PauseGame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_RemoveUIWidget_Statics::NewProp_WidgetToRemove = { "WidgetToRemove", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerPlayerController_eventRemoveUIWidget_Parms, WidgetToRemove), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetToRemove_MetaData), NewProp_WidgetToRemove_MetaData) };
void Z_Construct_UFunction_AMultiplayerPlayerController_RemoveUIWidget_Statics::NewProp_RemoveAllWidgets_SetBit(void* Obj)
{
	((MultiplayerPlayerController_eventRemoveUIWidget_Parms*)Obj)->RemoveAllWidgets = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_RemoveUIWidget_Statics::NewProp_RemoveAllWidgets = { "RemoveAllWidgets", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerPlayerController_eventRemoveUIWidget_Parms), &Z_Construct_UFunction_AMultiplayerPlayerController_RemoveUIWidget_Statics::NewProp_RemoveAllWidgets_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMultiplayerPlayerController_RemoveUIWidget_Statics::NewProp_ChangeCursor_SetBit(void* Obj)
{
	((MultiplayerPlayerController_eventRemoveUIWidget_Parms*)Obj)->ChangeCursor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_RemoveUIWidget_Statics::NewProp_ChangeCursor = { "ChangeCursor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerPlayerController_eventRemoveUIWidget_Parms), &Z_Construct_UFunction_AMultiplayerPlayerController_RemoveUIWidget_Statics::NewProp_ChangeCursor_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMultiplayerPlayerController_RemoveUIWidget_Statics::NewProp_ShowCursor_SetBit(void* Obj)
{
	((MultiplayerPlayerController_eventRemoveUIWidget_Parms*)Obj)->ShowCursor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_RemoveUIWidget_Statics::NewProp_ShowCursor = { "ShowCursor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerPlayerController_eventRemoveUIWidget_Parms), &Z_Construct_UFunction_AMultiplayerPlayerController_RemoveUIWidget_Statics::NewProp_ShowCursor_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMultiplayerPlayerController_RemoveUIWidget_Statics::NewProp_ChangeInput_SetBit(void* Obj)
{
	((MultiplayerPlayerController_eventRemoveUIWidget_Parms*)Obj)->ChangeInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_RemoveUIWidget_Statics::NewProp_ChangeInput = { "ChangeInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerPlayerController_eventRemoveUIWidget_Parms), &Z_Construct_UFunction_AMultiplayerPlayerController_RemoveUIWidget_Statics::NewProp_ChangeInput_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMultiplayerPlayerController_RemoveUIWidget_Statics::NewProp_GameInput_SetBit(void* Obj)
{
	((MultiplayerPlayerController_eventRemoveUIWidget_Parms*)Obj)->GameInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_RemoveUIWidget_Statics::NewProp_GameInput = { "GameInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerPlayerController_eventRemoveUIWidget_Parms), &Z_Construct_UFunction_AMultiplayerPlayerController_RemoveUIWidget_Statics::NewProp_GameInput_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMultiplayerPlayerController_RemoveUIWidget_Statics::NewProp_ChangePaused_SetBit(void* Obj)
{
	((MultiplayerPlayerController_eventRemoveUIWidget_Parms*)Obj)->ChangePaused = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_RemoveUIWidget_Statics::NewProp_ChangePaused = { "ChangePaused", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerPlayerController_eventRemoveUIWidget_Parms), &Z_Construct_UFunction_AMultiplayerPlayerController_RemoveUIWidget_Statics::NewProp_ChangePaused_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMultiplayerPlayerController_RemoveUIWidget_Statics::NewProp_PauseGame_SetBit(void* Obj)
{
	((MultiplayerPlayerController_eventRemoveUIWidget_Parms*)Obj)->PauseGame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_RemoveUIWidget_Statics::NewProp_PauseGame = { "PauseGame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerPlayerController_eventRemoveUIWidget_Parms), &Z_Construct_UFunction_AMultiplayerPlayerController_RemoveUIWidget_Statics::NewProp_PauseGame_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerController_RemoveUIWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_RemoveUIWidget_Statics::NewProp_WidgetToRemove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_RemoveUIWidget_Statics::NewProp_RemoveAllWidgets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_RemoveUIWidget_Statics::NewProp_ChangeCursor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_RemoveUIWidget_Statics::NewProp_ShowCursor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_RemoveUIWidget_Statics::NewProp_ChangeInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_RemoveUIWidget_Statics::NewProp_GameInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_RemoveUIWidget_Statics::NewProp_ChangePaused,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_RemoveUIWidget_Statics::NewProp_PauseGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_RemoveUIWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerController_RemoveUIWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerController, nullptr, "RemoveUIWidget", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerController_RemoveUIWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_RemoveUIWidget_Statics::PropPointers), sizeof(MultiplayerPlayerController_eventRemoveUIWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_RemoveUIWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerController_RemoveUIWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerPlayerController_eventRemoveUIWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerPlayerController_RemoveUIWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerController_RemoveUIWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerPlayerController::execRemoveUIWidget)
{
	P_GET_OBJECT(UUserWidget,Z_Param_WidgetToRemove);
	P_GET_UBOOL(Z_Param_RemoveAllWidgets);
	P_GET_UBOOL(Z_Param_ChangeCursor);
	P_GET_UBOOL(Z_Param_ShowCursor);
	P_GET_UBOOL(Z_Param_ChangeInput);
	P_GET_UBOOL(Z_Param_GameInput);
	P_GET_UBOOL(Z_Param_ChangePaused);
	P_GET_UBOOL(Z_Param_PauseGame);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveUIWidget_Implementation(Z_Param_WidgetToRemove,Z_Param_RemoveAllWidgets,Z_Param_ChangeCursor,Z_Param_ShowCursor,Z_Param_ChangeInput,Z_Param_GameInput,Z_Param_ChangePaused,Z_Param_PauseGame);
	P_NATIVE_END;
}
// End Class AMultiplayerPlayerController Function RemoveUIWidget

// Begin Class AMultiplayerPlayerController Function Respawn
struct Z_Construct_UFunction_AMultiplayerPlayerController_Respawn_Statics
{
	struct MultiplayerPlayerController_eventRespawn_Parms
	{
		float DelayToRespawn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "CPP_Default_DelayToRespawn", "0.000000" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayToRespawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_Respawn_Statics::NewProp_DelayToRespawn = { "DelayToRespawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerPlayerController_eventRespawn_Parms, DelayToRespawn), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerController_Respawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_Respawn_Statics::NewProp_DelayToRespawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_Respawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerController_Respawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerController, nullptr, "Respawn", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerController_Respawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_Respawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_Respawn_Statics::MultiplayerPlayerController_eventRespawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_Respawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerController_Respawn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_Respawn_Statics::MultiplayerPlayerController_eventRespawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerPlayerController_Respawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerController_Respawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerPlayerController::execRespawn)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DelayToRespawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Respawn(Z_Param_DelayToRespawn);
	P_NATIVE_END;
}
// End Class AMultiplayerPlayerController Function Respawn

// Begin Class AMultiplayerPlayerController Function Respawn1
struct Z_Construct_UFunction_AMultiplayerPlayerController_Respawn1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerController_Respawn1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerController, nullptr, "Respawn1", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_Respawn1_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerController_Respawn1_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerPlayerController_Respawn1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerController_Respawn1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerPlayerController::execRespawn1)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Respawn1();
	P_NATIVE_END;
}
// End Class AMultiplayerPlayerController Function Respawn1

// Begin Class AMultiplayerPlayerController Function ServerPossessPawn
struct MultiplayerPlayerController_eventServerPossessPawn_Parms
{
	TSubclassOf<APawn> NewPawnToSpawn;
	APawn* NewPawn;
	bool SpawnNewPawn;
	FVector Location;
	FRotator Rotation;
	bool DestroyOldPawn;
	bool KeepControlRotation;
	bool KeepVelocity;
	bool ChangeStartingVelocity;
	FVector NewVelocity;
};
static const FName NAME_AMultiplayerPlayerController_ServerPossessPawn = FName(TEXT("ServerPossessPawn"));
void AMultiplayerPlayerController::ServerPossessPawn(TSubclassOf<APawn> NewPawnToSpawn, APawn* NewPawn, bool SpawnNewPawn, FVector Location, FRotator Rotation, bool DestroyOldPawn, bool KeepControlRotation, bool KeepVelocity, bool ChangeStartingVelocity, FVector NewVelocity)
{
	MultiplayerPlayerController_eventServerPossessPawn_Parms Parms;
	Parms.NewPawnToSpawn=NewPawnToSpawn;
	Parms.NewPawn=NewPawn;
	Parms.SpawnNewPawn=SpawnNewPawn ? true : false;
	Parms.Location=Location;
	Parms.Rotation=Rotation;
	Parms.DestroyOldPawn=DestroyOldPawn ? true : false;
	Parms.KeepControlRotation=KeepControlRotation ? true : false;
	Parms.KeepVelocity=KeepVelocity ? true : false;
	Parms.ChangeStartingVelocity=ChangeStartingVelocity ? true : false;
	Parms.NewVelocity=NewVelocity;
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerPlayerController_ServerPossessPawn);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMultiplayerPlayerController_ServerPossessPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
		{ "Tooltip", "Velocity options only apply to characters, UsePlayerPawnChoice will override NewPawnToSpawn and NewPawn and only applies if ChooseCharacterOnSpawn is not 0, keep velocity won't work if you have ChooseCharacterOnSpawn not at 0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_NewPawnToSpawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPawn;
	static void NewProp_SpawnNewPawn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SpawnNewPawn;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static void NewProp_DestroyOldPawn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DestroyOldPawn;
	static void NewProp_KeepControlRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_KeepControlRotation;
	static void NewProp_KeepVelocity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_KeepVelocity;
	static void NewProp_ChangeStartingVelocity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ChangeStartingVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_ServerPossessPawn_Statics::NewProp_NewPawnToSpawn = { "NewPawnToSpawn", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerPlayerController_eventServerPossessPawn_Parms, NewPawnToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_ServerPossessPawn_Statics::NewProp_NewPawn = { "NewPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerPlayerController_eventServerPossessPawn_Parms, NewPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMultiplayerPlayerController_ServerPossessPawn_Statics::NewProp_SpawnNewPawn_SetBit(void* Obj)
{
	((MultiplayerPlayerController_eventServerPossessPawn_Parms*)Obj)->SpawnNewPawn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_ServerPossessPawn_Statics::NewProp_SpawnNewPawn = { "SpawnNewPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerPlayerController_eventServerPossessPawn_Parms), &Z_Construct_UFunction_AMultiplayerPlayerController_ServerPossessPawn_Statics::NewProp_SpawnNewPawn_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_ServerPossessPawn_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerPlayerController_eventServerPossessPawn_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_ServerPossessPawn_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerPlayerController_eventServerPossessPawn_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMultiplayerPlayerController_ServerPossessPawn_Statics::NewProp_DestroyOldPawn_SetBit(void* Obj)
{
	((MultiplayerPlayerController_eventServerPossessPawn_Parms*)Obj)->DestroyOldPawn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_ServerPossessPawn_Statics::NewProp_DestroyOldPawn = { "DestroyOldPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerPlayerController_eventServerPossessPawn_Parms), &Z_Construct_UFunction_AMultiplayerPlayerController_ServerPossessPawn_Statics::NewProp_DestroyOldPawn_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMultiplayerPlayerController_ServerPossessPawn_Statics::NewProp_KeepControlRotation_SetBit(void* Obj)
{
	((MultiplayerPlayerController_eventServerPossessPawn_Parms*)Obj)->KeepControlRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_ServerPossessPawn_Statics::NewProp_KeepControlRotation = { "KeepControlRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerPlayerController_eventServerPossessPawn_Parms), &Z_Construct_UFunction_AMultiplayerPlayerController_ServerPossessPawn_Statics::NewProp_KeepControlRotation_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMultiplayerPlayerController_ServerPossessPawn_Statics::NewProp_KeepVelocity_SetBit(void* Obj)
{
	((MultiplayerPlayerController_eventServerPossessPawn_Parms*)Obj)->KeepVelocity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_ServerPossessPawn_Statics::NewProp_KeepVelocity = { "KeepVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerPlayerController_eventServerPossessPawn_Parms), &Z_Construct_UFunction_AMultiplayerPlayerController_ServerPossessPawn_Statics::NewProp_KeepVelocity_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMultiplayerPlayerController_ServerPossessPawn_Statics::NewProp_ChangeStartingVelocity_SetBit(void* Obj)
{
	((MultiplayerPlayerController_eventServerPossessPawn_Parms*)Obj)->ChangeStartingVelocity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_ServerPossessPawn_Statics::NewProp_ChangeStartingVelocity = { "ChangeStartingVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerPlayerController_eventServerPossessPawn_Parms), &Z_Construct_UFunction_AMultiplayerPlayerController_ServerPossessPawn_Statics::NewProp_ChangeStartingVelocity_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_ServerPossessPawn_Statics::NewProp_NewVelocity = { "NewVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerPlayerController_eventServerPossessPawn_Parms, NewVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerController_ServerPossessPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_ServerPossessPawn_Statics::NewProp_NewPawnToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_ServerPossessPawn_Statics::NewProp_NewPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_ServerPossessPawn_Statics::NewProp_SpawnNewPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_ServerPossessPawn_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_ServerPossessPawn_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_ServerPossessPawn_Statics::NewProp_DestroyOldPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_ServerPossessPawn_Statics::NewProp_KeepControlRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_ServerPossessPawn_Statics::NewProp_KeepVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_ServerPossessPawn_Statics::NewProp_ChangeStartingVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_ServerPossessPawn_Statics::NewProp_NewVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_ServerPossessPawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerController_ServerPossessPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerController, nullptr, "ServerPossessPawn", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerController_ServerPossessPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_ServerPossessPawn_Statics::PropPointers), sizeof(MultiplayerPlayerController_eventServerPossessPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A20CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_ServerPossessPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerController_ServerPossessPawn_Statics::Function_MetaDataParams) };
static_assert(sizeof(MultiplayerPlayerController_eventServerPossessPawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerPlayerController_ServerPossessPawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerController_ServerPossessPawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerPlayerController::execServerPossessPawn)
{
	P_GET_OBJECT(UClass,Z_Param_NewPawnToSpawn);
	P_GET_OBJECT(APawn,Z_Param_NewPawn);
	P_GET_UBOOL(Z_Param_SpawnNewPawn);
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_STRUCT(FRotator,Z_Param_Rotation);
	P_GET_UBOOL(Z_Param_DestroyOldPawn);
	P_GET_UBOOL(Z_Param_KeepControlRotation);
	P_GET_UBOOL(Z_Param_KeepVelocity);
	P_GET_UBOOL(Z_Param_ChangeStartingVelocity);
	P_GET_STRUCT(FVector,Z_Param_NewVelocity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerPossessPawn_Implementation(Z_Param_NewPawnToSpawn,Z_Param_NewPawn,Z_Param_SpawnNewPawn,Z_Param_Location,Z_Param_Rotation,Z_Param_DestroyOldPawn,Z_Param_KeepControlRotation,Z_Param_KeepVelocity,Z_Param_ChangeStartingVelocity,Z_Param_NewVelocity);
	P_NATIVE_END;
}
// End Class AMultiplayerPlayerController Function ServerPossessPawn

// Begin Class AMultiplayerPlayerController Function ServerRespawn1
static const FName NAME_AMultiplayerPlayerController_ServerRespawn1 = FName(TEXT("ServerRespawn1"));
void AMultiplayerPlayerController::ServerRespawn1()
{
	UFunction* Func = FindFunctionChecked(NAME_AMultiplayerPlayerController_ServerRespawn1);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMultiplayerPlayerController_ServerRespawn1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerController_ServerRespawn1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerController, nullptr, "ServerRespawn1", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_ServerRespawn1_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerController_ServerRespawn1_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerPlayerController_ServerRespawn1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerController_ServerRespawn1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerPlayerController::execServerRespawn1)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerRespawn1_Implementation();
	P_NATIVE_END;
}
// End Class AMultiplayerPlayerController Function ServerRespawn1

// Begin Class AMultiplayerPlayerController Function SetAllSharedCalibersOnSpawn
struct Z_Construct_UFunction_AMultiplayerPlayerController_SetAllSharedCalibersOnSpawn_Statics
{
	struct MultiplayerPlayerController_eventSetAllSharedCalibersOnSpawn_Parms
	{
		TMap<FName,int32> NewAllSharedCalibersOnSpawn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewAllSharedCalibersOnSpawn_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NewAllSharedCalibersOnSpawn_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_NewAllSharedCalibersOnSpawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_SetAllSharedCalibersOnSpawn_Statics::NewProp_NewAllSharedCalibersOnSpawn_ValueProp = { "NewAllSharedCalibersOnSpawn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_SetAllSharedCalibersOnSpawn_Statics::NewProp_NewAllSharedCalibersOnSpawn_Key_KeyProp = { "NewAllSharedCalibersOnSpawn_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_SetAllSharedCalibersOnSpawn_Statics::NewProp_NewAllSharedCalibersOnSpawn = { "NewAllSharedCalibersOnSpawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerPlayerController_eventSetAllSharedCalibersOnSpawn_Parms, NewAllSharedCalibersOnSpawn), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerController_SetAllSharedCalibersOnSpawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_SetAllSharedCalibersOnSpawn_Statics::NewProp_NewAllSharedCalibersOnSpawn_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_SetAllSharedCalibersOnSpawn_Statics::NewProp_NewAllSharedCalibersOnSpawn_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_SetAllSharedCalibersOnSpawn_Statics::NewProp_NewAllSharedCalibersOnSpawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetAllSharedCalibersOnSpawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerController_SetAllSharedCalibersOnSpawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerController, nullptr, "SetAllSharedCalibersOnSpawn", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerController_SetAllSharedCalibersOnSpawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetAllSharedCalibersOnSpawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_SetAllSharedCalibersOnSpawn_Statics::MultiplayerPlayerController_eventSetAllSharedCalibersOnSpawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetAllSharedCalibersOnSpawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerController_SetAllSharedCalibersOnSpawn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_SetAllSharedCalibersOnSpawn_Statics::MultiplayerPlayerController_eventSetAllSharedCalibersOnSpawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerPlayerController_SetAllSharedCalibersOnSpawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerController_SetAllSharedCalibersOnSpawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerPlayerController::execSetAllSharedCalibersOnSpawn)
{
	P_GET_TMAP(FName,int32,Z_Param_NewAllSharedCalibersOnSpawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAllSharedCalibersOnSpawn(Z_Param_NewAllSharedCalibersOnSpawn);
	P_NATIVE_END;
}
// End Class AMultiplayerPlayerController Function SetAllSharedCalibersOnSpawn

// Begin Class AMultiplayerPlayerController Function SetAvoidDuplicatesForRandomWeapons
struct Z_Construct_UFunction_AMultiplayerPlayerController_SetAvoidDuplicatesForRandomWeapons_Statics
{
	struct MultiplayerPlayerController_eventSetAvoidDuplicatesForRandomWeapons_Parms
	{
		int32 NewAvoidDuplicatesForRandomWeapons;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewAvoidDuplicatesForRandomWeapons;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_SetAvoidDuplicatesForRandomWeapons_Statics::NewProp_NewAvoidDuplicatesForRandomWeapons = { "NewAvoidDuplicatesForRandomWeapons", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerPlayerController_eventSetAvoidDuplicatesForRandomWeapons_Parms, NewAvoidDuplicatesForRandomWeapons), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerController_SetAvoidDuplicatesForRandomWeapons_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_SetAvoidDuplicatesForRandomWeapons_Statics::NewProp_NewAvoidDuplicatesForRandomWeapons,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetAvoidDuplicatesForRandomWeapons_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerController_SetAvoidDuplicatesForRandomWeapons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerController, nullptr, "SetAvoidDuplicatesForRandomWeapons", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerController_SetAvoidDuplicatesForRandomWeapons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetAvoidDuplicatesForRandomWeapons_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_SetAvoidDuplicatesForRandomWeapons_Statics::MultiplayerPlayerController_eventSetAvoidDuplicatesForRandomWeapons_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetAvoidDuplicatesForRandomWeapons_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerController_SetAvoidDuplicatesForRandomWeapons_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_SetAvoidDuplicatesForRandomWeapons_Statics::MultiplayerPlayerController_eventSetAvoidDuplicatesForRandomWeapons_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerPlayerController_SetAvoidDuplicatesForRandomWeapons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerController_SetAvoidDuplicatesForRandomWeapons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerPlayerController::execSetAvoidDuplicatesForRandomWeapons)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewAvoidDuplicatesForRandomWeapons);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAvoidDuplicatesForRandomWeapons(Z_Param_NewAvoidDuplicatesForRandomWeapons);
	P_NATIVE_END;
}
// End Class AMultiplayerPlayerController Function SetAvoidDuplicatesForRandomWeapons

// Begin Class AMultiplayerPlayerController Function SetCanRespawn
struct Z_Construct_UFunction_AMultiplayerPlayerController_SetCanRespawn_Statics
{
	struct MultiplayerPlayerController_eventSetCanRespawn_Parms
	{
		bool NewCanRespawn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewCanRespawn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewCanRespawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerPlayerController_SetCanRespawn_Statics::NewProp_NewCanRespawn_SetBit(void* Obj)
{
	((MultiplayerPlayerController_eventSetCanRespawn_Parms*)Obj)->NewCanRespawn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_SetCanRespawn_Statics::NewProp_NewCanRespawn = { "NewCanRespawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerPlayerController_eventSetCanRespawn_Parms), &Z_Construct_UFunction_AMultiplayerPlayerController_SetCanRespawn_Statics::NewProp_NewCanRespawn_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerController_SetCanRespawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_SetCanRespawn_Statics::NewProp_NewCanRespawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetCanRespawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerController_SetCanRespawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerController, nullptr, "SetCanRespawn", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerController_SetCanRespawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetCanRespawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_SetCanRespawn_Statics::MultiplayerPlayerController_eventSetCanRespawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetCanRespawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerController_SetCanRespawn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_SetCanRespawn_Statics::MultiplayerPlayerController_eventSetCanRespawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerPlayerController_SetCanRespawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerController_SetCanRespawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerPlayerController::execSetCanRespawn)
{
	P_GET_UBOOL(Z_Param_NewCanRespawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCanRespawn(Z_Param_NewCanRespawn);
	P_NATIVE_END;
}
// End Class AMultiplayerPlayerController Function SetCanRespawn

// Begin Class AMultiplayerPlayerController Function SetCanShoulderSwapThirdPerson
struct Z_Construct_UFunction_AMultiplayerPlayerController_SetCanShoulderSwapThirdPerson_Statics
{
	struct MultiplayerPlayerController_eventSetCanShoulderSwapThirdPerson_Parms
	{
		bool NewCanShoulderSwapThirdPerson;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewCanShoulderSwapThirdPerson_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewCanShoulderSwapThirdPerson;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerPlayerController_SetCanShoulderSwapThirdPerson_Statics::NewProp_NewCanShoulderSwapThirdPerson_SetBit(void* Obj)
{
	((MultiplayerPlayerController_eventSetCanShoulderSwapThirdPerson_Parms*)Obj)->NewCanShoulderSwapThirdPerson = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_SetCanShoulderSwapThirdPerson_Statics::NewProp_NewCanShoulderSwapThirdPerson = { "NewCanShoulderSwapThirdPerson", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerPlayerController_eventSetCanShoulderSwapThirdPerson_Parms), &Z_Construct_UFunction_AMultiplayerPlayerController_SetCanShoulderSwapThirdPerson_Statics::NewProp_NewCanShoulderSwapThirdPerson_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerController_SetCanShoulderSwapThirdPerson_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_SetCanShoulderSwapThirdPerson_Statics::NewProp_NewCanShoulderSwapThirdPerson,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetCanShoulderSwapThirdPerson_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerController_SetCanShoulderSwapThirdPerson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerController, nullptr, "SetCanShoulderSwapThirdPerson", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerController_SetCanShoulderSwapThirdPerson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetCanShoulderSwapThirdPerson_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_SetCanShoulderSwapThirdPerson_Statics::MultiplayerPlayerController_eventSetCanShoulderSwapThirdPerson_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetCanShoulderSwapThirdPerson_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerController_SetCanShoulderSwapThirdPerson_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_SetCanShoulderSwapThirdPerson_Statics::MultiplayerPlayerController_eventSetCanShoulderSwapThirdPerson_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerPlayerController_SetCanShoulderSwapThirdPerson()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerController_SetCanShoulderSwapThirdPerson_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerPlayerController::execSetCanShoulderSwapThirdPerson)
{
	P_GET_UBOOL(Z_Param_NewCanShoulderSwapThirdPerson);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCanShoulderSwapThirdPerson(Z_Param_NewCanShoulderSwapThirdPerson);
	P_NATIVE_END;
}
// End Class AMultiplayerPlayerController Function SetCanShoulderSwapThirdPerson

// Begin Class AMultiplayerPlayerController Function SetCanShoulderSwapWhileInFirstPerson
struct Z_Construct_UFunction_AMultiplayerPlayerController_SetCanShoulderSwapWhileInFirstPerson_Statics
{
	struct MultiplayerPlayerController_eventSetCanShoulderSwapWhileInFirstPerson_Parms
	{
		bool NewCanShoulderSwapWhileInFirstPerson;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewCanShoulderSwapWhileInFirstPerson_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewCanShoulderSwapWhileInFirstPerson;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerPlayerController_SetCanShoulderSwapWhileInFirstPerson_Statics::NewProp_NewCanShoulderSwapWhileInFirstPerson_SetBit(void* Obj)
{
	((MultiplayerPlayerController_eventSetCanShoulderSwapWhileInFirstPerson_Parms*)Obj)->NewCanShoulderSwapWhileInFirstPerson = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_SetCanShoulderSwapWhileInFirstPerson_Statics::NewProp_NewCanShoulderSwapWhileInFirstPerson = { "NewCanShoulderSwapWhileInFirstPerson", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerPlayerController_eventSetCanShoulderSwapWhileInFirstPerson_Parms), &Z_Construct_UFunction_AMultiplayerPlayerController_SetCanShoulderSwapWhileInFirstPerson_Statics::NewProp_NewCanShoulderSwapWhileInFirstPerson_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerController_SetCanShoulderSwapWhileInFirstPerson_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_SetCanShoulderSwapWhileInFirstPerson_Statics::NewProp_NewCanShoulderSwapWhileInFirstPerson,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetCanShoulderSwapWhileInFirstPerson_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerController_SetCanShoulderSwapWhileInFirstPerson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerController, nullptr, "SetCanShoulderSwapWhileInFirstPerson", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerController_SetCanShoulderSwapWhileInFirstPerson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetCanShoulderSwapWhileInFirstPerson_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_SetCanShoulderSwapWhileInFirstPerson_Statics::MultiplayerPlayerController_eventSetCanShoulderSwapWhileInFirstPerson_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetCanShoulderSwapWhileInFirstPerson_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerController_SetCanShoulderSwapWhileInFirstPerson_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_SetCanShoulderSwapWhileInFirstPerson_Statics::MultiplayerPlayerController_eventSetCanShoulderSwapWhileInFirstPerson_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerPlayerController_SetCanShoulderSwapWhileInFirstPerson()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerController_SetCanShoulderSwapWhileInFirstPerson_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerPlayerController::execSetCanShoulderSwapWhileInFirstPerson)
{
	P_GET_UBOOL(Z_Param_NewCanShoulderSwapWhileInFirstPerson);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCanShoulderSwapWhileInFirstPerson(Z_Param_NewCanShoulderSwapWhileInFirstPerson);
	P_NATIVE_END;
}
// End Class AMultiplayerPlayerController Function SetCanShoulderSwapWhileInFirstPerson

// Begin Class AMultiplayerPlayerController Function SetCanSwitchPerspective
struct Z_Construct_UFunction_AMultiplayerPlayerController_SetCanSwitchPerspective_Statics
{
	struct MultiplayerPlayerController_eventSetCanSwitchPerspective_Parms
	{
		bool NewCanSwitchPerspective;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewCanSwitchPerspective_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewCanSwitchPerspective;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerPlayerController_SetCanSwitchPerspective_Statics::NewProp_NewCanSwitchPerspective_SetBit(void* Obj)
{
	((MultiplayerPlayerController_eventSetCanSwitchPerspective_Parms*)Obj)->NewCanSwitchPerspective = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_SetCanSwitchPerspective_Statics::NewProp_NewCanSwitchPerspective = { "NewCanSwitchPerspective", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerPlayerController_eventSetCanSwitchPerspective_Parms), &Z_Construct_UFunction_AMultiplayerPlayerController_SetCanSwitchPerspective_Statics::NewProp_NewCanSwitchPerspective_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerController_SetCanSwitchPerspective_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_SetCanSwitchPerspective_Statics::NewProp_NewCanSwitchPerspective,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetCanSwitchPerspective_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerController_SetCanSwitchPerspective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerController, nullptr, "SetCanSwitchPerspective", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerController_SetCanSwitchPerspective_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetCanSwitchPerspective_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_SetCanSwitchPerspective_Statics::MultiplayerPlayerController_eventSetCanSwitchPerspective_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetCanSwitchPerspective_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerController_SetCanSwitchPerspective_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_SetCanSwitchPerspective_Statics::MultiplayerPlayerController_eventSetCanSwitchPerspective_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerPlayerController_SetCanSwitchPerspective()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerController_SetCanSwitchPerspective_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerPlayerController::execSetCanSwitchPerspective)
{
	P_GET_UBOOL(Z_Param_NewCanSwitchPerspective);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCanSwitchPerspective(Z_Param_NewCanSwitchPerspective);
	P_NATIVE_END;
}
// End Class AMultiplayerPlayerController Function SetCanSwitchPerspective

// Begin Class AMultiplayerPlayerController Function SetCharacterSelectWidget
struct Z_Construct_UFunction_AMultiplayerPlayerController_SetCharacterSelectWidget_Statics
{
	struct MultiplayerPlayerController_eventSetCharacterSelectWidget_Parms
	{
		TSubclassOf<UUserWidget> NewCharacterSelectWidget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_NewCharacterSelectWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_SetCharacterSelectWidget_Statics::NewProp_NewCharacterSelectWidget = { "NewCharacterSelectWidget", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerPlayerController_eventSetCharacterSelectWidget_Parms, NewCharacterSelectWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerController_SetCharacterSelectWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_SetCharacterSelectWidget_Statics::NewProp_NewCharacterSelectWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetCharacterSelectWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerController_SetCharacterSelectWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerController, nullptr, "SetCharacterSelectWidget", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerController_SetCharacterSelectWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetCharacterSelectWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_SetCharacterSelectWidget_Statics::MultiplayerPlayerController_eventSetCharacterSelectWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetCharacterSelectWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerController_SetCharacterSelectWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_SetCharacterSelectWidget_Statics::MultiplayerPlayerController_eventSetCharacterSelectWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerPlayerController_SetCharacterSelectWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerController_SetCharacterSelectWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerPlayerController::execSetCharacterSelectWidget)
{
	P_GET_OBJECT(UClass,Z_Param_NewCharacterSelectWidget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCharacterSelectWidget(Z_Param_NewCharacterSelectWidget);
	P_NATIVE_END;
}
// End Class AMultiplayerPlayerController Function SetCharacterSelectWidget

// Begin Class AMultiplayerPlayerController Function SetChooseCharacterOnRespawn
struct Z_Construct_UFunction_AMultiplayerPlayerController_SetChooseCharacterOnRespawn_Statics
{
	struct MultiplayerPlayerController_eventSetChooseCharacterOnRespawn_Parms
	{
		bool NewChooseCharacterOnRespawn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewChooseCharacterOnRespawn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewChooseCharacterOnRespawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerPlayerController_SetChooseCharacterOnRespawn_Statics::NewProp_NewChooseCharacterOnRespawn_SetBit(void* Obj)
{
	((MultiplayerPlayerController_eventSetChooseCharacterOnRespawn_Parms*)Obj)->NewChooseCharacterOnRespawn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_SetChooseCharacterOnRespawn_Statics::NewProp_NewChooseCharacterOnRespawn = { "NewChooseCharacterOnRespawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerPlayerController_eventSetChooseCharacterOnRespawn_Parms), &Z_Construct_UFunction_AMultiplayerPlayerController_SetChooseCharacterOnRespawn_Statics::NewProp_NewChooseCharacterOnRespawn_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerController_SetChooseCharacterOnRespawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_SetChooseCharacterOnRespawn_Statics::NewProp_NewChooseCharacterOnRespawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetChooseCharacterOnRespawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerController_SetChooseCharacterOnRespawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerController, nullptr, "SetChooseCharacterOnRespawn", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerController_SetChooseCharacterOnRespawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetChooseCharacterOnRespawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_SetChooseCharacterOnRespawn_Statics::MultiplayerPlayerController_eventSetChooseCharacterOnRespawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetChooseCharacterOnRespawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerController_SetChooseCharacterOnRespawn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_SetChooseCharacterOnRespawn_Statics::MultiplayerPlayerController_eventSetChooseCharacterOnRespawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerPlayerController_SetChooseCharacterOnRespawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerController_SetChooseCharacterOnRespawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerPlayerController::execSetChooseCharacterOnRespawn)
{
	P_GET_UBOOL(Z_Param_NewChooseCharacterOnRespawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetChooseCharacterOnRespawn(Z_Param_NewChooseCharacterOnRespawn);
	P_NATIVE_END;
}
// End Class AMultiplayerPlayerController Function SetChooseCharacterOnRespawn

// Begin Class AMultiplayerPlayerController Function SetControllerVibration
struct Z_Construct_UFunction_AMultiplayerPlayerController_SetControllerVibration_Statics
{
	struct MultiplayerPlayerController_eventSetControllerVibration_Parms
	{
		bool NewControllerVibration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewControllerVibration_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewControllerVibration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerPlayerController_SetControllerVibration_Statics::NewProp_NewControllerVibration_SetBit(void* Obj)
{
	((MultiplayerPlayerController_eventSetControllerVibration_Parms*)Obj)->NewControllerVibration = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_SetControllerVibration_Statics::NewProp_NewControllerVibration = { "NewControllerVibration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerPlayerController_eventSetControllerVibration_Parms), &Z_Construct_UFunction_AMultiplayerPlayerController_SetControllerVibration_Statics::NewProp_NewControllerVibration_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerController_SetControllerVibration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_SetControllerVibration_Statics::NewProp_NewControllerVibration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetControllerVibration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerController_SetControllerVibration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerController, nullptr, "SetControllerVibration", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerController_SetControllerVibration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetControllerVibration_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_SetControllerVibration_Statics::MultiplayerPlayerController_eventSetControllerVibration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetControllerVibration_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerController_SetControllerVibration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_SetControllerVibration_Statics::MultiplayerPlayerController_eventSetControllerVibration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerPlayerController_SetControllerVibration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerController_SetControllerVibration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerPlayerController::execSetControllerVibration)
{
	P_GET_UBOOL(Z_Param_NewControllerVibration);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetControllerVibration(Z_Param_NewControllerVibration);
	P_NATIVE_END;
}
// End Class AMultiplayerPlayerController Function SetControllerVibration

// Begin Class AMultiplayerPlayerController Function SetDieWhenChoosingNewCharacter
struct Z_Construct_UFunction_AMultiplayerPlayerController_SetDieWhenChoosingNewCharacter_Statics
{
	struct MultiplayerPlayerController_eventSetDieWhenChoosingNewCharacter_Parms
	{
		bool NewDieWhenChoosingNewCharacter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewDieWhenChoosingNewCharacter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewDieWhenChoosingNewCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerPlayerController_SetDieWhenChoosingNewCharacter_Statics::NewProp_NewDieWhenChoosingNewCharacter_SetBit(void* Obj)
{
	((MultiplayerPlayerController_eventSetDieWhenChoosingNewCharacter_Parms*)Obj)->NewDieWhenChoosingNewCharacter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_SetDieWhenChoosingNewCharacter_Statics::NewProp_NewDieWhenChoosingNewCharacter = { "NewDieWhenChoosingNewCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerPlayerController_eventSetDieWhenChoosingNewCharacter_Parms), &Z_Construct_UFunction_AMultiplayerPlayerController_SetDieWhenChoosingNewCharacter_Statics::NewProp_NewDieWhenChoosingNewCharacter_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerController_SetDieWhenChoosingNewCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_SetDieWhenChoosingNewCharacter_Statics::NewProp_NewDieWhenChoosingNewCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetDieWhenChoosingNewCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerController_SetDieWhenChoosingNewCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerController, nullptr, "SetDieWhenChoosingNewCharacter", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerController_SetDieWhenChoosingNewCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetDieWhenChoosingNewCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_SetDieWhenChoosingNewCharacter_Statics::MultiplayerPlayerController_eventSetDieWhenChoosingNewCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetDieWhenChoosingNewCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerController_SetDieWhenChoosingNewCharacter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_SetDieWhenChoosingNewCharacter_Statics::MultiplayerPlayerController_eventSetDieWhenChoosingNewCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerPlayerController_SetDieWhenChoosingNewCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerController_SetDieWhenChoosingNewCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerPlayerController::execSetDieWhenChoosingNewCharacter)
{
	P_GET_UBOOL(Z_Param_NewDieWhenChoosingNewCharacter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDieWhenChoosingNewCharacter(Z_Param_NewDieWhenChoosingNewCharacter);
	P_NATIVE_END;
}
// End Class AMultiplayerPlayerController Function SetDieWhenChoosingNewCharacter

// Begin Class AMultiplayerPlayerController Function SetGiveLoadoutOnBeginPlay
struct Z_Construct_UFunction_AMultiplayerPlayerController_SetGiveLoadoutOnBeginPlay_Statics
{
	struct MultiplayerPlayerController_eventSetGiveLoadoutOnBeginPlay_Parms
	{
		bool NewGiveLoadoutOnBeginPlay;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewGiveLoadoutOnBeginPlay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewGiveLoadoutOnBeginPlay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerPlayerController_SetGiveLoadoutOnBeginPlay_Statics::NewProp_NewGiveLoadoutOnBeginPlay_SetBit(void* Obj)
{
	((MultiplayerPlayerController_eventSetGiveLoadoutOnBeginPlay_Parms*)Obj)->NewGiveLoadoutOnBeginPlay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_SetGiveLoadoutOnBeginPlay_Statics::NewProp_NewGiveLoadoutOnBeginPlay = { "NewGiveLoadoutOnBeginPlay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerPlayerController_eventSetGiveLoadoutOnBeginPlay_Parms), &Z_Construct_UFunction_AMultiplayerPlayerController_SetGiveLoadoutOnBeginPlay_Statics::NewProp_NewGiveLoadoutOnBeginPlay_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerController_SetGiveLoadoutOnBeginPlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_SetGiveLoadoutOnBeginPlay_Statics::NewProp_NewGiveLoadoutOnBeginPlay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetGiveLoadoutOnBeginPlay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerController_SetGiveLoadoutOnBeginPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerController, nullptr, "SetGiveLoadoutOnBeginPlay", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerController_SetGiveLoadoutOnBeginPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetGiveLoadoutOnBeginPlay_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_SetGiveLoadoutOnBeginPlay_Statics::MultiplayerPlayerController_eventSetGiveLoadoutOnBeginPlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetGiveLoadoutOnBeginPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerController_SetGiveLoadoutOnBeginPlay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_SetGiveLoadoutOnBeginPlay_Statics::MultiplayerPlayerController_eventSetGiveLoadoutOnBeginPlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerPlayerController_SetGiveLoadoutOnBeginPlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerController_SetGiveLoadoutOnBeginPlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerPlayerController::execSetGiveLoadoutOnBeginPlay)
{
	P_GET_UBOOL(Z_Param_NewGiveLoadoutOnBeginPlay);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGiveLoadoutOnBeginPlay(Z_Param_NewGiveLoadoutOnBeginPlay);
	P_NATIVE_END;
}
// End Class AMultiplayerPlayerController Function SetGiveLoadoutOnBeginPlay

// Begin Class AMultiplayerPlayerController Function SetHasSpawnedPlayer
struct Z_Construct_UFunction_AMultiplayerPlayerController_SetHasSpawnedPlayer_Statics
{
	struct MultiplayerPlayerController_eventSetHasSpawnedPlayer_Parms
	{
		bool NewHasSpawnedPlayer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewHasSpawnedPlayer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewHasSpawnedPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerPlayerController_SetHasSpawnedPlayer_Statics::NewProp_NewHasSpawnedPlayer_SetBit(void* Obj)
{
	((MultiplayerPlayerController_eventSetHasSpawnedPlayer_Parms*)Obj)->NewHasSpawnedPlayer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_SetHasSpawnedPlayer_Statics::NewProp_NewHasSpawnedPlayer = { "NewHasSpawnedPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerPlayerController_eventSetHasSpawnedPlayer_Parms), &Z_Construct_UFunction_AMultiplayerPlayerController_SetHasSpawnedPlayer_Statics::NewProp_NewHasSpawnedPlayer_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerController_SetHasSpawnedPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_SetHasSpawnedPlayer_Statics::NewProp_NewHasSpawnedPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetHasSpawnedPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerController_SetHasSpawnedPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerController, nullptr, "SetHasSpawnedPlayer", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerController_SetHasSpawnedPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetHasSpawnedPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_SetHasSpawnedPlayer_Statics::MultiplayerPlayerController_eventSetHasSpawnedPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetHasSpawnedPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerController_SetHasSpawnedPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_SetHasSpawnedPlayer_Statics::MultiplayerPlayerController_eventSetHasSpawnedPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerPlayerController_SetHasSpawnedPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerController_SetHasSpawnedPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerPlayerController::execSetHasSpawnedPlayer)
{
	P_GET_UBOOL(Z_Param_NewHasSpawnedPlayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHasSpawnedPlayer(Z_Param_NewHasSpawnedPlayer);
	P_NATIVE_END;
}
// End Class AMultiplayerPlayerController Function SetHasSpawnedPlayer

// Begin Class AMultiplayerPlayerController Function SetMaxWeaponAmount
struct Z_Construct_UFunction_AMultiplayerPlayerController_SetMaxWeaponAmount_Statics
{
	struct MultiplayerPlayerController_eventSetMaxWeaponAmount_Parms
	{
		int32 NewMaxWeaponAmount;
		bool DestroyWeaponsInExcess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "CPP_Default_DestroyWeaponsInExcess", "false" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewMaxWeaponAmount;
	static void NewProp_DestroyWeaponsInExcess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DestroyWeaponsInExcess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_SetMaxWeaponAmount_Statics::NewProp_NewMaxWeaponAmount = { "NewMaxWeaponAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerPlayerController_eventSetMaxWeaponAmount_Parms, NewMaxWeaponAmount), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMultiplayerPlayerController_SetMaxWeaponAmount_Statics::NewProp_DestroyWeaponsInExcess_SetBit(void* Obj)
{
	((MultiplayerPlayerController_eventSetMaxWeaponAmount_Parms*)Obj)->DestroyWeaponsInExcess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_SetMaxWeaponAmount_Statics::NewProp_DestroyWeaponsInExcess = { "DestroyWeaponsInExcess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerPlayerController_eventSetMaxWeaponAmount_Parms), &Z_Construct_UFunction_AMultiplayerPlayerController_SetMaxWeaponAmount_Statics::NewProp_DestroyWeaponsInExcess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerController_SetMaxWeaponAmount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_SetMaxWeaponAmount_Statics::NewProp_NewMaxWeaponAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_SetMaxWeaponAmount_Statics::NewProp_DestroyWeaponsInExcess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetMaxWeaponAmount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerController_SetMaxWeaponAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerController, nullptr, "SetMaxWeaponAmount", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerController_SetMaxWeaponAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetMaxWeaponAmount_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_SetMaxWeaponAmount_Statics::MultiplayerPlayerController_eventSetMaxWeaponAmount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetMaxWeaponAmount_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerController_SetMaxWeaponAmount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_SetMaxWeaponAmount_Statics::MultiplayerPlayerController_eventSetMaxWeaponAmount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerPlayerController_SetMaxWeaponAmount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerController_SetMaxWeaponAmount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerPlayerController::execSetMaxWeaponAmount)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewMaxWeaponAmount);
	P_GET_UBOOL(Z_Param_DestroyWeaponsInExcess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMaxWeaponAmount(Z_Param_NewMaxWeaponAmount,Z_Param_DestroyWeaponsInExcess);
	P_NATIVE_END;
}
// End Class AMultiplayerPlayerController Function SetMaxWeaponAmount

// Begin Class AMultiplayerPlayerController Function SetPlayerIndex
struct Z_Construct_UFunction_AMultiplayerPlayerController_SetPlayerIndex_Statics
{
	struct MultiplayerPlayerController_eventSetPlayerIndex_Parms
	{
		int32 NewPlayerIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewPlayerIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_SetPlayerIndex_Statics::NewProp_NewPlayerIndex = { "NewPlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerPlayerController_eventSetPlayerIndex_Parms, NewPlayerIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerController_SetPlayerIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_SetPlayerIndex_Statics::NewProp_NewPlayerIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetPlayerIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerController_SetPlayerIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerController, nullptr, "SetPlayerIndex", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerController_SetPlayerIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetPlayerIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_SetPlayerIndex_Statics::MultiplayerPlayerController_eventSetPlayerIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetPlayerIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerController_SetPlayerIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_SetPlayerIndex_Statics::MultiplayerPlayerController_eventSetPlayerIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerPlayerController_SetPlayerIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerController_SetPlayerIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerPlayerController::execSetPlayerIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewPlayerIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlayerIndex(Z_Param_NewPlayerIndex);
	P_NATIVE_END;
}
// End Class AMultiplayerPlayerController Function SetPlayerIndex

// Begin Class AMultiplayerPlayerController Function SetPlayerPawnClass
struct Z_Construct_UFunction_AMultiplayerPlayerController_SetPlayerPawnClass_Statics
{
	struct MultiplayerPlayerController_eventSetPlayerPawnClass_Parms
	{
		TSubclassOf<APawn> NewPlayerPawnClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_NewPlayerPawnClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_SetPlayerPawnClass_Statics::NewProp_NewPlayerPawnClass = { "NewPlayerPawnClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerPlayerController_eventSetPlayerPawnClass_Parms, NewPlayerPawnClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerController_SetPlayerPawnClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_SetPlayerPawnClass_Statics::NewProp_NewPlayerPawnClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetPlayerPawnClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerController_SetPlayerPawnClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerController, nullptr, "SetPlayerPawnClass", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerController_SetPlayerPawnClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetPlayerPawnClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_SetPlayerPawnClass_Statics::MultiplayerPlayerController_eventSetPlayerPawnClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetPlayerPawnClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerController_SetPlayerPawnClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_SetPlayerPawnClass_Statics::MultiplayerPlayerController_eventSetPlayerPawnClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerPlayerController_SetPlayerPawnClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerController_SetPlayerPawnClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerPlayerController::execSetPlayerPawnClass)
{
	P_GET_OBJECT(UClass,Z_Param_NewPlayerPawnClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlayerPawnClass(Z_Param_NewPlayerPawnClass);
	P_NATIVE_END;
}
// End Class AMultiplayerPlayerController Function SetPlayerPawnClass

// Begin Class AMultiplayerPlayerController Function SetRandomizeUnselectedWeapons
struct Z_Construct_UFunction_AMultiplayerPlayerController_SetRandomizeUnselectedWeapons_Statics
{
	struct MultiplayerPlayerController_eventSetRandomizeUnselectedWeapons_Parms
	{
		bool NewRandomizeUnselectedWeapons;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewRandomizeUnselectedWeapons_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewRandomizeUnselectedWeapons;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerPlayerController_SetRandomizeUnselectedWeapons_Statics::NewProp_NewRandomizeUnselectedWeapons_SetBit(void* Obj)
{
	((MultiplayerPlayerController_eventSetRandomizeUnselectedWeapons_Parms*)Obj)->NewRandomizeUnselectedWeapons = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_SetRandomizeUnselectedWeapons_Statics::NewProp_NewRandomizeUnselectedWeapons = { "NewRandomizeUnselectedWeapons", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerPlayerController_eventSetRandomizeUnselectedWeapons_Parms), &Z_Construct_UFunction_AMultiplayerPlayerController_SetRandomizeUnselectedWeapons_Statics::NewProp_NewRandomizeUnselectedWeapons_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerController_SetRandomizeUnselectedWeapons_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_SetRandomizeUnselectedWeapons_Statics::NewProp_NewRandomizeUnselectedWeapons,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetRandomizeUnselectedWeapons_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerController_SetRandomizeUnselectedWeapons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerController, nullptr, "SetRandomizeUnselectedWeapons", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerController_SetRandomizeUnselectedWeapons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetRandomizeUnselectedWeapons_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_SetRandomizeUnselectedWeapons_Statics::MultiplayerPlayerController_eventSetRandomizeUnselectedWeapons_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetRandomizeUnselectedWeapons_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerController_SetRandomizeUnselectedWeapons_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_SetRandomizeUnselectedWeapons_Statics::MultiplayerPlayerController_eventSetRandomizeUnselectedWeapons_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerPlayerController_SetRandomizeUnselectedWeapons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerController_SetRandomizeUnselectedWeapons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerPlayerController::execSetRandomizeUnselectedWeapons)
{
	P_GET_UBOOL(Z_Param_NewRandomizeUnselectedWeapons);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRandomizeUnselectedWeapons(Z_Param_NewRandomizeUnselectedWeapons);
	P_NATIVE_END;
}
// End Class AMultiplayerPlayerController Function SetRandomizeUnselectedWeapons

// Begin Class AMultiplayerPlayerController Function SetRespawnDelay
struct Z_Construct_UFunction_AMultiplayerPlayerController_SetRespawnDelay_Statics
{
	struct MultiplayerPlayerController_eventSetRespawnDelay_Parms
	{
		float NewRespawnDelay;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewRespawnDelay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_SetRespawnDelay_Statics::NewProp_NewRespawnDelay = { "NewRespawnDelay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerPlayerController_eventSetRespawnDelay_Parms, NewRespawnDelay), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerController_SetRespawnDelay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_SetRespawnDelay_Statics::NewProp_NewRespawnDelay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetRespawnDelay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerController_SetRespawnDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerController, nullptr, "SetRespawnDelay", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerController_SetRespawnDelay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetRespawnDelay_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_SetRespawnDelay_Statics::MultiplayerPlayerController_eventSetRespawnDelay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetRespawnDelay_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerController_SetRespawnDelay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_SetRespawnDelay_Statics::MultiplayerPlayerController_eventSetRespawnDelay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerPlayerController_SetRespawnDelay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerController_SetRespawnDelay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerPlayerController::execSetRespawnDelay)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewRespawnDelay);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRespawnDelay(Z_Param_NewRespawnDelay);
	P_NATIVE_END;
}
// End Class AMultiplayerPlayerController Function SetRespawnDelay

// Begin Class AMultiplayerPlayerController Function SetRespawnPoints
struct Z_Construct_UFunction_AMultiplayerPlayerController_SetRespawnPoints_Statics
{
	struct MultiplayerPlayerController_eventSetRespawnPoints_Parms
	{
		TMap<FVector,FRotator> NewRespawnPoints;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewRespawnPoints_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewRespawnPoints_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_NewRespawnPoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_SetRespawnPoints_Statics::NewProp_NewRespawnPoints_ValueProp = { "NewRespawnPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_SetRespawnPoints_Statics::NewProp_NewRespawnPoints_Key_KeyProp = { "NewRespawnPoints_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_SetRespawnPoints_Statics::NewProp_NewRespawnPoints = { "NewRespawnPoints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerPlayerController_eventSetRespawnPoints_Parms, NewRespawnPoints), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerController_SetRespawnPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_SetRespawnPoints_Statics::NewProp_NewRespawnPoints_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_SetRespawnPoints_Statics::NewProp_NewRespawnPoints_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_SetRespawnPoints_Statics::NewProp_NewRespawnPoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetRespawnPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerController_SetRespawnPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerController, nullptr, "SetRespawnPoints", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerController_SetRespawnPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetRespawnPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_SetRespawnPoints_Statics::MultiplayerPlayerController_eventSetRespawnPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetRespawnPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerController_SetRespawnPoints_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_SetRespawnPoints_Statics::MultiplayerPlayerController_eventSetRespawnPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerPlayerController_SetRespawnPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerController_SetRespawnPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerPlayerController::execSetRespawnPoints)
{
	P_GET_TMAP(FVector,FRotator,Z_Param_NewRespawnPoints);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRespawnPoints(Z_Param_NewRespawnPoints);
	P_NATIVE_END;
}
// End Class AMultiplayerPlayerController Function SetRespawnPoints

// Begin Class AMultiplayerPlayerController Function SetUsingThirdPerson
struct Z_Construct_UFunction_AMultiplayerPlayerController_SetUsingThirdPerson_Statics
{
	struct MultiplayerPlayerController_eventSetUsingThirdPerson_Parms
	{
		bool NewUsingThirdPerson;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewUsingThirdPerson_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewUsingThirdPerson;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerPlayerController_SetUsingThirdPerson_Statics::NewProp_NewUsingThirdPerson_SetBit(void* Obj)
{
	((MultiplayerPlayerController_eventSetUsingThirdPerson_Parms*)Obj)->NewUsingThirdPerson = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_SetUsingThirdPerson_Statics::NewProp_NewUsingThirdPerson = { "NewUsingThirdPerson", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerPlayerController_eventSetUsingThirdPerson_Parms), &Z_Construct_UFunction_AMultiplayerPlayerController_SetUsingThirdPerson_Statics::NewProp_NewUsingThirdPerson_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerController_SetUsingThirdPerson_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_SetUsingThirdPerson_Statics::NewProp_NewUsingThirdPerson,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetUsingThirdPerson_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerController_SetUsingThirdPerson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerController, nullptr, "SetUsingThirdPerson", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerController_SetUsingThirdPerson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetUsingThirdPerson_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_SetUsingThirdPerson_Statics::MultiplayerPlayerController_eventSetUsingThirdPerson_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetUsingThirdPerson_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerController_SetUsingThirdPerson_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_SetUsingThirdPerson_Statics::MultiplayerPlayerController_eventSetUsingThirdPerson_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerPlayerController_SetUsingThirdPerson()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerController_SetUsingThirdPerson_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerPlayerController::execSetUsingThirdPerson)
{
	P_GET_UBOOL(Z_Param_NewUsingThirdPerson);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUsingThirdPerson(Z_Param_NewUsingThirdPerson);
	P_NATIVE_END;
}
// End Class AMultiplayerPlayerController Function SetUsingThirdPerson

// Begin Class AMultiplayerPlayerController Function SetUsingThirdPersonLeftShoulder
struct Z_Construct_UFunction_AMultiplayerPlayerController_SetUsingThirdPersonLeftShoulder_Statics
{
	struct MultiplayerPlayerController_eventSetUsingThirdPersonLeftShoulder_Parms
	{
		bool NewUsingThirdPersonLeftShoulder;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewUsingThirdPersonLeftShoulder_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewUsingThirdPersonLeftShoulder;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMultiplayerPlayerController_SetUsingThirdPersonLeftShoulder_Statics::NewProp_NewUsingThirdPersonLeftShoulder_SetBit(void* Obj)
{
	((MultiplayerPlayerController_eventSetUsingThirdPersonLeftShoulder_Parms*)Obj)->NewUsingThirdPersonLeftShoulder = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_SetUsingThirdPersonLeftShoulder_Statics::NewProp_NewUsingThirdPersonLeftShoulder = { "NewUsingThirdPersonLeftShoulder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerPlayerController_eventSetUsingThirdPersonLeftShoulder_Parms), &Z_Construct_UFunction_AMultiplayerPlayerController_SetUsingThirdPersonLeftShoulder_Statics::NewProp_NewUsingThirdPersonLeftShoulder_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerController_SetUsingThirdPersonLeftShoulder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_SetUsingThirdPersonLeftShoulder_Statics::NewProp_NewUsingThirdPersonLeftShoulder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetUsingThirdPersonLeftShoulder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerController_SetUsingThirdPersonLeftShoulder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerController, nullptr, "SetUsingThirdPersonLeftShoulder", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerController_SetUsingThirdPersonLeftShoulder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetUsingThirdPersonLeftShoulder_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_SetUsingThirdPersonLeftShoulder_Statics::MultiplayerPlayerController_eventSetUsingThirdPersonLeftShoulder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_SetUsingThirdPersonLeftShoulder_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerController_SetUsingThirdPersonLeftShoulder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_SetUsingThirdPersonLeftShoulder_Statics::MultiplayerPlayerController_eventSetUsingThirdPersonLeftShoulder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerPlayerController_SetUsingThirdPersonLeftShoulder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerController_SetUsingThirdPersonLeftShoulder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerPlayerController::execSetUsingThirdPersonLeftShoulder)
{
	P_GET_UBOOL(Z_Param_NewUsingThirdPersonLeftShoulder);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUsingThirdPersonLeftShoulder(Z_Param_NewUsingThirdPersonLeftShoulder);
	P_NATIVE_END;
}
// End Class AMultiplayerPlayerController Function SetUsingThirdPersonLeftShoulder

// Begin Class AMultiplayerPlayerController Function VibrateController
struct Z_Construct_UFunction_AMultiplayerPlayerController_VibrateController_Statics
{
	struct MultiplayerPlayerController_eventVibrateController_Parms
	{
		UForceFeedbackEffect* ForceFeedbackEffect;
		FName Tag;
		bool Looping;
		bool IgnoreTimeDilation;
		bool PlayWhilePaused;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "CPP_Default_IgnoreTimeDilation", "false" },
		{ "CPP_Default_Looping", "false" },
		{ "CPP_Default_PlayWhilePaused", "false" },
		{ "CPP_Default_Tag", "" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ForceFeedbackEffect;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
	static void NewProp_Looping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Looping;
	static void NewProp_IgnoreTimeDilation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IgnoreTimeDilation;
	static void NewProp_PlayWhilePaused_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PlayWhilePaused;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_VibrateController_Statics::NewProp_ForceFeedbackEffect = { "ForceFeedbackEffect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerPlayerController_eventVibrateController_Parms, ForceFeedbackEffect), Z_Construct_UClass_UForceFeedbackEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_VibrateController_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerPlayerController_eventVibrateController_Parms, Tag), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMultiplayerPlayerController_VibrateController_Statics::NewProp_Looping_SetBit(void* Obj)
{
	((MultiplayerPlayerController_eventVibrateController_Parms*)Obj)->Looping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_VibrateController_Statics::NewProp_Looping = { "Looping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerPlayerController_eventVibrateController_Parms), &Z_Construct_UFunction_AMultiplayerPlayerController_VibrateController_Statics::NewProp_Looping_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMultiplayerPlayerController_VibrateController_Statics::NewProp_IgnoreTimeDilation_SetBit(void* Obj)
{
	((MultiplayerPlayerController_eventVibrateController_Parms*)Obj)->IgnoreTimeDilation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_VibrateController_Statics::NewProp_IgnoreTimeDilation = { "IgnoreTimeDilation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerPlayerController_eventVibrateController_Parms), &Z_Construct_UFunction_AMultiplayerPlayerController_VibrateController_Statics::NewProp_IgnoreTimeDilation_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMultiplayerPlayerController_VibrateController_Statics::NewProp_PlayWhilePaused_SetBit(void* Obj)
{
	((MultiplayerPlayerController_eventVibrateController_Parms*)Obj)->PlayWhilePaused = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMultiplayerPlayerController_VibrateController_Statics::NewProp_PlayWhilePaused = { "PlayWhilePaused", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MultiplayerPlayerController_eventVibrateController_Parms), &Z_Construct_UFunction_AMultiplayerPlayerController_VibrateController_Statics::NewProp_PlayWhilePaused_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerPlayerController_VibrateController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_VibrateController_Statics::NewProp_ForceFeedbackEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_VibrateController_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_VibrateController_Statics::NewProp_Looping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_VibrateController_Statics::NewProp_IgnoreTimeDilation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerPlayerController_VibrateController_Statics::NewProp_PlayWhilePaused,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_VibrateController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerPlayerController_VibrateController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerPlayerController, nullptr, "VibrateController", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerPlayerController_VibrateController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_VibrateController_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_VibrateController_Statics::MultiplayerPlayerController_eventVibrateController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerPlayerController_VibrateController_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerPlayerController_VibrateController_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerPlayerController_VibrateController_Statics::MultiplayerPlayerController_eventVibrateController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerPlayerController_VibrateController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerPlayerController_VibrateController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerPlayerController::execVibrateController)
{
	P_GET_OBJECT(UForceFeedbackEffect,Z_Param_ForceFeedbackEffect);
	P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
	P_GET_UBOOL(Z_Param_Looping);
	P_GET_UBOOL(Z_Param_IgnoreTimeDilation);
	P_GET_UBOOL(Z_Param_PlayWhilePaused);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->VibrateController(Z_Param_ForceFeedbackEffect,Z_Param_Tag,Z_Param_Looping,Z_Param_IgnoreTimeDilation,Z_Param_PlayWhilePaused);
	P_NATIVE_END;
}
// End Class AMultiplayerPlayerController Function VibrateController

// Begin Class AMultiplayerPlayerController
void AMultiplayerPlayerController::StaticRegisterNativesAMultiplayerPlayerController()
{
	UClass* Class = AMultiplayerPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplySettingsToCharacter", &AMultiplayerPlayerController::execApplySettingsToCharacter },
		{ "ChooseNewCharacter", &AMultiplayerPlayerController::execChooseNewCharacter },
		{ "ClientSetControlRotation", &AMultiplayerPlayerController::execClientSetControlRotation },
		{ "CreateUIWidget", &AMultiplayerPlayerController::execCreateUIWidget },
		{ "GetAllSharedCalibersOnSpawn", &AMultiplayerPlayerController::execGetAllSharedCalibersOnSpawn },
		{ "GetAvoidDuplicatesForRandomWeapons", &AMultiplayerPlayerController::execGetAvoidDuplicatesForRandomWeapons },
		{ "GetCanRespawn", &AMultiplayerPlayerController::execGetCanRespawn },
		{ "GetCanShoulderSwapThirdPerson", &AMultiplayerPlayerController::execGetCanShoulderSwapThirdPerson },
		{ "GetCanShoulderSwapWhileInFirstPerson", &AMultiplayerPlayerController::execGetCanShoulderSwapWhileInFirstPerson },
		{ "GetCanSwitchPerspective", &AMultiplayerPlayerController::execGetCanSwitchPerspective },
		{ "GetCharacterSelectWidget", &AMultiplayerPlayerController::execGetCharacterSelectWidget },
		{ "GetChooseCharacterOnRespawn", &AMultiplayerPlayerController::execGetChooseCharacterOnRespawn },
		{ "GetControlledPawn", &AMultiplayerPlayerController::execGetControlledPawn },
		{ "GetDieWhenChoosingNewCharacter", &AMultiplayerPlayerController::execGetDieWhenChoosingNewCharacter },
		{ "GetGiveLoadoutOnBeginPlay", &AMultiplayerPlayerController::execGetGiveLoadoutOnBeginPlay },
		{ "GetHasSpawnedPlayer", &AMultiplayerPlayerController::execGetHasSpawnedPlayer },
		{ "GetMaxWeaponAmount", &AMultiplayerPlayerController::execGetMaxWeaponAmount },
		{ "GetPlayerIndex", &AMultiplayerPlayerController::execGetPlayerIndex },
		{ "GetPlayerPawnClass", &AMultiplayerPlayerController::execGetPlayerPawnClass },
		{ "GetRandomizeUnselectedWeapons", &AMultiplayerPlayerController::execGetRandomizeUnselectedWeapons },
		{ "GetRespawnDelay", &AMultiplayerPlayerController::execGetRespawnDelay },
		{ "GetRespawnPoints", &AMultiplayerPlayerController::execGetRespawnPoints },
		{ "GetUILastIndex", &AMultiplayerPlayerController::execGetUILastIndex },
		{ "GetUsingThirdPerson", &AMultiplayerPlayerController::execGetUsingThirdPerson },
		{ "GetUsingThirdPersonLeftShoulder", &AMultiplayerPlayerController::execGetUsingThirdPersonLeftShoulder },
		{ "GiveLoadout", &AMultiplayerPlayerController::execGiveLoadout },
		{ "PossessPawn", &AMultiplayerPlayerController::execPossessPawn },
		{ "PrintStringForControlledPawnInvalidApplySettings", &AMultiplayerPlayerController::execPrintStringForControlledPawnInvalidApplySettings },
		{ "RemoveUIWidget", &AMultiplayerPlayerController::execRemoveUIWidget },
		{ "Respawn", &AMultiplayerPlayerController::execRespawn },
		{ "Respawn1", &AMultiplayerPlayerController::execRespawn1 },
		{ "ServerPossessPawn", &AMultiplayerPlayerController::execServerPossessPawn },
		{ "ServerRespawn1", &AMultiplayerPlayerController::execServerRespawn1 },
		{ "SetAllSharedCalibersOnSpawn", &AMultiplayerPlayerController::execSetAllSharedCalibersOnSpawn },
		{ "SetAvoidDuplicatesForRandomWeapons", &AMultiplayerPlayerController::execSetAvoidDuplicatesForRandomWeapons },
		{ "SetCanRespawn", &AMultiplayerPlayerController::execSetCanRespawn },
		{ "SetCanShoulderSwapThirdPerson", &AMultiplayerPlayerController::execSetCanShoulderSwapThirdPerson },
		{ "SetCanShoulderSwapWhileInFirstPerson", &AMultiplayerPlayerController::execSetCanShoulderSwapWhileInFirstPerson },
		{ "SetCanSwitchPerspective", &AMultiplayerPlayerController::execSetCanSwitchPerspective },
		{ "SetCharacterSelectWidget", &AMultiplayerPlayerController::execSetCharacterSelectWidget },
		{ "SetChooseCharacterOnRespawn", &AMultiplayerPlayerController::execSetChooseCharacterOnRespawn },
		{ "SetControllerVibration", &AMultiplayerPlayerController::execSetControllerVibration },
		{ "SetDieWhenChoosingNewCharacter", &AMultiplayerPlayerController::execSetDieWhenChoosingNewCharacter },
		{ "SetGiveLoadoutOnBeginPlay", &AMultiplayerPlayerController::execSetGiveLoadoutOnBeginPlay },
		{ "SetHasSpawnedPlayer", &AMultiplayerPlayerController::execSetHasSpawnedPlayer },
		{ "SetMaxWeaponAmount", &AMultiplayerPlayerController::execSetMaxWeaponAmount },
		{ "SetPlayerIndex", &AMultiplayerPlayerController::execSetPlayerIndex },
		{ "SetPlayerPawnClass", &AMultiplayerPlayerController::execSetPlayerPawnClass },
		{ "SetRandomizeUnselectedWeapons", &AMultiplayerPlayerController::execSetRandomizeUnselectedWeapons },
		{ "SetRespawnDelay", &AMultiplayerPlayerController::execSetRespawnDelay },
		{ "SetRespawnPoints", &AMultiplayerPlayerController::execSetRespawnPoints },
		{ "SetUsingThirdPerson", &AMultiplayerPlayerController::execSetUsingThirdPerson },
		{ "SetUsingThirdPersonLeftShoulder", &AMultiplayerPlayerController::execSetUsingThirdPersonLeftShoulder },
		{ "VibrateController", &AMultiplayerPlayerController::execVibrateController },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMultiplayerPlayerController);
UClass* Z_Construct_UClass_AMultiplayerPlayerController_NoRegister()
{
	return AMultiplayerPlayerController::StaticClass();
}
struct Z_Construct_UClass_AMultiplayerPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "MultiplayerPlayerController.h" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllUI_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HUD_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeathScreen_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HUDClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
		{ "Tooltip", "This is used to have a reference to the HUD separate from the rest of the UI" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeathScreenClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
		{ "Tooltip", "This is used to have a reference to the DeathScreen separate from the rest of the UI" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponChoices_MetaData[] = {
		{ "Category", "Weapons" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
		{ "Tooltip", "This will be used when spawning the player to give them their loadout" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllWeaponClasses_MetaData[] = {
		{ "Category", "Weapons" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
		{ "Tooltip", "This is all the weapons in the game, make sure to add all the playable weapons to this array variable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllWeaponClassesForUI_MetaData[] = {
		{ "Category", "Weapons" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
		{ "Tooltip", "This is all the weapons in the game, make sure to add all the playable weapons to this array variable, this is only for a loadout menu" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldOfView_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseDefaultSensitivityX_MetaData[] = {
		{ "Category", "Settings|Keyboard And Mouse" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
		{ "Tooltip", "Mouse sensitivity on the X axis when not aiming" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseAimingSensitivityX_MetaData[] = {
		{ "Category", "Settings|Keyboard And Mouse" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
		{ "Tooltip", "Mouse sensitivity on the X axis when aiming, only applies if UseAimSensitivityMultipler is false" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseDefaultSensitivityY_MetaData[] = {
		{ "Category", "Settings|Keyboard And Mouse" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
		{ "Tooltip", "Mouse sensitivity on the Y axis when not aiming" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseAimingSensitivityY_MetaData[] = {
		{ "Category", "Settings|Keyboard And Mouse" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
		{ "Tooltip", "Mouse sensitivity on the Y axis when aiming, only applies if UseAimSensitivityMultipler is false" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseAimingSensitivityMultiplier_MetaData[] = {
		{ "Category", "Settings|Keyboard And Mouse" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GamepadDefaultSensitivityX_MetaData[] = {
		{ "Category", "Settings|Gamepad" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
		{ "Tooltip", "Gamepad sensitivity on the X axis when not aiming" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GamepadAimingSensitivityX_MetaData[] = {
		{ "Category", "Settings|Gamepad" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
		{ "Tooltip", "Gamepad sensitivity on the X axis when aiming, only applies if UseAimSensitivityMultipler is false" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GamepadDefaultSensitivityY_MetaData[] = {
		{ "Category", "Settings|Gamepad" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
		{ "Tooltip", "Gamepad sensitivity on the Y axis when not aiming" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GamepadAimingSensitivityY_MetaData[] = {
		{ "Category", "Settings|Gamepad" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
		{ "Tooltip", "Gamepad sensitivity on the Y axis when aiming, only applies if UseAimSensitivityMultipler is false" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GamepadAimingSensitivityMultiplier_MetaData[] = {
		{ "Category", "Settings|Gamepad" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControllerVibration_MetaData[] = {
		{ "Category", "Settings|Gamepad" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
		{ "Tooltip", "Do not set this variable directly, instead use the SetControllerVibration function" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseAimSensitivityMultipler_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToggleAim_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoldButtonToJump_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanSprint_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
		{ "Tooltip", "This is a global setting that will apply to the player even after respawns, the CanSprint variable in the MultiplayerCharacter is for specific situations, for example the player gets stunned and can't sprint, you would set that in the character" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToggleSprint_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "2" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
		{ "Tooltip", "0 = Hold to sprint, 1 = Tap to go to sprint (tapping again will not stop sprinting), 2 = Tap to sprint and tap again to stop sprinting" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerIndex_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UsingThirdPerson_MetaData[] = {
		{ "Category", "Perspective" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
		{ "Tooltip", "Set this to true if you want third person to be default" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UsingThirdPersonLeftShoulder_MetaData[] = {
		{ "Category", "Perspective" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
		{ "Tooltip", "Set this to true to default it to the left shoulder" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanSwitchPerspective_MetaData[] = {
		{ "Category", "Perspective" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
		{ "Tooltip", "Perspective = first or third person" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanShoulderSwapThirdPerson_MetaData[] = {
		{ "Category", "Perspective" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanShoulderSwapWhileInFirstPerson_MetaData[] = {
		{ "Category", "Perspective" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
		{ "Tooltip", "This will make it to where if you press the shoulder swap button while in first person it will swap the shoulder for when you go into third person" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UsingGamepad_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
		{ "Tooltip", "This will just detect whether the last input was with a keyboard and mouse or a controller" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GiveLoadoutOnBeginPlay_MetaData[] = {
		{ "Category", "Weapons" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
		{ "Tooltip", "Only applies to MultiplayerCharacter when possessing pawn" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxWeaponAmount_MetaData[] = {
		{ "Category", "Weapons" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomizeUnselectedWeapons_MetaData[] = {
		{ "Category", "Weapons" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvoidDuplicatesForRandomWeapons_MetaData[] = {
		{ "Category", "Weapons" },
		{ "ClampMax", "2" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
		{ "Tooltip", "0 = will allow duplicates, 1 = will avoid duplicates unless there aren't enough weapons to choose from, 2 = will avoid duplicates no matter what" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllSharedCalibersOnSpawn_MetaData[] = {
		{ "Category", "Weapons" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
		{ "Tooltip", "This would be the name and amount of each caliber the player spawns with, only applies to guns that use this rather than their own reserve ammo" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasSpawnedPlayer_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
		{ "Tooltip", "This is set to true if the PossessPawn function has executed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerPawnClass_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
		{ "Tooltip", "In order to change characters on respawn without the player choosing the character you just change this variable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanRespawn_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
		{ "Tooltip", "Set this to false for one life modes, you will need to make it do something when the player dies, as of right now the player will just be soft locked" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RespawnDelay_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChooseCharacterOnRespawn_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DieWhenChoosingNewCharacter_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
		{ "Tooltip", "If true choosing a new character will kill the player and immediately respawn them as the new character, if this is false the player will respawn as that new character when they die" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterSelectWidget_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
		{ "Tooltip", "If this is unassigned the game will act as if ChooseCharacterOnSpawn = 0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllCharacters_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
		{ "Tooltip", "This is only used for the character selection menu" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowHUDOnRespawn_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemoveAllWidgetsOnRespawn_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
		{ "Tooltip", "If ShowHUDOnRespawn = true this will just remove all widget before showing the HUD" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RespawnPoints_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GetControlledPawnTimerHandle_MetaData[] = {
		{ "Category", "Timers" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RespawnTimerHandle_MetaData[] = {
		{ "Category", "Timers" },
		{ "ModuleRelativePath", "Public/MultiplayerPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllUI_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllUI;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HUD;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeathScreen;
	static const UECodeGen_Private::FClassPropertyParams NewProp_HUDClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DeathScreenClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponChoices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WeaponChoices;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AllWeaponClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllWeaponClasses;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AllWeaponClassesForUI_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AllWeaponClassesForUI_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AllWeaponClassesForUI;
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
	static void NewProp_ControllerVibration_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ControllerVibration;
	static void NewProp_UseAimSensitivityMultipler_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseAimSensitivityMultipler;
	static void NewProp_ToggleAim_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ToggleAim;
	static void NewProp_HoldButtonToJump_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HoldButtonToJump;
	static void NewProp_CanSprint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanSprint;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ToggleSprint;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
	static void NewProp_UsingThirdPerson_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UsingThirdPerson;
	static void NewProp_UsingThirdPersonLeftShoulder_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UsingThirdPersonLeftShoulder;
	static void NewProp_CanSwitchPerspective_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanSwitchPerspective;
	static void NewProp_CanShoulderSwapThirdPerson_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanShoulderSwapThirdPerson;
	static void NewProp_CanShoulderSwapWhileInFirstPerson_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanShoulderSwapWhileInFirstPerson;
	static void NewProp_UsingGamepad_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UsingGamepad;
	static void NewProp_GiveLoadoutOnBeginPlay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_GiveLoadoutOnBeginPlay;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxWeaponAmount;
	static void NewProp_RandomizeUnselectedWeapons_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RandomizeUnselectedWeapons;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AvoidDuplicatesForRandomWeapons;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AllSharedCalibersOnSpawn_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AllSharedCalibersOnSpawn_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AllSharedCalibersOnSpawn;
	static void NewProp_HasSpawnedPlayer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HasSpawnedPlayer;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PlayerPawnClass;
	static void NewProp_CanRespawn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanRespawn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RespawnDelay;
	static void NewProp_ChooseCharacterOnRespawn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ChooseCharacterOnRespawn;
	static void NewProp_DieWhenChoosingNewCharacter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DieWhenChoosingNewCharacter;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CharacterSelectWidget;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AllCharacters_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AllCharacters_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AllCharacters;
	static void NewProp_ShowHUDOnRespawn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowHUDOnRespawn;
	static void NewProp_RemoveAllWidgetsOnRespawn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RemoveAllWidgetsOnRespawn;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RespawnPoints_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RespawnPoints_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_RespawnPoints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GetControlledPawnTimerHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RespawnTimerHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMultiplayerPlayerController_ApplySettingsToCharacter, "ApplySettingsToCharacter" }, // 1368230442
		{ &Z_Construct_UFunction_AMultiplayerPlayerController_ChooseNewCharacter, "ChooseNewCharacter" }, // 4061546714
		{ &Z_Construct_UFunction_AMultiplayerPlayerController_ClientSetControlRotation, "ClientSetControlRotation" }, // 4106394184
		{ &Z_Construct_UFunction_AMultiplayerPlayerController_CreateUIWidget, "CreateUIWidget" }, // 3815444977
		{ &Z_Construct_UFunction_AMultiplayerPlayerController_GetAllSharedCalibersOnSpawn, "GetAllSharedCalibersOnSpawn" }, // 231283754
		{ &Z_Construct_UFunction_AMultiplayerPlayerController_GetAvoidDuplicatesForRandomWeapons, "GetAvoidDuplicatesForRandomWeapons" }, // 1122209784
		{ &Z_Construct_UFunction_AMultiplayerPlayerController_GetCanRespawn, "GetCanRespawn" }, // 2878360313
		{ &Z_Construct_UFunction_AMultiplayerPlayerController_GetCanShoulderSwapThirdPerson, "GetCanShoulderSwapThirdPerson" }, // 2274554593
		{ &Z_Construct_UFunction_AMultiplayerPlayerController_GetCanShoulderSwapWhileInFirstPerson, "GetCanShoulderSwapWhileInFirstPerson" }, // 2878388697
		{ &Z_Construct_UFunction_AMultiplayerPlayerController_GetCanSwitchPerspective, "GetCanSwitchPerspective" }, // 4119881619
		{ &Z_Construct_UFunction_AMultiplayerPlayerController_GetCharacterSelectWidget, "GetCharacterSelectWidget" }, // 2475246544
		{ &Z_Construct_UFunction_AMultiplayerPlayerController_GetChooseCharacterOnRespawn, "GetChooseCharacterOnRespawn" }, // 3670594349
		{ &Z_Construct_UFunction_AMultiplayerPlayerController_GetControlledPawn, "GetControlledPawn" }, // 3934298180
		{ &Z_Construct_UFunction_AMultiplayerPlayerController_GetDieWhenChoosingNewCharacter, "GetDieWhenChoosingNewCharacter" }, // 806546401
		{ &Z_Construct_UFunction_AMultiplayerPlayerController_GetGiveLoadoutOnBeginPlay, "GetGiveLoadoutOnBeginPlay" }, // 2171509387
		{ &Z_Construct_UFunction_AMultiplayerPlayerController_GetHasSpawnedPlayer, "GetHasSpawnedPlayer" }, // 1651719858
		{ &Z_Construct_UFunction_AMultiplayerPlayerController_GetMaxWeaponAmount, "GetMaxWeaponAmount" }, // 2451057053
		{ &Z_Construct_UFunction_AMultiplayerPlayerController_GetPlayerIndex, "GetPlayerIndex" }, // 3302743241
		{ &Z_Construct_UFunction_AMultiplayerPlayerController_GetPlayerPawnClass, "GetPlayerPawnClass" }, // 2009438730
		{ &Z_Construct_UFunction_AMultiplayerPlayerController_GetRandomizeUnselectedWeapons, "GetRandomizeUnselectedWeapons" }, // 1078251374
		{ &Z_Construct_UFunction_AMultiplayerPlayerController_GetRespawnDelay, "GetRespawnDelay" }, // 4255183577
		{ &Z_Construct_UFunction_AMultiplayerPlayerController_GetRespawnPoints, "GetRespawnPoints" }, // 4154046570
		{ &Z_Construct_UFunction_AMultiplayerPlayerController_GetUILastIndex, "GetUILastIndex" }, // 3790280388
		{ &Z_Construct_UFunction_AMultiplayerPlayerController_GetUsingThirdPerson, "GetUsingThirdPerson" }, // 20045603
		{ &Z_Construct_UFunction_AMultiplayerPlayerController_GetUsingThirdPersonLeftShoulder, "GetUsingThirdPersonLeftShoulder" }, // 974703716
		{ &Z_Construct_UFunction_AMultiplayerPlayerController_GiveLoadout, "GiveLoadout" }, // 3128717106
		{ &Z_Construct_UFunction_AMultiplayerPlayerController_PossessPawn, "PossessPawn" }, // 1495966103
		{ &Z_Construct_UFunction_AMultiplayerPlayerController_PrintStringForControlledPawnInvalidApplySettings, "PrintStringForControlledPawnInvalidApplySettings" }, // 868448220
		{ &Z_Construct_UFunction_AMultiplayerPlayerController_RemoveUIWidget, "RemoveUIWidget" }, // 3398212162
		{ &Z_Construct_UFunction_AMultiplayerPlayerController_Respawn, "Respawn" }, // 1413747722
		{ &Z_Construct_UFunction_AMultiplayerPlayerController_Respawn1, "Respawn1" }, // 3544962137
		{ &Z_Construct_UFunction_AMultiplayerPlayerController_ServerPossessPawn, "ServerPossessPawn" }, // 3659238483
		{ &Z_Construct_UFunction_AMultiplayerPlayerController_ServerRespawn1, "ServerRespawn1" }, // 3341627378
		{ &Z_Construct_UFunction_AMultiplayerPlayerController_SetAllSharedCalibersOnSpawn, "SetAllSharedCalibersOnSpawn" }, // 2841150406
		{ &Z_Construct_UFunction_AMultiplayerPlayerController_SetAvoidDuplicatesForRandomWeapons, "SetAvoidDuplicatesForRandomWeapons" }, // 1678119624
		{ &Z_Construct_UFunction_AMultiplayerPlayerController_SetCanRespawn, "SetCanRespawn" }, // 238423136
		{ &Z_Construct_UFunction_AMultiplayerPlayerController_SetCanShoulderSwapThirdPerson, "SetCanShoulderSwapThirdPerson" }, // 431097017
		{ &Z_Construct_UFunction_AMultiplayerPlayerController_SetCanShoulderSwapWhileInFirstPerson, "SetCanShoulderSwapWhileInFirstPerson" }, // 90303328
		{ &Z_Construct_UFunction_AMultiplayerPlayerController_SetCanSwitchPerspective, "SetCanSwitchPerspective" }, // 1010557762
		{ &Z_Construct_UFunction_AMultiplayerPlayerController_SetCharacterSelectWidget, "SetCharacterSelectWidget" }, // 863442827
		{ &Z_Construct_UFunction_AMultiplayerPlayerController_SetChooseCharacterOnRespawn, "SetChooseCharacterOnRespawn" }, // 131054107
		{ &Z_Construct_UFunction_AMultiplayerPlayerController_SetControllerVibration, "SetControllerVibration" }, // 1325743635
		{ &Z_Construct_UFunction_AMultiplayerPlayerController_SetDieWhenChoosingNewCharacter, "SetDieWhenChoosingNewCharacter" }, // 3723913172
		{ &Z_Construct_UFunction_AMultiplayerPlayerController_SetGiveLoadoutOnBeginPlay, "SetGiveLoadoutOnBeginPlay" }, // 775150086
		{ &Z_Construct_UFunction_AMultiplayerPlayerController_SetHasSpawnedPlayer, "SetHasSpawnedPlayer" }, // 1907531766
		{ &Z_Construct_UFunction_AMultiplayerPlayerController_SetMaxWeaponAmount, "SetMaxWeaponAmount" }, // 1045145972
		{ &Z_Construct_UFunction_AMultiplayerPlayerController_SetPlayerIndex, "SetPlayerIndex" }, // 2549981999
		{ &Z_Construct_UFunction_AMultiplayerPlayerController_SetPlayerPawnClass, "SetPlayerPawnClass" }, // 3174494090
		{ &Z_Construct_UFunction_AMultiplayerPlayerController_SetRandomizeUnselectedWeapons, "SetRandomizeUnselectedWeapons" }, // 3109500474
		{ &Z_Construct_UFunction_AMultiplayerPlayerController_SetRespawnDelay, "SetRespawnDelay" }, // 2245817102
		{ &Z_Construct_UFunction_AMultiplayerPlayerController_SetRespawnPoints, "SetRespawnPoints" }, // 2134794063
		{ &Z_Construct_UFunction_AMultiplayerPlayerController_SetUsingThirdPerson, "SetUsingThirdPerson" }, // 3148831407
		{ &Z_Construct_UFunction_AMultiplayerPlayerController_SetUsingThirdPersonLeftShoulder, "SetUsingThirdPersonLeftShoulder" }, // 1928855386
		{ &Z_Construct_UFunction_AMultiplayerPlayerController_VibrateController, "VibrateController" }, // 3064415799
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMultiplayerPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_AllUI_Inner = { "AllUI", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_AllUI = { "AllUI", nullptr, (EPropertyFlags)0x001000800000000c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerController, AllUI), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllUI_MetaData), NewProp_AllUI_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_HUD = { "HUD", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerController, HUD), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HUD_MetaData), NewProp_HUD_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_DeathScreen = { "DeathScreen", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerController, DeathScreen), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeathScreen_MetaData), NewProp_DeathScreen_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_HUDClass = { "HUDClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerController, HUDClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HUDClass_MetaData), NewProp_HUDClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_DeathScreenClass = { "DeathScreenClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerController, DeathScreenClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeathScreenClass_MetaData), NewProp_DeathScreenClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_WeaponChoices_Inner = { "WeaponChoices", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AMultiplayerGun_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_WeaponChoices = { "WeaponChoices", nullptr, (EPropertyFlags)0x0014000000000025, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerController, WeaponChoices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponChoices_MetaData), NewProp_WeaponChoices_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_AllWeaponClasses_Inner = { "AllWeaponClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AMultiplayerGun_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_AllWeaponClasses = { "AllWeaponClasses", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerController, AllWeaponClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllWeaponClasses_MetaData), NewProp_AllWeaponClasses_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_AllWeaponClassesForUI_ValueProp = { "AllWeaponClassesForUI", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_AMultiplayerGun_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_AllWeaponClassesForUI_Key_KeyProp = { "AllWeaponClassesForUI_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_AllWeaponClassesForUI = { "AllWeaponClassesForUI", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerController, AllWeaponClassesForUI), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllWeaponClassesForUI_MetaData), NewProp_AllWeaponClassesForUI_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_FieldOfView = { "FieldOfView", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerController, FieldOfView), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldOfView_MetaData), NewProp_FieldOfView_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_MouseDefaultSensitivityX = { "MouseDefaultSensitivityX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerController, MouseDefaultSensitivityX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseDefaultSensitivityX_MetaData), NewProp_MouseDefaultSensitivityX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_MouseAimingSensitivityX = { "MouseAimingSensitivityX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerController, MouseAimingSensitivityX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseAimingSensitivityX_MetaData), NewProp_MouseAimingSensitivityX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_MouseDefaultSensitivityY = { "MouseDefaultSensitivityY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerController, MouseDefaultSensitivityY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseDefaultSensitivityY_MetaData), NewProp_MouseDefaultSensitivityY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_MouseAimingSensitivityY = { "MouseAimingSensitivityY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerController, MouseAimingSensitivityY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseAimingSensitivityY_MetaData), NewProp_MouseAimingSensitivityY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_MouseAimingSensitivityMultiplier = { "MouseAimingSensitivityMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerController, MouseAimingSensitivityMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseAimingSensitivityMultiplier_MetaData), NewProp_MouseAimingSensitivityMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_GamepadDefaultSensitivityX = { "GamepadDefaultSensitivityX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerController, GamepadDefaultSensitivityX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GamepadDefaultSensitivityX_MetaData), NewProp_GamepadDefaultSensitivityX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_GamepadAimingSensitivityX = { "GamepadAimingSensitivityX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerController, GamepadAimingSensitivityX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GamepadAimingSensitivityX_MetaData), NewProp_GamepadAimingSensitivityX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_GamepadDefaultSensitivityY = { "GamepadDefaultSensitivityY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerController, GamepadDefaultSensitivityY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GamepadDefaultSensitivityY_MetaData), NewProp_GamepadDefaultSensitivityY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_GamepadAimingSensitivityY = { "GamepadAimingSensitivityY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerController, GamepadAimingSensitivityY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GamepadAimingSensitivityY_MetaData), NewProp_GamepadAimingSensitivityY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_GamepadAimingSensitivityMultiplier = { "GamepadAimingSensitivityMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerController, GamepadAimingSensitivityMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GamepadAimingSensitivityMultiplier_MetaData), NewProp_GamepadAimingSensitivityMultiplier_MetaData) };
void Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_ControllerVibration_SetBit(void* Obj)
{
	((AMultiplayerPlayerController*)Obj)->ControllerVibration = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_ControllerVibration = { "ControllerVibration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerPlayerController), &Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_ControllerVibration_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControllerVibration_MetaData), NewProp_ControllerVibration_MetaData) };
void Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_UseAimSensitivityMultipler_SetBit(void* Obj)
{
	((AMultiplayerPlayerController*)Obj)->UseAimSensitivityMultipler = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_UseAimSensitivityMultipler = { "UseAimSensitivityMultipler", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerPlayerController), &Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_UseAimSensitivityMultipler_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseAimSensitivityMultipler_MetaData), NewProp_UseAimSensitivityMultipler_MetaData) };
void Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_ToggleAim_SetBit(void* Obj)
{
	((AMultiplayerPlayerController*)Obj)->ToggleAim = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_ToggleAim = { "ToggleAim", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerPlayerController), &Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_ToggleAim_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToggleAim_MetaData), NewProp_ToggleAim_MetaData) };
void Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_HoldButtonToJump_SetBit(void* Obj)
{
	((AMultiplayerPlayerController*)Obj)->HoldButtonToJump = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_HoldButtonToJump = { "HoldButtonToJump", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerPlayerController), &Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_HoldButtonToJump_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoldButtonToJump_MetaData), NewProp_HoldButtonToJump_MetaData) };
void Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_CanSprint_SetBit(void* Obj)
{
	((AMultiplayerPlayerController*)Obj)->CanSprint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_CanSprint = { "CanSprint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerPlayerController), &Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_CanSprint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanSprint_MetaData), NewProp_CanSprint_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_ToggleSprint = { "ToggleSprint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerController, ToggleSprint), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToggleSprint_MetaData), NewProp_ToggleSprint_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0020080000000024, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerController, PlayerIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerIndex_MetaData), NewProp_PlayerIndex_MetaData) };
void Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_UsingThirdPerson_SetBit(void* Obj)
{
	((AMultiplayerPlayerController*)Obj)->UsingThirdPerson = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_UsingThirdPerson = { "UsingThirdPerson", nullptr, (EPropertyFlags)0x0020080000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerPlayerController), &Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_UsingThirdPerson_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UsingThirdPerson_MetaData), NewProp_UsingThirdPerson_MetaData) };
void Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_UsingThirdPersonLeftShoulder_SetBit(void* Obj)
{
	((AMultiplayerPlayerController*)Obj)->UsingThirdPersonLeftShoulder = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_UsingThirdPersonLeftShoulder = { "UsingThirdPersonLeftShoulder", nullptr, (EPropertyFlags)0x0020080000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerPlayerController), &Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_UsingThirdPersonLeftShoulder_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UsingThirdPersonLeftShoulder_MetaData), NewProp_UsingThirdPersonLeftShoulder_MetaData) };
void Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_CanSwitchPerspective_SetBit(void* Obj)
{
	((AMultiplayerPlayerController*)Obj)->CanSwitchPerspective = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_CanSwitchPerspective = { "CanSwitchPerspective", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerPlayerController), &Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_CanSwitchPerspective_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanSwitchPerspective_MetaData), NewProp_CanSwitchPerspective_MetaData) };
void Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_CanShoulderSwapThirdPerson_SetBit(void* Obj)
{
	((AMultiplayerPlayerController*)Obj)->CanShoulderSwapThirdPerson = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_CanShoulderSwapThirdPerson = { "CanShoulderSwapThirdPerson", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerPlayerController), &Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_CanShoulderSwapThirdPerson_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanShoulderSwapThirdPerson_MetaData), NewProp_CanShoulderSwapThirdPerson_MetaData) };
void Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_CanShoulderSwapWhileInFirstPerson_SetBit(void* Obj)
{
	((AMultiplayerPlayerController*)Obj)->CanShoulderSwapWhileInFirstPerson = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_CanShoulderSwapWhileInFirstPerson = { "CanShoulderSwapWhileInFirstPerson", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerPlayerController), &Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_CanShoulderSwapWhileInFirstPerson_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanShoulderSwapWhileInFirstPerson_MetaData), NewProp_CanShoulderSwapWhileInFirstPerson_MetaData) };
void Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_UsingGamepad_SetBit(void* Obj)
{
	((AMultiplayerPlayerController*)Obj)->UsingGamepad = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_UsingGamepad = { "UsingGamepad", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerPlayerController), &Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_UsingGamepad_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UsingGamepad_MetaData), NewProp_UsingGamepad_MetaData) };
void Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_GiveLoadoutOnBeginPlay_SetBit(void* Obj)
{
	((AMultiplayerPlayerController*)Obj)->GiveLoadoutOnBeginPlay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_GiveLoadoutOnBeginPlay = { "GiveLoadoutOnBeginPlay", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerPlayerController), &Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_GiveLoadoutOnBeginPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GiveLoadoutOnBeginPlay_MetaData), NewProp_GiveLoadoutOnBeginPlay_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_MaxWeaponAmount = { "MaxWeaponAmount", nullptr, (EPropertyFlags)0x0020080000000025, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerController, MaxWeaponAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxWeaponAmount_MetaData), NewProp_MaxWeaponAmount_MetaData) };
void Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_RandomizeUnselectedWeapons_SetBit(void* Obj)
{
	((AMultiplayerPlayerController*)Obj)->RandomizeUnselectedWeapons = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_RandomizeUnselectedWeapons = { "RandomizeUnselectedWeapons", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerPlayerController), &Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_RandomizeUnselectedWeapons_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomizeUnselectedWeapons_MetaData), NewProp_RandomizeUnselectedWeapons_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_AvoidDuplicatesForRandomWeapons = { "AvoidDuplicatesForRandomWeapons", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerController, AvoidDuplicatesForRandomWeapons), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvoidDuplicatesForRandomWeapons_MetaData), NewProp_AvoidDuplicatesForRandomWeapons_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_AllSharedCalibersOnSpawn_ValueProp = { "AllSharedCalibersOnSpawn", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_AllSharedCalibersOnSpawn_Key_KeyProp = { "AllSharedCalibersOnSpawn_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_AllSharedCalibersOnSpawn = { "AllSharedCalibersOnSpawn", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerController, AllSharedCalibersOnSpawn), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllSharedCalibersOnSpawn_MetaData), NewProp_AllSharedCalibersOnSpawn_MetaData) };
void Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_HasSpawnedPlayer_SetBit(void* Obj)
{
	((AMultiplayerPlayerController*)Obj)->HasSpawnedPlayer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_HasSpawnedPlayer = { "HasSpawnedPlayer", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerPlayerController), &Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_HasSpawnedPlayer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasSpawnedPlayer_MetaData), NewProp_HasSpawnedPlayer_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_PlayerPawnClass = { "PlayerPawnClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerController, PlayerPawnClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerPawnClass_MetaData), NewProp_PlayerPawnClass_MetaData) };
void Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_CanRespawn_SetBit(void* Obj)
{
	((AMultiplayerPlayerController*)Obj)->CanRespawn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_CanRespawn = { "CanRespawn", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerPlayerController), &Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_CanRespawn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanRespawn_MetaData), NewProp_CanRespawn_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_RespawnDelay = { "RespawnDelay", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerController, RespawnDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RespawnDelay_MetaData), NewProp_RespawnDelay_MetaData) };
void Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_ChooseCharacterOnRespawn_SetBit(void* Obj)
{
	((AMultiplayerPlayerController*)Obj)->ChooseCharacterOnRespawn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_ChooseCharacterOnRespawn = { "ChooseCharacterOnRespawn", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerPlayerController), &Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_ChooseCharacterOnRespawn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChooseCharacterOnRespawn_MetaData), NewProp_ChooseCharacterOnRespawn_MetaData) };
void Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_DieWhenChoosingNewCharacter_SetBit(void* Obj)
{
	((AMultiplayerPlayerController*)Obj)->DieWhenChoosingNewCharacter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_DieWhenChoosingNewCharacter = { "DieWhenChoosingNewCharacter", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerPlayerController), &Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_DieWhenChoosingNewCharacter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DieWhenChoosingNewCharacter_MetaData), NewProp_DieWhenChoosingNewCharacter_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_CharacterSelectWidget = { "CharacterSelectWidget", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerController, CharacterSelectWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterSelectWidget_MetaData), NewProp_CharacterSelectWidget_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_AllCharacters_ValueProp = { "AllCharacters", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_AllCharacters_Key_KeyProp = { "AllCharacters_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_AllCharacters = { "AllCharacters", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerController, AllCharacters), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllCharacters_MetaData), NewProp_AllCharacters_MetaData) };
void Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_ShowHUDOnRespawn_SetBit(void* Obj)
{
	((AMultiplayerPlayerController*)Obj)->ShowHUDOnRespawn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_ShowHUDOnRespawn = { "ShowHUDOnRespawn", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerPlayerController), &Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_ShowHUDOnRespawn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowHUDOnRespawn_MetaData), NewProp_ShowHUDOnRespawn_MetaData) };
void Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_RemoveAllWidgetsOnRespawn_SetBit(void* Obj)
{
	((AMultiplayerPlayerController*)Obj)->RemoveAllWidgetsOnRespawn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_RemoveAllWidgetsOnRespawn = { "RemoveAllWidgetsOnRespawn", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMultiplayerPlayerController), &Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_RemoveAllWidgetsOnRespawn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemoveAllWidgetsOnRespawn_MetaData), NewProp_RemoveAllWidgetsOnRespawn_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_RespawnPoints_ValueProp = { "RespawnPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_RespawnPoints_Key_KeyProp = { "RespawnPoints_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_RespawnPoints = { "RespawnPoints", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerController, RespawnPoints), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RespawnPoints_MetaData), NewProp_RespawnPoints_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_GetControlledPawnTimerHandle = { "GetControlledPawnTimerHandle", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerController, GetControlledPawnTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GetControlledPawnTimerHandle_MetaData), NewProp_GetControlledPawnTimerHandle_MetaData) }; // 756291145
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_RespawnTimerHandle = { "RespawnTimerHandle", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerPlayerController, RespawnTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RespawnTimerHandle_MetaData), NewProp_RespawnTimerHandle_MetaData) }; // 756291145
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMultiplayerPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_AllUI_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_AllUI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_HUD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_DeathScreen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_HUDClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_DeathScreenClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_WeaponChoices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_WeaponChoices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_AllWeaponClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_AllWeaponClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_AllWeaponClassesForUI_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_AllWeaponClassesForUI_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_AllWeaponClassesForUI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_FieldOfView,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_MouseDefaultSensitivityX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_MouseAimingSensitivityX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_MouseDefaultSensitivityY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_MouseAimingSensitivityY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_MouseAimingSensitivityMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_GamepadDefaultSensitivityX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_GamepadAimingSensitivityX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_GamepadDefaultSensitivityY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_GamepadAimingSensitivityY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_GamepadAimingSensitivityMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_ControllerVibration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_UseAimSensitivityMultipler,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_ToggleAim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_HoldButtonToJump,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_CanSprint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_ToggleSprint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_PlayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_UsingThirdPerson,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_UsingThirdPersonLeftShoulder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_CanSwitchPerspective,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_CanShoulderSwapThirdPerson,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_CanShoulderSwapWhileInFirstPerson,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_UsingGamepad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_GiveLoadoutOnBeginPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_MaxWeaponAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_RandomizeUnselectedWeapons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_AvoidDuplicatesForRandomWeapons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_AllSharedCalibersOnSpawn_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_AllSharedCalibersOnSpawn_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_AllSharedCalibersOnSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_HasSpawnedPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_PlayerPawnClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_CanRespawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_RespawnDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_ChooseCharacterOnRespawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_DieWhenChoosingNewCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_CharacterSelectWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_AllCharacters_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_AllCharacters_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_AllCharacters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_ShowHUDOnRespawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_RemoveAllWidgetsOnRespawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_RespawnPoints_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_RespawnPoints_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_RespawnPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_GetControlledPawnTimerHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerPlayerController_Statics::NewProp_RespawnTimerHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMultiplayerPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMultiplayerPlayerController_Statics::ClassParams = {
	&AMultiplayerPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMultiplayerPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AMultiplayerPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMultiplayerPlayerController()
{
	if (!Z_Registration_Info_UClass_AMultiplayerPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMultiplayerPlayerController.OuterSingleton, Z_Construct_UClass_AMultiplayerPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMultiplayerPlayerController.OuterSingleton;
}
template<> MULTIPLAYERFPS_API UClass* StaticClass<AMultiplayerPlayerController>()
{
	return AMultiplayerPlayerController::StaticClass();
}
void AMultiplayerPlayerController::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_WeaponChoices(TEXT("WeaponChoices"));
	static const FName Name_PlayerIndex(TEXT("PlayerIndex"));
	static const FName Name_UsingThirdPerson(TEXT("UsingThirdPerson"));
	static const FName Name_UsingThirdPersonLeftShoulder(TEXT("UsingThirdPersonLeftShoulder"));
	static const FName Name_MaxWeaponAmount(TEXT("MaxWeaponAmount"));
	const bool bIsValid = true
		&& Name_WeaponChoices == ClassReps[(int32)ENetFields_Private::WeaponChoices].Property->GetFName()
		&& Name_PlayerIndex == ClassReps[(int32)ENetFields_Private::PlayerIndex].Property->GetFName()
		&& Name_UsingThirdPerson == ClassReps[(int32)ENetFields_Private::UsingThirdPerson].Property->GetFName()
		&& Name_UsingThirdPersonLeftShoulder == ClassReps[(int32)ENetFields_Private::UsingThirdPersonLeftShoulder].Property->GetFName()
		&& Name_MaxWeaponAmount == ClassReps[(int32)ENetFields_Private::MaxWeaponAmount].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AMultiplayerPlayerController"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMultiplayerPlayerController);
AMultiplayerPlayerController::~AMultiplayerPlayerController() {}
// End Class AMultiplayerPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_MultiplayerPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMultiplayerPlayerController, AMultiplayerPlayerController::StaticClass, TEXT("AMultiplayerPlayerController"), &Z_Registration_Info_UClass_AMultiplayerPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMultiplayerPlayerController), 3341800977U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_MultiplayerPlayerController_h_3131287954(TEXT("/Script/MultiplayerFPS"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_MultiplayerPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MultiplayerFPS_Source_MultiplayerFPS_Public_MultiplayerPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
