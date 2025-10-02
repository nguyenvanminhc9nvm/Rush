#include "CharacterRocketLauncher01MontageSettingsLibrary.h"
#include "Engine/Engine.h"

static TMap<ECharacterMontageName, FCharacterMontageSettings> GCharacterRocketLauncher01MontageSettingsMap;

static void InitCharacterRocketLauncher01MontageSettingsMap()
{
    if (GCharacterRocketLauncher01MontageSettingsMap.Num() > 0) return;

    // Helper function to create montage settings
    auto CreateMontageSettings = [](const FString& FirstPersonPath, const FString& ThirdPersonPath) -> FCharacterMontageSettings
    {
        FCharacterMontageSettings Settings;
        if (FirstPersonPath != TEXT("None"))
        {
            Settings.MontageBaseFirstPerson = LoadObject<UAnimMontage>(nullptr, *FirstPersonPath);
        }
        if (ThirdPersonPath != TEXT("None"))
        {
            Settings.MontageBaseThirdPerson = LoadObject<UAnimMontage>(nullptr, *ThirdPersonPath);
        }
        return Settings;
    };

    // Fire
    FCharacterMontageSettings FireSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Launchers/AM_FP_PCH_RL_01_Fire.AM_FP_PCH_RL_01_Fire'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Launchers/AM_TP_CH_RL_01_Fire.AM_TP_CH_RL_01_Fire'")
    );
    GCharacterRocketLauncher01MontageSettingsMap.Add(ECharacterMontageName::Fire, FireSettings);

    // Fire-Empty
    FCharacterMontageSettings FireEmptySettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Common/AM_FP_PCH_Fire_Empty.AM_FP_PCH_Fire_Empty'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Common/AM_FP_PCH_Fire_Empty.AM_FP_PCH_Fire_Empty'")
    );
    GCharacterRocketLauncher01MontageSettingsMap.Add(ECharacterMontageName::Fire_Empty, FireEmptySettings);

    // Reload
    FCharacterMontageSettings ReloadSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Launchers/AM_FP_PCH_RL_01_Reload.AM_FP_PCH_RL_01_Reload'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Launchers/AM_TP_CH_RL_01_Reload.AM_TP_CH_RL_01_Reload'")
    );
    GCharacterRocketLauncher01MontageSettingsMap.Add(ECharacterMontageName::Reload, ReloadSettings);

    // Reload-Empty
    FCharacterMontageSettings ReloadEmptySettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Launchers/AM_FP_PCH_RL_01_Reload.AM_FP_PCH_RL_01_Reload'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Launchers/AM_TP_CH_RL_01_Reload.AM_TP_CH_RL_01_Reload'")
    );
    GCharacterRocketLauncher01MontageSettingsMap.Add(ECharacterMontageName::Reload_Empty, ReloadEmptySettings);

    // Inspect
    FCharacterMontageSettings InspectSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Launchers/AM_FP_PCH_RL_01_Inspect.AM_FP_PCH_RL_01_Inspect'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Launchers/AM_TP_CH_RL_01_Inspect.AM_TP_CH_RL_01_Inspect'")
    );
    GCharacterRocketLauncher01MontageSettingsMap.Add(ECharacterMontageName::Inspect, InspectSettings);

    // Inspect-Smooth
    FCharacterMontageSettings InspectSmoothSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Launchers/AM_FP_PCH_RL_01_Inspect.AM_FP_PCH_RL_01_Inspect'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Launchers/AM_TP_CH_RL_01_Inspect.AM_TP_CH_RL_01_Inspect'")
    );
    GCharacterRocketLauncher01MontageSettingsMap.Add(ECharacterMontageName::Inspect_Smooth, InspectSmoothSettings);

    // Holster
    FCharacterMontageSettings HolsterSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Launchers/AM_FP_PCH_RL_01_Holster.AM_FP_PCH_RL_01_Holster'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Launchers/AM_TP_CH_RL_01_Holster.AM_TP_CH_RL_01_Holster'")
    );
    GCharacterRocketLauncher01MontageSettingsMap.Add(ECharacterMontageName::Holster, HolsterSettings);

    // Holster-Smooth
    FCharacterMontageSettings HolsterSmoothSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Launchers/AM_FP_PCH_RL_01_Holster_Smooth.AM_FP_PCH_RL_01_Holster_Smooth'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Launchers/AM_TP_CH_RL_01_Holster.AM_TP_CH_RL_01_Holster'")
    );
    GCharacterRocketLauncher01MontageSettingsMap.Add(ECharacterMontageName::Holster_Smooth, HolsterSmoothSettings);

    // Unholster
    FCharacterMontageSettings UnholsterSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Launchers/AM_FP_PCH_RL_01_Unholster.AM_FP_PCH_RL_01_Unholster'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Launchers/AM_TP_CH_RL_01_Unholster.AM_TP_CH_RL_01_Unholster'")
    );
    GCharacterRocketLauncher01MontageSettingsMap.Add(ECharacterMontageName::Unholster, UnholsterSettings);

    // Unholster-Smooth
    FCharacterMontageSettings UnholsterSmoothSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Launchers/AM_FP_PCH_RL_01_Unholster_Smooth.AM_FP_PCH_RL_01_Unholster_Smooth'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Launchers/AM_TP_CH_RL_01_Unholster.AM_TP_CH_RL_01_Unholster'")
    );
    GCharacterRocketLauncher01MontageSettingsMap.Add(ECharacterMontageName::Unholster_Smooth, UnholsterSmoothSettings);

    // Throw-Grenade
    FCharacterMontageSettings ThrowGrenadeSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Common/AM_FP_PCH_Grenade_Throw.AM_FP_PCH_Grenade_Throw'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Common/AM_TP_CH_Grenade_Throw.AM_TP_CH_Grenade_Throw'")
    );
    GCharacterRocketLauncher01MontageSettingsMap.Add(ECharacterMontageName::Throw_Grenade, ThrowGrenadeSettings);

    // Throw-Grenade-Additive
    FCharacterMontageSettings ThrowGrenadeAdditiveSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Common/AM_FP_PCH_Grenade_Throw_Additive.AM_FP_PCH_Grenade_Throw_Additive'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Common/AM_TP_CH_Grenade_Throw_Additive.AM_TP_CH_Grenade_Throw_Additive'")
    );
    GCharacterRocketLauncher01MontageSettingsMap.Add(ECharacterMontageName::Throw_Grenade_Additive, ThrowGrenadeAdditiveSettings);

    // Knife-Attack
    FCharacterMontageSettings KnifeAttackSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Common/AM_FP_PCH_Knife_Attack_01.AM_FP_PCH_Knife_Attack_01'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Common/AM_TP_CH_Knife_Attack.AM_TP_CH_Knife_Attack'")
    );
    GCharacterRocketLauncher01MontageSettingsMap.Add(ECharacterMontageName::Knife_Attack, KnifeAttackSettings);

    // Knife-Attack-Additive
    FCharacterMontageSettings KnifeAttackAdditiveSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Common/AM_FP_PCH_Knife_Attack_01_Additive.AM_FP_PCH_Knife_Attack_01_Additive'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Common/AM_TP_CH_Knife_Attack_Additive.AM_TP_CH_Knife_Attack_Additive'")
    );
    GCharacterRocketLauncher01MontageSettingsMap.Add(ECharacterMontageName::Knife_Attack_Additive, KnifeAttackAdditiveSettings);
}

FCharacterMontageSettings UCharacterRocketLauncher01MontageSettingsLibrary::GetCharacterRocketLauncher01MontageSettingsByName(ECharacterMontageName MontageName)
{
    InitCharacterRocketLauncher01MontageSettingsMap();
    if (GCharacterRocketLauncher01MontageSettingsMap.Contains(MontageName))
    {
        return GCharacterRocketLauncher01MontageSettingsMap[MontageName];
    }
    return FCharacterMontageSettings(); // Return default settings if not found
}
