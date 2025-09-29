#pragma once

#include "CoreMinimal.h"
#include "FWeaponEntry.generated.h"

USTRUCT(BlueprintType)
struct RUSH_API FWeaponEntry
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon")
    FString Name;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon")
    TSubclassOf<AActor> Item;   // BlueprintGeneratedClass sẽ load thành TSubclassOf<AActor>
};
