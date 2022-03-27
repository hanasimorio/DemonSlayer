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

	/** AbilitySystemComponent��GameplayTagCountContainer��GameplayTag���폜���� */
	UFUNCTION(BlueprintCallable, Category = "GamePlayAbility")
		virtual void RemoveGameplayTags(const FGameplayTagContainer GameplayTags);

public:
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Cost")
		FScalableFloat Cost;
	
};
