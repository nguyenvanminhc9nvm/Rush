#include "CharacterSMG04MontageSettingsLibrary.h"
#include "Engine/Engine.h"

static TMap<ECharacterMontageName, FCharacterMontageSettings> GCharacterSMG04MontageSettingsMap;

static void InitCharacterSMG04MontageSettingsMap()
{
    if (GCharacterSMG04MontageSettingsMap.Num() > 0) return;

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
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/SMGs/AM_FP_PCH_SMG_Fire.AM_FP_PCH_SMG_Fire'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/SMGs/AM_TP_CH_SMG_Fire.AM_TP_CH_SMG_Fire'")
    );
    GCharacterSMG04MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Fire, FireSettings);

    // Fire-Empty
    FCharacterMontageSettings FireEmptySettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Common/AM_FP_PCH_Fire_Empty.AM_FP_PCH_Fire_Empty'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Common/AM_FP_PCH_Fire_Empty.AM_FP_PCH_Fire_Empty'")
    );
    GCharacterSMG04MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Fire_Empty, FireEmptySettings);

    // Reload
    FCharacterMontageSettings ReloadSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/SMGs/AM_FP_PCH_SMG_04_Reload.AM_FP_PCH_SMG_04_Reload'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/SMGs/AM_TP_CH_SMG_04_Reload.AM_TP_CH_SMG_04_Reload'")
    );
    GCharacterSMG04MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Reload, ReloadSettings);

    // Reload-Empty
    FCharacterMontageSettings ReloadEmptySettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/SMGs/AM_FP_PCH_SMG_04_Reload_Empty.AM_FP_PCH_SMG_04_Reload_Empty'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/SMGs/AM_TP_CH_SMG_04_Reload_Empty.AM_TP_CH_SMG_04_Reload_Empty'")
    );
    GCharacterSMG04MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Reload_Empty, ReloadEmptySettings);

    // Inspect
    FCharacterMontageSettings InspectSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/SMGs/AM_FP_PCH_SMG_04_Inspect.AM_FP_PCH_SMG_04_Inspect'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/SMGs/AM_TP_CH_SMG_04_Inspect.AM_TP_CH_SMG_04_Inspect'")
    );
    GCharacterSMG04MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Inspect, InspectSettings);

    // Inspect-Smooth
    FCharacterMontageSettings InspectSmoothSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/SMGs/AM_FP_PCH_SMG_04_Inspect.AM_FP_PCH_SMG_04_Inspect'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/SMGs/AM_TP_CH_SMG_04_Inspect.AM_TP_CH_SMG_04_Inspect'")
    );
    GCharacterSMG04MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Inspect_Smooth, InspectSmoothSettings);

    // Holster
    FCharacterMontageSettings HolsterSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/SMGs/AM_FP_PCH_SMG_04_Holster.AM_FP_PCH_SMG_04_Holster'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/SMGs/AM_TP_CH_SMG_04_Holster.AM_TP_CH_SMG_04_Holster'")
    );
    GCharacterSMG04MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Holster, HolsterSettings);

    // Holster-Smooth
    FCharacterMontageSettings HolsterSmoothSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/SMGs/AM_FP_PCH_SMG_04_Holster_Smooth.AM_FP_PCH_SMG_04_Holster_Smooth'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/SMGs/AM_TP_CH_SMG_04_Holster.AM_TP_CH_SMG_04_Holster'")
    );
    GCharacterSMG04MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Holster_Smooth, HolsterSmoothSettings);

    // Unholster
    FCharacterMontageSettings UnholsterSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/SMGs/AM_FP_PCH_SMG_04_Unholster.AM_FP_PCH_SMG_04_Unholster'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/SMGs/AM_TP_CH_SMG_04_Unholster.AM_TP_CH_SMG_04_Unholster'")
    );
    GCharacterSMG04MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Unholster, UnholsterSettings);

    // Unholster-Smooth
    FCharacterMontageSettings UnholsterSmoothSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/SMGs/AM_FP_PCH_SMG_04_Unholster_Smooth.AM_FP_PCH_SMG_04_Unholster_Smooth'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/SMGs/AM_TP_CH_SMG_04_Unholster.AM_TP_CH_SMG_04_Unholster'")
    );
    GCharacterSMG04MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Unholster_Smooth, UnholsterSmoothSettings);

    // Throw-Grenade
    FCharacterMontageSettings ThrowGrenadeSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Common/AM_FP_PCH_Grenade_Throw.AM_FP_PCH_Grenade_Throw'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Common/AM_TP_CH_Grenade_Throw.AM_TP_CH_Grenade_Throw'")
    );
    GCharacterSMG04MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Throw_Grenade, ThrowGrenadeSettings);

    // Throw-Grenade-Additive
    FCharacterMontageSettings ThrowGrenadeAdditiveSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Common/AM_FP_PCH_Grenade_Throw_Additive.AM_FP_PCH_Grenade_Throw_Additive'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Common/AM_TP_CH_Grenade_Throw_Additive.AM_TP_CH_Grenade_Throw_Additive'")
    );
    GCharacterSMG04MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Throw_Grenade_Additive, ThrowGrenadeAdditiveSettings);

    // Knife-Attack
    FCharacterMontageSettings KnifeAttackSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Common/AM_FP_PCH_Knife_Attack_01.AM_FP_PCH_Knife_Attack_01'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Common/AM_TP_CH_Knife_Attack.AM_TP_CH_Knife_Attack'")
    );
    GCharacterSMG04MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Knife_Attack, KnifeAttackSettings);

    // Knife-Attack-Additive
    FCharacterMontageSettings KnifeAttackAdditiveSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Common/AM_FP_PCH_Knife_Attack_01_Additive.AM_FP_PCH_Knife_Attack_01_Additive'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Common/AM_TP_CH_Knife_Attack_Additive.AM_TP_CH_Knife_Attack_Additive'")
    );
    GCharacterSMG04MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Knife_Attack_Additive, KnifeAttackAdditiveSettings);
}

FCharacterMontageSettings UCharacterSMG04MontageSettingsLibrary::GetCharacterSMG04MontageSettingsByName(ECharacterMontageName MontageName)
{
    InitCharacterSMG04MontageSettingsMap();
    if (GCharacterSMG04MontageSettingsMap.Contains(MontageName))
    {
        return GCharacterSMG04MontageSettingsMap[MontageName];
    }
    return FCharacterMontageSettings(); // Return default settings if not found
}

TArray<FCharacterMontageSettings> UCharacterSMG04MontageSettingsLibrary::GetAllCharacterSMG04MontageSettings()
{
    InitCharacterSMG04MontageSettingsMap();
    TArray<FCharacterMontageSettings> AllSettings;
    GCharacterSMG04MontageSettingsMap.GenerateValueArray(AllSettings);
    return AllSettings;
}
