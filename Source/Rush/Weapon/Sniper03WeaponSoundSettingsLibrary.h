#pragma once

#include "CoreMinimal.h"
#include "../Character/Enum/ECharacterMontageName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FWeaponSound.h"
#include "Sniper03WeaponSoundSettingsLibrary.generated.h"

UCLASS()
class RUSH_API USniper03WeaponSoundSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Sniper03 Weapon Sound Settings")
    static FWeaponSound GetWeaponSoundByName(ECharacterMontageName SoundName);
};
