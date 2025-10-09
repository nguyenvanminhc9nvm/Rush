#include "RushJumpAbility.h"

#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Rush/Character/RushCharacter.h"
#include "Rush/Tags/RushGameplayTag.h"
#include "Sound/SoundCue.h"

URushJumpAbility::URushJumpAbility()
{
	NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
	NetSecurityPolicy = EGameplayAbilityNetSecurityPolicy::ClientOrServer;
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;

	// Set the ability tags
	FGameplayTagContainer TagAccepts;
	TagAccepts.AddTag(RushGameplayTag::Ability_Jump);
	SetAssetTags(TagAccepts);

	bRetriggerInstancedAbility = true;
}

void URushJumpAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
                                       const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
                                       const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
	ARushCharacter* RushCharacter = Cast<ARushCharacter>(GetAvatarActorFromActorInfo());
	if (!RushCharacter)
	{
		return;
	}

	if (RushCharacter->GetCharacterMovement()->IsFalling())
	{
		return;
	}

	if (RushCharacter->CanJump())
	{
		RushCharacter->Jump();
		// play sound weapon jump
		
	}
}
