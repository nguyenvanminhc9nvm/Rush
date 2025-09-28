#pragma once

#include "CoreMinimal.h"
#include "RushWeaponFragmentActor.generated.h"

USTRUCT(BlueprintType)
struct FRushFragmentWeaponActor: public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<AActor> FragmentActor;
	
};
