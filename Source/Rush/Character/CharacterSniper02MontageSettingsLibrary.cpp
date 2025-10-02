#include "CharacterSniper02MontageSettingsLibrary.h"
#include "Engine/Engine.h"

static TMap<ECharacterMontageName, FCharacterMontageSettings> GCharacterSniper02MontageSettingsMap;

static void InitCharacterSniper02MontageSettingsMap()
{
    if (GCharacterSniper02MontageSettingsMap.Num() > 0) return;

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
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Snipers/AM_FP_PCH_Sniper_Fire.AM_FP_PCH_Sniper_Fire'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Snipers/AM_TP_CH_Sniper_02_Fire.AM_TP_CH_Sniper_02_Fire'")
    );
    GCharacterSniper02MontageSettingsMap.Add(ECharacterMontageName::Fire, FireSettings);

    // Fire-Empty
    FCharacterMontageSettings FireEmptySettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Common/AM_FP_PCH_Fire_Empty.AM_FP_PCH_Fire_Empty'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Common/AM_FP_PCH_Fire_Empty.AM_FP_PCH_Fire_Empty'")
    );
    GCharacterSniper02MontageSettingsMap.Add(ECharacterMontageName::Fire_Empty, FireEmptySettings);

    // Reload-Bolt
    FCharacterMontageSettings ReloadBoltSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Snipers/AM_FP_PCH_Sniper_02_Reload_Bolt.AM_FP_PCH_Sniper_02_Reload_Bolt'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Snipers/AM_TP_CH_Sniper_02_Reload_Bolt.AM_TP_CH_Sniper_02_Reload_Bolt'")
    );
    GCharacterSniper02MontageSettingsMap.Add(ECharacterMontageName::Reload_Bolt, ReloadBoltSettings);

    // Reload-Open
    FCharacterMontageSettings ReloadOpenSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Snipers/AM_FP_PCH_Sniper_02_Reload_Open.AM_FP_PCH_Sniper_02_Reload_Open'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Snipers/AM_TP_CH_Sniper_02_Reload_Open.AM_TP_CH_Sniper_02_Reload_Open'")
    );
    GCharacterSniper02MontageSettingsMap.Add(ECharacterMontageName::Reload_Open, ReloadOpenSettings);

    // Reload-Insert
    FCharacterMontageSettings ReloadInsertSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Snipers/AM_FP_PCH_Sniper_02_Reload_Insert.AM_FP_PCH_Sniper_02_Reload_Insert'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Snipers/AM_TP_CH_Sniper_02_Reload_Insert.AM_TP_CH_Sniper_02_Reload_Insert'")
    );
    GCharacterSniper02MontageSettingsMap.Add(ECharacterMontageName::Reload_Insert, ReloadInsertSettings);

    // Reload-Close
    FCharacterMontageSettings ReloadCloseSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Snipers/AM_FP_PCH_Sniper_02_Reload_Close.AM_FP_PCH_Sniper_02_Reload_Close'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Snipers/AM_TP_CH_Sniper_02_Reload_Close.AM_TP_CH_Sniper_02_Reload_Close'")
    );
    GCharacterSniper02MontageSettingsMap.Add(ECharacterMontageName::Reload_Close, ReloadCloseSettings);

    // Inspect
    FCharacterMontageSettings InspectSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Snipers/AM_FP_PCH_Sniper_02_Inspect.AM_FP_PCH_Sniper_02_Inspect'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Snipers/AM_TP_CH_Sniper_02_Inspect.AM_TP_CH_Sniper_02_Inspect'")
    );
    GCharacterSniper02MontageSettingsMap.Add(ECharacterMontageName::Inspect, InspectSettings);

    // Inspect-Smooth
    FCharacterMontageSettings InspectSmoothSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Snipers/AM_FP_PCH_Sniper_02_Inspect.AM_FP_PCH_Sniper_02_Inspect'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Snipers/AM_TP_CH_Sniper_02_Inspect.AM_TP_CH_Sniper_02_Inspect'")
    );
    GCharacterSniper02MontageSettingsMap.Add(ECharacterMontageName::Inspect_Smooth, InspectSmoothSettings);

    // Holster
    FCharacterMontageSettings HolsterSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Snipers/AM_FP_PCH_Sniper_02_Holster.AM_FP_PCH_Sniper_02_Holster'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Snipers/AM_TP_CH_Sniper_02_Holster.AM_TP_CH_Sniper_02_Holster'")
    );
    GCharacterSniper02MontageSettingsMap.Add(ECharacterMontageName::Holster, HolsterSettings);

    // Holster-Smooth
    FCharacterMontageSettings HolsterSmoothSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Snipers/AM_FP_PCH_Sniper_02_Holster_Smooth.AM_FP_PCH_Sniper_02_Holster_Smooth'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Snipers/AM_TP_CH_Sniper_02_Holster.AM_TP_CH_Sniper_02_Holster'")
    );
    GCharacterSniper02MontageSettingsMap.Add(ECharacterMontageName::Holster_Smooth, HolsterSmoothSettings);

    // Unholster
    FCharacterMontageSettings UnholsterSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Snipers/AM_FP_PCH_Sniper_02_Unholster.AM_FP_PCH_Sniper_02_Unholster'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Snipers/AM_TP_CH_Sniper_02_Unholster.AM_TP_CH_Sniper_02_Unholster'")
    );
    GCharacterSniper02MontageSettingsMap.Add(ECharacterMontageName::Unholster, UnholsterSettings);

    // Unholster-Smooth
    FCharacterMontageSettings UnholsterSmoothSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Snipers/AM_FP_PCH_Sniper_02_Unholster_Smooth.AM_FP_PCH_Sniper_02_Unholster_Smooth'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Snipers/AM_TP_CH_Sniper_02_Unholster.AM_TP_CH_Sniper_02_Unholster'")
    );
    GCharacterSniper02MontageSettingsMap.Add(ECharacterMontageName::Unholster_Smooth, UnholsterSmoothSettings);

    // Throw-Grenade
    FCharacterMontageSettings ThrowGrenadeSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Common/AM_FP_PCH_Grenade_Throw.AM_FP_PCH_Grenade_Throw'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Common/AM_TP_CH_Grenade_Throw.AM_TP_CH_Grenade_Throw'")
    );
    GCharacterSniper02MontageSettingsMap.Add(ECharacterMontageName::Throw_Grenade, ThrowGrenadeSettings);

    // Throw-Grenade-Additive
    FCharacterMontageSettings ThrowGrenadeAdditiveSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Common/AM_FP_PCH_Grenade_Throw_Additive.AM_FP_PCH_Grenade_Throw_Additive'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Common/AM_TP_CH_Grenade_Throw_Additive.AM_TP_CH_Grenade_Throw_Additive'")
    );
    GCharacterSniper02MontageSettingsMap.Add(ECharacterMontageName::Throw_Grenade_Additive, ThrowGrenadeAdditiveSettings);

    // Knife-Attack
    FCharacterMontageSettings KnifeAttackSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Common/AM_FP_PCH_Knife_Attack_01.AM_FP_PCH_Knife_Attack_01'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Common/AM_TP_CH_Knife_Attack.AM_TP_CH_Knife_Attack'")
    );
    GCharacterSniper02MontageSettingsMap.Add(ECharacterMontageName::Knife_Attack, KnifeAttackSettings);

    // Knife-Attack-Additive
    FCharacterMontageSettings KnifeAttackAdditiveSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Common/AM_FP_PCH_Knife_Attack_01_Additive.AM_FP_PCH_Knife_Attack_01_Additive'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Common/AM_TP_CH_Knife_Attack_Additive.AM_TP_CH_Knife_Attack_Additive'")
    );
    GCharacterSniper02MontageSettingsMap.Add(ECharacterMontageName::Knife_Attack_Additive, KnifeAttackAdditiveSettings);
}

FCharacterMontageSettings UCharacterSniper02MontageSettingsLibrary::GetCharacterSniper02MontageSettingsByName(ECharacterMontageName MontageName)
{
    InitCharacterSniper02MontageSettingsMap();
    if (GCharacterSniper02MontageSettingsMap.Contains(MontageName))
    {
        return GCharacterSniper02MontageSettingsMap[MontageName];
    }
    return FCharacterMontageSettings(); // Return default settings if not found
}
