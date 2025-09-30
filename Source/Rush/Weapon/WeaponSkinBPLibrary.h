#pragma once

#include "CoreMinimal.h"
#include "Enum/EWeaponSkinName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FWeaponSkinEntry.h"
#include "WeaponSkinBPLibrary.generated.h"

UCLASS()
class RUSH_API UWeaponSkinBPLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Weapon Skin")
    static FWeaponSkinEntry GetWeaponSkinByName(EWeaponSkinName WeaponName);
};
