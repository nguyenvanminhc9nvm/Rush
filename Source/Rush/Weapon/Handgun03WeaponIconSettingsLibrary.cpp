#include "Handgun03WeaponIconSettingsLibrary.h"
#include "Engine/Engine.h"

static TMap<EWeaponIconName, FWeaponIcon> GHandgun03WeaponIconMap;

static void InitHandgun03WeaponIconMap()
{
    if (GHandgun03WeaponIconMap.Num() > 0) return;

    // Helper function to create WeaponIcon
    auto CreateWeaponIcon = [](EWeaponIconName IconName, const FString& TexturePath) -> FWeaponIcon
    {
        FWeaponIcon Icon;
        Icon.Name = IconName;
        Icon.Texture = TSoftObjectPtr<UTexture2D>(FSoftObjectPath(TexturePath));
        return Icon;
    };

    // Handgun_03 Icons
    FWeaponIcon Handgun03Body = CreateWeaponIcon(
        EWeaponIconName::Body,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_03_D.T_HUD_Handgun_03_D")
    );
    GHandgun03WeaponIconMap.Add(EWeaponIconName::Body, Handgun03Body);

    FWeaponIcon Handgun03Silencer01 = CreateWeaponIcon(
        EWeaponIconName::Silencer_01,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_03_Silencer_01_D.T_HUD_Handgun_03_Silencer_01_D")
    );
    GHandgun03WeaponIconMap.Add(EWeaponIconName::Silencer_01, Handgun03Silencer01);

    FWeaponIcon Handgun03Silencer02 = CreateWeaponIcon(
        EWeaponIconName::Silencer_02,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_03_Silencer_02_D.T_HUD_Handgun_03_Silencer_02_D")
    );
    GHandgun03WeaponIconMap.Add(EWeaponIconName::Silencer_02, Handgun03Silencer02);

    FWeaponIcon Handgun03Silencer03 = CreateWeaponIcon(
        EWeaponIconName::Silencer_03,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_03_Silencer_03_D.T_HUD_Handgun_03_Silencer_03_D")
    );
    GHandgun03WeaponIconMap.Add(EWeaponIconName::Silencer_03, Handgun03Silencer03);

    FWeaponIcon Handgun03Scope01 = CreateWeaponIcon(
        EWeaponIconName::Scope_01,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_03_Scope_01_D.T_HUD_Handgun_03_Scope_01_D")
    );
    GHandgun03WeaponIconMap.Add(EWeaponIconName::Scope_01, Handgun03Scope01);

    FWeaponIcon Handgun03Scope02 = CreateWeaponIcon(
        EWeaponIconName::Scope_02,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_03_Scope_02_D.T_HUD_Handgun_03_Scope_02_D")
    );
    GHandgun03WeaponIconMap.Add(EWeaponIconName::Scope_02, Handgun03Scope02);

    FWeaponIcon Handgun03Scope03 = CreateWeaponIcon(
        EWeaponIconName::Scope_03,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_03_Scope_03_D.T_HUD_Handgun_03_Scope_03_D")
    );
    GHandgun03WeaponIconMap.Add(EWeaponIconName::Scope_03, Handgun03Scope03);

    FWeaponIcon Handgun03Scope04 = CreateWeaponIcon(
        EWeaponIconName::Scope_04,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_03_Scope_04_D.T_HUD_Handgun_03_Scope_04_D")
    );
    GHandgun03WeaponIconMap.Add(EWeaponIconName::Scope_04, Handgun03Scope04);

    FWeaponIcon Handgun03Scope05 = CreateWeaponIcon(
        EWeaponIconName::Scope_05,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_03_Scope_05_D.T_HUD_Handgun_03_Scope_05_D")
    );
    GHandgun03WeaponIconMap.Add(EWeaponIconName::Scope_05, Handgun03Scope05);

    FWeaponIcon Handgun03Scope06 = CreateWeaponIcon(
        EWeaponIconName::Scope_06,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_03_Scope_06_D.T_HUD_Handgun_03_Scope_06_D")
    );
    GHandgun03WeaponIconMap.Add(EWeaponIconName::Scope_06, Handgun03Scope06);

    FWeaponIcon Handgun03Scope07 = CreateWeaponIcon(
        EWeaponIconName::Scope_07,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_03_Scope_07_D.T_HUD_Handgun_03_Scope_07_D")
    );
    GHandgun03WeaponIconMap.Add(EWeaponIconName::Scope_07, Handgun03Scope07);

    FWeaponIcon Handgun03Scope08 = CreateWeaponIcon(
        EWeaponIconName::Scope_08,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_03_Scope_08_D.T_HUD_Handgun_03_Scope_08_D")
    );
    GHandgun03WeaponIconMap.Add(EWeaponIconName::Scope_08, Handgun03Scope08);

    FWeaponIcon Handgun03Grip01 = CreateWeaponIcon(
        EWeaponIconName::Grip_01,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_03_Grip_01_D.T_HUD_Handgun_03_Grip_01_D")
    );
    GHandgun03WeaponIconMap.Add(EWeaponIconName::Grip_01, Handgun03Grip01);

    FWeaponIcon Handgun03Bipod01 = CreateWeaponIcon(
        EWeaponIconName::Bipod_01,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_03_Bipod_01_D.T_HUD_Handgun_03_Bipod_01_D")
    );
    GHandgun03WeaponIconMap.Add(EWeaponIconName::Bipod_01, Handgun03Bipod01);

    FWeaponIcon Handgun03Bipod02 = CreateWeaponIcon(
        EWeaponIconName::Bipod_02,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_03_Bipod_02_D.T_HUD_Handgun_03_Bipod_02_D")
    );
    GHandgun03WeaponIconMap.Add(EWeaponIconName::Bipod_02, Handgun03Bipod02);

    FWeaponIcon Handgun03Flashlight = CreateWeaponIcon(
        EWeaponIconName::Flashlight,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_03_Laser_Flashlight_01_D.T_HUD_Handgun_03_Laser_Flashlight_01_D")
    );
    GHandgun03WeaponIconMap.Add(EWeaponIconName::Flashlight, Handgun03Flashlight);

    FWeaponIcon Handgun03Lasersight = CreateWeaponIcon(
        EWeaponIconName::Lasersight,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_03_Laser_Sight_01_D.T_HUD_Handgun_03_Laser_Sight_01_D")
    );
    GHandgun03WeaponIconMap.Add(EWeaponIconName::Lasersight, Handgun03Lasersight);

    FWeaponIcon Handgun03Magazine = CreateWeaponIcon(
        EWeaponIconName::Magazine,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_03_Magazine_Default_D.T_HUD_Handgun_03_Magazine_Default_D")
    );
    GHandgun03WeaponIconMap.Add(EWeaponIconName::Magazine, Handgun03Magazine);

    FWeaponIcon Handgun03ScopeDefault = CreateWeaponIcon(
        EWeaponIconName::Scope_Default,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_03_Scope_Default_D.T_HUD_Handgun_03_Scope_Default_D")
    );
    GHandgun03WeaponIconMap.Add(EWeaponIconName::Scope_Default, Handgun03ScopeDefault);
}

FWeaponIcon UHandgun03WeaponIconSettingsLibrary::GetWeaponIconByName(EWeaponIconName IconName)
{
    InitHandgun03WeaponIconMap();
    if (GHandgun03WeaponIconMap.Contains(IconName))
    {
        return GHandgun03WeaponIconMap[IconName];
    }
    return FWeaponIcon(); // Return default icon if not found
}
