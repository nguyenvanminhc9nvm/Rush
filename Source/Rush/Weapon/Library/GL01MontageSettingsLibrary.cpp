#include "GL01MontageSettingsLibrary.h"
#include "Engine/Engine.h"
#include "Rush/Character/Enum/ECharacterMontageName.h"

static TMap<ECharacterMontageName, FWeaponMontageSettings> GGL01MontageSettingsMap;

static void InitGL01MontageSettingsMap()
{
    if (GGL01MontageSettingsMap.Num() > 0) return;

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
    GGL01MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Fire, FireSettings);

    // Fire-Empty
    FWeaponMontageSettings FireEmptySettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GGL01MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Fire_Empty, FireEmptySettings);

    // Reload
    FWeaponMontageSettings ReloadSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/Launchers/Animation/Montage/AM_FP_WEP_GL_01_Reload.AM_FP_WEP_GL_01_Reload'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/Launchers/Animation/Montage/AM_TP_WEP_GL_01_Reload.AM_TP_WEP_GL_01_Reload'")
    );
    GGL01MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Reload, ReloadSettings);

    // Reload-Empty
    FWeaponMontageSettings ReloadEmptySettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/Launchers/Animation/Montage/AM_FP_WEP_GL_01_Reload.AM_FP_WEP_GL_01_Reload'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/Launchers/Animation/Montage/AM_TP_WEP_GL_01_Reload.AM_TP_WEP_GL_01_Reload'")
    );
    GGL01MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Reload_Empty, ReloadEmptySettings);

    // Inspect
    FWeaponMontageSettings InspectSettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GGL01MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Inspect, InspectSettings);

    // Holster
    FWeaponMontageSettings HolsterSettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GGL01MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Holster, HolsterSettings);

    // Unholster
    FWeaponMontageSettings UnholsterSettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GGL01MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Unholster, UnholsterSettings);
}

FWeaponMontageSettings UGL01MontageSettingsLibrary::GetGL01MontageSettingsByName(ECharacterMontageName MontageName)
{
    InitGL01MontageSettingsMap();
    if (GGL01MontageSettingsMap.Contains(MontageName))
    {
        return GGL01MontageSettingsMap[MontageName];
    }
    return FWeaponMontageSettings(); // Return default settings if not found
}

TArray<FWeaponMontageSettings> UGL01MontageSettingsLibrary::GetAllGL01MontageSettings()
{
    InitGL01MontageSettingsMap();
    TArray<FWeaponMontageSettings> AllSettings;
    GGL01MontageSettingsMap.GenerateValueArray(AllSettings);
    return AllSettings;
}
