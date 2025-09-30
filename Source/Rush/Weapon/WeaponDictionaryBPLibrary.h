#pragma once

#include "CoreMinimal.h"
#include "Enum/EWeaponName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "WeaponDictionaryBPLibrary.generated.h"

UCLASS()
class RUSH_API UWeaponDictionaryBPLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Weapon")
    static TSubclassOf<AActor> GetWeaponByName(EWeaponName WeaponName);
};
