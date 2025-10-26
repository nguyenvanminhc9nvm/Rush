#pragma once

#include "CoreMinimal.h"
#include "Rush/Weapon/Enum/EWeaponIconName.h"
#include "FScopeEntry.generated.h"

enum EScopeName : uint8;

USTRUCT(BlueprintType)
struct RUSH_API FScopeEntry
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Scope")
    TEnumAsByte<EWeaponIconName> Name;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Scope")
    TSubclassOf<AActor> FragmentActor;   // BlueprintGeneratedClass sẽ load thành TSubclassOf<AActor>
};
