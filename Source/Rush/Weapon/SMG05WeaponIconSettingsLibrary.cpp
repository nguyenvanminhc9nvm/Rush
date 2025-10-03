#include "SMG05WeaponIconSettingsLibrary.h"
#include "Engine/Engine.h"

static TMap<EWeaponIconName, FWeaponIcon> GSMG05WeaponIconMap;

static void InitSMG05WeaponIconMap()
{
    if (GSMG05WeaponIconMap.Num() > 0) return;

    // Helper function to create WeaponIcon
    auto CreateWeaponIcon = [](EWeaponIconName IconName, const FString& TexturePath) -> FWeaponIcon
    {
        FWeaponIcon Icon;
        Icon.Name = IconName;
        Icon.Texture = TSoftObjectPtr<UTexture2D>(FSoftObjectPath(TexturePath));
        return Icon;
    };

    // SMG_05 Icons
    FWeaponIcon SMG05Body = CreateWeaponIcon(
        EWeaponIconName::Body,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_05_D.T_HUD_SMG_05_D")
    );
    GSMG05WeaponIconMap.Add(EWeaponIconName::Body, SMG05Body);

    FWeaponIcon SMG05Silencer01 = CreateWeaponIcon(
        EWeaponIconName::Silencer_01,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_05_Silencer_01_D.T_HUD_SMG_05_Silencer_01_D")
    );
    GSMG05WeaponIconMap.Add(EWeaponIconName::Silencer_01, SMG05Silencer01);

    FWeaponIcon SMG05Silencer02 = CreateWeaponIcon(
        EWeaponIconName::Silencer_02,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_05_Silencer_02_D.T_HUD_SMG_05_Silencer_02_D")
    );
    GSMG05WeaponIconMap.Add(EWeaponIconName::Silencer_02, SMG05Silencer02);

    FWeaponIcon SMG05Silencer03 = CreateWeaponIcon(
        EWeaponIconName::Silencer_03,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_05_Silencer_03_D.T_HUD_SMG_05_Silencer_03_D")
    );
    GSMG05WeaponIconMap.Add(EWeaponIconName::Silencer_03, SMG05Silencer03);

    FWeaponIcon SMG05Scope01 = CreateWeaponIcon(
        EWeaponIconName::Scope_01,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_05_Scope_01_D.T_HUD_SMG_05_Scope_01_D")
    );
    GSMG05WeaponIconMap.Add(EWeaponIconName::Scope_01, SMG05Scope01);

    FWeaponIcon SMG05Scope02 = CreateWeaponIcon(
        EWeaponIconName::Scope_02,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_05_Scope_02_D.T_HUD_SMG_05_Scope_02_D")
    );
    GSMG05WeaponIconMap.Add(EWeaponIconName::Scope_02, SMG05Scope02);

    FWeaponIcon SMG05Scope03 = CreateWeaponIcon(
        EWeaponIconName::Scope_03,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_05_Scope_03_D.T_HUD_SMG_05_Scope_03_D")
    );
    GSMG05WeaponIconMap.Add(EWeaponIconName::Scope_03, SMG05Scope03);

    FWeaponIcon SMG05Scope04 = CreateWeaponIcon(
        EWeaponIconName::Scope_04,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_05_Scope_04_D.T_HUD_SMG_05_Scope_04_D")
    );
    GSMG05WeaponIconMap.Add(EWeaponIconName::Scope_04, SMG05Scope04);

    FWeaponIcon SMG05Scope05 = CreateWeaponIcon(
        EWeaponIconName::Scope_05,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_05_Scope_05_D.T_HUD_SMG_05_Scope_05_D")
    );
    GSMG05WeaponIconMap.Add(EWeaponIconName::Scope_05, SMG05Scope05);

    FWeaponIcon SMG05Scope06 = CreateWeaponIcon(
        EWeaponIconName::Scope_06,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_05_Scope_06_D.T_HUD_SMG_05_Scope_06_D")
    );
    GSMG05WeaponIconMap.Add(EWeaponIconName::Scope_06, SMG05Scope06);

    FWeaponIcon SMG05Scope07 = CreateWeaponIcon(
        EWeaponIconName::Scope_07,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_05_Scope_07_D.T_HUD_SMG_05_Scope_07_D")
    );
    GSMG05WeaponIconMap.Add(EWeaponIconName::Scope_07, SMG05Scope07);

    FWeaponIcon SMG05Scope08 = CreateWeaponIcon(
        EWeaponIconName::Scope_08,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_05_Scope_08_D.T_HUD_SMG_05_Scope_08_D")
    );
    GSMG05WeaponIconMap.Add(EWeaponIconName::Scope_08, SMG05Scope08);

    FWeaponIcon SMG05Grip01 = CreateWeaponIcon(
        EWeaponIconName::Grip_01,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_05_Grip_01_D.T_HUD_SMG_05_Grip_01_D")
    );
    GSMG05WeaponIconMap.Add(EWeaponIconName::Grip_01, SMG05Grip01);

    FWeaponIcon SMG05Bipod01 = CreateWeaponIcon(
        EWeaponIconName::Bipod_01,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_05_Bipod_01_D.T_HUD_SMG_05_Bipod_01_D")
    );
    GSMG05WeaponIconMap.Add(EWeaponIconName::Bipod_01, SMG05Bipod01);

    FWeaponIcon SMG05Bipod02 = CreateWeaponIcon(
        EWeaponIconName::Bipod_02,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_05_Bipod_02_D.T_HUD_SMG_05_Bipod_02_D")
    );
    GSMG05WeaponIconMap.Add(EWeaponIconName::Bipod_02, SMG05Bipod02);

    FWeaponIcon SMG05Flashlight = CreateWeaponIcon(
        EWeaponIconName::Flashlight,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_05_Laser_Flashlight_01_D.T_HUD_SMG_05_Laser_Flashlight_01_D")
    );
    GSMG05WeaponIconMap.Add(EWeaponIconName::Flashlight, SMG05Flashlight);

    FWeaponIcon SMG05Lasersight = CreateWeaponIcon(
        EWeaponIconName::Lasersight,
        TEXT("/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_05_Laser_Sight_01_D.T_HUD_SMG_05_Laser_Sight_01_D")
    );
    GSMG05WeaponIconMap.Add(EWeaponIconName::Lasersight, SMG05Lasersight);
}

FWeaponIcon USMG05WeaponIconSettingsLibrary::GetWeaponIconByName(EWeaponIconName IconName)
{
    InitSMG05WeaponIconMap();
    if (GSMG05WeaponIconMap.Contains(IconName))
    {
        return GSMG05WeaponIconMap[IconName];
    }
    return FWeaponIcon(); // Return default icon if not found
}

TArray<FWeaponIcon> USMG05WeaponIconSettingsLibrary::GetAllSMG05WeaponIcons()
{
    InitSMG05WeaponIconMap();
    TArray<FWeaponIcon> AllIcons;
    GSMG05WeaponIconMap.GenerateValueArray(AllIcons);
    return AllIcons;
}
