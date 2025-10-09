#include "RushSprintAbility.h"

#include "Rush/Character/RushCharacter.h"
#include "Rush/Character/RushCharacterMovementComponent.h"
#include "Rush/Tags/LogUtils.h"
#include "Rush/Tags/RushGameplayTag.h"

URushSprintAbility::URushSprintAbility()
{
	NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
	NetSecurityPolicy = EGameplayAbilityNetSecurityPolicy::ClientOrServer;
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
	// Set the ability tags
	FGameplayTagContainer TagAccepts;
	TagAccepts.AddTag(RushGameplayTag::Ability_Sprint);
	SetAssetTags(TagAccepts);

	bRetriggerInstancedAbility = true;
}

void URushSprintAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
	const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);

	ARushCharacter* RushCharacter = Cast<ARushCharacter>(GetAvatarActorFromActorInfo());
	if (!RushCharacter)
	{
		return;
	}

	RushCharacter->ToggleWeaponLaser(false);
	if (RushCharacter->IsCrouched())
	{
		RushCharacter->UnCrouch();
	}

	if (URushCharacterMovementComponent* RushCharacterMovement = Cast<URushCharacterMovementComponent>(RushCharacter->GetCharacterMovement()))
	{
		ULogUtils::Log(FString::Printf(TEXT("Activate Sprint Ability")), ELogLevel::Info);
		RushCharacterMovement->MaxWalkSpeed = 600.0f; // Set sprint speed
		RushCharacterMovement->MaxFlySpeed = 1000.0f;
		RushCharacterMovement->bIsSprint = true;
	}
}

void URushSprintAbility::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
	ARushCharacter* RushCharacter = Cast<ARushCharacter>(GetAvatarActorFromActorInfo());
	if (!RushCharacter)
	{
		return;
	}

	if (URushCharacterMovementComponent* RushCharacterMovement = Cast<URushCharacterMovementComponent>(RushCharacter->GetCharacterMovement()))
	{
		ULogUtils::Log(FString::Printf(TEXT("End Sprint Ability")), ELogLevel::Warning);
		RushCharacterMovement->MaxWalkSpeed = 400.0f; // Set sprint speed
		RushCharacterMovement->MaxFlySpeed = 600.0f;
		RushCharacterMovement->bIsSprint = false;
	}

	RushCharacter->ToggleWeaponLaser(true);
}
