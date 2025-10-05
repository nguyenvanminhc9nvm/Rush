#include "SMG03WeaponSoundSettingsLibrary.h"
#include "Engine/Engine.h"
#include "Sound/SoundCue.h"

static TMap<ECharacterMontageName, FWeaponSound> GSMG03WeaponSoundMap;

static void InitSMG03WeaponSoundMap()
{
    if (GSMG03WeaponSoundMap.Num() > 0) return;

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
    GSMG03WeaponSoundMap.Add(ECharacterMontageName::Character_Montage_Jump, JumpSound);

    // Reload
    FWeaponSound ReloadSound = CreateWeaponSound(
        ECharacterMontageName::Character_Montage_Reload,
        0.0f,
        TEXT("/Script/Engine.SoundCue'/Game/Assets/Audio/Cues/Weapons/SC_WEP_SMG_03_Reload.SC_WEP_SMG_03_Reload'")
    );
    GSMG03WeaponSoundMap.Add(ECharacterMontageName::Character_Montage_Reload, ReloadSound);

    // Reload-Empty
    FWeaponSound ReloadEmptySound = CreateWeaponSound(
        ECharacterMontageName::Character_Montage_Reload_Empty,
        0.0f,
        TEXT("/Script/Engine.SoundCue'/Game/Assets/Audio/Cues/Weapons/SC_WEP_SMG_03_Reload_Empty.SC_WEP_SMG_03_Reload_Empty'")
    );
    GSMG03WeaponSoundMap.Add(ECharacterMontageName::Character_Montage_Reload_Empty, ReloadEmptySound);

    // Inspect
    FWeaponSound InspectSound = CreateWeaponSound(
        ECharacterMontageName::Character_Montage_Inspect,
        0.0f,
        TEXT("None")
    );
    GSMG03WeaponSoundMap.Add(ECharacterMontageName::Character_Montage_Inspect, InspectSound);

    // Holster
    FWeaponSound HolsterSound = CreateWeaponSound(
        ECharacterMontageName::Character_Montage_Holster,
        0.0f,
        TEXT("/Script/Engine.SoundCue'/Game/Assets/Audio/Cues/Weapons/SC_WEP_Holster.SC_WEP_Holster'")
    );
    GSMG03WeaponSoundMap.Add(ECharacterMontageName::Character_Montage_Holster, HolsterSound);

    // Holster-Smooth
    FWeaponSound HolsterSmoothSound = CreateWeaponSound(
        ECharacterMontageName::Character_Montage_Holster_Smooth,
        0.0f,
        TEXT("/Script/Engine.SoundCue'/Game/Assets/Audio/Cues/Weapons/SC_WEP_Holster.SC_WEP_Holster'")
    );
    GSMG03WeaponSoundMap.Add(ECharacterMontageName::Character_Montage_Holster_Smooth, HolsterSmoothSound);

    // Unholster
    FWeaponSound UnholsterSound = CreateWeaponSound(
        ECharacterMontageName::Character_Montage_Unholster,
        0.0f,
        TEXT("/Script/Engine.SoundCue'/Game/Assets/Audio/Cues/Weapons/SC_WEP_Unholster.SC_WEP_Unholster'")
    );
    GSMG03WeaponSoundMap.Add(ECharacterMontageName::Character_Montage_Unholster, UnholsterSound);

    // Unholster-Smooth
    FWeaponSound UnholsterSmoothSound = CreateWeaponSound(
        ECharacterMontageName::Character_Montage_Unholster_Smooth,
        0.0f,
        TEXT("/Script/Engine.SoundCue'/Game/Assets/Audio/Cues/Weapons/SC_WEP_Unholster.SC_WEP_Unholster'")
    );
    GSMG03WeaponSoundMap.Add(ECharacterMontageName::Character_Montage_Unholster_Smooth, UnholsterSmoothSound);
}

FWeaponSound USMG03WeaponSoundSettingsLibrary::GetWeaponSoundByName(ECharacterMontageName SoundName)
{
    InitSMG03WeaponSoundMap();
    
    if (FWeaponSound* FoundSound = GSMG03WeaponSoundMap.Find(SoundName))
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

TArray<FWeaponSound> USMG03WeaponSoundSettingsLibrary::GetAllSMG03WeaponSounds()
{
    InitSMG03WeaponSoundMap();
    TArray<FWeaponSound> AllSounds;
    GSMG03WeaponSoundMap.GenerateValueArray(AllSounds);
    return AllSounds;
}
