#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "RushAbilitySystemComponent.generated.h"

class FNativeGameplayTag;

UCLASS(BlueprintType)
class RUSH_API URushAbilitySystemComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()

public:
	URushAbilitySystemComponent();

	virtual void BeginPlay() override;
	
	void TryGiveCharacterAbility();
	
	void TryActivateAbilityByTags(const FNativeGameplayTag& GameplayTags) ;

	void TryCancelAbilityByTags(const FNativeGameplayTag& GameplayTags) ;

};