#pragma once

#include "CoreMinimal.h"

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Enum/EWeaponIconName.h"
#include "Rush/Weapon/Struct/FMuzzleEntry.h"
#include "MuzzleBPLibrary.generated.h"

UCLASS()
class RUSH_API UMuzzleBPLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Muzzle")
    static FMuzzleEntry GetMuzzleByName(EWeaponIconName MuzzleName);

    UFUNCTION(BlueprintPure, Category="Muzzle")
    static TSubclassOf<AActor> GetMuzzleActorByName(EWeaponIconName MuzzleName);
};
