#include "Sniper02WeaponIconSettingsLibrary.h"
#include "Engine/Engine.h"

static TMap<EWeaponIconName, FWeaponIcon> GSniper02WeaponIconMap;

static void InitSniper02WeaponIconMap()
{
    if (GSniper02WeaponIconMap.Num() > 0) return;

    // Helper function to create WeaponIcon
    auto CreateWeaponIcon = [](EWeaponIconName IconName, const FString& TexturePath) -> FWeaponIcon
    {
        FWeaponIcon Icon;
        Icon.Name = IconName;
        Icon.Texture = TSoftObjectPtr<UTexture2D>(FSoftObjectPath(TexturePath));
        return Icon;
    };

    // Sniper_02 Icons
    FWeaponIcon Sniper02Body = CreateWeaponIcon(
        EWeaponIconName::Body,
        TEXT("/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_02_D.T_HUD_Sniper_02_D")
    );
    GSniper02WeaponIconMap.Add(EWeaponIconName::Body, Sniper02Body);

    FWeaponIcon Sniper02Silencer01 = CreateWeaponIcon(
        EWeaponIconName::Silencer_01,
        TEXT("/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_02_Silencer_01_D.T_HUD_Sniper_02_Silencer_01_D")
    );
    GSniper02WeaponIconMap.Add(EWeaponIconName::Silencer_01, Sniper02Silencer01);

    FWeaponIcon Sniper02Silencer02 = CreateWeaponIcon(
        EWeaponIconName::Silencer_02,
        TEXT("/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_02_Silencer_02_D.T_HUD_Sniper_02_Silencer_02_D")
    );
    GSniper02WeaponIconMap.Add(EWeaponIconName::Silencer_02, Sniper02Silencer02);

    FWeaponIcon Sniper02Silencer03 = CreateWeaponIcon(
        EWeaponIconName::Silencer_03,
        TEXT("/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_02_Silencer_03_D.T_HUD_Sniper_02_Silencer_03_D")
    );
    GSniper02WeaponIconMap.Add(EWeaponIconName::Silencer_03, Sniper02Silencer03);

    FWeaponIcon Sniper02Scope01 = CreateWeaponIcon(
        EWeaponIconName::Scope_01,
        TEXT("/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_02_Scope_01_D.T_HUD_Sniper_02_Scope_01_D")
    );
    GSniper02WeaponIconMap.Add(EWeaponIconName::Scope_01, Sniper02Scope01);

    FWeaponIcon Sniper02Scope02 = CreateWeaponIcon(
        EWeaponIconName::Scope_02,
        TEXT("/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_02_Scope_02_D.T_HUD_Sniper_02_Scope_02_D")
    );
    GSniper02WeaponIconMap.Add(EWeaponIconName::Scope_02, Sniper02Scope02);

    FWeaponIcon Sniper02Scope03 = CreateWeaponIcon(
        EWeaponIconName::Scope_03,
        TEXT("/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_02_Scope_03_D.T_HUD_Sniper_02_Scope_03_D")
    );
    GSniper02WeaponIconMap.Add(EWeaponIconName::Scope_03, Sniper02Scope03);

    FWeaponIcon Sniper02Scope04 = CreateWeaponIcon(
        EWeaponIconName::Scope_04,
        TEXT("/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_02_Scope_04_D.T_HUD_Sniper_02_Scope_04_D")
    );
    GSniper02WeaponIconMap.Add(EWeaponIconName::Scope_04, Sniper02Scope04);

    FWeaponIcon Sniper02Scope05 = CreateWeaponIcon(
        EWeaponIconName::Scope_05,
        TEXT("/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_02_Scope_05_D.T_HUD_Sniper_02_Scope_05_D")
    );
    GSniper02WeaponIconMap.Add(EWeaponIconName::Scope_05, Sniper02Scope05);

    FWeaponIcon Sniper02Scope06 = CreateWeaponIcon(
        EWeaponIconName::Scope_06,
        TEXT("/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_02_Scope_06_D.T_HUD_Sniper_02_Scope_06_D")
    );
    GSniper02WeaponIconMap.Add(EWeaponIconName::Scope_06, Sniper02Scope06);

    FWeaponIcon Sniper02Scope07 = CreateWeaponIcon(
        EWeaponIconName::Scope_07,
        TEXT("/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_02_Scope_07_D.T_HUD_Sniper_02_Scope_07_D")
    );
    GSniper02WeaponIconMap.Add(EWeaponIconName::Scope_07, Sniper02Scope07);

    FWeaponIcon Sniper02Scope08 = CreateWeaponIcon(
        EWeaponIconName::Scope_08,
        TEXT("/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_02_Scope_08_D.T_HUD_Sniper_02_Scope_08_D")
    );
    GSniper02WeaponIconMap.Add(EWeaponIconName::Scope_08, Sniper02Scope08);

    FWeaponIcon Sniper02Grip01 = CreateWeaponIcon(
        EWeaponIconName::Grip_01,
        TEXT("/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_02_Grip_01_D.T_HUD_Sniper_02_Grip_01_D")
    );
    GSniper02WeaponIconMap.Add(EWeaponIconName::Grip_01, Sniper02Grip01);

    FWeaponIcon Sniper02Bipod01 = CreateWeaponIcon(
        EWeaponIconName::Bipod_01,
        TEXT("/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_02_Bipod_01_D.T_HUD_Sniper_02_Bipod_01_D")
    );
    GSniper02WeaponIconMap.Add(EWeaponIconName::Bipod_01, Sniper02Bipod01);

    FWeaponIcon Sniper02Bipod02 = CreateWeaponIcon(
        EWeaponIconName::Bipod_02,
        TEXT("/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_02_Bipod_02_D.T_HUD_Sniper_02_Bipod_02_D")
    );
    GSniper02WeaponIconMap.Add(EWeaponIconName::Bipod_02, Sniper02Bipod02);

    FWeaponIcon Sniper02Flashlight = CreateWeaponIcon(
        EWeaponIconName::Flashlight,
        TEXT("/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_02_Laser_Flashlight_01_D.T_HUD_Sniper_02_Laser_Flashlight_01_D")
    );
    GSniper02WeaponIconMap.Add(EWeaponIconName::Flashlight, Sniper02Flashlight);

    FWeaponIcon Sniper02Lasersight = CreateWeaponIcon(
        EWeaponIconName::Lasersight,
        TEXT("/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_02_Laser_Sight_01_D.T_HUD_Sniper_02_Laser_Sight_01_D")
    );
    GSniper02WeaponIconMap.Add(EWeaponIconName::Lasersight, Sniper02Lasersight);

    FWeaponIcon Sniper02ScopeDefault = CreateWeaponIcon(
        EWeaponIconName::Scope_Default,
        TEXT("/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_02_Scope_Default_D.T_HUD_Sniper_02_Scope_Default_D")
    );
    GSniper02WeaponIconMap.Add(EWeaponIconName::Scope_Default, Sniper02ScopeDefault);

    FWeaponIcon Sniper02Magazine = CreateWeaponIcon(
        EWeaponIconName::Magazine,
        TEXT("/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_02_Magazine_Default_D.T_HUD_Sniper_02_Magazine_Default_D")
    );
    GSniper02WeaponIconMap.Add(EWeaponIconName::Magazine, Sniper02Magazine);
}

FWeaponIcon USniper02WeaponIconSettingsLibrary::GetWeaponIconByName(EWeaponIconName IconName)
{
    InitSniper02WeaponIconMap();
    if (GSniper02WeaponIconMap.Contains(IconName))
    {
        return GSniper02WeaponIconMap[IconName];
    }
    return FWeaponIcon(); // Return default icon if not found
}

TArray<FWeaponIcon> USniper02WeaponIconSettingsLibrary::GetAllSniper02WeaponIcons()
{
    InitSniper02WeaponIconMap();
    TArray<FWeaponIcon> AllIcons;
    GSniper02WeaponIconMap.GenerateValueArray(AllIcons);
    return AllIcons;
}
