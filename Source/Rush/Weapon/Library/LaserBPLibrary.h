#pragma once

#include "CoreMinimal.h"

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Struct/FLaserEntry.h"
#include "LaserBPLibrary.generated.h"

UCLASS()
class RUSH_API ULaserBPLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Weapon Fragment")
    static FLaserEntry GetWeaponFragmentLaserByName(EWeaponIconName FragmentName);
};

