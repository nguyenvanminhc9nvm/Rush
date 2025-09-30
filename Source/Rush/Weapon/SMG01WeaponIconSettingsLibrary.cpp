#include "SMG01WeaponIconSettingsLibrary.h"
#include "Engine/Engine.h"

static TMap<EWeaponIconName, FWeaponIcon> GSMG01WeaponIconMap;

static void InitSMG01WeaponIconMap()
{
    if (GSMG01WeaponIconMap.Num() > 0) return;

    // Helper function to create WeaponIcon
    auto CreateWeaponIcon = [](EWeaponIconName IconName, const FString& TexturePath) -> FWeaponIcon
    {
        FWeaponIcon Icon;
        Icon.Name = IconName;
        Icon.Texture = TSoftObjectPtr<UTexture2D>(FSoftObjectPath(TexturePath));
        return Icon;
    };

    // SMG_01 Icons
    FWeaponIcon SMG01Body = CreateWeaponIcon(
        EWeaponIconName::Body,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_01_D.T_HUD_SMG_01_D")
    );
    GSMG01WeaponIconMap.Add(EWeaponIconName::Body, SMG01Body);

    FWeaponIcon SMG01Silencer01 = CreateWeaponIcon(
        EWeaponIconName::Silencer_01,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_01_Silencer_01_D.T_HUD_SMG_01_Silencer_01_D")
    );
    GSMG01WeaponIconMap.Add(EWeaponIconName::Silencer_01, SMG01Silencer01);

    FWeaponIcon SMG01Silencer02 = CreateWeaponIcon(
        EWeaponIconName::Silencer_02,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_01_Silencer_02_D.T_HUD_SMG_01_Silencer_02_D")
    );
    GSMG01WeaponIconMap.Add(EWeaponIconName::Silencer_02, SMG01Silencer02);

    FWeaponIcon SMG01Silencer03 = CreateWeaponIcon(
        EWeaponIconName::Silencer_03,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_01_Silencer_03_D.T_HUD_SMG_01_Silencer_03_D")
    );
    GSMG01WeaponIconMap.Add(EWeaponIconName::Silencer_03, SMG01Silencer03);

    FWeaponIcon SMG01Scope01 = CreateWeaponIcon(
        EWeaponIconName::Scope_01,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_01_Scope_01_D.T_HUD_SMG_01_Scope_01_D")
    );
    GSMG01WeaponIconMap.Add(EWeaponIconName::Scope_01, SMG01Scope01);

    FWeaponIcon SMG01Scope02 = CreateWeaponIcon(
        EWeaponIconName::Scope_02,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_01_Scope_02_D.T_HUD_SMG_01_Scope_02_D")
    );
    GSMG01WeaponIconMap.Add(EWeaponIconName::Scope_02, SMG01Scope02);

    FWeaponIcon SMG01Scope03 = CreateWeaponIcon(
        EWeaponIconName::Scope_03,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_01_Scope_03_D.T_HUD_SMG_01_Scope_03_D")
    );
    GSMG01WeaponIconMap.Add(EWeaponIconName::Scope_03, SMG01Scope03);

    FWeaponIcon SMG01Scope04 = CreateWeaponIcon(
        EWeaponIconName::Scope_04,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_01_Scope_04_D.T_HUD_SMG_01_Scope_04_D")
    );
    GSMG01WeaponIconMap.Add(EWeaponIconName::Scope_04, SMG01Scope04);

    FWeaponIcon SMG01Scope05 = CreateWeaponIcon(
        EWeaponIconName::Scope_05,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_01_Scope_05_D.T_HUD_SMG_01_Scope_05_D")
    );
    GSMG01WeaponIconMap.Add(EWeaponIconName::Scope_05, SMG01Scope05);

    FWeaponIcon SMG01Scope06 = CreateWeaponIcon(
        EWeaponIconName::Scope_06,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_01_Scope_06_D.T_HUD_SMG_01_Scope_06_D")
    );
    GSMG01WeaponIconMap.Add(EWeaponIconName::Scope_06, SMG01Scope06);

    FWeaponIcon SMG01Scope07 = CreateWeaponIcon(
        EWeaponIconName::Scope_07,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_01_Scope_07_D.T_HUD_SMG_01_Scope_07_D")
    );
    GSMG01WeaponIconMap.Add(EWeaponIconName::Scope_07, SMG01Scope07);

    FWeaponIcon SMG01Scope08 = CreateWeaponIcon(
        EWeaponIconName::Scope_08,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_01_Scope_08_D.T_HUD_SMG_01_Scope_08_D")
    );
    GSMG01WeaponIconMap.Add(EWeaponIconName::Scope_08, SMG01Scope08);

    FWeaponIcon SMG01Grip01 = CreateWeaponIcon(
        EWeaponIconName::Grip_01,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_01_Grip_01_D.T_HUD_SMG_01_Grip_01_D")
    );
    GSMG01WeaponIconMap.Add(EWeaponIconName::Grip_01, SMG01Grip01);

    FWeaponIcon SMG01Bipod01 = CreateWeaponIcon(
        EWeaponIconName::Bipod_01,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_01_Bipod_01_D.T_HUD_SMG_01_Bipod_01_D")
    );
    GSMG01WeaponIconMap.Add(EWeaponIconName::Bipod_01, SMG01Bipod01);

    FWeaponIcon SMG01Bipod02 = CreateWeaponIcon(
        EWeaponIconName::Bipod_02,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_01_Bipod_02_D.T_HUD_SMG_01_Bipod_02_D")
    );
    GSMG01WeaponIconMap.Add(EWeaponIconName::Bipod_02, SMG01Bipod02);

    FWeaponIcon SMG01Flashlight = CreateWeaponIcon(
        EWeaponIconName::Flashlight,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_01_Laser_Flashlight_01_D.T_HUD_SMG_01_Laser_Flashlight_01_D")
    );
    GSMG01WeaponIconMap.Add(EWeaponIconName::Flashlight, SMG01Flashlight);

    FWeaponIcon SMG01Lasersight = CreateWeaponIcon(
        EWeaponIconName::Lasersight,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_01_Laser_Sight_01_D.T_HUD_SMG_01_Laser_Sight_01_D")
    );
    GSMG01WeaponIconMap.Add(EWeaponIconName::Lasersight, SMG01Lasersight);

    FWeaponIcon SMG01Magazine = CreateWeaponIcon(
        EWeaponIconName::Magazine,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_01_Magazine_Default_D.T_HUD_SMG_01_Magazine_Default_D")
    );
    GSMG01WeaponIconMap.Add(EWeaponIconName::Magazine, SMG01Magazine);

    FWeaponIcon SMG01ScopeDefault = CreateWeaponIcon(
        EWeaponIconName::Scope_Default,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_01_Scope_Default_D.T_HUD_SMG_01_Scope_Default_D")
    );
    GSMG01WeaponIconMap.Add(EWeaponIconName::Scope_Default, SMG01ScopeDefault);
}

FWeaponIcon USMG01WeaponIconSettingsLibrary::GetWeaponIconByName(EWeaponIconName IconName)
{
    InitSMG01WeaponIconMap();
    if (GSMG01WeaponIconMap.Contains(IconName))
    {
        return GSMG01WeaponIconMap[IconName];
    }
    return FWeaponIcon(); // Return default icon if not found
}
