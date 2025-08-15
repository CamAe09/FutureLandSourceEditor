// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerFPS_init() {}
	MULTIPLAYERFPS_API UFunction* Z_Construct_UDelegateFunction_MultiplayerFPS_OnBulletHit__DelegateSignature();
	MULTIPLAYERFPS_API UFunction* Z_Construct_UDelegateFunction_MultiplayerFPS_OnDie__DelegateSignature();
	MULTIPLAYERFPS_API UFunction* Z_Construct_UDelegateFunction_MultiplayerFPS_OnDieUnreplicated__DelegateSignature();
	MULTIPLAYERFPS_API UFunction* Z_Construct_UDelegateFunction_MultiplayerFPS_OnHealthChanged__DelegateSignature();
	MULTIPLAYERFPS_API UFunction* Z_Construct_UDelegateFunction_MultiplayerFPS_OnInteract__DelegateSignature();
	MULTIPLAYERFPS_API UFunction* Z_Construct_UDelegateFunction_MultiplayerFPS_OnProjectileHit__DelegateSignature();
	MULTIPLAYERFPS_API UFunction* Z_Construct_UDelegateFunction_MultiplayerFPS_OnTakeDamage__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MultiplayerFPS;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MultiplayerFPS()
	{
		if (!Z_Registration_Info_UPackage__Script_MultiplayerFPS.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MultiplayerFPS_OnBulletHit__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MultiplayerFPS_OnDie__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MultiplayerFPS_OnDieUnreplicated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MultiplayerFPS_OnHealthChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MultiplayerFPS_OnInteract__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MultiplayerFPS_OnProjectileHit__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MultiplayerFPS_OnTakeDamage__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MultiplayerFPS",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x94185F2D,
				0xD769A9CF,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MultiplayerFPS.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MultiplayerFPS.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MultiplayerFPS(Z_Construct_UPackage__Script_MultiplayerFPS, TEXT("/Script/MultiplayerFPS"), Z_Registration_Info_UPackage__Script_MultiplayerFPS, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x94185F2D, 0xD769A9CF));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
