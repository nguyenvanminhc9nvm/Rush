#pragma once

#include "CoreMinimal.h"
#include "Rush/Character/Enum/ECharacterMontageName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Struct/FWeaponSound.h"
#include "AR03WeaponSoundSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UAR03WeaponSoundSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="AR03 Weapon Sound Settings")
    static FWeaponSound GetWeaponSoundByName(ECharacterMontageName SoundName);

    UFUNCTION(BlueprintCallable, Category="AR03 Weapon Sound Settings")
    static TArray<FWeaponSound> GetAllAR03WeaponSounds();
};
