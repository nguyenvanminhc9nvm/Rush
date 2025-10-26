#pragma once

#include "CoreMinimal.h"
#include "Engine/Engine.h"
#include "FScopeSettingsEntry.generated.h"

enum EWeaponIconName : uint8;

USTRUCT(BlueprintType)
struct RUSH_API FSpringInterpolation
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Stiffness;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float CriticalDampingFactor;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Mass;
};

USTRUCT(BlueprintType)
struct RUSH_API FDirectionVectors
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector Horizontal;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector Vertical;
};


USTRUCT(BlueprintType)
struct RUSH_API FDirectionTransform
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FDirectionVectors Location;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FDirectionVectors Rotation;
};


// Lag Values Structure
USTRUCT(BlueprintType)
struct RUSH_API FLagValues
{
    GENERATED_BODY()
        
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Lag Values")
    FDirectionTransform Movement;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Lag Values")
    FDirectionTransform Look;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Lag Values")
    FSpringInterpolation SpringInterpolation;
};


USTRUCT(BlueprintType)
struct RUSH_API FScopeSettingsEntry
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Scope Settings")
    TEnumAsByte<EWeaponIconName> Name;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Scope Settings")
    bool bRenderTargetRequired;
 
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Scope Settings")
    float RenderTargetFieldOfView;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Scope Settings")
    TSoftObjectPtr<UTextureRenderTarget2D> RenderTargetTexture;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Scope Settings")
    FString RenderMaterialSlotName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Scope Settings")
    TSoftObjectPtr<UMaterialInterface> RenderMaterialReplacement;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Scope Settings")
    FTransform OffsetStanding;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Scope Settings")
    FTransform OffsetAiming;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Scope Settings")
    float MultiplierFieldOfView;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Scope Settings")
    float MultiplierAimingSpeed;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Scope Settings")
    float MultiplierSensitivityYaw;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Scope Settings")
    float MultiplierSensitivityPitch;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Scope Settings")
    TSoftObjectPtr<UMaterialInterface> RenderMaterial;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Scope Settings")
    float AimedFieldOfViewViewmodel;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Scope Settings")
    bool bForceFirstPerson;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Scope Settings")
    FLagValues MultiplierLagValues;
};
