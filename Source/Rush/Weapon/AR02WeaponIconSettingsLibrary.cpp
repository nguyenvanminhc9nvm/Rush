#include "AR02WeaponIconSettingsLibrary.h"
#include "Engine/Engine.h"

static TMap<EWeaponIconName, FWeaponIcon> GAR02WeaponIconMap;

static void InitAR02WeaponIconMap()
{
    if (GAR02WeaponIconMap.Num() > 0) return;

    // Helper function to create WeaponIcon
    auto CreateWeaponIcon = [](EWeaponIconName IconName, const FString& TexturePath) -> FWeaponIcon
    {
        FWeaponIcon Icon;
        Icon.Name = IconName;
        Icon.Texture = TSoftObjectPtr<UTexture2D>(FSoftObjectPath(TexturePath));
        return Icon;
    };

    // AR_02 Icons
    FWeaponIcon AR02Body = CreateWeaponIcon(
        EWeaponIconName::Body,
        TEXT("/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_02_D.T_HUD_AR_02_D")
    );
    GAR02WeaponIconMap.Add(EWeaponIconName::Body, AR02Body);

    FWeaponIcon AR02Silencer01 = CreateWeaponIcon(
        EWeaponIconName::Silencer_01,
        TEXT("/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_02_Silencer_01_D.T_HUD_AR_02_Silencer_01_D")
    );
    GAR02WeaponIconMap.Add(EWeaponIconName::Silencer_01, AR02Silencer01);

    FWeaponIcon AR02Silencer02 = CreateWeaponIcon(
        EWeaponIconName::Silencer_02,
        TEXT("/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_02_Silencer_02_D.T_HUD_AR_02_Silencer_02_D")
    );
    GAR02WeaponIconMap.Add(EWeaponIconName::Silencer_02, AR02Silencer02);

    FWeaponIcon AR02Silencer03 = CreateWeaponIcon(
        EWeaponIconName::Silencer_03,
        TEXT("/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_02_Silencer_03_D.T_HUD_AR_02_Silencer_03_D")
    );
    GAR02WeaponIconMap.Add(EWeaponIconName::Silencer_03, AR02Silencer03);

    FWeaponIcon AR02Scope01 = CreateWeaponIcon(
        EWeaponIconName::Scope_01,
        TEXT("/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_02_Scope_01_D.T_HUD_AR_02_Scope_01_D")
    );
    GAR02WeaponIconMap.Add(EWeaponIconName::Scope_01, AR02Scope01);

    FWeaponIcon AR02Scope02 = CreateWeaponIcon(
        EWeaponIconName::Scope_02,
        TEXT("/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_02_Scope_02_D.T_HUD_AR_02_Scope_02_D")
    );
    GAR02WeaponIconMap.Add(EWeaponIconName::Scope_02, AR02Scope02);

    FWeaponIcon AR02Scope03 = CreateWeaponIcon(
        EWeaponIconName::Scope_03,
        TEXT("/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_02_Scope_03_D.T_HUD_AR_02_Scope_03_D")
    );
    GAR02WeaponIconMap.Add(EWeaponIconName::Scope_03, AR02Scope03);

    FWeaponIcon AR02Scope04 = CreateWeaponIcon(
        EWeaponIconName::Scope_04,
        TEXT("/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_02_Scope_04_D.T_HUD_AR_02_Scope_04_D")
    );
    GAR02WeaponIconMap.Add(EWeaponIconName::Scope_04, AR02Scope04);

    FWeaponIcon AR02Scope05 = CreateWeaponIcon(
        EWeaponIconName::Scope_05,
        TEXT("/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_02_Scope_05_D.T_HUD_AR_02_Scope_05_D")
    );
    GAR02WeaponIconMap.Add(EWeaponIconName::Scope_05, AR02Scope05);

    FWeaponIcon AR02Scope06 = CreateWeaponIcon(
        EWeaponIconName::Scope_06,
        TEXT("/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_02_Scope_06_D.T_HUD_AR_02_Scope_06_D")
    );
    GAR02WeaponIconMap.Add(EWeaponIconName::Scope_06, AR02Scope06);

    FWeaponIcon AR02Scope07 = CreateWeaponIcon(
        EWeaponIconName::Scope_07,
        TEXT("/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_02_Scope_07_D.T_HUD_AR_02_Scope_07_D")
    );
    GAR02WeaponIconMap.Add(EWeaponIconName::Scope_07, AR02Scope07);

    FWeaponIcon AR02Scope08 = CreateWeaponIcon(
        EWeaponIconName::Scope_08,
        TEXT("/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_02_Scope_08_D.T_HUD_AR_02_Scope_08_D")
    );
    GAR02WeaponIconMap.Add(EWeaponIconName::Scope_08, AR02Scope08);

    FWeaponIcon AR02Grip01 = CreateWeaponIcon(
        EWeaponIconName::Grip_01,
        TEXT("/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_02_Grip_01_D.T_HUD_AR_02_Grip_01_D")
    );
    GAR02WeaponIconMap.Add(EWeaponIconName::Grip_01, AR02Grip01);

    FWeaponIcon AR02Bipod01 = CreateWeaponIcon(
        EWeaponIconName::Bipod_01,
        TEXT("/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_02_Bipod_01_D.T_HUD_AR_02_Bipod_01_D")
    );
    GAR02WeaponIconMap.Add(EWeaponIconName::Bipod_01, AR02Bipod01);

    FWeaponIcon AR02Bipod02 = CreateWeaponIcon(
        EWeaponIconName::Bipod_02,
        TEXT("/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_02_Bipod_02_D.T_HUD_AR_02_Bipod_02_D")
    );
    GAR02WeaponIconMap.Add(EWeaponIconName::Bipod_02, AR02Bipod02);

    FWeaponIcon AR02Flashlight = CreateWeaponIcon(
        EWeaponIconName::Flashlight,
        TEXT("/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_02_Laser_Flashlight_01_D.T_HUD_AR_02_Laser_Flashlight_01_D")
    );
    GAR02WeaponIconMap.Add(EWeaponIconName::Flashlight, AR02Flashlight);

    FWeaponIcon AR02Lasersight = CreateWeaponIcon(
        EWeaponIconName::Lasersight,
        TEXT("/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_02_Laser_Sight_01_D.T_HUD_AR_02_Laser_Sight_01_D")
    );
    GAR02WeaponIconMap.Add(EWeaponIconName::Lasersight, AR02Lasersight);

    FWeaponIcon AR02Magazine = CreateWeaponIcon(
        EWeaponIconName::Magazine,
        TEXT("/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_02_Magazine_Default_D.T_HUD_AR_02_Magazine_Default_D")
    );
    GAR02WeaponIconMap.Add(EWeaponIconName::Magazine, AR02Magazine);

    FWeaponIcon AR02ScopeDefault = CreateWeaponIcon(
        EWeaponIconName::Scope_Default,
        TEXT("/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_02_Scope_Default_D.T_HUD_AR_02_Scope_Default_D")
    );
    GAR02WeaponIconMap.Add(EWeaponIconName::Scope_Default, AR02ScopeDefault);
}

FWeaponIcon UAR02WeaponIconSettingsLibrary::GetWeaponIconByName(EWeaponIconName IconName)
{
    InitAR02WeaponIconMap();
    if (GAR02WeaponIconMap.Contains(IconName))
    {
        return GAR02WeaponIconMap[IconName];
    }
    return FWeaponIcon(); // Return default icon if not found
}

TArray<FWeaponIcon> UAR02WeaponIconSettingsLibrary::GetAllAR02WeaponIcons()
{
    InitAR02WeaponIconMap();
    TArray<FWeaponIcon> AllIcons;
    GAR02WeaponIconMap.GenerateValueArray(AllIcons);
    return AllIcons;
}
