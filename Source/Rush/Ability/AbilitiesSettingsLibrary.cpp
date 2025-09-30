#include "AbilitiesSettingsLibrary.h"
#include "Engine/Engine.h"
#include "../Tags/RushGameplayTag.h"

static TMap<EAbilityName, FAbilities> GAbilitiesMap;

static void InitAbilitiesMap()
{
    if (GAbilitiesMap.Num() > 0) return;

    // Helper function to create GameplayTagContainer from centralized tags
    auto CreateTagContainerFromTags = [](const TArray<FGameplayTag>& Tags) -> FGameplayTagContainer
    {
        FGameplayTagContainer Container;
        for (const FGameplayTag& Tag : Tags)
        {
            if (Tag.IsValid())
            {
                Container.AddTag(Tag);
            }
        }
        return Container;
    };

    // Helper function to create GameAbility using centralized tags
    auto CreateGameAbilityFromTags = [&](const TArray<FGameplayTag>& RequiredTags, const TArray<FGameplayTag>& BlockedTags,
                                        const TArray<FGameplayTag>& AddedTags, const TArray<FGameplayTag>& RemovedTags) -> FGameAbility
    {
        FGameAbility Ability;
        Ability.TagsRequired = CreateTagContainerFromTags(RequiredTags);
        Ability.TagsBlocked = CreateTagContainerFromTags(BlockedTags);
        Ability.TagsAdded = CreateTagContainerFromTags(AddedTags);
        Ability.TagsRemoved = CreateTagContainerFromTags(RemovedTags);
        return Ability;
    };

    // Assault Rifle Abilities
    FAbilities AssaultRifleAbilities;
    AssaultRifleAbilities.Name = TEXT("Assault-Rifle");
    
    // Ability Knife
    AssaultRifleAbilities.AbilityKnife = CreateGameAbilityFromTags(
        {RushGameplayTag::Character_Abilities_Allowed_Knife_Attack},
        {},
        {},
        {RushGameplayTag::Character_Abilities_Allowed_Aim,
         RushGameplayTag::Character_Abilities_Allowed_Grenade_Throw,
         RushGameplayTag::Character_Abilities_Allowed_Inspect,
         RushGameplayTag::Character_Abilities_Allowed_Knife_Attack,
         RushGameplayTag::Character_Abilities_Allowed_Reload,
         RushGameplayTag::Character_Abilities_Allowed_Run,
         RushGameplayTag::Character_Abilities_Allowed_Bolt_Action,
         RushGameplayTag::Character_Abilities_Allowed_Holster,
         RushGameplayTag::Character_Abilities_Allowed_Fire,
         RushGameplayTag::Character_Abilities_Allowed_Interact,
         RushGameplayTag::Character_Abilities_Allowed_Swapping,
         RushGameplayTag::Character_Abilities_Allowed_Tactical_Sprint}
    );

    // Ability Reload
    AssaultRifleAbilities.AbilityReload = CreateGameAbilityFromTags(
        {RushGameplayTag::Character_Abilities_Allowed_Reload},
        {},
        {},
        {RushGameplayTag::Character_Abilities_Allowed_Grenade_Throw,
         RushGameplayTag::Character_Abilities_Allowed_Inspect,
         RushGameplayTag::Character_Abilities_Allowed_Knife_Attack,
         RushGameplayTag::Character_Abilities_Allowed_Reload,
         RushGameplayTag::Character_Abilities_Allowed_Run,
         RushGameplayTag::Character_Abilities_Allowed_Fire,
         RushGameplayTag::Character_Abilities_Allowed_Bolt_Action,
         RushGameplayTag::Character_Abilities_Allowed_Tactical_Sprint}
    );

    // Ability Inspect
    AssaultRifleAbilities.AbilityInspect = CreateGameAbilityFromTags(
        {RushGameplayTag::Character_Abilities_Allowed_Inspect},
        {},
        {},
        {}
    );

    // Ability Fire
    AssaultRifleAbilities.AbilityFire = CreateGameAbilityFromTags(
        {RushGameplayTag::Character_Abilities_Allowed_Fire},
        {},
        {},
        {RushGameplayTag::Character_Abilities_Allowed_Grenade_Throw,
         RushGameplayTag::Character_Abilities_Allowed_Inspect,
         RushGameplayTag::Character_Abilities_Allowed_Knife_Attack,
         RushGameplayTag::Character_Abilities_Allowed_Reload,
         RushGameplayTag::Character_Abilities_Allowed_Run,
         RushGameplayTag::Character_Abilities_Allowed_Bolt_Action,
         RushGameplayTag::Character_Abilities_Allowed_Holster,
         RushGameplayTag::Character_Abilities_Allowed_Tactical_Sprint}
    );

    // Ability Aim
    AssaultRifleAbilities.AbilityAim = CreateGameAbilityFromTags(
        {RushGameplayTag::Character_Abilities_Allowed_Aim},
        {},
        {},
        {RushGameplayTag::Character_Abilities_Allowed_Grenade_Throw,
         RushGameplayTag::Character_Abilities_Allowed_Inspect,
         RushGameplayTag::Character_Abilities_Allowed_Knife_Attack,
         RushGameplayTag::Character_Abilities_Allowed_Reload,
         RushGameplayTag::Character_Abilities_Allowed_Run,
         RushGameplayTag::Character_Abilities_Allowed_Bolt_Action,
         RushGameplayTag::Character_Abilities_Allowed_Holster,
         RushGameplayTag::Character_Abilities_Allowed_Fire,
         RushGameplayTag::Character_Abilities_Allowed_Interact,
         RushGameplayTag::Character_Abilities_Allowed_Swapping,
         RushGameplayTag::Character_Abilities_Allowed_Tactical_Sprint}
    );

    // Ability Grenade Throw
    AssaultRifleAbilities.AbilityGrenadeThrow = CreateGameAbilityFromTags(
        {RushGameplayTag::Character_Abilities_Allowed_Grenade_Throw},
        {},
        {},
        {RushGameplayTag::Character_Abilities_Allowed_Aim,
         RushGameplayTag::Character_Abilities_Allowed_Grenade_Throw,
         RushGameplayTag::Character_Abilities_Allowed_Inspect,
         RushGameplayTag::Character_Abilities_Allowed_Knife_Attack,
         RushGameplayTag::Character_Abilities_Allowed_Reload,
         RushGameplayTag::Character_Abilities_Allowed_Run,
         RushGameplayTag::Character_Abilities_Allowed_Bolt_Action,
         RushGameplayTag::Character_Abilities_Allowed_Holster,
         RushGameplayTag::Character_Abilities_Allowed_Fire,
         RushGameplayTag::Character_Abilities_Allowed_Interact,
         RushGameplayTag::Character_Abilities_Allowed_Swapping,
         RushGameplayTag::Character_Abilities_Allowed_Tactical_Sprint}
    );

    // Ability Run
    AssaultRifleAbilities.AbilityRun = CreateGameAbilityFromTags(
        {RushGameplayTag::Character_Abilities_Allowed_Run},
        {},
        {},
        {RushGameplayTag::Character_Abilities_Allowed_Aim,
         RushGameplayTag::Character_Abilities_Allowed_Grenade_Throw,
         RushGameplayTag::Character_Abilities_Allowed_Inspect,
         RushGameplayTag::Character_Abilities_Allowed_Knife_Attack,
         RushGameplayTag::Character_Abilities_Allowed_Reload,
         RushGameplayTag::Character_Abilities_Allowed_Run,
         RushGameplayTag::Character_Abilities_Allowed_Bolt_Action,
         RushGameplayTag::Character_Abilities_Allowed_Holster,
         RushGameplayTag::Character_Abilities_Allowed_Fire,
         RushGameplayTag::Character_Abilities_Allowed_Interact,
         RushGameplayTag::Character_Abilities_Allowed_Swapping,
         RushGameplayTag::Character_Abilities_Allowed_Tactical_Sprint}
    );

    // Ability Bolt Action
    AssaultRifleAbilities.AbilityBoltAction = CreateGameAbilityFromTags(
        {RushGameplayTag::Character_Abilities_Allowed_Bolt_Action},
        {},
        {},
        {RushGameplayTag::Character_Abilities_Allowed_Grenade_Throw,
         RushGameplayTag::Character_Abilities_Allowed_Inspect,
         RushGameplayTag::Character_Abilities_Allowed_Knife_Attack,
         RushGameplayTag::Character_Abilities_Allowed_Reload,
         RushGameplayTag::Character_Abilities_Allowed_Run,
         RushGameplayTag::Character_Abilities_Allowed_Bolt_Action,
         RushGameplayTag::Character_Abilities_Allowed_Holster,
         RushGameplayTag::Character_Abilities_Allowed_Fire,
         RushGameplayTag::Character_Abilities_Allowed_Interact,
         RushGameplayTag::Character_Abilities_Allowed_Swapping,
         RushGameplayTag::Character_Abilities_Allowed_Tactical_Sprint}
    );

    // Ability Holster
    AssaultRifleAbilities.AbilityHolster = CreateGameAbilityFromTags(
        {RushGameplayTag::Character_Abilities_Allowed_Holster},
        {},
        {},
        {RushGameplayTag::Character_Abilities_Allowed_Aim,
         RushGameplayTag::Character_Abilities_Allowed_Grenade_Throw,
         RushGameplayTag::Character_Abilities_Allowed_Inspect,
         RushGameplayTag::Character_Abilities_Allowed_Knife_Attack,
         RushGameplayTag::Character_Abilities_Allowed_Reload,
         RushGameplayTag::Character_Abilities_Allowed_Run,
         RushGameplayTag::Character_Abilities_Allowed_Bolt_Action,
         RushGameplayTag::Character_Abilities_Allowed_Holster,
         RushGameplayTag::Character_Abilities_Allowed_Fire,
         RushGameplayTag::Character_Abilities_Allowed_Interact,
         RushGameplayTag::Character_Abilities_Allowed_Swapping,
         RushGameplayTag::Character_Abilities_Allowed_Tactical_Sprint}
    );

    // Ability Interact
    AssaultRifleAbilities.AbilityInteract = CreateGameAbilityFromTags(
        {RushGameplayTag::Character_Abilities_Allowed_Interact},
        {},
        {},
        {RushGameplayTag::Character_Abilities_Allowed_Aim,
         RushGameplayTag::Character_Abilities_Allowed_Grenade_Throw,
         RushGameplayTag::Character_Abilities_Allowed_Inspect,
         RushGameplayTag::Character_Abilities_Allowed_Knife_Attack,
         RushGameplayTag::Character_Abilities_Allowed_Reload,
         RushGameplayTag::Character_Abilities_Allowed_Run,
         RushGameplayTag::Character_Abilities_Allowed_Bolt_Action,
         RushGameplayTag::Character_Abilities_Allowed_Holster,
         RushGameplayTag::Character_Abilities_Allowed_Fire,
         RushGameplayTag::Character_Abilities_Allowed_Interact,
         RushGameplayTag::Character_Abilities_Allowed_Swapping,
         RushGameplayTag::Character_Abilities_Allowed_Tactical_Sprint}
    );

    // Ability Swapping
    AssaultRifleAbilities.AbilitySwapping = CreateGameAbilityFromTags(
        {RushGameplayTag::Character_Abilities_Allowed_Swapping},
        {},
        {},
        {RushGameplayTag::Character_Abilities_Allowed_Aim,
         RushGameplayTag::Character_Abilities_Allowed_Grenade_Throw,
         RushGameplayTag::Character_Abilities_Allowed_Inspect,
         RushGameplayTag::Character_Abilities_Allowed_Knife_Attack,
         RushGameplayTag::Character_Abilities_Allowed_Reload,
         RushGameplayTag::Character_Abilities_Allowed_Run,
         RushGameplayTag::Character_Abilities_Allowed_Bolt_Action,
         RushGameplayTag::Character_Abilities_Allowed_Holster,
         RushGameplayTag::Character_Abilities_Allowed_Fire,
         RushGameplayTag::Character_Abilities_Allowed_Interact,
         RushGameplayTag::Character_Abilities_Allowed_Swapping,
         RushGameplayTag::Character_Abilities_Allowed_Tactical_Sprint}
    );

    // Ability Tactical Sprint
    AssaultRifleAbilities.AbilityTacticalSprint = CreateGameAbilityFromTags(
        {RushGameplayTag::Character_Abilities_Allowed_Tactical_Sprint},
        {},
        {},
        {RushGameplayTag::Character_Abilities_Allowed_Aim,
         RushGameplayTag::Character_Abilities_Allowed_Grenade_Throw,
         RushGameplayTag::Character_Abilities_Allowed_Inspect,
         RushGameplayTag::Character_Abilities_Allowed_Knife_Attack,
         RushGameplayTag::Character_Abilities_Allowed_Reload,
         RushGameplayTag::Character_Abilities_Allowed_Run,
         RushGameplayTag::Character_Abilities_Allowed_Bolt_Action,
         RushGameplayTag::Character_Abilities_Allowed_Holster,
         RushGameplayTag::Character_Abilities_Allowed_Fire,
         RushGameplayTag::Character_Abilities_Allowed_Interact,
         RushGameplayTag::Character_Abilities_Allowed_Swapping,
         RushGameplayTag::Character_Abilities_Allowed_Tactical_Sprint}
    );

    GAbilitiesMap.Add(EAbilityName::Assault_Rifle_Abilities, AssaultRifleAbilities);

    // For now, we'll use the same abilities for other weapon types
    // In a real implementation, you would parse the JSON for each weapon type
    GAbilitiesMap.Add(EAbilityName::Handgun_Abilities, AssaultRifleAbilities);
    GAbilitiesMap.Add(EAbilityName::SMG_Abilities, AssaultRifleAbilities);
    GAbilitiesMap.Add(EAbilityName::Sniper_Abilities, AssaultRifleAbilities);
    GAbilitiesMap.Add(EAbilityName::Shotgun_Abilities, AssaultRifleAbilities);
    GAbilitiesMap.Add(EAbilityName::Rocket_Launcher_Abilities, AssaultRifleAbilities);
    GAbilitiesMap.Add(EAbilityName::Grenade_Launcher_Abilities, AssaultRifleAbilities);
}

FAbilities UAbilitiesSettingsLibrary::GetAbilitiesByName(EAbilityName AbilityName)
{
    InitAbilitiesMap();
    if (GAbilitiesMap.Contains(AbilityName))
    {
        return GAbilitiesMap[AbilityName];
    }
    return FAbilities(); // Return default abilities if not found
}
