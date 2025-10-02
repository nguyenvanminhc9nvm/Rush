#include "Handgun02MontageSettingsLibrary.h"
#include "Engine/Engine.h"

static TMap<EWeaponMontageName, FWeaponMontageSettings> GHandgun02MontageSettingsMap;

static void InitHandgun02MontageSettingsMap()
{
    if (GHandgun02MontageSettingsMap.Num() > 0) return;

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
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/Handguns/Animation/Montage/AM_FP_WEP_Handgun_02_Fire.AM_FP_WEP_Handgun_02_Fire'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/Handguns/Animation/Montage/AM_TP_WEP_Handgun_02_Fire.AM_TP_WEP_Handgun_02_Fire'")
    );
    GHandgun02MontageSettingsMap.Add(EWeaponMontageName::Fire, FireSettings);

    // Fire-Empty
    FWeaponMontageSettings FireEmptySettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GHandgun02MontageSettingsMap.Add(EWeaponMontageName::Fire_Empty, FireEmptySettings);

    // Reload
    FWeaponMontageSettings ReloadSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/Handguns/Animation/Montage/AM_FP_WEP_Handgun_02_Reload.AM_FP_WEP_Handgun_02_Reload'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/Handguns/Animation/Montage/AM_TP_WEP_Handgun_02_Reload.AM_TP_WEP_Handgun_02_Reload'")
    );
    GHandgun02MontageSettingsMap.Add(EWeaponMontageName::Reload, ReloadSettings);

    // Reload-Empty
    FWeaponMontageSettings ReloadEmptySettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/Handguns/Animation/Montage/AM_FP_WEP_Handgun_02_Reload_Empty.AM_FP_WEP_Handgun_02_Reload_Empty'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/Handguns/Animation/Montage/AM_TP_WEP_Handgun_02_Reload_Empty.AM_TP_WEP_Handgun_02_Reload_Empty'")
    );
    GHandgun02MontageSettingsMap.Add(EWeaponMontageName::Reload_Empty, ReloadEmptySettings);

    // Inspect
    FWeaponMontageSettings InspectSettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GHandgun02MontageSettingsMap.Add(EWeaponMontageName::Inspect, InspectSettings);

    // Holster
    FWeaponMontageSettings HolsterSettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GHandgun02MontageSettingsMap.Add(EWeaponMontageName::Holster, HolsterSettings);

    // Unholster
    FWeaponMontageSettings UnholsterSettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GHandgun02MontageSettingsMap.Add(EWeaponMontageName::Unholster, UnholsterSettings);
}

FWeaponMontageSettings UHandgun02MontageSettingsLibrary::GetHandgun02MontageSettingsByName(EWeaponMontageName MontageName)
{
    InitHandgun02MontageSettingsMap();
    if (GHandgun02MontageSettingsMap.Contains(MontageName))
    {
        return GHandgun02MontageSettingsMap[MontageName];
    }
    return FWeaponMontageSettings(); // Return default settings if not found
}
