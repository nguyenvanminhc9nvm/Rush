#include "Sniper03WeaponIconSettingsLibrary.h"
#include "Engine/Engine.h"

static TMap<EWeaponIconName, FWeaponIcon> GSniper03WeaponIconMap;

static void InitSniper03WeaponIconMap()
{
    if (GSniper03WeaponIconMap.Num() > 0) return;

    // Helper function to create WeaponIcon
    auto CreateWeaponIcon = [](EWeaponIconName IconName, const FString& TexturePath) -> FWeaponIcon
    {
        FWeaponIcon Icon;
        Icon.Name = IconName;
        Icon.Texture = TSoftObjectPtr<UTexture2D>(FSoftObjectPath(TexturePath));
        return Icon;
    };

    // Sniper_03 Icons
    FWeaponIcon Sniper03Body = CreateWeaponIcon(
        EWeaponIconName::Body,
        TEXT("/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_03_D.T_HUD_Sniper_03_D")
    );
    GSniper03WeaponIconMap.Add(EWeaponIconName::Body, Sniper03Body);

    FWeaponIcon Sniper03Silencer01 = CreateWeaponIcon(
        EWeaponIconName::Silencer_01,
        TEXT("/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_03_Silencer_01_D.T_HUD_Sniper_03_Silencer_01_D")
    );
    GSniper03WeaponIconMap.Add(EWeaponIconName::Silencer_01, Sniper03Silencer01);

    FWeaponIcon Sniper03Silencer02 = CreateWeaponIcon(
        EWeaponIconName::Silencer_02,
        TEXT("/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_03_Silencer_02_D.T_HUD_Sniper_03_Silencer_02_D")
    );
    GSniper03WeaponIconMap.Add(EWeaponIconName::Silencer_02, Sniper03Silencer02);

    FWeaponIcon Sniper03Silencer03 = CreateWeaponIcon(
        EWeaponIconName::Silencer_03,
        TEXT("/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_03_Silencer_03_D.T_HUD_Sniper_03_Silencer_03_D")
    );
    GSniper03WeaponIconMap.Add(EWeaponIconName::Silencer_03, Sniper03Silencer03);

    FWeaponIcon Sniper03Scope01 = CreateWeaponIcon(
        EWeaponIconName::Scope_01,
        TEXT("/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_03_Scope_01_D.T_HUD_Sniper_03_Scope_01_D")
    );
    GSniper03WeaponIconMap.Add(EWeaponIconName::Scope_01, Sniper03Scope01);

    FWeaponIcon Sniper03Scope02 = CreateWeaponIcon(
        EWeaponIconName::Scope_02,
        TEXT("/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_03_Scope_02_D.T_HUD_Sniper_03_Scope_02_D")
    );
    GSniper03WeaponIconMap.Add(EWeaponIconName::Scope_02, Sniper03Scope02);

    FWeaponIcon Sniper03Scope03 = CreateWeaponIcon(
        EWeaponIconName::Scope_03,
        TEXT("/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_03_Scope_03_D.T_HUD_Sniper_03_Scope_03_D")
    );
    GSniper03WeaponIconMap.Add(EWeaponIconName::Scope_03, Sniper03Scope03);

    FWeaponIcon Sniper03Scope04 = CreateWeaponIcon(
        EWeaponIconName::Scope_04,
        TEXT("/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_03_Scope_04_D.T_HUD_Sniper_03_Scope_04_D")
    );
    GSniper03WeaponIconMap.Add(EWeaponIconName::Scope_04, Sniper03Scope04);

    FWeaponIcon Sniper03Scope05 = CreateWeaponIcon(
        EWeaponIconName::Scope_05,
        TEXT("/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_03_Scope_05_D.T_HUD_Sniper_03_Scope_05_D")
    );
    GSniper03WeaponIconMap.Add(EWeaponIconName::Scope_05, Sniper03Scope05);

    FWeaponIcon Sniper03Scope06 = CreateWeaponIcon(
        EWeaponIconName::Scope_06,
        TEXT("/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_03_Scope_06_D.T_HUD_Sniper_03_Scope_06_D")
    );
    GSniper03WeaponIconMap.Add(EWeaponIconName::Scope_06, Sniper03Scope06);

    FWeaponIcon Sniper03Scope07 = CreateWeaponIcon(
        EWeaponIconName::Scope_07,
        TEXT("/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_03_Scope_07_D.T_HUD_Sniper_03_Scope_07_D")
    );
    GSniper03WeaponIconMap.Add(EWeaponIconName::Scope_07, Sniper03Scope07);

    FWeaponIcon Sniper03Scope08 = CreateWeaponIcon(
        EWeaponIconName::Scope_08,
        TEXT("/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_03_Scope_08_D.T_HUD_Sniper_03_Scope_08_D")
    );
    GSniper03WeaponIconMap.Add(EWeaponIconName::Scope_08, Sniper03Scope08);

    FWeaponIcon Sniper03Grip01 = CreateWeaponIcon(
        EWeaponIconName::Grip_01,
        TEXT("/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_03_Grip_01_D.T_HUD_Sniper_03_Grip_01_D")
    );
    GSniper03WeaponIconMap.Add(EWeaponIconName::Grip_01, Sniper03Grip01);

    FWeaponIcon Sniper03Bipod01 = CreateWeaponIcon(
        EWeaponIconName::Bipod_01,
        TEXT("/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_03_Bipod_01_D.T_HUD_Sniper_03_Bipod_01_D")
    );
    GSniper03WeaponIconMap.Add(EWeaponIconName::Bipod_01, Sniper03Bipod01);

    FWeaponIcon Sniper03Bipod02 = CreateWeaponIcon(
        EWeaponIconName::Bipod_02,
        TEXT("/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_03_Bipod_02_D.T_HUD_Sniper_03_Bipod_02_D")
    );
    GSniper03WeaponIconMap.Add(EWeaponIconName::Bipod_02, Sniper03Bipod02);

    FWeaponIcon Sniper03Flashlight = CreateWeaponIcon(
        EWeaponIconName::Flashlight,
        TEXT("/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_03_Laser_Flashlight_01_D.T_HUD_Sniper_03_Laser_Flashlight_01_D")
    );
    GSniper03WeaponIconMap.Add(EWeaponIconName::Flashlight, Sniper03Flashlight);

    FWeaponIcon Sniper03Lasersight = CreateWeaponIcon(
        EWeaponIconName::Lasersight,
        TEXT("/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_03_Laser_Sight_01_D.T_HUD_Sniper_03_Laser_Sight_01_D")
    );
    GSniper03WeaponIconMap.Add(EWeaponIconName::Lasersight, Sniper03Lasersight);

    FWeaponIcon Sniper03ScopeDefault = CreateWeaponIcon(
        EWeaponIconName::Scope_Default,
        TEXT("/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_03_Scope_Default_D.T_HUD_Sniper_03_Scope_Default_D")
    );
    GSniper03WeaponIconMap.Add(EWeaponIconName::Scope_Default, Sniper03ScopeDefault);

    FWeaponIcon Sniper03Magazine = CreateWeaponIcon(
        EWeaponIconName::Magazine,
        TEXT("/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_03_Magazine_Default_D.T_HUD_Sniper_03_Magazine_Default_D")
    );
    GSniper03WeaponIconMap.Add(EWeaponIconName::Magazine, Sniper03Magazine);
}

FWeaponIcon USniper03WeaponIconSettingsLibrary::GetWeaponIconByName(EWeaponIconName IconName)
{
    InitSniper03WeaponIconMap();
    if (GSniper03WeaponIconMap.Contains(IconName))
    {
        return GSniper03WeaponIconMap[IconName];
    }
    return FWeaponIcon(); // Return default icon if not found
}
