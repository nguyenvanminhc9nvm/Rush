#pragma once

#include "CoreMinimal.h"
#include "Enum/EMuzzleName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FMuzzleEntry.h"
#include "MuzzleBPLibrary.generated.h"

UCLASS()
class RUSH_API UMuzzleBPLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Muzzle")
    static FMuzzleEntry GetMuzzleByName(EMuzzleName MuzzleName);

    UFUNCTION(BlueprintPure, Category="Muzzle")
    static TSubclassOf<AActor> GetMuzzleActorByName(EMuzzleName MuzzleName);
};
