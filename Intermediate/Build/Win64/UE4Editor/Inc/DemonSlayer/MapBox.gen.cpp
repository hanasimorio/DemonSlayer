// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DemonSlayer/Public/MapBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapBox() {}
// Cross Module References
	DEMONSLAYER_API UClass* Z_Construct_UClass_AMapBox_NoRegister();
	DEMONSLAYER_API UClass* Z_Construct_UClass_AMapBox();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DemonSlayer();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AMapBox::StaticRegisterNativesAMapBox()
	{
	}
	UClass* Z_Construct_UClass_AMapBox_NoRegister()
	{
		return AMapBox::StaticClass();
	}
	struct Z_Construct_UClass_AMapBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Box;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMapBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DemonSlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapBox_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MapBox.h" },
		{ "ModuleRelativePath", "Public/MapBox.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapBox_Statics::NewProp_Box_MetaData[] = {
		{ "Category", "MapBox" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapBox.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapBox_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapBox, Box), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMapBox_Statics::NewProp_Box_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapBox_Statics::NewProp_Box_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMapBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapBox_Statics::NewProp_Box,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMapBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMapBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMapBox_Statics::ClassParams = {
		&AMapBox::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMapBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMapBox_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMapBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMapBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMapBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMapBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMapBox, 2278605883);
	template<> DEMONSLAYER_API UClass* StaticClass<AMapBox>()
	{
		return AMapBox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMapBox(Z_Construct_UClass_AMapBox, &AMapBox::StaticClass, TEXT("/Script/DemonSlayer"), TEXT("AMapBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMapBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
