// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTagContainer;
#ifdef DEMONSLAYER_GA_GameplayAbility_generated_h
#error "GA_GameplayAbility.generated.h already included, missing '#pragma once' in GA_GameplayAbility.h"
#endif
#define DEMONSLAYER_GA_GameplayAbility_generated_h

#define DemonSlayer_Source_DemonSlayer_Public_GA_GameplayAbility_h_15_SPARSE_DATA
#define DemonSlayer_Source_DemonSlayer_Public_GA_GameplayAbility_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveGameplayTags); \
	DECLARE_FUNCTION(execAddGameplayTags);


#define DemonSlayer_Source_DemonSlayer_Public_GA_GameplayAbility_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveGameplayTags); \
	DECLARE_FUNCTION(execAddGameplayTags);


#define DemonSlayer_Source_DemonSlayer_Public_GA_GameplayAbility_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGA_GameplayAbility(); \
	friend struct Z_Construct_UClass_UGA_GameplayAbility_Statics; \
public: \
	DECLARE_CLASS(UGA_GameplayAbility, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DemonSlayer"), NO_API) \
	DECLARE_SERIALIZER(UGA_GameplayAbility)


#define DemonSlayer_Source_DemonSlayer_Public_GA_GameplayAbility_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUGA_GameplayAbility(); \
	friend struct Z_Construct_UClass_UGA_GameplayAbility_Statics; \
public: \
	DECLARE_CLASS(UGA_GameplayAbility, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DemonSlayer"), NO_API) \
	DECLARE_SERIALIZER(UGA_GameplayAbility)


#define DemonSlayer_Source_DemonSlayer_Public_GA_GameplayAbility_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGA_GameplayAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGA_GameplayAbility) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGA_GameplayAbility); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGA_GameplayAbility); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGA_GameplayAbility(UGA_GameplayAbility&&); \
	NO_API UGA_GameplayAbility(const UGA_GameplayAbility&); \
public:


#define DemonSlayer_Source_DemonSlayer_Public_GA_GameplayAbility_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGA_GameplayAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGA_GameplayAbility(UGA_GameplayAbility&&); \
	NO_API UGA_GameplayAbility(const UGA_GameplayAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGA_GameplayAbility); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGA_GameplayAbility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGA_GameplayAbility)


#define DemonSlayer_Source_DemonSlayer_Public_GA_GameplayAbility_h_15_PRIVATE_PROPERTY_OFFSET
#define DemonSlayer_Source_DemonSlayer_Public_GA_GameplayAbility_h_12_PROLOG
#define DemonSlayer_Source_DemonSlayer_Public_GA_GameplayAbility_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DemonSlayer_Source_DemonSlayer_Public_GA_GameplayAbility_h_15_PRIVATE_PROPERTY_OFFSET \
	DemonSlayer_Source_DemonSlayer_Public_GA_GameplayAbility_h_15_SPARSE_DATA \
	DemonSlayer_Source_DemonSlayer_Public_GA_GameplayAbility_h_15_RPC_WRAPPERS \
	DemonSlayer_Source_DemonSlayer_Public_GA_GameplayAbility_h_15_INCLASS \
	DemonSlayer_Source_DemonSlayer_Public_GA_GameplayAbility_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DemonSlayer_Source_DemonSlayer_Public_GA_GameplayAbility_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DemonSlayer_Source_DemonSlayer_Public_GA_GameplayAbility_h_15_PRIVATE_PROPERTY_OFFSET \
	DemonSlayer_Source_DemonSlayer_Public_GA_GameplayAbility_h_15_SPARSE_DATA \
	DemonSlayer_Source_DemonSlayer_Public_GA_GameplayAbility_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DemonSlayer_Source_DemonSlayer_Public_GA_GameplayAbility_h_15_INCLASS_NO_PURE_DECLS \
	DemonSlayer_Source_DemonSlayer_Public_GA_GameplayAbility_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMONSLAYER_API UClass* StaticClass<class UGA_GameplayAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DemonSlayer_Source_DemonSlayer_Public_GA_GameplayAbility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
