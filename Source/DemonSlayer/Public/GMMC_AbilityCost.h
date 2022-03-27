// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayModMagnitudeCalculation.h"
#include "GMMC_AbilityCost.generated.h"

/**
 * 
 */
UCLASS()
class DEMONSLAYER_API UGMMC_AbilityCost : public UGameplayModMagnitudeCalculation
{
	GENERATED_BODY()

public:
		float CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const override;
	
};
