#include "GL01WeaponIconSettingsLibrary.h"
#include "Engine/Engine.h"

static TMap<EWeaponIconName, FWeaponIcon> GGL01WeaponIconMap;

static void InitGL01WeaponIconMap()
{
    if (GGL01WeaponIconMap.Num() > 0) return;

    // Helper function to create WeaponIcon
    auto CreateWeaponIcon = [](EWeaponIconName IconName, const FString& TexturePath) -> FWeaponIcon
    {
        FWeaponIcon Icon;
        Icon.Name = IconName;
        Icon.Texture = TSoftObjectPtr<UTexture2D>(FSoftObjectPath(TexturePath));
        return Icon;
    };

    // GL_01 Icons
    FWeaponIcon GL01Body = CreateWeaponIcon(
        EWeaponIconName::Body,
        TEXT("/Game/Assets/Icons/Weapons/Launchers/T_HUD_GL_01_D.T_HUD_GL_01_D")
    );
    GGL01WeaponIconMap.Add(EWeaponIconName::Body, GL01Body);

    FWeaponIcon GL01Silencer01 = CreateWeaponIcon(
        EWeaponIconName::Silencer_01,
        TEXT("/Game/Assets/Icons/Weapons/Launchers/T_HUD_GL_01_Silencer_01_D.T_HUD_GL_01_Silencer_01_D")
    );
    GGL01WeaponIconMap.Add(EWeaponIconName::Silencer_01, GL01Silencer01);

    FWeaponIcon GL01Silencer02 = CreateWeaponIcon(
        EWeaponIconName::Silencer_02,
        TEXT("/Game/Assets/Icons/Weapons/Launchers/T_HUD_GL_01_Silencer_02_D.T_HUD_GL_01_Silencer_02_D")
    );
    GGL01WeaponIconMap.Add(EWeaponIconName::Silencer_02, GL01Silencer02);

    FWeaponIcon GL01Silencer03 = CreateWeaponIcon(
        EWeaponIconName::Silencer_03,
        TEXT("/Game/Assets/Icons/Weapons/Launchers/T_HUD_GL_01_Silencer_03_D.T_HUD_GL_01_Silencer_03_D")
    );
    GGL01WeaponIconMap.Add(EWeaponIconName::Silencer_03, GL01Silencer03);

    FWeaponIcon GL01Scope01 = CreateWeaponIcon(
        EWeaponIconName::Scope_01,
        TEXT("/Game/Assets/Icons/Weapons/Launchers/T_HUD_GL_01_Scope_01_D.T_HUD_GL_01_Scope_01_D")
    );
    GGL01WeaponIconMap.Add(EWeaponIconName::Scope_01, GL01Scope01);

    FWeaponIcon GL01Scope02 = CreateWeaponIcon(
        EWeaponIconName::Scope_02,
        TEXT("/Game/Assets/Icons/Weapons/Launchers/T_HUD_GL_01_Scope_02_D.T_HUD_GL_01_Scope_02_D")
    );
    GGL01WeaponIconMap.Add(EWeaponIconName::Scope_02, GL01Scope02);

    FWeaponIcon GL01Scope03 = CreateWeaponIcon(
        EWeaponIconName::Scope_03,
        TEXT("/Game/Assets/Icons/Weapons/Launchers/T_HUD_GL_01_Scope_03_D.T_HUD_GL_01_Scope_03_D")
    );
    GGL01WeaponIconMap.Add(EWeaponIconName::Scope_03, GL01Scope03);

    FWeaponIcon GL01Scope04 = CreateWeaponIcon(
        EWeaponIconName::Scope_04,
        TEXT("/Game/Assets/Icons/Weapons/Launchers/T_HUD_GL_01_Scope_04_D.T_HUD_GL_01_Scope_04_D")
    );
    GGL01WeaponIconMap.Add(EWeaponIconName::Scope_04, GL01Scope04);

    FWeaponIcon GL01Scope05 = CreateWeaponIcon(
        EWeaponIconName::Scope_05,
        TEXT("/Game/Assets/Icons/Weapons/Launchers/T_HUD_GL_01_Scope_05_D.T_HUD_GL_01_Scope_05_D")
    );
    GGL01WeaponIconMap.Add(EWeaponIconName::Scope_05, GL01Scope05);

    FWeaponIcon GL01Scope06 = CreateWeaponIcon(
        EWeaponIconName::Scope_06,
        TEXT("/Game/Assets/Icons/Weapons/Launchers/T_HUD_GL_01_Scope_06_D.T_HUD_GL_01_Scope_06_D")
    );
    GGL01WeaponIconMap.Add(EWeaponIconName::Scope_06, GL01Scope06);

    FWeaponIcon GL01Scope07 = CreateWeaponIcon(
        EWeaponIconName::Scope_07,
        TEXT("/Game/Assets/Icons/Weapons/Launchers/T_HUD_GL_01_Scope_07_D.T_HUD_GL_01_Scope_07_D")
    );
    GGL01WeaponIconMap.Add(EWeaponIconName::Scope_07, GL01Scope07);

    FWeaponIcon GL01Scope08 = CreateWeaponIcon(
        EWeaponIconName::Scope_08,
        TEXT("/Game/Assets/Icons/Weapons/Launchers/T_HUD_GL_01_Scope_08_D.T_HUD_GL_01_Scope_08_D")
    );
    GGL01WeaponIconMap.Add(EWeaponIconName::Scope_08, GL01Scope08);

    FWeaponIcon GL01ScopeLauncherGrenade01 = CreateWeaponIcon(
        EWeaponIconName::Scope_Launcher_Grenade_01,
        TEXT("/Game/Assets/Icons/Weapons/Launchers/T_HUD_GL_01_Iron_Sights_F_Default_D.T_HUD_GL_01_Iron_Sights_F_Default_D")
    );
    GGL01WeaponIconMap.Add(EWeaponIconName::Scope_Launcher_Grenade_01, GL01ScopeLauncherGrenade01);

    FWeaponIcon GL01Grip01 = CreateWeaponIcon(
        EWeaponIconName::Grip_01,
        TEXT("/Game/Assets/Icons/Weapons/Launchers/T_HUD_GL_01_Grip_01_D.T_HUD_GL_01_Grip_01_D")
    );
    GGL01WeaponIconMap.Add(EWeaponIconName::Grip_01, GL01Grip01);

    FWeaponIcon GL01Bipod01 = CreateWeaponIcon(
        EWeaponIconName::Bipod_01,
        TEXT("/Game/Assets/Icons/Weapons/Launchers/T_HUD_GL_01_Bipod_01_D.T_HUD_GL_01_Bipod_01_D")
    );
    GGL01WeaponIconMap.Add(EWeaponIconName::Bipod_01, GL01Bipod01);

    FWeaponIcon GL01Bipod02 = CreateWeaponIcon(
        EWeaponIconName::Bipod_02,
        TEXT("/Game/Assets/Icons/Weapons/Launchers/T_HUD_GL_01_Bipod_02_D.T_HUD_GL_01_Bipod_02_D")
    );
    GGL01WeaponIconMap.Add(EWeaponIconName::Bipod_02, GL01Bipod02);

    FWeaponIcon GL01Flashlight = CreateWeaponIcon(
        EWeaponIconName::Flashlight,
        TEXT("/Game/Assets/Icons/Weapons/Launchers/T_HUD_GL_01_Laser_Flashlight_01_D.T_HUD_GL_01_Laser_Flashlight_01_D")
    );
    GGL01WeaponIconMap.Add(EWeaponIconName::Flashlight, GL01Flashlight);

    FWeaponIcon GL01Lasersight = CreateWeaponIcon(
        EWeaponIconName::Lasersight,
        TEXT("/Game/Assets/Icons/Weapons/Launchers/T_HUD_GL_01_Laser_Sight_01_D.T_HUD_GL_01_Laser_Sight_01_D")
    );
    GGL01WeaponIconMap.Add(EWeaponIconName::Lasersight, GL01Lasersight);

    FWeaponIcon GL01ScopeDefault = CreateWeaponIcon(
        EWeaponIconName::Scope_Default,
        TEXT("/Game/Assets/Icons/Weapons/Launchers/T_HUD_GL_01_Iron_Sights_B_Default_D.T_HUD_GL_01_Iron_Sights_B_Default_D")
    );
    GGL01WeaponIconMap.Add(EWeaponIconName::Scope_Default, GL01ScopeDefault);

    FWeaponIcon GL01Magazine = CreateWeaponIcon(
        EWeaponIconName::Magazine,
        TEXT("/Game/Assets/Icons/Weapons/Launchers/T_HUD_GL_01_D.T_HUD_GL_01_D")
    );
    GGL01WeaponIconMap.Add(EWeaponIconName::Magazine, GL01Magazine);
}

FWeaponIcon UGL01WeaponIconSettingsLibrary::GetWeaponIconByName(EWeaponIconName IconName)
{
    InitGL01WeaponIconMap();
    if (GGL01WeaponIconMap.Contains(IconName))
    {
        return GGL01WeaponIconMap[IconName];
    }
    return FWeaponIcon(); // Return default icon if not found
}

TArray<FWeaponIcon> UGL01WeaponIconSettingsLibrary::GetAllGL01WeaponIcons()
{
    InitGL01WeaponIconMap();
    TArray<FWeaponIcon> AllIcons;
    GGL01WeaponIconMap.GenerateValueArray(AllIcons);
    return AllIcons;
}
