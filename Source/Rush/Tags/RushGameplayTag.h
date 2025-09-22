#pragma once
#include "GameplayTagContainer.h"
#include "NativeGameplayTags.h"

namespace RushGameplayTag
{
	RUSH_API FGameplayTag FindTagByString(const FString& TagString, bool bMatchPartialString = false);

	// Input Tags
	RUSH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Move);
	RUSH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Look);

	RUSH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Ability_Movement);
	RUSH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Ability_Look);
}
