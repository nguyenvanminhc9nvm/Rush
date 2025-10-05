#include "SMG04MontageSettingsLibrary.h"
#include "Engine/Engine.h"

static TMap<EWeaponMontageName, FWeaponMontageSettings> GSMG04MontageSettingsMap;

static void InitSMG04MontageSettingsMap()
{
    if (GSMG04MontageSettingsMap.Num() > 0) return;

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
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/SMGs/Animation/Montage/AM_FP_WEP_SMG_04_Fire.AM_FP_WEP_SMG_04_Fire'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/SMGs/Animation/Montage/AM_TP_WEP_SMG_04_Fire.AM_TP_WEP_SMG_04_Fire'")
    );
    GSMG04MontageSettingsMap.Add(EWeaponMontageName::Weapon_Fire, FireSettings);

    // Fire-Empty
    FWeaponMontageSettings FireEmptySettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GSMG04MontageSettingsMap.Add(EWeaponMontageName::Weapon_Fire_Empty, FireEmptySettings);

    // Reload
    FWeaponMontageSettings ReloadSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/SMGs/Animation/Montage/AM_FP_WEP_SMG_04_Reload.AM_FP_WEP_SMG_04_Reload'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/SMGs/Animation/Montage/AM_TP_WEP_SMG_04_Reload.AM_TP_WEP_SMG_04_Reload'")
    );
    GSMG04MontageSettingsMap.Add(EWeaponMontageName::Weapon_Reload, ReloadSettings);

    // Reload-Empty
    FWeaponMontageSettings ReloadEmptySettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/SMGs/Animation/Montage/AM_FP_WEP_SMG_04_Reload_Empty.AM_FP_WEP_SMG_04_Reload_Empty'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/SMGs/Animation/Montage/AM_TP_WEP_SMG_04_Reload_Empty.AM_TP_WEP_SMG_04_Reload_Empty'")
    );
    GSMG04MontageSettingsMap.Add(EWeaponMontageName::Weapon_Reload_Empty, ReloadEmptySettings);

    // Inspect
    FWeaponMontageSettings InspectSettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GSMG04MontageSettingsMap.Add(EWeaponMontageName::Weapon_Inspect, InspectSettings);

    // Holster
    FWeaponMontageSettings HolsterSettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GSMG04MontageSettingsMap.Add(EWeaponMontageName::Weapon_Holster, HolsterSettings);

    // Unholster
    FWeaponMontageSettings UnholsterSettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GSMG04MontageSettingsMap.Add(EWeaponMontageName::Weapon_Unholster, UnholsterSettings);
}

FWeaponMontageSettings USMG04MontageSettingsLibrary::GetSMG04MontageSettingsByName(EWeaponMontageName MontageName)
{
    InitSMG04MontageSettingsMap();
    if (GSMG04MontageSettingsMap.Contains(MontageName))
    {
        return GSMG04MontageSettingsMap[MontageName];
    }
    return FWeaponMontageSettings(); // Return default settings if not found
}

TArray<FWeaponMontageSettings> USMG04MontageSettingsLibrary::GetAllSMG04MontageSettings()
{
    InitSMG04MontageSettingsMap();
    TArray<FWeaponMontageSettings> AllSettings;
    GSMG04MontageSettingsMap.GenerateValueArray(AllSettings);
    return AllSettings;
}
