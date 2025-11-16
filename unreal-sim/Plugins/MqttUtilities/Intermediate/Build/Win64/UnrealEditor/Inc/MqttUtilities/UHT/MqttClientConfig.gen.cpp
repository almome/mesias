// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Entities/MqttClientConfig.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMqttClientConfig() {}

// ********** Begin Cross Module References ********************************************************
MQTTUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FMqttClientConfig();
UPackage* Z_Construct_UPackage__Script_MqttUtilities();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FMqttClientConfig *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMqttClientConfig;
class UScriptStruct* FMqttClientConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMqttClientConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMqttClientConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMqttClientConfig, (UObject*)Z_Construct_UPackage__Script_MqttUtilities(), TEXT("MqttClientConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FMqttClientConfig.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMqttClientConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Entities/MqttClientConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HostUrl_MetaData[] = {
		{ "Category", "MQTT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Host URL. */" },
#endif
		{ "ModuleRelativePath", "Public/Entities/MqttClientConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Host URL." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[] = {
		{ "Category", "MQTT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Host port. */" },
#endif
		{ "ModuleRelativePath", "Public/Entities/MqttClientConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Host port." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientId_MetaData[] = {
		{ "Category", "MQTT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Unique client identifier. */" },
#endif
		{ "ModuleRelativePath", "Public/Entities/MqttClientConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unique client identifier." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventLoopDeltaMs_MetaData[] = {
		{ "Category", "MQTT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum time between two pusblish/subscribe tasks executions expressed in miliseconds. */" },
#endif
		{ "ModuleRelativePath", "Public/Entities/MqttClientConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum time between two pusblish/subscribe tasks executions expressed in miliseconds." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_HostUrl;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ClientId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EventLoopDeltaMs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMqttClientConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_HostUrl = { "HostUrl", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMqttClientConfig, HostUrl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HostUrl_MetaData), NewProp_HostUrl_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMqttClientConfig, Port), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Port_MetaData), NewProp_Port_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_ClientId = { "ClientId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMqttClientConfig, ClientId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientId_MetaData), NewProp_ClientId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_EventLoopDeltaMs = { "EventLoopDeltaMs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMqttClientConfig, EventLoopDeltaMs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventLoopDeltaMs_MetaData), NewProp_EventLoopDeltaMs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMqttClientConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_HostUrl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_Port,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_ClientId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_EventLoopDeltaMs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMqttClientConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMqttClientConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MqttUtilities,
	nullptr,
	&NewStructOps,
	"MqttClientConfig",
	Z_Construct_UScriptStruct_FMqttClientConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMqttClientConfig_Statics::PropPointers),
	sizeof(FMqttClientConfig),
	alignof(FMqttClientConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMqttClientConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMqttClientConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMqttClientConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FMqttClientConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMqttClientConfig.InnerSingleton, Z_Construct_UScriptStruct_FMqttClientConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMqttClientConfig.InnerSingleton;
}
// ********** End ScriptStruct FMqttClientConfig ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Public_Entities_MqttClientConfig_h__Script_MqttUtilities_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMqttClientConfig::StaticStruct, Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewStructOps, TEXT("MqttClientConfig"), &Z_Registration_Info_UScriptStruct_FMqttClientConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMqttClientConfig), 2389823625U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Public_Entities_MqttClientConfig_h__Script_MqttUtilities_615986838(TEXT("/Script/MqttUtilities"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Public_Entities_MqttClientConfig_h__Script_MqttUtilities_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Public_Entities_MqttClientConfig_h__Script_MqttUtilities_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
