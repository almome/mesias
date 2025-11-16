// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MqttClientBase.h"
#include "Entities/MqttConnectionData.h"
#include "Entities/MqttMessage.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMqttClientBase() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
MQTTUTILITIES_API UClass* Z_Construct_UClass_UMqttClientBase();
MQTTUTILITIES_API UClass* Z_Construct_UClass_UMqttClientBase_NoRegister();
MQTTUTILITIES_API UClass* Z_Construct_UClass_UMqttClientInterface_NoRegister();
MQTTUTILITIES_API UFunction* Z_Construct_UDelegateFunction_MqttUtilities_OnConnectDelegate__DelegateSignature();
MQTTUTILITIES_API UFunction* Z_Construct_UDelegateFunction_MqttUtilities_OnDisconnectDelegate__DelegateSignature();
MQTTUTILITIES_API UFunction* Z_Construct_UDelegateFunction_MqttUtilities_OnMessageDelegate__DelegateSignature();
MQTTUTILITIES_API UFunction* Z_Construct_UDelegateFunction_MqttUtilities_OnMqttErrorDelegate__DelegateSignature();
MQTTUTILITIES_API UFunction* Z_Construct_UDelegateFunction_MqttUtilities_OnPublishDelegate__DelegateSignature();
MQTTUTILITIES_API UFunction* Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature();
MQTTUTILITIES_API UFunction* Z_Construct_UDelegateFunction_MqttUtilities_OnUnsubscribeDelegate__DelegateSignature();
MQTTUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FMqttConnectionData();
MQTTUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FMqttMessage();
UPackage* Z_Construct_UPackage__Script_MqttUtilities();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMqttClientBase Function Connect *****************************************
struct Z_Construct_UFunction_UMqttClientBase_Connect_Statics
{
	struct MqttClientBase_eventConnect_Parms
	{
		FMqttConnectionData connectionData;
		FScriptDelegate onConnectCallback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "ModuleRelativePath", "Private/MqttClientBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_onConnectCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_connectionData;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_onConnectCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMqttClientBase_Connect_Statics::NewProp_connectionData = { "connectionData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MqttClientBase_eventConnect_Parms, connectionData), Z_Construct_UScriptStruct_FMqttConnectionData, METADATA_PARAMS(0, nullptr) }; // 3027869511
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMqttClientBase_Connect_Statics::NewProp_onConnectCallback = { "onConnectCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MqttClientBase_eventConnect_Parms, onConnectCallback), Z_Construct_UDelegateFunction_MqttUtilities_OnConnectDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_onConnectCallback_MetaData), NewProp_onConnectCallback_MetaData) }; // 1384427851
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientBase_Connect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientBase_Connect_Statics::NewProp_connectionData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientBase_Connect_Statics::NewProp_onConnectCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_Connect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientBase_Connect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMqttClientBase, nullptr, "Connect", Z_Construct_UFunction_UMqttClientBase_Connect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_Connect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMqttClientBase_Connect_Statics::MqttClientBase_eventConnect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_Connect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMqttClientBase_Connect_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMqttClientBase_Connect_Statics::MqttClientBase_eventConnect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMqttClientBase_Connect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMqttClientBase_Connect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMqttClientBase::execConnect)
{
	P_GET_STRUCT(FMqttConnectionData,Z_Param_connectionData);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onConnectCallback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Connect(Z_Param_connectionData,FOnConnectDelegate(Z_Param_Out_onConnectCallback));
	P_NATIVE_END;
}
// ********** End Class UMqttClientBase Function Connect *******************************************

// ********** Begin Class UMqttClientBase Function Disconnect **************************************
struct Z_Construct_UFunction_UMqttClientBase_Disconnect_Statics
{
	struct MqttClientBase_eventDisconnect_Parms
	{
		FScriptDelegate onDisconnectCallback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "ModuleRelativePath", "Private/MqttClientBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_onDisconnectCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_onDisconnectCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMqttClientBase_Disconnect_Statics::NewProp_onDisconnectCallback = { "onDisconnectCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MqttClientBase_eventDisconnect_Parms, onDisconnectCallback), Z_Construct_UDelegateFunction_MqttUtilities_OnDisconnectDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_onDisconnectCallback_MetaData), NewProp_onDisconnectCallback_MetaData) }; // 1400861111
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientBase_Disconnect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientBase_Disconnect_Statics::NewProp_onDisconnectCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_Disconnect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientBase_Disconnect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMqttClientBase, nullptr, "Disconnect", Z_Construct_UFunction_UMqttClientBase_Disconnect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_Disconnect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMqttClientBase_Disconnect_Statics::MqttClientBase_eventDisconnect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_Disconnect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMqttClientBase_Disconnect_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMqttClientBase_Disconnect_Statics::MqttClientBase_eventDisconnect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMqttClientBase_Disconnect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMqttClientBase_Disconnect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMqttClientBase::execDisconnect)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onDisconnectCallback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Disconnect(FOnDisconnectDelegate(Z_Param_Out_onDisconnectCallback));
	P_NATIVE_END;
}
// ********** End Class UMqttClientBase Function Disconnect ****************************************

// ********** Begin Class UMqttClientBase Function Publish *****************************************
struct Z_Construct_UFunction_UMqttClientBase_Publish_Statics
{
	struct MqttClientBase_eventPublish_Parms
	{
		FMqttMessage message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "ModuleRelativePath", "Private/MqttClientBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMqttClientBase_Publish_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MqttClientBase_eventPublish_Parms, message), Z_Construct_UScriptStruct_FMqttMessage, METADATA_PARAMS(0, nullptr) }; // 1077422665
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientBase_Publish_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientBase_Publish_Statics::NewProp_message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_Publish_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientBase_Publish_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMqttClientBase, nullptr, "Publish", Z_Construct_UFunction_UMqttClientBase_Publish_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_Publish_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMqttClientBase_Publish_Statics::MqttClientBase_eventPublish_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_Publish_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMqttClientBase_Publish_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMqttClientBase_Publish_Statics::MqttClientBase_eventPublish_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMqttClientBase_Publish()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMqttClientBase_Publish_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMqttClientBase::execPublish)
{
	P_GET_STRUCT(FMqttMessage,Z_Param_message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Publish(Z_Param_message);
	P_NATIVE_END;
}
// ********** End Class UMqttClientBase Function Publish *******************************************

// ********** Begin Class UMqttClientBase Function SetOnErrorHandler *******************************
struct Z_Construct_UFunction_UMqttClientBase_SetOnErrorHandler_Statics
{
	struct MqttClientBase_eventSetOnErrorHandler_Parms
	{
		FScriptDelegate onErrorCallback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "ModuleRelativePath", "Private/MqttClientBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_onErrorCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_onErrorCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMqttClientBase_SetOnErrorHandler_Statics::NewProp_onErrorCallback = { "onErrorCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MqttClientBase_eventSetOnErrorHandler_Parms, onErrorCallback), Z_Construct_UDelegateFunction_MqttUtilities_OnMqttErrorDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_onErrorCallback_MetaData), NewProp_onErrorCallback_MetaData) }; // 2311049145
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientBase_SetOnErrorHandler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientBase_SetOnErrorHandler_Statics::NewProp_onErrorCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_SetOnErrorHandler_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientBase_SetOnErrorHandler_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMqttClientBase, nullptr, "SetOnErrorHandler", Z_Construct_UFunction_UMqttClientBase_SetOnErrorHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_SetOnErrorHandler_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMqttClientBase_SetOnErrorHandler_Statics::MqttClientBase_eventSetOnErrorHandler_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_SetOnErrorHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMqttClientBase_SetOnErrorHandler_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMqttClientBase_SetOnErrorHandler_Statics::MqttClientBase_eventSetOnErrorHandler_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMqttClientBase_SetOnErrorHandler()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMqttClientBase_SetOnErrorHandler_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMqttClientBase::execSetOnErrorHandler)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onErrorCallback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOnErrorHandler(FOnMqttErrorDelegate(Z_Param_Out_onErrorCallback));
	P_NATIVE_END;
}
// ********** End Class UMqttClientBase Function SetOnErrorHandler *********************************

// ********** Begin Class UMqttClientBase Function SetOnMessageHandler *****************************
struct Z_Construct_UFunction_UMqttClientBase_SetOnMessageHandler_Statics
{
	struct MqttClientBase_eventSetOnMessageHandler_Parms
	{
		FScriptDelegate onMessageCallback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "ModuleRelativePath", "Private/MqttClientBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_onMessageCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_onMessageCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMqttClientBase_SetOnMessageHandler_Statics::NewProp_onMessageCallback = { "onMessageCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MqttClientBase_eventSetOnMessageHandler_Parms, onMessageCallback), Z_Construct_UDelegateFunction_MqttUtilities_OnMessageDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_onMessageCallback_MetaData), NewProp_onMessageCallback_MetaData) }; // 1858768352
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientBase_SetOnMessageHandler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientBase_SetOnMessageHandler_Statics::NewProp_onMessageCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_SetOnMessageHandler_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientBase_SetOnMessageHandler_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMqttClientBase, nullptr, "SetOnMessageHandler", Z_Construct_UFunction_UMqttClientBase_SetOnMessageHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_SetOnMessageHandler_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMqttClientBase_SetOnMessageHandler_Statics::MqttClientBase_eventSetOnMessageHandler_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_SetOnMessageHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMqttClientBase_SetOnMessageHandler_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMqttClientBase_SetOnMessageHandler_Statics::MqttClientBase_eventSetOnMessageHandler_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMqttClientBase_SetOnMessageHandler()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMqttClientBase_SetOnMessageHandler_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMqttClientBase::execSetOnMessageHandler)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onMessageCallback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOnMessageHandler(FOnMessageDelegate(Z_Param_Out_onMessageCallback));
	P_NATIVE_END;
}
// ********** End Class UMqttClientBase Function SetOnMessageHandler *******************************

// ********** Begin Class UMqttClientBase Function SetOnPublishHandler *****************************
struct Z_Construct_UFunction_UMqttClientBase_SetOnPublishHandler_Statics
{
	struct MqttClientBase_eventSetOnPublishHandler_Parms
	{
		FScriptDelegate onPublishCallback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "ModuleRelativePath", "Private/MqttClientBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_onPublishCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_onPublishCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMqttClientBase_SetOnPublishHandler_Statics::NewProp_onPublishCallback = { "onPublishCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MqttClientBase_eventSetOnPublishHandler_Parms, onPublishCallback), Z_Construct_UDelegateFunction_MqttUtilities_OnPublishDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_onPublishCallback_MetaData), NewProp_onPublishCallback_MetaData) }; // 2326558989
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientBase_SetOnPublishHandler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientBase_SetOnPublishHandler_Statics::NewProp_onPublishCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_SetOnPublishHandler_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientBase_SetOnPublishHandler_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMqttClientBase, nullptr, "SetOnPublishHandler", Z_Construct_UFunction_UMqttClientBase_SetOnPublishHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_SetOnPublishHandler_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMqttClientBase_SetOnPublishHandler_Statics::MqttClientBase_eventSetOnPublishHandler_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_SetOnPublishHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMqttClientBase_SetOnPublishHandler_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMqttClientBase_SetOnPublishHandler_Statics::MqttClientBase_eventSetOnPublishHandler_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMqttClientBase_SetOnPublishHandler()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMqttClientBase_SetOnPublishHandler_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMqttClientBase::execSetOnPublishHandler)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onPublishCallback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOnPublishHandler(FOnPublishDelegate(Z_Param_Out_onPublishCallback));
	P_NATIVE_END;
}
// ********** End Class UMqttClientBase Function SetOnPublishHandler *******************************

// ********** Begin Class UMqttClientBase Function SetOnSubscribeHandler ***************************
struct Z_Construct_UFunction_UMqttClientBase_SetOnSubscribeHandler_Statics
{
	struct MqttClientBase_eventSetOnSubscribeHandler_Parms
	{
		FScriptDelegate onSubscribeCallback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "ModuleRelativePath", "Private/MqttClientBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_onSubscribeCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_onSubscribeCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMqttClientBase_SetOnSubscribeHandler_Statics::NewProp_onSubscribeCallback = { "onSubscribeCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MqttClientBase_eventSetOnSubscribeHandler_Parms, onSubscribeCallback), Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_onSubscribeCallback_MetaData), NewProp_onSubscribeCallback_MetaData) }; // 437514043
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientBase_SetOnSubscribeHandler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientBase_SetOnSubscribeHandler_Statics::NewProp_onSubscribeCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_SetOnSubscribeHandler_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientBase_SetOnSubscribeHandler_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMqttClientBase, nullptr, "SetOnSubscribeHandler", Z_Construct_UFunction_UMqttClientBase_SetOnSubscribeHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_SetOnSubscribeHandler_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMqttClientBase_SetOnSubscribeHandler_Statics::MqttClientBase_eventSetOnSubscribeHandler_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_SetOnSubscribeHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMqttClientBase_SetOnSubscribeHandler_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMqttClientBase_SetOnSubscribeHandler_Statics::MqttClientBase_eventSetOnSubscribeHandler_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMqttClientBase_SetOnSubscribeHandler()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMqttClientBase_SetOnSubscribeHandler_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMqttClientBase::execSetOnSubscribeHandler)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onSubscribeCallback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOnSubscribeHandler(FOnSubscribeDelegate(Z_Param_Out_onSubscribeCallback));
	P_NATIVE_END;
}
// ********** End Class UMqttClientBase Function SetOnSubscribeHandler *****************************

// ********** Begin Class UMqttClientBase Function SetOnUnsubscribeHandler *************************
struct Z_Construct_UFunction_UMqttClientBase_SetOnUnsubscribeHandler_Statics
{
	struct MqttClientBase_eventSetOnUnsubscribeHandler_Parms
	{
		FScriptDelegate onUnsubscribeCallback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "ModuleRelativePath", "Private/MqttClientBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_onUnsubscribeCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_onUnsubscribeCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMqttClientBase_SetOnUnsubscribeHandler_Statics::NewProp_onUnsubscribeCallback = { "onUnsubscribeCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MqttClientBase_eventSetOnUnsubscribeHandler_Parms, onUnsubscribeCallback), Z_Construct_UDelegateFunction_MqttUtilities_OnUnsubscribeDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_onUnsubscribeCallback_MetaData), NewProp_onUnsubscribeCallback_MetaData) }; // 2234099260
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientBase_SetOnUnsubscribeHandler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientBase_SetOnUnsubscribeHandler_Statics::NewProp_onUnsubscribeCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_SetOnUnsubscribeHandler_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientBase_SetOnUnsubscribeHandler_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMqttClientBase, nullptr, "SetOnUnsubscribeHandler", Z_Construct_UFunction_UMqttClientBase_SetOnUnsubscribeHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_SetOnUnsubscribeHandler_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMqttClientBase_SetOnUnsubscribeHandler_Statics::MqttClientBase_eventSetOnUnsubscribeHandler_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_SetOnUnsubscribeHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMqttClientBase_SetOnUnsubscribeHandler_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMqttClientBase_SetOnUnsubscribeHandler_Statics::MqttClientBase_eventSetOnUnsubscribeHandler_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMqttClientBase_SetOnUnsubscribeHandler()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMqttClientBase_SetOnUnsubscribeHandler_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMqttClientBase::execSetOnUnsubscribeHandler)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onUnsubscribeCallback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOnUnsubscribeHandler(FOnUnsubscribeDelegate(Z_Param_Out_onUnsubscribeCallback));
	P_NATIVE_END;
}
// ********** End Class UMqttClientBase Function SetOnUnsubscribeHandler ***************************

// ********** Begin Class UMqttClientBase Function Subscribe ***************************************
struct Z_Construct_UFunction_UMqttClientBase_Subscribe_Statics
{
	struct MqttClientBase_eventSubscribe_Parms
	{
		FString topic;
		int32 qos;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "ModuleRelativePath", "Private/MqttClientBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_topic;
	static const UECodeGen_Private::FIntPropertyParams NewProp_qos;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMqttClientBase_Subscribe_Statics::NewProp_topic = { "topic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MqttClientBase_eventSubscribe_Parms, topic), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMqttClientBase_Subscribe_Statics::NewProp_qos = { "qos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MqttClientBase_eventSubscribe_Parms, qos), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientBase_Subscribe_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientBase_Subscribe_Statics::NewProp_topic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientBase_Subscribe_Statics::NewProp_qos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_Subscribe_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientBase_Subscribe_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMqttClientBase, nullptr, "Subscribe", Z_Construct_UFunction_UMqttClientBase_Subscribe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_Subscribe_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMqttClientBase_Subscribe_Statics::MqttClientBase_eventSubscribe_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_Subscribe_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMqttClientBase_Subscribe_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMqttClientBase_Subscribe_Statics::MqttClientBase_eventSubscribe_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMqttClientBase_Subscribe()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMqttClientBase_Subscribe_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMqttClientBase::execSubscribe)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_topic);
	P_GET_PROPERTY(FIntProperty,Z_Param_qos);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Subscribe(Z_Param_topic,Z_Param_qos);
	P_NATIVE_END;
}
// ********** End Class UMqttClientBase Function Subscribe *****************************************

// ********** Begin Class UMqttClientBase Function Unsubscribe *************************************
struct Z_Construct_UFunction_UMqttClientBase_Unsubscribe_Statics
{
	struct MqttClientBase_eventUnsubscribe_Parms
	{
		FString topic;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "ModuleRelativePath", "Private/MqttClientBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_topic;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMqttClientBase_Unsubscribe_Statics::NewProp_topic = { "topic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MqttClientBase_eventUnsubscribe_Parms, topic), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientBase_Unsubscribe_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientBase_Unsubscribe_Statics::NewProp_topic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_Unsubscribe_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientBase_Unsubscribe_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMqttClientBase, nullptr, "Unsubscribe", Z_Construct_UFunction_UMqttClientBase_Unsubscribe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_Unsubscribe_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMqttClientBase_Unsubscribe_Statics::MqttClientBase_eventUnsubscribe_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_Unsubscribe_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMqttClientBase_Unsubscribe_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMqttClientBase_Unsubscribe_Statics::MqttClientBase_eventUnsubscribe_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMqttClientBase_Unsubscribe()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMqttClientBase_Unsubscribe_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMqttClientBase::execUnsubscribe)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_topic);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Unsubscribe(Z_Param_topic);
	P_NATIVE_END;
}
// ********** End Class UMqttClientBase Function Unsubscribe ***************************************

// ********** Begin Class UMqttClientBase **********************************************************
void UMqttClientBase::StaticRegisterNativesUMqttClientBase()
{
	UClass* Class = UMqttClientBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Connect", &UMqttClientBase::execConnect },
		{ "Disconnect", &UMqttClientBase::execDisconnect },
		{ "Publish", &UMqttClientBase::execPublish },
		{ "SetOnErrorHandler", &UMqttClientBase::execSetOnErrorHandler },
		{ "SetOnMessageHandler", &UMqttClientBase::execSetOnMessageHandler },
		{ "SetOnPublishHandler", &UMqttClientBase::execSetOnPublishHandler },
		{ "SetOnSubscribeHandler", &UMqttClientBase::execSetOnSubscribeHandler },
		{ "SetOnUnsubscribeHandler", &UMqttClientBase::execSetOnUnsubscribeHandler },
		{ "Subscribe", &UMqttClientBase::execSubscribe },
		{ "Unsubscribe", &UMqttClientBase::execUnsubscribe },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMqttClientBase;
UClass* UMqttClientBase::GetPrivateStaticClass()
{
	using TClass = UMqttClientBase;
	if (!Z_Registration_Info_UClass_UMqttClientBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MqttClientBase"),
			Z_Registration_Info_UClass_UMqttClientBase.InnerSingleton,
			StaticRegisterNativesUMqttClientBase,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UMqttClientBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UMqttClientBase_NoRegister()
{
	return UMqttClientBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMqttClientBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MqttClientBase.h" },
		{ "ModuleRelativePath", "Private/MqttClientBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnConnectDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Private/MqttClientBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDisconnectDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Private/MqttClientBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPublishDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Private/MqttClientBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMessageDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Private/MqttClientBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSubscribeDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Private/MqttClientBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnUnsubscribeDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Private/MqttClientBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnErrorDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Private/MqttClientBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnConnectDelegate;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnDisconnectDelegate;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnPublishDelegate;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnMessageDelegate;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSubscribeDelegate;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnUnsubscribeDelegate;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnErrorDelegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMqttClientBase_Connect, "Connect" }, // 2182783212
		{ &Z_Construct_UFunction_UMqttClientBase_Disconnect, "Disconnect" }, // 4075035626
		{ &Z_Construct_UFunction_UMqttClientBase_Publish, "Publish" }, // 2244384659
		{ &Z_Construct_UFunction_UMqttClientBase_SetOnErrorHandler, "SetOnErrorHandler" }, // 1255000115
		{ &Z_Construct_UFunction_UMqttClientBase_SetOnMessageHandler, "SetOnMessageHandler" }, // 1385153236
		{ &Z_Construct_UFunction_UMqttClientBase_SetOnPublishHandler, "SetOnPublishHandler" }, // 3190036363
		{ &Z_Construct_UFunction_UMqttClientBase_SetOnSubscribeHandler, "SetOnSubscribeHandler" }, // 4177162673
		{ &Z_Construct_UFunction_UMqttClientBase_SetOnUnsubscribeHandler, "SetOnUnsubscribeHandler" }, // 1541762515
		{ &Z_Construct_UFunction_UMqttClientBase_Subscribe, "Subscribe" }, // 1474666587
		{ &Z_Construct_UFunction_UMqttClientBase_Unsubscribe, "Unsubscribe" }, // 2416172262
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMqttClientBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnConnectDelegate = { "OnConnectDelegate", nullptr, (EPropertyFlags)0x0020080000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMqttClientBase, OnConnectDelegate), Z_Construct_UDelegateFunction_MqttUtilities_OnConnectDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnConnectDelegate_MetaData), NewProp_OnConnectDelegate_MetaData) }; // 1384427851
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnDisconnectDelegate = { "OnDisconnectDelegate", nullptr, (EPropertyFlags)0x0020080000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMqttClientBase, OnDisconnectDelegate), Z_Construct_UDelegateFunction_MqttUtilities_OnDisconnectDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDisconnectDelegate_MetaData), NewProp_OnDisconnectDelegate_MetaData) }; // 1400861111
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnPublishDelegate = { "OnPublishDelegate", nullptr, (EPropertyFlags)0x0020080000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMqttClientBase, OnPublishDelegate), Z_Construct_UDelegateFunction_MqttUtilities_OnPublishDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPublishDelegate_MetaData), NewProp_OnPublishDelegate_MetaData) }; // 2326558989
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnMessageDelegate = { "OnMessageDelegate", nullptr, (EPropertyFlags)0x0020080000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMqttClientBase, OnMessageDelegate), Z_Construct_UDelegateFunction_MqttUtilities_OnMessageDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMessageDelegate_MetaData), NewProp_OnMessageDelegate_MetaData) }; // 1858768352
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnSubscribeDelegate = { "OnSubscribeDelegate", nullptr, (EPropertyFlags)0x0020080000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMqttClientBase, OnSubscribeDelegate), Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSubscribeDelegate_MetaData), NewProp_OnSubscribeDelegate_MetaData) }; // 437514043
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnUnsubscribeDelegate = { "OnUnsubscribeDelegate", nullptr, (EPropertyFlags)0x0020080000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMqttClientBase, OnUnsubscribeDelegate), Z_Construct_UDelegateFunction_MqttUtilities_OnUnsubscribeDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnUnsubscribeDelegate_MetaData), NewProp_OnUnsubscribeDelegate_MetaData) }; // 2234099260
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnErrorDelegate = { "OnErrorDelegate", nullptr, (EPropertyFlags)0x0020080000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMqttClientBase, OnErrorDelegate), Z_Construct_UDelegateFunction_MqttUtilities_OnMqttErrorDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnErrorDelegate_MetaData), NewProp_OnErrorDelegate_MetaData) }; // 2311049145
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMqttClientBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnConnectDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnDisconnectDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnPublishDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnMessageDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnSubscribeDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnUnsubscribeDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnErrorDelegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMqttClientBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMqttClientBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MqttUtilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMqttClientBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMqttClientBase_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMqttClientInterface_NoRegister, (int32)VTABLE_OFFSET(UMqttClientBase, IMqttClientInterface), false },  // 564653939
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMqttClientBase_Statics::ClassParams = {
	&UMqttClientBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMqttClientBase_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMqttClientBase_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMqttClientBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UMqttClientBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMqttClientBase()
{
	if (!Z_Registration_Info_UClass_UMqttClientBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMqttClientBase.OuterSingleton, Z_Construct_UClass_UMqttClientBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMqttClientBase.OuterSingleton;
}
UMqttClientBase::UMqttClientBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMqttClientBase);
// ********** End Class UMqttClientBase ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Private_MqttClientBase_h__Script_MqttUtilities_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMqttClientBase, UMqttClientBase::StaticClass, TEXT("UMqttClientBase"), &Z_Registration_Info_UClass_UMqttClientBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMqttClientBase), 3598476620U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Private_MqttClientBase_h__Script_MqttUtilities_3368974396(TEXT("/Script/MqttUtilities"),
	Z_CompiledInDeferFile_FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Private_MqttClientBase_h__Script_MqttUtilities_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Private_MqttClientBase_h__Script_MqttUtilities_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
