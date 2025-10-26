#pragma once

#include "CoreMinimal.h"

#include "Rush/Weapon/Enum/EWeaponIconName.h"
#include "FLaserEntry.generated.h"

USTRUCT(BlueprintType)
struct RUSH_API FLaserEntry
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon Fragment")
    TEnumAsByte<EWeaponIconName> Name;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon Fragment")
    TSubclassOf<AActor> FragmentActor;   // BlueprintGeneratedClass sẽ load thành TSubclassOf<AActor>
};

