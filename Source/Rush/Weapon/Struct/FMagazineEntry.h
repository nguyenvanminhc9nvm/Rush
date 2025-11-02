#pragma once

#include "CoreMinimal.h"
#include "Engine/Engine.h"
#include "Rush/Weapon/Enum/AmmunationType.h"
#include "Rush/Weapon/Enum/EWeaponName.h"
#include "FMagazineEntry.generated.h"

USTRUCT(BlueprintType)
struct RUSH_API FMagazineEntry
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Magazine")
    TEnumAsByte<EWeaponName> Name;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Magazine")
    UStaticMesh* Mesh;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Magazine")
    UTexture2D* Texture;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Magazine")
    TEnumAsByte<EAmmunationType> AmmunitionType;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Magazine")
    int32 AmmunitionTotal;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Magazine")
    TSubclassOf<AActor> CasingType;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Magazine")
    FVector2D CasingImpulseRange;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Magazine")
    float CasingOffset;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Magazine")
    TSubclassOf<AActor> ProjectileType;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Magazine")
    FVector2D ProjectileVelocityRange;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Magazine")
    FVector2D ProjectilePelletRange;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Magazine")
    bool bAmmunitionVisualUpdate;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Magazine")
    int32 AmmunitionVisualStartingIndex;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Magazine")
    FString AmmunitionVisualHiddenMaterial;

    FMagazineEntry()
    {
        Name = EWeaponName::Assault_Rifle_01;
        Mesh = nullptr;
        Texture = nullptr;
        AmmunitionType = EAmmunationType::SMG;
        AmmunitionTotal = 0;
        CasingType = nullptr;
        CasingImpulseRange = FVector2D::ZeroVector;
        CasingOffset = 0.0f;
        ProjectileType = nullptr;
        ProjectileVelocityRange = FVector2D::ZeroVector;
        ProjectilePelletRange = FVector2D::ZeroVector;
        bAmmunitionVisualUpdate = false;
        AmmunitionVisualStartingIndex = 1;
        AmmunitionVisualHiddenMaterial = TEXT("None");
    }
};

