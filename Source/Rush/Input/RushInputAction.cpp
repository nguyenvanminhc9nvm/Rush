#include "RushInputAction.h"

URushInputConfig::URushInputConfig(const FObjectInitializer& ObjectInitializer): Super(ObjectInitializer)
{
}

const UInputAction* URushInputConfig::FindInputActionByTag(const FGameplayTag& Tag) const
{
	for (const FRushInputAction& Action : InputActions)
	{
		if (Action.ActionTag == Tag)
		{
			return Action.InputAction;
		}
	}

	return nullptr;
}
