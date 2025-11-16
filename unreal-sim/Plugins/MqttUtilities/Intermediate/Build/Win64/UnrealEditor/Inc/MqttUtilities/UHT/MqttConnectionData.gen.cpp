// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Entities/MqttConnectionData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMqttConnectionData() {}

// ********** Begin Cross Module References ********************************************************
MQTTUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FMqttConnectionData();
UPackage* Z_Construct_UPackage__Script_MqttUtilities();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FMqttConnectionData ***********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMqttConnectionData;
class UScriptStruct* FMqttConnectionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMqttConnectionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMqttConnectionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMqttConnectionData, (UObject*)Z_Construct_UPackage__Script_MqttUtilities(), TEXT("MqttConnectionData"));
	}
	return Z_Registration_Info_UScriptStruct_FMqttConnectionData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMqttConnectionData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Entities/MqttConnectionData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Login_MetaData[] = {
		{ "Category", "MQTT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** User login. */" },
#endif
		{ "ModuleRelativePath", "Public/Entities/MqttConnectionData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "User login." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[] = {
		{ "Category", "MQTT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** User password. */" },
#endif
		{ "ModuleRelativePath", "Public/Entities/MqttConnectionData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "User password." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Login;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMqttConnectionData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMqttConnectionData_Statics::NewProp_Login = { "Login", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMqttConnectionData, Login), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Login_MetaData), NewProp_Login_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMqttConnectionData_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMqttConnectionData, Password), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Password_MetaData), NewProp_Password_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMqttConnectionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMqttConnectionData_Statics::NewProp_Login,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMqttConnectionData_Statics::NewProp_Password,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMqttConnectionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMqttConnectionData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MqttUtilities,
	nullptr,
	&NewStructOps,
	"MqttConnectionData",
	Z_Construct_UScriptStruct_FMqttConnectionData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMqttConnectionData_Statics::PropPointers),
	sizeof(FMqttConnectionData),
	alignof(FMqttConnectionData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMqttConnectionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMqttConnectionData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMqttConnectionData()
{
	if (!Z_Registration_Info_UScriptStruct_FMqttConnectionData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMqttConnectionData.InnerSingleton, Z_Construct_UScriptStruct_FMqttConnectionData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMqttConnectionData.InnerSingleton;
}
// ********** End ScriptStruct FMqttConnectionData *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Public_Entities_MqttConnectionData_h__Script_MqttUtilities_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMqttConnectionData::StaticStruct, Z_Construct_UScriptStruct_FMqttConnectionData_Statics::NewStructOps, TEXT("MqttConnectionData"), &Z_Registration_Info_UScriptStruct_FMqttConnectionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMqttConnectionData), 3027869511U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Public_Entities_MqttConnectionData_h__Script_MqttUtilities_750095861(TEXT("/Script/MqttUtilities"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Public_Entities_MqttConnectionData_h__Script_MqttUtilities_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Public_Entities_MqttConnectionData_h__Script_MqttUtilities_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
