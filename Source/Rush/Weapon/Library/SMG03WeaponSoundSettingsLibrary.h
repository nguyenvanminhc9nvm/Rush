#pragma once

#include "CoreMinimal.h"
#include "Rush/Character/Enum/ECharacterMontageName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Struct/FWeaponSound.h"
#include "SMG03WeaponSoundSettingsLibrary.generated.h"

UCLASS()
class RUSH_API USMG03WeaponSoundSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="SMG03 Weapon Sound Settings")
    static FWeaponSound GetWeaponSoundByName(ECharacterMontageName SoundName);

    UFUNCTION(BlueprintCallable, Category="SMG03 Weapon Sound Settings")
    static TArray<FWeaponSound> GetAllSMG03WeaponSounds();
};
