#include "RushInputComponent.h"
#include "EnhancedInputSubsystems.h"

URushInputComponent::URushInputComponent(const FObjectInitializer& ObjectInitializer): Super(ObjectInitializer)
{
}

void URushInputComponent::AddInputMappings(const URushInputConfig* InputConfig,
	UEnhancedInputLocalPlayerSubsystem* Subsystem)
{
	check(InputConfig);
	check(Subsystem);

	Subsystem->AddMappingContext(InputConfig->InputMappingContext, 0);
}

void URushInputComponent::RemoveInputMappings(const URushInputConfig* InputConfig,
	UEnhancedInputLocalPlayerSubsystem* Subsystem)
{
	check(InputConfig);
	check(Subsystem);

	Subsystem->RemoveMappingContext(InputConfig->InputMappingContext);
}

