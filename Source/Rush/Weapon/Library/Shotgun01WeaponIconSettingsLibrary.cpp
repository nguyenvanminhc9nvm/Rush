#include "Shotgun01WeaponIconSettingsLibrary.h"
#include "Engine/Engine.h"

static TMap<EWeaponIconName, FWeaponIcon> GShotgun01WeaponIconMap;

static void InitShotgun01WeaponIconMap()
{
    if (GShotgun01WeaponIconMap.Num() > 0) return;

    // Helper function to create WeaponIcon
    auto CreateWeaponIcon = [](EWeaponIconName IconName, const FString& TexturePath) -> FWeaponIcon
    {
        FWeaponIcon Icon;
        Icon.Name = IconName;
        Icon.Texture = TSoftObjectPtr<UTexture2D>(FSoftObjectPath(TexturePath));
        return Icon;
    };

    // Shotgun_01 Icons
    FWeaponIcon Shotgun01Body = CreateWeaponIcon(
        EWeaponIconName::Body,
        TEXT("/Game/Assets/Icons/Weapons/Shotguns/T_HUD_Shotgun_01_D.T_HUD_Shotgun_01_D")
    );
    GShotgun01WeaponIconMap.Add(EWeaponIconName::Body, Shotgun01Body);

    FWeaponIcon Shotgun01Silencer01 = CreateWeaponIcon(
        EWeaponIconName::Silencer_01,
        TEXT("/Game/Assets/Icons/Weapons/Shotguns/T_HUD_Shotgun_01_Silencer_01_D.T_HUD_Shotgun_01_Silencer_01_D")
    );
    GShotgun01WeaponIconMap.Add(EWeaponIconName::Silencer_01, Shotgun01Silencer01);

    FWeaponIcon Shotgun01Silencer02 = CreateWeaponIcon(
        EWeaponIconName::Silencer_02,
        TEXT("/Game/Assets/Icons/Weapons/Shotguns/T_HUD_Shotgun_01_Silencer_02_D.T_HUD_Shotgun_01_Silencer_02_D")
    );
    GShotgun01WeaponIconMap.Add(EWeaponIconName::Silencer_02, Shotgun01Silencer02);

    FWeaponIcon Shotgun01Silencer03 = CreateWeaponIcon(
        EWeaponIconName::Silencer_03,
        TEXT("/Game/Assets/Icons/Weapons/Shotguns/T_HUD_Shotgun_01_Silencer_03_D.T_HUD_Shotgun_01_Silencer_03_D")
    );
    GShotgun01WeaponIconMap.Add(EWeaponIconName::Silencer_03, Shotgun01Silencer03);

    FWeaponIcon Shotgun01Scope01 = CreateWeaponIcon(
        EWeaponIconName::Scope_01,
        TEXT("/Game/Assets/Icons/Weapons/Shotguns/T_HUD_Shotgun_01_Scope_01_D.T_HUD_Shotgun_01_Scope_01_D")
    );
    GShotgun01WeaponIconMap.Add(EWeaponIconName::Scope_01, Shotgun01Scope01);

    FWeaponIcon Shotgun01Scope02 = CreateWeaponIcon(
        EWeaponIconName::Scope_02,
        TEXT("/Game/Assets/Icons/Weapons/Shotguns/T_HUD_Shotgun_01_Scope_02_D.T_HUD_Shotgun_01_Scope_02_D")
    );
    GShotgun01WeaponIconMap.Add(EWeaponIconName::Scope_02, Shotgun01Scope02);

    FWeaponIcon Shotgun01Scope03 = CreateWeaponIcon(
        EWeaponIconName::Scope_03,
        TEXT("/Game/Assets/Icons/Weapons/Shotguns/T_HUD_Shotgun_01_Scope_03_D.T_HUD_Shotgun_01_Scope_03_D")
    );
    GShotgun01WeaponIconMap.Add(EWeaponIconName::Scope_03, Shotgun01Scope03);

    FWeaponIcon Shotgun01Scope04 = CreateWeaponIcon(
        EWeaponIconName::Scope_04,
        TEXT("/Game/Assets/Icons/Weapons/Shotguns/T_HUD_Shotgun_01_Scope_04_D.T_HUD_Shotgun_01_Scope_04_D")
    );
    GShotgun01WeaponIconMap.Add(EWeaponIconName::Scope_04, Shotgun01Scope04);

    FWeaponIcon Shotgun01Scope05 = CreateWeaponIcon(
        EWeaponIconName::Scope_05,
        TEXT("/Game/Assets/Icons/Weapons/Shotguns/T_HUD_Shotgun_01_Scope_05_D.T_HUD_Shotgun_01_Scope_05_D")
    );
    GShotgun01WeaponIconMap.Add(EWeaponIconName::Scope_05, Shotgun01Scope05);

    FWeaponIcon Shotgun01Scope06 = CreateWeaponIcon(
        EWeaponIconName::Scope_06,
        TEXT("/Game/Assets/Icons/Weapons/Shotguns/T_HUD_Shotgun_01_Scope_06_D.T_HUD_Shotgun_01_Scope_06_D")
    );
    GShotgun01WeaponIconMap.Add(EWeaponIconName::Scope_06, Shotgun01Scope06);

    FWeaponIcon Shotgun01Scope07 = CreateWeaponIcon(
        EWeaponIconName::Scope_07,
        TEXT("/Game/Assets/Icons/Weapons/Shotguns/T_HUD_Shotgun_01_Scope_07_D.T_HUD_Shotgun_01_Scope_07_D")
    );
    GShotgun01WeaponIconMap.Add(EWeaponIconName::Scope_07, Shotgun01Scope07);

    FWeaponIcon Shotgun01Scope08 = CreateWeaponIcon(
        EWeaponIconName::Scope_08,
        TEXT("/Game/Assets/Icons/Weapons/Shotguns/T_HUD_Shotgun_01_Scope_08_D.T_HUD_Shotgun_01_Scope_08_D")
    );
    GShotgun01WeaponIconMap.Add(EWeaponIconName::Scope_08, Shotgun01Scope08);

    FWeaponIcon Shotgun01Grip01 = CreateWeaponIcon(
        EWeaponIconName::Grip_01,
        TEXT("/Game/Assets/Icons/Weapons/Shotguns/T_HUD_Shotgun_01_Grip_01_D.T_HUD_Shotgun_01_Grip_01_D")
    );
    GShotgun01WeaponIconMap.Add(EWeaponIconName::Grip_01, Shotgun01Grip01);

    FWeaponIcon Shotgun01Bipod01 = CreateWeaponIcon(
        EWeaponIconName::Bipod_01,
        TEXT("/Game/Assets/Icons/Weapons/Shotguns/T_HUD_Shotgun_01_Bipod_01_D.T_HUD_Shotgun_01_Bipod_01_D")
    );
    GShotgun01WeaponIconMap.Add(EWeaponIconName::Bipod_01, Shotgun01Bipod01);

    FWeaponIcon Shotgun01Bipod02 = CreateWeaponIcon(
        EWeaponIconName::Bipod_02,
        TEXT("/Game/Assets/Icons/Weapons/Shotguns/T_HUD_Shotgun_01_Bipod_02_D.T_HUD_Shotgun_01_Bipod_02_D")
    );
    GShotgun01WeaponIconMap.Add(EWeaponIconName::Bipod_02, Shotgun01Bipod02);

    FWeaponIcon Shotgun01Flashlight = CreateWeaponIcon(
        EWeaponIconName::Flashlight,
        TEXT("/Game/Assets/Icons/Weapons/Shotguns/T_HUD_Shotgun_01_Laser_Flashlight_01_D.T_HUD_Shotgun_01_Laser_Flashlight_01_D")
    );
    GShotgun01WeaponIconMap.Add(EWeaponIconName::Flashlight, Shotgun01Flashlight);

    FWeaponIcon Shotgun01Lasersight = CreateWeaponIcon(
        EWeaponIconName::Lasersight,
        TEXT("/Game/Assets/Icons/Weapons/Shotguns/T_HUD_Shotgun_01_Laser_Sight_01_D.T_HUD_Shotgun_01_Laser_Sight_01_D")
    );
    GShotgun01WeaponIconMap.Add(EWeaponIconName::Lasersight, Shotgun01Lasersight);

    FWeaponIcon Shotgun01ScopeDefault = CreateWeaponIcon(
        EWeaponIconName::Scope_Default,
        TEXT("/Game/Assets/Icons/Weapons/Shotguns/T_HUD_Shotgun_01_Scope_Default_D.T_HUD_Shotgun_01_Scope_Default_D")
    );
    GShotgun01WeaponIconMap.Add(EWeaponIconName::Scope_Default, Shotgun01ScopeDefault);

    FWeaponIcon Shotgun01Magazine = CreateWeaponIcon(
        EWeaponIconName::Magazine,
        TEXT("/Game/Assets/Icons/Weapons/Shotguns/T_HUD_Shotgun_01_Magazine_Default_D.T_HUD_Shotgun_01_Magazine_Default_D")
    );
    GShotgun01WeaponIconMap.Add(EWeaponIconName::Magazine, Shotgun01Magazine);
}

FWeaponIcon UShotgun01WeaponIconSettingsLibrary::GetWeaponIconByName(EWeaponIconName IconName)
{
    InitShotgun01WeaponIconMap();
    if (GShotgun01WeaponIconMap.Contains(IconName))
    {
        return GShotgun01WeaponIconMap[IconName];
    }
    return FWeaponIcon(); // Return default icon if not found
}

TArray<FWeaponIcon> UShotgun01WeaponIconSettingsLibrary::GetAllShotgun01WeaponIcons()
{
    InitShotgun01WeaponIconMap();
    TArray<FWeaponIcon> AllIcons;
    GShotgun01WeaponIconMap.GenerateValueArray(AllIcons);
    return AllIcons;
}
