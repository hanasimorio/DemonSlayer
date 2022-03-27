// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DemonSlayer/Public/DungeonGenerate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonGenerate() {}
// Cross Module References
	DEMONSLAYER_API UScriptStruct* Z_Construct_UScriptStruct_FIntArrayElement();
	UPackage* Z_Construct_UPackage__Script_DemonSlayer();
	DEMONSLAYER_API UClass* Z_Construct_UClass_ADungeonGenerate_NoRegister();
	DEMONSLAYER_API UClass* Z_Construct_UClass_ADungeonGenerate();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
class UScriptStruct* FIntArrayElement::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEMONSLAYER_API uint32 Get_Z_Construct_UScriptStruct_FIntArrayElement_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FIntArrayElement, Z_Construct_UPackage__Script_DemonSlayer(), TEXT("IntArrayElement"), sizeof(FIntArrayElement), Get_Z_Construct_UScriptStruct_FIntArrayElement_Hash());
	}
	return Singleton;
}
template<> DEMONSLAYER_API UScriptStruct* StaticStruct<FIntArrayElement>()
{
	return FIntArrayElement::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FIntArrayElement(FIntArrayElement::StaticStruct, TEXT("/Script/DemonSlayer"), TEXT("IntArrayElement"), false, nullptr, nullptr);
static struct FScriptStruct_DemonSlayer_StaticRegisterNativesFIntArrayElement
{
	FScriptStruct_DemonSlayer_StaticRegisterNativesFIntArrayElement()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("IntArrayElement")),new UScriptStruct::TCppStructOps<FIntArrayElement>);
	}
} ScriptStruct_DemonSlayer_StaticRegisterNativesFIntArrayElement;
	struct Z_Construct_UScriptStruct_FIntArrayElement_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IntArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IntArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIntArrayElement_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DungeonGenerate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIntArrayElement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIntArrayElement>();
	}
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIntArrayElement_Statics::NewProp_IntArray_Inner = { "IntArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIntArrayElement_Statics::NewProp_IntArray_MetaData[] = {
		{ "Category", "MapData" },
		{ "ModuleRelativePath", "Public/DungeonGenerate.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FIntArrayElement_Statics::NewProp_IntArray = { "IntArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIntArrayElement, IntArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FIntArrayElement_Statics::NewProp_IntArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntArrayElement_Statics::NewProp_IntArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIntArrayElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntArrayElement_Statics::NewProp_IntArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntArrayElement_Statics::NewProp_IntArray,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIntArrayElement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DemonSlayer,
		nullptr,
		&NewStructOps,
		"IntArrayElement",
		sizeof(FIntArrayElement),
		alignof(FIntArrayElement),
		Z_Construct_UScriptStruct_FIntArrayElement_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntArrayElement_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIntArrayElement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntArrayElement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIntArrayElement()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FIntArrayElement_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DemonSlayer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("IntArrayElement"), sizeof(FIntArrayElement), Get_Z_Construct_UScriptStruct_FIntArrayElement_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FIntArrayElement_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FIntArrayElement_Hash() { return 2073412477U; }
	void ADungeonGenerate::StaticRegisterNativesADungeonGenerate()
	{
	}
	UClass* Z_Construct_UClass_ADungeonGenerate_NoRegister()
	{
		return ADungeonGenerate::StaticClass();
	}
	struct Z_Construct_UClass_ADungeonGenerate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_map_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_map_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_map;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_roomMinheight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_roomMinheight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_roomMaxheight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_roomMaxheight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_roomMinwidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_roomMinwidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_roomMaxwidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_roomMaxwidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_roomMincount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_roomMincount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_roomMaxcount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_roomMaxcount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_meetpointcount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_meetpointcount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BoxName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADungeonGenerate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DemonSlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DungeonGenerate.h" },
		{ "ModuleRelativePath", "Public/DungeonGenerate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADungeonGenerate_Statics::NewProp_map_Inner = { "map", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIntArrayElement, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerate_Statics::NewProp_map_MetaData[] = {
		{ "Category", "MapData" },
		{ "ModuleRelativePath", "Public/DungeonGenerate.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADungeonGenerate_Statics::NewProp_map = { "map", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeonGenerate, map), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADungeonGenerate_Statics::NewProp_map_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerate_Statics::NewProp_map_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerate_Statics::NewProp_roomMinheight_MetaData[] = {
		{ "Category", "MapData" },
		{ "ModuleRelativePath", "Public/DungeonGenerate.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADungeonGenerate_Statics::NewProp_roomMinheight = { "roomMinheight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeonGenerate, roomMinheight), METADATA_PARAMS(Z_Construct_UClass_ADungeonGenerate_Statics::NewProp_roomMinheight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerate_Statics::NewProp_roomMinheight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerate_Statics::NewProp_roomMaxheight_MetaData[] = {
		{ "Category", "MapData" },
		{ "ModuleRelativePath", "Public/DungeonGenerate.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADungeonGenerate_Statics::NewProp_roomMaxheight = { "roomMaxheight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeonGenerate, roomMaxheight), METADATA_PARAMS(Z_Construct_UClass_ADungeonGenerate_Statics::NewProp_roomMaxheight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerate_Statics::NewProp_roomMaxheight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerate_Statics::NewProp_roomMinwidth_MetaData[] = {
		{ "Category", "MapData" },
		{ "ModuleRelativePath", "Public/DungeonGenerate.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADungeonGenerate_Statics::NewProp_roomMinwidth = { "roomMinwidth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeonGenerate, roomMinwidth), METADATA_PARAMS(Z_Construct_UClass_ADungeonGenerate_Statics::NewProp_roomMinwidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerate_Statics::NewProp_roomMinwidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerate_Statics::NewProp_roomMaxwidth_MetaData[] = {
		{ "Category", "MapData" },
		{ "ModuleRelativePath", "Public/DungeonGenerate.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADungeonGenerate_Statics::NewProp_roomMaxwidth = { "roomMaxwidth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeonGenerate, roomMaxwidth), METADATA_PARAMS(Z_Construct_UClass_ADungeonGenerate_Statics::NewProp_roomMaxwidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerate_Statics::NewProp_roomMaxwidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerate_Statics::NewProp_roomMincount_MetaData[] = {
		{ "Category", "MapData" },
		{ "ModuleRelativePath", "Public/DungeonGenerate.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADungeonGenerate_Statics::NewProp_roomMincount = { "roomMincount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeonGenerate, roomMincount), METADATA_PARAMS(Z_Construct_UClass_ADungeonGenerate_Statics::NewProp_roomMincount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerate_Statics::NewProp_roomMincount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerate_Statics::NewProp_roomMaxcount_MetaData[] = {
		{ "Category", "MapData" },
		{ "ModuleRelativePath", "Public/DungeonGenerate.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADungeonGenerate_Statics::NewProp_roomMaxcount = { "roomMaxcount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeonGenerate, roomMaxcount), METADATA_PARAMS(Z_Construct_UClass_ADungeonGenerate_Statics::NewProp_roomMaxcount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerate_Statics::NewProp_roomMaxcount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerate_Statics::NewProp_meetpointcount_MetaData[] = {
		{ "Category", "MapData" },
		{ "ModuleRelativePath", "Public/DungeonGenerate.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADungeonGenerate_Statics::NewProp_meetpointcount = { "meetpointcount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeonGenerate, meetpointcount), METADATA_PARAMS(Z_Construct_UClass_ADungeonGenerate_Statics::NewProp_meetpointcount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerate_Statics::NewProp_meetpointcount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerate_Statics::NewProp_BoxName_MetaData[] = {
		{ "Category", "MapData" },
		{ "ModuleRelativePath", "Public/DungeonGenerate.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ADungeonGenerate_Statics::NewProp_BoxName = { "BoxName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeonGenerate, BoxName), METADATA_PARAMS(Z_Construct_UClass_ADungeonGenerate_Statics::NewProp_BoxName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerate_Statics::NewProp_BoxName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADungeonGenerate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerate_Statics::NewProp_map_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerate_Statics::NewProp_map,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerate_Statics::NewProp_roomMinheight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerate_Statics::NewProp_roomMaxheight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerate_Statics::NewProp_roomMinwidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerate_Statics::NewProp_roomMaxwidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerate_Statics::NewProp_roomMincount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerate_Statics::NewProp_roomMaxcount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerate_Statics::NewProp_meetpointcount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerate_Statics::NewProp_BoxName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADungeonGenerate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeonGenerate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADungeonGenerate_Statics::ClassParams = {
		&ADungeonGenerate::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADungeonGenerate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerate_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADungeonGenerate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADungeonGenerate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADungeonGenerate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADungeonGenerate, 310027233);
	template<> DEMONSLAYER_API UClass* StaticClass<ADungeonGenerate>()
	{
		return ADungeonGenerate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADungeonGenerate(Z_Construct_UClass_ADungeonGenerate, &ADungeonGenerate::StaticClass, TEXT("/Script/DemonSlayer"), TEXT("ADungeonGenerate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeonGenerate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
