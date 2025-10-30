#include "SMG05MontageSettingsLibrary.h"
#include "Engine/Engine.h"
#include "Rush/Character/Enum/ECharacterMontageName.h"

static TMap<ECharacterMontageName, FWeaponMontageSettings> GSMG05MontageSettingsMap;

static void InitSMG05MontageSettingsMap()
{
    if (GSMG05MontageSettingsMap.Num() > 0) return;

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
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/SMGs/Animation/Montage/AM_FP_WEP_SMG_05_Fire.AM_FP_WEP_SMG_05_Fire'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/SMGs/Animation/Montage/AM_TP_WEP_SMG_05_Fire.AM_TP_WEP_SMG_05_Fire'")
    );
    GSMG05MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Fire, FireSettings);

    // Fire-Empty
    FWeaponMontageSettings FireEmptySettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GSMG05MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Fire_Empty, FireEmptySettings);

    // Reload
    FWeaponMontageSettings ReloadSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/SMGs/Animation/Montage/AM_FP_WEP_SMG_05_Reload.AM_FP_WEP_SMG_05_Reload'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/SMGs/Animation/Montage/AM_TP_WEP_SMG_05_Reload.AM_TP_WEP_SMG_05_Reload'")
    );
    GSMG05MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Reload, ReloadSettings);

    // Reload-Empty
    FWeaponMontageSettings ReloadEmptySettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/SMGs/Animation/Montage/AM_FP_WEP_SMG_05_Reload_Empty.AM_FP_WEP_SMG_05_Reload_Empty'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/SMGs/Animation/Montage/AM_TP_WEP_SMG_05_Reload_Empty.AM_TP_WEP_SMG_05_Reload_Empty'")
    );
    GSMG05MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Reload_Empty, ReloadEmptySettings);

    // Inspect
    FWeaponMontageSettings InspectSettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GSMG05MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Inspect, InspectSettings);

    // Holster
    FWeaponMontageSettings HolsterSettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GSMG05MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Holster, HolsterSettings);

    // Unholster
    FWeaponMontageSettings UnholsterSettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GSMG05MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Unholster, UnholsterSettings);
}

FWeaponMontageSettings USMG05MontageSettingsLibrary::GetSMG05MontageSettingsByName(ECharacterMontageName MontageName)
{
    InitSMG05MontageSettingsMap();
    if (GSMG05MontageSettingsMap.Contains(MontageName))
    {
        return GSMG05MontageSettingsMap[MontageName];
    }
    return FWeaponMontageSettings(); // Return default settings if not found
}

TArray<FWeaponMontageSettings> USMG05MontageSettingsLibrary::GetAllSMG05MontageSettings()
{
    InitSMG05MontageSettingsMap();
    TArray<FWeaponMontageSettings> AllSettings;
    GSMG05MontageSettingsMap.GenerateValueArray(AllSettings);
    return AllSettings;
}
