#pragma once

#include "CoreMinimal.h"
#include "Rush/Character/Enum/ECharacterMontageName.h"
#include "Rush/Weapon/Struct/FWeaponMontageSettings.h"
#include "Handgun01MontageSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UHandgun01MontageSettingsLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "Handgun 01 Montage Settings")
    static FWeaponMontageSettings GetHandgun01MontageSettingsByName(ECharacterMontageName MontageName);

	UFUNCTION(BlueprintCallable, Category = "Handgun 01 Montage Settings")
	static TArray<FWeaponMontageSettings> GetAllHandgun01MontageSettings();
};