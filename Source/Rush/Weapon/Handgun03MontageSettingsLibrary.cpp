#include "Handgun03MontageSettingsLibrary.h"
#include "Engine/Engine.h"

static TMap<EWeaponMontageName, FWeaponMontageSettings> GHandgun03MontageSettingsMap;

static void InitHandgun03MontageSettingsMap()
{
    if (GHandgun03MontageSettingsMap.Num() > 0) return;

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
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/Handguns/Animation/Montage/AM_FP_WEP_Handgun_03_Fire.AM_FP_WEP_Handgun_03_Fire'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/Handguns/Animation/Montage/AM_TP_WEP_Handgun_03_Fire.AM_TP_WEP_Handgun_03_Fire'")
    );
    GHandgun03MontageSettingsMap.Add(EWeaponMontageName::Fire, FireSettings);

    // Fire-Empty
    FWeaponMontageSettings FireEmptySettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GHandgun03MontageSettingsMap.Add(EWeaponMontageName::Fire_Empty, FireEmptySettings);

    // Reload
    FWeaponMontageSettings ReloadSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/Handguns/Animation/Montage/AM_FP_WEP_Handgun_03_Reload.AM_FP_WEP_Handgun_03_Reload'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/Handguns/Animation/Montage/AM_TP_WEP_Handgun_03_Reload.AM_TP_WEP_Handgun_03_Reload'")
    );
    GHandgun03MontageSettingsMap.Add(EWeaponMontageName::Reload, ReloadSettings);

    // Reload-Empty
    FWeaponMontageSettings ReloadEmptySettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/Handguns/Animation/Montage/AM_FP_WEP_Handgun_03_Reload_Empty.AM_FP_WEP_Handgun_03_Reload_Empty'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/Handguns/Animation/Montage/AM_TP_WEP_Handgun_03_Reload_Empty.AM_TP_WEP_Handgun_03_Reload_Empty'")
    );
    GHandgun03MontageSettingsMap.Add(EWeaponMontageName::Reload_Empty, ReloadEmptySettings);

    // Inspect
    FWeaponMontageSettings InspectSettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GHandgun03MontageSettingsMap.Add(EWeaponMontageName::Inspect, InspectSettings);

    // Holster
    FWeaponMontageSettings HolsterSettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GHandgun03MontageSettingsMap.Add(EWeaponMontageName::Holster, HolsterSettings);

    // Unholster
    FWeaponMontageSettings UnholsterSettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GHandgun03MontageSettingsMap.Add(EWeaponMontageName::Unholster, UnholsterSettings);
}

FWeaponMontageSettings UHandgun03MontageSettingsLibrary::GetHandgun03MontageSettingsByName(EWeaponMontageName MontageName)
{
    InitHandgun03MontageSettingsMap();
    if (GHandgun03MontageSettingsMap.Contains(MontageName))
    {
        return GHandgun03MontageSettingsMap[MontageName];
    }
    return FWeaponMontageSettings(); // Return default settings if not found
}
