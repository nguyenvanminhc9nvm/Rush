#include "SMG02WeaponIconSettingsLibrary.h"
#include "Engine/Engine.h"

static TMap<EWeaponIconName, FWeaponIcon> GSMG02WeaponIconMap;

static void InitSMG02WeaponIconMap()
{
    if (GSMG02WeaponIconMap.Num() > 0) return;

    // Helper function to create WeaponIcon
    auto CreateWeaponIcon = [](EWeaponIconName IconName, const FString& TexturePath) -> FWeaponIcon
    {
        FWeaponIcon Icon;
        Icon.Name = IconName;
        Icon.Texture = TSoftObjectPtr<UTexture2D>(FSoftObjectPath(TexturePath));
        return Icon;
    };

    // SMG_02 Icons
    FWeaponIcon SMG02Body = CreateWeaponIcon(
        EWeaponIconName::Body,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_02_D.T_HUD_SMG_02_D")
    );
    GSMG02WeaponIconMap.Add(EWeaponIconName::Body, SMG02Body);

    FWeaponIcon SMG02Silencer01 = CreateWeaponIcon(
        EWeaponIconName::Silencer_01,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_02_Silencer_01_D.T_HUD_SMG_02_Silencer_01_D")
    );
    GSMG02WeaponIconMap.Add(EWeaponIconName::Silencer_01, SMG02Silencer01);

    FWeaponIcon SMG02Silencer02 = CreateWeaponIcon(
        EWeaponIconName::Silencer_02,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_02_Silencer_02_D.T_HUD_SMG_02_Silencer_02_D")
    );
    GSMG02WeaponIconMap.Add(EWeaponIconName::Silencer_02, SMG02Silencer02);

    FWeaponIcon SMG02Silencer03 = CreateWeaponIcon(
        EWeaponIconName::Silencer_03,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_02_Silencer_03_D.T_HUD_SMG_02_Silencer_03_D")
    );
    GSMG02WeaponIconMap.Add(EWeaponIconName::Silencer_03, SMG02Silencer03);

    FWeaponIcon SMG02Scope01 = CreateWeaponIcon(
        EWeaponIconName::Scope_01,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_02_Scope_01_D.T_HUD_SMG_02_Scope_01_D")
    );
    GSMG02WeaponIconMap.Add(EWeaponIconName::Scope_01, SMG02Scope01);

    FWeaponIcon SMG02Scope02 = CreateWeaponIcon(
        EWeaponIconName::Scope_02,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_02_Scope_02_D.T_HUD_SMG_02_Scope_02_D")
    );
    GSMG02WeaponIconMap.Add(EWeaponIconName::Scope_02, SMG02Scope02);

    FWeaponIcon SMG02Scope03 = CreateWeaponIcon(
        EWeaponIconName::Scope_03,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_02_Scope_03_D.T_HUD_SMG_02_Scope_03_D")
    );
    GSMG02WeaponIconMap.Add(EWeaponIconName::Scope_03, SMG02Scope03);

    FWeaponIcon SMG02Scope04 = CreateWeaponIcon(
        EWeaponIconName::Scope_04,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_02_Scope_04_D.T_HUD_SMG_02_Scope_04_D")
    );
    GSMG02WeaponIconMap.Add(EWeaponIconName::Scope_04, SMG02Scope04);

    FWeaponIcon SMG02Scope05 = CreateWeaponIcon(
        EWeaponIconName::Scope_05,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_02_Scope_05_D.T_HUD_SMG_02_Scope_05_D")
    );
    GSMG02WeaponIconMap.Add(EWeaponIconName::Scope_05, SMG02Scope05);

    FWeaponIcon SMG02Scope06 = CreateWeaponIcon(
        EWeaponIconName::Scope_06,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_02_Scope_06_D.T_HUD_SMG_02_Scope_06_D")
    );
    GSMG02WeaponIconMap.Add(EWeaponIconName::Scope_06, SMG02Scope06);

    FWeaponIcon SMG02Scope07 = CreateWeaponIcon(
        EWeaponIconName::Scope_07,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_02_Scope_07_D.T_HUD_SMG_02_Scope_07_D")
    );
    GSMG02WeaponIconMap.Add(EWeaponIconName::Scope_07, SMG02Scope07);

    FWeaponIcon SMG02Scope08 = CreateWeaponIcon(
        EWeaponIconName::Scope_08,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_02_Scope_08_D.T_HUD_SMG_02_Scope_08_D")
    );
    GSMG02WeaponIconMap.Add(EWeaponIconName::Scope_08, SMG02Scope08);

    FWeaponIcon SMG02Grip01 = CreateWeaponIcon(
        EWeaponIconName::Grip_01,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_02_Grip_01_D.T_HUD_SMG_02_Grip_01_D")
    );
    GSMG02WeaponIconMap.Add(EWeaponIconName::Grip_01, SMG02Grip01);

    FWeaponIcon SMG02Bipod01 = CreateWeaponIcon(
        EWeaponIconName::Bipod_01,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_02_Bipod_01_D.T_HUD_SMG_02_Bipod_01_D")
    );
    GSMG02WeaponIconMap.Add(EWeaponIconName::Bipod_01, SMG02Bipod01);

    FWeaponIcon SMG02Bipod02 = CreateWeaponIcon(
        EWeaponIconName::Bipod_02,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_02_Bipod_02_D.T_HUD_SMG_02_Bipod_02_D")
    );
    GSMG02WeaponIconMap.Add(EWeaponIconName::Bipod_02, SMG02Bipod02);

    FWeaponIcon SMG02Flashlight = CreateWeaponIcon(
        EWeaponIconName::Flashlight,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_02_Laser_Flashlight_01_D.T_HUD_SMG_02_Laser_Flashlight_01_D")
    );
    GSMG02WeaponIconMap.Add(EWeaponIconName::Flashlight, SMG02Flashlight);

    FWeaponIcon SMG02Lasersight = CreateWeaponIcon(
        EWeaponIconName::Lasersight,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_02_Laser_Sight_01_D.T_HUD_SMG_02_Laser_Sight_01_D")
    );
    GSMG02WeaponIconMap.Add(EWeaponIconName::Lasersight, SMG02Lasersight);

    FWeaponIcon SMG02Magazine = CreateWeaponIcon(
        EWeaponIconName::Magazine,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_02_Magazine_Default_D.T_HUD_SMG_02_Magazine_Default_D")
    );
    GSMG02WeaponIconMap.Add(EWeaponIconName::Magazine, SMG02Magazine);

    FWeaponIcon SMG02ScopeDefault = CreateWeaponIcon(
        EWeaponIconName::Scope_Default,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_02_Scope_Default_D.T_HUD_SMG_02_Scope_Default_D")
    );
    GSMG02WeaponIconMap.Add(EWeaponIconName::Scope_Default, SMG02ScopeDefault);
}

FWeaponIcon USMG02WeaponIconSettingsLibrary::GetWeaponIconByName(EWeaponIconName IconName)
{
    InitSMG02WeaponIconMap();
    if (GSMG02WeaponIconMap.Contains(IconName))
    {
        return GSMG02WeaponIconMap[IconName];
    }
    return FWeaponIcon(); // Return default icon if not found
}

TArray<FWeaponIcon> USMG02WeaponIconSettingsLibrary::GetAllSMG02WeaponIcons()
{
    InitSMG02WeaponIconMap();
    TArray<FWeaponIcon> AllIcons;
    GSMG02WeaponIconMap.GenerateValueArray(AllIcons);
    return AllIcons;
}
