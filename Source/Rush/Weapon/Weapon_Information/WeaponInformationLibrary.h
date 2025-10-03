#pragma once

#include "CoreMinimal.h"
#include "Rush/Weapon/Enum/EWeaponName.h"
#include "Rush/Weapon/Struct/FWeaponInformationEntry.h"
#include "WeaponInformationLibrary.generated.h"

UCLASS(BlueprintType)
class RUSH_API UWeaponInformationLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Weapon Information Settings")
	static FWeaponInformationEntry GetWeaponInformationByName(EWeaponName WeaponName);

	UFUNCTION(BlueprintCallable, Category = "Weapon Information Settings")
	static TArray<FWeaponInformationEntry> GetAllWeaponInformationEntries();
};