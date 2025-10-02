#include "AR03MontageSettingsLibrary.h"
#include "Engine/Engine.h"

static TMap<EWeaponMontageName, FWeaponMontageSettings> GAR03MontageSettingsMap;

static void InitAR03MontageSettingsMap()
{
    if (GAR03MontageSettingsMap.Num() > 0) return;

    // Helper function to create montage settings
    auto CreateMontageSettings = [](const FString& FirstPersonPath, const FString& ThirdPersonPath) -> FWeaponMontageSettings
    {
        FWeaponMontageSettings Settings;
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
    FWeaponMontageSettings FireSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/ARs/Animation/Montage/AM_WEP_AR_03_Fire.AM_WEP_AR_03_Fire'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/ARs/Animation/Montage/AM_WEP_AR_03_Fire.AM_WEP_AR_03_Fire'")
    );
    GAR03MontageSettingsMap.Add(EWeaponMontageName::Fire, FireSettings);

    // Fire-Empty
    FWeaponMontageSettings FireEmptySettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GAR03MontageSettingsMap.Add(EWeaponMontageName::Fire_Empty, FireEmptySettings);

    // Reload
    FWeaponMontageSettings ReloadSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/ARs/Animation/Montage/AM_FP_WEP_AR_03_Reload.AM_FP_WEP_AR_03_Reload'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/ARs/Animation/Montage/AM_TP_WEP_AR_03_Reload.AM_TP_WEP_AR_03_Reload'")
    );
    GAR03MontageSettingsMap.Add(EWeaponMontageName::Reload, ReloadSettings);

    // Reload-Empty
    FWeaponMontageSettings ReloadEmptySettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/ARs/Animation/Montage/AM_FP_WEP_AR_03_Reload_Empty.AM_FP_WEP_AR_03_Reload_Empty'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/ARs/Animation/Montage/AM_TP_WEP_AR_03_Reload_Empty.AM_TP_WEP_AR_03_Reload_Empty'")
    );
    GAR03MontageSettingsMap.Add(EWeaponMontageName::Reload_Empty, ReloadEmptySettings);

    // Inspect
    FWeaponMontageSettings InspectSettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GAR03MontageSettingsMap.Add(EWeaponMontageName::Inspect, InspectSettings);

    // Holster
    FWeaponMontageSettings HolsterSettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GAR03MontageSettingsMap.Add(EWeaponMontageName::Holster, HolsterSettings);

    // Unholster
    FWeaponMontageSettings UnholsterSettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GAR03MontageSettingsMap.Add(EWeaponMontageName::Unholster, UnholsterSettings);
}

FWeaponMontageSettings UAR03MontageSettingsLibrary::GetAR03MontageSettingsByName(EWeaponMontageName MontageName)
{
    InitAR03MontageSettingsMap();
    if (GAR03MontageSettingsMap.Contains(MontageName))
    {
        return GAR03MontageSettingsMap[MontageName];
    }
    return FWeaponMontageSettings(); // Return default settings if not found
}
