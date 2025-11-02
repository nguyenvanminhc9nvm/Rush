#pragma once

#include "CoreMinimal.h"
#include "FWeaponIronsightSetting.h"
#include "Engine/Engine.h"
#include "Engine/DataTable.h"
#include "Rush/Weapon/Enum/EWeaponName.h"
#include "FWeaponIronsightEntry.generated.h"

USTRUCT(BlueprintType)
struct RUSH_API FWeaponIronsightEntry
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ironsight")
    TEnumAsByte<EWeaponName> Name;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ironsight")
    UStaticMesh* FragmentMesh;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ironsight")
    UTexture2D* Icon;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ironsight")
    FWeaponIronsightSetting IronsightSetting;

    FWeaponIronsightEntry()
    {
        Name = EWeaponName::Assault_Rifle_01;
        FragmentMesh = nullptr;
        Icon = nullptr;
    }
};

