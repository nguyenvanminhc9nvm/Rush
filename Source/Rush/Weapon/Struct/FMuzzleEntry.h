#pragma once

#include "CoreMinimal.h"
#include "FMuzzleEntry.generated.h"

enum EWeaponIconName : uint8;

USTRUCT(BlueprintType)
struct RUSH_API FMuzzleEntry
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Muzzle")
    TEnumAsByte<EWeaponIconName> Name;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Muzzle")
    TSubclassOf<AActor> FragmentActor;   // BlueprintGeneratedClass sẽ load thành TSubclassOf<AActor>
};
