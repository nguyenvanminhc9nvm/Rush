#pragma once

#include "CoreMinimal.h"
#include "Enum/EScopeName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FScopeEntry.h"
#include "ScopeBPLibrary.generated.h"

UCLASS()
class RUSH_API UScopeBPLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Scope")
    static FScopeEntry GetScopeByName(EScopeName ScopeName);

    UFUNCTION(BlueprintPure, Category="Scope")
    static TSubclassOf<AActor> GetScopeActorByName(EScopeName ScopeName);
};
