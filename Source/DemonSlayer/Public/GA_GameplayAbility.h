// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "GA_GameplayAbility.generated.h"

/**
 * 
 */
UCLASS()
class DEMONSLAYER_API UGA_GameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()


	UFUNCTION(BlueprintCallable, Category = "GamePlayAbility")
		virtual void AddGameplayTags(const FGameplayTagContainer GameplayTags);

	/** AbilitySystemComponentÇÃGameplayTagCountContainerÇÃGameplayTagÇçÌèúÇ∑ÇÈ */
	UFUNCTION(BlueprintCallable, Category = "GamePlayAbility")
		virtual void RemoveGameplayTags(const FGameplayTagContainer GameplayTags);

public:
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Cost")
		FScalableFloat Cost;
	
};
