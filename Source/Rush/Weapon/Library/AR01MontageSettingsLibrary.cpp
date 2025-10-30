#include "AR01MontageSettingsLibrary.h"
#include "Engine/Engine.h"
#include "Rush/Character/Enum/ECharacterMontageName.h"

static TMap<ECharacterMontageName, FWeaponMontageSettings> GAR01MontageSettingsMap;

static void InitAR01MontageSettingsMap()
{
    if (GAR01MontageSettingsMap.Num() > 0) return;

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
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/ARs/Animation/Montage/AM_WEP_AR_01_Fire.AM_WEP_AR_01_Fire'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/ARs/Animation/Montage/AM_WEP_AR_01_Fire.AM_WEP_AR_01_Fire'")
    );
    GAR01MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Fire, FireSettings);

    // Fire-Empty
    FWeaponMontageSettings FireEmptySettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GAR01MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Fire_Empty, FireEmptySettings);

    // Reload
    FWeaponMontageSettings ReloadSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/ARs/Animation/Montage/AM_FP_WEP_AR_01_Reload.AM_FP_WEP_AR_01_Reload'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/ARs/Animation/Montage/AM_TP_WEP_AR_01_Reload.AM_TP_WEP_AR_01_Reload'")
    );
    GAR01MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Reload, ReloadSettings);

    // Reload-Empty
    FWeaponMontageSettings ReloadEmptySettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/ARs/Animation/Montage/AM_FP_WEP_AR_01_Reload_Empty.AM_FP_WEP_AR_01_Reload_Empty'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/ARs/Animation/Montage/AM_TP_WEP_AR_01_Reload_Empty.AM_TP_WEP_AR_01_Reload_Empty'")
    );
    GAR01MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Reload_Empty, ReloadEmptySettings);

    // Inspect
    FWeaponMontageSettings InspectSettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GAR01MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Inspect, InspectSettings);

    // Holster
    FWeaponMontageSettings HolsterSettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GAR01MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Holster, HolsterSettings);

    // Unholster
    FWeaponMontageSettings UnholsterSettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GAR01MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Unholster, UnholsterSettings);
}

FWeaponMontageSettings UAR01MontageSettingsLibrary::GetAR01MontageSettingsByName(ECharacterMontageName MontageName)
{
    InitAR01MontageSettingsMap();
    if (GAR01MontageSettingsMap.Contains(MontageName))
    {
        return GAR01MontageSettingsMap[MontageName];
    }
    return FWeaponMontageSettings(); // Return default settings if not found
}

TArray<FWeaponMontageSettings> UAR01MontageSettingsLibrary::GetAllAR01MontageSettings()
{
    InitAR01MontageSettingsMap();
    TArray<FWeaponMontageSettings> AllSettings;
    GAR01MontageSettingsMap.GenerateValueArray(AllSettings);
    return AllSettings;
}
