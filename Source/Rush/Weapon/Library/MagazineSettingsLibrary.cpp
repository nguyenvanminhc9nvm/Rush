#include "MagazineSettingsLibrary.h"
#include "Engine/Engine.h"

static TMap<EWeaponName, FMagazineEntry> GMagazineMap;

static void InitMagazineMap()
{
    if (GMagazineMap.Num() > 0) return;

    // Helper function to create magazine entry
    auto CreateMagazineEntry = [](EWeaponName WeaponName, const FString& MeshPath, const FString& TexturePath,
                                   const EAmmunationType AmmunitionType, int32 AmmunitionTotal,
                                   const FString& CasingTypePath, const FVector2D& CasingImpulseRange, float CasingOffset,
                                   const FString& ProjectileTypePath, const FVector2D& ProjectileVelocityRange,
                                   const FVector2D& ProjectilePelletRange, bool bAmmunitionVisualUpdate,
                                   int32 AmmunitionVisualStartingIndex, const FString& AmmunitionVisualHiddenMaterial) -> FMagazineEntry
    {
        FMagazineEntry Entry;
        Entry.Name = WeaponName;
        if (MeshPath != TEXT("None"))
        {
            Entry.Mesh = LoadObject<UStaticMesh>(nullptr, *MeshPath);
        }
        if (TexturePath != TEXT("None"))
        {
            Entry.Texture = LoadObject<UTexture2D>(nullptr, *TexturePath);
        }
        Entry.AmmunitionType = AmmunitionType;
        Entry.AmmunitionTotal = AmmunitionTotal;
        if (CasingTypePath != TEXT("None"))
        {
            Entry.CasingType = LoadClass<AActor>(nullptr, *CasingTypePath);
        }
        Entry.CasingImpulseRange = CasingImpulseRange;
        Entry.CasingOffset = CasingOffset;
        if (ProjectileTypePath != TEXT("None"))
        {
            Entry.ProjectileType = LoadClass<AActor>(nullptr, *ProjectileTypePath);
        }
        Entry.ProjectileVelocityRange = ProjectileVelocityRange;
        Entry.ProjectilePelletRange = ProjectilePelletRange;
        Entry.bAmmunitionVisualUpdate = bAmmunitionVisualUpdate;
        Entry.AmmunitionVisualStartingIndex = AmmunitionVisualStartingIndex;
        Entry.AmmunitionVisualHiddenMaterial = AmmunitionVisualHiddenMaterial;
        return Entry;
    };

    // Assault-Rifle-01
    FMagazineEntry AR01Entry = CreateMagazineEntry(
        EWeaponName::Assault_Rifle_01,
        TEXT("/Script/Engine.StaticMesh'/Game/Assets/Weapon/ARs/Magazine/SM_AR_01_Magazine_Default.SM_AR_01_Magazine_Default'"),
        TEXT("/Script/Engine.Texture2D'/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_01_Magazine_Default_D.T_HUD_AR_01_Magazine_Default_D'"),
        EAmmunationType::AssaultRifle, 30,
        TEXT("/Script/Engine.BlueprintGeneratedClass'/Game/Blueprint/Weapon/Casing/BP_LPSP_CASING_Big.BP_LPSP_CASING_Big_C'"),
        FVector2D(150, 250), 0.0f,
        TEXT("/Script/Engine.BlueprintGeneratedClass'/Game/Blueprint/Weapon/Projectile/ARs/BP_LPSP_PROJ_Bullet_AR_01.BP_LPSP_PROJ_Bullet_AR_01_C'"),
        FVector2D(30000, 35000), FVector2D(1, 1),
        true, 1, TEXT("None")
    );
    GMagazineMap.Add(EWeaponName::Assault_Rifle_01, AR01Entry);

    // Assault-Rifle-02
    FMagazineEntry AR02Entry = CreateMagazineEntry(
        EWeaponName::Assault_Rifle_02,
        TEXT("/Script/Engine.StaticMesh'/Game/Assets/Weapon/ARs/Magazine/SM_AR_02_Magazine_Default.SM_AR_02_Magazine_Default'"),
        TEXT("/Script/Engine.Texture2D'/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_02_Magazine_Default_D.T_HUD_AR_02_Magazine_Default_D'"),
        EAmmunationType::AssaultRifle, 32,
        TEXT("/Script/Engine.BlueprintGeneratedClass'/Game/Blueprint/Weapon/Casing/BP_LPSP_CASING_Big.BP_LPSP_CASING_Big_C'"),
        FVector2D(150, 250), 0.0f,
        TEXT("/Script/Engine.BlueprintGeneratedClass'/Game/Blueprint/Weapon/Projectile/ARs/BP_LPSP_PROJ_Bullet_AR_02.BP_LPSP_PROJ_Bullet_AR_02_C'"),
        FVector2D(30000, 35000), FVector2D(1, 1),
        true, 1, TEXT("None")
    );
    GMagazineMap.Add(EWeaponName::Assault_Rifle_02, AR02Entry);

    // Assault-Rifle-03
    FMagazineEntry AR03Entry = CreateMagazineEntry(
        EWeaponName::Assault_Rifle_03,
        TEXT("/Script/Engine.StaticMesh'/Game/Assets/Weapon/ARs/Magazine/SM_AR_03_Magazine_Default.SM_AR_03_Magazine_Default'"),
        TEXT("/Script/Engine.Texture2D'/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_03_Magazine_Default_D.T_HUD_AR_03_Magazine_Default_D'"),
        EAmmunationType::AssaultRifle,31,
        TEXT("/Script/Engine.BlueprintGeneratedClass'/Game/Blueprint/Weapon/Casing/BP_LPSP_CASING_Big.BP_LPSP_CASING_Big_C'"),
        FVector2D(150, 250), 0.0f,
        TEXT("/Script/Engine.BlueprintGeneratedClass'/Game/Blueprint/Weapon/Projectile/ARs/BP_LPSP_PROJ_Bullet_AR_03.BP_LPSP_PROJ_Bullet_AR_03_C'"),
        FVector2D(30000, 35000), FVector2D(1, 1),
        true, 1, TEXT("None")
    );
    GMagazineMap.Add(EWeaponName::Assault_Rifle_03, AR03Entry);

    // Assault-Rifle-03-SciFi
    FMagazineEntry AR03SciFiEntry = CreateMagazineEntry(
        EWeaponName::Assault_Rifle_03_SciFi,
        TEXT("/Script/Engine.StaticMesh'/Game/Assets/Weapon/ARs/Magazine/SM_AR_02_Magazine_Default.SM_AR_02_Magazine_Default'"),
        TEXT("/Script/Engine.Texture2D'/Game/Assets/Icons/Weapons/ARs/T_HUD_AR_03_Magazine_Default_D.T_HUD_AR_03_Magazine_Default_D'"),
        EAmmunationType::AssaultRifle, 120,
        TEXT("/Script/Engine.BlueprintGeneratedClass'/Game/Blueprint/Weapon/Casing/BP_LPSP_CASING_Big.BP_LPSP_CASING_Big_C'"),
        FVector2D(150, 250), 0.0f,
        TEXT("/Script/Engine.BlueprintGeneratedClass'/Game/Blueprint/Weapon/Projectile/ARs/BP_LPSP_PROJ_Bullet_AR_03.BP_LPSP_PROJ_Bullet_AR_03_C'"),
        FVector2D(30000, 35000), FVector2D(1, 1),
        true, 1, TEXT("None")
    );
    GMagazineMap.Add(EWeaponName::Assault_Rifle_03_SciFi, AR03SciFiEntry);

    // Handgun-01
    FMagazineEntry Handgun01Entry = CreateMagazineEntry(
        EWeaponName::Handgun_01,
        TEXT("/Script/Engine.StaticMesh'/Game/Assets/Weapon/Handguns/Magazine/SM_Handgun_01_Magazine_Default.SM_Handgun_01_Magazine_Default'"),
        TEXT("/Script/Engine.Texture2D'/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_01_Magazine_Default_D.T_HUD_Handgun_01_Magazine_Default_D'"),
        EAmmunationType::Handgun, 12,
        TEXT("/Script/Engine.BlueprintGeneratedClass'/Game/Blueprint/Weapon/Casing/BP_LPSP_CASING_Small.BP_LPSP_CASING_Small_C'"),
        FVector2D(250, 350), 0.0f,
        TEXT("/Script/Engine.BlueprintGeneratedClass'/Game/Blueprint/Weapon/Projectile/Handgun/BP_LPSP_PROJ_Bullet_Handgun_01.BP_LPSP_PROJ_Bullet_Handgun_01_C'"),
        FVector2D(20000, 25000), FVector2D(1, 1),
        true, 1, TEXT("None")
    );
    GMagazineMap.Add(EWeaponName::Handgun_01, Handgun01Entry);

    // Handgun-02
    FMagazineEntry Handgun02Entry = CreateMagazineEntry(
        EWeaponName::Handgun_02,
        TEXT("/Script/Engine.StaticMesh'/Game/Assets/Weapon/Handguns/Magazine/SM_Handgun_02_Magazine_Default.SM_Handgun_02_Magazine_Default'"),
        TEXT("/Script/Engine.Texture2D'/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_02_Magazine_Default_D.T_HUD_Handgun_02_Magazine_Default_D'"),
        EAmmunationType::Handgun,10,
        TEXT("/Script/Engine.BlueprintGeneratedClass'/Game/Blueprint/Weapon/Casing/BP_LPSP_CASING_Small.BP_LPSP_CASING_Small_C'"),
        FVector2D(250, 350), 0.0f,
        TEXT("/Script/Engine.BlueprintGeneratedClass'/Game/Blueprint/Weapon/Projectile/Handgun/BP_LPSP_PROJ_Bullet_Handgun_02.BP_LPSP_PROJ_Bullet_Handgun_02_C'"),
        FVector2D(20000, 25000), FVector2D(1, 1),
        true, 1, TEXT("None")
    );
    GMagazineMap.Add(EWeaponName::Handgun_02, Handgun02Entry);

    // Handgun-03
    FMagazineEntry Handgun03Entry = CreateMagazineEntry(
        EWeaponName::Handgun_03,
        TEXT("/Script/Engine.StaticMesh'/Game/Assets/Weapon/Handguns/Magazine/SM_Handgun_03_Magazine_Default.SM_Handgun_03_Magazine_Default'"),
        TEXT("/Script/Engine.Texture2D'/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_03_Magazine_Default_D.T_HUD_Handgun_03_Magazine_Default_D'"),
        EAmmunationType::Handgun,10,
        TEXT("/Script/Engine.BlueprintGeneratedClass'/Game/Blueprint/Weapon/Casing/BP_LPSP_CASING_Small.BP_LPSP_CASING_Small_C'"),
        FVector2D(250, 350), 0.0f,
        TEXT("/Script/Engine.BlueprintGeneratedClass'/Game/Blueprint/Weapon/Projectile/Handgun/BP_LPSP_PROJ_Bullet_Handgun_03.BP_LPSP_PROJ_Bullet_Handgun_03_C'"),
        FVector2D(20000, 25000), FVector2D(1, 1),
        true, 1, TEXT("None")
    );
    GMagazineMap.Add(EWeaponName::Handgun_03, Handgun03Entry);

    // Handgun-03-Skulls
    FMagazineEntry Handgun03SkullsEntry = CreateMagazineEntry(
        EWeaponName::Handgun_03_Skulls,
        TEXT("/Script/Engine.StaticMesh'/Game/Assets/Weapon/Handguns/Magazine/SM_Handgun_03_Magazine_Default.SM_Handgun_03_Magazine_Default'"),
        TEXT("/Script/Engine.Texture2D'/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_03_Magazine_Default_D.T_HUD_Handgun_03_Magazine_Default_D'"),
        EAmmunationType::Handgun,30,
        TEXT("/Script/Engine.BlueprintGeneratedClass'/Game/Blueprint/Weapon/Casing/BP_LPSP_CASING_Small.BP_LPSP_CASING_Small_C'"),
        FVector2D(250, 350), 0.0f,
        TEXT("/Script/Engine.BlueprintGeneratedClass'/Game/Blueprint/Weapon/Projectile/Handgun/BP_LPSP_PROJ_Bullet_Handgun_03.BP_LPSP_PROJ_Bullet_Handgun_03_C'"),
        FVector2D(20000, 25000), FVector2D(1, 1),
        true, 1, TEXT("None")
    );
    GMagazineMap.Add(EWeaponName::Handgun_03_Skulls, Handgun03SkullsEntry);

    // Handgun-04
    FMagazineEntry Handgun04Entry = CreateMagazineEntry(
        EWeaponName::Handgun_04,
        TEXT("/Script/Engine.StaticMesh'/Game/Assets/Weapon/Handguns/Magazine/SM_Handgun_04_Magazine_Default.SM_Handgun_04_Magazine_Default'"),
        TEXT("/Script/Engine.Texture2D'/Game/Assets/Icons/Weapons/Handguns/T_HUD_Handgun_04_Magazine_Default_D.T_HUD_Handgun_04_Magazine_Default_D'"),
        EAmmunationType::Handgun,10,
        TEXT("/Script/Engine.BlueprintGeneratedClass'/Game/Blueprint/Weapon/Casing/BP_LPSP_CASING_Small.BP_LPSP_CASING_Small_C'"),
        FVector2D(250, 350), 0.0f,
        TEXT("/Script/Engine.BlueprintGeneratedClass'/Game/Blueprint/Weapon/Projectile/Handgun/BP_LPSP_PROJ_Bullet_Handgun_04.BP_LPSP_PROJ_Bullet_Handgun_04_C'"),
        FVector2D(20000, 25000), FVector2D(1, 1),
        true, 1, TEXT("None")
    );
    GMagazineMap.Add(EWeaponName::Handgun_04, Handgun04Entry);

    // Launcher-Rocket-01
    FMagazineEntry RL01Entry = CreateMagazineEntry(
        EWeaponName::Rocket_Launcher_01,
        TEXT("/Script/Engine.StaticMesh'/Game/Assets/Weapon/Launchers/Projectile/SM_RL_01_Projectile_Default.SM_RL_01_Projectile_Default'"),
        TEXT("/Script/Engine.Texture2D'/Game/Assets/Icons/Weapons/Launchers/T_HUD_RL_01_Magazine_Default_D.T_HUD_RL_01_Magazine_Default_D'"),
        EAmmunationType::Launcher, 1,
        TEXT("None"), FVector2D(0, 0), 0.0f,
        TEXT("/Script/Engine.BlueprintGeneratedClass'/Game/Blueprint/Weapon/Projectile/Launchers/BP_LPSP_PROJ_RL_01.BP_LPSP_PROJ_RL_01_C'"),
        FVector2D(8000, 9000), FVector2D(1, 1),
        false, 1, TEXT("None")
    );
    GMagazineMap.Add(EWeaponName::Rocket_Launcher_01, RL01Entry);

    // Launcher-Rocket-01-Homing
    FMagazineEntry RL01HomingEntry = CreateMagazineEntry(
        EWeaponName::Rocket_Launcher_01_Homing,
        TEXT("/Script/Engine.StaticMesh'/Game/Assets/Weapon/Launchers/Projectile/SM_RL_01_Projectile_Default.SM_RL_01_Projectile_Default'"),
        TEXT("/Script/Engine.Texture2D'/Game/Assets/Icons/Weapons/Launchers/T_HUD_RL_01_Magazine_Default_D.T_HUD_RL_01_Magazine_Default_D'"),
        EAmmunationType::Launcher, 1,
        TEXT("None"), FVector2D(0, 0), 0.0f,
        TEXT("/Script/Engine.BlueprintGeneratedClass'/Game/Blueprint/Weapon/Projectile/Launchers/BP_LPSP_PROJ_RL_Homing.BP_LPSP_PROJ_RL_Homing_C'"),
        FVector2D(800, 1500), FVector2D(4, 7),
        false, 1, TEXT("None")
    );
    GMagazineMap.Add(EWeaponName::Rocket_Launcher_01_Homing, RL01HomingEntry);

    // Launcher-Grenade-01
    FMagazineEntry GL01Entry = CreateMagazineEntry(
        EWeaponName::Grenade_Launcher_01,
        TEXT("/Script/Engine.StaticMesh'/Game/Assets/Weapon/Launchers/Projectile/SM_GL_01_Projectile_Default.SM_GL_01_Projectile_Default'"),
        TEXT("None"),
        EAmmunationType::Launcher, 1,
        TEXT("/Script/Engine.BlueprintGeneratedClass'/Game/Blueprint/Weapon/Casing/BP_LPSP_CASING_GL.BP_LPSP_CASING_GL_C'"),
        FVector2D(100, 100), 0.0f,
        TEXT("/Script/Engine.BlueprintGeneratedClass'/Game/Blueprint/Weapon/Projectile/Launchers/BP_LPSP_PROJ_GL_01.BP_LPSP_PROJ_GL_01_C'"),
        FVector2D(1800, 2500), FVector2D(1, 1),
        false, 1, TEXT("None")
    );
    GMagazineMap.Add(EWeaponName::Grenade_Launcher_01, GL01Entry);

    // Launcher-Grenade-01-AntiTank
    FMagazineEntry GL01AntiTankEntry = CreateMagazineEntry(
        EWeaponName::Grenade_Launcher_01_AntiTank,
        TEXT("/Script/Engine.StaticMesh'/Game/Assets/Weapon/Launchers/Projectile/SM_GL_01_Projectile_Default.SM_GL_01_Projectile_Default'"),
        TEXT("None"),
        EAmmunationType::Launcher,  1,
        TEXT("/Script/Engine.BlueprintGeneratedClass'/Game/Blueprint/Weapon/Casing/BP_LPSP_CASING_GL.BP_LPSP_CASING_GL_C'"),
        FVector2D(75, 100), 0.0f,
        TEXT("/Script/Engine.BlueprintGeneratedClass'/Game/Blueprint/Weapon/Projectile/Explosive/BP_LPSP_PROJ_Bullet_Explosive.BP_LPSP_PROJ_Bullet_Explosive_C'"),
        FVector2D(35000, 40000), FVector2D(1, 1),
        false, 1, TEXT("None")
    );
    GMagazineMap.Add(EWeaponName::Grenade_Launcher_01_AntiTank, GL01AntiTankEntry);

    // Shotgun-01
    FMagazineEntry Shotgun01Entry = CreateMagazineEntry(
        EWeaponName::Shotgun_01,
        TEXT("/Script/Engine.StaticMesh'/Game/Assets/Weapon/Shotguns/Magazine/SM_Shotgun_01_Magazine_Default.SM_Shotgun_01_Magazine_Default'"),
        TEXT("/Script/Engine.Texture2D'/Game/Assets/Icons/Weapons/Shotguns/T_HUD_Shotgun_01_Magazine_Default_D.T_HUD_Shotgun_01_Magazine_Default_D'"),
        EAmmunationType::Shotgun, 8,
        TEXT("/Script/Engine.BlueprintGeneratedClass'/Game/Blueprint/Weapon/Casing/BP_LPSP_CASING_Shell.BP_LPSP_CASING_Shell_C'"),
        FVector2D(200, 350), 0.0f,
        TEXT("/Script/Engine.BlueprintGeneratedClass'/Game/Blueprint/Weapon/Projectile/Shotguns/BP_LPSP_PROJ_Bullet_Shotgun_01.BP_LPSP_PROJ_Bullet_Shotgun_01_C'"),
        FVector2D(25000, 30000), FVector2D(5, 8),
        true, 1, TEXT("None")
    );
    GMagazineMap.Add(EWeaponName::Shotgun_01, Shotgun01Entry);

    // SMG-01
    FMagazineEntry SMG01Entry = CreateMagazineEntry(
        EWeaponName::SMG_01,
        TEXT("/Script/Engine.StaticMesh'/Game/Assets/Weapon/SMGs/Magazine/SM_SMG_01_Magazine_Default.SM_SMG_01_Magazine_Default'"),
        TEXT("/Script/Engine.Texture2D'/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_01_Magazine_Default_D.T_HUD_SMG_01_Magazine_Default_D'"),
        EAmmunationType::SMG, 37,
        TEXT("/Script/Engine.BlueprintGeneratedClass'/Game/Blueprint/Weapon/Casing/BP_LPSP_CASING_Small.BP_LPSP_CASING_Small_C'"),
        FVector2D(200, 350), 0.0f,
        TEXT("/Script/Engine.BlueprintGeneratedClass'/Game/Blueprint/Weapon/Projectile/SMGs/BP_LPSP_PROJ_Bullet_SMG_01.BP_LPSP_PROJ_Bullet_SMG_01_C'"),
        FVector2D(25000, 30000), FVector2D(1, 1),
        true, 1, TEXT("None")
    );
    GMagazineMap.Add(EWeaponName::SMG_01, SMG01Entry);

    // SMG-02
    FMagazineEntry SMG02Entry = CreateMagazineEntry(
        EWeaponName::SMG_02,
        TEXT("/Script/Engine.StaticMesh'/Game/Assets/Weapon/SMGs/Magazine/SM_SMG_02_Magazine_Default.SM_SMG_02_Magazine_Default'"),
        TEXT("/Script/Engine.Texture2D'/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_02_Magazine_Default_D.T_HUD_SMG_02_Magazine_Default_D'"),
        EAmmunationType::SMG, 30,
        TEXT("/Script/Engine.BlueprintGeneratedClass'/Game/Blueprint/Weapon/Casing/BP_LPSP_CASING_Small.BP_LPSP_CASING_Small_C'"),
        FVector2D(150, 250), 0.0f,
        TEXT("/Script/Engine.BlueprintGeneratedClass'/Game/Blueprint/Weapon/Projectile/SMGs/BP_LPSP_PROJ_Bullet_SMG_02.BP_LPSP_PROJ_Bullet_SMG_02_C'"),
        FVector2D(25000, 30000), FVector2D(1, 1),
        true, 1, TEXT("None")
    );
    GMagazineMap.Add(EWeaponName::SMG_02, SMG02Entry);

    // SMG-03
    FMagazineEntry SMG03Entry = CreateMagazineEntry(
        EWeaponName::SMG_03,
        TEXT("/Script/Engine.StaticMesh'/Game/Assets/Weapon/SMGs/Magazine/SM_SMG_03_Magazine_Default.SM_SMG_03_Magazine_Default'"),
        TEXT("/Script/Engine.Texture2D'/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_03_Magazine_Default_D.T_HUD_SMG_03_Magazine_Default_D'"),
        EAmmunationType::SMG, 35,
        TEXT("/Script/Engine.BlueprintGeneratedClass'/Game/Blueprint/Weapon/Casing/BP_LPSP_CASING_Small.BP_LPSP_CASING_Small_C'"),
        FVector2D(200, 350), 0.0f,
        TEXT("/Script/Engine.BlueprintGeneratedClass'/Game/Blueprint/Weapon/Projectile/SMGs/BP_LPSP_PROJ_Bullet_SMG_03.BP_LPSP_PROJ_Bullet_SMG_03_C'"),
        FVector2D(25000, 30000), FVector2D(1, 1),
        true, 1, TEXT("None")
    );
    GMagazineMap.Add(EWeaponName::SMG_03, SMG03Entry);

    // SMG-04
    FMagazineEntry SMG04Entry = CreateMagazineEntry(
        EWeaponName::SMG_04,
        TEXT("/Script/Engine.StaticMesh'/Game/Assets/Weapon/SMGs/Magazine/SM_SMG_04_Magazine_Default.SM_SMG_04_Magazine_Default'"),
        TEXT("/Script/Engine.Texture2D'/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_04_Magazine_Default_D.T_HUD_SMG_04_Magazine_Default_D'"),
        EAmmunationType::SMG, 54,
        TEXT("/Script/Engine.BlueprintGeneratedClass'/Game/Blueprint/Weapon/Casing/BP_LPSP_CASING_Small.BP_LPSP_CASING_Small_C'"),
        FVector2D(200, 350), 0.0f,
        TEXT("/Script/Engine.BlueprintGeneratedClass'/Game/Blueprint/Weapon/Projectile/SMGs/BP_LPSP_PROJ_Bullet_SMG_04.BP_LPSP_PROJ_Bullet_SMG_04_C'"),
        FVector2D(25000, 30000), FVector2D(1, 1),
        true, 1, TEXT("None")
    );
    GMagazineMap.Add(EWeaponName::SMG_04, SMG04Entry);

    // SMG-04-Transparent -> mapped to SMG_04_Modern
    FMagazineEntry SMG04TransparentEntry = CreateMagazineEntry(
        EWeaponName::SMG_04_Modern,
        TEXT("/Script/Engine.StaticMesh'/Game/Assets/Weapon/SMGs/Magazine/SM_SMG_04_Magazine_Transparent.SM_SMG_04_Magazine_Transparent'"),
        TEXT("/Script/Engine.Texture2D'/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_04_Magazine_Default_D.T_HUD_SMG_04_Magazine_Default_D'"),
        EAmmunationType::SMG, 54,
        TEXT("/Script/Engine.BlueprintGeneratedClass'/Game/Blueprint/Weapon/Casing/BP_LPSP_CASING_Small.BP_LPSP_CASING_Small_C'"),
        FVector2D(200, 350), 0.0f,
        TEXT("/Script/Engine.BlueprintGeneratedClass'/Game/Blueprint/Weapon/Projectile/SMGs/BP_LPSP_PROJ_Bullet_SMG_04.BP_LPSP_PROJ_Bullet_SMG_04_C'"),
        FVector2D(25000, 30000), FVector2D(1, 1),
        true, 2, TEXT("None")
    );
    GMagazineMap.Add(EWeaponName::SMG_04_Modern, SMG04TransparentEntry);

    // SMG-05
    FMagazineEntry SMG05Entry = CreateMagazineEntry(
        EWeaponName::SMG_05,
        TEXT("/Script/Engine.StaticMesh'/Game/Assets/Weapon/SMGs/Scope/SM_SMG_05_Magazine_Default.SM_SMG_05_Magazine_Default'"),
        TEXT("/Script/Engine.Texture2D'/Game/Assets/Icons/Weapons/SMGs/T_HUD_SMG_05_Magazine_Default_D.T_HUD_SMG_05_Magazine_Default_D'"),
        EAmmunationType::SMG, 32,
        TEXT("/Script/Engine.BlueprintGeneratedClass'/Game/Blueprint/Weapon/Casing/BP_LPSP_CASING_Small.BP_LPSP_CASING_Small_C'"),
        FVector2D(200, 350), 0.0f,
        TEXT("/Script/Engine.BlueprintGeneratedClass'/Game/Blueprint/Weapon/Projectile/SMGs/BP_LPSP_PROJ_Bullet_SMG_05.BP_LPSP_PROJ_Bullet_SMG_05_C'"),
        FVector2D(25000, 30000), FVector2D(1, 1),
        true, 1, TEXT("None")
    );
    GMagazineMap.Add(EWeaponName::SMG_05, SMG05Entry);

    // Sniper-01
    FMagazineEntry Sniper01Entry = CreateMagazineEntry(
        EWeaponName::Sniper_01,
        TEXT("/Script/Engine.StaticMesh'/Game/Assets/Weapon/Snipers/Magazine/SM_Sniper_01_Magazine_Default.SM_Sniper_01_Magazine_Default'"),
        TEXT("/Script/Engine.Texture2D'/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_01_Magazine_Default_D.T_HUD_Sniper_01_Magazine_Default_D'"),
        EAmmunationType::Sniper, 7,
        TEXT("/Script/Engine.BlueprintGeneratedClass'/Game/Blueprint/Weapon/Casing/BP_LPSP_CASING_Big.BP_LPSP_CASING_Big_C'"),
        FVector2D(200, 300), 0.0f,
        TEXT("/Script/Engine.BlueprintGeneratedClass'/Game/Blueprint/Weapon/Projectile/Snipers/BP_LPSP_PROJ_Bullet_Sniper_01.BP_LPSP_PROJ_Bullet_Sniper_01_C'"),
        FVector2D(40000, 45000), FVector2D(1, 1),
        true, 1, TEXT("None")
    );
    GMagazineMap.Add(EWeaponName::Sniper_01, Sniper01Entry);

    // Sniper-02
    FMagazineEntry Sniper02Entry = CreateMagazineEntry(
        EWeaponName::Sniper_02,
        TEXT("/Script/Engine.StaticMesh'/Game/Assets/Weapon/Snipers/Magazine/SM_Sniper_02_Magazine_Default.SM_Sniper_02_Magazine_Default'"),
        TEXT("/Script/Engine.Texture2D'/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_02_Magazine_Default_D.T_HUD_Sniper_02_Magazine_Default_D'"),
        EAmmunationType::Sniper, 9,
        TEXT("/Script/Engine.BlueprintGeneratedClass'/Game/Blueprint/Weapon/Casing/BP_LPSP_CASING_Big.BP_LPSP_CASING_Big_C'"),
        FVector2D(250, 350), 0.0f,
        TEXT("/Script/Engine.BlueprintGeneratedClass'/Game/Blueprint/Weapon/Projectile/Snipers/BP_LPSP_PROJ_Bullet_Sniper_02.BP_LPSP_PROJ_Bullet_Sniper_02_C'"),
        FVector2D(40000, 45000), FVector2D(1, 1),
        true, 1, TEXT("None")
    );
    GMagazineMap.Add(EWeaponName::Sniper_02, Sniper02Entry);

    // Sniper-02-Breach
    FMagazineEntry Sniper02BreachEntry = CreateMagazineEntry(
        EWeaponName::Sniper_02_Breach,
        TEXT("/Script/Engine.StaticMesh'/Game/Assets/Weapon/Snipers/Magazine/SM_Sniper_02_Magazine_Default.SM_Sniper_02_Magazine_Default'"),
        TEXT("/Script/Engine.Texture2D'/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_02_Magazine_Default_D.T_HUD_Sniper_02_Magazine_Default_D'"),
        EAmmunationType::Sniper, 7,
        TEXT("/Script/Engine.BlueprintGeneratedClass'/Game/Blueprint/Weapon/Casing/BP_LPSP_CASING_Big.BP_LPSP_CASING_Big_C'"),
        FVector2D(250, 350), 0.0f,
        TEXT("/Script/Engine.BlueprintGeneratedClass'/Game/Blueprint/Weapon/Projectile/Explosive/BP_LPSP_PROJ_Bullet_Explosive_Small.BP_LPSP_PROJ_Bullet_Explosive_Small_C'"),
        FVector2D(40000, 45000), FVector2D(1, 1),
        true, 1, TEXT("None")
    );
    GMagazineMap.Add(EWeaponName::Sniper_02_Breach, Sniper02BreachEntry);

    // Sniper-03
    FMagazineEntry Sniper03Entry = CreateMagazineEntry(
        EWeaponName::Sniper_03,
        TEXT("/Script/Engine.StaticMesh'/Game/Assets/Weapon/Snipers/Magazine/SM_Sniper_03_Magazine_Default.SM_Sniper_03_Magazine_Default'"),
        TEXT("/Script/Engine.Texture2D'/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_03_Magazine_Default_D.T_HUD_Sniper_03_Magazine_Default_D'"),
        EAmmunationType::Sniper, 8,
        TEXT("/Script/Engine.BlueprintGeneratedClass'/Game/Blueprint/Weapon/Casing/BP_LPSP_CASING_Big.BP_LPSP_CASING_Big_C'"),
        FVector2D(250, 350), 0.0f,
        TEXT("/Script/Engine.BlueprintGeneratedClass'/Game/Blueprint/Weapon/Projectile/Snipers/BP_LPSP_PROJ_Bullet_Sniper_03.BP_LPSP_PROJ_Bullet_Sniper_03_C'"),
        FVector2D(40000, 45000), FVector2D(1, 1),
        true, 1, TEXT("None")
    );
    GMagazineMap.Add(EWeaponName::Sniper_03, Sniper03Entry);

    // Sniper-03-Heavy
    FMagazineEntry Sniper03HeavyEntry = CreateMagazineEntry(
        EWeaponName::Sniper_03_Heavy,
        TEXT("/Script/Engine.StaticMesh'/Game/Assets/Weapon/Snipers/Magazine/SM_Sniper_02_Magazine_Default.SM_Sniper_02_Magazine_Default'"),
        TEXT("/Script/Engine.Texture2D'/Game/Assets/Icons/Weapons/Snipers/T_HUD_Sniper_03_Magazine_Default_D.T_HUD_Sniper_03_Magazine_Default_D'"),
        EAmmunationType::Sniper, 38,
        TEXT("/Script/Engine.BlueprintGeneratedClass'/Game/Blueprint/Weapon/Casing/BP_LPSP_CASING_Big.BP_LPSP_CASING_Big_C'"),
        FVector2D(250, 350), 0.0f,
        TEXT("/Script/Engine.BlueprintGeneratedClass'/Game/Blueprint/Weapon/Projectile/Snipers/BP_LPSP_PROJ_Bullet_Sniper_03.BP_LPSP_PROJ_Bullet_Sniper_03_C'"),
        FVector2D(40000, 45000), FVector2D(1, 1),
        true, 1, TEXT("None")
    );
    GMagazineMap.Add(EWeaponName::Sniper_03_Heavy, Sniper03HeavyEntry);
}

FMagazineEntry UMagazineSettingsLibrary::GetMagazineSettingsByWeaponName(EWeaponName WeaponName)
{
    InitMagazineMap();
    if (GMagazineMap.Contains(WeaponName))
    {
        return GMagazineMap[WeaponName];
    }
    return FMagazineEntry();
}

