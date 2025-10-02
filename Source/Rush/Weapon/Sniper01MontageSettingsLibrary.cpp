#include "Sniper01MontageSettingsLibrary.h"
#include "Engine/Engine.h"

static TMap<EWeaponMontageName, FWeaponMontageSettings> GSniper01MontageSettingsMap;

static void InitSniper01MontageSettingsMap()
{
    if (GSniper01MontageSettingsMap.Num() > 0) return;

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
        TEXT("None"),
        TEXT("None")
    );
    GSniper01MontageSettingsMap.Add(EWeaponMontageName::Fire, FireSettings);

    // Fire-Empty
    FWeaponMontageSettings FireEmptySettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GSniper01MontageSettingsMap.Add(EWeaponMontageName::Fire_Empty, FireEmptySettings);

    // Reload (using Reload-Open as the main reload)
    FWeaponMontageSettings ReloadSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/Snipers/Animation/Montage/AM_FP_WEP_Sniper_01_Reload_Open.AM_FP_WEP_Sniper_01_Reload_Open'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/Snipers/Animation/Montage/AM_TP_WEP_Sniper_01_Reload_Open.AM_TP_WEP_Sniper_01_Reload_Open'")
    );
    GSniper01MontageSettingsMap.Add(EWeaponMontageName::Reload, ReloadSettings);

    // Reload-Empty (using Reload-Open as the main reload)
    FWeaponMontageSettings ReloadEmptySettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/Snipers/Animation/Montage/AM_FP_WEP_Sniper_01_Reload_Open.AM_FP_WEP_Sniper_01_Reload_Open'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/Snipers/Animation/Montage/AM_TP_WEP_Sniper_01_Reload_Open.AM_TP_WEP_Sniper_01_Reload_Open'")
    );
    GSniper01MontageSettingsMap.Add(EWeaponMontageName::Reload_Empty, ReloadEmptySettings);

    // Inspect
    FWeaponMontageSettings InspectSettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GSniper01MontageSettingsMap.Add(EWeaponMontageName::Inspect, InspectSettings);

    // Holster
    FWeaponMontageSettings HolsterSettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GSniper01MontageSettingsMap.Add(EWeaponMontageName::Holster, HolsterSettings);

    // Unholster
    FWeaponMontageSettings UnholsterSettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GSniper01MontageSettingsMap.Add(EWeaponMontageName::Unholster, UnholsterSettings);
}

FWeaponMontageSettings USniper01MontageSettingsLibrary::GetSniper01MontageSettingsByName(EWeaponMontageName MontageName)
{
    InitSniper01MontageSettingsMap();
    if (GSniper01MontageSettingsMap.Contains(MontageName))
    {
        return GSniper01MontageSettingsMap[MontageName];
    }
    return FWeaponMontageSettings(); // Return default settings if not found
}
