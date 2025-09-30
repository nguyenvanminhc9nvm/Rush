#pragma once

#include "CoreMinimal.h"
#include "FWeaponFragmentLaserEntry.generated.h"

USTRUCT(BlueprintType)
struct RUSH_API FWeaponFragmentLaserEntry
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon Fragment")
    FString Name;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon Fragment")
    TSubclassOf<AActor> FragmentActor;   // BlueprintGeneratedClass sẽ load thành TSubclassOf<AActor>
};

