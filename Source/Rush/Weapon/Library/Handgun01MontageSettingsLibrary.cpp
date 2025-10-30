#include "Handgun01MontageSettingsLibrary.h"
#include "Engine/Engine.h"
#include "Rush/Character/Enum/ECharacterMontageName.h"
#include "Rush/Weapon/Struct/FWeaponMontageSettings.h"

static TMap<ECharacterMontageName, FWeaponMontageSettings> GHandgun01MontageSettingsMap;

static void InitHandgun01MontageSettingsMap()
{
    if (GHandgun01MontageSettingsMap.Num() > 0) return;

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
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/Handguns/Animation/Montage/AM_FP_WEP_Handgun_01_Fire.AM_FP_WEP_Handgun_01_Fire'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/Handguns/Animation/Montage/AM_TP_WEP_Handgun_01_Fire.AM_TP_WEP_Handgun_01_Fire'")
    );
    GHandgun01MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Fire, FireSettings);

    // Fire-Empty
    FWeaponMontageSettings FireEmptySettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GHandgun01MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Fire_Empty, FireEmptySettings);

    // Reload
    FWeaponMontageSettings ReloadSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/Handguns/Animation/Montage/AM_FP_WEP_Handgun_01_Reload.AM_FP_WEP_Handgun_01_Reload'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/Handguns/Animation/Montage/AM_TP_WEP_Handgun_01_Reload.AM_TP_WEP_Handgun_01_Reload'")
    );
    GHandgun01MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Reload, ReloadSettings);

    // Reload-Empty
    FWeaponMontageSettings ReloadEmptySettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/Handguns/Animation/Montage/AM_FP_WEP_Handgun_01_Reload_Empty.AM_FP_WEP_Handgun_01_Reload_Empty'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/Handguns/Animation/Montage/AM_TP_WEP_Handgun_01_Reload_Empty.AM_TP_WEP_Handgun_01_Reload_Empty'")
    );
    GHandgun01MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Reload_Empty, ReloadEmptySettings);

    // Inspect
    FWeaponMontageSettings InspectSettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GHandgun01MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Inspect, InspectSettings);

    // Holster
    FWeaponMontageSettings HolsterSettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GHandgun01MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Holster, HolsterSettings);

    // Unholster
    FWeaponMontageSettings UnholsterSettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GHandgun01MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Unholster, UnholsterSettings);
}

FWeaponMontageSettings UHandgun01MontageSettingsLibrary::GetHandgun01MontageSettingsByName(ECharacterMontageName MontageName)
{
    InitHandgun01MontageSettingsMap();
    if (GHandgun01MontageSettingsMap.Contains(MontageName))
    {
        return GHandgun01MontageSettingsMap[MontageName];
    }
    return FWeaponMontageSettings(); // Return default settings if not found
}

TArray<FWeaponMontageSettings> UHandgun01MontageSettingsLibrary::GetAllHandgun01MontageSettings()
{
    InitHandgun01MontageSettingsMap();
    TArray<FWeaponMontageSettings> AllSettings;
    GHandgun01MontageSettingsMap.GenerateValueArray(AllSettings);
    return AllSettings;
}