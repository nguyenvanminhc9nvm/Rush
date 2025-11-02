#include "WeaponIronsightLibrary.h"

#include "IronsightSettingsLibrary.h"

static TMap<EWeaponName, FWeaponIronsightEntry> GIronsightEntryMap;

static void InitIronsightEntryMap()
{
    if (GIronsightEntryMap.Num() > 0) return;

    // Helper function to create ironsight entry
    auto CreateIronsightEntry = [](EWeaponName WeaponName, const FString& MeshPath, const FString& IconPath) -> FWeaponIronsightEntry
    {
        FWeaponIronsightEntry Entry;
        Entry.Name = WeaponName;
        if (MeshPath != TEXT("None"))
        {
            Entry.FragmentMesh = LoadObject<UStaticMesh>(nullptr, *MeshPath);
        }
        if (IconPath != TEXT("None"))
        {
            Entry.Icon = LoadObject<UTexture2D>(nullptr, *IconPath);
        }
        Entry.IronsightSetting =  UIronsightSettingsLibrary::GetIronsightSettingByWeaponName(WeaponName);
        return Entry;
    };

    // Hidden
    FWeaponIronsightEntry HiddenEntry;
    HiddenEntry.Name = EWeaponName::Assault_Rifle_01; // Default, not really used for Hidden
    HiddenEntry.FragmentMesh = LoadObject<UStaticMesh>(nullptr, TEXT("/Script/Engine.StaticMesh'/Game/Assets/Projectiles/SM_Placeholder_Invisible.SM_Placeholder_Invisible'"));
    HiddenEntry.Icon = nullptr;
    GIronsightEntryMap.Add(EWeaponName::Assault_Rifle_01, HiddenEntry); // Map to AR01 as default, or use a special key

    // Assault-Rifle-01
    FWeaponIronsightEntry AR01Entry = CreateIronsightEntry(
        EWeaponName::Assault_Rifle_01,
        TEXT("/Script/Engine.StaticMesh'/Game/Assets/Weapon/ARs/Scope/SM_AR_01_Scope_Default.SM_AR_01_Scope_Default'"),
        TEXT("/Script/Engine.Texture2D'/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_01_Scope_Default_D.T_HUD_AR_01_Scope_Default_D'")
    );
    GIronsightEntryMap.Add(EWeaponName::Assault_Rifle_01, AR01Entry);

    // Assault-Rifle-02
    FWeaponIronsightEntry AR02Entry = CreateIronsightEntry(
        EWeaponName::Assault_Rifle_02,
        TEXT("/Script/Engine.StaticMesh'/Game/Assets/Weapon/ARs/Scope/SM_AR_02_Scope_Default.SM_AR_02_Scope_Default'"),
        TEXT("/Script/Engine.Texture2D'/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_02_Scope_Default_D.T_HUD_AR_02_Scope_Default_D'")
    );
    GIronsightEntryMap.Add(EWeaponName::Assault_Rifle_02, AR02Entry);

    // Assault-Rifle-03
    FWeaponIronsightEntry AR03Entry = CreateIronsightEntry(
        EWeaponName::Assault_Rifle_03,
        TEXT("/Script/Engine.StaticMesh'/Game/Assets/Weapon/ARs/Scope/SM_AR_03_Scope_Default.SM_AR_03_Scope_Default'"),
        TEXT("/Script/Engine.Texture2D'/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_03_Scope_Default_D.T_HUD_AR_03_Scope_Default_D'")
    );
    GIronsightEntryMap.Add(EWeaponName::Assault_Rifle_03, AR03Entry);

    // Handgun-01
    FWeaponIronsightEntry Handgun01Entry = CreateIronsightEntry(
        EWeaponName::Handgun_01,
        TEXT("/Script/Engine.StaticMesh'/Game/Assets/Weapon/Handguns/Scope/SM_Handgun_01_Scope_Default.SM_Handgun_01_Scope_Default'"),
        TEXT("/Script/Engine.Texture2D'/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_01_Scope_Default_D.T_HUD_Handgun_01_Scope_Default_D'")
    );
    GIronsightEntryMap.Add(EWeaponName::Handgun_01, Handgun01Entry);

    // Handgun-02
    FWeaponIronsightEntry Handgun02Entry = CreateIronsightEntry(
        EWeaponName::Handgun_02,
        TEXT("/Script/Engine.StaticMesh'/Game/Assets/Weapon/Handguns/Scope/SM_Handgun_02_Scope_Default.SM_Handgun_02_Scope_Default'"),
        TEXT("/Script/Engine.Texture2D'/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_02_Scope_Default_D.T_HUD_Handgun_02_Scope_Default_D'")
    );
    GIronsightEntryMap.Add(EWeaponName::Handgun_02, Handgun02Entry);

    // Handgun-03
    FWeaponIronsightEntry Handgun03Entry = CreateIronsightEntry(
        EWeaponName::Handgun_03,
        TEXT("/Script/Engine.StaticMesh'/Game/Assets/Weapon/Handguns/Scope/SM_Handgun_03_Scope_Default.SM_Handgun_03_Scope_Default'"),
        TEXT("/Script/Engine.Texture2D'/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_03_Scope_Default_D.T_HUD_Handgun_03_Scope_Default_D'")
    );
    GIronsightEntryMap.Add(EWeaponName::Handgun_03, Handgun03Entry);

    // Handgun-04
    FWeaponIronsightEntry Handgun04Entry = CreateIronsightEntry(
        EWeaponName::Handgun_04,
        TEXT("/Script/Engine.StaticMesh'/Game/Assets/Weapon/Handguns/Scope/SM_Handgun_04_Scope_Default.SM_Handgun_04_Scope_Default'"),
        TEXT("/Script/Engine.Texture2D'/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_04_Scope_Default_D.T_HUD_Handgun_04_Scope_Default_D'")
    );
    GIronsightEntryMap.Add(EWeaponName::Handgun_04, Handgun04Entry);

    // Launcher-Rocket-01
    FWeaponIronsightEntry RL01Entry = CreateIronsightEntry(
        EWeaponName::Rocket_Launcher_01,
        TEXT("/Script/Engine.StaticMesh'/Game/Assets/Weapon/Launchers/Scope/SM_RL_01_Scope_Default.SM_RL_01_Scope_Default'"),
        TEXT("/Script/Engine.Texture2D'/Game/Assets/Icons/Weapons/Launchers/T_HUD_RL_01_Scope_Default_D.T_HUD_RL_01_Scope_Default_D'")
    );
    GIronsightEntryMap.Add(EWeaponName::Rocket_Launcher_01, RL01Entry);

    // Launcher-Grenade-01
    FWeaponIronsightEntry GL01Entry = CreateIronsightEntry(
        EWeaponName::Grenade_Launcher_01,
        TEXT("/Script/Engine.StaticMesh'/Game/Assets/Weapon/Launchers/Scope/SM_GL_01_Scope_B_Default.SM_GL_01_Scope_B_Default'"),
        TEXT("/Script/Engine.Texture2D'/Game/Assets/Icons/Weapons/Launchers/T_HUD_GL_01_Iron_Sights_B_Default_D.T_HUD_GL_01_Iron_Sights_B_Default_D'")
    );
    GIronsightEntryMap.Add(EWeaponName::Grenade_Launcher_01, GL01Entry);

    // Shotgun-01
    FWeaponIronsightEntry Shotgun01Entry = CreateIronsightEntry(
        EWeaponName::Shotgun_01,
        TEXT("/Script/Engine.StaticMesh'/Game/Assets/Weapon/Shotguns/Scope/SM_Shotgun_01_Scope_Default.SM_Shotgun_01_Scope_Default'"),
        TEXT("/Script/Engine.Texture2D'/Game/Assets/Icons/Weapons/Shotguns/T_HUD_Shotgun_01_Scope_Default_D.T_HUD_Shotgun_01_Scope_Default_D'")
    );
    GIronsightEntryMap.Add(EWeaponName::Shotgun_01, Shotgun01Entry);

    // SMG-01
    FWeaponIronsightEntry SMG01Entry = CreateIronsightEntry(
        EWeaponName::SMG_01,
        TEXT("/Script/Engine.StaticMesh'/Game/Assets/Weapon/SMGs/Scope/SM_SMG_01_Scope_Default.SM_SMG_01_Scope_Default'"),
        TEXT("/Script/Engine.Texture2D'/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_01_Scope_Default_D.T_HUD_SMG_01_Scope_Default_D'")
    );
    GIronsightEntryMap.Add(EWeaponName::SMG_01, SMG01Entry);

    // SMG-02
    FWeaponIronsightEntry SMG02Entry = CreateIronsightEntry(
        EWeaponName::SMG_02,
        TEXT("/Script/Engine.StaticMesh'/Game/Assets/Weapon/SMGs/Scope/SM_SMG_02_Scope_Default.SM_SMG_02_Scope_Default'"),
        TEXT("/Script/Engine.Texture2D'/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_02_Scope_Default_D.T_HUD_SMG_02_Scope_Default_D'")
    );
    GIronsightEntryMap.Add(EWeaponName::SMG_02, SMG02Entry);

    // SMG-03
    FWeaponIronsightEntry SMG03Entry = CreateIronsightEntry(
        EWeaponName::SMG_03,
        TEXT("/Script/Engine.StaticMesh'/Game/Assets/Weapon/SMGs/Scope/SM_SMG_03_Scope_Default.SM_SMG_03_Scope_Default'"),
        TEXT("/Script/Engine.Texture2D'/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_03_Scope_Default_D.T_HUD_SMG_03_Scope_Default_D'")
    );
    GIronsightEntryMap.Add(EWeaponName::SMG_03, SMG03Entry);

    // SMG-04
    FWeaponIronsightEntry SMG04Entry = CreateIronsightEntry(
        EWeaponName::SMG_04,
        TEXT("/Script/Engine.StaticMesh'/Game/Assets/Weapon/SMGs/Scope/SM_SMG_04_Scope_Default.SM_SMG_04_Scope_Default'"),
        TEXT("/Script/Engine.Texture2D'/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_04_Scope_Default_D.T_HUD_SMG_04_Scope_Default_D'")
    );
    GIronsightEntryMap.Add(EWeaponName::SMG_04, SMG04Entry);

    // SMG-05
    FWeaponIronsightEntry SMG05Entry = CreateIronsightEntry(
        EWeaponName::SMG_05,
        TEXT("/Script/Engine.StaticMesh'/Game/Assets/Weapon/SMGs/Scope/SM_SMG_05_Scope_Default.SM_SMG_05_Scope_Default'"),
        TEXT("/Script/Engine.Texture2D'/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_05_Scope_Default_D.T_HUD_SMG_05_Scope_Default_D'")
    );
    GIronsightEntryMap.Add(EWeaponName::SMG_05, SMG05Entry);

    // Sniper-01
    FWeaponIronsightEntry Sniper01Entry = CreateIronsightEntry(
        EWeaponName::Sniper_01,
        TEXT("/Script/Engine.StaticMesh'/Game/Assets/Weapon/Snipers/Scope/SM_Sniper_01_Scope_Default.SM_Sniper_01_Scope_Default'"),
        TEXT("/Script/Engine.Texture2D'/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_01_Scope_Default_D.T_HUD_Sniper_01_Scope_Default_D'")
    );
    GIronsightEntryMap.Add(EWeaponName::Sniper_01, Sniper01Entry);

    // Sniper-02
    FWeaponIronsightEntry Sniper02Entry = CreateIronsightEntry(
        EWeaponName::Sniper_02,
        TEXT("/Script/Engine.StaticMesh'/Game/Assets/Weapon/Snipers/Scope/SM_Sniper_02_Scope_Default.SM_Sniper_02_Scope_Default'"),
        TEXT("/Script/Engine.Texture2D'/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_02_Scope_Default_D.T_HUD_Sniper_02_Scope_Default_D'")
    );
    GIronsightEntryMap.Add(EWeaponName::Sniper_02, Sniper02Entry);

    // Sniper-03
    FWeaponIronsightEntry Sniper03Entry = CreateIronsightEntry(
        EWeaponName::Sniper_03,
        TEXT("/Script/Engine.StaticMesh'/Game/Assets/Weapon/Snipers/Scope/SM_Sniper_03_Scope_Default.SM_Sniper_03_Scope_Default'"),
        TEXT("/Script/Engine.Texture2D'/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_03_Scope_Default_D.T_HUD_Sniper_03_Scope_Default_D'")
    );
    GIronsightEntryMap.Add(EWeaponName::Sniper_03, Sniper03Entry);
}

FWeaponIronsightEntry UWeaponIronsightLibrary::GetIronsightEntryByWeaponName(EWeaponName WeaponName)
{
    InitIronsightEntryMap();
    if (GIronsightEntryMap.Contains(WeaponName))
    {
        return GIronsightEntryMap[WeaponName];
    }
    return FWeaponIronsightEntry();
}
