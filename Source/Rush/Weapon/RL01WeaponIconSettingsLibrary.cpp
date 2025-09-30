#include "RL01WeaponIconSettingsLibrary.h"
#include "Engine/Engine.h"

static TMap<EWeaponIconName, FWeaponIcon> GRL01WeaponIconMap;

static void InitRL01WeaponIconMap()
{
    if (GRL01WeaponIconMap.Num() > 0) return;

    // Helper function to create WeaponIcon
    auto CreateWeaponIcon = [](EWeaponIconName IconName, const FString& TexturePath) -> FWeaponIcon
    {
        FWeaponIcon Icon;
        Icon.Name = IconName;
        Icon.Texture = TSoftObjectPtr<UTexture2D>(FSoftObjectPath(TexturePath));
        return Icon;
    };

    // RL_01 Icons
    FWeaponIcon RL01Body = CreateWeaponIcon(
        EWeaponIconName::Body,
        TEXT("/Game/Assets/Icons/Weapons/Launchers/T_HUD_RL_01_D.T_HUD_RL_01_D")
    );
    GRL01WeaponIconMap.Add(EWeaponIconName::Body, RL01Body);

    FWeaponIcon RL01Scope01 = CreateWeaponIcon(
        EWeaponIconName::Scope_01,
        TEXT("/Game/Assets/Icons/Weapons/Launchers/T_HUD_RL_01_Scope_01_D.T_HUD_RL_01_Scope_01_D")
    );
    GRL01WeaponIconMap.Add(EWeaponIconName::Scope_01, RL01Scope01);

    FWeaponIcon RL01Scope02 = CreateWeaponIcon(
        EWeaponIconName::Scope_02,
        TEXT("/Game/Assets/Icons/Weapons/Launchers/T_HUD_RL_01_Scope_02_D.T_HUD_RL_01_Scope_02_D")
    );
    GRL01WeaponIconMap.Add(EWeaponIconName::Scope_02, RL01Scope02);

    FWeaponIcon RL01Scope03 = CreateWeaponIcon(
        EWeaponIconName::Scope_03,
        TEXT("/Game/Assets/Icons/Weapons/Launchers/T_HUD_RL_01_Scope_03_D.T_HUD_RL_01_Scope_03_D")
    );
    GRL01WeaponIconMap.Add(EWeaponIconName::Scope_03, RL01Scope03);

    FWeaponIcon RL01Scope04 = CreateWeaponIcon(
        EWeaponIconName::Scope_04,
        TEXT("/Game/Assets/Icons/Weapons/Launchers/T_HUD_RL_01_Scope_04_D.T_HUD_RL_01_Scope_04_D")
    );
    GRL01WeaponIconMap.Add(EWeaponIconName::Scope_04, RL01Scope04);

    FWeaponIcon RL01Scope05 = CreateWeaponIcon(
        EWeaponIconName::Scope_05,
        TEXT("/Game/Assets/Icons/Weapons/Launchers/T_HUD_RL_01_Scope_05_D.T_HUD_RL_01_Scope_05_D")
    );
    GRL01WeaponIconMap.Add(EWeaponIconName::Scope_05, RL01Scope05);

    FWeaponIcon RL01Scope06 = CreateWeaponIcon(
        EWeaponIconName::Scope_06,
        TEXT("/Game/Assets/Icons/Weapons/Launchers/T_HUD_RL_01_Scope_06_D.T_HUD_RL_01_Scope_06_D")
    );
    GRL01WeaponIconMap.Add(EWeaponIconName::Scope_06, RL01Scope06);

    FWeaponIcon RL01Scope07 = CreateWeaponIcon(
        EWeaponIconName::Scope_07,
        TEXT("/Game/Assets/Icons/Weapons/Launchers/T_HUD_RL_01_Scope_07_D.T_HUD_RL_01_Scope_07_D")
    );
    GRL01WeaponIconMap.Add(EWeaponIconName::Scope_07, RL01Scope07);

    FWeaponIcon RL01Scope08 = CreateWeaponIcon(
        EWeaponIconName::Scope_08,
        TEXT("/Game/Assets/Icons/Weapons/Launchers/T_HUD_RL_01_Scope_08_D.T_HUD_RL_01_Scope_08_D")
    );
    GRL01WeaponIconMap.Add(EWeaponIconName::Scope_08, RL01Scope08);

    FWeaponIcon RL01Bipod01 = CreateWeaponIcon(
        EWeaponIconName::Bipod_01,
        TEXT("/Game/Assets/Icons/Weapons/Launchers/T_HUD_RL_01_Bipod_01_D.T_HUD_RL_01_Bipod_01_D")
    );
    GRL01WeaponIconMap.Add(EWeaponIconName::Bipod_01, RL01Bipod01);

    FWeaponIcon RL01Bipod02 = CreateWeaponIcon(
        EWeaponIconName::Bipod_02,
        TEXT("/Game/Assets/Icons/Weapons/Launchers/T_HUD_RL_01_Bipod_02_D.T_HUD_RL_01_Bipod_02_D")
    );
    GRL01WeaponIconMap.Add(EWeaponIconName::Bipod_02, RL01Bipod02);

    FWeaponIcon RL01Flashlight = CreateWeaponIcon(
        EWeaponIconName::Flashlight,
        TEXT("/Game/Assets/Icons/Weapons/Launchers/T_HUD_RL_01_Laser_Flashlight_01_D.T_HUD_RL_01_Laser_Flashlight_01_D")
    );
    GRL01WeaponIconMap.Add(EWeaponIconName::Flashlight, RL01Flashlight);

    FWeaponIcon RL01Lasersight = CreateWeaponIcon(
        EWeaponIconName::Lasersight,
        TEXT("/Game/Assets/Icons/Weapons/Launchers/T_HUD_RL_01_Laser_Sight_01_D.T_HUD_RL_01_Laser_Sight_01_D")
    );
    GRL01WeaponIconMap.Add(EWeaponIconName::Lasersight, RL01Lasersight);

    FWeaponIcon RL01ScopeDefault = CreateWeaponIcon(
        EWeaponIconName::Scope_Default,
        TEXT("/Game/Assets/Icons/Weapons/Launchers/T_HUD_RL_01_Scope_Default_D.T_HUD_RL_01_Scope_Default_D")
    );
    GRL01WeaponIconMap.Add(EWeaponIconName::Scope_Default, RL01ScopeDefault);

    FWeaponIcon RL01Magazine = CreateWeaponIcon(
        EWeaponIconName::Magazine,
        TEXT("/Game/Assets/Icons/Weapons/Launchers/T_HUD_RL_01_Magazine_Default_D.T_HUD_RL_01_Magazine_Default_D")
    );
    GRL01WeaponIconMap.Add(EWeaponIconName::Magazine, RL01Magazine);
}

FWeaponIcon URL01WeaponIconSettingsLibrary::GetWeaponIconByName(EWeaponIconName IconName)
{
    InitRL01WeaponIconMap();
    if (GRL01WeaponIconMap.Contains(IconName))
    {
        return GRL01WeaponIconMap[IconName];
    }
    return FWeaponIcon(); // Return default icon if not found
}
