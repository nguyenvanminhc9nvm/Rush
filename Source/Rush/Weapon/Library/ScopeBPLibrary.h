#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Struct/FScopeEntry.h"
#include "ScopeBPLibrary.generated.h"

UCLASS()
class RUSH_API UScopeBPLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Scope")
    static FScopeEntry GetScopeByName(EWeaponIconName ScopeName);

    UFUNCTION(BlueprintPure, Category="Scope")
    static TSubclassOf<AActor> GetScopeActorByName(EWeaponIconName ScopeName);
};
