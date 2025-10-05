#include "WeaponAnimationSettingsLibrary.h"
#include "Engine/Engine.h"

static TMap<EWeaponName, FWeaponAnimationSettings> GWeaponAnimationSettingsMap;

static void InitWeaponAnimationSettingsMap()
{
    if (GWeaponAnimationSettingsMap.Num() > 0) return;

    // Assault Rifle 01
    FWeaponAnimationSettings AR01Settings;
    AR01Settings.Name = EWeaponName::Assault_Rifle_01;
    AR01Settings.BlendIn = 0.4f;
    AR01Settings.BlendOut = 0.3f;
    AR01Settings.TimedValue = 0.25f;
    AR01Settings.PlayRateBreathing = 1.0f;
    AR01Settings.PlayRateWalking = 1.0f;
    AR01Settings.PlayRateRunning = 1.0f;
    AR01Settings.PlayRateTurning = 1.0f;
    AR01Settings.LagMovementInterpSpeed = 10.0f;
    AR01Settings.LookOffsetMultiplierLocation = FVector(-0.1f, 0.0f, 0.1f);
    AR01Settings.LookOffsetMultiplierRotation = FVector(0.0f, -0.7f, 0.0f);
    AR01Settings.StandingOffset = FTransform::Identity;
    AR01Settings.StandingLagMovementLocationHorizontal = FVector(2.0f, 0.0f, 0.0f);
    AR01Settings.StandingLagMovementLocationVertical = FVector(0.0f, -1.75f, 0.0f);
    AR01Settings.StandingLagMovementRotationHorizontal = FVector(0.0f, 0.0f, 1.0f);
    AR01Settings.StandingLagMovementRotationVertical = FVector(1.2f, 0.0f, -0.5f);
    AR01Settings.StandingLagLookLocationHorizontal = FVector(3.0f, 0.0f, 0.0f);
    AR01Settings.StandingLagLookLocationVertical = FVector(0.0f, 0.0f, 1.0f);
    AR01Settings.StandingLagLookRotationHorizontal = FVector(0.0f, 3.0f, 0.25f);
    AR01Settings.StandingLagLookRotationVertical = FVector(0.25f, 0.0f, 0.0f);
    AR01Settings.SpringStiffness = 0.8f;
    AR01Settings.SpringCriticalDampingFactor = 0.5f;
    AR01Settings.SpringMass = 0.01f;
    AR01Settings.bOverrideTPStandingLag = false;
    AR01Settings.TPStandingLagMovementLocationHorizontal = FVector::ZeroVector;
    AR01Settings.TPStandingLagMovementLocationVertical = FVector::ZeroVector;
    AR01Settings.TPStandingLagMovementRotationHorizontal = FVector::ZeroVector;
    AR01Settings.TPStandingLagMovementRotationVertical = FVector::ZeroVector;
    AR01Settings.TPStandingLagLookLocationHorizontal = FVector::ZeroVector;
    AR01Settings.TPStandingLagLookLocationVertical = FVector::ZeroVector;
    AR01Settings.TPStandingLagLookRotationHorizontal = FVector::ZeroVector;
    AR01Settings.TPStandingLagLookRotationVertical = FVector::ZeroVector;
    AR01Settings.TPSpringStiffness = 0.4f;
    AR01Settings.TPSpringCriticalDampingFactor = 0.5f;
    AR01Settings.TPSpringMass = 0.006f;
    AR01Settings.StandingLagLocationControllerMultiplier = 1.0f;
    AR01Settings.AimingOffset = FTransform::Identity;
    AR01Settings.AimingLagMovementLocationHorizontal = FVector(0.1f, 0.0f, 0.0f);
    AR01Settings.AimingLagMovementLocationVertical = FVector::ZeroVector;
    AR01Settings.AimingLagMovementRotationHorizontal = FVector(0.0f, 0.1f, 0.0f);
    AR01Settings.AimingLagMovementRotationVertical = FVector::ZeroVector;
    AR01Settings.AimingLagLookLocationHorizontal = FVector(0.3f, 0.0f, 0.0f);
    AR01Settings.AimingLagLookLocationVertical = FVector(0.0f, 0.0f, 0.15f);
    AR01Settings.AimingLagLookRotationHorizontal = FVector(0.0f, 1.3f, 0.3f);
    AR01Settings.AimingLagLookRotationVertical = FVector::ZeroVector;
    AR01Settings.AimingSpringStiffness = 0.9f;
    AR01Settings.AimingSpringCriticalDampingFactor = 0.5f;
    AR01Settings.AimingSpringMass = 0.009f;
    
    GWeaponAnimationSettingsMap.Add(EWeaponName::Assault_Rifle_01, AR01Settings);

    // Assault Rifle 02
    FWeaponAnimationSettings AR02Settings = AR01Settings; // Start with AR01 as base
    AR02Settings.Name = EWeaponName::Assault_Rifle_02;
    // AR02 specific adjustments can be made here
    GWeaponAnimationSettingsMap.Add(EWeaponName::Assault_Rifle_02, AR02Settings);

    // Assault Rifle 03
    FWeaponAnimationSettings AR03Settings = AR01Settings; // Start with AR01 as base
    AR03Settings.Name = EWeaponName::Assault_Rifle_03;
    // AR03 specific adjustments can be made here
    GWeaponAnimationSettingsMap.Add(EWeaponName::Assault_Rifle_03, AR03Settings);

    // Handgun 01
    FWeaponAnimationSettings HG01Settings = AR01Settings; // Start with AR01 as base
    HG01Settings.Name = EWeaponName::Handgun_01;
    // Handgun specific adjustments
    HG01Settings.StandingLagMovementLocationHorizontal = FVector(1.5f, 0.0f, 0.0f);
    HG01Settings.StandingLagMovementLocationVertical = FVector(0.0f, -1.2f, 0.0f);
    HG01Settings.SpringStiffness = 0.9f;
    HG01Settings.SpringMass = 0.008f;
    GWeaponAnimationSettingsMap.Add(EWeaponName::Handgun_01, HG01Settings);

    // Handgun 02
    FWeaponAnimationSettings HG02Settings = HG01Settings;
    HG02Settings.Name = EWeaponName::Handgun_02;
    GWeaponAnimationSettingsMap.Add(EWeaponName::Handgun_02, HG02Settings);

    // Handgun 03
    FWeaponAnimationSettings HG03Settings = HG01Settings;
    HG03Settings.Name = EWeaponName::Handgun_03;
    GWeaponAnimationSettingsMap.Add(EWeaponName::Handgun_03, HG03Settings);

    // Handgun 04
    FWeaponAnimationSettings HG04Settings = HG01Settings;
    HG04Settings.Name = EWeaponName::Handgun_04;
    GWeaponAnimationSettingsMap.Add(EWeaponName::Handgun_04, HG04Settings);

    // SMG 01
    FWeaponAnimationSettings SMG01Settings = AR01Settings; // Start with AR01 as base
    SMG01Settings.Name = EWeaponName::SMG_01;
    // SMG specific adjustments
    SMG01Settings.StandingLagMovementLocationHorizontal = FVector(1.8f, 0.0f, 0.0f);
    SMG01Settings.StandingLagMovementLocationVertical = FVector(0.0f, -1.5f, 0.0f);
    SMG01Settings.SpringStiffness = 0.85f;
    SMG01Settings.SpringMass = 0.009f;
    GWeaponAnimationSettingsMap.Add(EWeaponName::SMG_01, SMG01Settings);

    // SMG 02
    FWeaponAnimationSettings SMG02Settings = SMG01Settings;
    SMG02Settings.Name = EWeaponName::SMG_02;
    GWeaponAnimationSettingsMap.Add(EWeaponName::SMG_02, SMG02Settings);

    // SMG 03
    FWeaponAnimationSettings SMG03Settings = SMG01Settings;
    SMG03Settings.Name = EWeaponName::SMG_03;
    GWeaponAnimationSettingsMap.Add(EWeaponName::SMG_03, SMG03Settings);

    // SMG 04
    FWeaponAnimationSettings SMG04Settings = SMG01Settings;
    SMG04Settings.Name = EWeaponName::SMG_04;
    GWeaponAnimationSettingsMap.Add(EWeaponName::SMG_04, SMG04Settings);

    // SMG 05
    FWeaponAnimationSettings SMG05Settings = SMG01Settings;
    SMG05Settings.Name = EWeaponName::SMG_05;
    GWeaponAnimationSettingsMap.Add(EWeaponName::SMG_05, SMG05Settings);

    // Sniper 01
    FWeaponAnimationSettings Sniper01Settings = AR01Settings; // Start with AR01 as base
    Sniper01Settings.Name = EWeaponName::Sniper_01;
    // Sniper specific adjustments
    Sniper01Settings.StandingLagMovementLocationHorizontal = FVector(2.5f, 0.0f, 0.0f);
    Sniper01Settings.StandingLagMovementLocationVertical = FVector(0.0f, -2.0f, 0.0f);
    Sniper01Settings.SpringStiffness = 0.7f;
    Sniper01Settings.SpringMass = 0.012f;
    Sniper01Settings.AimingSpringStiffness = 0.8f;
    Sniper01Settings.AimingSpringMass = 0.011f;
    GWeaponAnimationSettingsMap.Add(EWeaponName::Sniper_01, Sniper01Settings);

    // Sniper 02
    FWeaponAnimationSettings Sniper02Settings = Sniper01Settings;
    Sniper02Settings.Name = EWeaponName::Sniper_02;
    GWeaponAnimationSettingsMap.Add(EWeaponName::Sniper_02, Sniper02Settings);

    // Sniper 03
    FWeaponAnimationSettings Sniper03Settings = Sniper01Settings;
    Sniper03Settings.Name = EWeaponName::Sniper_03;
    GWeaponAnimationSettingsMap.Add(EWeaponName::Sniper_03, Sniper03Settings);

    // Shotgun 01
    FWeaponAnimationSettings Shotgun01Settings = AR01Settings; // Start with AR01 as base
    Shotgun01Settings.Name = EWeaponName::Shotgun_01;
    // Shotgun specific adjustments
    Shotgun01Settings.StandingLagMovementLocationHorizontal = FVector(2.2f, 0.0f, 0.0f);
    Shotgun01Settings.StandingLagMovementLocationVertical = FVector(0.0f, -1.8f, 0.0f);
    Shotgun01Settings.SpringStiffness = 0.75f;
    Shotgun01Settings.SpringMass = 0.011f;
    GWeaponAnimationSettingsMap.Add(EWeaponName::Shotgun_01, Shotgun01Settings);

    // Rocket Launcher 01
    FWeaponAnimationSettings RL01Settings = AR01Settings; // Start with AR01 as base
    RL01Settings.Name = EWeaponName::Rocket_Launcher_01;
    // Rocket Launcher specific adjustments
    RL01Settings.StandingLagMovementLocationHorizontal = FVector(3.0f, 0.0f, 0.0f);
    RL01Settings.StandingLagMovementLocationVertical = FVector(0.0f, -2.5f, 0.0f);
    RL01Settings.SpringStiffness = 0.6f;
    RL01Settings.SpringMass = 0.015f;
    GWeaponAnimationSettingsMap.Add(EWeaponName::Rocket_Launcher_01, RL01Settings);

    // Grenade Launcher 01
    FWeaponAnimationSettings GL01Settings = AR01Settings; // Start with AR01 as base
    GL01Settings.Name = EWeaponName::Grenade_Launcher_01;
    // Grenade Launcher specific adjustments
    GL01Settings.StandingLagMovementLocationHorizontal = FVector(2.8f, 0.0f, 0.0f);
    GL01Settings.StandingLagMovementLocationVertical = FVector(0.0f, -2.2f, 0.0f);
    GL01Settings.SpringStiffness = 0.65f;
    GL01Settings.SpringMass = 0.013f;
    GWeaponAnimationSettingsMap.Add(EWeaponName::Grenade_Launcher_01, GL01Settings);

    // Add all variant weapons with base weapon settings
    // Assault Rifle variants
    FWeaponAnimationSettings AR01EvilSettings = AR01Settings;
    AR01EvilSettings.Name = EWeaponName::Assault_Rifle_01_Evil;
    GWeaponAnimationSettingsMap.Add(EWeaponName::Assault_Rifle_01_Evil, AR01EvilSettings);
    
    FWeaponAnimationSettings AR01TacticalSettings = AR01Settings;
    AR01TacticalSettings.Name = EWeaponName::Assault_Rifle_01_Tactical;
    GWeaponAnimationSettingsMap.Add(EWeaponName::Assault_Rifle_01_Tactical, AR01TacticalSettings);
    
    FWeaponAnimationSettings AR01EliteSettings = AR01Settings;
    AR01EliteSettings.Name = EWeaponName::Assault_Rifle_01_Elite;
    GWeaponAnimationSettingsMap.Add(EWeaponName::Assault_Rifle_01_Elite, AR01EliteSettings);
    
    FWeaponAnimationSettings AR0201Settings = AR02Settings;
    AR0201Settings.Name = EWeaponName::Assault_Rifle_02_01;
    GWeaponAnimationSettingsMap.Add(EWeaponName::Assault_Rifle_02_01, AR0201Settings);
    
    FWeaponAnimationSettings AR02EliteSettings = AR02Settings;
    AR02EliteSettings.Name = EWeaponName::Assault_Rifle_02_Elite;
    GWeaponAnimationSettingsMap.Add(EWeaponName::Assault_Rifle_02_Elite, AR02EliteSettings);
    
    FWeaponAnimationSettings AR02EvilSettings = AR02Settings;
    AR02EvilSettings.Name = EWeaponName::Assault_Rifle_02_Evil;
    GWeaponAnimationSettingsMap.Add(EWeaponName::Assault_Rifle_02_Evil, AR02EvilSettings);
    
    FWeaponAnimationSettings AR02ForestSettings = AR02Settings;
    AR02ForestSettings.Name = EWeaponName::Assault_Rifle_02_Forest;
    GWeaponAnimationSettingsMap.Add(EWeaponName::Assault_Rifle_02_Forest, AR02ForestSettings);
    
    FWeaponAnimationSettings AR02SkullsSettings = AR02Settings;
    AR02SkullsSettings.Name = EWeaponName::Assault_Rifle_02_Skulls;
    GWeaponAnimationSettingsMap.Add(EWeaponName::Assault_Rifle_02_Skulls, AR02SkullsSettings);
    
    FWeaponAnimationSettings AR03EliteSettings = AR03Settings;
    AR03EliteSettings.Name = EWeaponName::Assault_Rifle_03_Elite;
    GWeaponAnimationSettingsMap.Add(EWeaponName::Assault_Rifle_03_Elite, AR03EliteSettings);
    
    FWeaponAnimationSettings AR03SciFiSettings = AR03Settings;
    AR03SciFiSettings.Name = EWeaponName::Assault_Rifle_03_SciFi;
    GWeaponAnimationSettingsMap.Add(EWeaponName::Assault_Rifle_03_SciFi, AR03SciFiSettings);
    
    FWeaponAnimationSettings AR03TacticalSettings = AR03Settings;
    AR03TacticalSettings.Name = EWeaponName::Assault_Rifle_03_Tactical;
    GWeaponAnimationSettingsMap.Add(EWeaponName::Assault_Rifle_03_Tactical, AR03TacticalSettings);

    // Handgun variants
    FWeaponAnimationSettings HG01NeonSettings = HG01Settings;
    HG01NeonSettings.Name = EWeaponName::Handgun_01_Neon;
    GWeaponAnimationSettingsMap.Add(EWeaponName::Handgun_01_Neon, HG01NeonSettings);
    
    FWeaponAnimationSettings HG01TacticalSettings = HG01Settings;
    HG01TacticalSettings.Name = EWeaponName::Handgun_01_Tactical;
    GWeaponAnimationSettingsMap.Add(EWeaponName::Handgun_01_Tactical, HG01TacticalSettings);
    
    FWeaponAnimationSettings HG02StealthSettings = HG02Settings;
    HG02StealthSettings.Name = EWeaponName::Handgun_02_Stealth;
    GWeaponAnimationSettingsMap.Add(EWeaponName::Handgun_02_Stealth, HG02StealthSettings);
    
    FWeaponAnimationSettings HG02TacticalSettings = HG02Settings;
    HG02TacticalSettings.Name = EWeaponName::Handgun_02_Tactical;
    GWeaponAnimationSettingsMap.Add(EWeaponName::Handgun_02_Tactical, HG02TacticalSettings);
    
    FWeaponAnimationSettings HG03SkullsSettings = HG03Settings;
    HG03SkullsSettings.Name = EWeaponName::Handgun_03_Skulls;
    GWeaponAnimationSettingsMap.Add(EWeaponName::Handgun_03_Skulls, HG03SkullsSettings);
    
    FWeaponAnimationSettings HG03TacticalSettings = HG03Settings;
    HG03TacticalSettings.Name = EWeaponName::Handgun_03_Tactical;
    GWeaponAnimationSettingsMap.Add(EWeaponName::Handgun_03_Tactical, HG03TacticalSettings);
    
    FWeaponAnimationSettings HG04TacticalSettings = HG04Settings;
    HG04TacticalSettings.Name = EWeaponName::Handgun_04_Tactical;
    GWeaponAnimationSettingsMap.Add(EWeaponName::Handgun_04_Tactical, HG04TacticalSettings);
    
    FWeaponAnimationSettings HG04VenomousSettings = HG04Settings;
    HG04VenomousSettings.Name = EWeaponName::Handgun_04_Venomous;
    GWeaponAnimationSettingsMap.Add(EWeaponName::Handgun_04_Venomous, HG04VenomousSettings);

    // SMG variants
    FWeaponAnimationSettings SMG01CitrusSettings = SMG01Settings;
    SMG01CitrusSettings.Name = EWeaponName::SMG_01_Citrus;
    GWeaponAnimationSettingsMap.Add(EWeaponName::SMG_01_Citrus, SMG01CitrusSettings);
    
    FWeaponAnimationSettings SMG01TacticalSettings = SMG01Settings;
    SMG01TacticalSettings.Name = EWeaponName::SMG_01_Tactical;
    GWeaponAnimationSettingsMap.Add(EWeaponName::SMG_01_Tactical, SMG01TacticalSettings);
    
    FWeaponAnimationSettings SMG02CitrusSettings = SMG02Settings;
    SMG02CitrusSettings.Name = EWeaponName::SMG_02_Citrus;
    GWeaponAnimationSettingsMap.Add(EWeaponName::SMG_02_Citrus, SMG02CitrusSettings);
    
    FWeaponAnimationSettings SMG02TacticalSettings = SMG02Settings;
    SMG02TacticalSettings.Name = EWeaponName::SMG_02_Tactical;
    GWeaponAnimationSettingsMap.Add(EWeaponName::SMG_02_Tactical, SMG02TacticalSettings);
    
    FWeaponAnimationSettings SMG03TacticalSettings = SMG03Settings;
    SMG03TacticalSettings.Name = EWeaponName::SMG_03_Tactical;
    GWeaponAnimationSettingsMap.Add(EWeaponName::SMG_03_Tactical, SMG03TacticalSettings);
    
    FWeaponAnimationSettings SMG03EvilSettings = SMG03Settings;
    SMG03EvilSettings.Name = EWeaponName::SMG_03_Evil;
    GWeaponAnimationSettingsMap.Add(EWeaponName::SMG_03_Evil, SMG03EvilSettings);
    
    FWeaponAnimationSettings SMG04TacticalSettings = SMG04Settings;
    SMG04TacticalSettings.Name = EWeaponName::SMG_04_Tactical;
    GWeaponAnimationSettingsMap.Add(EWeaponName::SMG_04_Tactical, SMG04TacticalSettings);
    
    FWeaponAnimationSettings SMG04ModernSettings = SMG04Settings;
    SMG04ModernSettings.Name = EWeaponName::SMG_04_Modern;
    GWeaponAnimationSettingsMap.Add(EWeaponName::SMG_04_Modern, SMG04ModernSettings);
    
    FWeaponAnimationSettings SMG05ArmoredSettings = SMG05Settings;
    SMG05ArmoredSettings.Name = EWeaponName::SMG_05_Armored;
    GWeaponAnimationSettingsMap.Add(EWeaponName::SMG_05_Armored, SMG05ArmoredSettings);
    
    FWeaponAnimationSettings SMG05TacticalSettings = SMG05Settings;
    SMG05TacticalSettings.Name = EWeaponName::SMG_05_Tactical;
    GWeaponAnimationSettingsMap.Add(EWeaponName::SMG_05_Tactical, SMG05TacticalSettings);

    // Sniper variants
    FWeaponAnimationSettings Sniper01HitmanSettings = Sniper01Settings;
    Sniper01HitmanSettings.Name = EWeaponName::Sniper_01_Hitman;
    GWeaponAnimationSettingsMap.Add(EWeaponName::Sniper_01_Hitman, Sniper01HitmanSettings);
    
    FWeaponAnimationSettings Sniper01TacticalSettings = Sniper01Settings;
    Sniper01TacticalSettings.Name = EWeaponName::Sniper_01_Tactical;
    GWeaponAnimationSettingsMap.Add(EWeaponName::Sniper_01_Tactical, Sniper01TacticalSettings);
    
    FWeaponAnimationSettings Sniper02BreachSettings = Sniper02Settings;
    Sniper02BreachSettings.Name = EWeaponName::Sniper_02_Breach;
    GWeaponAnimationSettingsMap.Add(EWeaponName::Sniper_02_Breach, Sniper02BreachSettings);
    
    FWeaponAnimationSettings Sniper02TacticalSettings = Sniper02Settings;
    Sniper02TacticalSettings.Name = EWeaponName::Sniper_02_Tactical;
    GWeaponAnimationSettingsMap.Add(EWeaponName::Sniper_02_Tactical, Sniper02TacticalSettings);
    
    FWeaponAnimationSettings Sniper03TacticalSettings = Sniper03Settings;
    Sniper03TacticalSettings.Name = EWeaponName::Sniper_03_Tactical;
    GWeaponAnimationSettingsMap.Add(EWeaponName::Sniper_03_Tactical, Sniper03TacticalSettings);
    
    FWeaponAnimationSettings Sniper03HeavySettings = Sniper03Settings;
    Sniper03HeavySettings.Name = EWeaponName::Sniper_03_Heavy;
    GWeaponAnimationSettingsMap.Add(EWeaponName::Sniper_03_Heavy, Sniper03HeavySettings);

    // Other weapon variants
    FWeaponAnimationSettings Shotgun01TacticalSettings = Shotgun01Settings;
    Shotgun01TacticalSettings.Name = EWeaponName::Shotgun_01_Tactical;
    GWeaponAnimationSettingsMap.Add(EWeaponName::Shotgun_01_Tactical, Shotgun01TacticalSettings);
    
    FWeaponAnimationSettings Shotgun01TechSettings = Shotgun01Settings;
    Shotgun01TechSettings.Name = EWeaponName::Shotgun_01_Tech;
    GWeaponAnimationSettingsMap.Add(EWeaponName::Shotgun_01_Tech, Shotgun01TechSettings);
    
    FWeaponAnimationSettings RL01HomingSettings = RL01Settings;
    RL01HomingSettings.Name = EWeaponName::Rocket_Launcher_01_Homing;
    GWeaponAnimationSettingsMap.Add(EWeaponName::Rocket_Launcher_01_Homing, RL01HomingSettings);
    
    FWeaponAnimationSettings GL01AntiTankSettings = GL01Settings;
    GL01AntiTankSettings.Name = EWeaponName::Grenade_Launcher_01_AntiTank;
    GWeaponAnimationSettingsMap.Add(EWeaponName::Grenade_Launcher_01_AntiTank, GL01AntiTankSettings);
    
    FWeaponAnimationSettings GL01CitrusSettings = GL01Settings;
    GL01CitrusSettings.Name = EWeaponName::Grenade_Launcher_01_Citrus;
    GWeaponAnimationSettingsMap.Add(EWeaponName::Grenade_Launcher_01_Citrus, GL01CitrusSettings);
    
    FWeaponAnimationSettings GL01TacticalSettings = GL01Settings;
    GL01TacticalSettings.Name = EWeaponName::Grenade_Launcher_01_Tactical;
    GWeaponAnimationSettingsMap.Add(EWeaponName::Grenade_Launcher_01_Tactical, GL01TacticalSettings);
}

FWeaponAnimationSettings UWeaponAnimationSettingsLibrary::GetWeaponAnimationSettingsByName(EWeaponName WeaponName)
{
    InitWeaponAnimationSettingsMap();
    if (GWeaponAnimationSettingsMap.Contains(WeaponName))
    {
        return GWeaponAnimationSettingsMap[WeaponName];
    }
    return FWeaponAnimationSettings(); // Return default settings if not found
}

TArray<TEnumAsByte<EWeaponName>> UWeaponAnimationSettingsLibrary::GetAllSupportedWeaponNames()
{
    InitWeaponAnimationSettingsMap();
    TArray<EWeaponName> SupportedWeapons;
    GWeaponAnimationSettingsMap.GetKeys(SupportedWeapons);
    
    TArray<TEnumAsByte<EWeaponName>> Result;
    for (const EWeaponName& WeaponName : SupportedWeapons)
    {
        Result.Add(TEnumAsByte<EWeaponName>(WeaponName));
    }
    return Result;
}

bool UWeaponAnimationSettingsLibrary::IsWeaponSupported(EWeaponName WeaponName)
{
    InitWeaponAnimationSettingsMap();
    return GWeaponAnimationSettingsMap.Contains(WeaponName);
}
