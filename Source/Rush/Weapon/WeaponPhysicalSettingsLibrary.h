#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "WeaponPhysicalSettingsLibrary.generated.h"

UENUM(BlueprintType)
enum class EWeaponPhysicalState : uint8
{
    Hidden                    UMETA(DisplayName = "Hidden"),
    Icon                      UMETA(DisplayName = "Icon"),
    Static                    UMETA(DisplayName = "Static"),
    Physics                   UMETA(DisplayName = "Physics"),
    Physics_Attached          UMETA(DisplayName = "Physics-Attached"),
    Viewmodel                 UMETA(DisplayName = "Viewmodel"),
    Viewmodel_Third_Person    UMETA(DisplayName = "Viewmodel-Third-Person"),
    Static_Shadow             UMETA(DisplayName = "Static-Shadow")
};

USTRUCT(BlueprintType)
struct RUSH_API FWeaponPhysicalSettings
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Physical Settings")
    FName CollisionProfileName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Physical Settings")
    bool bSimulatePhysics;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Physical Settings")
    bool bCastShadow;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Physical Settings")
    bool bVisible;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Physical Settings")
    bool bHiddenInGame;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Physical Settings")
    bool bReceivesDecals;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Physical Settings")
    bool bRenderCustomDepth;

    FWeaponPhysicalSettings()
    {
        CollisionProfileName = NAME_None;
        bSimulatePhysics = false;
        bCastShadow = false;
        bVisible = true;
        bHiddenInGame = false;
        bReceivesDecals = false;
        bRenderCustomDepth = false;
    }
};

UCLASS()
class RUSH_API UWeaponPhysicalSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Weapon Physical Settings")
    static FWeaponPhysicalSettings GetPhysicalSettingsByName(EWeaponPhysicalState PhysicalState);

};
