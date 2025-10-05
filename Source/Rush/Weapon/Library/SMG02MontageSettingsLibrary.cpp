#include "SMG02MontageSettingsLibrary.h"
#include "Engine/Engine.h"

static TMap<EWeaponMontageName, FWeaponMontageSettings> GSMG02MontageSettingsMap;

static void InitSMG02MontageSettingsMap()
{
    if (GSMG02MontageSettingsMap.Num() > 0) return;

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
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/SMGs/Animation/Montage/AM_FP_WEP_SMG_02_Fire.AM_FP_WEP_SMG_02_Fire'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/SMGs/Animation/Montage/AM_TP_WEP_SMG_02_Fire.AM_TP_WEP_SMG_02_Fire'")
    );
    GSMG02MontageSettingsMap.Add(EWeaponMontageName::Weapon_Fire, FireSettings);

    // Fire-Empty
    FWeaponMontageSettings FireEmptySettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GSMG02MontageSettingsMap.Add(EWeaponMontageName::Weapon_Fire_Empty, FireEmptySettings);

    // Reload
    FWeaponMontageSettings ReloadSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/SMGs/Animation/Montage/AM_FP_WEP_SMG_02_Reload.AM_FP_WEP_SMG_02_Reload'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/SMGs/Animation/Montage/AM_TP_WEP_SMG_02_Reload.AM_TP_WEP_SMG_02_Reload'")
    );
    GSMG02MontageSettingsMap.Add(EWeaponMontageName::Weapon_Reload, ReloadSettings);

    // Reload-Empty
    FWeaponMontageSettings ReloadEmptySettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/SMGs/Animation/Montage/AM_FP_WEP_SMG_02_Reload_Empty.AM_FP_WEP_SMG_02_Reload_Empty'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/SMGs/Animation/Montage/AM_TP_WEP_SMG_02_Reload_Empty.AM_TP_WEP_SMG_02_Reload_Empty'")
    );
    GSMG02MontageSettingsMap.Add(EWeaponMontageName::Weapon_Reload_Empty, ReloadEmptySettings);

    // Inspect
    FWeaponMontageSettings InspectSettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GSMG02MontageSettingsMap.Add(EWeaponMontageName::Weapon_Inspect, InspectSettings);

    // Holster
    FWeaponMontageSettings HolsterSettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GSMG02MontageSettingsMap.Add(EWeaponMontageName::Weapon_Holster, HolsterSettings);

    // Unholster
    FWeaponMontageSettings UnholsterSettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GSMG02MontageSettingsMap.Add(EWeaponMontageName::Weapon_Unholster, UnholsterSettings);
}

FWeaponMontageSettings USMG02MontageSettingsLibrary::GetSMG02MontageSettingsByName(EWeaponMontageName MontageName)
{
    InitSMG02MontageSettingsMap();
    if (GSMG02MontageSettingsMap.Contains(MontageName))
    {
        return GSMG02MontageSettingsMap[MontageName];
    }
    return FWeaponMontageSettings(); // Return default settings if not found
}

TArray<FWeaponMontageSettings> USMG02MontageSettingsLibrary::GetAllSMG02MontageSettings()
{
    InitSMG02MontageSettingsMap();
    TArray<FWeaponMontageSettings> AllSettings;
    GSMG02MontageSettingsMap.GenerateValueArray(AllSettings);
    return AllSettings;
}
