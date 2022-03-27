// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "GAS_AttributeSet.generated.h"

//アクセサ(Setter、Getter)を生成するためのマクロ
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

	/*スタミナ*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
		FGameplayAttributeData Stamina;
	ATTRIBUTE_ACCESSORS(UGAS_AttributeSet, Stamina)

		/*体力*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
		FGameplayAttributeData HealthPoint;
	ATTRIBUTE_ACCESSORS(UGAS_AttributeSet, HealthPoint)

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
		FGameplayAttributeData MagicPoint;
	ATTRIBUTE_ACCESSORS(UGAS_AttributeSet, MagicPoint)


	
};
