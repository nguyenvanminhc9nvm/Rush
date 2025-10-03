#include "AR01WeaponSoundSettingsLibrary.h"
#include "Engine/Engine.h"
#include "Sound/SoundCue.h"

static TMap<ECharacterMontageName, FWeaponSound> GAR01WeaponSoundMap;

static void InitAR01WeaponSoundMap()
{
    if (GAR01WeaponSoundMap.Num() > 0) return;

    // Helper function to create WeaponSound
    auto CreateWeaponSound = [](ECharacterMontageName SoundName, float Delay, const FString& SoundCuePath) -> FWeaponSound
    {
        FWeaponSound Sound;
        Sound.Name = SoundName;
        Sound.Delay = Delay;
        if (SoundCuePath != TEXT("None"))
        {
            Sound.SoundCue = TSoftObjectPtr<USoundCue>(FSoftObjectPath(SoundCuePath));
        }
        return Sound;
    };

    // Jump
    FWeaponSound JumpSound = CreateWeaponSound(
        ECharacterMontageName::Character_Montage_Jump,
        0.0f,
        TEXT("/Script/Engine.SoundCue'/Game/Assets/Audio/Cues/SC_CH_Jump_Start.SC_CH_Jump_Start'")
    );
    GAR01WeaponSoundMap.Add(ECharacterMontageName::Character_Montage_Jump, JumpSound);

    // Reload
    FWeaponSound ReloadSound = CreateWeaponSound(
        ECharacterMontageName::Character_Montage_Reload,
        0.0f,
        TEXT("/Script/Engine.SoundCue'/Game/Assets/Audio/Cues/Weapons/SC_WEP_AR_01_Reload.SC_WEP_AR_01_Reload'")
    );
    GAR01WeaponSoundMap.Add(ECharacterMontageName::Character_Montage_Reload, ReloadSound);

    // Reload-Empty
    FWeaponSound ReloadEmptySound = CreateWeaponSound(
        ECharacterMontageName::Character_Montage_Reload_Empty,
        0.0f,
        TEXT("/Script/Engine.SoundCue'/Game/Assets/Audio/Cues/Weapons/SC_WEP_AR_01_Reload_Empty.SC_WEP_AR_01_Reload_Empty'")
    );
    GAR01WeaponSoundMap.Add(ECharacterMontageName::Character_Montage_Reload_Empty, ReloadEmptySound);

    // Inspect
    FWeaponSound InspectSound = CreateWeaponSound(
        ECharacterMontageName::Character_Montage_Inspect,
        0.0f,
        TEXT("None")
    );
    GAR01WeaponSoundMap.Add(ECharacterMontageName::Character_Montage_Inspect, InspectSound);

    // Holster
    FWeaponSound HolsterSound = CreateWeaponSound(
        ECharacterMontageName::Character_Montage_Holster,
        0.0f,
        TEXT("/Script/Engine.SoundCue'/Game/Assets/Audio/Cues/Weapons/SC_WEP_Holster.SC_WEP_Holster'")
    );
    GAR01WeaponSoundMap.Add(ECharacterMontageName::Character_Montage_Holster, HolsterSound);

    // Holster-Smooth
    FWeaponSound HolsterSmoothSound = CreateWeaponSound(
        ECharacterMontageName::Character_Montage_Holster_Smooth,
        0.0f,
        TEXT("/Script/Engine.SoundCue'/Game/Assets/Audio/Cues/Weapons/SC_WEP_Holster.SC_WEP_Holster'")
    );
    GAR01WeaponSoundMap.Add(ECharacterMontageName::Character_Montage_Holster_Smooth, HolsterSmoothSound);

    // Unholster
    FWeaponSound UnholsterSound = CreateWeaponSound(
        ECharacterMontageName::Character_Montage_Unholster,
        0.0f,
        TEXT("/Script/Engine.SoundCue'/Game/Assets/Audio/Cues/Weapons/SC_WEP_Unholster.SC_WEP_Unholster'")
    );
    GAR01WeaponSoundMap.Add(ECharacterMontageName::Character_Montage_Unholster, UnholsterSound);

    // Unholster-Smooth
    FWeaponSound UnholsterSmoothSound = CreateWeaponSound(
        ECharacterMontageName::Character_Montage_Unholster_Smooth,
        0.0f,
        TEXT("/Script/Engine.SoundCue'/Game/Assets/Audio/Cues/Weapons/SC_WEP_Unholster.SC_WEP_Unholster'")
    );
    GAR01WeaponSoundMap.Add(ECharacterMontageName::Character_Montage_Unholster_Smooth, UnholsterSmoothSound);
}

FWeaponSound UAR01WeaponSoundSettingsLibrary::GetWeaponSoundByName(ECharacterMontageName SoundName)
{
    InitAR01WeaponSoundMap();
    
    if (FWeaponSound* FoundSound = GAR01WeaponSoundMap.Find(SoundName))
    {
        return *FoundSound;
    }
    
    // Return empty sound if not found
    FWeaponSound EmptySound;
    EmptySound.Name = SoundName;
    EmptySound.Delay = 0.0f;
    EmptySound.SoundCue = nullptr;
    return EmptySound;
}

TArray<FWeaponSound> UAR01WeaponSoundSettingsLibrary::GetAllAR01WeaponSounds()
{
    InitAR01WeaponSoundMap();
    TArray<FWeaponSound> AllSounds;
    GAR01WeaponSoundMap.GenerateValueArray(AllSounds);
    return AllSounds;
}
