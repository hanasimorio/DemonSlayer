// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEMONSLAYER_DemonSlayerCharacter_generated_h
#error "DemonSlayerCharacter.generated.h already included, missing '#pragma once' in DemonSlayerCharacter.h"
#endif
#define DEMONSLAYER_DemonSlayerCharacter_generated_h

#define DemonSlayer_Source_DemonSlayer_DemonSlayerCharacter_h_12_SPARSE_DATA
#define DemonSlayer_Source_DemonSlayer_DemonSlayerCharacter_h_12_RPC_WRAPPERS
#define DemonSlayer_Source_DemonSlayer_DemonSlayerCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define DemonSlayer_Source_DemonSlayer_DemonSlayerCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADemonSlayerCharacter(); \
	friend struct Z_Construct_UClass_ADemonSlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(ADemonSlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DemonSlayer"), NO_API) \
	DECLARE_SERIALIZER(ADemonSlayerCharacter)


#define DemonSlayer_Source_DemonSlayer_DemonSlayerCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADemonSlayerCharacter(); \
	friend struct Z_Construct_UClass_ADemonSlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(ADemonSlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DemonSlayer"), NO_API) \
	DECLARE_SERIALIZER(ADemonSlayerCharacter)


#define DemonSlayer_Source_DemonSlayer_DemonSlayerCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADemonSlayerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADemonSlayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADemonSlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADemonSlayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADemonSlayerCharacter(ADemonSlayerCharacter&&); \
	NO_API ADemonSlayerCharacter(const ADemonSlayerCharacter&); \
public:


#define DemonSlayer_Source_DemonSlayer_DemonSlayerCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADemonSlayerCharacter(ADemonSlayerCharacter&&); \
	NO_API ADemonSlayerCharacter(const ADemonSlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADemonSlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADemonSlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADemonSlayerCharacter)


#define DemonSlayer_Source_DemonSlayer_DemonSlayerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ADemonSlayerCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ADemonSlayerCharacter, FollowCamera); }


#define DemonSlayer_Source_DemonSlayer_DemonSlayerCharacter_h_9_PROLOG
#define DemonSlayer_Source_DemonSlayer_DemonSlayerCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DemonSlayer_Source_DemonSlayer_DemonSlayerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	DemonSlayer_Source_DemonSlayer_DemonSlayerCharacter_h_12_SPARSE_DATA \
	DemonSlayer_Source_DemonSlayer_DemonSlayerCharacter_h_12_RPC_WRAPPERS \
	DemonSlayer_Source_DemonSlayer_DemonSlayerCharacter_h_12_INCLASS \
	DemonSlayer_Source_DemonSlayer_DemonSlayerCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DemonSlayer_Source_DemonSlayer_DemonSlayerCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DemonSlayer_Source_DemonSlayer_DemonSlayerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	DemonSlayer_Source_DemonSlayer_DemonSlayerCharacter_h_12_SPARSE_DATA \
	DemonSlayer_Source_DemonSlayer_DemonSlayerCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DemonSlayer_Source_DemonSlayer_DemonSlayerCharacter_h_12_INCLASS_NO_PURE_DECLS \
	DemonSlayer_Source_DemonSlayer_DemonSlayerCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMONSLAYER_API UClass* StaticClass<class ADemonSlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DemonSlayer_Source_DemonSlayer_DemonSlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
