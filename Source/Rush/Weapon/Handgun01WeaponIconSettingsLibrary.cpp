#include "Handgun01WeaponIconSettingsLibrary.h"
#include "Engine/Engine.h"

static TMap<EWeaponIconName, FWeaponIcon> GHandgun01WeaponIconMap;

static void InitHandgun01WeaponIconMap()
{
    if (GHandgun01WeaponIconMap.Num() > 0) return;

    // Helper function to create WeaponIcon
    auto CreateWeaponIcon = [](EWeaponIconName IconName, const FString& TexturePath) -> FWeaponIcon
    {
        FWeaponIcon Icon;
        Icon.Name = IconName;
        Icon.Texture = TSoftObjectPtr<UTexture2D>(FSoftObjectPath(TexturePath));
        return Icon;
    };

    // Handgun_01 Icons
    FWeaponIcon Handgun01Body = CreateWeaponIcon(
        EWeaponIconName::Body,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_01_D.T_HUD_Handgun_01_D")
    );
    GHandgun01WeaponIconMap.Add(EWeaponIconName::Body, Handgun01Body);

    FWeaponIcon Handgun01Silencer01 = CreateWeaponIcon(
        EWeaponIconName::Silencer_01,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_01_Silencer_01_D.T_HUD_Handgun_01_Silencer_01_D")
    );
    GHandgun01WeaponIconMap.Add(EWeaponIconName::Silencer_01, Handgun01Silencer01);

    FWeaponIcon Handgun01Silencer02 = CreateWeaponIcon(
        EWeaponIconName::Silencer_02,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_01_Silencer_02_D.T_HUD_Handgun_01_Silencer_02_D")
    );
    GHandgun01WeaponIconMap.Add(EWeaponIconName::Silencer_02, Handgun01Silencer02);

    FWeaponIcon Handgun01Silencer03 = CreateWeaponIcon(
        EWeaponIconName::Silencer_03,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_01_Silencer_03_D.T_HUD_Handgun_01_Silencer_03_D")
    );
    GHandgun01WeaponIconMap.Add(EWeaponIconName::Silencer_03, Handgun01Silencer03);

    FWeaponIcon Handgun01Scope01 = CreateWeaponIcon(
        EWeaponIconName::Scope_01,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_01_Scope_01_D.T_HUD_Handgun_01_Scope_01_D")
    );
    GHandgun01WeaponIconMap.Add(EWeaponIconName::Scope_01, Handgun01Scope01);

    FWeaponIcon Handgun01Scope02 = CreateWeaponIcon(
        EWeaponIconName::Scope_02,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_01_Scope_02_D.T_HUD_Handgun_01_Scope_02_D")
    );
    GHandgun01WeaponIconMap.Add(EWeaponIconName::Scope_02, Handgun01Scope02);

    FWeaponIcon Handgun01Scope03 = CreateWeaponIcon(
        EWeaponIconName::Scope_03,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_01_Scope_03_D.T_HUD_Handgun_01_Scope_03_D")
    );
    GHandgun01WeaponIconMap.Add(EWeaponIconName::Scope_03, Handgun01Scope03);

    FWeaponIcon Handgun01Scope04 = CreateWeaponIcon(
        EWeaponIconName::Scope_04,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_01_Scope_04_D.T_HUD_Handgun_01_Scope_04_D")
    );
    GHandgun01WeaponIconMap.Add(EWeaponIconName::Scope_04, Handgun01Scope04);

    FWeaponIcon Handgun01Scope05 = CreateWeaponIcon(
        EWeaponIconName::Scope_05,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_01_Scope_05_D.T_HUD_Handgun_01_Scope_05_D")
    );
    GHandgun01WeaponIconMap.Add(EWeaponIconName::Scope_05, Handgun01Scope05);

    FWeaponIcon Handgun01Scope06 = CreateWeaponIcon(
        EWeaponIconName::Scope_06,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_01_Scope_06_D.T_HUD_Handgun_01_Scope_06_D")
    );
    GHandgun01WeaponIconMap.Add(EWeaponIconName::Scope_06, Handgun01Scope06);

    FWeaponIcon Handgun01Scope07 = CreateWeaponIcon(
        EWeaponIconName::Scope_07,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_01_Scope_07_D.T_HUD_Handgun_01_Scope_07_D")
    );
    GHandgun01WeaponIconMap.Add(EWeaponIconName::Scope_07, Handgun01Scope07);

    FWeaponIcon Handgun01Scope08 = CreateWeaponIcon(
        EWeaponIconName::Scope_08,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_01_Scope_08_D.T_HUD_Handgun_01_Scope_08_D")
    );
    GHandgun01WeaponIconMap.Add(EWeaponIconName::Scope_08, Handgun01Scope08);

    FWeaponIcon Handgun01Grip01 = CreateWeaponIcon(
        EWeaponIconName::Grip_01,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_01_Grip_01_D.T_HUD_Handgun_01_Grip_01_D")
    );
    GHandgun01WeaponIconMap.Add(EWeaponIconName::Grip_01, Handgun01Grip01);

    FWeaponIcon Handgun01Bipod01 = CreateWeaponIcon(
        EWeaponIconName::Bipod_01,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_01_Bipod_01_D.T_HUD_Handgun_01_Bipod_01_D")
    );
    GHandgun01WeaponIconMap.Add(EWeaponIconName::Bipod_01, Handgun01Bipod01);

    FWeaponIcon Handgun01Bipod02 = CreateWeaponIcon(
        EWeaponIconName::Bipod_02,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_01_Bipod_02_D.T_HUD_Handgun_01_Bipod_02_D")
    );
    GHandgun01WeaponIconMap.Add(EWeaponIconName::Bipod_02, Handgun01Bipod02);

    FWeaponIcon Handgun01Flashlight = CreateWeaponIcon(
        EWeaponIconName::Flashlight,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_01_Laser_Flashlight_01_D.T_HUD_Handgun_01_Laser_Flashlight_01_D")
    );
    GHandgun01WeaponIconMap.Add(EWeaponIconName::Flashlight, Handgun01Flashlight);

    FWeaponIcon Handgun01Lasersight = CreateWeaponIcon(
        EWeaponIconName::Lasersight,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_01_Laser_Sight_01_D.T_HUD_Handgun_01_Laser_Sight_01_D")
    );
    GHandgun01WeaponIconMap.Add(EWeaponIconName::Lasersight, Handgun01Lasersight);

    FWeaponIcon Handgun01Magazine = CreateWeaponIcon(
        EWeaponIconName::Magazine,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_01_Magazine_Default_D.T_HUD_Handgun_01_Magazine_Default_D")
    );
    GHandgun01WeaponIconMap.Add(EWeaponIconName::Magazine, Handgun01Magazine);

    FWeaponIcon Handgun01ScopeDefault = CreateWeaponIcon(
        EWeaponIconName::Scope_Default,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_01_Scope_Default_D.T_HUD_Handgun_01_Scope_Default_D")
    );
    GHandgun01WeaponIconMap.Add(EWeaponIconName::Scope_Default, Handgun01ScopeDefault);
}

FWeaponIcon UHandgun01WeaponIconSettingsLibrary::GetWeaponIconByName(EWeaponIconName IconName)
{
    InitHandgun01WeaponIconMap();
    if (GHandgun01WeaponIconMap.Contains(IconName))
    {
        return GHandgun01WeaponIconMap[IconName];
    }
    return FWeaponIcon(); // Return default icon if not found
}

TArray<FWeaponIcon> UHandgun01WeaponIconSettingsLibrary::GetAllHandgun01WeaponIcons()
{
    InitHandgun01WeaponIconMap();
    TArray<FWeaponIcon> AllIcons;
    GHandgun01WeaponIconMap.GenerateValueArray(AllIcons);
    return AllIcons;
}
