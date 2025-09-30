#include "Shotgun01MuzzleSettingsLibrary.h"
#include "Engine/Engine.h"
#include "Particles/ParticleSystem.h"
#include "Sound/SoundCue.h"

static TMap<EMuzzleName, FMuzzleSettingsEntry> GShotgun01MuzzleSettingsMap;

static void InitShotgun01MuzzleSettingsMap()
{
    if (GShotgun01MuzzleSettingsMap.Num() > 0) return;

    // Hidden
    FMuzzleSettingsEntry HiddenEntry;
    HiddenEntry.Name = EMuzzleName::Muzzle_Hidden;
    HiddenEntry.FireParticles = LoadObject<UParticleSystem>(nullptr, TEXT("/Game/Blueprint/Effects/Particles/PS_Muzzle_Flash_Shotgun.PS_Muzzle_Flash_Shotgun"));
    HiddenEntry.FireSoundCue = LoadObject<USoundCue>(nullptr, TEXT("/Game/Assets/Audio/Cues/Weapons/SC_WEP_Shotgun_01_Fire.SC_WEP_Shotgun_01_Fire"));
    HiddenEntry.bOverheatEnabled = false;
    HiddenEntry.OverheatShots = 8;
    HiddenEntry.OverheatParticles = nullptr; // Set to None as per JSON
    HiddenEntry.bFlashLight = true;
    HiddenEntry.FlashLightDuration = 0.05f;
    HiddenEntry.FlashLightRelativeLocation = FVector(8.0f, 75.0f, 0.0f); // Shotgun specific positioning
    
    GShotgun01MuzzleSettingsMap.Add(EMuzzleName::Muzzle_Hidden, HiddenEntry);

    // Silencer-01
    FMuzzleSettingsEntry Silencer01Entry;
    Silencer01Entry.Name = EMuzzleName::Muzzle_Silencer01;
    Silencer01Entry.FireParticles = LoadObject<UParticleSystem>(nullptr, TEXT("/Game/Blueprint/Effects/Particles/PS_Muzzle_Flash_Shotgun.PS_Muzzle_Flash_Shotgun"));
    Silencer01Entry.FireSoundCue = LoadObject<USoundCue>(nullptr, TEXT("/Game/Assets/Audio/Cues/Weapons/SC_WEP_Shotgun_01_Fire_Suppressed_01.SC_WEP_Shotgun_01_Fire_Suppressed_01"));
    Silencer01Entry.bOverheatEnabled = true;
    Silencer01Entry.OverheatShots = 8;
    Silencer01Entry.OverheatParticles = LoadObject<UParticleSystem>(nullptr, TEXT("/Game/Blueprint/Effects/Particles/PS_Muzzle_Smoke.PS_Muzzle_Smoke"));
    Silencer01Entry.bFlashLight = false;
    Silencer01Entry.FlashLightDuration = 0.05f;
    Silencer01Entry.FlashLightRelativeLocation = FVector(0.0f, 0.0f, 0.0f);
    
    GShotgun01MuzzleSettingsMap.Add(EMuzzleName::Muzzle_Silencer01, Silencer01Entry);

    // Silencer-02
    FMuzzleSettingsEntry Silencer02Entry;
    Silencer02Entry.Name = EMuzzleName::Muzzle_Silencer02;
    Silencer02Entry.FireParticles = LoadObject<UParticleSystem>(nullptr, TEXT("/Game/Blueprint/Effects/Particles/PS_Muzzle_Flash_Shotgun.PS_Muzzle_Flash_Shotgun"));
    Silencer02Entry.FireSoundCue = LoadObject<USoundCue>(nullptr, TEXT("/Game/Assets/Audio/Cues/Weapons/SC_WEP_Shotgun_01_Fire_Suppressed_02.SC_WEP_Shotgun_01_Fire_Suppressed_02"));
    Silencer02Entry.bOverheatEnabled = true;
    Silencer02Entry.OverheatShots = 8;
    Silencer02Entry.OverheatParticles = LoadObject<UParticleSystem>(nullptr, TEXT("/Game/Blueprint/Effects/Particles/PS_Muzzle_Smoke.PS_Muzzle_Smoke"));
    Silencer02Entry.bFlashLight = false;
    Silencer02Entry.FlashLightDuration = 0.05f;
    Silencer02Entry.FlashLightRelativeLocation = FVector(0.0f, 0.0f, 0.0f);
    
    GShotgun01MuzzleSettingsMap.Add(EMuzzleName::Muzzle_Silencer02, Silencer02Entry);

    // Silencer-03
    FMuzzleSettingsEntry Silencer03Entry;
    Silencer03Entry.Name = EMuzzleName::Muzzle_Silencer03;
    Silencer03Entry.FireParticles = LoadObject<UParticleSystem>(nullptr, TEXT("/Game/Blueprint/Effects/Particles/PS_Muzzle_Flash_Shotgun.PS_Muzzle_Flash_Shotgun"));
    Silencer03Entry.FireSoundCue = LoadObject<USoundCue>(nullptr, TEXT("/Game/Assets/Audio/Cues/Weapons/SC_WEP_Shotgun_01_Fire_Suppressed_03.SC_WEP_Shotgun_01_Fire_Suppressed_03"));
    Silencer03Entry.bOverheatEnabled = true;
    Silencer03Entry.OverheatShots = 8;
    Silencer03Entry.OverheatParticles = LoadObject<UParticleSystem>(nullptr, TEXT("/Game/Blueprint/Effects/Particles/PS_Muzzle_Smoke.PS_Muzzle_Smoke"));
    Silencer03Entry.bFlashLight = false;
    Silencer03Entry.FlashLightDuration = 0.05f;
    Silencer03Entry.FlashLightRelativeLocation = FVector(0.0f, 0.0f, 0.0f);
    
    GShotgun01MuzzleSettingsMap.Add(EMuzzleName::Muzzle_Silencer03, Silencer03Entry);
}

FMuzzleSettingsEntry UShotgun01MuzzleSettingsLibrary::GetShotgun01MuzzleSettingsByName(EMuzzleName MuzzleName)
{
    InitShotgun01MuzzleSettingsMap();
    if (GShotgun01MuzzleSettingsMap.Contains(MuzzleName))
    {
        return GShotgun01MuzzleSettingsMap[MuzzleName];
    }
    return FMuzzleSettingsEntry();
}
