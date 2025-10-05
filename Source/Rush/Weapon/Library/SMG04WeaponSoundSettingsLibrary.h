#pragma once

#include "CoreMinimal.h"
#include "Rush/Character/Enum/ECharacterMontageName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Struct/FWeaponSound.h"
#include "SMG04WeaponSoundSettingsLibrary.generated.h"

UCLASS()
class RUSH_API USMG04WeaponSoundSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="SMG04 Weapon Sound Settings")
    static FWeaponSound GetWeaponSoundByName(ECharacterMontageName SoundName);

    UFUNCTION(BlueprintCallable, Category="SMG04 Weapon Sound Settings")
    static TArray<FWeaponSound> GetAllSMG04WeaponSounds();
};
