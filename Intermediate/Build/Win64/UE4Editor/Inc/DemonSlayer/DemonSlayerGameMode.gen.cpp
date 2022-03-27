// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DemonSlayer/DemonSlayerGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDemonSlayerGameMode() {}
// Cross Module References
	DEMONSLAYER_API UClass* Z_Construct_UClass_ADemonSlayerGameMode_NoRegister();
	DEMONSLAYER_API UClass* Z_Construct_UClass_ADemonSlayerGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_DemonSlayer();
// End Cross Module References
	void ADemonSlayerGameMode::StaticRegisterNativesADemonSlayerGameMode()
	{
	}
	UClass* Z_Construct_UClass_ADemonSlayerGameMode_NoRegister()
	{
		return ADemonSlayerGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ADemonSlayerGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADemonSlayerGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DemonSlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADemonSlayerGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DemonSlayerGameMode.h" },
		{ "ModuleRelativePath", "DemonSlayerGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADemonSlayerGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADemonSlayerGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADemonSlayerGameMode_Statics::ClassParams = {
		&ADemonSlayerGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADemonSlayerGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADemonSlayerGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADemonSlayerGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADemonSlayerGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADemonSlayerGameMode, 31608965);
	template<> DEMONSLAYER_API UClass* StaticClass<ADemonSlayerGameMode>()
	{
		return ADemonSlayerGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADemonSlayerGameMode(Z_Construct_UClass_ADemonSlayerGameMode, &ADemonSlayerGameMode::StaticClass, TEXT("/Script/DemonSlayer"), TEXT("ADemonSlayerGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADemonSlayerGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
