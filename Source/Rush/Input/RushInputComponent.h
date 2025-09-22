#pragma once

#include "CoreMinimal.h"
#include "RushInputAction.h"
#include "EnhancedInputComponent.h"
#include "RushInputComponent.generated.h"

class UEnhancedInputLocalPlayerSubsystem;
class URushInputConfig;

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class RUSH_API URushInputComponent : public UEnhancedInputComponent
{
	GENERATED_BODY()

public:
	URushInputComponent(const FObjectInitializer& ObjectInitializer);

	void AddInputMappings(const URushInputConfig* InputConfig, UEnhancedInputLocalPlayerSubsystem* Subsystem);

	void RemoveInputMappings(const URushInputConfig* InputConfig, UEnhancedInputLocalPlayerSubsystem* Subsystem);

	template<class UserClass, typename FuncType>
	void BindNativeActions(const URushInputConfig* InputConfig, const FGameplayTag& InputTag, ETriggerEvent TriggerEvent, UserClass* Object, FuncType Func);
};

template<class UserClass, typename FuncType>
void URushInputComponent::BindNativeActions(const URushInputConfig* InputConfig, const FGameplayTag& InputTag, ETriggerEvent TriggerEvent, UserClass* Object, FuncType Func)
{
	if (!InputConfig)
	{
		UE_LOG(LogTemp, Warning, TEXT("Input config is null for tag: %s"), *InputTag.ToString());
		return;
	}

	if (const UInputAction* InputAction = InputConfig->FindInputActionByTag(InputTag))
	{
		BindAction(InputAction, TriggerEvent, Object, Func);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Input action not found for tag: %s"), *InputTag.ToString());
	}
}
