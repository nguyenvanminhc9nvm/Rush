#include "WeaponSettingsLibrary.h"
#include "Engine/Engine.h"

static TMap<EWeaponName, FWeaponSettings> GWeaponSettingsMap;

static void InitWeaponSettingsMap()
{
    if (GWeaponSettingsMap.Num() > 0) return;

    // Helper function to create recoil interpolation
    auto CreateRecoilInterpolation = [](float Stiffness, float CriticalDampingFactor, float Mass) -> FRecoilInterpolationVector
    {
        FRecoilInterpolationVector Interpolation;
        Interpolation.Stiffness = Stiffness;
        Interpolation.CriticalDampingFactor = CriticalDampingFactor;
        Interpolation.Mass = Mass;
        return Interpolation;
    };

    // Helper function to create recoil state
    auto CreateRecoilState = [&](const FString& LocationCurvePath, const FString& RotationCurvePath, 
                                 const FRecoilInterpolationVector& LocationInterp, const FRecoilInterpolationVector& RotationInterp,
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
    AR01Settings.WeaponName = EWeaponName::Assault_Rifle_01;
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
    AR02Settings.WeaponName = EWeaponName::Assault_Rifle_02;
    AR02Settings.FireRate = 650;
    GWeaponSettingsMap.Add(EWeaponName::Assault_Rifle_02, AR02Settings);

    // Assault Rifle 03
    FWeaponSettings AR03Settings = AR01Settings;
    AR03Settings.WeaponName = EWeaponName::Assault_Rifle_03;
    AR03Settings.FireRate = 650;
    GWeaponSettingsMap.Add(EWeaponName::Assault_Rifle_03, AR03Settings);

    // Assault Rifle 03 SciFi
    FWeaponSettings AR03SciFiSettings = AR01Settings;
    AR03SciFiSettings.WeaponName = EWeaponName::Assault_Rifle_03_SciFi;
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
    HandgunSettings.WeaponName = EWeaponName::Handgun_01; // Base handgun name
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
    Handgun03SkullsSettings.WeaponName = EWeaponName::Handgun_03_Skulls;
    Handgun03SkullsSettings.FireMode = EWeaponFireMode::Automatic;
    Handgun03SkullsSettings.FireRate = 470;
    Handgun03SkullsSettings.SpreadYaw = 5.0f;
    Handgun03SkullsSettings.SpreadPitch = 5.0f;
    Handgun03SkullsSettings.SpreadCurve = LoadObject<UCurveFloat>(nullptr, TEXT("/Game/Blueprint/Data/Spread/FC_LPSP_WEP_SPREAD_Auto.FC_LPSP_WEP_SPREAD_Auto"));
    GWeaponSettingsMap.Add(EWeaponName::Handgun_03_Skulls, Handgun03SkullsSettings);

    // Rocket Launcher 01
    FWeaponSettings RL01Settings;
    RL01Settings.WeaponName = EWeaponName::Rocket_Launcher_01;
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
    GL01Settings.WeaponName = EWeaponName::Grenade_Launcher_01;
    GL01Settings.FireMode = EWeaponFireMode::Automatic;
    GWeaponSettingsMap.Add(EWeaponName::Grenade_Launcher_01, GL01Settings);

    // Shotgun 01
    FWeaponSettings Shotgun01Settings;
    Shotgun01Settings.WeaponName = EWeaponName::Shotgun_01;
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
    SMG01Settings.WeaponName = EWeaponName::SMG_01;
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
    SMG02Settings.WeaponName = EWeaponName::SMG_02;
    SMG02Settings.FireRate = 800;
    SMG02Settings.SpreadPitch = 5.0f;
    GWeaponSettingsMap.Add(EWeaponName::SMG_02, SMG02Settings);

    // SMG 03 (Burst Hold)
    FWeaponSettings SMG03Settings = SMG01Settings;
    SMG03Settings.WeaponName = EWeaponName::SMG_03;
    SMG03Settings.FireMode = EWeaponFireMode::BurstHold;
    SMG03Settings.FireRate = 750;
    SMG03Settings.BurstCount = 3;
    SMG03Settings.BurstTimeBetween = 0.1f;
    SMG03Settings.SpreadPitch = 5.0f;
    SMG03Settings.SpreadCurve = LoadObject<UCurveFloat>(nullptr, TEXT("/Game/Blueprint/Data/Spread/FC_LPSP_WEP_SPREAD_Burst.FC_LPSP_WEP_SPREAD_Burst"));
    GWeaponSettingsMap.Add(EWeaponName::SMG_03, SMG03Settings);

    // SMG 04
    FWeaponSettings SMG04Settings = SMG01Settings;
    SMG04Settings.WeaponName = EWeaponName::SMG_04;
    SMG04Settings.FireRate = 680;
    SMG04Settings.SpreadPitch = 5.0f;
    SMG04Settings.RecoilProperties.RecoilStatesViewmodel.RecoilStateStanding.RotationMultiplier = 0.65f;
    GWeaponSettingsMap.Add(EWeaponName::SMG_04, SMG04Settings);

    // SMG 05
    FWeaponSettings SMG05Settings = SMG01Settings;
    SMG05Settings.WeaponName = EWeaponName::SMG_05;
    SMG05Settings.FireRate = 700;
    SMG05Settings.SpreadPitch = 5.0f;
    SMG05Settings.RecoilProperties.RecoilStatesViewmodel.RecoilStateAiming.LocationMultiplier = 0.3f;
    GWeaponSettingsMap.Add(EWeaponName::SMG_05, SMG05Settings);

    // Sniper 01
    FWeaponSettings Sniper01Settings;
    Sniper01Settings.WeaponName = EWeaponName::Sniper_01;
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
    Sniper02Settings.WeaponName = EWeaponName::Sniper_02;
    Sniper02Settings.bBoltAction = false;
    Sniper02Settings.bCycledReload = false;
    Sniper02Settings.bCanReloadFull = true;
    Sniper02Settings.bCanActionBoltWhileAiming = false;
    GWeaponSettingsMap.Add(EWeaponName::Sniper_02, Sniper02Settings);

    // Sniper 03
    FWeaponSettings Sniper03Settings = Sniper02Settings;
    Sniper03Settings.WeaponName = EWeaponName::Sniper_03;
    GWeaponSettingsMap.Add(EWeaponName::Sniper_03, Sniper03Settings);

    // Sniper 03 Heavy (Automatic)
    FWeaponSettings Sniper03HeavySettings = Sniper03Settings;
    Sniper03HeavySettings.WeaponName = EWeaponName::Sniper_03_Heavy;
    Sniper03HeavySettings.FireMode = EWeaponFireMode::Automatic;
    Sniper03HeavySettings.FireRate = 375;
    Sniper03HeavySettings.RecoilProperties.RecoilStatesViewmodel.RecoilStateStanding.LocationMultiplier = 0.3f;
    Sniper03HeavySettings.RecoilProperties.RecoilStatesViewmodel.RecoilStateStanding.RotationMultiplier = 0.3f;
    Sniper03HeavySettings.SpreadCurve = LoadObject<UCurveFloat>(nullptr, TEXT("/Game/Blueprint/Data/Spread/FC_LPSP_WEP_SPREAD_Auto.FC_LPSP_WEP_SPREAD_Auto"));
    GWeaponSettingsMap.Add(EWeaponName::Sniper_03_Heavy, Sniper03HeavySettings);

    // Add all variant weapons with base weapon settings
    // Assault Rifle variants
    FWeaponSettings AR01EvilSettings = AR01Settings;
    AR01EvilSettings.WeaponName = EWeaponName::Assault_Rifle_01_Evil;
    GWeaponSettingsMap.Add(EWeaponName::Assault_Rifle_01_Evil, AR01EvilSettings);
    
    FWeaponSettings AR01TacticalSettings = AR01Settings;
    AR01TacticalSettings.WeaponName = EWeaponName::Assault_Rifle_01_Tactical;
    GWeaponSettingsMap.Add(EWeaponName::Assault_Rifle_01_Tactical, AR01TacticalSettings);
    
    FWeaponSettings AR01EliteSettings = AR01Settings;
    AR01EliteSettings.WeaponName = EWeaponName::Assault_Rifle_01_Elite;
    GWeaponSettingsMap.Add(EWeaponName::Assault_Rifle_01_Elite, AR01EliteSettings);
    
    FWeaponSettings AR0201Settings = AR02Settings;
    AR0201Settings.WeaponName = EWeaponName::Assault_Rifle_02_01;
    GWeaponSettingsMap.Add(EWeaponName::Assault_Rifle_02_01, AR0201Settings);
    
    FWeaponSettings AR02EliteSettings = AR02Settings;
    AR02EliteSettings.WeaponName = EWeaponName::Assault_Rifle_02_Elite;
    GWeaponSettingsMap.Add(EWeaponName::Assault_Rifle_02_Elite, AR02EliteSettings);
    
    FWeaponSettings AR02EvilSettings = AR02Settings;
    AR02EvilSettings.WeaponName = EWeaponName::Assault_Rifle_02_Evil;
    GWeaponSettingsMap.Add(EWeaponName::Assault_Rifle_02_Evil, AR02EvilSettings);
    
    FWeaponSettings AR02ForestSettings = AR02Settings;
    AR02ForestSettings.WeaponName = EWeaponName::Assault_Rifle_02_Forest;
    GWeaponSettingsMap.Add(EWeaponName::Assault_Rifle_02_Forest, AR02ForestSettings);
    
    FWeaponSettings AR02SkullsSettings = AR02Settings;
    AR02SkullsSettings.WeaponName = EWeaponName::Assault_Rifle_02_Skulls;
    GWeaponSettingsMap.Add(EWeaponName::Assault_Rifle_02_Skulls, AR02SkullsSettings);
    
    FWeaponSettings AR03EliteSettings = AR03Settings;
    AR03EliteSettings.WeaponName = EWeaponName::Assault_Rifle_03_Elite;
    GWeaponSettingsMap.Add(EWeaponName::Assault_Rifle_03_Elite, AR03EliteSettings);
    
    FWeaponSettings AR03TacticalSettings = AR03Settings;
    AR03TacticalSettings.WeaponName = EWeaponName::Assault_Rifle_03_Tactical;
    GWeaponSettingsMap.Add(EWeaponName::Assault_Rifle_03_Tactical, AR03TacticalSettings);

    // Handgun variants
    FWeaponSettings Handgun01NeonSettings = HandgunSettings;
    Handgun01NeonSettings.WeaponName = EWeaponName::Handgun_01_Neon;
    GWeaponSettingsMap.Add(EWeaponName::Handgun_01_Neon, Handgun01NeonSettings);
    
    FWeaponSettings Handgun01TacticalSettings = HandgunSettings;
    Handgun01TacticalSettings.WeaponName = EWeaponName::Handgun_01_Tactical;
    GWeaponSettingsMap.Add(EWeaponName::Handgun_01_Tactical, Handgun01TacticalSettings);
    
    FWeaponSettings Handgun02StealthSettings = HandgunSettings;
    Handgun02StealthSettings.WeaponName = EWeaponName::Handgun_02_Stealth;
    GWeaponSettingsMap.Add(EWeaponName::Handgun_02_Stealth, Handgun02StealthSettings);
    
    FWeaponSettings Handgun02TacticalSettings = HandgunSettings;
    Handgun02TacticalSettings.WeaponName = EWeaponName::Handgun_02_Tactical;
    GWeaponSettingsMap.Add(EWeaponName::Handgun_02_Tactical, Handgun02TacticalSettings);
    
    FWeaponSettings Handgun03TacticalSettings = HandgunSettings;
    Handgun03TacticalSettings.WeaponName = EWeaponName::Handgun_03_Tactical;
    GWeaponSettingsMap.Add(EWeaponName::Handgun_03_Tactical, Handgun03TacticalSettings);
    
    FWeaponSettings Handgun04TacticalSettings = HandgunSettings;
    Handgun04TacticalSettings.WeaponName = EWeaponName::Handgun_04_Tactical;
    GWeaponSettingsMap.Add(EWeaponName::Handgun_04_Tactical, Handgun04TacticalSettings);
    
    FWeaponSettings Handgun04VenomousSettings = HandgunSettings;
    Handgun04VenomousSettings.WeaponName = EWeaponName::Handgun_04_Venomous;
    GWeaponSettingsMap.Add(EWeaponName::Handgun_04_Venomous, Handgun04VenomousSettings);

    // SMG variants
    FWeaponSettings SMG01CitrusSettings = SMG01Settings;
    SMG01CitrusSettings.WeaponName = EWeaponName::SMG_01_Citrus;
    GWeaponSettingsMap.Add(EWeaponName::SMG_01_Citrus, SMG01CitrusSettings);
    
    FWeaponSettings SMG01TacticalSettings = SMG01Settings;
    SMG01TacticalSettings.WeaponName = EWeaponName::SMG_01_Tactical;
    GWeaponSettingsMap.Add(EWeaponName::SMG_01_Tactical, SMG01TacticalSettings);
    
    FWeaponSettings SMG02CitrusSettings = SMG02Settings;
    SMG02CitrusSettings.WeaponName = EWeaponName::SMG_02_Citrus;
    GWeaponSettingsMap.Add(EWeaponName::SMG_02_Citrus, SMG02CitrusSettings);
    
    FWeaponSettings SMG02TacticalSettings = SMG02Settings;
    SMG02TacticalSettings.WeaponName = EWeaponName::SMG_02_Tactical;
    GWeaponSettingsMap.Add(EWeaponName::SMG_02_Tactical, SMG02TacticalSettings);
    
    FWeaponSettings SMG03TacticalSettings = SMG03Settings;
    SMG03TacticalSettings.WeaponName = EWeaponName::SMG_03_Tactical;
    GWeaponSettingsMap.Add(EWeaponName::SMG_03_Tactical, SMG03TacticalSettings);
    
    FWeaponSettings SMG03EvilSettings = SMG03Settings;
    SMG03EvilSettings.WeaponName = EWeaponName::SMG_03_Evil;
    GWeaponSettingsMap.Add(EWeaponName::SMG_03_Evil, SMG03EvilSettings);
    
    FWeaponSettings SMG04TacticalSettings = SMG04Settings;
    SMG04TacticalSettings.WeaponName = EWeaponName::SMG_04_Tactical;
    GWeaponSettingsMap.Add(EWeaponName::SMG_04_Tactical, SMG04TacticalSettings);
    
    FWeaponSettings SMG04ModernSettings = SMG04Settings;
    SMG04ModernSettings.WeaponName = EWeaponName::SMG_04_Modern;
    GWeaponSettingsMap.Add(EWeaponName::SMG_04_Modern, SMG04ModernSettings);
    
    FWeaponSettings SMG05ArmoredSettings = SMG05Settings;
    SMG05ArmoredSettings.WeaponName = EWeaponName::SMG_05_Armored;
    GWeaponSettingsMap.Add(EWeaponName::SMG_05_Armored, SMG05ArmoredSettings);
    
    FWeaponSettings SMG05TacticalSettings = SMG05Settings;
    SMG05TacticalSettings.WeaponName = EWeaponName::SMG_05_Tactical;
    GWeaponSettingsMap.Add(EWeaponName::SMG_05_Tactical, SMG05TacticalSettings);

    // Sniper variants
    FWeaponSettings Sniper01HitmanSettings = Sniper01Settings;
    Sniper01HitmanSettings.WeaponName = EWeaponName::Sniper_01_Hitman;
    GWeaponSettingsMap.Add(EWeaponName::Sniper_01_Hitman, Sniper01HitmanSettings);
    
    FWeaponSettings Sniper01TacticalSettings = Sniper01Settings;
    Sniper01TacticalSettings.WeaponName = EWeaponName::Sniper_01_Tactical;
    GWeaponSettingsMap.Add(EWeaponName::Sniper_01_Tactical, Sniper01TacticalSettings);
    
    FWeaponSettings Sniper02BreachSettings = Sniper02Settings;
    Sniper02BreachSettings.WeaponName = EWeaponName::Sniper_02_Breach;
    GWeaponSettingsMap.Add(EWeaponName::Sniper_02_Breach, Sniper02BreachSettings);
    
    FWeaponSettings Sniper02TacticalSettings = Sniper02Settings;
    Sniper02TacticalSettings.WeaponName = EWeaponName::Sniper_02_Tactical;
    GWeaponSettingsMap.Add(EWeaponName::Sniper_02_Tactical, Sniper02TacticalSettings);
    
    FWeaponSettings Sniper03TacticalSettings = Sniper03Settings;
    Sniper03TacticalSettings.WeaponName = EWeaponName::Sniper_03_Tactical;
    GWeaponSettingsMap.Add(EWeaponName::Sniper_03_Tactical, Sniper03TacticalSettings);

    // Other weapon variants
    FWeaponSettings Shotgun01TacticalSettings = Shotgun01Settings;
    Shotgun01TacticalSettings.WeaponName = EWeaponName::Shotgun_01_Tactical;
    GWeaponSettingsMap.Add(EWeaponName::Shotgun_01_Tactical, Shotgun01TacticalSettings);
    
    FWeaponSettings Shotgun01TechSettings = Shotgun01Settings;
    Shotgun01TechSettings.WeaponName = EWeaponName::Shotgun_01_Tech;
    GWeaponSettingsMap.Add(EWeaponName::Shotgun_01_Tech, Shotgun01TechSettings);
    
    FWeaponSettings RL01HomingSettings = RL01Settings;
    RL01HomingSettings.WeaponName = EWeaponName::Rocket_Launcher_01_Homing;
    GWeaponSettingsMap.Add(EWeaponName::Rocket_Launcher_01_Homing, RL01HomingSettings);
    
    FWeaponSettings GL01AntiTankSettings = GL01Settings;
    GL01AntiTankSettings.WeaponName = EWeaponName::Grenade_Launcher_01_AntiTank;
    GWeaponSettingsMap.Add(EWeaponName::Grenade_Launcher_01_AntiTank, GL01AntiTankSettings);
    
    FWeaponSettings GL01CitrusSettings = GL01Settings;
    GL01CitrusSettings.WeaponName = EWeaponName::Grenade_Launcher_01_Citrus;
    GWeaponSettingsMap.Add(EWeaponName::Grenade_Launcher_01_Citrus, GL01CitrusSettings);
    
    FWeaponSettings GL01TacticalSettings = GL01Settings;
    GL01TacticalSettings.WeaponName = EWeaponName::Grenade_Launcher_01_Tactical;
    GWeaponSettingsMap.Add(EWeaponName::Grenade_Launcher_01_Tactical, GL01TacticalSettings);
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
