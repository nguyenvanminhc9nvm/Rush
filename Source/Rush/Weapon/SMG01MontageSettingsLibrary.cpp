#include "SMG01MontageSettingsLibrary.h"
#include "Engine/Engine.h"

static TMap<EWeaponMontageName, FWeaponMontageSettings> GSMG01MontageSettingsMap;

static void InitSMG01MontageSettingsMap()
{
    if (GSMG01MontageSettingsMap.Num() > 0) return;

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
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/SMGs/Animation/Montage/AM_FP_WEP_SMG_01_Fire.AM_FP_WEP_SMG_01_Fire'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/SMGs/Animation/Montage/AM_TP_WEP_SMG_01_Fire.AM_TP_WEP_SMG_01_Fire'")
    );
    GSMG01MontageSettingsMap.Add(EWeaponMontageName::Fire, FireSettings);

    // Fire-Empty
    FWeaponMontageSettings FireEmptySettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GSMG01MontageSettingsMap.Add(EWeaponMontageName::Fire_Empty, FireEmptySettings);

    // Reload
    FWeaponMontageSettings ReloadSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/SMGs/Animation/Montage/AM_FP_WEP_SMG_01_Reload.AM_FP_WEP_SMG_01_Reload'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/SMGs/Animation/Montage/AM_TP_WEP_SMG_01_Reload.AM_TP_WEP_SMG_01_Reload'")
    );
    GSMG01MontageSettingsMap.Add(EWeaponMontageName::Reload, ReloadSettings);

    // Reload-Empty
    FWeaponMontageSettings ReloadEmptySettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/SMGs/Animation/Montage/AM_FP_WEP_SMG_01_Reload_Empty.AM_FP_WEP_SMG_01_Reload_Empty'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/SMGs/Animation/Montage/AM_TP_WEP_SMG_01_Reload_Empty.AM_TP_WEP_SMG_01_Reload_Empty'")
    );
    GSMG01MontageSettingsMap.Add(EWeaponMontageName::Reload_Empty, ReloadEmptySettings);

    // Inspect
    FWeaponMontageSettings InspectSettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GSMG01MontageSettingsMap.Add(EWeaponMontageName::Inspect, InspectSettings);

    // Holster
    FWeaponMontageSettings HolsterSettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GSMG01MontageSettingsMap.Add(EWeaponMontageName::Holster, HolsterSettings);

    // Unholster
    FWeaponMontageSettings UnholsterSettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GSMG01MontageSettingsMap.Add(EWeaponMontageName::Unholster, UnholsterSettings);
}

FWeaponMontageSettings USMG01MontageSettingsLibrary::GetSMG01MontageSettingsByName(EWeaponMontageName MontageName)
{
    InitSMG01MontageSettingsMap();
    if (GSMG01MontageSettingsMap.Contains(MontageName))
    {
        return GSMG01MontageSettingsMap[MontageName];
    }
    return FWeaponMontageSettings(); // Return default settings if not found
}
