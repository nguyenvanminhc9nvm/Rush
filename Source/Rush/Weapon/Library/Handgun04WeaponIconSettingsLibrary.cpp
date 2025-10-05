#include "Handgun04WeaponIconSettingsLibrary.h"
#include "Engine/Engine.h"

static TMap<EWeaponIconName, FWeaponIcon> GHandgun04WeaponIconMap;

static void InitHandgun04WeaponIconMap()
{
    if (GHandgun04WeaponIconMap.Num() > 0) return;

    // Helper function to create WeaponIcon
    auto CreateWeaponIcon = [](EWeaponIconName IconName, const FString& TexturePath) -> FWeaponIcon
    {
        FWeaponIcon Icon;
        Icon.Name = IconName;
        Icon.Texture = TSoftObjectPtr<UTexture2D>(FSoftObjectPath(TexturePath));
        return Icon;
    };

    // Handgun_04 Icons
    FWeaponIcon Handgun04Body = CreateWeaponIcon(
        EWeaponIconName::Body,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_04_D.T_HUD_Handgun_04_D")
    );
    GHandgun04WeaponIconMap.Add(EWeaponIconName::Body, Handgun04Body);

    FWeaponIcon Handgun04Silencer01 = CreateWeaponIcon(
        EWeaponIconName::Silencer_01,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_04_Silencer_01_D.T_HUD_Handgun_04_Silencer_01_D")
    );
    GHandgun04WeaponIconMap.Add(EWeaponIconName::Silencer_01, Handgun04Silencer01);

    FWeaponIcon Handgun04Silencer02 = CreateWeaponIcon(
        EWeaponIconName::Silencer_02,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_04_Silencer_02_D.T_HUD_Handgun_04_Silencer_02_D")
    );
    GHandgun04WeaponIconMap.Add(EWeaponIconName::Silencer_02, Handgun04Silencer02);

    FWeaponIcon Handgun04Silencer03 = CreateWeaponIcon(
        EWeaponIconName::Silencer_03,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_04_Silencer_03_D.T_HUD_Handgun_04_Silencer_03_D")
    );
    GHandgun04WeaponIconMap.Add(EWeaponIconName::Silencer_03, Handgun04Silencer03);

    FWeaponIcon Handgun04Scope01 = CreateWeaponIcon(
        EWeaponIconName::Scope_01,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_04_Scope_01_D.T_HUD_Handgun_04_Scope_01_D")
    );
    GHandgun04WeaponIconMap.Add(EWeaponIconName::Scope_01, Handgun04Scope01);

    FWeaponIcon Handgun04Scope02 = CreateWeaponIcon(
        EWeaponIconName::Scope_02,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_04_Scope_02_D.T_HUD_Handgun_04_Scope_02_D")
    );
    GHandgun04WeaponIconMap.Add(EWeaponIconName::Scope_02, Handgun04Scope02);

    FWeaponIcon Handgun04Scope03 = CreateWeaponIcon(
        EWeaponIconName::Scope_03,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_04_Scope_03_D.T_HUD_Handgun_04_Scope_03_D")
    );
    GHandgun04WeaponIconMap.Add(EWeaponIconName::Scope_03, Handgun04Scope03);

    FWeaponIcon Handgun04Scope04 = CreateWeaponIcon(
        EWeaponIconName::Scope_04,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_04_Scope_04_D.T_HUD_Handgun_04_Scope_04_D")
    );
    GHandgun04WeaponIconMap.Add(EWeaponIconName::Scope_04, Handgun04Scope04);

    FWeaponIcon Handgun04Scope05 = CreateWeaponIcon(
        EWeaponIconName::Scope_05,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_04_Scope_05_D.T_HUD_Handgun_04_Scope_05_D")
    );
    GHandgun04WeaponIconMap.Add(EWeaponIconName::Scope_05, Handgun04Scope05);

    FWeaponIcon Handgun04Scope06 = CreateWeaponIcon(
        EWeaponIconName::Scope_06,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_04_Scope_06_D.T_HUD_Handgun_04_Scope_06_D")
    );
    GHandgun04WeaponIconMap.Add(EWeaponIconName::Scope_06, Handgun04Scope06);

    FWeaponIcon Handgun04Scope07 = CreateWeaponIcon(
        EWeaponIconName::Scope_07,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_04_Scope_07_D.T_HUD_Handgun_04_Scope_07_D")
    );
    GHandgun04WeaponIconMap.Add(EWeaponIconName::Scope_07, Handgun04Scope07);

    FWeaponIcon Handgun04Scope08 = CreateWeaponIcon(
        EWeaponIconName::Scope_08,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_04_Scope_08_D.T_HUD_Handgun_04_Scope_08_D")
    );
    GHandgun04WeaponIconMap.Add(EWeaponIconName::Scope_08, Handgun04Scope08);

    FWeaponIcon Handgun04Grip01 = CreateWeaponIcon(
        EWeaponIconName::Grip_01,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_04_Grip_01_D.T_HUD_Handgun_04_Grip_01_D")
    );
    GHandgun04WeaponIconMap.Add(EWeaponIconName::Grip_01, Handgun04Grip01);

    FWeaponIcon Handgun04Bipod01 = CreateWeaponIcon(
        EWeaponIconName::Bipod_01,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_04_Bipod_01_D.T_HUD_Handgun_04_Bipod_01_D")
    );
    GHandgun04WeaponIconMap.Add(EWeaponIconName::Bipod_01, Handgun04Bipod01);

    FWeaponIcon Handgun04Bipod02 = CreateWeaponIcon(
        EWeaponIconName::Bipod_02,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_04_Bipod_02_D.T_HUD_Handgun_04_Bipod_02_D")
    );
    GHandgun04WeaponIconMap.Add(EWeaponIconName::Bipod_02, Handgun04Bipod02);

    FWeaponIcon Handgun04Flashlight = CreateWeaponIcon(
        EWeaponIconName::Flashlight,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_04_Laser_Flashlight_01_D.T_HUD_Handgun_04_Laser_Flashlight_01_D")
    );
    GHandgun04WeaponIconMap.Add(EWeaponIconName::Flashlight, Handgun04Flashlight);

    FWeaponIcon Handgun04Lasersight = CreateWeaponIcon(
        EWeaponIconName::Lasersight,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_04_Laser_Sight_01_D.T_HUD_Handgun_04_Laser_Sight_01_D")
    );
    GHandgun04WeaponIconMap.Add(EWeaponIconName::Lasersight, Handgun04Lasersight);

    FWeaponIcon Handgun04Magazine = CreateWeaponIcon(
        EWeaponIconName::Magazine,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_04_Magazine_Default_D.T_HUD_Handgun_04_Magazine_Default_D")
    );
    GHandgun04WeaponIconMap.Add(EWeaponIconName::Magazine, Handgun04Magazine);

    FWeaponIcon Handgun04ScopeDefault = CreateWeaponIcon(
        EWeaponIconName::Scope_Default,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_04_Scope_Default_D.T_HUD_Handgun_04_Scope_Default_D")
    );
    GHandgun04WeaponIconMap.Add(EWeaponIconName::Scope_Default, Handgun04ScopeDefault);
}

FWeaponIcon UHandgun04WeaponIconSettingsLibrary::GetWeaponIconByName(EWeaponIconName IconName)
{
    InitHandgun04WeaponIconMap();
    if (GHandgun04WeaponIconMap.Contains(IconName))
    {
        return GHandgun04WeaponIconMap[IconName];
    }
    return FWeaponIcon(); // Return default icon if not found
}

TArray<FWeaponIcon> UHandgun04WeaponIconSettingsLibrary::GetAllHandgun04WeaponIcons()
{
    InitHandgun04WeaponIconMap();
    TArray<FWeaponIcon> AllIcons;
    GHandgun04WeaponIconMap.GenerateValueArray(AllIcons);
    return AllIcons;
}
