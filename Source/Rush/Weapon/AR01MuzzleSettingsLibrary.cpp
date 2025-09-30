#include "AR01MuzzleSettingsLibrary.h"
#include "Engine/Engine.h"

static TMap<EMuzzleName, FMuzzleSettingsEntry> GMuzzleSettingsMap;

static void InitMuzzleSettingsMap()
{
    if (GMuzzleSettingsMap.Num() > 0) return;

    // Hidden
    FMuzzleSettingsEntry HiddenEntry;
    HiddenEntry.Name = EMuzzleName::Muzzle_Hidden;
    HiddenEntry.FireParticles = LoadObject<UParticleSystem>(nullptr, TEXT("/Game/Blueprint/Effects/Particles/PS_Muzzle_Flash.PS_Muzzle_Flash"));
    HiddenEntry.FireSoundCue = LoadObject<USoundCue>(nullptr, TEXT("/Game/Assets/Audio/Cues/Weapons/SC_WEP_AR_01_Fire.SC_WEP_AR_01_Fire"));
    HiddenEntry.bOverheatEnabled = false;
    HiddenEntry.OverheatShots = 8;
    HiddenEntry.OverheatParticles = LoadObject<UParticleSystem>(nullptr, TEXT("/Game/Blueprint/Effects/Particles/PS_Muzzle_Smoke.PS_Muzzle_Smoke"));
    HiddenEntry.bFlashLight = true;
    HiddenEntry.FlashLightDuration = 0.035f;
    HiddenEntry.FlashLightRelativeLocation = FVector(8.0f, 100.0f, -5.0f);
    
    GMuzzleSettingsMap.Add(EMuzzleName::Muzzle_Hidden, HiddenEntry);

    // Silencer-01
    FMuzzleSettingsEntry Silencer01Entry;
    Silencer01Entry.Name = EMuzzleName::Silencer01;
    Silencer01Entry.FireParticles = LoadObject<UParticleSystem>(nullptr, TEXT("/Game/Blueprint/Effects/Particles/PS_Muzzle_Flash_Silencer.PS_Muzzle_Flash_Silencer"));
    Silencer01Entry.FireSoundCue = LoadObject<USoundCue>(nullptr, TEXT("/Game/Assets/Audio/Cues/Weapons/SC_WEP_AR_01_Fire_Suppressed_01.SC_WEP_AR_01_Fire_Suppressed_01"));
    Silencer01Entry.bOverheatEnabled = true;
    Silencer01Entry.OverheatShots = 8;
    Silencer01Entry.OverheatParticles = LoadObject<UParticleSystem>(nullptr, TEXT("/Game/Blueprint/Effects/Particles/PS_Muzzle_Smoke.PS_Muzzle_Smoke"));
    Silencer01Entry.bFlashLight = false;
    Silencer01Entry.FlashLightDuration = 0.05f;
    Silencer01Entry.FlashLightRelativeLocation = FVector::ZeroVector;
    
    GMuzzleSettingsMap.Add(EMuzzleName::Silencer01, Silencer01Entry);

    // Silencer-02
    FMuzzleSettingsEntry Silencer02Entry;
    Silencer02Entry.Name = EMuzzleName::Silencer02;
    Silencer02Entry.FireParticles = LoadObject<UParticleSystem>(nullptr, TEXT("/Game/Blueprint/Effects/Particles/PS_Muzzle_Flash_Silencer.PS_Muzzle_Flash_Silencer"));
    Silencer02Entry.FireSoundCue = LoadObject<USoundCue>(nullptr, TEXT("/Game/Assets/Audio/Cues/Weapons/SC_WEP_AR_01_Fire_Suppressed_02.SC_WEP_AR_01_Fire_Suppressed_02"));
    Silencer02Entry.bOverheatEnabled = true;
    Silencer02Entry.OverheatShots = 8;
    Silencer02Entry.OverheatParticles = LoadObject<UParticleSystem>(nullptr, TEXT("/Game/Blueprint/Effects/Particles/PS_Muzzle_Smoke.PS_Muzzle_Smoke"));
    Silencer02Entry.bFlashLight = false;
    Silencer02Entry.FlashLightDuration = 0.05f;
    Silencer02Entry.FlashLightRelativeLocation = FVector::ZeroVector;
    
    GMuzzleSettingsMap.Add(EMuzzleName::Silencer02, Silencer02Entry);

    // Silencer-03
    FMuzzleSettingsEntry Silencer03Entry;
    Silencer03Entry.Name = EMuzzleName::Silencer03;
    Silencer03Entry.FireParticles = LoadObject<UParticleSystem>(nullptr, TEXT("/Game/Blueprint/Effects/Particles/PS_Muzzle_Flash_Silencer.PS_Muzzle_Flash_Silencer"));
    Silencer03Entry.FireSoundCue = LoadObject<USoundCue>(nullptr, TEXT("/Game/Assets/Audio/Cues/Weapons/SC_WEP_AR_01_Fire_Suppressed_03.SC_WEP_AR_01_Fire_Suppressed_03"));
    Silencer03Entry.bOverheatEnabled = true;
    Silencer03Entry.OverheatShots = 8;
    Silencer03Entry.OverheatParticles = LoadObject<UParticleSystem>(nullptr, TEXT("/Game/Blueprint/Effects/Particles/PS_Muzzle_Smoke.PS_Muzzle_Smoke"));
    Silencer03Entry.bFlashLight = false;
    Silencer03Entry.FlashLightDuration = 0.05f;
    Silencer03Entry.FlashLightRelativeLocation = FVector::ZeroVector;
    
    GMuzzleSettingsMap.Add(EMuzzleName::Silencer03, Silencer03Entry);
}

FMuzzleSettingsEntry UAR01MuzzleSettingsLibrary::GetMuzzleSettingsByName(EMuzzleName MuzzleName)
{
    InitMuzzleSettingsMap();
    if (GMuzzleSettingsMap.Contains(MuzzleName))
    {
        return GMuzzleSettingsMap[MuzzleName];
    }
    return FMuzzleSettingsEntry();
}
