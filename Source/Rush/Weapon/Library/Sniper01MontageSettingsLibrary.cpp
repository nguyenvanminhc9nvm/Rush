#include "Sniper01MontageSettingsLibrary.h"
#include "Engine/Engine.h"
#include "Rush/Character/Enum/ECharacterMontageName.h"

static TMap<ECharacterMontageName, FWeaponMontageSettings> GSniper01MontageSettingsMap;

static void InitSniper01MontageSettingsMap()
{
    if (GSniper01MontageSettingsMap.Num() > 0) return;

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
    GSniper01MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Fire, FireSettings);

    // Fire-Empty
    FWeaponMontageSettings FireEmptySettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GSniper01MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Fire_Empty, FireEmptySettings);

    // Reload (using Reload-Open as the main reload)
    FWeaponMontageSettings ReloadSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/Snipers/Animation/Montage/AM_FP_WEP_Sniper_01_Reload_Open.AM_FP_WEP_Sniper_01_Reload_Open'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/Snipers/Animation/Montage/AM_TP_WEP_Sniper_01_Reload_Open.AM_TP_WEP_Sniper_01_Reload_Open'")
    );
    GSniper01MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Reload, ReloadSettings);

    // Reload-Empty (using Reload-Open as the main reload)
    FWeaponMontageSettings ReloadEmptySettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/Snipers/Animation/Montage/AM_FP_WEP_Sniper_01_Reload_Open.AM_FP_WEP_Sniper_01_Reload_Open'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/Snipers/Animation/Montage/AM_TP_WEP_Sniper_01_Reload_Open.AM_TP_WEP_Sniper_01_Reload_Open'")
    );
    GSniper01MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Reload_Empty, ReloadEmptySettings);

    // Inspect
    FWeaponMontageSettings InspectSettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GSniper01MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Inspect, InspectSettings);

    // Holster
    FWeaponMontageSettings HolsterSettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GSniper01MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Holster, HolsterSettings);

    // Unholster
    FWeaponMontageSettings UnholsterSettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GSniper01MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Unholster, UnholsterSettings);
}

FWeaponMontageSettings USniper01MontageSettingsLibrary::GetSniper01MontageSettingsByName(ECharacterMontageName MontageName)
{
    InitSniper01MontageSettingsMap();
    if (GSniper01MontageSettingsMap.Contains(MontageName))
    {
        return GSniper01MontageSettingsMap[MontageName];
    }
    return FWeaponMontageSettings(); // Return default settings if not found
}

TArray<FWeaponMontageSettings> USniper01MontageSettingsLibrary::GetAllSniper01MontageSettings()
{
    InitSniper01MontageSettingsMap();
    TArray<FWeaponMontageSettings> AllSettings;
    GSniper01MontageSettingsMap.GenerateValueArray(AllSettings);
    return AllSettings;
}
