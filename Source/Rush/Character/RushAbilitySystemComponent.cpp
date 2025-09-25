#include "RushAbilitySystemComponent.h"

#include "RushCharacter.h"
#include "Rush/Ability/Ability/RushLookAbility.h"
#include "Rush/Ability/Ability/RushMovementAbility.h"
#include "Rush/Tags/RushGameplayTag.h"

URushAbilitySystemComponent::URushAbilitySystemComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void URushAbilitySystemComponent::BeginPlay()
{
	Super::BeginPlay();
	TryGiveCharacterAbility();
	
	ARushCharacter* EchoCharacter = Cast<ARushCharacter>(GetOwner());
	if (!EchoCharacter)
	{
		return;
	}
	

	TryActivateAbilityByTags(RushGameplayTag::Ability_Movement);
	TryActivateAbilityByTags(RushGameplayTag::Ability_Look);
	
}
void URushAbilitySystemComponent::TryGiveCharacterAbility()
{
	ARushCharacter* RushCharacter = Cast<ARushCharacter>(GetOwner());
	if (!RushCharacter)
	{
		return;
	}

	GiveAbility(FGameplayAbilitySpec(URushMovementAbility::StaticClass(), 1, 0));
	GiveAbility(FGameplayAbilitySpec(URushLookAbility::StaticClass(), 1, 0));
}

void URushAbilitySystemComponent::TryActivateAbilityByTags(const FNativeGameplayTag& GameplayTags)
{
	const ARushCharacter* EchoCharacter = Cast<ARushCharacter>(GetOwner());
	if (!EchoCharacter)
	{
		return;
	}

	FGameplayTagContainer TagContainer;
	TagContainer.AddTag(GameplayTags);
	bool bIsActivate = TryActivateAbilitiesByTag(TagContainer, true);
}

void URushAbilitySystemComponent::TryCancelAbilityByTags(const FNativeGameplayTag& GameplayTags)
{
	const ARushCharacter* EchoCharacter = Cast<ARushCharacter>(GetOwner());
	if (!EchoCharacter)
	{
		return;
	}

	FGameplayTagContainer CancelTags;
	CancelTags.AddTag(GameplayTags);
	
	CancelAbilities(&CancelTags);
}
