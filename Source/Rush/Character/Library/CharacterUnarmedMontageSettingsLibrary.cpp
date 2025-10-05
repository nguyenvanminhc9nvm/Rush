#include "CharacterUnarmedMontageSettingsLibrary.h"
#include "Engine/Engine.h"

static TMap<ECharacterMontageName, FCharacterMontageSettings> GCharacterUnarmedMontageSettingsMap;

static void InitCharacterUnarmedMontageSettingsMap()
{
    if (GCharacterUnarmedMontageSettingsMap.Num() > 0) return;

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

    // Inspect
    FCharacterMontageSettings InspectSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Unarmed/AM_FP_PCH_Unarmed_Inspect.AM_FP_PCH_Unarmed_Inspect'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Unarmed/AM_FP_PCH_Unarmed_Inspect.AM_FP_PCH_Unarmed_Inspect'")
    );
    GCharacterUnarmedMontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Inspect, InspectSettings);

    // Inspect-Smooth
    FCharacterMontageSettings InspectSmoothSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Unarmed/AM_FP_PCH_Unarmed_Inspect_Smooth.AM_FP_PCH_Unarmed_Inspect_Smooth'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Unarmed/AM_FP_PCH_Unarmed_Inspect_Smooth.AM_FP_PCH_Unarmed_Inspect_Smooth'")
    );
    GCharacterUnarmedMontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Inspect_Smooth, InspectSmoothSettings);

    // Unholster
    FCharacterMontageSettings UnholsterSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Unarmed/AM_FP_PCH_Unarmed_Unholster.AM_FP_PCH_Unarmed_Unholster'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Unarmed/AM_FP_PCH_Unarmed_Unholster.AM_FP_PCH_Unarmed_Unholster'")
    );
    GCharacterUnarmedMontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Unholster, UnholsterSettings);

    // Throw-Grenade
    FCharacterMontageSettings ThrowGrenadeSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Unarmed/AM_FP_PCH_Unarmed_Grenade_Throw.AM_FP_PCH_Unarmed_Grenade_Throw'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Common/AM_TP_CH_Grenade_Throw.AM_TP_CH_Grenade_Throw'")
    );
    GCharacterUnarmedMontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Throw_Grenade, ThrowGrenadeSettings);

    // Knife-Attack
    FCharacterMontageSettings KnifeAttackSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Unarmed/AM_FP_PCH_Unarmed_Knife_Attack_01.AM_FP_PCH_Unarmed_Knife_Attack_01'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Common/AM_TP_CH_Knife_Attack.AM_TP_CH_Knife_Attack'")
    );
    GCharacterUnarmedMontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Knife_Attack, KnifeAttackSettings);

    // Attack_01
    FCharacterMontageSettings Attack01Settings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Unarmed/AM_FP_PCH_Unarmed_Punch_01.AM_FP_PCH_Unarmed_Punch_01'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Unarmed/AM_FP_PCH_Unarmed_Punch_01.AM_FP_PCH_Unarmed_Punch_01'")
    );
    GCharacterUnarmedMontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Attack_01, Attack01Settings);

    // Attack_02
    FCharacterMontageSettings Attack02Settings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Unarmed/AM_FP_PCH_Unarmed_Punch_02.AM_FP_PCH_Unarmed_Punch_02'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Character/Montage/Unarmed/AM_FP_PCH_Unarmed_Punch_02.AM_FP_PCH_Unarmed_Punch_02'")
    );
    GCharacterUnarmedMontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Attack_02, Attack02Settings);
}

FCharacterMontageSettings UCharacterUnarmedMontageSettingsLibrary::GetCharacterUnarmedMontageSettingsByName(ECharacterMontageName MontageName)
{
    InitCharacterUnarmedMontageSettingsMap();
    if (GCharacterUnarmedMontageSettingsMap.Contains(MontageName))
    {
        return GCharacterUnarmedMontageSettingsMap[MontageName];
    }
    return FCharacterMontageSettings(); // Return default settings if not found
}
