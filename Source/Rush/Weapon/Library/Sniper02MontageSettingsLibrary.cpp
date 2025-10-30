#include "Sniper02MontageSettingsLibrary.h"
#include "Engine/Engine.h"
#include "Rush/Character/Enum/ECharacterMontageName.h"

static TMap<ECharacterMontageName, FWeaponMontageSettings> GSniper02MontageSettingsMap;

static void InitSniper02MontageSettingsMap()
{
    if (GSniper02MontageSettingsMap.Num() > 0) return;

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
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/Snipers/Animation/Montage/AM_FP_WEP_Sniper_02_Fire.AM_FP_WEP_Sniper_02_Fire'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/Snipers/Animation/Montage/AM_TP_WEP_Sniper_02_Fire.AM_TP_WEP_Sniper_02_Fire'")
    );
    GSniper02MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Fire, FireSettings);

    // Fire-Empty
    FWeaponMontageSettings FireEmptySettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GSniper02MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Fire_Empty, FireEmptySettings);

    // Reload
    FWeaponMontageSettings ReloadSettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/Snipers/Animation/Montage/AM_FP_WEP_Sniper_02_Reload.AM_FP_WEP_Sniper_02_Reload'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/Snipers/Animation/Montage/AM_TP_WEP_Sniper_02_Reload.AM_TP_WEP_Sniper_02_Reload'")
    );
    GSniper02MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Reload, ReloadSettings);

    // Reload-Empty
    FWeaponMontageSettings ReloadEmptySettings = CreateMontageSettings(
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/Snipers/Animation/Montage/AM_FP_WEP_Sniper_02_Reload_Empty.AM_FP_WEP_Sniper_02_Reload_Empty'"),
        TEXT("/Script/Engine.AnimMontage'/Game/Assets/Weapon/Snipers/Animation/Montage/AM_TP_WEP_Sniper_02_Reload_Empty.AM_TP_WEP_Sniper_02_Reload_Empty'")
    );
    GSniper02MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Reload_Empty, ReloadEmptySettings);

    // Inspect
    FWeaponMontageSettings InspectSettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GSniper02MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Inspect, InspectSettings);

    // Holster
    FWeaponMontageSettings HolsterSettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GSniper02MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Holster, HolsterSettings);

    // Unholster
    FWeaponMontageSettings UnholsterSettings = CreateMontageSettings(
        TEXT("None"),
        TEXT("None")
    );
    GSniper02MontageSettingsMap.Add(ECharacterMontageName::Character_Montage_Unholster, UnholsterSettings);
}

FWeaponMontageSettings USniper02MontageSettingsLibrary::GetSniper02MontageSettingsByName(ECharacterMontageName MontageName)
{
    InitSniper02MontageSettingsMap();
    if (GSniper02MontageSettingsMap.Contains(MontageName))
    {
        return GSniper02MontageSettingsMap[MontageName];
    }
    return FWeaponMontageSettings(); // Return default settings if not found
}

TArray<FWeaponMontageSettings> USniper02MontageSettingsLibrary::GetAllSniper02MontageSettings()
{
    InitSniper02MontageSettingsMap();
    TArray<FWeaponMontageSettings> AllSettings;
    GSniper02MontageSettingsMap.GenerateValueArray(AllSettings);
    return AllSettings;
}
