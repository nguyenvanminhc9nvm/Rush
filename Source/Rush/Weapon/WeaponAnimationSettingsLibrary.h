#pragma once

#include "CoreMinimal.h"
#include "Enum/EWeaponName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FWeaponAnimationSettings.h"
#include "WeaponAnimationSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UWeaponAnimationSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Weapon Animation Settings")
    static FWeaponAnimationSettings GetWeaponAnimationSettingsByName(EWeaponName WeaponName);

    UFUNCTION(BlueprintPure, Category="Weapon Animation Settings")
    static TArray<TEnumAsByte<EWeaponName>> GetAllSupportedWeaponNames();

    UFUNCTION(BlueprintPure, Category="Weapon Animation Settings")
    static bool IsWeaponSupported(EWeaponName WeaponName);
};
