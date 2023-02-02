// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemComponentFix.generated.h"

/**
 * 
 */
UCLASS()
class ABILITYSYSTEMFIX_API UAbilitySystemComponentFix : public UAbilitySystemComponent
{
	GENERATED_BODY()

public:
	// Fix this issue that has existed for years that Epic keep ignoring (along with any PRs)
	virtual void CurrentMontageStop(float OverrideBlendOutTime) override final;
};
