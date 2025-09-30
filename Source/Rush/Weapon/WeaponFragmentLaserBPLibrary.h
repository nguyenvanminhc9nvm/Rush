#pragma once

#include "CoreMinimal.h"
#include "Enum/EFragmentLaserName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "WeaponFragmentLaserBPLibrary.generated.h"

UCLASS()
class RUSH_API UWeaponFragmentLaserBPLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Weapon Fragment")
    static TSubclassOf<AActor> GetWeaponFragmentLaserByName(EFragmentLaserName FragmentName);
};
