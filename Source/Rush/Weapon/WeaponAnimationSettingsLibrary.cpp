#include "WeaponAnimationSettingsLibrary.h"
#include "Engine/Engine.h"

static TMap<EWeaponName, FWeaponAnimationSettings> GWeaponAnimationSettingsMap;

static void InitWeaponAnimationSettingsMap()
{
    if (GWeaponAnimationSettingsMap.Num() > 0) return;

    // Assault Rifle 01
    FWeaponAnimationSettings AR01Settings;
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
    // AR02 specific adjustments can be made here
    GWeaponAnimationSettingsMap.Add(EWeaponName::Assault_Rifle_02, AR02Settings);

    // Assault Rifle 03
    FWeaponAnimationSettings AR03Settings = AR01Settings; // Start with AR01 as base
    // AR03 specific adjustments can be made here
    GWeaponAnimationSettingsMap.Add(EWeaponName::Assault_Rifle_03, AR03Settings);

    // Handgun 01
    FWeaponAnimationSettings HG01Settings = AR01Settings; // Start with AR01 as base
    // Handgun specific adjustments
    HG01Settings.StandingLagMovementLocationHorizontal = FVector(1.5f, 0.0f, 0.0f);
    HG01Settings.StandingLagMovementLocationVertical = FVector(0.0f, -1.2f, 0.0f);
    HG01Settings.SpringStiffness = 0.9f;
    HG01Settings.SpringMass = 0.008f;
    GWeaponAnimationSettingsMap.Add(EWeaponName::Handgun_01, HG01Settings);

    // Handgun 02
    FWeaponAnimationSettings HG02Settings = HG01Settings;
    GWeaponAnimationSettingsMap.Add(EWeaponName::Handgun_02, HG02Settings);

    // Handgun 03
    FWeaponAnimationSettings HG03Settings = HG01Settings;
    GWeaponAnimationSettingsMap.Add(EWeaponName::Handgun_03, HG03Settings);

    // Handgun 04
    FWeaponAnimationSettings HG04Settings = HG01Settings;
    GWeaponAnimationSettingsMap.Add(EWeaponName::Handgun_04, HG04Settings);

    // SMG 01
    FWeaponAnimationSettings SMG01Settings = AR01Settings; // Start with AR01 as base
    // SMG specific adjustments
    SMG01Settings.StandingLagMovementLocationHorizontal = FVector(1.8f, 0.0f, 0.0f);
    SMG01Settings.StandingLagMovementLocationVertical = FVector(0.0f, -1.5f, 0.0f);
    SMG01Settings.SpringStiffness = 0.85f;
    SMG01Settings.SpringMass = 0.009f;
    GWeaponAnimationSettingsMap.Add(EWeaponName::SMG_01, SMG01Settings);

    // SMG 02
    FWeaponAnimationSettings SMG02Settings = SMG01Settings;
    GWeaponAnimationSettingsMap.Add(EWeaponName::SMG_02, SMG02Settings);

    // SMG 03
    FWeaponAnimationSettings SMG03Settings = SMG01Settings;
    GWeaponAnimationSettingsMap.Add(EWeaponName::SMG_03, SMG03Settings);

    // SMG 04
    FWeaponAnimationSettings SMG04Settings = SMG01Settings;
    GWeaponAnimationSettingsMap.Add(EWeaponName::SMG_04, SMG04Settings);

    // SMG 05
    FWeaponAnimationSettings SMG05Settings = SMG01Settings;
    GWeaponAnimationSettingsMap.Add(EWeaponName::SMG_05, SMG05Settings);

    // Sniper 01
    FWeaponAnimationSettings Sniper01Settings = AR01Settings; // Start with AR01 as base
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
    GWeaponAnimationSettingsMap.Add(EWeaponName::Sniper_02, Sniper02Settings);

    // Sniper 03
    FWeaponAnimationSettings Sniper03Settings = Sniper01Settings;
    GWeaponAnimationSettingsMap.Add(EWeaponName::Sniper_03, Sniper03Settings);

    // Shotgun 01
    FWeaponAnimationSettings Shotgun01Settings = AR01Settings; // Start with AR01 as base
    // Shotgun specific adjustments
    Shotgun01Settings.StandingLagMovementLocationHorizontal = FVector(2.2f, 0.0f, 0.0f);
    Shotgun01Settings.StandingLagMovementLocationVertical = FVector(0.0f, -1.8f, 0.0f);
    Shotgun01Settings.SpringStiffness = 0.75f;
    Shotgun01Settings.SpringMass = 0.011f;
    GWeaponAnimationSettingsMap.Add(EWeaponName::Shotgun_01, Shotgun01Settings);

    // Rocket Launcher 01
    FWeaponAnimationSettings RL01Settings = AR01Settings; // Start with AR01 as base
    // Rocket Launcher specific adjustments
    RL01Settings.StandingLagMovementLocationHorizontal = FVector(3.0f, 0.0f, 0.0f);
    RL01Settings.StandingLagMovementLocationVertical = FVector(0.0f, -2.5f, 0.0f);
    RL01Settings.SpringStiffness = 0.6f;
    RL01Settings.SpringMass = 0.015f;
    GWeaponAnimationSettingsMap.Add(EWeaponName::Rocket_Launcher_01, RL01Settings);

    // Grenade Launcher 01
    FWeaponAnimationSettings GL01Settings = AR01Settings; // Start with AR01 as base
    // Grenade Launcher specific adjustments
    GL01Settings.StandingLagMovementLocationHorizontal = FVector(2.8f, 0.0f, 0.0f);
    GL01Settings.StandingLagMovementLocationVertical = FVector(0.0f, -2.2f, 0.0f);
    GL01Settings.SpringStiffness = 0.65f;
    GL01Settings.SpringMass = 0.013f;
    GWeaponAnimationSettingsMap.Add(EWeaponName::Grenade_Launcher_01, GL01Settings);

    // Add all variant weapons with base weapon settings
    // Assault Rifle variants
    GWeaponAnimationSettingsMap.Add(EWeaponName::Assault_Rifle_01_Evil, AR01Settings);
    GWeaponAnimationSettingsMap.Add(EWeaponName::Assault_Rifle_01_Tactical, AR01Settings);
    GWeaponAnimationSettingsMap.Add(EWeaponName::Assault_Rifle_01_Elite, AR01Settings);
    GWeaponAnimationSettingsMap.Add(EWeaponName::Assault_Rifle_02_01, AR02Settings);
    GWeaponAnimationSettingsMap.Add(EWeaponName::Assault_Rifle_02_Elite, AR02Settings);
    GWeaponAnimationSettingsMap.Add(EWeaponName::Assault_Rifle_02_Evil, AR02Settings);
    GWeaponAnimationSettingsMap.Add(EWeaponName::Assault_Rifle_02_Forest, AR02Settings);
    GWeaponAnimationSettingsMap.Add(EWeaponName::Assault_Rifle_02_Skulls, AR02Settings);
    GWeaponAnimationSettingsMap.Add(EWeaponName::Assault_Rifle_03_Elite, AR03Settings);
    GWeaponAnimationSettingsMap.Add(EWeaponName::Assault_Rifle_03_SciFi, AR03Settings);
    GWeaponAnimationSettingsMap.Add(EWeaponName::Assault_Rifle_03_Tactical, AR03Settings);

    // Handgun variants
    GWeaponAnimationSettingsMap.Add(EWeaponName::Handgun_01_Neon, HG01Settings);
    GWeaponAnimationSettingsMap.Add(EWeaponName::Handgun_01_Tactical, HG01Settings);
    GWeaponAnimationSettingsMap.Add(EWeaponName::Handgun_02_Stealth, HG02Settings);
    GWeaponAnimationSettingsMap.Add(EWeaponName::Handgun_02_Tactical, HG02Settings);
    GWeaponAnimationSettingsMap.Add(EWeaponName::Handgun_03_Skulls, HG03Settings);
    GWeaponAnimationSettingsMap.Add(EWeaponName::Handgun_03_Tactical, HG03Settings);
    GWeaponAnimationSettingsMap.Add(EWeaponName::Handgun_04_Tactical, HG04Settings);
    GWeaponAnimationSettingsMap.Add(EWeaponName::Handgun_04_Venomous, HG04Settings);

    // SMG variants
    GWeaponAnimationSettingsMap.Add(EWeaponName::SMG_01_Citrus, SMG01Settings);
    GWeaponAnimationSettingsMap.Add(EWeaponName::SMG_01_Tactical, SMG01Settings);
    GWeaponAnimationSettingsMap.Add(EWeaponName::SMG_02_Citrus, SMG02Settings);
    GWeaponAnimationSettingsMap.Add(EWeaponName::SMG_02_Tactical, SMG02Settings);
    GWeaponAnimationSettingsMap.Add(EWeaponName::SMG_03_Tactical, SMG03Settings);
    GWeaponAnimationSettingsMap.Add(EWeaponName::SMG_03_Evil, SMG03Settings);
    GWeaponAnimationSettingsMap.Add(EWeaponName::SMG_04_Tactical, SMG04Settings);
    GWeaponAnimationSettingsMap.Add(EWeaponName::SMG_04_Modern, SMG04Settings);
    GWeaponAnimationSettingsMap.Add(EWeaponName::SMG_05_Armored, SMG05Settings);
    GWeaponAnimationSettingsMap.Add(EWeaponName::SMG_05_Tactical, SMG05Settings);

    // Sniper variants
    GWeaponAnimationSettingsMap.Add(EWeaponName::Sniper_01_Hitman, Sniper01Settings);
    GWeaponAnimationSettingsMap.Add(EWeaponName::Sniper_01_Tactical, Sniper01Settings);
    GWeaponAnimationSettingsMap.Add(EWeaponName::Sniper_02_Breach, Sniper02Settings);
    GWeaponAnimationSettingsMap.Add(EWeaponName::Sniper_02_Tactical, Sniper02Settings);
    GWeaponAnimationSettingsMap.Add(EWeaponName::Sniper_03_Tactical, Sniper03Settings);
    GWeaponAnimationSettingsMap.Add(EWeaponName::Sniper_03_Heavy, Sniper03Settings);

    // Other weapon variants
    GWeaponAnimationSettingsMap.Add(EWeaponName::Shotgun_01_Tactical, Shotgun01Settings);
    GWeaponAnimationSettingsMap.Add(EWeaponName::Shotgun_01_Tech, Shotgun01Settings);
    GWeaponAnimationSettingsMap.Add(EWeaponName::Rocket_Launcher_01_Homing, RL01Settings);
    GWeaponAnimationSettingsMap.Add(EWeaponName::Grenade_Launcher_01_AntiTank, GL01Settings);
    GWeaponAnimationSettingsMap.Add(EWeaponName::Grenade_Launcher_01_Citrus, GL01Settings);
    GWeaponAnimationSettingsMap.Add(EWeaponName::Grenade_Launcher_01_Tactical, GL01Settings);
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
