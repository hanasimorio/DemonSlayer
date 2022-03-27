// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DemonSlayer/Public/DemonSlayer_GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDemonSlayer_GameMode() {}
// Cross Module References
	DEMONSLAYER_API UClass* Z_Construct_UClass_ADemonSlayer_GameMode_NoRegister();
	DEMONSLAYER_API UClass* Z_Construct_UClass_ADemonSlayer_GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_DemonSlayer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	void ADemonSlayer_GameMode::StaticRegisterNativesADemonSlayer_GameMode()
	{
	}
	UClass* Z_Construct_UClass_ADemonSlayer_GameMode_NoRegister()
	{
		return ADemonSlayer_GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ADemonSlayer_GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerRecharge_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PlayerRecharge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spawn_X_Min_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Spawn_X_Min;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spawn_X_Max_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Spawn_X_Max;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spawn_Y_Min_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Spawn_Y_Min;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spawn_Y_Max_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Spawn_Y_Max;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADemonSlayer_GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_DemonSlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADemonSlayer_GameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DemonSlayer_GameMode.h" },
		{ "ModuleRelativePath", "Public/DemonSlayer_GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADemonSlayer_GameMode_Statics::NewProp_PlayerRecharge_MetaData[] = {
		{ "Category", "DemonSlayer_GameMode" },
		{ "ModuleRelativePath", "Public/DemonSlayer_GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADemonSlayer_GameMode_Statics::NewProp_PlayerRecharge = { "PlayerRecharge", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADemonSlayer_GameMode, PlayerRecharge), Z_Construct_UClass_APawn_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ADemonSlayer_GameMode_Statics::NewProp_PlayerRecharge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADemonSlayer_GameMode_Statics::NewProp_PlayerRecharge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADemonSlayer_GameMode_Statics::NewProp_Spawn_X_Min_MetaData[] = {
		{ "Category", "DemonSlayer_GameMode" },
		{ "ModuleRelativePath", "Public/DemonSlayer_GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADemonSlayer_GameMode_Statics::NewProp_Spawn_X_Min = { "Spawn_X_Min", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADemonSlayer_GameMode, Spawn_X_Min), METADATA_PARAMS(Z_Construct_UClass_ADemonSlayer_GameMode_Statics::NewProp_Spawn_X_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADemonSlayer_GameMode_Statics::NewProp_Spawn_X_Min_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADemonSlayer_GameMode_Statics::NewProp_Spawn_X_Max_MetaData[] = {
		{ "Category", "DemonSlayer_GameMode" },
		{ "ModuleRelativePath", "Public/DemonSlayer_GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADemonSlayer_GameMode_Statics::NewProp_Spawn_X_Max = { "Spawn_X_Max", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADemonSlayer_GameMode, Spawn_X_Max), METADATA_PARAMS(Z_Construct_UClass_ADemonSlayer_GameMode_Statics::NewProp_Spawn_X_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADemonSlayer_GameMode_Statics::NewProp_Spawn_X_Max_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADemonSlayer_GameMode_Statics::NewProp_Spawn_Y_Min_MetaData[] = {
		{ "Category", "DemonSlayer_GameMode" },
		{ "ModuleRelativePath", "Public/DemonSlayer_GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADemonSlayer_GameMode_Statics::NewProp_Spawn_Y_Min = { "Spawn_Y_Min", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADemonSlayer_GameMode, Spawn_Y_Min), METADATA_PARAMS(Z_Construct_UClass_ADemonSlayer_GameMode_Statics::NewProp_Spawn_Y_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADemonSlayer_GameMode_Statics::NewProp_Spawn_Y_Min_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADemonSlayer_GameMode_Statics::NewProp_Spawn_Y_Max_MetaData[] = {
		{ "Category", "DemonSlayer_GameMode" },
		{ "ModuleRelativePath", "Public/DemonSlayer_GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADemonSlayer_GameMode_Statics::NewProp_Spawn_Y_Max = { "Spawn_Y_Max", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADemonSlayer_GameMode, Spawn_Y_Max), METADATA_PARAMS(Z_Construct_UClass_ADemonSlayer_GameMode_Statics::NewProp_Spawn_Y_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADemonSlayer_GameMode_Statics::NewProp_Spawn_Y_Max_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADemonSlayer_GameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemonSlayer_GameMode_Statics::NewProp_PlayerRecharge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemonSlayer_GameMode_Statics::NewProp_Spawn_X_Min,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemonSlayer_GameMode_Statics::NewProp_Spawn_X_Max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemonSlayer_GameMode_Statics::NewProp_Spawn_Y_Min,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemonSlayer_GameMode_Statics::NewProp_Spawn_Y_Max,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADemonSlayer_GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADemonSlayer_GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADemonSlayer_GameMode_Statics::ClassParams = {
		&ADemonSlayer_GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADemonSlayer_GameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADemonSlayer_GameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADemonSlayer_GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADemonSlayer_GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADemonSlayer_GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADemonSlayer_GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADemonSlayer_GameMode, 2633998149);
	template<> DEMONSLAYER_API UClass* StaticClass<ADemonSlayer_GameMode>()
	{
		return ADemonSlayer_GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADemonSlayer_GameMode(Z_Construct_UClass_ADemonSlayer_GameMode, &ADemonSlayer_GameMode::StaticClass, TEXT("/Script/DemonSlayer"), TEXT("ADemonSlayer_GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADemonSlayer_GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
