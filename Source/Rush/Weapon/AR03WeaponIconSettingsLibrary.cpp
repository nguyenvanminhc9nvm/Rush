#include "AR03WeaponIconSettingsLibrary.h"
#include "Engine/Engine.h"

static TMap<EWeaponIconName, FWeaponIcon> GAR03WeaponIconMap;

static void InitAR03WeaponIconMap()
{
    if (GAR03WeaponIconMap.Num() > 0) return;

    // Helper function to create WeaponIcon
    auto CreateWeaponIcon = [](EWeaponIconName IconName, const FString& TexturePath) -> FWeaponIcon
    {
        FWeaponIcon Icon;
        Icon.Name = IconName;
        Icon.Texture = TSoftObjectPtr<UTexture2D>(FSoftObjectPath(TexturePath));
        return Icon;
    };

    // AR_03 Icons
    FWeaponIcon AR03Body = CreateWeaponIcon(
        EWeaponIconName::Body,
        TEXT("/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_03_D.T_HUD_AR_03_D")
    );
    GAR03WeaponIconMap.Add(EWeaponIconName::Body, AR03Body);

    FWeaponIcon AR03Silencer01 = CreateWeaponIcon(
        EWeaponIconName::Silencer_01,
        TEXT("/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_03_Silencer_01_D.T_HUD_AR_03_Silencer_01_D")
    );
    GAR03WeaponIconMap.Add(EWeaponIconName::Silencer_01, AR03Silencer01);

    FWeaponIcon AR03Silencer02 = CreateWeaponIcon(
        EWeaponIconName::Silencer_02,
        TEXT("/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_03_Silencer_02_D.T_HUD_AR_03_Silencer_02_D")
    );
    GAR03WeaponIconMap.Add(EWeaponIconName::Silencer_02, AR03Silencer02);

    FWeaponIcon AR03Silencer03 = CreateWeaponIcon(
        EWeaponIconName::Silencer_03,
        TEXT("/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_03_Silencer_03_D.T_HUD_AR_03_Silencer_03_D")
    );
    GAR03WeaponIconMap.Add(EWeaponIconName::Silencer_03, AR03Silencer03);

    FWeaponIcon AR03Scope01 = CreateWeaponIcon(
        EWeaponIconName::Scope_01,
        TEXT("/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_03_Scope_01_D.T_HUD_AR_03_Scope_01_D")
    );
    GAR03WeaponIconMap.Add(EWeaponIconName::Scope_01, AR03Scope01);

    FWeaponIcon AR03Scope02 = CreateWeaponIcon(
        EWeaponIconName::Scope_02,
        TEXT("/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_03_Scope_02_D.T_HUD_AR_03_Scope_02_D")
    );
    GAR03WeaponIconMap.Add(EWeaponIconName::Scope_02, AR03Scope02);

    FWeaponIcon AR03Scope03 = CreateWeaponIcon(
        EWeaponIconName::Scope_03,
        TEXT("/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_03_Scope_03_D.T_HUD_AR_03_Scope_03_D")
    );
    GAR03WeaponIconMap.Add(EWeaponIconName::Scope_03, AR03Scope03);

    FWeaponIcon AR03Scope04 = CreateWeaponIcon(
        EWeaponIconName::Scope_04,
        TEXT("/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_03_Scope_04_D.T_HUD_AR_03_Scope_04_D")
    );
    GAR03WeaponIconMap.Add(EWeaponIconName::Scope_04, AR03Scope04);

    FWeaponIcon AR03Scope05 = CreateWeaponIcon(
        EWeaponIconName::Scope_05,
        TEXT("/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_03_Scope_05_D.T_HUD_AR_03_Scope_05_D")
    );
    GAR03WeaponIconMap.Add(EWeaponIconName::Scope_05, AR03Scope05);

    FWeaponIcon AR03Scope06 = CreateWeaponIcon(
        EWeaponIconName::Scope_06,
        TEXT("/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_03_Scope_06_D.T_HUD_AR_03_Scope_06_D")
    );
    GAR03WeaponIconMap.Add(EWeaponIconName::Scope_06, AR03Scope06);

    FWeaponIcon AR03Scope07 = CreateWeaponIcon(
        EWeaponIconName::Scope_07,
        TEXT("/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_03_Scope_07_D.T_HUD_AR_03_Scope_07_D")
    );
    GAR03WeaponIconMap.Add(EWeaponIconName::Scope_07, AR03Scope07);

    FWeaponIcon AR03Scope08 = CreateWeaponIcon(
        EWeaponIconName::Scope_08,
        TEXT("/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_03_Scope_08_D.T_HUD_AR_03_Scope_08_D")
    );
    GAR03WeaponIconMap.Add(EWeaponIconName::Scope_08, AR03Scope08);

    FWeaponIcon AR03Grip01 = CreateWeaponIcon(
        EWeaponIconName::Grip_01,
        TEXT("/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_03_Grip_01_D.T_HUD_AR_03_Grip_01_D")
    );
    GAR03WeaponIconMap.Add(EWeaponIconName::Grip_01, AR03Grip01);

    FWeaponIcon AR03Bipod01 = CreateWeaponIcon(
        EWeaponIconName::Bipod_01,
        TEXT("/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_03_Bipod_01_D.T_HUD_AR_03_Bipod_01_D")
    );
    GAR03WeaponIconMap.Add(EWeaponIconName::Bipod_01, AR03Bipod01);

    FWeaponIcon AR03Bipod02 = CreateWeaponIcon(
        EWeaponIconName::Bipod_02,
        TEXT("/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_03_Bipod_02_D.T_HUD_AR_03_Bipod_02_D")
    );
    GAR03WeaponIconMap.Add(EWeaponIconName::Bipod_02, AR03Bipod02);

    FWeaponIcon AR03Flashlight = CreateWeaponIcon(
        EWeaponIconName::Flashlight,
        TEXT("/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_03_Laser_Flashlight_01_D.T_HUD_AR_03_Laser_Flashlight_01_D")
    );
    GAR03WeaponIconMap.Add(EWeaponIconName::Flashlight, AR03Flashlight);

    FWeaponIcon AR03Lasersight = CreateWeaponIcon(
        EWeaponIconName::Lasersight,
        TEXT("/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_03_Laser_Sight_01_D.T_HUD_AR_03_Laser_Sight_01_D")
    );
    GAR03WeaponIconMap.Add(EWeaponIconName::Lasersight, AR03Lasersight);

    FWeaponIcon AR03Magazine = CreateWeaponIcon(
        EWeaponIconName::Magazine,
        TEXT("/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_03_Magazine_Default_D.T_HUD_AR_03_Magazine_Default_D")
    );
    GAR03WeaponIconMap.Add(EWeaponIconName::Magazine, AR03Magazine);

    FWeaponIcon AR03ScopeDefault = CreateWeaponIcon(
        EWeaponIconName::Scope_Default,
        TEXT("/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_03_Scope_Default_D.T_HUD_AR_03_Scope_Default_D")
    );
    GAR03WeaponIconMap.Add(EWeaponIconName::Scope_Default, AR03ScopeDefault);
}

FWeaponIcon UAR03WeaponIconSettingsLibrary::GetWeaponIconByName(EWeaponIconName IconName)
{
    InitAR03WeaponIconMap();
    if (GAR03WeaponIconMap.Contains(IconName))
    {
        return GAR03WeaponIconMap[IconName];
    }
    return FWeaponIcon(); // Return default icon if not found
}
