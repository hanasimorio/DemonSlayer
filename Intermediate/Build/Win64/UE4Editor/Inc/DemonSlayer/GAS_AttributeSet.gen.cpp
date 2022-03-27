// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DemonSlayer/Public/GAS_AttributeSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAS_AttributeSet() {}
// Cross Module References
	DEMONSLAYER_API UClass* Z_Construct_UClass_UGAS_AttributeSet_NoRegister();
	DEMONSLAYER_API UClass* Z_Construct_UClass_UGAS_AttributeSet();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
	UPackage* Z_Construct_UPackage__Script_DemonSlayer();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
// End Cross Module References
	void UGAS_AttributeSet::StaticRegisterNativesUGAS_AttributeSet()
	{
	}
	UClass* Z_Construct_UClass_UGAS_AttributeSet_NoRegister()
	{
		return UGAS_AttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_UGAS_AttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stamina_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stamina;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HealthPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagicPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MagicPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGAS_AttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_DemonSlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAS_AttributeSet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GAS_AttributeSet.h" },
		{ "ModuleRelativePath", "Public/GAS_AttributeSet.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAS_AttributeSet_Statics::NewProp_Stamina_MetaData[] = {
		{ "Category", "Attributes" },
		{ "Comment", "/*?X?^?~?i*/" },
		{ "ModuleRelativePath", "Public/GAS_AttributeSet.h" },
		{ "ToolTip", "?X?^?~?i" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAS_AttributeSet_Statics::NewProp_Stamina = { "Stamina", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAS_AttributeSet, Stamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UGAS_AttributeSet_Statics::NewProp_Stamina_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_AttributeSet_Statics::NewProp_Stamina_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAS_AttributeSet_Statics::NewProp_HealthPoint_MetaData[] = {
		{ "Category", "Attributes" },
		{ "Comment", "/*?\xcc\x97?*/" },
		{ "ModuleRelativePath", "Public/GAS_AttributeSet.h" },
		{ "ToolTip", "?\xcc\x97?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAS_AttributeSet_Statics::NewProp_HealthPoint = { "HealthPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAS_AttributeSet, HealthPoint), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UGAS_AttributeSet_Statics::NewProp_HealthPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_AttributeSet_Statics::NewProp_HealthPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAS_AttributeSet_Statics::NewProp_MagicPoint_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/GAS_AttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAS_AttributeSet_Statics::NewProp_MagicPoint = { "MagicPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAS_AttributeSet, MagicPoint), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UGAS_AttributeSet_Statics::NewProp_MagicPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_AttributeSet_Statics::NewProp_MagicPoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGAS_AttributeSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_AttributeSet_Statics::NewProp_Stamina,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_AttributeSet_Statics::NewProp_HealthPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_AttributeSet_Statics::NewProp_MagicPoint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGAS_AttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGAS_AttributeSet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGAS_AttributeSet_Statics::ClassParams = {
		&UGAS_AttributeSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGAS_AttributeSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_AttributeSet_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGAS_AttributeSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_AttributeSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGAS_AttributeSet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGAS_AttributeSet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGAS_AttributeSet, 4240279283);
	template<> DEMONSLAYER_API UClass* StaticClass<UGAS_AttributeSet>()
	{
		return UGAS_AttributeSet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGAS_AttributeSet(Z_Construct_UClass_UGAS_AttributeSet, &UGAS_AttributeSet::StaticClass, TEXT("/Script/DemonSlayer"), TEXT("UGAS_AttributeSet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGAS_AttributeSet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
