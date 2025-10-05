#pragma once

#include "CoreMinimal.h"
#include "Rush/Character/Enum/ECharacterMontageName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Struct/FWeaponSound.h"
#include "HandgunWeaponSoundSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UHandgunWeaponSoundSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Handgun Weapon Sound Settings")
    static FWeaponSound GetWeaponSoundByName(ECharacterMontageName SoundName);

    UFUNCTION(BlueprintCallable, Category="Handgun Weapon Sound Settings")
    static TArray<FWeaponSound> GetAllHandgunWeaponSounds();
};
