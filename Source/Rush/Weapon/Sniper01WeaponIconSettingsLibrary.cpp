#include "Sniper01WeaponIconSettingsLibrary.h"
#include "Engine/Engine.h"

static TMap<EWeaponIconName, FWeaponIcon> GSniper01WeaponIconMap;

static void InitSniper01WeaponIconMap()
{
    if (GSniper01WeaponIconMap.Num() > 0) return;

    // Helper function to create WeaponIcon
    auto CreateWeaponIcon = [](EWeaponIconName IconName, const FString& TexturePath) -> FWeaponIcon
    {
        FWeaponIcon Icon;
        Icon.Name = IconName;
        Icon.Texture = TSoftObjectPtr<UTexture2D>(FSoftObjectPath(TexturePath));
        return Icon;
    };

    // Sniper_01 Icons
    FWeaponIcon Sniper01Body = CreateWeaponIcon(
        EWeaponIconName::Body,
        TEXT("/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_01_D.T_HUD_Sniper_01_D")
    );
    GSniper01WeaponIconMap.Add(EWeaponIconName::Body, Sniper01Body);

    FWeaponIcon Sniper01Silencer01 = CreateWeaponIcon(
        EWeaponIconName::Silencer_01,
        TEXT("/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_01_Silencer_01_D.T_HUD_Sniper_01_Silencer_01_D")
    );
    GSniper01WeaponIconMap.Add(EWeaponIconName::Silencer_01, Sniper01Silencer01);

    FWeaponIcon Sniper01Silencer02 = CreateWeaponIcon(
        EWeaponIconName::Silencer_02,
        TEXT("/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_01_Silencer_02_D.T_HUD_Sniper_01_Silencer_02_D")
    );
    GSniper01WeaponIconMap.Add(EWeaponIconName::Silencer_02, Sniper01Silencer02);

    FWeaponIcon Sniper01Silencer03 = CreateWeaponIcon(
        EWeaponIconName::Silencer_03,
        TEXT("/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_01_Silencer_03_D.T_HUD_Sniper_01_Silencer_03_D")
    );
    GSniper01WeaponIconMap.Add(EWeaponIconName::Silencer_03, Sniper01Silencer03);

    FWeaponIcon Sniper01Scope01 = CreateWeaponIcon(
        EWeaponIconName::Scope_01,
        TEXT("/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_01_Scope_01_D.T_HUD_Sniper_01_Scope_01_D")
    );
    GSniper01WeaponIconMap.Add(EWeaponIconName::Scope_01, Sniper01Scope01);

    FWeaponIcon Sniper01Scope02 = CreateWeaponIcon(
        EWeaponIconName::Scope_02,
        TEXT("/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_01_Scope_02_D.T_HUD_Sniper_01_Scope_02_D")
    );
    GSniper01WeaponIconMap.Add(EWeaponIconName::Scope_02, Sniper01Scope02);

    FWeaponIcon Sniper01Scope03 = CreateWeaponIcon(
        EWeaponIconName::Scope_03,
        TEXT("/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_01_Scope_03_D.T_HUD_Sniper_01_Scope_03_D")
    );
    GSniper01WeaponIconMap.Add(EWeaponIconName::Scope_03, Sniper01Scope03);

    FWeaponIcon Sniper01Scope04 = CreateWeaponIcon(
        EWeaponIconName::Scope_04,
        TEXT("/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_01_Scope_04_D.T_HUD_Sniper_01_Scope_04_D")
    );
    GSniper01WeaponIconMap.Add(EWeaponIconName::Scope_04, Sniper01Scope04);

    FWeaponIcon Sniper01Scope05 = CreateWeaponIcon(
        EWeaponIconName::Scope_05,
        TEXT("/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_01_Scope_05_D.T_HUD_Sniper_01_Scope_05_D")
    );
    GSniper01WeaponIconMap.Add(EWeaponIconName::Scope_05, Sniper01Scope05);

    FWeaponIcon Sniper01Scope06 = CreateWeaponIcon(
        EWeaponIconName::Scope_06,
        TEXT("/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_01_Scope_06_D.T_HUD_Sniper_01_Scope_06_D")
    );
    GSniper01WeaponIconMap.Add(EWeaponIconName::Scope_06, Sniper01Scope06);

    FWeaponIcon Sniper01Scope07 = CreateWeaponIcon(
        EWeaponIconName::Scope_07,
        TEXT("/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_01_Scope_07_D.T_HUD_Sniper_01_Scope_07_D")
    );
    GSniper01WeaponIconMap.Add(EWeaponIconName::Scope_07, Sniper01Scope07);

    FWeaponIcon Sniper01Scope08 = CreateWeaponIcon(
        EWeaponIconName::Scope_08,
        TEXT("/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_01_Scope_08_D.T_HUD_Sniper_01_Scope_08_D")
    );
    GSniper01WeaponIconMap.Add(EWeaponIconName::Scope_08, Sniper01Scope08);

    FWeaponIcon Sniper01Grip01 = CreateWeaponIcon(
        EWeaponIconName::Grip_01,
        TEXT("/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_01_Grip_01_D.T_HUD_Sniper_01_Grip_01_D")
    );
    GSniper01WeaponIconMap.Add(EWeaponIconName::Grip_01, Sniper01Grip01);

    FWeaponIcon Sniper01Bipod01 = CreateWeaponIcon(
        EWeaponIconName::Bipod_01,
        TEXT("/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_01_Bipod_01_D.T_HUD_Sniper_01_Bipod_01_D")
    );
    GSniper01WeaponIconMap.Add(EWeaponIconName::Bipod_01, Sniper01Bipod01);

    FWeaponIcon Sniper01Bipod02 = CreateWeaponIcon(
        EWeaponIconName::Bipod_02,
        TEXT("/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_01_Bipod_02_D.T_HUD_Sniper_01_Bipod_02_D")
    );
    GSniper01WeaponIconMap.Add(EWeaponIconName::Bipod_02, Sniper01Bipod02);

    FWeaponIcon Sniper01Flashlight = CreateWeaponIcon(
        EWeaponIconName::Flashlight,
        TEXT("/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_01_Laser_Flashlight_01_D.T_HUD_Sniper_01_Laser_Flashlight_01_D")
    );
    GSniper01WeaponIconMap.Add(EWeaponIconName::Flashlight, Sniper01Flashlight);

    FWeaponIcon Sniper01Lasersight = CreateWeaponIcon(
        EWeaponIconName::Lasersight,
        TEXT("/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_01_Laser_Sight_01_D.T_HUD_Sniper_01_Laser_Sight_01_D")
    );
    GSniper01WeaponIconMap.Add(EWeaponIconName::Lasersight, Sniper01Lasersight);

    FWeaponIcon Sniper01ScopeDefault = CreateWeaponIcon(
        EWeaponIconName::Scope_Default,
        TEXT("/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_01_Scope_Default_D.T_HUD_Sniper_01_Scope_Default_D")
    );
    GSniper01WeaponIconMap.Add(EWeaponIconName::Scope_Default, Sniper01ScopeDefault);

    FWeaponIcon Sniper01Magazine = CreateWeaponIcon(
        EWeaponIconName::Magazine,
        TEXT("/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_01_Magazine_Default_D.T_HUD_Sniper_01_Magazine_Default_D")
    );
    GSniper01WeaponIconMap.Add(EWeaponIconName::Magazine, Sniper01Magazine);
}

FWeaponIcon USniper01WeaponIconSettingsLibrary::GetWeaponIconByName(EWeaponIconName IconName)
{
    InitSniper01WeaponIconMap();
    if (GSniper01WeaponIconMap.Contains(IconName))
    {
        return GSniper01WeaponIconMap[IconName];
    }
    return FWeaponIcon(); // Return default icon if not found
}
