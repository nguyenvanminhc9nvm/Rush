#include "ScopeSettingsLibrary.h"
#include "Engine/Engine.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Materials/MaterialInterface.h"
#include "Rush/Weapon/Enum/EWeaponIconName.h"

static TMap<EWeaponIconName, FScopeSettingsEntry> GScopeSettingsMap;

static void InitScopeSettingsMap()
{
    if (GScopeSettingsMap.Num() > 0) return;

    // Scope-01
    FScopeSettingsEntry Scope01Entry;
    Scope01Entry.Name = EWeaponIconName::Scope_01;
    Scope01Entry.bRenderTargetRequired = true;
    Scope01Entry.RenderTargetFieldOfView = 6.5f;
    Scope01Entry.RenderTargetTexture = LoadObject<UTextureRenderTarget2D>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Textures/RT_ATT_Scope_01.RT_ATT_Scope_01"));
    Scope01Entry.RenderMaterialSlotName = TEXT("Render");
    Scope01Entry.RenderMaterialReplacement = LoadObject<UMaterialInterface>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Unlit.MI_ATT_Scope_Unlit"));
    Scope01Entry.OffsetStanding = FTransform::Identity;
    Scope01Entry.OffsetAiming = FTransform(FVector(0.0f, 15.0f, 0.0f));
    Scope01Entry.MultiplierFieldOfView = 0.8f;
    Scope01Entry.MultiplierAimingSpeed = 1.0f;
    Scope01Entry.MultiplierSensitivityYaw = 0.7f;
    Scope01Entry.MultiplierSensitivityPitch = 0.7f;
    Scope01Entry.RenderMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_01_Render.MI_ATT_Scope_01_Render"));
    Scope01Entry.AimedFieldOfViewViewmodel = 100.0f;
    Scope01Entry.bForceFirstPerson = false;
    
    // Lag Values for Scope-01
    Scope01Entry.MultiplierLagValues.Movement.Location.Horizontal = FVector(1.0f, 1.0f, 1.0f);
    Scope01Entry.MultiplierLagValues.Movement.Location.Vertical = FVector(1.0f, 1.0f, 1.0f);
    Scope01Entry.MultiplierLagValues.Movement.Rotation.Horizontal = FVector(1.0f, 1.0f, 1.0f);
    Scope01Entry.MultiplierLagValues.Movement.Rotation.Vertical = FVector(1.0f, 1.0f, 1.0f);
    Scope01Entry.MultiplierLagValues.Look.Location.Horizontal = FVector(2.0f, 2.0f, 2.0f);
    Scope01Entry.MultiplierLagValues.Look.Location.Vertical = FVector(2.0f, 2.0f, 2.0f);
    Scope01Entry.MultiplierLagValues.Look.Rotation.Horizontal = FVector(0.0f, 0.0f, 0.0f);
    Scope01Entry.MultiplierLagValues.Look.Rotation.Vertical = FVector(0.0f, 0.0f, 0.0f);
    Scope01Entry.MultiplierLagValues.SpringInterpolation.Stiffness = 0.4f;
    Scope01Entry.MultiplierLagValues.SpringInterpolation.CriticalDampingFactor = 0.5f;
    Scope01Entry.MultiplierLagValues.SpringInterpolation.Mass = 0.006f;
    
    GScopeSettingsMap.Add(EWeaponIconName::Scope_01, Scope01Entry);

    // Scope-02
    FScopeSettingsEntry Scope02Entry;
    Scope02Entry.Name = EWeaponIconName::Scope_02;
    Scope02Entry.bRenderTargetRequired = false;
    Scope02Entry.RenderTargetFieldOfView = 6.5f;
    Scope02Entry.RenderTargetTexture = LoadObject<UTextureRenderTarget2D>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Textures/RT_ATT_Scope_02.RT_ATT_Scope_02"));
    Scope02Entry.RenderMaterialSlotName = TEXT("Render");
    Scope02Entry.RenderMaterialReplacement = LoadObject<UMaterialInterface>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Unlit.MI_ATT_Scope_Unlit"));
    Scope02Entry.OffsetStanding = FTransform::Identity;
    Scope02Entry.OffsetAiming = FTransform(FVector(0.0f, 15.0f, 0.0f));
    Scope02Entry.MultiplierFieldOfView = 0.8f;
    Scope02Entry.MultiplierAimingSpeed = 1.0f;
    Scope02Entry.MultiplierSensitivityYaw = 0.7f;
    Scope02Entry.MultiplierSensitivityPitch = 0.7f;
    Scope02Entry.RenderMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_02_Render.MI_ATT_Scope_02_Render"));
    Scope02Entry.AimedFieldOfViewViewmodel = 100.0f;
    Scope02Entry.bForceFirstPerson = false;
    
    // Copy lag values from Scope-01 (same values)
    Scope02Entry.MultiplierLagValues = Scope01Entry.MultiplierLagValues;
    
    GScopeSettingsMap.Add(EWeaponIconName::Scope_02, Scope02Entry);

    // Scope-03
    FScopeSettingsEntry Scope03Entry;
    Scope03Entry.Name = EWeaponIconName::Scope_03;
    Scope03Entry.bRenderTargetRequired = false;
    Scope03Entry.RenderTargetFieldOfView = 6.5f;
    Scope03Entry.RenderTargetTexture = LoadObject<UTextureRenderTarget2D>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Textures/RT_ATT_Scope_03.RT_ATT_Scope_03"));
    Scope03Entry.RenderMaterialSlotName = TEXT("Render");
    Scope03Entry.RenderMaterialReplacement = LoadObject<UMaterialInterface>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Unlit.MI_ATT_Scope_Unlit"));
    Scope03Entry.OffsetStanding = FTransform::Identity;
    Scope03Entry.OffsetAiming = FTransform(FVector(0.0f, 15.0f, 0.0f));
    Scope03Entry.MultiplierFieldOfView = 0.8f;
    Scope03Entry.MultiplierAimingSpeed = 1.0f;
    Scope03Entry.MultiplierSensitivityYaw = 0.7f;
    Scope03Entry.MultiplierSensitivityPitch = 0.7f;
    Scope03Entry.RenderMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_03_Render.MI_ATT_Scope_03_Render"));
    Scope03Entry.AimedFieldOfViewViewmodel = 100.0f;
    Scope03Entry.bForceFirstPerson = false;
    
    // Copy lag values from Scope-01 (same values)
    Scope03Entry.MultiplierLagValues = Scope01Entry.MultiplierLagValues;
    
    GScopeSettingsMap.Add(EWeaponIconName::Scope_03, Scope03Entry);

    // Scope-04
    FScopeSettingsEntry Scope04Entry;
    Scope04Entry.Name = EWeaponIconName::Scope_04;
    Scope04Entry.bRenderTargetRequired = true;
    Scope04Entry.RenderTargetFieldOfView = 6.5f;
    Scope04Entry.RenderTargetTexture = LoadObject<UTextureRenderTarget2D>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Textures/RT_ATT_Scope_04.RT_ATT_Scope_04"));
    Scope04Entry.RenderMaterialSlotName = TEXT("Render");
    Scope04Entry.RenderMaterialReplacement = LoadObject<UMaterialInterface>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Unlit.MI_ATT_Scope_Unlit"));
    Scope04Entry.OffsetStanding = FTransform::Identity;
    Scope04Entry.OffsetAiming = FTransform(FVector(0.0f, 15.0f, 0.0f));
    Scope04Entry.MultiplierFieldOfView = 0.8f;
    Scope04Entry.MultiplierAimingSpeed = 1.0f;
    Scope04Entry.MultiplierSensitivityYaw = 0.6f;
    Scope04Entry.MultiplierSensitivityPitch = 0.6f;
    Scope04Entry.RenderMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_04_Render.MI_ATT_Scope_04_Render"));
    Scope04Entry.AimedFieldOfViewViewmodel = 100.0f;
    Scope04Entry.bForceFirstPerson = false;
    
    // Copy lag values from Scope-01 (same values)
    Scope04Entry.MultiplierLagValues = Scope01Entry.MultiplierLagValues;
    
    GScopeSettingsMap.Add(EWeaponIconName::Scope_04, Scope04Entry);

    // Scope-05
    FScopeSettingsEntry Scope05Entry;
    Scope05Entry.Name = EWeaponIconName::Scope_05;
    Scope05Entry.bRenderTargetRequired = true;
    Scope05Entry.RenderTargetFieldOfView = 6.5f;
    Scope05Entry.RenderTargetTexture = LoadObject<UTextureRenderTarget2D>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Textures/RT_ATT_Scope_05.RT_ATT_Scope_05"));
    Scope05Entry.RenderMaterialSlotName = TEXT("Render");
    Scope05Entry.RenderMaterialReplacement = LoadObject<UMaterialInterface>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Unlit.MI_ATT_Scope_Unlit"));
    Scope05Entry.OffsetStanding = FTransform::Identity;
    Scope05Entry.OffsetAiming = FTransform(FVector(0.0f, 15.0f, 0.0f));
    Scope05Entry.MultiplierFieldOfView = 0.8f;
    Scope05Entry.MultiplierAimingSpeed = 1.0f;
    Scope05Entry.MultiplierSensitivityYaw = 0.6f;
    Scope05Entry.MultiplierSensitivityPitch = 0.6f;
    Scope05Entry.RenderMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_05_Render.MI_ATT_Scope_05_Render"));
    Scope05Entry.AimedFieldOfViewViewmodel = 100.0f;
    Scope05Entry.bForceFirstPerson = true;
    
    // Copy lag values from Scope-01 (same values)
    Scope05Entry.MultiplierLagValues = Scope01Entry.MultiplierLagValues;
    
    GScopeSettingsMap.Add(EWeaponIconName::Scope_05, Scope05Entry);

    // Scope-06
    FScopeSettingsEntry Scope06Entry;
    Scope06Entry.Name = EWeaponIconName::Scope_06;
    Scope06Entry.bRenderTargetRequired = true;
    Scope06Entry.RenderTargetFieldOfView = 6.5f;
    Scope06Entry.RenderTargetTexture = LoadObject<UTextureRenderTarget2D>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Textures/RT_ATT_Scope_06.RT_ATT_Scope_06"));
    Scope06Entry.RenderMaterialSlotName = TEXT("Render");
    Scope06Entry.RenderMaterialReplacement = LoadObject<UMaterialInterface>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Unlit.MI_ATT_Scope_Unlit"));
    Scope06Entry.OffsetStanding = FTransform::Identity;
    Scope06Entry.OffsetAiming = FTransform(FVector(0.0f, 15.0f, 0.0f));
    Scope06Entry.MultiplierFieldOfView = 0.8f;
    Scope06Entry.MultiplierAimingSpeed = 1.0f;
    Scope06Entry.MultiplierSensitivityYaw = 0.6f;
    Scope06Entry.MultiplierSensitivityPitch = 0.6f;
    Scope06Entry.RenderMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_06_Render.MI_ATT_Scope_06_Render"));
    Scope06Entry.AimedFieldOfViewViewmodel = 100.0f;
    Scope06Entry.bForceFirstPerson = true;
    
    // Copy lag values from Scope-01 (same values)
    Scope06Entry.MultiplierLagValues = Scope01Entry.MultiplierLagValues;
    
    GScopeSettingsMap.Add(EWeaponIconName::Scope_06, Scope06Entry);

    // Scope-07
    FScopeSettingsEntry Scope07Entry;
    Scope07Entry.Name = EWeaponIconName::Scope_07;
    Scope07Entry.bRenderTargetRequired = true;
    Scope07Entry.RenderTargetFieldOfView = 6.5f;
    Scope07Entry.RenderTargetTexture = LoadObject<UTextureRenderTarget2D>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Textures/RT_ATT_Scope_07.RT_ATT_Scope_07"));
    Scope07Entry.RenderMaterialSlotName = TEXT("Render");
    Scope07Entry.RenderMaterialReplacement = LoadObject<UMaterialInterface>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Unlit.MI_ATT_Scope_Unlit"));
    Scope07Entry.OffsetStanding = FTransform::Identity;
    Scope07Entry.OffsetAiming = FTransform(FVector(0.0f, 15.0f, 0.0f));
    Scope07Entry.MultiplierFieldOfView = 0.8f;
    Scope07Entry.MultiplierAimingSpeed = 1.0f;
    Scope07Entry.MultiplierSensitivityYaw = 0.6f;
    Scope07Entry.MultiplierSensitivityPitch = 0.6f;
    Scope07Entry.RenderMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_07_Render.MI_ATT_Scope_07_Render"));
    Scope07Entry.AimedFieldOfViewViewmodel = 100.0f;
    Scope07Entry.bForceFirstPerson = true;
    
    // Copy lag values from Scope-01 (same values)
    Scope07Entry.MultiplierLagValues = Scope01Entry.MultiplierLagValues;
    
    GScopeSettingsMap.Add(EWeaponIconName::Scope_07, Scope07Entry);

    // Scope-08
    FScopeSettingsEntry Scope08Entry;
    Scope08Entry.Name = EWeaponIconName::Scope_08;
    Scope08Entry.bRenderTargetRequired = true;
    Scope08Entry.RenderTargetFieldOfView = 6.5f;
    Scope08Entry.RenderTargetTexture = LoadObject<UTextureRenderTarget2D>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Textures/RT_ATT_Scope_08.RT_ATT_Scope_08"));
    Scope08Entry.RenderMaterialSlotName = TEXT("Render");
    Scope08Entry.RenderMaterialReplacement = LoadObject<UMaterialInterface>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Unlit.MI_ATT_Scope_Unlit"));
    Scope08Entry.OffsetStanding = FTransform::Identity;
    Scope08Entry.OffsetAiming = FTransform(FVector(0.0f, 15.0f, 0.0f));
    Scope08Entry.MultiplierFieldOfView = 0.8f;
    Scope08Entry.MultiplierAimingSpeed = 1.0f;
    Scope08Entry.MultiplierSensitivityYaw = 0.6f;
    Scope08Entry.MultiplierSensitivityPitch = 0.6f;
    Scope08Entry.RenderMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_08_Render.MI_ATT_Scope_08_Render"));
    Scope08Entry.AimedFieldOfViewViewmodel = 100.0f;
    Scope08Entry.bForceFirstPerson = true;
    
    // Copy lag values from Scope-01 (same values)
    Scope08Entry.MultiplierLagValues = Scope01Entry.MultiplierLagValues;
    
    GScopeSettingsMap.Add(EWeaponIconName::Scope_08, Scope08Entry);
}

FScopeSettingsEntry UScopeSettingsLibrary::GetScopeSettingsByName(EWeaponIconName ScopeName)
{
    InitScopeSettingsMap();
    if (GScopeSettingsMap.Contains(ScopeName))
    {
        return GScopeSettingsMap[ScopeName];
    }
    return FScopeSettingsEntry();
}

TArray<FScopeSettingsEntry> UScopeSettingsLibrary::GetAllScopeSettings()
{
    InitScopeSettingsMap();
    TArray<FScopeSettingsEntry> AllSettings;
    GScopeSettingsMap.GenerateValueArray(AllSettings);
    return AllSettings;
}
