#include "SMG03MontageSettingsLibrary.h"
#include "Engine/Engine.h"

static TMap<EWeaponMontageName, FWeaponMontageSettings> GSMG03MontageSettingsMap;

static void InitSMG03MontageSettingsMap()
{
    if (GSMG03MontageSettingsMap.Num() > 0) return;

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
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/SMGs/Animation/Montage/AM_FP_WEP_SMG_03_Fire.AM_FP_WEP_SMG_03_Fire'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/SMGs/Animation/Montage/AM_TP_WEP_SMG_03_Fire.AM_TP_WEP_SMG_03_Fire'")
    );
    GSMG03MontageSettingsMap.Add(EWeaponMontageName::Weapon_Fire, FireSettings);

    // Fire-Empty
    FWeaponMontageSettings FireEmptySettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GSMG03MontageSettingsMap.Add(EWeaponMontageName::Weapon_Fire_Empty, FireEmptySettings);

    // Reload
    FWeaponMontageSettings ReloadSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/SMGs/Animation/Montage/AM_FP_WEP_SMG_03_Reload.AM_FP_WEP_SMG_03_Reload'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/SMGs/Animation/Montage/AM_TP_WEP_SMG_03_Reload.AM_TP_WEP_SMG_03_Reload'")
    );
    GSMG03MontageSettingsMap.Add(EWeaponMontageName::Weapon_Reload, ReloadSettings);

    // Reload-Empty
    FWeaponMontageSettings ReloadEmptySettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/SMGs/Animation/Montage/AM_FP_WEP_SMG_03_Reload_Empty.AM_FP_WEP_SMG_03_Reload_Empty'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/SMGs/Animation/Montage/AM_TP_WEP_SMG_03_Reload_Empty.AM_TP_WEP_SMG_03_Reload_Empty'")
    );
    GSMG03MontageSettingsMap.Add(EWeaponMontageName::Weapon_Reload_Empty, ReloadEmptySettings);

    // Inspect
    FWeaponMontageSettings InspectSettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GSMG03MontageSettingsMap.Add(EWeaponMontageName::Weapon_Inspect, InspectSettings);

    // Holster
    FWeaponMontageSettings HolsterSettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GSMG03MontageSettingsMap.Add(EWeaponMontageName::Weapon_Holster, HolsterSettings);

    // Unholster
    FWeaponMontageSettings UnholsterSettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GSMG03MontageSettingsMap.Add(EWeaponMontageName::Weapon_Unholster, UnholsterSettings);
}

FWeaponMontageSettings USMG03MontageSettingsLibrary::GetSMG03MontageSettingsByName(EWeaponMontageName MontageName)
{
    InitSMG03MontageSettingsMap();
    if (GSMG03MontageSettingsMap.Contains(MontageName))
    {
        return GSMG03MontageSettingsMap[MontageName];
    }
    return FWeaponMontageSettings(); // Return default settings if not found
}

TArray<FWeaponMontageSettings> USMG03MontageSettingsLibrary::GetAllSMG03MontageSettings()
{
    InitSMG03MontageSettingsMap();
    TArray<FWeaponMontageSettings> AllSettings;
    GSMG03MontageSettingsMap.GenerateValueArray(AllSettings);
    return AllSettings;
}
