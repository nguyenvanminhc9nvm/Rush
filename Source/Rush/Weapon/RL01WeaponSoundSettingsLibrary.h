#pragma once

#include "CoreMinimal.h"
#include "../Character/Enum/ECharacterMontageName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FWeaponSound.h"
#include "RL01WeaponSoundSettingsLibrary.generated.h"

UCLASS()
class RUSH_API URL01WeaponSoundSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="RL01 Weapon Sound Settings")
    static FWeaponSound GetWeaponSoundByName(ECharacterMontageName SoundName);
};
