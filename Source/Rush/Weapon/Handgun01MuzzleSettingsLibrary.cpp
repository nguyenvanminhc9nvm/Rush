#include "Handgun01MuzzleSettingsLibrary.h"
#include "Engine/Engine.h"
#include "Particles/ParticleSystem.h"
#include "Sound/SoundCue.h"

static TMap<EMuzzleName, FMuzzleSettingsEntry> GHandgun01MuzzleSettingsMap;

static void InitHandgun01MuzzleSettingsMap()
{
    if (GHandgun01MuzzleSettingsMap.Num() > 0) return;

    // Hidden
    FMuzzleSettingsEntry HiddenEntry;
    HiddenEntry.Name = EMuzzleName::Muzzle_Hidden;
    HiddenEntry.FireParticles = LoadObject<UParticleSystem>(nullptr, TEXT("/Game/Blueprint/Effects/Particles/PS_Muzzle_Flash.PS_Muzzle_Flash"));
    HiddenEntry.FireSoundCue = LoadObject<USoundCue>(nullptr, TEXT("/Game/Assets/Audio/Cues/Weapons/SC_WEP_Handgun_01_Fire.SC_WEP_Handgun_01_Fire"));
    HiddenEntry.bOverheatEnabled = false;
    HiddenEntry.OverheatShots = 8;
    HiddenEntry.OverheatParticles = nullptr; // Set to None as per JSON
    HiddenEntry.bFlashLight = true;
    HiddenEntry.FlashLightDuration = 0.035f;
    HiddenEntry.FlashLightRelativeLocation = FVector(8.0f, 65.0f, 0.0f); // Different Y value for handgun
    
    GHandgun01MuzzleSettingsMap.Add(EMuzzleName::Muzzle_Hidden, HiddenEntry);

    // Silencer-01
    FMuzzleSettingsEntry Silencer01Entry;
    Silencer01Entry.Name = EMuzzleName::Muzzle_Silencer01;
    Silencer01Entry.FireParticles = LoadObject<UParticleSystem>(nullptr, TEXT("/Game/Blueprint/Effects/Particles/PS_Muzzle_Flash_Silencer.PS_Muzzle_Flash_Silencer"));
    Silencer01Entry.FireSoundCue = LoadObject<USoundCue>(nullptr, TEXT("/Game/Assets/Audio/Cues/Weapons/SC_WEP_Handgun_01_Fire_Suppressed_01.SC_WEP_Handgun_01_Fire_Suppressed_01"));
    Silencer01Entry.bOverheatEnabled = true;
    Silencer01Entry.OverheatShots = 8;
    Silencer01Entry.OverheatParticles = LoadObject<UParticleSystem>(nullptr, TEXT("/Game/Blueprint/Effects/Particles/PS_Muzzle_Smoke.PS_Muzzle_Smoke"));
    Silencer01Entry.bFlashLight = false;
    Silencer01Entry.FlashLightDuration = 0.05f;
    Silencer01Entry.FlashLightRelativeLocation = FVector::ZeroVector;
    
    GHandgun01MuzzleSettingsMap.Add(EMuzzleName::Muzzle_Silencer01, Silencer01Entry);

    // Silencer-02
    FMuzzleSettingsEntry Silencer02Entry;
    Silencer02Entry.Name = EMuzzleName::Muzzle_Silencer02;
    Silencer02Entry.FireParticles = LoadObject<UParticleSystem>(nullptr, TEXT("/Game/Blueprint/Effects/Particles/PS_Muzzle_Flash_Silencer.PS_Muzzle_Flash_Silencer"));
    Silencer02Entry.FireSoundCue = LoadObject<USoundCue>(nullptr, TEXT("/Game/Assets/Audio/Cues/Weapons/SC_WEP_Handgun_01_Fire_Suppressed_02.SC_WEP_Handgun_01_Fire_Suppressed_02"));
    Silencer02Entry.bOverheatEnabled = true;
    Silencer02Entry.OverheatShots = 8;
    Silencer02Entry.OverheatParticles = LoadObject<UParticleSystem>(nullptr, TEXT("/Game/Blueprint/Effects/Particles/PS_Muzzle_Smoke.PS_Muzzle_Smoke"));
    Silencer02Entry.bFlashLight = false;
    Silencer02Entry.FlashLightDuration = 0.05f;
    Silencer02Entry.FlashLightRelativeLocation = FVector::ZeroVector;
    
    GHandgun01MuzzleSettingsMap.Add(EMuzzleName::Muzzle_Silencer02, Silencer02Entry);

    // Silencer-03
    FMuzzleSettingsEntry Silencer03Entry;
    Silencer03Entry.Name = EMuzzleName::Muzzle_Silencer03;
    Silencer03Entry.FireParticles = LoadObject<UParticleSystem>(nullptr, TEXT("/Game/Blueprint/Effects/Particles/PS_Muzzle_Flash_Silencer.PS_Muzzle_Flash_Silencer"));
    Silencer03Entry.FireSoundCue = LoadObject<USoundCue>(nullptr, TEXT("/Game/Assets/Audio/Cues/Weapons/SC_WEP_Handgun_01_Fire_Suppressed_03.SC_WEP_Handgun_01_Fire_Suppressed_03"));
    Silencer03Entry.bOverheatEnabled = true;
    Silencer03Entry.OverheatShots = 8;
    Silencer03Entry.OverheatParticles = LoadObject<UParticleSystem>(nullptr, TEXT("/Game/Blueprint/Effects/Particles/PS_Muzzle_Smoke.PS_Muzzle_Smoke"));
    Silencer03Entry.bFlashLight = false;
    Silencer03Entry.FlashLightDuration = 0.05f;
    Silencer03Entry.FlashLightRelativeLocation = FVector::ZeroVector;
    
    GHandgun01MuzzleSettingsMap.Add(EMuzzleName::Muzzle_Silencer03, Silencer03Entry);
}

FMuzzleSettingsEntry UHandgun01MuzzleSettingsLibrary::GetHandgun01MuzzleSettingsByName(EMuzzleName MuzzleName)
{
    InitHandgun01MuzzleSettingsMap();
    if (GHandgun01MuzzleSettingsMap.Contains(MuzzleName))
    {
        return GHandgun01MuzzleSettingsMap[MuzzleName];
    }
    return FMuzzleSettingsEntry();
}

TArray<FMuzzleSettingsEntry> UHandgun01MuzzleSettingsLibrary::GetAllHandgun01MuzzleSettings()
{
    InitHandgun01MuzzleSettingsMap();
    TArray<FMuzzleSettingsEntry> AllSettings;
    GHandgun01MuzzleSettingsMap.GenerateValueArray(AllSettings);
    return AllSettings;
}
