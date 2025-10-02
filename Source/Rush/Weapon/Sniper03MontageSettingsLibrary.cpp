#include "Sniper03MontageSettingsLibrary.h"
#include "Engine/Engine.h"

static TMap<EWeaponMontageName, FWeaponMontageSettings> GSniper03MontageSettingsMap;

static void InitSniper03MontageSettingsMap()
{
    if (GSniper03MontageSettingsMap.Num() > 0) return;

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
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/Snipers/Animation/Montage/AM_FP_WEP_Sniper_03_Fire.AM_FP_WEP_Sniper_03_Fire'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/Snipers/Animation/Montage/AM_TP_WEP_Sniper_03_Fire.AM_TP_WEP_Sniper_03_Fire'")
    );
    GSniper03MontageSettingsMap.Add(EWeaponMontageName::Fire, FireSettings);

    // Fire-Empty
    FWeaponMontageSettings FireEmptySettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GSniper03MontageSettingsMap.Add(EWeaponMontageName::Fire_Empty, FireEmptySettings);

    // Reload
    FWeaponMontageSettings ReloadSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/Snipers/Animation/Montage/AM_FP_WEP_Sniper_03_Reload.AM_FP_WEP_Sniper_03_Reload'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/Snipers/Animation/Montage/AM_TP_WEP_Sniper_03_Reload.AM_TP_WEP_Sniper_03_Reload'")
    );
    GSniper03MontageSettingsMap.Add(EWeaponMontageName::Reload, ReloadSettings);

    // Reload-Empty
    FWeaponMontageSettings ReloadEmptySettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/Snipers/Animation/Montage/AM_FP_WEP_Sniper_03_Reload_Empty.AM_FP_WEP_Sniper_03_Reload_Empty'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/Snipers/Animation/Montage/AM_TP_WEP_Sniper_03_Reload_Empty.AM_TP_WEP_Sniper_03_Reload_Empty'")
    );
    GSniper03MontageSettingsMap.Add(EWeaponMontageName::Reload_Empty, ReloadEmptySettings);

    // Inspect
    FWeaponMontageSettings InspectSettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GSniper03MontageSettingsMap.Add(EWeaponMontageName::Inspect, InspectSettings);

    // Holster
    FWeaponMontageSettings HolsterSettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GSniper03MontageSettingsMap.Add(EWeaponMontageName::Holster, HolsterSettings);

    // Unholster
    FWeaponMontageSettings UnholsterSettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GSniper03MontageSettingsMap.Add(EWeaponMontageName::Unholster, UnholsterSettings);
}

FWeaponMontageSettings USniper03MontageSettingsLibrary::GetSniper03MontageSettingsByName(EWeaponMontageName MontageName)
{
    InitSniper03MontageSettingsMap();
    if (GSniper03MontageSettingsMap.Contains(MontageName))
    {
        return GSniper03MontageSettingsMap[MontageName];
    }
    return FWeaponMontageSettings(); // Return default settings if not found
}
