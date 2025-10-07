#include "RushAbilitySystemComponent.h"

#include "RushCharacter.h"
#include "Rush/Ability/Ability/RushLookAbility.h"
#include "Rush/Ability/Ability/RushMovementAbility.h"
#include "Rush/Ability/Ability/RushSprintAbility.h"
#include "Rush/Input/RushInputComponent.h"
#include "Rush/Tags/LogUtils.h"
#include "Rush/Tags/RushGameplayTag.h"

URushAbilitySystemComponent::URushAbilitySystemComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void URushAbilitySystemComponent::BeginPlay()
{
	Super::BeginPlay();
	TryActivateAbilityByIndex();
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
	GiveAbility(FGameplayAbilitySpec(URushSprintAbility::StaticClass(), 1, 0));
}

void URushAbilitySystemComponent::TryActivateAbilityByIndex()
{
	TryGiveCharacterAbility();
	
	ARushCharacter* RushCharacter = Cast<ARushCharacter>(GetOwner());
	if (!RushCharacter)
	{
		return;
	}
	

	TryActivateAbilityByTags(RushGameplayTag::Ability_Movement);
	TryActivateAbilityByTags(RushGameplayTag::Ability_Look);

	
	RushCharacter->OnRushInputReady.AddDynamic(this, &URushAbilitySystemComponent::OnInputReady);
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

void URushAbilitySystemComponent::Input_Sprint(const struct FInputActionValue& Value)
{
	TryActivateAbilityByTags(RushGameplayTag::Ability_Sprint);
}

void URushAbilitySystemComponent::Input_SprintComplete(const struct FInputActionValue& Value)
{
	TryCancelAbilityByTags(RushGameplayTag::Ability_Sprint);
}

void URushAbilitySystemComponent::OnInputReady()
{
	ARushCharacter* RushCharacter = Cast<ARushCharacter>(GetOwner());
	if (!RushCharacter)
	{
		return;
	}
	if (RushCharacter->UIConfig)
	{
		RushCharacter->RushInputComponent->BindNativeActions(RushCharacter->UIConfig, RushGameplayTag::InputTag_Sprint,
			ETriggerEvent::Triggered, this, &URushAbilitySystemComponent::Input_Sprint);

		RushCharacter->RushInputComponent->BindNativeActions(RushCharacter->UIConfig, RushGameplayTag::InputTag_Sprint,
			ETriggerEvent::Completed, this, &URushAbilitySystemComponent::Input_SprintComplete);
	}
}
