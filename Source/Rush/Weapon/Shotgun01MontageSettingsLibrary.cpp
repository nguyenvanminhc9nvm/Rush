#include "Shotgun01MontageSettingsLibrary.h"
#include "Engine/Engine.h"

static TMap<EWeaponMontageName, FWeaponMontageSettings> GShotgun01MontageSettingsMap;

static void InitShotgun01MontageSettingsMap()
{
    if (GShotgun01MontageSettingsMap.Num() > 0) return;

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
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/Shotguns/Animation/Montage/AM_FP_WEP_Shotgun_01_Fire.AM_FP_WEP_Shotgun_01_Fire'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/Shotguns/Animation/Montage/AM_TP_WEP_Shotgun_01_Fire.AM_TP_WEP_Shotgun_01_Fire'")
    );
    GShotgun01MontageSettingsMap.Add(EWeaponMontageName::Fire, FireSettings);

    // Fire-Empty
    FWeaponMontageSettings FireEmptySettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GShotgun01MontageSettingsMap.Add(EWeaponMontageName::Fire_Empty, FireEmptySettings);

    // Reload (using Reload-Open as the main reload)
    FWeaponMontageSettings ReloadSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/Shotguns/Animation/Montage/AM_FP_WEP_Shotgun_01_Reload_Open.AM_FP_WEP_Shotgun_01_Reload_Open'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/Shotguns/Animation/Montage/AM_TP_WEP_Shotgun_01_Reload_Open.AM_TP_WEP_Shotgun_01_Reload_Open'")
    );
    GShotgun01MontageSettingsMap.Add(EWeaponMontageName::Reload, ReloadSettings);

    // Reload-Empty (using Reload-Open as the main reload)
    FWeaponMontageSettings ReloadEmptySettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/Shotguns/Animation/Montage/AM_FP_WEP_Shotgun_01_Reload_Open.AM_FP_WEP_Shotgun_01_Reload_Open'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/Shotguns/Animation/Montage/AM_TP_WEP_Shotgun_01_Reload_Open.AM_TP_WEP_Shotgun_01_Reload_Open'")
    );
    GShotgun01MontageSettingsMap.Add(EWeaponMontageName::Reload_Empty, ReloadEmptySettings);

    // Inspect
    FWeaponMontageSettings InspectSettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GShotgun01MontageSettingsMap.Add(EWeaponMontageName::Inspect, InspectSettings);

    // Holster
    FWeaponMontageSettings HolsterSettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GShotgun01MontageSettingsMap.Add(EWeaponMontageName::Holster, HolsterSettings);

    // Unholster
    FWeaponMontageSettings UnholsterSettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GShotgun01MontageSettingsMap.Add(EWeaponMontageName::Unholster, UnholsterSettings);
}

FWeaponMontageSettings UShotgun01MontageSettingsLibrary::GetShotgun01MontageSettingsByName(EWeaponMontageName MontageName)
{
    InitShotgun01MontageSettingsMap();
    if (GShotgun01MontageSettingsMap.Contains(MontageName))
    {
        return GShotgun01MontageSettingsMap[MontageName];
    }
    return FWeaponMontageSettings(); // Return default settings if not found
}
