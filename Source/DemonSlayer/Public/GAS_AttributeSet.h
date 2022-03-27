// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "GAS_AttributeSet.generated.h"

//�A�N�Z�T(Setter�AGetter)�𐶐����邽�߂̃}�N��
#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)



/**
 * 
 */
UCLASS()
class DEMONSLAYER_API UGAS_AttributeSet : public UAttributeSet
{
	GENERATED_BODY()



public:
	UGAS_AttributeSet();

	virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)override;

	/*�X�^�~�i*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
		FGameplayAttributeData Stamina;
	ATTRIBUTE_ACCESSORS(UGAS_AttributeSet, Stamina)

		/*�̗�*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
		FGameplayAttributeData HealthPoint;
	ATTRIBUTE_ACCESSORS(UGAS_AttributeSet, HealthPoint)

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
		FGameplayAttributeData MagicPoint;
	ATTRIBUTE_ACCESSORS(UGAS_AttributeSet, MagicPoint)


	
};
