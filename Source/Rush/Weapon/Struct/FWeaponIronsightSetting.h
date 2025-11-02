#pragma once

#include "CoreMinimal.h"
#include "Engine/Engine.h"
#include "Rush/Weapon/Enum/EWeaponName.h"
#include "FScopeSettingsEntry.h"
#include "FWeaponIronsightSetting.generated.h"

USTRUCT(BlueprintType)
struct RUSH_API FWeaponIronsightSetting
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ironsight Settings")
    TEnumAsByte<EWeaponName> Name;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ironsight Settings")
    bool bRenderTargetRequired;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ironsight Settings")
    float RenderTargetFieldOfView;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ironsight Settings")
    TSoftObjectPtr<UTextureRenderTarget2D> RenderTargetTexture;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ironsight Settings")
    FString RenderMaterialSlotName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ironsight Settings")
    TSoftObjectPtr<UMaterialInterface> RenderMaterialReplacement;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ironsight Settings")
    FTransform OffsetStanding;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ironsight Settings")
    FTransform OffsetAiming;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ironsight Settings")
    FLagValues MultiplierLagValues;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ironsight Settings")
    float MultiplierFieldOfView;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ironsight Settings")
    float MultiplierAimingSpeed;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ironsight Settings")
    float MultiplierSensitivityYaw;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ironsight Settings")
    float MultiplierSensitivityPitch;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ironsight Settings")
    TSoftObjectPtr<UMaterialInterface> RenderMaterial;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ironsight Settings")
    float AimedFieldOfViewViewmodel;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ironsight Settings")
    bool bForceFirstPerson;

    FWeaponIronsightSetting()
    {
        Name = EWeaponName::Assault_Rifle_01;
        bRenderTargetRequired = false;
        RenderTargetFieldOfView = 5.0f;
        RenderMaterialSlotName = TEXT("Render");
        OffsetStanding = FTransform::Identity;
        OffsetAiming = FTransform::Identity;
        MultiplierFieldOfView = 1.0f;
        MultiplierAimingSpeed = 1.0f;
        MultiplierSensitivityYaw = 1.0f;
        MultiplierSensitivityPitch = 1.0f;
        AimedFieldOfViewViewmodel = 90.0f;
        bForceFirstPerson = false;
    }
};
