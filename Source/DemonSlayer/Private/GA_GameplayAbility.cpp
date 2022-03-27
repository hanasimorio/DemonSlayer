// Fill out your copyright notice in the Description page of Project Settings.


#include "GA_GameplayAbility.h"
#include "AbilitySystemComponent.h"

void UGA_GameplayAbility::AddGameplayTags(const FGameplayTagContainer GameplayTags)
{
	UAbilitySystemComponent* Comp = GetAbilitySystemComponentFromActorInfo();

	Comp->AddLooseGameplayTags(GameplayTags);
}

void UGA_GameplayAbility::RemoveGameplayTags(const FGameplayTagContainer GameplayTags)
{
	UAbilitySystemComponent* Comp = GetAbilitySystemComponentFromActorInfo();

	Comp->RemoveLooseGameplayTags(GameplayTags);
}
