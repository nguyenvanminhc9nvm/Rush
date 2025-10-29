#pragma once

#include "CoreMinimal.h"
#include "FFlashlightSettingsEntry.h"
#include "FLasersightSettingsEntry.h"
#include "FWeaponSkinEntry.generated.h"

struct FFlashlightSettingsEntry;
struct FLasersightSettingsEntry;
enum EWeaponSkinName : uint8;

USTRUCT(BlueprintType)
struct FWeaponSkinEntry
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon Skin")
    TEnumAsByte<EWeaponSkinName> Name;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon Skin")
    TMap<FName, UMaterialInstance*> MaterialMapBody;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon Skin")
    TMap<FName, UMaterialInstance*> MaterialMapIronsights;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon Skin")
    TMap<FName, UMaterialInstance*> MaterialMapMagazine;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon Skin")
    TMap<FName, UMaterialInstance*> MaterialMapMuzzle;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon Skin")
    TMap<FName, UMaterialInstance*> MaterialMapScope;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon Skin")
    TMap<FName, UMaterialInstance*> MaterialMapLaser;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon Skin")
    TMap<FName, UMaterialInstance*> MaterialMapGrip;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon Skin")
    FLasersightSettingsEntry RowHandleLaserSightSetting;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon Skin")
    FFlashlightSettingsEntry RowHandleFlashlightSetting;
};
