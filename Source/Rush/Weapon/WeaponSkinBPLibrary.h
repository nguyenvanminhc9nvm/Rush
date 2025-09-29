#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FWeaponSkinEntry.h"
#include "WeaponSkinBPLibrary.generated.h"

UENUM(BlueprintType)
enum class EWeaponSkinName: uint8
{
    DefaultAssaultRifle01,
    DefaultAssaultRifle02,
    DefaultAssaultRifle03,
    DefaultHandgun01,
    DefaultHandgun02,
    DefaultHandgun03,
    DefaultHandgun04,
    DefaultLauncherGrenade01,
    DefaultLauncherRocket01,
    DefaultSMG01,
    DefaultSMG02,
    DefaultSMG03,
    DefaultSMG04,
    DefaultSniper02,
    DefaultSniper03,
    CustomElite,
    CustomForest,
    CustomSciFi,
    CustomAntiTank,
    CustomNeon,
    CustomNeonSpecial,
    CustomStealth,
    CustomVenomous,
    CustomHoming,
    CustomTech,
    CustomCitrus,
    CustomTactical,
    CustomEvil,
    CustomModern,
    CustomArmored,
    CustomHitman,
    CustomBreach,
    CustomLava,
    WorstBrassEver,
    Invisible
};

UCLASS()
class RUSH_API UWeaponSkinBPLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Weapon Skin")
    static FWeaponSkinEntry GetWeaponSkinByName(EWeaponSkinName WeaponName);


private:
    static FString WeaponNameToString(EWeaponSkinName WeaponName);
};
