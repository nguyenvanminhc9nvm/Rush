#include "WeaponMovementSettingsLibrary.h"
#include "Engine/Engine.h"

static TMap<EWeaponMovementName, FWeaponMovementSettings> GWeaponMovementMap;

static void InitWeaponMovementMap()
{
    if (GWeaponMovementMap.Num() > 0) return;

    // Helper function to create WeaponSpeed
    auto CreateWeaponSpeed = [](float MaxSpeed, float FootstepDistance, float SyncedAnimationSpeed) -> FWeaponSpeed
    {
        FWeaponSpeed Speed;
        Speed.MaxSpeed = MaxSpeed;
        Speed.FootstepDistance = FootstepDistance;
        Speed.SyncedAnimationSpeed = SyncedAnimationSpeed;
        return Speed;
    };

    // Assault Rifle Movement
    FWeaponMovementSettings AssaultRifleMovement;
    AssaultRifleMovement.Name = TEXT("Assault-Rifle");
    AssaultRifleMovement.SpeedWalk = CreateWeaponSpeed(440.0f, 150.0f, 440.0f);
    AssaultRifleMovement.SpeedAim = CreateWeaponSpeed(350.0f, 100.0f, 350.0f);
    AssaultRifleMovement.SpeedRun = CreateWeaponSpeed(700.0f, 200.0f, 700.0f);
    AssaultRifleMovement.SpeedCrouch = CreateWeaponSpeed(300.0f, 100.0f, 300.0f);
    AssaultRifleMovement.SpeedMultiplierShooting = CreateWeaponSpeed(0.7f, 0.7f, 0.0f);
    AssaultRifleMovement.SpeedRunFast = CreateWeaponSpeed(900.0f, 320.0f, 800.0f);
    AssaultRifleMovement.AirControl = 0.35f;
    AssaultRifleMovement.JumpForce = 450.0f;
    AssaultRifleMovement.JumpMaxHoldTime = 0.15f;
    AssaultRifleMovement.SpeedMultiplierFiringRevertAddedDelay = 0.05f;
    GWeaponMovementMap.Add(EWeaponMovementName::Assault_Rifle_Movement, AssaultRifleMovement);

    // Assault Rifle Jetpack Movement
    FWeaponMovementSettings AssaultRifleJetpackMovement;
    AssaultRifleJetpackMovement.Name = TEXT("Assault-Rifle-Jetpack");
    AssaultRifleJetpackMovement.SpeedWalk = CreateWeaponSpeed(460.0f, 150.0f, 440.0f);
    AssaultRifleJetpackMovement.SpeedAim = CreateWeaponSpeed(402.5f, 100.0f, 350.0f);
    AssaultRifleJetpackMovement.SpeedRun = CreateWeaponSpeed(805.0f, 200.0f, 700.0f);
    AssaultRifleJetpackMovement.SpeedCrouch = CreateWeaponSpeed(345.0f, 100.0f, 300.0f);
    AssaultRifleJetpackMovement.SpeedMultiplierShooting = CreateWeaponSpeed(0.7f, 0.7f, 0.0f);
    AssaultRifleJetpackMovement.SpeedRunFast = CreateWeaponSpeed(900.0f, 320.0f, 900.0f);
    AssaultRifleJetpackMovement.AirControl = 0.65f;
    AssaultRifleJetpackMovement.JumpForce = 1500.0f;
    AssaultRifleJetpackMovement.JumpMaxHoldTime = 0.08f;
    AssaultRifleJetpackMovement.SpeedMultiplierFiringRevertAddedDelay = 0.05f;
    GWeaponMovementMap.Add(EWeaponMovementName::Assault_Rifle_Jetpack_Movement, AssaultRifleJetpackMovement);

    // Handgun Movement
    FWeaponMovementSettings HandgunMovement;
    HandgunMovement.Name = TEXT("Handgun");
    HandgunMovement.SpeedWalk = CreateWeaponSpeed(460.0f, 150.0f, 440.0f);
    HandgunMovement.SpeedAim = CreateWeaponSpeed(402.5f, 100.0f, 350.0f);
    HandgunMovement.SpeedRun = CreateWeaponSpeed(805.0f, 200.0f, 700.0f);
    HandgunMovement.SpeedCrouch = CreateWeaponSpeed(345.0f, 100.0f, 300.0f);
    HandgunMovement.SpeedMultiplierShooting = CreateWeaponSpeed(0.7f, 0.7f, 0.0f);
    HandgunMovement.SpeedRunFast = CreateWeaponSpeed(900.0f, 320.0f, 900.0f);
    HandgunMovement.AirControl = 0.35f;
    HandgunMovement.JumpForce = 450.0f;
    HandgunMovement.JumpMaxHoldTime = 0.15f;
    HandgunMovement.SpeedMultiplierFiringRevertAddedDelay = 0.05f;
    GWeaponMovementMap.Add(EWeaponMovementName::Handgun_Movement, HandgunMovement);

    // Launcher Movement
    FWeaponMovementSettings LauncherMovement;
    LauncherMovement.Name = TEXT("Launcher");
    LauncherMovement.SpeedWalk = CreateWeaponSpeed(440.0f, 150.0f, 440.0f);
    LauncherMovement.SpeedAim = CreateWeaponSpeed(350.0f, 100.0f, 350.0f);
    LauncherMovement.SpeedRun = CreateWeaponSpeed(700.0f, 200.0f, 700.0f);
    LauncherMovement.SpeedCrouch = CreateWeaponSpeed(300.0f, 100.0f, 300.0f);
    LauncherMovement.SpeedMultiplierShooting = CreateWeaponSpeed(0.7f, 0.7f, 0.0f);
    LauncherMovement.SpeedRunFast = CreateWeaponSpeed(900.0f, 320.0f, 900.0f);
    LauncherMovement.AirControl = 0.35f;
    LauncherMovement.JumpForce = 450.0f;
    LauncherMovement.JumpMaxHoldTime = 0.15f;
    LauncherMovement.SpeedMultiplierFiringRevertAddedDelay = 0.05f;
    GWeaponMovementMap.Add(EWeaponMovementName::Launcher_Movement, LauncherMovement);

    // Launcher Heavy Movement
    FWeaponMovementSettings LauncherHeavyMovement;
    LauncherHeavyMovement.Name = TEXT("Launcher-Heavy");
    LauncherHeavyMovement.SpeedWalk = CreateWeaponSpeed(360.0f, 150.0f, 440.0f);
    LauncherHeavyMovement.SpeedAim = CreateWeaponSpeed(315.0f, 100.0f, 350.0f);
    LauncherHeavyMovement.SpeedRun = CreateWeaponSpeed(630.0f, 200.0f, 700.0f);
    LauncherHeavyMovement.SpeedCrouch = CreateWeaponSpeed(270.0f, 100.0f, 300.0f);
    LauncherHeavyMovement.SpeedMultiplierShooting = CreateWeaponSpeed(0.7f, 0.7f, 0.0f);
    LauncherHeavyMovement.SpeedRunFast = CreateWeaponSpeed(900.0f, 320.0f, 900.0f);
    LauncherHeavyMovement.AirControl = 0.35f;
    LauncherHeavyMovement.JumpForce = 450.0f;
    LauncherHeavyMovement.JumpMaxHoldTime = 0.15f;
    LauncherHeavyMovement.SpeedMultiplierFiringRevertAddedDelay = 0.05f;
    GWeaponMovementMap.Add(EWeaponMovementName::Launcher_Heavy_Movement, LauncherHeavyMovement);

    // Shotgun Movement
    FWeaponMovementSettings ShotgunMovement;
    ShotgunMovement.Name = TEXT("Shotgun");
    ShotgunMovement.SpeedWalk = CreateWeaponSpeed(440.0f, 150.0f, 440.0f);
    ShotgunMovement.SpeedAim = CreateWeaponSpeed(350.0f, 100.0f, 350.0f);
    ShotgunMovement.SpeedRun = CreateWeaponSpeed(700.0f, 200.0f, 700.0f);
    ShotgunMovement.SpeedCrouch = CreateWeaponSpeed(300.0f, 100.0f, 300.0f);
    ShotgunMovement.SpeedMultiplierShooting = CreateWeaponSpeed(0.7f, 0.7f, 0.0f);
    ShotgunMovement.SpeedRunFast = CreateWeaponSpeed(900.0f, 320.0f, 900.0f);
    ShotgunMovement.AirControl = 0.35f;
    ShotgunMovement.JumpForce = 450.0f;
    ShotgunMovement.JumpMaxHoldTime = 0.15f;
    ShotgunMovement.SpeedMultiplierFiringRevertAddedDelay = 0.05f;
    GWeaponMovementMap.Add(EWeaponMovementName::Shotgun_Movement, ShotgunMovement);

    // SMG Movement
    FWeaponMovementSettings SMGMovement;
    SMGMovement.Name = TEXT("SMG");
    SMGMovement.SpeedWalk = CreateWeaponSpeed(440.0f, 150.0f, 440.0f);
    SMGMovement.SpeedAim = CreateWeaponSpeed(385.0f, 100.0f, 350.0f);
    SMGMovement.SpeedRun = CreateWeaponSpeed(770.0f, 200.0f, 700.0f);
    SMGMovement.SpeedCrouch = CreateWeaponSpeed(330.0f, 100.0f, 300.0f);
    SMGMovement.SpeedMultiplierShooting = CreateWeaponSpeed(0.7f, 0.7f, 0.0f);
    SMGMovement.SpeedRunFast = CreateWeaponSpeed(900.0f, 320.0f, 900.0f);
    SMGMovement.AirControl = 0.35f;
    SMGMovement.JumpForce = 450.0f;
    SMGMovement.JumpMaxHoldTime = 0.15f;
    SMGMovement.SpeedMultiplierFiringRevertAddedDelay = 0.05f;
    GWeaponMovementMap.Add(EWeaponMovementName::SMG_Movement, SMGMovement);

    // Sniper Movement
    FWeaponMovementSettings SniperMovement;
    SniperMovement.Name = TEXT("Sniper");
    SniperMovement.SpeedWalk = CreateWeaponSpeed(440.0f, 150.0f, 440.0f);
    SniperMovement.SpeedAim = CreateWeaponSpeed(350.0f, 100.0f, 350.0f);
    SniperMovement.SpeedRun = CreateWeaponSpeed(700.0f, 200.0f, 700.0f);
    SniperMovement.SpeedCrouch = CreateWeaponSpeed(300.0f, 100.0f, 300.0f);
    SniperMovement.SpeedMultiplierShooting = CreateWeaponSpeed(0.7f, 0.7f, 0.0f);
    SniperMovement.SpeedRunFast = CreateWeaponSpeed(900.0f, 320.0f, 900.0f);
    SniperMovement.AirControl = 0.35f;
    SniperMovement.JumpForce = 450.0f;
    SniperMovement.JumpMaxHoldTime = 0.15f;
    SniperMovement.SpeedMultiplierFiringRevertAddedDelay = 0.05f;
    GWeaponMovementMap.Add(EWeaponMovementName::Sniper_Movement, SniperMovement);

    // Sniper Heavy Movement
    FWeaponMovementSettings SniperHeavyMovement;
    SniperHeavyMovement.Name = TEXT("Sniper-Heavy");
    SniperHeavyMovement.SpeedWalk = CreateWeaponSpeed(360.0f, 150.0f, 440.0f);
    SniperHeavyMovement.SpeedAim = CreateWeaponSpeed(315.0f, 100.0f, 350.0f);
    SniperHeavyMovement.SpeedRun = CreateWeaponSpeed(630.0f, 200.0f, 700.0f);
    SniperHeavyMovement.SpeedCrouch = CreateWeaponSpeed(270.0f, 100.0f, 300.0f);
    SniperHeavyMovement.SpeedMultiplierShooting = CreateWeaponSpeed(0.7f, 0.7f, 0.0f);
    SniperHeavyMovement.SpeedRunFast = CreateWeaponSpeed(900.0f, 320.0f, 900.0f);
    SniperHeavyMovement.AirControl = 0.35f;
    SniperHeavyMovement.JumpForce = 450.0f;
    SniperHeavyMovement.JumpMaxHoldTime = 0.15f;
    SniperHeavyMovement.SpeedMultiplierFiringRevertAddedDelay = 0.05f;
    GWeaponMovementMap.Add(EWeaponMovementName::Sniper_Heavy_Movement, SniperHeavyMovement);
}

FWeaponMovementSettings UWeaponMovementSettingsLibrary::GetWeaponMovementSettingsByName(EWeaponMovementName MovementName)
{
    InitWeaponMovementMap();
    if (GWeaponMovementMap.Contains(MovementName))
    {
        return GWeaponMovementMap[MovementName];
    }
    return FWeaponMovementSettings(); // Return default settings if not found
}
