#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FWeaponSound.h"
#include "GL01WeaponSoundSettingsLibrary.generated.h"

enum ECharacterMontageName : uint8;

UCLASS()
class RUSH_API UGL01WeaponSoundSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="GL01 Weapon Sound Settings")
    static FWeaponSound GetWeaponSoundByName(ECharacterMontageName SoundName);

    UFUNCTION(BlueprintCallable, Category="GL01 Weapon Sound Settings")
    static TArray<FWeaponSound> GetAllGL01WeaponSounds();
};
