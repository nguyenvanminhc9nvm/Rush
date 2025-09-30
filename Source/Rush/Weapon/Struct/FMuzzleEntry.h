#pragma once

#include "CoreMinimal.h"
#include "FMuzzleEntry.generated.h"

USTRUCT(BlueprintType)
struct RUSH_API FMuzzleEntry
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Muzzle")
    TEnumAsByte<EMuzzleName> Name;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Muzzle")
    TSubclassOf<AActor> FragmentActor;   // BlueprintGeneratedClass sẽ load thành TSubclassOf<AActor>
};
