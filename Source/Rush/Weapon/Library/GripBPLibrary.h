#pragma once

#include "CoreMinimal.h"
#include "Rush/Weapon/Enum/EGripName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Struct/FGripEntry.h"
#include "GripBPLibrary.generated.h"

UCLASS()
class RUSH_API UGripBPLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Grip")
    static FGripEntry GetGripByName(EGripName GripName);

    UFUNCTION(BlueprintPure, Category="Grip")
    static UStaticMesh* GetGripMeshByName(EGripName GripName);
};
