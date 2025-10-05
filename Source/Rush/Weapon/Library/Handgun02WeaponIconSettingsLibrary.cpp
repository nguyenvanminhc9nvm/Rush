#include "Handgun02WeaponIconSettingsLibrary.h"
#include "Engine/Engine.h"

static TMap<EWeaponIconName, FWeaponIcon> GHandgun02WeaponIconMap;

static void InitHandgun02WeaponIconMap()
{
    if (GHandgun02WeaponIconMap.Num() > 0) return;

    // Helper function to create WeaponIcon
    auto CreateWeaponIcon = [](EWeaponIconName IconName, const FString& TexturePath) -> FWeaponIcon
    {
        FWeaponIcon Icon;
        Icon.Name = IconName;
        Icon.Texture = TSoftObjectPtr<UTexture2D>(FSoftObjectPath(TexturePath));
        return Icon;
    };

    // Handgun_02 Icons
    FWeaponIcon Handgun02Body = CreateWeaponIcon(
        EWeaponIconName::Body,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_02_D.T_HUD_Handgun_02_D")
    );
    GHandgun02WeaponIconMap.Add(EWeaponIconName::Body, Handgun02Body);

    FWeaponIcon Handgun02Silencer01 = CreateWeaponIcon(
        EWeaponIconName::Silencer_01,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_02_Silencer_01_D.T_HUD_Handgun_02_Silencer_01_D")
    );
    GHandgun02WeaponIconMap.Add(EWeaponIconName::Silencer_01, Handgun02Silencer01);

    FWeaponIcon Handgun02Silencer02 = CreateWeaponIcon(
        EWeaponIconName::Silencer_02,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_02_Silencer_02_D.T_HUD_Handgun_02_Silencer_02_D")
    );
    GHandgun02WeaponIconMap.Add(EWeaponIconName::Silencer_02, Handgun02Silencer02);

    FWeaponIcon Handgun02Silencer03 = CreateWeaponIcon(
        EWeaponIconName::Silencer_03,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_02_Silencer_03_D.T_HUD_Handgun_02_Silencer_03_D")
    );
    GHandgun02WeaponIconMap.Add(EWeaponIconName::Silencer_03, Handgun02Silencer03);

    FWeaponIcon Handgun02Scope01 = CreateWeaponIcon(
        EWeaponIconName::Scope_01,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_02_Scope_01_D.T_HUD_Handgun_02_Scope_01_D")
    );
    GHandgun02WeaponIconMap.Add(EWeaponIconName::Scope_01, Handgun02Scope01);

    FWeaponIcon Handgun02Scope02 = CreateWeaponIcon(
        EWeaponIconName::Scope_02,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_02_Scope_02_D.T_HUD_Handgun_02_Scope_02_D")
    );
    GHandgun02WeaponIconMap.Add(EWeaponIconName::Scope_02, Handgun02Scope02);

    FWeaponIcon Handgun02Scope03 = CreateWeaponIcon(
        EWeaponIconName::Scope_03,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_02_Scope_03_D.T_HUD_Handgun_02_Scope_03_D")
    );
    GHandgun02WeaponIconMap.Add(EWeaponIconName::Scope_03, Handgun02Scope03);

    FWeaponIcon Handgun02Scope04 = CreateWeaponIcon(
        EWeaponIconName::Scope_04,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_02_Scope_04_D.T_HUD_Handgun_02_Scope_04_D")
    );
    GHandgun02WeaponIconMap.Add(EWeaponIconName::Scope_04, Handgun02Scope04);

    FWeaponIcon Handgun02Scope05 = CreateWeaponIcon(
        EWeaponIconName::Scope_05,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_02_Scope_05_D.T_HUD_Handgun_02_Scope_05_D")
    );
    GHandgun02WeaponIconMap.Add(EWeaponIconName::Scope_05, Handgun02Scope05);

    FWeaponIcon Handgun02Scope06 = CreateWeaponIcon(
        EWeaponIconName::Scope_06,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_02_Scope_06_D.T_HUD_Handgun_02_Scope_06_D")
    );
    GHandgun02WeaponIconMap.Add(EWeaponIconName::Scope_06, Handgun02Scope06);

    FWeaponIcon Handgun02Scope07 = CreateWeaponIcon(
        EWeaponIconName::Scope_07,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_02_Scope_07_D.T_HUD_Handgun_02_Scope_07_D")
    );
    GHandgun02WeaponIconMap.Add(EWeaponIconName::Scope_07, Handgun02Scope07);

    FWeaponIcon Handgun02Scope08 = CreateWeaponIcon(
        EWeaponIconName::Scope_08,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_02_Scope_08_D.T_HUD_Handgun_02_Scope_08_D")
    );
    GHandgun02WeaponIconMap.Add(EWeaponIconName::Scope_08, Handgun02Scope08);

    FWeaponIcon Handgun02Grip01 = CreateWeaponIcon(
        EWeaponIconName::Grip_01,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_02_Grip_01_D.T_HUD_Handgun_02_Grip_01_D")
    );
    GHandgun02WeaponIconMap.Add(EWeaponIconName::Grip_01, Handgun02Grip01);

    FWeaponIcon Handgun02Bipod01 = CreateWeaponIcon(
        EWeaponIconName::Bipod_01,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_02_Bipod_01_D.T_HUD_Handgun_02_Bipod_01_D")
    );
    GHandgun02WeaponIconMap.Add(EWeaponIconName::Bipod_01, Handgun02Bipod01);

    FWeaponIcon Handgun02Bipod02 = CreateWeaponIcon(
        EWeaponIconName::Bipod_02,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_02_Bipod_02_D.T_HUD_Handgun_02_Bipod_02_D")
    );
    GHandgun02WeaponIconMap.Add(EWeaponIconName::Bipod_02, Handgun02Bipod02);

    FWeaponIcon Handgun02Flashlight = CreateWeaponIcon(
        EWeaponIconName::Flashlight,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_02_Laser_Flashlight_01_D.T_HUD_Handgun_02_Laser_Flashlight_01_D")
    );
    GHandgun02WeaponIconMap.Add(EWeaponIconName::Flashlight, Handgun02Flashlight);

    FWeaponIcon Handgun02Lasersight = CreateWeaponIcon(
        EWeaponIconName::Lasersight,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_02_Laser_Sight_01_D.T_HUD_Handgun_02_Laser_Sight_01_D")
    );
    GHandgun02WeaponIconMap.Add(EWeaponIconName::Lasersight, Handgun02Lasersight);

    FWeaponIcon Handgun02Magazine = CreateWeaponIcon(
        EWeaponIconName::Magazine,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_02_Magazine_Default_D.T_HUD_Handgun_02_Magazine_Default_D")
    );
    GHandgun02WeaponIconMap.Add(EWeaponIconName::Magazine, Handgun02Magazine);

    FWeaponIcon Handgun02ScopeDefault = CreateWeaponIcon(
        EWeaponIconName::Scope_Default,
        TEXT("/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_02_Scope_Default_D.T_HUD_Handgun_02_Scope_Default_D")
    );
    GHandgun02WeaponIconMap.Add(EWeaponIconName::Scope_Default, Handgun02ScopeDefault);
}

FWeaponIcon UHandgun02WeaponIconSettingsLibrary::GetWeaponIconByName(EWeaponIconName IconName)
{
    InitHandgun02WeaponIconMap();
    if (GHandgun02WeaponIconMap.Contains(IconName))
    {
        return GHandgun02WeaponIconMap[IconName];
    }
    return FWeaponIcon(); // Return default icon if not found
}

TArray<FWeaponIcon> UHandgun02WeaponIconSettingsLibrary::GetAllHandgun02WeaponIcons()
{
    InitHandgun02WeaponIconMap();
    TArray<FWeaponIcon> AllIcons;
    GHandgun02WeaponIconMap.GenerateValueArray(AllIcons);
    return AllIcons;
}
