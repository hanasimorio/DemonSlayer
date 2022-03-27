// Fill out your copyright notice in the Description page of Project Settings.


#include "GMMC_AbilityCost.h"
#include "GA_GameplayAbility.h"

float UGMMC_AbilityCost::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	const UGA_GameplayAbility* Ability  = Cast<UGA_GameplayAbility>(Spec.GetContext().GetAbilityInstance_NotReplicated());
	if (!Ability)
	{
		return 0.0f;
	}

	return Ability->Cost.GetValueAtLevel(Ability->GetAbilityLevel());
}


