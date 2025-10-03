#pragma once

#include "CoreMinimal.h"
#include "Enum/EWeaponMontageName.h"
#include "Struct/FWeaponMontageSettings.h"
#include "Handgun01MontageSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UHandgun01MontageSettingsLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Handgun 01 Montage Settings")
	static FWeaponMontageSettings GetHandgun01MontageSettingsByName(EWeaponMontageName MontageName);

	UFUNCTION(BlueprintCallable, Category = "Handgun 01 Montage Settings")
	static TArray<FWeaponMontageSettings> GetAllHandgun01MontageSettings();
};