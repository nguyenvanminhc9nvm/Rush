#include "CharacterAR01MontageSettingsLibrary.h"
#include "Engine/Engine.h"

static TMap<ECharacterMontageName, FCharacterMontageSettings> GCharacterAR01MontageSettingsMap;

static void InitCharacterAR01MontageSettingsMap()
{
    if (GCharacterAR01MontageSettingsMap.Num() > 0) return;

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
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/ARs/AM_FP_PCH_AR_Fire.AM_FP_PCH_AR_Fire'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/ARs/AM_TP_CH_AR_Fire.AM_TP_CH_AR_Fire'")
    );
    GCharacterAR01MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Fire, FireSettings);

    // Fire-Empty
    FCharacterMontageSettings FireEmptySettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Common/AM_FP_PCH_Fire_Empty.AM_FP_PCH_Fire_Empty'"),
        TEXT("None")
    );
    GCharacterAR01MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Fire_Empty, FireEmptySettings);

    // Reload
    FCharacterMontageSettings ReloadSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/ARs/AM_FP_PCH_AR_01_Reload.AM_FP_PCH_AR_01_Reload'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/ARs/AM_TP_CH_AR_01_Reload.AM_TP_CH_AR_01_Reload'")
    );
    GCharacterAR01MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Reload, ReloadSettings);

    // Reload-Empty
    FCharacterMontageSettings ReloadEmptySettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/ARs/AM_FP_PCH_AR_01_Reload_Empty.AM_FP_PCH_AR_01_Reload_Empty'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/ARs/AM_TP_CH_AR_01_Reload_Empty.AM_TP_CH_AR_01_Reload_Empty'")
    );
    GCharacterAR01MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Reload_Empty, ReloadEmptySettings);

    // Inspect
    FCharacterMontageSettings InspectSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/ARs/AM_FP_PCH_AR_01_Inspect.AM_FP_PCH_AR_01_Inspect'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/ARs/AM_TP_CH_AR_01_Inspect.AM_TP_CH_AR_01_Inspect'")
    );
    GCharacterAR01MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Inspect, InspectSettings);

    // Inspect-Smooth
    FCharacterMontageSettings InspectSmoothSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/ARs/AM_FP_PCH_AR_01_Inspect.AM_FP_PCH_AR_01_Inspect'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/ARs/AM_TP_CH_AR_01_Inspect.AM_TP_CH_AR_01_Inspect'")
    );
    GCharacterAR01MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Inspect_Smooth, InspectSmoothSettings);

    // Holster
    FCharacterMontageSettings HolsterSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/ARs/AM_FP_PCH_AR_01_Holster.AM_FP_PCH_AR_01_Holster'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/ARs/AM_TP_CH_AR_01_Holster.AM_TP_CH_AR_01_Holster'")
    );
    GCharacterAR01MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Holster, HolsterSettings);

    // Holster-Smooth
    FCharacterMontageSettings HolsterSmoothSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/ARs/AM_FP_PCH_AR_01_Holster_Smooth.AM_FP_PCH_AR_01_Holster_Smooth'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/ARs/AM_TP_CH_AR_01_Holster.AM_TP_CH_AR_01_Holster'")
    );
    GCharacterAR01MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Holster_Smooth, HolsterSmoothSettings);

    // Unholster
    FCharacterMontageSettings UnholsterSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/ARs/AM_FP_PCH_AR_01_Unholster.AM_FP_PCH_AR_01_Unholster'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/ARs/AM_TP_CH_AR_01_Unholster.AM_TP_CH_AR_01_Unholster'")
    );
    GCharacterAR01MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Unholster, UnholsterSettings);

    // Unholster-Smooth
    FCharacterMontageSettings UnholsterSmoothSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/ARs/AM_FP_PCH_AR_01_Unholster_Smooth.AM_FP_PCH_AR_01_Unholster_Smooth'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/ARs/AM_TP_CH_AR_01_Unholster.AM_TP_CH_AR_01_Unholster'")
    );
    GCharacterAR01MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Unholster_Smooth, UnholsterSmoothSettings);

    // Throw-Grenade
    FCharacterMontageSettings ThrowGrenadeSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Common/AM_FP_PCH_Grenade_Throw.AM_FP_PCH_Grenade_Throw'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Common/AM_TP_CH_Grenade_Throw.AM_TP_CH_Grenade_Throw'")
    );
    GCharacterAR01MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Throw_Grenade, ThrowGrenadeSettings);

    // Throw-Grenade-Additive
    FCharacterMontageSettings ThrowGrenadeAdditiveSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Common/AM_FP_PCH_Grenade_Throw_Additive.AM_FP_PCH_Grenade_Throw_Additive'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Common/AM_TP_CH_Grenade_Throw_Additive.AM_TP_CH_Grenade_Throw_Additive'")
    );
    GCharacterAR01MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Throw_Grenade_Additive, ThrowGrenadeAdditiveSettings);

    // Knife-Attack
    FCharacterMontageSettings KnifeAttackSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Common/AM_FP_PCH_Knife_Attack_01.AM_FP_PCH_Knife_Attack_01'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Common/AM_TP_CH_Knife_Attack.AM_TP_CH_Knife_Attack'")
    );
    GCharacterAR01MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Knife_Attack, KnifeAttackSettings);

    // Knife-Attack-Additive
    FCharacterMontageSettings KnifeAttackAdditiveSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Common/AM_FP_PCH_Knife_Attack_01_Additive.AM_FP_PCH_Knife_Attack_01_Additive'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Common/AM_TP_CH_Knife_Attack_Additive.AM_TP_CH_Knife_Attack_Additive'")
    );
    GCharacterAR01MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Knife_Attack_Additive, KnifeAttackAdditiveSettings);
}

FCharacterMontageSettings UCharacterAR01MontageSettingsLibrary::GetCharacterAR01MontageSettingsByName(ECharacterMontageName MontageName)
{
    InitCharacterAR01MontageSettingsMap();
    if (GCharacterAR01MontageSettingsMap.Contains(MontageName))
    {
        return GCharacterAR01MontageSettingsMap[MontageName];
    }
    return FCharacterMontageSettings(); // Return default settings if not found
}

TArray<FCharacterMontageSettings> UCharacterAR01MontageSettingsLibrary::GetAllCharacterAR01MontageSettings()
{
    InitCharacterAR01MontageSettingsMap();
    TArray<FCharacterMontageSettings> AllSettings;
    GCharacterAR01MontageSettingsMap.GenerateValueArray(AllSettings);
    return AllSettings;
}

