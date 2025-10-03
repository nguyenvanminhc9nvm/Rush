#include "SMG03WeaponIconSettingsLibrary.h"
#include "Engine/Engine.h"

static TMap<EWeaponIconName, FWeaponIcon> GSMG03WeaponIconMap;

static void InitSMG03WeaponIconMap()
{
    if (GSMG03WeaponIconMap.Num() > 0) return;

    // Helper function to create WeaponIcon
    auto CreateWeaponIcon = [](EWeaponIconName IconName, const FString& TexturePath) -> FWeaponIcon
    {
        FWeaponIcon Icon;
        Icon.Name = IconName;
        Icon.Texture = TSoftObjectPtr<UTexture2D>(FSoftObjectPath(TexturePath));
        return Icon;
    };

    // SMG_03 Icons
    FWeaponIcon SMG03Body = CreateWeaponIcon(
        EWeaponIconName::Body,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_03_D.T_HUD_SMG_03_D")
    );
    GSMG03WeaponIconMap.Add(EWeaponIconName::Body, SMG03Body);

    FWeaponIcon SMG03Silencer01 = CreateWeaponIcon(
        EWeaponIconName::Silencer_01,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_03_Silencer_01_D.T_HUD_SMG_03_Silencer_01_D")
    );
    GSMG03WeaponIconMap.Add(EWeaponIconName::Silencer_01, SMG03Silencer01);

    FWeaponIcon SMG03Silencer02 = CreateWeaponIcon(
        EWeaponIconName::Silencer_02,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_03_Silencer_02_D.T_HUD_SMG_03_Silencer_02_D")
    );
    GSMG03WeaponIconMap.Add(EWeaponIconName::Silencer_02, SMG03Silencer02);

    FWeaponIcon SMG03Silencer03 = CreateWeaponIcon(
        EWeaponIconName::Silencer_03,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_03_Silencer_03_D.T_HUD_SMG_03_Silencer_03_D")
    );
    GSMG03WeaponIconMap.Add(EWeaponIconName::Silencer_03, SMG03Silencer03);

    FWeaponIcon SMG03Scope01 = CreateWeaponIcon(
        EWeaponIconName::Scope_01,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_03_Scope_01_D.T_HUD_SMG_03_Scope_01_D")
    );
    GSMG03WeaponIconMap.Add(EWeaponIconName::Scope_01, SMG03Scope01);

    FWeaponIcon SMG03Scope02 = CreateWeaponIcon(
        EWeaponIconName::Scope_02,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_03_Scope_02_D.T_HUD_SMG_03_Scope_02_D")
    );
    GSMG03WeaponIconMap.Add(EWeaponIconName::Scope_02, SMG03Scope02);

    FWeaponIcon SMG03Scope03 = CreateWeaponIcon(
        EWeaponIconName::Scope_03,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_03_Scope_03_D.T_HUD_SMG_03_Scope_03_D")
    );
    GSMG03WeaponIconMap.Add(EWeaponIconName::Scope_03, SMG03Scope03);

    FWeaponIcon SMG03Scope04 = CreateWeaponIcon(
        EWeaponIconName::Scope_04,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_03_Scope_04_D.T_HUD_SMG_03_Scope_04_D")
    );
    GSMG03WeaponIconMap.Add(EWeaponIconName::Scope_04, SMG03Scope04);

    FWeaponIcon SMG03Scope05 = CreateWeaponIcon(
        EWeaponIconName::Scope_05,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_03_Scope_05_D.T_HUD_SMG_03_Scope_05_D")
    );
    GSMG03WeaponIconMap.Add(EWeaponIconName::Scope_05, SMG03Scope05);

    FWeaponIcon SMG03Scope06 = CreateWeaponIcon(
        EWeaponIconName::Scope_06,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_03_Scope_06_D.T_HUD_SMG_03_Scope_06_D")
    );
    GSMG03WeaponIconMap.Add(EWeaponIconName::Scope_06, SMG03Scope06);

    FWeaponIcon SMG03Scope07 = CreateWeaponIcon(
        EWeaponIconName::Scope_07,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_03_Scope_07_D.T_HUD_SMG_03_Scope_07_D")
    );
    GSMG03WeaponIconMap.Add(EWeaponIconName::Scope_07, SMG03Scope07);

    FWeaponIcon SMG03Scope08 = CreateWeaponIcon(
        EWeaponIconName::Scope_08,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_03_Scope_08_D.T_HUD_SMG_03_Scope_08_D")
    );
    GSMG03WeaponIconMap.Add(EWeaponIconName::Scope_08, SMG03Scope08);

    FWeaponIcon SMG03Grip01 = CreateWeaponIcon(
        EWeaponIconName::Grip_01,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_03_Grip_01_D.T_HUD_SMG_03_Grip_01_D")
    );
    GSMG03WeaponIconMap.Add(EWeaponIconName::Grip_01, SMG03Grip01);

    FWeaponIcon SMG03Bipod01 = CreateWeaponIcon(
        EWeaponIconName::Bipod_01,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_03_Bipod_01_D.T_HUD_SMG_03_Bipod_01_D")
    );
    GSMG03WeaponIconMap.Add(EWeaponIconName::Bipod_01, SMG03Bipod01);

    FWeaponIcon SMG03Bipod02 = CreateWeaponIcon(
        EWeaponIconName::Bipod_02,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_03_Bipod_02_D.T_HUD_SMG_03_Bipod_02_D")
    );
    GSMG03WeaponIconMap.Add(EWeaponIconName::Bipod_02, SMG03Bipod02);

    FWeaponIcon SMG03Flashlight = CreateWeaponIcon(
        EWeaponIconName::Flashlight,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_03_Laser_Flashlight_01_D.T_HUD_SMG_03_Laser_Flashlight_01_D")
    );
    GSMG03WeaponIconMap.Add(EWeaponIconName::Flashlight, SMG03Flashlight);

    FWeaponIcon SMG03Lasersight = CreateWeaponIcon(
        EWeaponIconName::Lasersight,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_03_Laser_Sight_01_D.T_HUD_SMG_03_Laser_Sight_01_D")
    );
    GSMG03WeaponIconMap.Add(EWeaponIconName::Lasersight, SMG03Lasersight);

    FWeaponIcon SMG03Magazine = CreateWeaponIcon(
        EWeaponIconName::Magazine,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_03_Magazine_Default_D.T_HUD_SMG_03_Magazine_Default_D")
    );
    GSMG03WeaponIconMap.Add(EWeaponIconName::Magazine, SMG03Magazine);

    FWeaponIcon SMG03ScopeDefault = CreateWeaponIcon(
        EWeaponIconName::Scope_Default,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_03_Scope_Default_D.T_HUD_SMG_03_Scope_Default_D")
    );
    GSMG03WeaponIconMap.Add(EWeaponIconName::Scope_Default, SMG03ScopeDefault);
}

FWeaponIcon USMG03WeaponIconSettingsLibrary::GetWeaponIconByName(EWeaponIconName IconName)
{
    InitSMG03WeaponIconMap();
    if (GSMG03WeaponIconMap.Contains(IconName))
    {
        return GSMG03WeaponIconMap[IconName];
    }
    return FWeaponIcon(); // Return default icon if not found
}

TArray<FWeaponIcon> USMG03WeaponIconSettingsLibrary::GetAllSMG03WeaponIcons()
{
    InitSMG03WeaponIconMap();
    TArray<FWeaponIcon> AllIcons;
    GSMG03WeaponIconMap.GenerateValueArray(AllIcons);
    return AllIcons;
}
