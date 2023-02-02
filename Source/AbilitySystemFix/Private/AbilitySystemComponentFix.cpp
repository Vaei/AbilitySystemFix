// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystemComponentFix.h"

void UAbilitySystemComponentFix::CurrentMontageStop(float OverrideBlendOutTime)
{
	UAnimInstance* AnimInstance = AbilityActorInfo.IsValid() ? AbilityActorInfo->GetAnimInstance() : nullptr;
	const UAnimMontage* MontageToStop = LocalAnimMontageInfo.AnimMontage;
	const bool bShouldStopMontage = AnimInstance && MontageToStop && !AnimInstance->Montage_GetIsStopped(MontageToStop);
	
	if (bShouldStopMontage)
	{
		const float BlendOutTime = (OverrideBlendOutTime > 0.0f ? OverrideBlendOutTime : MontageToStop->BlendOut.GetBlendTime());
	
		AnimInstance->Montage_Stop(BlendOutTime, MontageToStop);
	
		if (IsOwnerActorAuthoritative())
		{
			AnimMontage_UpdateReplicatedData();
		}
	}
}
