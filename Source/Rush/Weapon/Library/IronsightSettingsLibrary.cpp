#include "IronsightSettingsLibrary.h"
#include "Engine/Engine.h"
#include "Engine/DataTable.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Materials/MaterialInterface.h"


static TMap<EWeaponName, FWeaponIronsightSetting> GIronsightSettingMap;

static void InitIronsightSettingMap()
{
    if (GIronsightSettingMap.Num() > 0) return;

    // Helper function to create lag values
    auto CreateLagValues = [](float MovementHorizontalX, float MovementHorizontalY, float MovementHorizontalZ,
                              float MovementVerticalX, float MovementVerticalY, float MovementVerticalZ,
                              float LookHorizontalX, float LookHorizontalY, float LookHorizontalZ,
                              float LookVerticalX, float LookVerticalY, float LookVerticalZ,
                              float Stiffness, float CriticalDampingFactor, float Mass) -> FLagValues
    {
        FLagValues LagValues;
        
        // Movement Location
        LagValues.Movement.Location.Horizontal = FVector(MovementHorizontalX, MovementHorizontalY, MovementHorizontalZ);
        LagValues.Movement.Location.Vertical = FVector(MovementVerticalX, MovementVerticalY, MovementVerticalZ);
        
        // Movement Rotation
        LagValues.Movement.Rotation.Horizontal = FVector(MovementHorizontalX, MovementHorizontalY, MovementHorizontalZ);
        LagValues.Movement.Rotation.Vertical = FVector(MovementVerticalX, MovementVerticalY, MovementVerticalZ);
        
        // Look Location
        LagValues.Look.Location.Horizontal = FVector(LookHorizontalX, LookHorizontalY, LookHorizontalZ);
        LagValues.Look.Location.Vertical = FVector(LookVerticalX, LookVerticalY, LookVerticalZ);
        
        // Look Rotation
        LagValues.Look.Rotation.Horizontal = FVector(LookHorizontalX, LookHorizontalY, LookHorizontalZ);
        LagValues.Look.Rotation.Vertical = FVector(LookVerticalX, LookVerticalY, LookVerticalZ);
        
        // Spring Interpolation
        LagValues.SpringInterpolation.Stiffness = Stiffness;
        LagValues.SpringInterpolation.CriticalDampingFactor = CriticalDampingFactor;
        LagValues.SpringInterpolation.Mass = Mass;
        
        return LagValues;
    };

    // Helper function to create transform from JSON values
    auto CreateTransform = [](float RotX, float RotY, float RotZ, float RotW, float TransX, float TransY, float TransZ, float ScaleX, float ScaleY, float ScaleZ) -> FTransform
    {
        FQuat Rotation(RotX, RotY, RotZ, RotW);
        FVector Translation(TransX, TransY, TransZ);
        FVector Scale3D(ScaleX, ScaleY, ScaleZ);
        return FTransform(Rotation, Translation, Scale3D);
    };

    // Helper function to create ironsight setting
    auto CreateIronsightSetting = [&](EWeaponName WeaponName, bool bRenderTargetRequired, float RenderTargetFieldOfView,
                                       const FString& RenderTargetTexturePath, const FString& RenderMaterialSlotName,
                                       const FString& RenderMaterialReplacementPath,
                                       const FTransform& OffsetStanding, const FTransform& OffsetAiming,
                                       const FLagValues& MultiplierLagValues, float MultiplierFieldOfView,
                                       float MultiplierAimingSpeed, float MultiplierSensitivityYaw, float MultiplierSensitivityPitch,
                                       const FString& RenderMaterialPath, float AimedFieldOfViewViewmodel, bool bForceFirstPerson) -> FWeaponIronsightSetting
    {
        FWeaponIronsightSetting Setting;
        Setting.Name = WeaponName;
        Setting.bRenderTargetRequired = bRenderTargetRequired;
        Setting.RenderTargetFieldOfView = RenderTargetFieldOfView;
        if (RenderTargetTexturePath != TEXT("None"))
        {
            Setting.RenderTargetTexture = TSoftObjectPtr<UTextureRenderTarget2D>(FSoftObjectPath(RenderTargetTexturePath));
        }
        Setting.RenderMaterialSlotName = RenderMaterialSlotName;
        if (RenderMaterialReplacementPath != TEXT("None"))
        {
            Setting.RenderMaterialReplacement = TSoftObjectPtr<UMaterialInterface>(FSoftObjectPath(RenderMaterialReplacementPath));
        }
        Setting.OffsetStanding = OffsetStanding;
        Setting.OffsetAiming = OffsetAiming;
        Setting.MultiplierLagValues = MultiplierLagValues;
        Setting.MultiplierFieldOfView = MultiplierFieldOfView;
        Setting.MultiplierAimingSpeed = MultiplierAimingSpeed;
        Setting.MultiplierSensitivityYaw = MultiplierSensitivityYaw;
        Setting.MultiplierSensitivityPitch = MultiplierSensitivityPitch;
        if (RenderMaterialPath != TEXT("None"))
        {
            Setting.RenderMaterial = TSoftObjectPtr<UMaterialInterface>(FSoftObjectPath(RenderMaterialPath));
        }
        Setting.AimedFieldOfViewViewmodel = AimedFieldOfViewViewmodel;
        Setting.bForceFirstPerson = bForceFirstPerson;
        return Setting;
    };

    // Hidden (using AR01 as base)
    FWeaponIronsightSetting HiddenSetting = CreateIronsightSetting(
        EWeaponName::Assault_Rifle_01,
        false, 5.0f, TEXT("None"), TEXT("Render"), TEXT("None"),
        FTransform::Identity, FTransform::Identity,
        CreateLagValues(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0.4f, 0.5f, 0.006f),
        1.0f, 1.0f, 1.0f, 1.0f, TEXT("None"), 90.0f, false
    );

    // Assault-Rifle-01
    FWeaponIronsightSetting AR01Setting = CreateIronsightSetting(
        EWeaponName::Assault_Rifle_01,
        false, 5.0f, TEXT("None"), TEXT("Render"), TEXT("None"),
        CreateTransform(0, 0, 0, 1, 0, 0, 0, 1, 1, 1),
        CreateTransform(0, 0, 0, 1, 0, -1, 0, 1, 1, 1),
        CreateLagValues(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0.4f, 0.5f, 0.006f),
        0.8f, 1.0f, 0.8f, 0.8f, TEXT("None"), 100.0f, false
    );
    GIronsightSettingMap.Add(EWeaponName::Assault_Rifle_01, AR01Setting);

    // Assault-Rifle-02
    FWeaponIronsightSetting AR02Setting = CreateIronsightSetting(
        EWeaponName::Assault_Rifle_02,
        false, 5.0f, TEXT("None"), TEXT("Render"), TEXT("None"),
        CreateTransform(0, 0, 0, 1, 0, 0, 0, 1, 1, 1),
        CreateTransform(0, 0, 0, 1, 0, 16, 0, 1, 1, 1),
        CreateLagValues(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0.4f, 0.5f, 0.006f),
        0.8f, 1.0f, 0.8f, 0.8f, TEXT("None"), 100.0f, false
    );
    GIronsightSettingMap.Add(EWeaponName::Assault_Rifle_02, AR02Setting);

    // Assault-Rifle-03 - using default values for now, will need to read from JSON
    FWeaponIronsightSetting AR03Setting = CreateIronsightSetting(
        EWeaponName::Assault_Rifle_03,
        false, 5.0f, TEXT("None"), TEXT("Render"), TEXT("None"),
        CreateTransform(0, 0, 0, 1, 0, 0, 0, 1, 1, 1),
        CreateTransform(0, 0, 0, 1, 0, -1, 0, 1, 1, 1),
        CreateLagValues(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0.4f, 0.5f, 0.006f),
        0.8f, 1.0f, 0.8f, 0.8f, TEXT("None"), 100.0f, false
    );
    GIronsightSettingMap.Add(EWeaponName::Assault_Rifle_03, AR03Setting);

    // Handgun-01
    FWeaponIronsightSetting Handgun01Setting = CreateIronsightSetting(
        EWeaponName::Handgun_01,
        false, 5.0f, TEXT("None"), TEXT("Render"), TEXT("None"),
        CreateTransform(0, 0, 0, 1, 0, 0, 0, 1, 1, 1),
        CreateTransform(0, 0, 0, 1, 0, -1, 0, 1, 1, 1),
        CreateLagValues(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0.4f, 0.5f, 0.006f),
        0.8f, 1.0f, 0.8f, 0.8f, TEXT("None"), 100.0f, false
    );
    GIronsightSettingMap.Add(EWeaponName::Handgun_01, Handgun01Setting);

    // Handgun-02
    FWeaponIronsightSetting Handgun02Setting = CreateIronsightSetting(
        EWeaponName::Handgun_02,
        false, 5.0f, TEXT("None"), TEXT("Render"), TEXT("None"),
        CreateTransform(0, 0, 0, 1, 0, 0, 0, 1, 1, 1),
        CreateTransform(0, 0, 0, 1, 0, -1, 0, 1, 1, 1),
        CreateLagValues(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0.4f, 0.5f, 0.006f),
        0.8f, 1.0f, 0.8f, 0.8f, TEXT("None"), 100.0f, false
    );
    GIronsightSettingMap.Add(EWeaponName::Handgun_02, Handgun02Setting);

    // Handgun-03
    FWeaponIronsightSetting Handgun03Setting = CreateIronsightSetting(
        EWeaponName::Handgun_03,
        false, 5.0f, TEXT("None"), TEXT("Render"), TEXT("None"),
        CreateTransform(0, 0, 0, 1, 0, 0, 0, 1, 1, 1),
        CreateTransform(0, 0, 0, 1, 0, -1, 0, 1, 1, 1),
        CreateLagValues(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0.4f, 0.5f, 0.006f),
        0.8f, 1.0f, 0.8f, 0.8f, TEXT("None"), 100.0f, false
    );
    GIronsightSettingMap.Add(EWeaponName::Handgun_03, Handgun03Setting);

    // Handgun-04
    FWeaponIronsightSetting Handgun04Setting = CreateIronsightSetting(
        EWeaponName::Handgun_04,
        false, 5.0f, TEXT("None"), TEXT("Render"), TEXT("None"),
        CreateTransform(0, 0, 0, 1, 0, 0, 0, 1, 1, 1),
        CreateTransform(0, 0, 0, 1, 0, -1, 0, 1, 1, 1),
        CreateLagValues(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0.4f, 0.5f, 0.006f),
        0.8f, 1.0f, 0.8f, 0.8f, TEXT("None"), 100.0f, false
    );
    GIronsightSettingMap.Add(EWeaponName::Handgun_04, Handgun04Setting);

    // Launcher-Rocket-01
    FWeaponIronsightSetting RL01Setting = CreateIronsightSetting(
        EWeaponName::Rocket_Launcher_01,
        false, 5.0f, TEXT("None"), TEXT("Render"), TEXT("None"),
        CreateTransform(0, 0, 0, 1, 0, 0, 0, 1, 1, 1),
        CreateTransform(0, 0, 0, 1, 0, -1, 0, 1, 1, 1),
        CreateLagValues(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0.4f, 0.5f, 0.006f),
        0.8f, 1.0f, 0.8f, 0.8f, TEXT("None"), 100.0f, false
    );
    GIronsightSettingMap.Add(EWeaponName::Rocket_Launcher_01, RL01Setting);

    // Launcher-Grenade-01
    FWeaponIronsightSetting GL01Setting = CreateIronsightSetting(
        EWeaponName::Grenade_Launcher_01,
        false, 5.0f, TEXT("None"), TEXT("Render"), TEXT("None"),
        CreateTransform(0, 0, 0, 1, 0, 0, 0, 1, 1, 1),
        CreateTransform(0, 0, 0, 1, 0, -1, 0, 1, 1, 1),
        CreateLagValues(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0.4f, 0.5f, 0.006f),
        0.8f, 1.0f, 0.8f, 0.8f, TEXT("None"), 100.0f, false
    );
    GIronsightSettingMap.Add(EWeaponName::Grenade_Launcher_01, GL01Setting);

    // Shotgun-01
    FWeaponIronsightSetting Shotgun01Setting = CreateIronsightSetting(
        EWeaponName::Shotgun_01,
        false, 5.0f, TEXT("None"), TEXT("Render"), TEXT("None"),
        CreateTransform(0, 0, 0, 1, 0, 0, 0, 1, 1, 1),
        CreateTransform(0, 0, 0, 1, 0, -1, 0, 1, 1, 1),
        CreateLagValues(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0.4f, 0.5f, 0.006f),
        0.8f, 1.0f, 0.8f, 0.8f, TEXT("None"), 100.0f, false
    );
    GIronsightSettingMap.Add(EWeaponName::Shotgun_01, Shotgun01Setting);

    // SMG-01
    FWeaponIronsightSetting SMG01Setting = CreateIronsightSetting(
        EWeaponName::SMG_01,
        false, 5.0f, TEXT("None"), TEXT("Render"), TEXT("None"),
        CreateTransform(0, 0, 0, 1, 0, 0, 0, 1, 1, 1),
        CreateTransform(0, 0, 0, 1, 0, -1, 0, 1, 1, 1),
        CreateLagValues(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0.4f, 0.5f, 0.006f),
        0.8f, 1.0f, 0.8f, 0.8f, TEXT("None"), 100.0f, false
    );
    GIronsightSettingMap.Add(EWeaponName::SMG_01, SMG01Setting);

    // SMG-02
    FWeaponIronsightSetting SMG02Setting = CreateIronsightSetting(
        EWeaponName::SMG_02,
        false, 5.0f, TEXT("None"), TEXT("Render"), TEXT("None"),
        CreateTransform(0, 0, 0, 1, 0, 0, 0, 1, 1, 1),
        CreateTransform(0, 0, 0, 1, 0, -1, 0, 1, 1, 1),
        CreateLagValues(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0.4f, 0.5f, 0.006f),
        0.8f, 1.0f, 0.8f, 0.8f, TEXT("None"), 100.0f, false
    );
    GIronsightSettingMap.Add(EWeaponName::SMG_02, SMG02Setting);

    // SMG-03
    FWeaponIronsightSetting SMG03Setting = CreateIronsightSetting(
        EWeaponName::SMG_03,
        false, 5.0f, TEXT("None"), TEXT("Render"), TEXT("None"),
        CreateTransform(0, 0, 0, 1, 0, 0, 0, 1, 1, 1),
        CreateTransform(0, 0, 0, 1, 0, -1, 0, 1, 1, 1),
        CreateLagValues(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0.4f, 0.5f, 0.006f),
        0.8f, 1.0f, 0.8f, 0.8f, TEXT("None"), 100.0f, false
    );
    GIronsightSettingMap.Add(EWeaponName::SMG_03, SMG03Setting);

    // SMG-04
    FWeaponIronsightSetting SMG04Setting = CreateIronsightSetting(
        EWeaponName::SMG_04,
        false, 5.0f, TEXT("None"), TEXT("Render"), TEXT("None"),
        CreateTransform(0, 0, 0, 1, 0, 0, 0, 1, 1, 1),
        CreateTransform(0, 0, 0, 1, 0, -1, 0, 1, 1, 1),
        CreateLagValues(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0.4f, 0.5f, 0.006f),
        0.8f, 1.0f, 0.8f, 0.8f, TEXT("None"), 100.0f, false
    );
    GIronsightSettingMap.Add(EWeaponName::SMG_04, SMG04Setting);

    // SMG-05
    FWeaponIronsightSetting SMG05Setting = CreateIronsightSetting(
        EWeaponName::SMG_05,
        false, 5.0f, TEXT("None"), TEXT("Render"), TEXT("None"),
        CreateTransform(0, 0, 0, 1, 0, 0, 0, 1, 1, 1),
        CreateTransform(0, 0, 0, 1, 0, -1, 0, 1, 1, 1),
        CreateLagValues(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0.4f, 0.5f, 0.006f),
        0.8f, 1.0f, 0.8f, 0.8f, TEXT("None"), 100.0f, false
    );
    GIronsightSettingMap.Add(EWeaponName::SMG_05, SMG05Setting);

    // Sniper-01
    FWeaponIronsightSetting Sniper01Setting = CreateIronsightSetting(
        EWeaponName::Sniper_01,
        false, 5.0f, TEXT("None"), TEXT("Render"), TEXT("None"),
        CreateTransform(0, 0, 0, 1, 0, 0, 0, 1, 1, 1),
        CreateTransform(0, 0, 0, 1, 0, -1, 0, 1, 1, 1),
        CreateLagValues(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0.4f, 0.5f, 0.006f),
        0.8f, 1.0f, 0.8f, 0.8f, TEXT("None"), 100.0f, false
    );
    GIronsightSettingMap.Add(EWeaponName::Sniper_01, Sniper01Setting);

    // Sniper-02
    FWeaponIronsightSetting Sniper02Setting = CreateIronsightSetting(
        EWeaponName::Sniper_02,
        false, 5.0f, TEXT("None"), TEXT("Render"), TEXT("None"),
        CreateTransform(0, 0, 0, 1, 0, 0, 0, 1, 1, 1),
        CreateTransform(0, 0, 0, 1, 0, -1, 0, 1, 1, 1),
        CreateLagValues(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0.4f, 0.5f, 0.006f),
        0.8f, 1.0f, 0.8f, 0.8f, TEXT("None"), 100.0f, false
    );
    GIronsightSettingMap.Add(EWeaponName::Sniper_02, Sniper02Setting);

    // Sniper-03
    FWeaponIronsightSetting Sniper03Setting = CreateIronsightSetting(
        EWeaponName::Sniper_03,
        false, 5.0f, TEXT("None"), TEXT("Render"), TEXT("None"),
        CreateTransform(0, 0, 0, 1, 0, 0, 0, 1, 1, 1),
        CreateTransform(0, 0, 0, 1, 0, -1, 0, 1, 1, 1),
        CreateLagValues(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0.4f, 0.5f, 0.006f),
        0.8f, 1.0f, 0.8f, 0.8f, TEXT("None"), 100.0f, false
    );
    GIronsightSettingMap.Add(EWeaponName::Sniper_03, Sniper03Setting);
}

FWeaponIronsightSetting UIronsightSettingsLibrary::GetIronsightSettingByWeaponName(EWeaponName WeaponName)
{
    InitIronsightSettingMap();
    if (GIronsightSettingMap.Contains(WeaponName))
    {
        return GIronsightSettingMap[WeaponName];
    }
    return FWeaponIronsightSetting();
}


