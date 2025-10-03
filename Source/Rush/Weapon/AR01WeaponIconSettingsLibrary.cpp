#include "AR01WeaponIconSettingsLibrary.h"
#include "Engine/Engine.h"

static TMap<EWeaponIconName, FWeaponIcon> GAR01WeaponIconMap;

static void InitAR01WeaponIconMap()
{
    if (GAR01WeaponIconMap.Num() > 0) return;

    // Helper function to create WeaponIcon
    auto CreateWeaponIcon = [](EWeaponIconName IconName, const FString& TexturePath) -> FWeaponIcon
    {
        FWeaponIcon Icon;
        Icon.Name = IconName;
        Icon.Texture = TSoftObjectPtr<UTexture2D>(FSoftObjectPath(TexturePath));
        return Icon;
    };

    // AR_01 Icons
    FWeaponIcon AR01Body = CreateWeaponIcon(
        EWeaponIconName::Body,
        TEXT("/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_01_D.T_HUD_AR_01_D")
    );
    GAR01WeaponIconMap.Add(EWeaponIconName::Body, AR01Body);

    FWeaponIcon AR01Silencer01 = CreateWeaponIcon(
        EWeaponIconName::Silencer_01,
        TEXT("/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_01_Silencer_01_D.T_HUD_AR_01_Silencer_01_D")
    );
    GAR01WeaponIconMap.Add(EWeaponIconName::Silencer_01, AR01Silencer01);

    FWeaponIcon AR01Silencer02 = CreateWeaponIcon(
        EWeaponIconName::Silencer_02,
        TEXT("/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_01_Silencer_02_D.T_HUD_AR_01_Silencer_02_D")
    );
    GAR01WeaponIconMap.Add(EWeaponIconName::Silencer_02, AR01Silencer02);

    FWeaponIcon AR01Silencer03 = CreateWeaponIcon(
        EWeaponIconName::Silencer_03,
        TEXT("/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_01_Silencer_03_D.T_HUD_AR_01_Silencer_03_D")
    );
    GAR01WeaponIconMap.Add(EWeaponIconName::Silencer_03, AR01Silencer03);

    FWeaponIcon AR01Scope01 = CreateWeaponIcon(
        EWeaponIconName::Scope_01,
        TEXT("/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_01_Scope_01_D.T_HUD_AR_01_Scope_01_D")
    );
    GAR01WeaponIconMap.Add(EWeaponIconName::Scope_01, AR01Scope01);

    FWeaponIcon AR01Scope02 = CreateWeaponIcon(
        EWeaponIconName::Scope_02,
        TEXT("/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_01_Scope_02_D.T_HUD_AR_01_Scope_02_D")
    );
    GAR01WeaponIconMap.Add(EWeaponIconName::Scope_02, AR01Scope02);

    FWeaponIcon AR01Scope03 = CreateWeaponIcon(
        EWeaponIconName::Scope_03,
        TEXT("/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_01_Scope_03_D.T_HUD_AR_01_Scope_03_D")
    );
    GAR01WeaponIconMap.Add(EWeaponIconName::Scope_03, AR01Scope03);

    FWeaponIcon AR01Scope04 = CreateWeaponIcon(
        EWeaponIconName::Scope_04,
        TEXT("/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_01_Scope_04_D.T_HUD_AR_01_Scope_04_D")
    );
    GAR01WeaponIconMap.Add(EWeaponIconName::Scope_04, AR01Scope04);

    FWeaponIcon AR01Scope05 = CreateWeaponIcon(
        EWeaponIconName::Scope_05,
        TEXT("/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_01_Scope_05_D.T_HUD_AR_01_Scope_05_D")
    );
    GAR01WeaponIconMap.Add(EWeaponIconName::Scope_05, AR01Scope05);

    FWeaponIcon AR01Scope06 = CreateWeaponIcon(
        EWeaponIconName::Scope_06,
        TEXT("/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_01_Scope_06_D.T_HUD_AR_01_Scope_06_D")
    );
    GAR01WeaponIconMap.Add(EWeaponIconName::Scope_06, AR01Scope06);

    FWeaponIcon AR01Scope07 = CreateWeaponIcon(
        EWeaponIconName::Scope_07,
        TEXT("/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_01_Scope_07_D.T_HUD_AR_01_Scope_07_D")
    );
    GAR01WeaponIconMap.Add(EWeaponIconName::Scope_07, AR01Scope07);

    FWeaponIcon AR01Scope08 = CreateWeaponIcon(
        EWeaponIconName::Scope_08,
        TEXT("/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_01_Scope_08_D.T_HUD_AR_01_Scope_08_D")
    );
    GAR01WeaponIconMap.Add(EWeaponIconName::Scope_08, AR01Scope08);

    FWeaponIcon AR01Grip01 = CreateWeaponIcon(
        EWeaponIconName::Grip_01,
        TEXT("/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_01_Grip_01_D.T_HUD_AR_01_Grip_01_D")
    );
    GAR01WeaponIconMap.Add(EWeaponIconName::Grip_01, AR01Grip01);

    FWeaponIcon AR01Bipod01 = CreateWeaponIcon(
        EWeaponIconName::Bipod_01,
        TEXT("/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_01_Bipod_01_D.T_HUD_AR_01_Bipod_01_D")
    );
    GAR01WeaponIconMap.Add(EWeaponIconName::Bipod_01, AR01Bipod01);

    FWeaponIcon AR01Bipod02 = CreateWeaponIcon(
        EWeaponIconName::Bipod_02,
        TEXT("/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_01_Bipod_02_D.T_HUD_AR_01_Bipod_02_D")
    );
    GAR01WeaponIconMap.Add(EWeaponIconName::Bipod_02, AR01Bipod02);

    FWeaponIcon AR01Flashlight = CreateWeaponIcon(
        EWeaponIconName::Flashlight,
        TEXT("/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_01_Laser_Flashlight_01_D.T_HUD_AR_01_Laser_Flashlight_01_D")
    );
    GAR01WeaponIconMap.Add(EWeaponIconName::Flashlight, AR01Flashlight);

    FWeaponIcon AR01Lasersight = CreateWeaponIcon(
        EWeaponIconName::Lasersight,
        TEXT("/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_01_Laser_Sight_01_D.T_HUD_AR_01_Laser_Sight_01_D")
    );
    GAR01WeaponIconMap.Add(EWeaponIconName::Lasersight, AR01Lasersight);

    FWeaponIcon AR01Magazine = CreateWeaponIcon(
        EWeaponIconName::Magazine,
        TEXT("/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_01_Magazine_Default_D.T_HUD_AR_01_Magazine_Default_D")
    );
    GAR01WeaponIconMap.Add(EWeaponIconName::Magazine, AR01Magazine);

    FWeaponIcon AR01ScopeDefault = CreateWeaponIcon(
        EWeaponIconName::Scope_Default,
        TEXT("/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_01_Scope_Default_D.T_HUD_AR_01_Scope_Default_D")
    );
    GAR01WeaponIconMap.Add(EWeaponIconName::Scope_Default, AR01ScopeDefault);
}

FWeaponIcon UAR01WeaponIconSettingsLibrary::GetWeaponIconByName(EWeaponIconName IconName)
{
    InitAR01WeaponIconMap();
    if (GAR01WeaponIconMap.Contains(IconName))
    {
        return GAR01WeaponIconMap[IconName];
    }
    return FWeaponIcon(); // Return default icon if not found
}

TArray<FWeaponIcon> UAR01WeaponIconSettingsLibrary::GetAllAR01WeaponIcons()
{
    InitAR01WeaponIconMap();
    TArray<FWeaponIcon> AllIcons;
    GAR01WeaponIconMap.GenerateValueArray(AllIcons);
    return AllIcons;
}
