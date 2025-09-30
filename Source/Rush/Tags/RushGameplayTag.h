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

	// Character Abilities Tags
	RUSH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Character_Abilities_Allowed_Aim);
	RUSH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Character_Abilities_Allowed_Bolt_Action);
	RUSH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Character_Abilities_Allowed_Fire);
	RUSH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Character_Abilities_Allowed_Grenade_Throw);
	RUSH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Character_Abilities_Allowed_Holster);
	RUSH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Character_Abilities_Allowed_Inspect);
	RUSH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Character_Abilities_Allowed_Interact);
	RUSH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Character_Abilities_Allowed_Knife_Attack);
	RUSH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Character_Abilities_Allowed_Reload);
	RUSH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Character_Abilities_Allowed_Run);
	RUSH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Character_Abilities_Allowed_Swapping);
	RUSH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Character_Abilities_Allowed_Tactical_Sprint);
}
