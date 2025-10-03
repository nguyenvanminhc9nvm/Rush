#pragma once

#include "CoreMinimal.h"
#include "../Character/Enum/ECharacterMontageName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FWeaponSound.h"
#include "Shotgun01WeaponSoundSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UShotgun01WeaponSoundSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Shotgun01 Weapon Sound Settings")
    static FWeaponSound GetWeaponSoundByName(ECharacterMontageName SoundName);

    UFUNCTION(BlueprintCallable, Category="Shotgun01 Weapon Sound Settings")
    static TArray<FWeaponSound> GetAllShotgun01WeaponSounds();
};
