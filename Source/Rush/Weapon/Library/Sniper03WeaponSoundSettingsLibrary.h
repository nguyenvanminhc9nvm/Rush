#pragma once

#include "CoreMinimal.h"
#include "Rush/Character/Enum/ECharacterMontageName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Struct/FWeaponSound.h"
#include "Sniper03WeaponSoundSettingsLibrary.generated.h"

UCLASS()
class RUSH_API USniper03WeaponSoundSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Sniper03 Weapon Sound Settings")
    static FWeaponSound GetWeaponSoundByName(ECharacterMontageName SoundName);

    UFUNCTION(BlueprintCallable, Category="Sniper03 Weapon Sound Settings")
    static TArray<FWeaponSound> GetAllSniper03WeaponSounds();
};
