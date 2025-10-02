#include "AR02MontageSettingsLibrary.h"
#include "Engine/Engine.h"

static TMap<EWeaponMontageName, FWeaponMontageSettings> GAR02MontageSettingsMap;

static void InitAR02MontageSettingsMap()
{
    if (GAR02MontageSettingsMap.Num() > 0) return;

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
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/ARs/Animation/Montage/AM_WEP_AR_02_Fire.AM_WEP_AR_02_Fire'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/ARs/Animation/Montage/AM_WEP_AR_02_Fire.AM_WEP_AR_02_Fire'")
    );
    GAR02MontageSettingsMap.Add(EWeaponMontageName::Fire, FireSettings);

    // Fire-Empty
    FWeaponMontageSettings FireEmptySettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GAR02MontageSettingsMap.Add(EWeaponMontageName::Fire_Empty, FireEmptySettings);

    // Reload
    FWeaponMontageSettings ReloadSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/ARs/Animation/Montage/AM_FP_WEP_AR_02_Reload.AM_FP_WEP_AR_02_Reload'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/ARs/Animation/Montage/AM_TP_WEP_AR_02_Reload.AM_TP_WEP_AR_02_Reload'")
    );
    GAR02MontageSettingsMap.Add(EWeaponMontageName::Reload, ReloadSettings);

    // Reload-Empty
    FWeaponMontageSettings ReloadEmptySettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/ARs/Animation/Montage/AM_FP_WEP_AR_02_Reload_Empty.AM_FP_WEP_AR_02_Reload_Empty'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/ARs/Animation/Montage/AM_TP_WEP_AR_02_Reload_Empty.AM_TP_WEP_AR_02_Reload_Empty'")
    );
    GAR02MontageSettingsMap.Add(EWeaponMontageName::Reload_Empty, ReloadEmptySettings);

    // Inspect
    FWeaponMontageSettings InspectSettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GAR02MontageSettingsMap.Add(EWeaponMontageName::Inspect, InspectSettings);

    // Holster
    FWeaponMontageSettings HolsterSettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GAR02MontageSettingsMap.Add(EWeaponMontageName::Holster, HolsterSettings);

    // Unholster
    FWeaponMontageSettings UnholsterSettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GAR02MontageSettingsMap.Add(EWeaponMontageName::Unholster, UnholsterSettings);
}

FWeaponMontageSettings UAR02MontageSettingsLibrary::GetAR02MontageSettingsByName(EWeaponMontageName MontageName)
{
    InitAR02MontageSettingsMap();
    if (GAR02MontageSettingsMap.Contains(MontageName))
    {
        return GAR02MontageSettingsMap[MontageName];
    }
    return FWeaponMontageSettings(); // Return default settings if not found
}
