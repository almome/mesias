// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Entities/MqttMessage.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMqttMessage() {}

// ********** Begin Cross Module References ********************************************************
MQTTUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FMqttMessage();
UPackage* Z_Construct_UPackage__Script_MqttUtilities();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FMqttMessage ******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMqttMessage;
class UScriptStruct* FMqttMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMqttMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMqttMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMqttMessage, (UObject*)Z_Construct_UPackage__Script_MqttUtilities(), TEXT("MqttMessage"));
	}
	return Z_Registration_Info_UScriptStruct_FMqttMessage.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMqttMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Entities/MqttMessage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "Category", "MQTT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Message content. */" },
#endif
		{ "ModuleRelativePath", "Public/Entities/MqttMessage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Message content." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MessageBuffer_MetaData[] = {
		{ "Category", "MQTT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Message content buffer. */" },
#endif
		{ "ModuleRelativePath", "Public/Entities/MqttMessage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Message content buffer." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Topic_MetaData[] = {
		{ "Category", "MQTT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Message topic. */" },
#endif
		{ "ModuleRelativePath", "Public/Entities/MqttMessage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Message topic." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Retain_MetaData[] = {
		{ "Category", "MQTT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Retain flag. */" },
#endif
		{ "ModuleRelativePath", "Public/Entities/MqttMessage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retain flag." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Qos_MetaData[] = {
		{ "Category", "MQTT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Quality of signal. */" },
#endif
		{ "ModuleRelativePath", "Public/Entities/MqttMessage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Quality of signal." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MessageBuffer_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MessageBuffer;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Topic;
	static void NewProp_Retain_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Retain;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Qos;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMqttMessage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMqttMessage, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_MessageBuffer_Inner = { "MessageBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_MessageBuffer = { "MessageBuffer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMqttMessage, MessageBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MessageBuffer_MetaData), NewProp_MessageBuffer_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_Topic = { "Topic", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMqttMessage, Topic), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Topic_MetaData), NewProp_Topic_MetaData) };
void Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_Retain_SetBit(void* Obj)
{
	((FMqttMessage*)Obj)->Retain = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_Retain = { "Retain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMqttMessage), &Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_Retain_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Retain_MetaData), NewProp_Retain_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_Qos = { "Qos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMqttMessage, Qos), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Qos_MetaData), NewProp_Qos_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMqttMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_MessageBuffer_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_MessageBuffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_Topic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_Retain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_Qos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMqttMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMqttMessage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MqttUtilities,
	nullptr,
	&NewStructOps,
	"MqttMessage",
	Z_Construct_UScriptStruct_FMqttMessage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMqttMessage_Statics::PropPointers),
	sizeof(FMqttMessage),
	alignof(FMqttMessage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMqttMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMqttMessage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMqttMessage()
{
	if (!Z_Registration_Info_UScriptStruct_FMqttMessage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMqttMessage.InnerSingleton, Z_Construct_UScriptStruct_FMqttMessage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMqttMessage.InnerSingleton;
}
// ********** End ScriptStruct FMqttMessage ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Public_Entities_MqttMessage_h__Script_MqttUtilities_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMqttMessage::StaticStruct, Z_Construct_UScriptStruct_FMqttMessage_Statics::NewStructOps, TEXT("MqttMessage"), &Z_Registration_Info_UScriptStruct_FMqttMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMqttMessage), 1077422665U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Public_Entities_MqttMessage_h__Script_MqttUtilities_1352813476(TEXT("/Script/MqttUtilities"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Public_Entities_MqttMessage_h__Script_MqttUtilities_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Public_Entities_MqttMessage_h__Script_MqttUtilities_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
