#pragma once

#include "CoreMinimal.h"
#include "Rush/Weapon/Struct/FWeaponIronsightEntry.h"
#include "WeaponIronsightLibrary.generated.h"

UCLASS()
class RUSH_API UWeaponIronsightLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, Category="Ironsight Settings")
	static FWeaponIronsightEntry GetIronsightEntryByWeaponName(EWeaponName WeaponName);

};