#include "RushCrouchAbility.h"

#include "GameFramework/PawnMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Rush/Character/RushCharacter.h"
#include "Rush/Character/RushCharacterMovementComponent.h"
#include "Rush/Tags/LogUtils.h"
#include "Rush/Tags/RushGameplayTag.h"

URushCrouchAbility::URushCrouchAbility()
{
	NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
	NetSecurityPolicy = EGameplayAbilityNetSecurityPolicy::ClientOrServer;
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;

	// Set the ability tags
	FGameplayTagContainer TagAccepts;
	TagAccepts.AddTag(RushGameplayTag::Ability_Crouch);
	SetAssetTags(TagAccepts);
}


bool URushCrouchAbility::CanActivateAbility(const FGameplayAbilitySpecHandle Handle,
                                            const FGameplayAbilityActorInfo* ActorInfo,
                                            const FGameplayTagContainer* SourceTags,
                                            const FGameplayTagContainer* TargetTags,
                                            FGameplayTagContainer* OptionalRelevantTags) const
{
	const ARushCharacter* RushCharacter = Cast<ARushCharacter>(ActorInfo->AvatarActor.Get());
	return RushCharacter->GetMovementComponent()->CanEverCrouch();
}

void URushCrouchAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
                                         const FGameplayAbilityActorInfo* ActorInfo,
                                         const FGameplayAbilityActivationInfo ActivationInfo,
                                         const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
	if (ARushCharacter* RushCharacter = Cast<ARushCharacter>(ActorInfo->AvatarActor.Get()))
	{
		RushCharacter->Crouch();
		URushCharacterMovementComponent* RushCharacterMovement = Cast<URushCharacterMovementComponent>(
			RushCharacter->GetCharacterMovement());
		RushCharacterMovement->AddImpulse(
			UKismetMathLibrary::Multiply_VectorFloat(RushCharacter->GetActorForwardVector(), true));
	}
}

void URushCrouchAbility::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
                                    const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility,
                                    bool bWasCancelled)
{
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
	if (ARushCharacter* RushCharacter = Cast<ARushCharacter>(ActorInfo->AvatarActor.Get()))
	{
		if (RushCharacter->bIsCrouched)
		{
			RushCharacter->UnCrouch();
		}
	}
}
