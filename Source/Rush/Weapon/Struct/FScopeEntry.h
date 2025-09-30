#pragma once

#include "CoreMinimal.h"
#include "FScopeEntry.generated.h"

USTRUCT(BlueprintType)
struct RUSH_API FScopeEntry
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Scope")
    TEnumAsByte<EScopeName> Name;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Scope")
    TSubclassOf<AActor> FragmentActor;   // BlueprintGeneratedClass sẽ load thành TSubclassOf<AActor>
};
