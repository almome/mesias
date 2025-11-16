// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interface/MqttClientInterface.h"
#include "Entities/MqttConnectionData.h"
#include "Entities/MqttMessage.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMqttClientInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
MQTTUTILITIES_API UClass* Z_Construct_UClass_UMqttClientInterface();
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

// ********** Begin Delegate FOnConnectDelegate ****************************************************
struct Z_Construct_UDelegateFunction_MqttUtilities_OnConnectDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/MqttClientInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_MqttUtilities_OnConnectDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_MqttUtilities, nullptr, "OnConnectDelegate__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MqttUtilities_OnConnectDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MqttUtilities_OnConnectDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_MqttUtilities_OnConnectDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MqttUtilities_OnConnectDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnConnectDelegate_DelegateWrapper(const FScriptDelegate& OnConnectDelegate)
{
	OnConnectDelegate.ProcessDelegate<UObject>(NULL);
}
// ********** End Delegate FOnConnectDelegate ******************************************************

// ********** Begin Delegate FOnDisconnectDelegate *************************************************
struct Z_Construct_UDelegateFunction_MqttUtilities_OnDisconnectDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/MqttClientInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_MqttUtilities_OnDisconnectDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_MqttUtilities, nullptr, "OnDisconnectDelegate__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MqttUtilities_OnDisconnectDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MqttUtilities_OnDisconnectDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_MqttUtilities_OnDisconnectDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MqttUtilities_OnDisconnectDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDisconnectDelegate_DelegateWrapper(const FScriptDelegate& OnDisconnectDelegate)
{
	OnDisconnectDelegate.ProcessDelegate<UObject>(NULL);
}
// ********** End Delegate FOnDisconnectDelegate ***************************************************

// ********** Begin Delegate FOnPublishDelegate ****************************************************
struct Z_Construct_UDelegateFunction_MqttUtilities_OnPublishDelegate__DelegateSignature_Statics
{
	struct _Script_MqttUtilities_eventOnPublishDelegate_Parms
	{
		int32 mid;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/MqttClientInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_mid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_MqttUtilities_OnPublishDelegate__DelegateSignature_Statics::NewProp_mid = { "mid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MqttUtilities_eventOnPublishDelegate_Parms, mid), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MqttUtilities_OnPublishDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MqttUtilities_OnPublishDelegate__DelegateSignature_Statics::NewProp_mid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MqttUtilities_OnPublishDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_MqttUtilities_OnPublishDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_MqttUtilities, nullptr, "OnPublishDelegate__DelegateSignature", Z_Construct_UDelegateFunction_MqttUtilities_OnPublishDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MqttUtilities_OnPublishDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MqttUtilities_OnPublishDelegate__DelegateSignature_Statics::_Script_MqttUtilities_eventOnPublishDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MqttUtilities_OnPublishDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MqttUtilities_OnPublishDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_MqttUtilities_OnPublishDelegate__DelegateSignature_Statics::_Script_MqttUtilities_eventOnPublishDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MqttUtilities_OnPublishDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MqttUtilities_OnPublishDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPublishDelegate_DelegateWrapper(const FScriptDelegate& OnPublishDelegate, int32 mid)
{
	struct _Script_MqttUtilities_eventOnPublishDelegate_Parms
	{
		int32 mid;
	};
	_Script_MqttUtilities_eventOnPublishDelegate_Parms Parms;
	Parms.mid=mid;
	OnPublishDelegate.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnPublishDelegate ******************************************************

// ********** Begin Delegate FOnMessageDelegate ****************************************************
struct Z_Construct_UDelegateFunction_MqttUtilities_OnMessageDelegate__DelegateSignature_Statics
{
	struct _Script_MqttUtilities_eventOnMessageDelegate_Parms
	{
		FMqttMessage message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/MqttClientInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MqttUtilities_OnMessageDelegate__DelegateSignature_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MqttUtilities_eventOnMessageDelegate_Parms, message), Z_Construct_UScriptStruct_FMqttMessage, METADATA_PARAMS(0, nullptr) }; // 1077422665
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MqttUtilities_OnMessageDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MqttUtilities_OnMessageDelegate__DelegateSignature_Statics::NewProp_message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MqttUtilities_OnMessageDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_MqttUtilities_OnMessageDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_MqttUtilities, nullptr, "OnMessageDelegate__DelegateSignature", Z_Construct_UDelegateFunction_MqttUtilities_OnMessageDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MqttUtilities_OnMessageDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MqttUtilities_OnMessageDelegate__DelegateSignature_Statics::_Script_MqttUtilities_eventOnMessageDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MqttUtilities_OnMessageDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MqttUtilities_OnMessageDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_MqttUtilities_OnMessageDelegate__DelegateSignature_Statics::_Script_MqttUtilities_eventOnMessageDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MqttUtilities_OnMessageDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MqttUtilities_OnMessageDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMessageDelegate_DelegateWrapper(const FScriptDelegate& OnMessageDelegate, FMqttMessage message)
{
	struct _Script_MqttUtilities_eventOnMessageDelegate_Parms
	{
		FMqttMessage message;
	};
	_Script_MqttUtilities_eventOnMessageDelegate_Parms Parms;
	Parms.message=message;
	OnMessageDelegate.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnMessageDelegate ******************************************************

// ********** Begin Delegate FOnSubscribeDelegate **************************************************
struct Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature_Statics
{
	struct _Script_MqttUtilities_eventOnSubscribeDelegate_Parms
	{
		int32 mid;
		TArray<int32> qos;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/MqttClientInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_qos_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_mid;
	static const UECodeGen_Private::FIntPropertyParams NewProp_qos_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_qos;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature_Statics::NewProp_mid = { "mid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MqttUtilities_eventOnSubscribeDelegate_Parms, mid), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature_Statics::NewProp_qos_Inner = { "qos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature_Statics::NewProp_qos = { "qos", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MqttUtilities_eventOnSubscribeDelegate_Parms, qos), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_qos_MetaData), NewProp_qos_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature_Statics::NewProp_mid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature_Statics::NewProp_qos_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature_Statics::NewProp_qos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_MqttUtilities, nullptr, "OnSubscribeDelegate__DelegateSignature", Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature_Statics::_Script_MqttUtilities_eventOnSubscribeDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00520000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature_Statics::_Script_MqttUtilities_eventOnSubscribeDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSubscribeDelegate_DelegateWrapper(const FScriptDelegate& OnSubscribeDelegate, int32 mid, TArray<int32> const& qos)
{
	struct _Script_MqttUtilities_eventOnSubscribeDelegate_Parms
	{
		int32 mid;
		TArray<int32> qos;
	};
	_Script_MqttUtilities_eventOnSubscribeDelegate_Parms Parms;
	Parms.mid=mid;
	Parms.qos=qos;
	OnSubscribeDelegate.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnSubscribeDelegate ****************************************************

// ********** Begin Delegate FOnUnsubscribeDelegate ************************************************
struct Z_Construct_UDelegateFunction_MqttUtilities_OnUnsubscribeDelegate__DelegateSignature_Statics
{
	struct _Script_MqttUtilities_eventOnUnsubscribeDelegate_Parms
	{
		int32 mid;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/MqttClientInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_mid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_MqttUtilities_OnUnsubscribeDelegate__DelegateSignature_Statics::NewProp_mid = { "mid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MqttUtilities_eventOnUnsubscribeDelegate_Parms, mid), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MqttUtilities_OnUnsubscribeDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MqttUtilities_OnUnsubscribeDelegate__DelegateSignature_Statics::NewProp_mid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MqttUtilities_OnUnsubscribeDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_MqttUtilities_OnUnsubscribeDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_MqttUtilities, nullptr, "OnUnsubscribeDelegate__DelegateSignature", Z_Construct_UDelegateFunction_MqttUtilities_OnUnsubscribeDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MqttUtilities_OnUnsubscribeDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MqttUtilities_OnUnsubscribeDelegate__DelegateSignature_Statics::_Script_MqttUtilities_eventOnUnsubscribeDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MqttUtilities_OnUnsubscribeDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MqttUtilities_OnUnsubscribeDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_MqttUtilities_OnUnsubscribeDelegate__DelegateSignature_Statics::_Script_MqttUtilities_eventOnUnsubscribeDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MqttUtilities_OnUnsubscribeDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MqttUtilities_OnUnsubscribeDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnUnsubscribeDelegate_DelegateWrapper(const FScriptDelegate& OnUnsubscribeDelegate, int32 mid)
{
	struct _Script_MqttUtilities_eventOnUnsubscribeDelegate_Parms
	{
		int32 mid;
	};
	_Script_MqttUtilities_eventOnUnsubscribeDelegate_Parms Parms;
	Parms.mid=mid;
	OnUnsubscribeDelegate.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnUnsubscribeDelegate **************************************************

// ********** Begin Delegate FOnMqttErrorDelegate **************************************************
struct Z_Construct_UDelegateFunction_MqttUtilities_OnMqttErrorDelegate__DelegateSignature_Statics
{
	struct _Script_MqttUtilities_eventOnMqttErrorDelegate_Parms
	{
		int32 code;
		FString message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/MqttClientInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_code;
	static const UECodeGen_Private::FStrPropertyParams NewProp_message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_MqttUtilities_OnMqttErrorDelegate__DelegateSignature_Statics::NewProp_code = { "code", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MqttUtilities_eventOnMqttErrorDelegate_Parms, code), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_MqttUtilities_OnMqttErrorDelegate__DelegateSignature_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MqttUtilities_eventOnMqttErrorDelegate_Parms, message), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MqttUtilities_OnMqttErrorDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MqttUtilities_OnMqttErrorDelegate__DelegateSignature_Statics::NewProp_code,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MqttUtilities_OnMqttErrorDelegate__DelegateSignature_Statics::NewProp_message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MqttUtilities_OnMqttErrorDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_MqttUtilities_OnMqttErrorDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_MqttUtilities, nullptr, "OnMqttErrorDelegate__DelegateSignature", Z_Construct_UDelegateFunction_MqttUtilities_OnMqttErrorDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MqttUtilities_OnMqttErrorDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MqttUtilities_OnMqttErrorDelegate__DelegateSignature_Statics::_Script_MqttUtilities_eventOnMqttErrorDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MqttUtilities_OnMqttErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MqttUtilities_OnMqttErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_MqttUtilities_OnMqttErrorDelegate__DelegateSignature_Statics::_Script_MqttUtilities_eventOnMqttErrorDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MqttUtilities_OnMqttErrorDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MqttUtilities_OnMqttErrorDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMqttErrorDelegate_DelegateWrapper(const FScriptDelegate& OnMqttErrorDelegate, int32 code, const FString& message)
{
	struct _Script_MqttUtilities_eventOnMqttErrorDelegate_Parms
	{
		int32 code;
		FString message;
	};
	_Script_MqttUtilities_eventOnMqttErrorDelegate_Parms Parms;
	Parms.code=code;
	Parms.message=message;
	OnMqttErrorDelegate.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnMqttErrorDelegate ****************************************************

// ********** Begin Interface UMqttClientInterface Function Connect ********************************
struct Z_Construct_UFunction_UMqttClientInterface_Connect_Statics
{
	struct MqttClientInterface_eventConnect_Parms
	{
		FMqttConnectionData connectionData;
		FScriptDelegate onConnectCallback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Connect to MQTT broker\n\x09 * @param connectionData - structure with data required to connect to MQTT broker (host url, port, client id etc.)\n\x09 * @param onConnectCallback - callback function handler triigered after client successfully established connection with MQTT broker \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interface/MqttClientInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Connect to MQTT broker\n@param connectionData - structure with data required to connect to MQTT broker (host url, port, client id etc.)\n@param onConnectCallback - callback function handler triigered after client successfully established connection with MQTT broker" },
#endif
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMqttClientInterface_Connect_Statics::NewProp_connectionData = { "connectionData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MqttClientInterface_eventConnect_Parms, connectionData), Z_Construct_UScriptStruct_FMqttConnectionData, METADATA_PARAMS(0, nullptr) }; // 3027869511
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMqttClientInterface_Connect_Statics::NewProp_onConnectCallback = { "onConnectCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MqttClientInterface_eventConnect_Parms, onConnectCallback), Z_Construct_UDelegateFunction_MqttUtilities_OnConnectDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_onConnectCallback_MetaData), NewProp_onConnectCallback_MetaData) }; // 1384427851
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientInterface_Connect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientInterface_Connect_Statics::NewProp_connectionData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientInterface_Connect_Statics::NewProp_onConnectCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_Connect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientInterface_Connect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMqttClientInterface, nullptr, "Connect", Z_Construct_UFunction_UMqttClientInterface_Connect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_Connect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMqttClientInterface_Connect_Statics::MqttClientInterface_eventConnect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_Connect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMqttClientInterface_Connect_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMqttClientInterface_Connect_Statics::MqttClientInterface_eventConnect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMqttClientInterface_Connect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMqttClientInterface_Connect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMqttClientInterface::execConnect)
{
	P_GET_STRUCT(FMqttConnectionData,Z_Param_connectionData);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onConnectCallback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Connect(Z_Param_connectionData,FOnConnectDelegate(Z_Param_Out_onConnectCallback));
	P_NATIVE_END;
}
// ********** End Interface UMqttClientInterface Function Connect **********************************

// ********** Begin Interface UMqttClientInterface Function Disconnect *****************************
struct Z_Construct_UFunction_UMqttClientInterface_Disconnect_Statics
{
	struct MqttClientInterface_eventDisconnect_Parms
	{
		FScriptDelegate onDisconnectCallback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Disconnect from MQTT broker\n\x09 * @param onDisconnectCallback - callback function handler triigered after client was disconnected from MQTT broker\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interface/MqttClientInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Disconnect from MQTT broker\n@param onDisconnectCallback - callback function handler triigered after client was disconnected from MQTT broker" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_onDisconnectCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_onDisconnectCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMqttClientInterface_Disconnect_Statics::NewProp_onDisconnectCallback = { "onDisconnectCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MqttClientInterface_eventDisconnect_Parms, onDisconnectCallback), Z_Construct_UDelegateFunction_MqttUtilities_OnDisconnectDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_onDisconnectCallback_MetaData), NewProp_onDisconnectCallback_MetaData) }; // 1400861111
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientInterface_Disconnect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientInterface_Disconnect_Statics::NewProp_onDisconnectCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_Disconnect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientInterface_Disconnect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMqttClientInterface, nullptr, "Disconnect", Z_Construct_UFunction_UMqttClientInterface_Disconnect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_Disconnect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMqttClientInterface_Disconnect_Statics::MqttClientInterface_eventDisconnect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_Disconnect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMqttClientInterface_Disconnect_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMqttClientInterface_Disconnect_Statics::MqttClientInterface_eventDisconnect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMqttClientInterface_Disconnect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMqttClientInterface_Disconnect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMqttClientInterface::execDisconnect)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onDisconnectCallback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Disconnect(FOnDisconnectDelegate(Z_Param_Out_onDisconnectCallback));
	P_NATIVE_END;
}
// ********** End Interface UMqttClientInterface Function Disconnect *******************************

// ********** Begin Interface UMqttClientInterface Function Publish ********************************
struct Z_Construct_UFunction_UMqttClientInterface_Publish_Statics
{
	struct MqttClientInterface_eventPublish_Parms
	{
		FMqttMessage message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Publish message\n\x09 * @param message - structure with message data (topic, QoS, payload etc.)\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interface/MqttClientInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Publish message\n@param message - structure with message data (topic, QoS, payload etc.)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMqttClientInterface_Publish_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MqttClientInterface_eventPublish_Parms, message), Z_Construct_UScriptStruct_FMqttMessage, METADATA_PARAMS(0, nullptr) }; // 1077422665
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientInterface_Publish_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientInterface_Publish_Statics::NewProp_message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_Publish_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientInterface_Publish_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMqttClientInterface, nullptr, "Publish", Z_Construct_UFunction_UMqttClientInterface_Publish_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_Publish_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMqttClientInterface_Publish_Statics::MqttClientInterface_eventPublish_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_Publish_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMqttClientInterface_Publish_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMqttClientInterface_Publish_Statics::MqttClientInterface_eventPublish_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMqttClientInterface_Publish()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMqttClientInterface_Publish_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMqttClientInterface::execPublish)
{
	P_GET_STRUCT(FMqttMessage,Z_Param_message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Publish(Z_Param_message);
	P_NATIVE_END;
}
// ********** End Interface UMqttClientInterface Function Publish **********************************

// ********** Begin Interface UMqttClientInterface Function SetOnErrorHandler **********************
struct Z_Construct_UFunction_UMqttClientInterface_SetOnErrorHandler_Statics
{
	struct MqttClientInterface_eventSetOnErrorHandler_Parms
	{
		FScriptDelegate onErrorCallback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set handler for error event\n\x09 * @param onErrorCallback - callback function handler triigered after any MQTT-related error occured\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interface/MqttClientInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set handler for error event\n@param onErrorCallback - callback function handler triigered after any MQTT-related error occured" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_onErrorCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_onErrorCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMqttClientInterface_SetOnErrorHandler_Statics::NewProp_onErrorCallback = { "onErrorCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MqttClientInterface_eventSetOnErrorHandler_Parms, onErrorCallback), Z_Construct_UDelegateFunction_MqttUtilities_OnMqttErrorDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_onErrorCallback_MetaData), NewProp_onErrorCallback_MetaData) }; // 2311049145
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientInterface_SetOnErrorHandler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientInterface_SetOnErrorHandler_Statics::NewProp_onErrorCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_SetOnErrorHandler_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientInterface_SetOnErrorHandler_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMqttClientInterface, nullptr, "SetOnErrorHandler", Z_Construct_UFunction_UMqttClientInterface_SetOnErrorHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_SetOnErrorHandler_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMqttClientInterface_SetOnErrorHandler_Statics::MqttClientInterface_eventSetOnErrorHandler_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_SetOnErrorHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMqttClientInterface_SetOnErrorHandler_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMqttClientInterface_SetOnErrorHandler_Statics::MqttClientInterface_eventSetOnErrorHandler_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMqttClientInterface_SetOnErrorHandler()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMqttClientInterface_SetOnErrorHandler_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMqttClientInterface::execSetOnErrorHandler)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onErrorCallback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOnErrorHandler(FOnMqttErrorDelegate(Z_Param_Out_onErrorCallback));
	P_NATIVE_END;
}
// ********** End Interface UMqttClientInterface Function SetOnErrorHandler ************************

// ********** Begin Interface UMqttClientInterface Function SetOnMessageHandler ********************
struct Z_Construct_UFunction_UMqttClientInterface_SetOnMessageHandler_Statics
{
	struct MqttClientInterface_eventSetOnMessageHandler_Parms
	{
		FScriptDelegate onMessageCallback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set handler for message receiving event\n\x09 * @param onMessageCallback - callback function handler triigered after client received message from MQTT broker\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interface/MqttClientInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set handler for message receiving event\n@param onMessageCallback - callback function handler triigered after client received message from MQTT broker" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_onMessageCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_onMessageCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMqttClientInterface_SetOnMessageHandler_Statics::NewProp_onMessageCallback = { "onMessageCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MqttClientInterface_eventSetOnMessageHandler_Parms, onMessageCallback), Z_Construct_UDelegateFunction_MqttUtilities_OnMessageDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_onMessageCallback_MetaData), NewProp_onMessageCallback_MetaData) }; // 1858768352
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientInterface_SetOnMessageHandler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientInterface_SetOnMessageHandler_Statics::NewProp_onMessageCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_SetOnMessageHandler_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientInterface_SetOnMessageHandler_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMqttClientInterface, nullptr, "SetOnMessageHandler", Z_Construct_UFunction_UMqttClientInterface_SetOnMessageHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_SetOnMessageHandler_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMqttClientInterface_SetOnMessageHandler_Statics::MqttClientInterface_eventSetOnMessageHandler_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_SetOnMessageHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMqttClientInterface_SetOnMessageHandler_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMqttClientInterface_SetOnMessageHandler_Statics::MqttClientInterface_eventSetOnMessageHandler_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMqttClientInterface_SetOnMessageHandler()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMqttClientInterface_SetOnMessageHandler_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMqttClientInterface::execSetOnMessageHandler)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onMessageCallback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOnMessageHandler(FOnMessageDelegate(Z_Param_Out_onMessageCallback));
	P_NATIVE_END;
}
// ********** End Interface UMqttClientInterface Function SetOnMessageHandler **********************

// ********** Begin Interface UMqttClientInterface Function SetOnPublishHandler ********************
struct Z_Construct_UFunction_UMqttClientInterface_SetOnPublishHandler_Statics
{
	struct MqttClientInterface_eventSetOnPublishHandler_Parms
	{
		FScriptDelegate onPublishCallback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set handler for message publishing event\n\x09 * @param onPublishCallback - callback function handler triigered after client message was published to MQTT broker\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interface/MqttClientInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set handler for message publishing event\n@param onPublishCallback - callback function handler triigered after client message was published to MQTT broker" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_onPublishCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_onPublishCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMqttClientInterface_SetOnPublishHandler_Statics::NewProp_onPublishCallback = { "onPublishCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MqttClientInterface_eventSetOnPublishHandler_Parms, onPublishCallback), Z_Construct_UDelegateFunction_MqttUtilities_OnPublishDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_onPublishCallback_MetaData), NewProp_onPublishCallback_MetaData) }; // 2326558989
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientInterface_SetOnPublishHandler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientInterface_SetOnPublishHandler_Statics::NewProp_onPublishCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_SetOnPublishHandler_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientInterface_SetOnPublishHandler_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMqttClientInterface, nullptr, "SetOnPublishHandler", Z_Construct_UFunction_UMqttClientInterface_SetOnPublishHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_SetOnPublishHandler_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMqttClientInterface_SetOnPublishHandler_Statics::MqttClientInterface_eventSetOnPublishHandler_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_SetOnPublishHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMqttClientInterface_SetOnPublishHandler_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMqttClientInterface_SetOnPublishHandler_Statics::MqttClientInterface_eventSetOnPublishHandler_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMqttClientInterface_SetOnPublishHandler()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMqttClientInterface_SetOnPublishHandler_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMqttClientInterface::execSetOnPublishHandler)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onPublishCallback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOnPublishHandler(FOnPublishDelegate(Z_Param_Out_onPublishCallback));
	P_NATIVE_END;
}
// ********** End Interface UMqttClientInterface Function SetOnPublishHandler **********************

// ********** Begin Interface UMqttClientInterface Function SetOnSubscribeHandler ******************
struct Z_Construct_UFunction_UMqttClientInterface_SetOnSubscribeHandler_Statics
{
	struct MqttClientInterface_eventSetOnSubscribeHandler_Parms
	{
		FScriptDelegate onSubscribeCallback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set handler for subscription event\n\x09 * @param onSubscribeCallback - callback function handler triigered after client subscribed to topic exposed by MQTT broker\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interface/MqttClientInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set handler for subscription event\n@param onSubscribeCallback - callback function handler triigered after client subscribed to topic exposed by MQTT broker" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_onSubscribeCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_onSubscribeCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMqttClientInterface_SetOnSubscribeHandler_Statics::NewProp_onSubscribeCallback = { "onSubscribeCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MqttClientInterface_eventSetOnSubscribeHandler_Parms, onSubscribeCallback), Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_onSubscribeCallback_MetaData), NewProp_onSubscribeCallback_MetaData) }; // 437514043
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientInterface_SetOnSubscribeHandler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientInterface_SetOnSubscribeHandler_Statics::NewProp_onSubscribeCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_SetOnSubscribeHandler_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientInterface_SetOnSubscribeHandler_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMqttClientInterface, nullptr, "SetOnSubscribeHandler", Z_Construct_UFunction_UMqttClientInterface_SetOnSubscribeHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_SetOnSubscribeHandler_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMqttClientInterface_SetOnSubscribeHandler_Statics::MqttClientInterface_eventSetOnSubscribeHandler_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_SetOnSubscribeHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMqttClientInterface_SetOnSubscribeHandler_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMqttClientInterface_SetOnSubscribeHandler_Statics::MqttClientInterface_eventSetOnSubscribeHandler_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMqttClientInterface_SetOnSubscribeHandler()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMqttClientInterface_SetOnSubscribeHandler_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMqttClientInterface::execSetOnSubscribeHandler)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onSubscribeCallback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOnSubscribeHandler(FOnSubscribeDelegate(Z_Param_Out_onSubscribeCallback));
	P_NATIVE_END;
}
// ********** End Interface UMqttClientInterface Function SetOnSubscribeHandler ********************

// ********** Begin Interface UMqttClientInterface Function SetOnUnsubscribeHandler ****************
struct Z_Construct_UFunction_UMqttClientInterface_SetOnUnsubscribeHandler_Statics
{
	struct MqttClientInterface_eventSetOnUnsubscribeHandler_Parms
	{
		FScriptDelegate onUnsubscribeCallback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set handler for unsubscription event\n\x09 * @param onUnsubscribeCallback - callback function handler triigered after client unsubscribed from topic exposed by MQTT broker\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interface/MqttClientInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set handler for unsubscription event\n@param onUnsubscribeCallback - callback function handler triigered after client unsubscribed from topic exposed by MQTT broker" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_onUnsubscribeCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_onUnsubscribeCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMqttClientInterface_SetOnUnsubscribeHandler_Statics::NewProp_onUnsubscribeCallback = { "onUnsubscribeCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MqttClientInterface_eventSetOnUnsubscribeHandler_Parms, onUnsubscribeCallback), Z_Construct_UDelegateFunction_MqttUtilities_OnUnsubscribeDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_onUnsubscribeCallback_MetaData), NewProp_onUnsubscribeCallback_MetaData) }; // 2234099260
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientInterface_SetOnUnsubscribeHandler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientInterface_SetOnUnsubscribeHandler_Statics::NewProp_onUnsubscribeCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_SetOnUnsubscribeHandler_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientInterface_SetOnUnsubscribeHandler_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMqttClientInterface, nullptr, "SetOnUnsubscribeHandler", Z_Construct_UFunction_UMqttClientInterface_SetOnUnsubscribeHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_SetOnUnsubscribeHandler_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMqttClientInterface_SetOnUnsubscribeHandler_Statics::MqttClientInterface_eventSetOnUnsubscribeHandler_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_SetOnUnsubscribeHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMqttClientInterface_SetOnUnsubscribeHandler_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMqttClientInterface_SetOnUnsubscribeHandler_Statics::MqttClientInterface_eventSetOnUnsubscribeHandler_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMqttClientInterface_SetOnUnsubscribeHandler()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMqttClientInterface_SetOnUnsubscribeHandler_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMqttClientInterface::execSetOnUnsubscribeHandler)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onUnsubscribeCallback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOnUnsubscribeHandler(FOnUnsubscribeDelegate(Z_Param_Out_onUnsubscribeCallback));
	P_NATIVE_END;
}
// ********** End Interface UMqttClientInterface Function SetOnUnsubscribeHandler ******************

// ********** Begin Interface UMqttClientInterface Function Subscribe ******************************
struct Z_Construct_UFunction_UMqttClientInterface_Subscribe_Statics
{
	struct MqttClientInterface_eventSubscribe_Parms
	{
		FString topic;
		int32 qos;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Subscribe to topic\n\x09 * @param topic - name of the topic\n\x09 * @param qos - level of quality of service\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interface/MqttClientInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Subscribe to topic\n@param topic - name of the topic\n@param qos - level of quality of service" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_topic;
	static const UECodeGen_Private::FIntPropertyParams NewProp_qos;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMqttClientInterface_Subscribe_Statics::NewProp_topic = { "topic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MqttClientInterface_eventSubscribe_Parms, topic), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMqttClientInterface_Subscribe_Statics::NewProp_qos = { "qos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MqttClientInterface_eventSubscribe_Parms, qos), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientInterface_Subscribe_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientInterface_Subscribe_Statics::NewProp_topic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientInterface_Subscribe_Statics::NewProp_qos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_Subscribe_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientInterface_Subscribe_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMqttClientInterface, nullptr, "Subscribe", Z_Construct_UFunction_UMqttClientInterface_Subscribe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_Subscribe_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMqttClientInterface_Subscribe_Statics::MqttClientInterface_eventSubscribe_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_Subscribe_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMqttClientInterface_Subscribe_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMqttClientInterface_Subscribe_Statics::MqttClientInterface_eventSubscribe_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMqttClientInterface_Subscribe()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMqttClientInterface_Subscribe_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMqttClientInterface::execSubscribe)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_topic);
	P_GET_PROPERTY(FIntProperty,Z_Param_qos);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Subscribe(Z_Param_topic,Z_Param_qos);
	P_NATIVE_END;
}
// ********** End Interface UMqttClientInterface Function Subscribe ********************************

// ********** Begin Interface UMqttClientInterface Function Unsubscribe ****************************
struct Z_Construct_UFunction_UMqttClientInterface_Unsubscribe_Statics
{
	struct MqttClientInterface_eventUnsubscribe_Parms
	{
		FString topic;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Unsubscribe from topic\n\x09 * @param topic - name of the topic\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interface/MqttClientInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unsubscribe from topic\n@param topic - name of the topic" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_topic;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMqttClientInterface_Unsubscribe_Statics::NewProp_topic = { "topic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MqttClientInterface_eventUnsubscribe_Parms, topic), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientInterface_Unsubscribe_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientInterface_Unsubscribe_Statics::NewProp_topic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_Unsubscribe_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientInterface_Unsubscribe_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMqttClientInterface, nullptr, "Unsubscribe", Z_Construct_UFunction_UMqttClientInterface_Unsubscribe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_Unsubscribe_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMqttClientInterface_Unsubscribe_Statics::MqttClientInterface_eventUnsubscribe_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_Unsubscribe_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMqttClientInterface_Unsubscribe_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMqttClientInterface_Unsubscribe_Statics::MqttClientInterface_eventUnsubscribe_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMqttClientInterface_Unsubscribe()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMqttClientInterface_Unsubscribe_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMqttClientInterface::execUnsubscribe)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_topic);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Unsubscribe(Z_Param_topic);
	P_NATIVE_END;
}
// ********** End Interface UMqttClientInterface Function Unsubscribe ******************************

// ********** Begin Interface UMqttClientInterface *************************************************
void UMqttClientInterface::StaticRegisterNativesUMqttClientInterface()
{
	UClass* Class = UMqttClientInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Connect", &IMqttClientInterface::execConnect },
		{ "Disconnect", &IMqttClientInterface::execDisconnect },
		{ "Publish", &IMqttClientInterface::execPublish },
		{ "SetOnErrorHandler", &IMqttClientInterface::execSetOnErrorHandler },
		{ "SetOnMessageHandler", &IMqttClientInterface::execSetOnMessageHandler },
		{ "SetOnPublishHandler", &IMqttClientInterface::execSetOnPublishHandler },
		{ "SetOnSubscribeHandler", &IMqttClientInterface::execSetOnSubscribeHandler },
		{ "SetOnUnsubscribeHandler", &IMqttClientInterface::execSetOnUnsubscribeHandler },
		{ "Subscribe", &IMqttClientInterface::execSubscribe },
		{ "Unsubscribe", &IMqttClientInterface::execUnsubscribe },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMqttClientInterface;
UClass* UMqttClientInterface::GetPrivateStaticClass()
{
	using TClass = UMqttClientInterface;
	if (!Z_Registration_Info_UClass_UMqttClientInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MqttClientInterface"),
			Z_Registration_Info_UClass_UMqttClientInterface.InnerSingleton,
			StaticRegisterNativesUMqttClientInterface,
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
	return Z_Registration_Info_UClass_UMqttClientInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UMqttClientInterface_NoRegister()
{
	return UMqttClientInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMqttClientInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Interface/MqttClientInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMqttClientInterface_Connect, "Connect" }, // 2907054749
		{ &Z_Construct_UFunction_UMqttClientInterface_Disconnect, "Disconnect" }, // 4179955755
		{ &Z_Construct_UFunction_UMqttClientInterface_Publish, "Publish" }, // 1542323510
		{ &Z_Construct_UFunction_UMqttClientInterface_SetOnErrorHandler, "SetOnErrorHandler" }, // 1842363597
		{ &Z_Construct_UFunction_UMqttClientInterface_SetOnMessageHandler, "SetOnMessageHandler" }, // 3500137259
		{ &Z_Construct_UFunction_UMqttClientInterface_SetOnPublishHandler, "SetOnPublishHandler" }, // 2874669483
		{ &Z_Construct_UFunction_UMqttClientInterface_SetOnSubscribeHandler, "SetOnSubscribeHandler" }, // 1873401040
		{ &Z_Construct_UFunction_UMqttClientInterface_SetOnUnsubscribeHandler, "SetOnUnsubscribeHandler" }, // 2718181886
		{ &Z_Construct_UFunction_UMqttClientInterface_Subscribe, "Subscribe" }, // 256755219
		{ &Z_Construct_UFunction_UMqttClientInterface_Unsubscribe, "Unsubscribe" }, // 237501236
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMqttClientInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMqttClientInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_MqttUtilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMqttClientInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMqttClientInterface_Statics::ClassParams = {
	&UMqttClientInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMqttClientInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UMqttClientInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMqttClientInterface()
{
	if (!Z_Registration_Info_UClass_UMqttClientInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMqttClientInterface.OuterSingleton, Z_Construct_UClass_UMqttClientInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMqttClientInterface.OuterSingleton;
}
UMqttClientInterface::UMqttClientInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMqttClientInterface);
// ********** End Interface UMqttClientInterface ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h__Script_MqttUtilities_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMqttClientInterface, UMqttClientInterface::StaticClass, TEXT("UMqttClientInterface"), &Z_Registration_Info_UClass_UMqttClientInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMqttClientInterface), 564653939U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h__Script_MqttUtilities_689374050(TEXT("/Script/MqttUtilities"),
	Z_CompiledInDeferFile_FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h__Script_MqttUtilities_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_facel_git_mesias_unreal_sim_Plugins_MqttUtilities_Source_MqttUtilities_Public_Interface_MqttClientInterface_h__Script_MqttUtilities_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
