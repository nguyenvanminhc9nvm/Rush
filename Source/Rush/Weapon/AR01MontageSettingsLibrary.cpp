#include "AR01MontageSettingsLibrary.h"
#include "Engine/Engine.h"

static TMap<EWeaponMontageName, FWeaponMontageSettings> GAR01MontageSettingsMap;

static void InitAR01MontageSettingsMap()
{
    if (GAR01MontageSettingsMap.Num() > 0) return;

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
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/ARs/Animation/Montage/AM_WEP_AR_01_Fire.AM_WEP_AR_01_Fire'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/ARs/Animation/Montage/AM_WEP_AR_01_Fire.AM_WEP_AR_01_Fire'")
    );
    GAR01MontageSettingsMap.Add(EWeaponMontageName::Fire, FireSettings);

    // Fire-Empty
    FWeaponMontageSettings FireEmptySettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GAR01MontageSettingsMap.Add(EWeaponMontageName::Fire_Empty, FireEmptySettings);

    // Reload
    FWeaponMontageSettings ReloadSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/ARs/Animation/Montage/AM_FP_WEP_AR_01_Reload.AM_FP_WEP_AR_01_Reload'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/ARs/Animation/Montage/AM_TP_WEP_AR_01_Reload.AM_TP_WEP_AR_01_Reload'")
    );
    GAR01MontageSettingsMap.Add(EWeaponMontageName::Reload, ReloadSettings);

    // Reload-Empty
    FWeaponMontageSettings ReloadEmptySettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/ARs/Animation/Montage/AM_FP_WEP_AR_01_Reload_Empty.AM_FP_WEP_AR_01_Reload_Empty'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/ARs/Animation/Montage/AM_TP_WEP_AR_01_Reload_Empty.AM_TP_WEP_AR_01_Reload_Empty'")
    );
    GAR01MontageSettingsMap.Add(EWeaponMontageName::Reload_Empty, ReloadEmptySettings);

    // Inspect
    FWeaponMontageSettings InspectSettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GAR01MontageSettingsMap.Add(EWeaponMontageName::Inspect, InspectSettings);

    // Holster
    FWeaponMontageSettings HolsterSettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GAR01MontageSettingsMap.Add(EWeaponMontageName::Holster, HolsterSettings);

    // Unholster
    FWeaponMontageSettings UnholsterSettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GAR01MontageSettingsMap.Add(EWeaponMontageName::Unholster, UnholsterSettings);
}

FWeaponMontageSettings UAR01MontageSettingsLibrary::GetAR01MontageSettingsByName(EWeaponMontageName MontageName)
{
    InitAR01MontageSettingsMap();
    if (GAR01MontageSettingsMap.Contains(MontageName))
    {
        return GAR01MontageSettingsMap[MontageName];
    }
    return FWeaponMontageSettings(); // Return default settings if not found
}
