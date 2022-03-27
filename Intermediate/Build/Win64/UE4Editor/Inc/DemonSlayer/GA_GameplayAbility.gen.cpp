// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DemonSlayer/Public/GA_GameplayAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGA_GameplayAbility() {}
// Cross Module References
	DEMONSLAYER_API UClass* Z_Construct_UClass_UGA_GameplayAbility_NoRegister();
	DEMONSLAYER_API UClass* Z_Construct_UClass_UGA_GameplayAbility();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_DemonSlayer();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FScalableFloat();
// End Cross Module References
	DEFINE_FUNCTION(UGA_GameplayAbility::execRemoveGameplayTags)
	{
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_GameplayTags);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveGameplayTags(Z_Param_GameplayTags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGA_GameplayAbility::execAddGameplayTags)
	{
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_GameplayTags);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddGameplayTags(Z_Param_GameplayTags);
		P_NATIVE_END;
	}
	void UGA_GameplayAbility::StaticRegisterNativesUGA_GameplayAbility()
	{
		UClass* Class = UGA_GameplayAbility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddGameplayTags", &UGA_GameplayAbility::execAddGameplayTags },
			{ "RemoveGameplayTags", &UGA_GameplayAbility::execRemoveGameplayTags },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGA_GameplayAbility_AddGameplayTags_Statics
	{
		struct GA_GameplayAbility_eventAddGameplayTags_Parms
		{
			FGameplayTagContainer GameplayTags;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGA_GameplayAbility_AddGameplayTags_Statics::NewProp_GameplayTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGA_GameplayAbility_AddGameplayTags_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GA_GameplayAbility_eventAddGameplayTags_Parms, GameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UGA_GameplayAbility_AddGameplayTags_Statics::NewProp_GameplayTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGA_GameplayAbility_AddGameplayTags_Statics::NewProp_GameplayTags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGA_GameplayAbility_AddGameplayTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGA_GameplayAbility_AddGameplayTags_Statics::NewProp_GameplayTags,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGA_GameplayAbility_AddGameplayTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "GamePlayAbility" },
		{ "ModuleRelativePath", "Public/GA_GameplayAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGA_GameplayAbility_AddGameplayTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGA_GameplayAbility, nullptr, "AddGameplayTags", nullptr, nullptr, sizeof(GA_GameplayAbility_eventAddGameplayTags_Parms), Z_Construct_UFunction_UGA_GameplayAbility_AddGameplayTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGA_GameplayAbility_AddGameplayTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGA_GameplayAbility_AddGameplayTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGA_GameplayAbility_AddGameplayTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGA_GameplayAbility_AddGameplayTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGA_GameplayAbility_AddGameplayTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGA_GameplayAbility_RemoveGameplayTags_Statics
	{
		struct GA_GameplayAbility_eventRemoveGameplayTags_Parms
		{
			FGameplayTagContainer GameplayTags;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGA_GameplayAbility_RemoveGameplayTags_Statics::NewProp_GameplayTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGA_GameplayAbility_RemoveGameplayTags_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GA_GameplayAbility_eventRemoveGameplayTags_Parms, GameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UGA_GameplayAbility_RemoveGameplayTags_Statics::NewProp_GameplayTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGA_GameplayAbility_RemoveGameplayTags_Statics::NewProp_GameplayTags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGA_GameplayAbility_RemoveGameplayTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGA_GameplayAbility_RemoveGameplayTags_Statics::NewProp_GameplayTags,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGA_GameplayAbility_RemoveGameplayTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "GamePlayAbility" },
		{ "Comment", "/** AbilitySystemComponent??GameplayTagCountContainer??GameplayTag???\xed\x8f\x9c???? */" },
		{ "ModuleRelativePath", "Public/GA_GameplayAbility.h" },
		{ "ToolTip", "AbilitySystemComponent??GameplayTagCountContainer??GameplayTag???\xed\x8f\x9c????" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGA_GameplayAbility_RemoveGameplayTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGA_GameplayAbility, nullptr, "RemoveGameplayTags", nullptr, nullptr, sizeof(GA_GameplayAbility_eventRemoveGameplayTags_Parms), Z_Construct_UFunction_UGA_GameplayAbility_RemoveGameplayTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGA_GameplayAbility_RemoveGameplayTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGA_GameplayAbility_RemoveGameplayTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGA_GameplayAbility_RemoveGameplayTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGA_GameplayAbility_RemoveGameplayTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGA_GameplayAbility_RemoveGameplayTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGA_GameplayAbility_NoRegister()
	{
		return UGA_GameplayAbility::StaticClass();
	}
	struct Z_Construct_UClass_UGA_GameplayAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cost_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Cost;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGA_GameplayAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_DemonSlayer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGA_GameplayAbility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGA_GameplayAbility_AddGameplayTags, "AddGameplayTags" }, // 350617080
		{ &Z_Construct_UFunction_UGA_GameplayAbility_RemoveGameplayTags, "RemoveGameplayTags" }, // 3510258375
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGA_GameplayAbility_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GA_GameplayAbility.h" },
		{ "ModuleRelativePath", "Public/GA_GameplayAbility.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGA_GameplayAbility_Statics::NewProp_Cost_MetaData[] = {
		{ "Category", "Cost" },
		{ "ModuleRelativePath", "Public/GA_GameplayAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGA_GameplayAbility_Statics::NewProp_Cost = { "Cost", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGA_GameplayAbility, Cost), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(Z_Construct_UClass_UGA_GameplayAbility_Statics::NewProp_Cost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGA_GameplayAbility_Statics::NewProp_Cost_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGA_GameplayAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_GameplayAbility_Statics::NewProp_Cost,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGA_GameplayAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGA_GameplayAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGA_GameplayAbility_Statics::ClassParams = {
		&UGA_GameplayAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGA_GameplayAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGA_GameplayAbility_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGA_GameplayAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGA_GameplayAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGA_GameplayAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGA_GameplayAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGA_GameplayAbility, 2635874980);
	template<> DEMONSLAYER_API UClass* StaticClass<UGA_GameplayAbility>()
	{
		return UGA_GameplayAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGA_GameplayAbility(Z_Construct_UClass_UGA_GameplayAbility, &UGA_GameplayAbility::StaticClass, TEXT("/Script/DemonSlayer"), TEXT("UGA_GameplayAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGA_GameplayAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
