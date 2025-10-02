#pragma once

#include "CoreMinimal.h"
#include "../Character/Enum/ECharacterMontageName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FWeaponSound.h"
#include "HandgunWeaponSoundSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UHandgunWeaponSoundSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Handgun Weapon Sound Settings")
    static FWeaponSound GetWeaponSoundByName(ECharacterMontageName SoundName);
};
