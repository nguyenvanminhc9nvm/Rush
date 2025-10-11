#include "RushAbilitySystemComponent.h"

#include "RushCharacter.h"
#include "Rush/Ability/Ability/RushChangePOVAbility.h"
#include "Rush/Ability/Ability/RushCrouchAbility.h"
#include "Rush/Ability/Ability/RushFreeLookAbility.h"
#include "Rush/Ability/Ability/RushHolsterAbility.h"
#include "Rush/Ability/Ability/RushJumpAbility.h"
#include "Rush/Ability/Ability/RushLeanAbility.h"
#include "Rush/Ability/Ability/RushLookAbility.h"
#include "Rush/Ability/Ability/RushLowerWeaponAbility.h"
#include "Rush/Ability/Ability/RushMovementAbility.h"
#include "Rush/Ability/Ability/RushSprintAbility.h"
#include "Rush/Input/RushInputComponent.h"
#include "Rush/Tags/LogUtils.h"
#include "Rush/Tags/RushGameplayTag.h"

URushAbilitySystemComponent::URushAbilitySystemComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
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
	GiveAbility(FGameplayAbilitySpec(URushCrouchAbility::StaticClass(), 1, 0));
	GiveAbility(FGameplayAbilitySpec(URushChangePOVAbility::StaticClass(), 1, 0));
	GiveAbility(FGameplayAbilitySpec(URushLowerWeaponAbility::StaticClass(), 1, 0));
	GiveAbility(FGameplayAbilitySpec(URushHolsterAbility::StaticClass(), 1, 0));
	GiveAbility(FGameplayAbilitySpec(URushJumpAbility::StaticClass(), 1, 0));
	GiveAbility(FGameplayAbilitySpec(URushFreeLookAbility::StaticClass(), 1, 0));
	GiveAbility(FGameplayAbilitySpec(URushLeanAbility::StaticClass(), 1, 0));
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
	TryActivateAbilityByTags(RushGameplayTag::Ability_Lean);

	
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
			ETriggerEvent::Started, this, &URushAbilitySystemComponent::Input_Sprint);

		RushCharacter->RushInputComponent->BindNativeActions(RushCharacter->UIConfig, RushGameplayTag::InputTag_Sprint,
			ETriggerEvent::Completed, this, &URushAbilitySystemComponent::Input_SprintComplete);

		RushCharacter->RushInputComponent->BindNativeActions(RushCharacter->UIConfig, RushGameplayTag::InputTag_Crouch,
			ETriggerEvent::Started, this, &URushAbilitySystemComponent::Input_Crouch);

		RushCharacter->RushInputComponent->BindNativeActions(RushCharacter->UIConfig, RushGameplayTag::InputTag_Crouch,
			ETriggerEvent::Completed, this, &URushAbilitySystemComponent::Input_CrouchComplete);

		RushCharacter->RushInputComponent->BindNativeActions(RushCharacter->UIConfig, RushGameplayTag::InputTag_ChangeCamera,
			ETriggerEvent::Started, this, &URushAbilitySystemComponent::Input_ChangeCamera);

		RushCharacter->RushInputComponent->BindNativeActions(RushCharacter->UIConfig, RushGameplayTag::InputTag_Lowered,
			ETriggerEvent::Started, this, &URushAbilitySystemComponent::Input_Lowered);

		RushCharacter->RushInputComponent->BindNativeActions(RushCharacter->UIConfig, RushGameplayTag::InputTag_Holster,
			ETriggerEvent::Started, this, &URushAbilitySystemComponent::Input_Holster);

		RushCharacter->RushInputComponent->BindNativeActions(RushCharacter->UIConfig, RushGameplayTag::InputTag_Jump,
			ETriggerEvent::Started, this, &URushAbilitySystemComponent::Input_Jump);

		RushCharacter->RushInputComponent->BindNativeActions(RushCharacter->UIConfig, RushGameplayTag::InputTag_FreeLook,
			ETriggerEvent::Started, this, &URushAbilitySystemComponent::Input_FreeLook);

		
	}
}

void URushAbilitySystemComponent::Input_Crouch(const struct FInputActionValue& Value)
{
	TryActivateAbilityByTags(RushGameplayTag::Ability_Crouch);
}

void URushAbilitySystemComponent::Input_CrouchComplete(const struct FInputActionValue& Value)
{
	TryCancelAbilityByTags(RushGameplayTag::Ability_Crouch);
}

void URushAbilitySystemComponent::Input_ChangeCamera(const struct FInputActionValue& Value)
{
	TryActivateAbilityByTags(RushGameplayTag::Ability_ChangeCamera);
}

void URushAbilitySystemComponent::Input_Lowered(const struct FInputActionValue& Value)
{
	TryActivateAbilityByTags(RushGameplayTag::Ability_Lowered);
}

void URushAbilitySystemComponent::Input_Holster(const struct FInputActionValue& Value)
{
	TryActivateAbilityByTags(RushGameplayTag::Ability_Holster);
}

void URushAbilitySystemComponent::Input_Jump(const struct FInputActionValue& Value)
{
	TryActivateAbilityByTags(RushGameplayTag::Ability_Jump);
}

void URushAbilitySystemComponent::Input_FreeLook(const struct FInputActionValue& Value)
{
	TryActivateAbilityByTags(RushGameplayTag::Ability_FreeLook);
}
