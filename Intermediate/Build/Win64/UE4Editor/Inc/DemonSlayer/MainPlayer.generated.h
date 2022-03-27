// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef DEMONSLAYER_MainPlayer_generated_h
#error "MainPlayer.generated.h already included, missing '#pragma once' in MainPlayer.h"
#endif
#define DEMONSLAYER_MainPlayer_generated_h

#define DemonSlayer_Source_DemonSlayer_Public_MainPlayer_h_27_SPARSE_DATA
#define DemonSlayer_Source_DemonSlayer_Public_MainPlayer_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMagicPoint); \
	DECLARE_FUNCTION(execGetHealthPoint); \
	DECLARE_FUNCTION(execGetStamina); \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define DemonSlayer_Source_DemonSlayer_Public_MainPlayer_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMagicPoint); \
	DECLARE_FUNCTION(execGetHealthPoint); \
	DECLARE_FUNCTION(execGetStamina); \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define DemonSlayer_Source_DemonSlayer_Public_MainPlayer_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainPlayer(); \
	friend struct Z_Construct_UClass_AMainPlayer_Statics; \
public: \
	DECLARE_CLASS(AMainPlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DemonSlayer"), NO_API) \
	DECLARE_SERIALIZER(AMainPlayer) \
	virtual UObject* _getUObject() const override { return const_cast<AMainPlayer*>(this); }


#define DemonSlayer_Source_DemonSlayer_Public_MainPlayer_h_27_INCLASS \
private: \
	static void StaticRegisterNativesAMainPlayer(); \
	friend struct Z_Construct_UClass_AMainPlayer_Statics; \
public: \
	DECLARE_CLASS(AMainPlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DemonSlayer"), NO_API) \
	DECLARE_SERIALIZER(AMainPlayer) \
	virtual UObject* _getUObject() const override { return const_cast<AMainPlayer*>(this); }


#define DemonSlayer_Source_DemonSlayer_Public_MainPlayer_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainPlayer(AMainPlayer&&); \
	NO_API AMainPlayer(const AMainPlayer&); \
public:


#define DemonSlayer_Source_DemonSlayer_Public_MainPlayer_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainPlayer(AMainPlayer&&); \
	NO_API AMainPlayer(const AMainPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainPlayer)


#define DemonSlayer_Source_DemonSlayer_Public_MainPlayer_h_27_PRIVATE_PROPERTY_OFFSET
#define DemonSlayer_Source_DemonSlayer_Public_MainPlayer_h_24_PROLOG
#define DemonSlayer_Source_DemonSlayer_Public_MainPlayer_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DemonSlayer_Source_DemonSlayer_Public_MainPlayer_h_27_PRIVATE_PROPERTY_OFFSET \
	DemonSlayer_Source_DemonSlayer_Public_MainPlayer_h_27_SPARSE_DATA \
	DemonSlayer_Source_DemonSlayer_Public_MainPlayer_h_27_RPC_WRAPPERS \
	DemonSlayer_Source_DemonSlayer_Public_MainPlayer_h_27_INCLASS \
	DemonSlayer_Source_DemonSlayer_Public_MainPlayer_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DemonSlayer_Source_DemonSlayer_Public_MainPlayer_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DemonSlayer_Source_DemonSlayer_Public_MainPlayer_h_27_PRIVATE_PROPERTY_OFFSET \
	DemonSlayer_Source_DemonSlayer_Public_MainPlayer_h_27_SPARSE_DATA \
	DemonSlayer_Source_DemonSlayer_Public_MainPlayer_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DemonSlayer_Source_DemonSlayer_Public_MainPlayer_h_27_INCLASS_NO_PURE_DECLS \
	DemonSlayer_Source_DemonSlayer_Public_MainPlayer_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMONSLAYER_API UClass* StaticClass<class AMainPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DemonSlayer_Source_DemonSlayer_Public_MainPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
