#include "WeaponSettingsLibrary.h"
#include "Engine/Engine.h"

static TMap<EWeaponName, FWeaponSettings> GWeaponSettingsMap;

static void InitWeaponSettingsMap()
{
    if (GWeaponSettingsMap.Num() > 0) return;

    // Helper function to create recoil interpolation
    auto CreateRecoilInterpolation = [](float Stiffness, float CriticalDampingFactor, float Mass) -> FRecoilInterpolation
    {
        FRecoilInterpolation Interpolation;
        Interpolation.Stiffness = Stiffness;
        Interpolation.CriticalDampingFactor = CriticalDampingFactor;
        Interpolation.Mass = Mass;
        return Interpolation;
    };

    // Helper function to create recoil state
    auto CreateRecoilState = [&](const FString& LocationCurvePath, const FString& RotationCurvePath, 
                                 const FRecoilInterpolation& LocationInterp, const FRecoilInterpolation& RotationInterp,
                                 float LocationMultiplier, float RotationMultiplier) -> FRecoilState
    {
        FRecoilState State;
        State.LocationCurve = LoadObject<UCurveVector>(nullptr, *LocationCurvePath);
        State.LocationInterpolation = LocationInterp;
        State.LocationMultiplier = LocationMultiplier;
        State.RotationCurve = LoadObject<UCurveVector>(nullptr, *RotationCurvePath);
        State.RotationInterpolation = RotationInterp;
        State.RotationMultiplier = RotationMultiplier;
        return State;
    };

    // Helper function to create recoil states
    auto CreateRecoilStates = [&](const FString& ViewmodelLocationCurve, const FString& ViewmodelRotationCurve,
                                 const FString& CameraLocationCurve, const FString& CameraRotationCurve) -> FRecoilStates
    {
        FRecoilStates States;
        
        // Viewmodel Standing
        States.RecoilStateStanding = CreateRecoilState(
            ViewmodelLocationCurve, ViewmodelRotationCurve,
            CreateRecoilInterpolation(1.0f, 0.5f, 0.006f),
            CreateRecoilInterpolation(0.75f, 0.5f, 0.006f),
            1.0f, 1.0f
        );
        
        // Viewmodel Aiming
        States.RecoilStateAiming = CreateRecoilState(
            ViewmodelLocationCurve, ViewmodelRotationCurve,
            CreateRecoilInterpolation(0.5f, 0.5f, 0.006f),
            CreateRecoilInterpolation(0.25f, 0.5f, 0.006f),
            1.0f, 0.15f
        );
        
        return States;
    };

    // Helper function to create camera recoil states
    auto CreateCameraRecoilStates = [&]() -> FRecoilStates
    {
        FRecoilStates States;
        
        // Camera Standing
        States.RecoilStateStanding = CreateRecoilState(
            TEXT("None"), TEXT("/Game/Blueprint/Data/Recoil/VC_WEP_Recoil_Camera_Rotation.VC_WEP_Recoil_Camera_Rotation"),
            CreateRecoilInterpolation(0.75f, 0.5f, 0.006f),
            CreateRecoilInterpolation(1.0f, 0.7f, 0.006f),
            0.0f, 1.0f
        );
        
        // Camera Aiming
        States.RecoilStateAiming = CreateRecoilState(
            TEXT("None"), TEXT("/Game/Blueprint/Data/Recoil/VC_WEP_Recoil_Camera_Rotation.VC_WEP_Recoil_Camera_Rotation"),
            CreateRecoilInterpolation(0.75f, 0.5f, 0.006f),
            CreateRecoilInterpolation(1.0f, 0.7f, 0.006f),
            0.0f, 1.0f
        );
        
        return States;
    };

    // Assault Rifle 01
    FWeaponSettings AR01Settings;
    AR01Settings.bBoltAction = false;
    AR01Settings.bCycledReload = false;
    AR01Settings.bCanReloadFull = true;
    AR01Settings.bAutoReloadOnEmpty = false;
    AR01Settings.bAutoReloadOnEmptyFire = true;
    AR01Settings.bCanActionBoltWhileAiming = false;
    AR01Settings.FireMode = EWeaponFireMode::Automatic;
    AR01Settings.FireRate = 610;
    AR01Settings.FireRateEmpty = 450;
    AR01Settings.BurstCount = 0;
    AR01Settings.BurstTimeBetween = 0.0f;
    AR01Settings.SpreadYaw = 4.0f;
    AR01Settings.SpreadPitch = 4.0f;
    AR01Settings.SpreadAimingMultiplier = 0.1f;
    AR01Settings.RecoilProperties.RecoilStatesViewmodel = CreateRecoilStates(
        TEXT("/Game/Blueprint/Data/Recoil/VC_WEP_Recoil_ARs_Location.VC_WEP_Recoil_ARs_Location"),
        TEXT("/Game/Blueprint/Data/Recoil/VC_WEP_Recoil_ARs_Rotation.VC_WEP_Recoil_ARs_Rotation"),
        TEXT("None"), TEXT("/Game/Blueprint/Data/Recoil/VC_WEP_Recoil_Camera_Rotation.VC_WEP_Recoil_Camera_Rotation")
    );
    AR01Settings.RecoilProperties.RecoilStatesCamera = CreateCameraRecoilStates();
    AR01Settings.SpreadCurve = LoadObject<UCurveFloat>(nullptr, TEXT("/Game/Blueprint/Data/Spread/FC_LPSP_WEP_SPREAD_Auto.FC_LPSP_WEP_SPREAD_Auto"));
    AR01Settings.ForceFeedbackEffect = LoadObject<UForceFeedbackEffect>(nullptr, TEXT("/Game/Blueprint/Data/Feedback/FF_WEP_Fire.FF_WEP_Fire"));
    
    GWeaponSettingsMap.Add(EWeaponName::Assault_Rifle_01, AR01Settings);

    // Assault Rifle 02
    FWeaponSettings AR02Settings = AR01Settings;
    AR02Settings.FireRate = 650;
    GWeaponSettingsMap.Add(EWeaponName::Assault_Rifle_02, AR02Settings);

    // Assault Rifle 03
    FWeaponSettings AR03Settings = AR01Settings;
    AR03Settings.FireRate = 650;
    GWeaponSettingsMap.Add(EWeaponName::Assault_Rifle_03, AR03Settings);

    // Assault Rifle 03 SciFi
    FWeaponSettings AR03SciFiSettings = AR01Settings;
    AR03SciFiSettings.FireRate = 900;
    AR03SciFiSettings.RecoilProperties.RecoilStatesViewmodel = CreateRecoilStates(
        TEXT("/Game/Blueprint/Data/Recoil/VC_WEP_Recoil_SMGs_Location.VC_WEP_Recoil_SMGs_Location"),
        TEXT("/Game/Blueprint/Data/Recoil/VC_WEP_Recoil_SMGs_Rotation.VC_WEP_Recoil_SMGs_Rotation"),
        TEXT("None"), TEXT("/Game/Blueprint/Data/Recoil/VC_WEP_Recoil_Camera_Rotation.VC_WEP_Recoil_Camera_Rotation")
    );
    AR03SciFiSettings.RecoilProperties.RecoilStatesViewmodel.RecoilStateStanding.RotationMultiplier = 0.6f;
    GWeaponSettingsMap.Add(EWeaponName::Assault_Rifle_03_SciFi, AR03SciFiSettings);

    // Handgun (Base)
    FWeaponSettings HandgunSettings;
    HandgunSettings.bBoltAction = false;
    HandgunSettings.bCycledReload = false;
    HandgunSettings.bCanReloadFull = true;
    HandgunSettings.bAutoReloadOnEmpty = false;
    HandgunSettings.bAutoReloadOnEmptyFire = true;
    HandgunSettings.bCanActionBoltWhileAiming = false;
    HandgunSettings.FireMode = EWeaponFireMode::Semi;
    HandgunSettings.FireRate = 500;
    HandgunSettings.FireRateEmpty = 450;
    HandgunSettings.BurstCount = 0;
    HandgunSettings.BurstTimeBetween = 0.0f;
    HandgunSettings.SpreadYaw = 2.0f;
    HandgunSettings.SpreadPitch = 2.0f;
    HandgunSettings.SpreadAimingMultiplier = 0.0f;
    HandgunSettings.RecoilProperties.RecoilStatesViewmodel = CreateRecoilStates(
        TEXT("/Game/Blueprint/Data/Recoil/VC_WEP_Recoil_SMGs_Location.VC_WEP_Recoil_SMGs_Location"),
        TEXT("/Game/Blueprint/Data/Recoil/VC_WEP_Recoil_SMGs_Rotation.VC_WEP_Recoil_SMGs_Rotation"),
        TEXT("None"), TEXT("/Game/Blueprint/Data/Recoil/VC_WEP_Recoil_Camera_Rotation.VC_WEP_Recoil_Camera_Rotation")
    );
    HandgunSettings.RecoilProperties.RecoilStatesCamera = CreateCameraRecoilStates();
    HandgunSettings.SpreadCurve = LoadObject<UCurveFloat>(nullptr, TEXT("/Game/Blueprint/Data/Spread/FC_LPSP_WEP_SPREAD_Semi.FC_LPSP_WEP_SPREAD_Semi"));
    HandgunSettings.ForceFeedbackEffect = LoadObject<UForceFeedbackEffect>(nullptr, TEXT("/Game/Blueprint/Data/Feedback/FF_WEP_Fire.FF_WEP_Fire"));
    
    GWeaponSettingsMap.Add(EWeaponName::Handgun_01, HandgunSettings);
    GWeaponSettingsMap.Add(EWeaponName::Handgun_02, HandgunSettings);
    GWeaponSettingsMap.Add(EWeaponName::Handgun_03, HandgunSettings);
    GWeaponSettingsMap.Add(EWeaponName::Handgun_04, HandgunSettings);

    // Handgun 03 Skulls (Automatic variant)
    FWeaponSettings Handgun03SkullsSettings = HandgunSettings;
    Handgun03SkullsSettings.FireMode = EWeaponFireMode::Automatic;
    Handgun03SkullsSettings.FireRate = 470;
    Handgun03SkullsSettings.SpreadYaw = 5.0f;
    Handgun03SkullsSettings.SpreadPitch = 5.0f;
    Handgun03SkullsSettings.SpreadCurve = LoadObject<UCurveFloat>(nullptr, TEXT("/Game/Blueprint/Data/Spread/FC_LPSP_WEP_SPREAD_Auto.FC_LPSP_WEP_SPREAD_Auto"));
    GWeaponSettingsMap.Add(EWeaponName::Handgun_03_Skulls, Handgun03SkullsSettings);

    // Rocket Launcher 01
    FWeaponSettings RL01Settings;
    RL01Settings.bBoltAction = false;
    RL01Settings.bCycledReload = false;
    RL01Settings.bCanReloadFull = false;
    RL01Settings.bAutoReloadOnEmpty = true;
    RL01Settings.bAutoReloadOnEmptyFire = true;
    RL01Settings.bCanActionBoltWhileAiming = false;
    RL01Settings.FireMode = EWeaponFireMode::Semi;
    RL01Settings.FireRate = 500;
    RL01Settings.FireRateEmpty = 450;
    RL01Settings.BurstCount = 0;
    RL01Settings.BurstTimeBetween = 0.0f;
    RL01Settings.SpreadYaw = 0.0f;
    RL01Settings.SpreadPitch = 0.0f;
    RL01Settings.SpreadAimingMultiplier = 0.0f;
    RL01Settings.RecoilProperties.RecoilStatesViewmodel = CreateRecoilStates(
        TEXT("/Game/Blueprint/Data/Recoil/VC_WEP_Recoil_SMGs_Location.VC_WEP_Recoil_SMGs_Location"),
        TEXT("/Game/Blueprint/Data/Recoil/VC_WEP_Recoil_SMGs_Rotation.VC_WEP_Recoil_SMGs_Rotation"),
        TEXT("None"), TEXT("/Game/Blueprint/Data/Recoil/VC_WEP_Recoil_Camera_Rotation.VC_WEP_Recoil_Camera_Rotation")
    );
    RL01Settings.RecoilProperties.RecoilStatesCamera = CreateCameraRecoilStates();
    RL01Settings.SpreadCurve = LoadObject<UCurveFloat>(nullptr, TEXT("/Game/Blueprint/Data/Spread/FC_LPSP_WEP_SPREAD_Semi.FC_LPSP_WEP_SPREAD_Semi"));
    RL01Settings.ForceFeedbackEffect = LoadObject<UForceFeedbackEffect>(nullptr, TEXT("/Game/Blueprint/Data/Feedback/FF_WEP_Fire_Strong.FF_WEP_Fire_Strong"));
    
    GWeaponSettingsMap.Add(EWeaponName::Rocket_Launcher_01, RL01Settings);

    // Grenade Launcher 01
    FWeaponSettings GL01Settings = RL01Settings;
    GL01Settings.FireMode = EWeaponFireMode::Automatic;
    GWeaponSettingsMap.Add(EWeaponName::Grenade_Launcher_01, GL01Settings);

    // Shotgun 01
    FWeaponSettings Shotgun01Settings;
    Shotgun01Settings.bBoltAction = true;
    Shotgun01Settings.bCycledReload = true;
    Shotgun01Settings.bCanReloadFull = false;
    Shotgun01Settings.bAutoReloadOnEmpty = false;
    Shotgun01Settings.bAutoReloadOnEmptyFire = true;
    Shotgun01Settings.bCanActionBoltWhileAiming = true;
    Shotgun01Settings.FireMode = EWeaponFireMode::Semi;
    Shotgun01Settings.FireRate = 200;
    Shotgun01Settings.FireRateEmpty = 450;
    Shotgun01Settings.BurstCount = 0;
    Shotgun01Settings.BurstTimeBetween = 0.0f;
    Shotgun01Settings.SpreadYaw = 5.0f;
    Shotgun01Settings.SpreadPitch = 5.0f;
    Shotgun01Settings.SpreadAimingMultiplier = 0.1f;
    Shotgun01Settings.RecoilProperties.RecoilStatesViewmodel = CreateRecoilStates(
        TEXT("/Game/Blueprint/Data/Recoil/VC_WEP_Recoil_SMGs_Location.VC_WEP_Recoil_SMGs_Location"),
        TEXT("/Game/Blueprint/Data/Recoil/VC_WEP_Recoil_SMGs_Rotation.VC_WEP_Recoil_SMGs_Rotation"),
        TEXT("None"), TEXT("/Game/Blueprint/Data/Recoil/VC_WEP_Recoil_Camera_Rotation.VC_WEP_Recoil_Camera_Rotation")
    );
    Shotgun01Settings.RecoilProperties.RecoilStatesCamera = CreateCameraRecoilStates();
    Shotgun01Settings.SpreadCurve = LoadObject<UCurveFloat>(nullptr, TEXT("/Game/Blueprint/Data/Spread/FC_LPSP_WEP_SPREAD_Semi.FC_LPSP_WEP_SPREAD_Semi"));
    Shotgun01Settings.ForceFeedbackEffect = LoadObject<UForceFeedbackEffect>(nullptr, TEXT("/Game/Blueprint/Data/Feedback/FF_WEP_Fire_Strong.FF_WEP_Fire_Strong"));
    
    GWeaponSettingsMap.Add(EWeaponName::Shotgun_01, Shotgun01Settings);

    // SMG 01
    FWeaponSettings SMG01Settings;
    SMG01Settings.bBoltAction = false;
    SMG01Settings.bCycledReload = false;
    SMG01Settings.bCanReloadFull = true;
    SMG01Settings.bAutoReloadOnEmpty = false;
    SMG01Settings.bAutoReloadOnEmptyFire = true;
    SMG01Settings.bCanActionBoltWhileAiming = false;
    SMG01Settings.FireMode = EWeaponFireMode::Automatic;
    SMG01Settings.FireRate = 750;
    SMG01Settings.FireRateEmpty = 450;
    SMG01Settings.BurstCount = 0;
    SMG01Settings.BurstTimeBetween = 0.0f;
    SMG01Settings.SpreadYaw = 5.0f;
    SMG01Settings.SpreadPitch = 2.0f;
    SMG01Settings.SpreadAimingMultiplier = 0.1f;
    SMG01Settings.RecoilProperties.RecoilStatesViewmodel = CreateRecoilStates(
        TEXT("/Game/Blueprint/Data/Recoil/VC_WEP_Recoil_SMGs_Location.VC_WEP_Recoil_SMGs_Location"),
        TEXT("/Game/Blueprint/Data/Recoil/VC_WEP_Recoil_SMGs_Rotation.VC_WEP_Recoil_SMGs_Rotation"),
        TEXT("None"), TEXT("/Game/Blueprint/Data/Recoil/VC_WEP_Recoil_Camera_Rotation.VC_WEP_Recoil_Camera_Rotation")
    );
    SMG01Settings.RecoilProperties.RecoilStatesCamera = CreateCameraRecoilStates();
    SMG01Settings.SpreadCurve = LoadObject<UCurveFloat>(nullptr, TEXT("/Game/Blueprint/Data/Spread/FC_LPSP_WEP_SPREAD_Auto.FC_LPSP_WEP_SPREAD_Auto"));
    SMG01Settings.ForceFeedbackEffect = LoadObject<UForceFeedbackEffect>(nullptr, TEXT("/Game/Blueprint/Data/Feedback/FF_WEP_Fire.FF_WEP_Fire"));
    
    GWeaponSettingsMap.Add(EWeaponName::SMG_01, SMG01Settings);

    // SMG 02
    FWeaponSettings SMG02Settings = SMG01Settings;
    SMG02Settings.FireRate = 800;
    SMG02Settings.SpreadPitch = 5.0f;
    GWeaponSettingsMap.Add(EWeaponName::SMG_02, SMG02Settings);

    // SMG 03 (Burst Hold)
    FWeaponSettings SMG03Settings = SMG01Settings;
    SMG03Settings.FireMode = EWeaponFireMode::BurstHold;
    SMG03Settings.FireRate = 750;
    SMG03Settings.BurstCount = 3;
    SMG03Settings.BurstTimeBetween = 0.1f;
    SMG03Settings.SpreadPitch = 5.0f;
    SMG03Settings.SpreadCurve = LoadObject<UCurveFloat>(nullptr, TEXT("/Game/Blueprint/Data/Spread/FC_LPSP_WEP_SPREAD_Burst.FC_LPSP_WEP_SPREAD_Burst"));
    GWeaponSettingsMap.Add(EWeaponName::SMG_03, SMG03Settings);

    // SMG 04
    FWeaponSettings SMG04Settings = SMG01Settings;
    SMG04Settings.FireRate = 680;
    SMG04Settings.SpreadPitch = 5.0f;
    SMG04Settings.RecoilProperties.RecoilStatesViewmodel.RecoilStateStanding.RotationMultiplier = 0.65f;
    GWeaponSettingsMap.Add(EWeaponName::SMG_04, SMG04Settings);

    // SMG 05
    FWeaponSettings SMG05Settings = SMG01Settings;
    SMG05Settings.FireRate = 700;
    SMG05Settings.SpreadPitch = 5.0f;
    SMG05Settings.RecoilProperties.RecoilStatesViewmodel.RecoilStateAiming.LocationMultiplier = 0.3f;
    GWeaponSettingsMap.Add(EWeaponName::SMG_05, SMG05Settings);

    // Sniper 01
    FWeaponSettings Sniper01Settings;
    Sniper01Settings.bBoltAction = true;
    Sniper01Settings.bCycledReload = true;
    Sniper01Settings.bCanReloadFull = false;
    Sniper01Settings.bAutoReloadOnEmpty = false;
    Sniper01Settings.bAutoReloadOnEmptyFire = true;
    Sniper01Settings.bCanActionBoltWhileAiming = true;
    Sniper01Settings.FireMode = EWeaponFireMode::Semi;
    Sniper01Settings.FireRate = 125;
    Sniper01Settings.FireRateEmpty = 450;
    Sniper01Settings.BurstCount = 0;
    Sniper01Settings.BurstTimeBetween = 0.0f;
    Sniper01Settings.SpreadYaw = 3.0f;
    Sniper01Settings.SpreadPitch = 3.0f;
    Sniper01Settings.SpreadAimingMultiplier = 0.0f;
    Sniper01Settings.RecoilProperties.RecoilStatesViewmodel = CreateRecoilStates(
        TEXT("/Game/Blueprint/Data/Recoil/VC_WEP_Recoil_SMGs_Location.VC_WEP_Recoil_SMGs_Location"),
        TEXT("/Game/Blueprint/Data/Recoil/VC_WEP_Recoil_SMGs_Rotation.VC_WEP_Recoil_SMGs_Rotation"),
        TEXT("None"), TEXT("/Game/Blueprint/Data/Recoil/VC_WEP_Recoil_Camera_Rotation.VC_WEP_Recoil_Camera_Rotation")
    );
    Sniper01Settings.RecoilProperties.RecoilStatesCamera = CreateCameraRecoilStates();
    Sniper01Settings.SpreadCurve = LoadObject<UCurveFloat>(nullptr, TEXT("/Game/Blueprint/Data/Spread/FC_LPSP_WEP_SPREAD_Semi.FC_LPSP_WEP_SPREAD_Semi"));
    Sniper01Settings.ForceFeedbackEffect = LoadObject<UForceFeedbackEffect>(nullptr, TEXT("/Game/Blueprint/Data/Feedback/FF_WEP_Fire_Strong.FF_WEP_Fire_Strong"));
    
    GWeaponSettingsMap.Add(EWeaponName::Sniper_01, Sniper01Settings);

    // Sniper 02
    FWeaponSettings Sniper02Settings = Sniper01Settings;
    Sniper02Settings.bBoltAction = false;
    Sniper02Settings.bCycledReload = false;
    Sniper02Settings.bCanReloadFull = true;
    Sniper02Settings.bCanActionBoltWhileAiming = false;
    GWeaponSettingsMap.Add(EWeaponName::Sniper_02, Sniper02Settings);

    // Sniper 03
    FWeaponSettings Sniper03Settings = Sniper02Settings;
    GWeaponSettingsMap.Add(EWeaponName::Sniper_03, Sniper03Settings);

    // Sniper 03 Heavy (Automatic)
    FWeaponSettings Sniper03HeavySettings = Sniper03Settings;
    Sniper03HeavySettings.FireMode = EWeaponFireMode::Automatic;
    Sniper03HeavySettings.FireRate = 375;
    Sniper03HeavySettings.RecoilProperties.RecoilStatesViewmodel.RecoilStateStanding.LocationMultiplier = 0.3f;
    Sniper03HeavySettings.RecoilProperties.RecoilStatesViewmodel.RecoilStateStanding.RotationMultiplier = 0.3f;
    Sniper03HeavySettings.SpreadCurve = LoadObject<UCurveFloat>(nullptr, TEXT("/Game/Blueprint/Data/Spread/FC_LPSP_WEP_SPREAD_Auto.FC_LPSP_WEP_SPREAD_Auto"));
    GWeaponSettingsMap.Add(EWeaponName::Sniper_03_Heavy, Sniper03HeavySettings);

    // Add all variant weapons with base weapon settings
    // Assault Rifle variants
    GWeaponSettingsMap.Add(EWeaponName::Assault_Rifle_01_Evil, AR01Settings);
    GWeaponSettingsMap.Add(EWeaponName::Assault_Rifle_01_Tactical, AR01Settings);
    GWeaponSettingsMap.Add(EWeaponName::Assault_Rifle_01_Elite, AR01Settings);
    GWeaponSettingsMap.Add(EWeaponName::Assault_Rifle_02_01, AR02Settings);
    GWeaponSettingsMap.Add(EWeaponName::Assault_Rifle_02_Elite, AR02Settings);
    GWeaponSettingsMap.Add(EWeaponName::Assault_Rifle_02_Evil, AR02Settings);
    GWeaponSettingsMap.Add(EWeaponName::Assault_Rifle_02_Forest, AR02Settings);
    GWeaponSettingsMap.Add(EWeaponName::Assault_Rifle_02_Skulls, AR02Settings);
    GWeaponSettingsMap.Add(EWeaponName::Assault_Rifle_03_Elite, AR03Settings);
    GWeaponSettingsMap.Add(EWeaponName::Assault_Rifle_03_Tactical, AR03Settings);

    // Handgun variants
    GWeaponSettingsMap.Add(EWeaponName::Handgun_01_Neon, HandgunSettings);
    GWeaponSettingsMap.Add(EWeaponName::Handgun_01_Tactical, HandgunSettings);
    GWeaponSettingsMap.Add(EWeaponName::Handgun_02_Stealth, HandgunSettings);
    GWeaponSettingsMap.Add(EWeaponName::Handgun_02_Tactical, HandgunSettings);
    GWeaponSettingsMap.Add(EWeaponName::Handgun_03_Tactical, HandgunSettings);
    GWeaponSettingsMap.Add(EWeaponName::Handgun_04_Tactical, HandgunSettings);
    GWeaponSettingsMap.Add(EWeaponName::Handgun_04_Venomous, HandgunSettings);

    // SMG variants
    GWeaponSettingsMap.Add(EWeaponName::SMG_01_Citrus, SMG01Settings);
    GWeaponSettingsMap.Add(EWeaponName::SMG_01_Tactical, SMG01Settings);
    GWeaponSettingsMap.Add(EWeaponName::SMG_02_Citrus, SMG02Settings);
    GWeaponSettingsMap.Add(EWeaponName::SMG_02_Tactical, SMG02Settings);
    GWeaponSettingsMap.Add(EWeaponName::SMG_03_Tactical, SMG03Settings);
    GWeaponSettingsMap.Add(EWeaponName::SMG_03_Evil, SMG03Settings);
    GWeaponSettingsMap.Add(EWeaponName::SMG_04_Tactical, SMG04Settings);
    GWeaponSettingsMap.Add(EWeaponName::SMG_04_Modern, SMG04Settings);
    GWeaponSettingsMap.Add(EWeaponName::SMG_05_Armored, SMG05Settings);
    GWeaponSettingsMap.Add(EWeaponName::SMG_05_Tactical, SMG05Settings);

    // Sniper variants
    GWeaponSettingsMap.Add(EWeaponName::Sniper_01_Hitman, Sniper01Settings);
    GWeaponSettingsMap.Add(EWeaponName::Sniper_01_Tactical, Sniper01Settings);
    GWeaponSettingsMap.Add(EWeaponName::Sniper_02_Breach, Sniper02Settings);
    GWeaponSettingsMap.Add(EWeaponName::Sniper_02_Tactical, Sniper02Settings);
    GWeaponSettingsMap.Add(EWeaponName::Sniper_03_Tactical, Sniper03Settings);

    // Other weapon variants
    GWeaponSettingsMap.Add(EWeaponName::Shotgun_01_Tactical, Shotgun01Settings);
    GWeaponSettingsMap.Add(EWeaponName::Shotgun_01_Tech, Shotgun01Settings);
    GWeaponSettingsMap.Add(EWeaponName::Rocket_Launcher_01_Homing, RL01Settings);
    GWeaponSettingsMap.Add(EWeaponName::Grenade_Launcher_01_AntiTank, GL01Settings);
    GWeaponSettingsMap.Add(EWeaponName::Grenade_Launcher_01_Citrus, GL01Settings);
    GWeaponSettingsMap.Add(EWeaponName::Grenade_Launcher_01_Tactical, GL01Settings);
}

FWeaponSettings UWeaponSettingsLibrary::GetWeaponSettingsByName(EWeaponName WeaponName)
{
    InitWeaponSettingsMap();
    if (GWeaponSettingsMap.Contains(WeaponName))
    {
        return GWeaponSettingsMap[WeaponName];
    }
    return FWeaponSettings(); // Return default settings if not found
}
