#pragma once

#include "CoreMinimal.h"
#include "FFlashlightSettingsEntry.h"
#include "FLasersightSettingsEntry.h"
#include "FWeaponSkinEntry.generated.h"

struct FFlashlightSettingsEntry;
struct FLasersightSettingsEntry;

USTRUCT(BlueprintType)
struct RUSH_API FWeaponSkinEntry
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon Skin")
    FString Name;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon Skin")
    TMap<FString, UMaterialInterface*> MaterialMapBody;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon Skin")
    TMap<FString, UMaterialInterface*> MaterialMapIronsights;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon Skin")
    TMap<FString, UMaterialInterface*> MaterialMapMagazine;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon Skin")
    TMap<FString, UMaterialInterface*> MaterialMapMuzzle;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon Skin")
    TMap<FString, UMaterialInterface*> MaterialMapScope;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon Skin")
    TMap<FString, UMaterialInterface*> MaterialMapLaser;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon Skin")
    TMap<FString, UMaterialInterface*> MaterialMapGrip;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon Skin")
    FLasersightSettingsEntry RowHandleLaserSightSetting;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon Skin")
    FFlashlightSettingsEntry RowHandleFlashlightSetting;
};
