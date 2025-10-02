#pragma once

#include "CoreMinimal.h"
#include "../Character/Enum/ECharacterMontageName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FWeaponSound.h"
#include "AR01WeaponSoundSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UAR01WeaponSoundSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="AR01 Weapon Sound Settings")
    static FWeaponSound GetWeaponSoundByName(ECharacterMontageName SoundName);
};
