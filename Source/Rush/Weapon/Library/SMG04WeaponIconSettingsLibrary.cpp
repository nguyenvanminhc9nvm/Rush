#include "SMG04WeaponIconSettingsLibrary.h"
#include "Engine/Engine.h"

static TMap<EWeaponIconName, FWeaponIcon> GSMG04WeaponIconMap;

static void InitSMG04WeaponIconMap()
{
    if (GSMG04WeaponIconMap.Num() > 0) return;

    // Helper function to create WeaponIcon
    auto CreateWeaponIcon = [](EWeaponIconName IconName, const FString& TexturePath) -> FWeaponIcon
    {
        FWeaponIcon Icon;
        Icon.Name = IconName;
        Icon.Texture = TSoftObjectPtr<UTexture2D>(FSoftObjectPath(TexturePath));
        return Icon;
    };

    // SMG_04 Icons
    FWeaponIcon SMG04Body = CreateWeaponIcon(
        EWeaponIconName::Body,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_04_D.T_HUD_SMG_04_D")
    );
    GSMG04WeaponIconMap.Add(EWeaponIconName::Body, SMG04Body);

    FWeaponIcon SMG04Silencer01 = CreateWeaponIcon(
        EWeaponIconName::Silencer_01,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_04_Silencer_01_D.T_HUD_SMG_04_Silencer_01_D")
    );
    GSMG04WeaponIconMap.Add(EWeaponIconName::Silencer_01, SMG04Silencer01);

    FWeaponIcon SMG04Silencer02 = CreateWeaponIcon(
        EWeaponIconName::Silencer_02,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_04_Silencer_02_D.T_HUD_SMG_04_Silencer_02_D")
    );
    GSMG04WeaponIconMap.Add(EWeaponIconName::Silencer_02, SMG04Silencer02);

    FWeaponIcon SMG04Silencer03 = CreateWeaponIcon(
        EWeaponIconName::Silencer_03,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_04_Silencer_03_D.T_HUD_SMG_04_Silencer_03_D")
    );
    GSMG04WeaponIconMap.Add(EWeaponIconName::Silencer_03, SMG04Silencer03);

    FWeaponIcon SMG04Scope01 = CreateWeaponIcon(
        EWeaponIconName::Scope_01,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_04_Scope_01_D.T_HUD_SMG_04_Scope_01_D")
    );
    GSMG04WeaponIconMap.Add(EWeaponIconName::Scope_01, SMG04Scope01);

    FWeaponIcon SMG04Scope02 = CreateWeaponIcon(
        EWeaponIconName::Scope_02,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_04_Scope_02_D.T_HUD_SMG_04_Scope_02_D")
    );
    GSMG04WeaponIconMap.Add(EWeaponIconName::Scope_02, SMG04Scope02);

    FWeaponIcon SMG04Scope03 = CreateWeaponIcon(
        EWeaponIconName::Scope_03,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_04_Scope_03_D.T_HUD_SMG_04_Scope_03_D")
    );
    GSMG04WeaponIconMap.Add(EWeaponIconName::Scope_03, SMG04Scope03);

    FWeaponIcon SMG04Scope04 = CreateWeaponIcon(
        EWeaponIconName::Scope_04,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_04_Scope_04_D.T_HUD_SMG_04_Scope_04_D")
    );
    GSMG04WeaponIconMap.Add(EWeaponIconName::Scope_04, SMG04Scope04);

    FWeaponIcon SMG04Scope05 = CreateWeaponIcon(
        EWeaponIconName::Scope_05,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_04_Scope_05_D.T_HUD_SMG_04_Scope_05_D")
    );
    GSMG04WeaponIconMap.Add(EWeaponIconName::Scope_05, SMG04Scope05);

    FWeaponIcon SMG04Scope06 = CreateWeaponIcon(
        EWeaponIconName::Scope_06,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_04_Scope_06_D.T_HUD_SMG_04_Scope_06_D")
    );
    GSMG04WeaponIconMap.Add(EWeaponIconName::Scope_06, SMG04Scope06);

    FWeaponIcon SMG04Scope07 = CreateWeaponIcon(
        EWeaponIconName::Scope_07,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_04_Scope_07_D.T_HUD_SMG_04_Scope_07_D")
    );
    GSMG04WeaponIconMap.Add(EWeaponIconName::Scope_07, SMG04Scope07);

    FWeaponIcon SMG04Scope08 = CreateWeaponIcon(
        EWeaponIconName::Scope_08,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_04_Scope_08_D.T_HUD_SMG_04_Scope_08_D")
    );
    GSMG04WeaponIconMap.Add(EWeaponIconName::Scope_08, SMG04Scope08);

    FWeaponIcon SMG04Grip01 = CreateWeaponIcon(
        EWeaponIconName::Grip_01,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_04_Grip_01_D.T_HUD_SMG_04_Grip_01_D")
    );
    GSMG04WeaponIconMap.Add(EWeaponIconName::Grip_01, SMG04Grip01);

    FWeaponIcon SMG04Bipod01 = CreateWeaponIcon(
        EWeaponIconName::Bipod_01,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_04_Bipod_01_D.T_HUD_SMG_04_Bipod_01_D")
    );
    GSMG04WeaponIconMap.Add(EWeaponIconName::Bipod_01, SMG04Bipod01);

    FWeaponIcon SMG04Bipod02 = CreateWeaponIcon(
        EWeaponIconName::Bipod_02,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_04_Bipod_02_D.T_HUD_SMG_04_Bipod_02_D")
    );
    GSMG04WeaponIconMap.Add(EWeaponIconName::Bipod_02, SMG04Bipod02);

    FWeaponIcon SMG04Flashlight = CreateWeaponIcon(
        EWeaponIconName::Flashlight,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_04_Laser_Flashlight_01_D.T_HUD_SMG_04_Laser_Flashlight_01_D")
    );
    GSMG04WeaponIconMap.Add(EWeaponIconName::Flashlight, SMG04Flashlight);

    FWeaponIcon SMG04Lasersight = CreateWeaponIcon(
        EWeaponIconName::Lasersight,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_04_Laser_Sight_01_D.T_HUD_SMG_04_Laser_Sight_01_D")
    );
    GSMG04WeaponIconMap.Add(EWeaponIconName::Lasersight, SMG04Lasersight);

    FWeaponIcon SMG04Magazine = CreateWeaponIcon(
        EWeaponIconName::Magazine,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_04_Magazine_Default_D.T_HUD_SMG_04_Magazine_Default_D")
    );
    GSMG04WeaponIconMap.Add(EWeaponIconName::Magazine, SMG04Magazine);

    FWeaponIcon SMG04ScopeDefault = CreateWeaponIcon(
        EWeaponIconName::Scope_Default,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_04_Scope_Default_D.T_HUD_SMG_04_Scope_Default_D")
    );
    GSMG04WeaponIconMap.Add(EWeaponIconName::Scope_Default, SMG04ScopeDefault);
}

FWeaponIcon USMG04WeaponIconSettingsLibrary::GetWeaponIconByName(EWeaponIconName IconName)
{
    InitSMG04WeaponIconMap();
    if (GSMG04WeaponIconMap.Contains(IconName))
    {
        return GSMG04WeaponIconMap[IconName];
    }
    return FWeaponIcon(); // Return default icon if not found
}

TArray<FWeaponIcon> USMG04WeaponIconSettingsLibrary::GetAllSMG04WeaponIcons()
{
    InitSMG04WeaponIconMap();
    TArray<FWeaponIcon> AllIcons;
    GSMG04WeaponIconMap.GenerateValueArray(AllIcons);
    return AllIcons;
}
