// Fill out your copyright notice in the Description page of Project Settings.


#include "GAS_AttributeSet.h"
#include "GameplayEffect.h"
#include "GameplayEffectExtension.h"

UGAS_AttributeSet::UGAS_AttributeSet() :
	Stamina(100.0f), HealthPoint(100.0f),  MagicPoint(100.0f)
{
}




void UGAS_AttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);
	if (Data.EvaluatedData.Attribute == GetStaminaAttribute())
	{
		SetStamina(FMath::Clamp(GetStamina(), 0.f, 100.f));
	}

	if (Data.EvaluatedData.Attribute == GetHealthPointAttribute())
	{
		SetHealthPoint(FMath::Clamp(GetHealthPoint(), 0.f, 100.f));
	}

	if (Data.EvaluatedData.Attribute == GetMagicPointAttribute())
	{
		SetMagicPoint(FMath::Clamp(GetMagicPoint(), 0.f, 100.f));
	}

}

