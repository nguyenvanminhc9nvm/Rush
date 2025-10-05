#include "SMG02WeaponSoundSettingsLibrary.h"
#include "Engine/Engine.h"
#include "Sound/SoundCue.h"

static TMap<ECharacterMontageName, FWeaponSound> GSMG02WeaponSoundMap;

static void InitSMG02WeaponSoundMap()
{
    if (GSMG02WeaponSoundMap.Num() > 0) return;

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
    GSMG02WeaponSoundMap.Add(ECharacterMontageName::Character_Montage_Jump, JumpSound);

    // Reload
    FWeaponSound ReloadSound = CreateWeaponSound(
        ECharacterMontageName::Character_Montage_Reload,
        0.0f,
        TEXT("/Script/Engine.SoundCue'/Game/Assets/Audio/Cues/Weapons/SC_WEP_SMG_02_Reload.SC_WEP_SMG_02_Reload'")
    );
    GSMG02WeaponSoundMap.Add(ECharacterMontageName::Character_Montage_Reload, ReloadSound);

    // Reload-Empty
    FWeaponSound ReloadEmptySound = CreateWeaponSound(
        ECharacterMontageName::Character_Montage_Reload_Empty,
        0.0f,
        TEXT("/Script/Engine.SoundCue'/Game/Assets/Audio/Cues/Weapons/SC_WEP_SMG_02_Reload_Empty.SC_WEP_SMG_02_Reload_Empty'")
    );
    GSMG02WeaponSoundMap.Add(ECharacterMontageName::Character_Montage_Reload_Empty, ReloadEmptySound);

    // Inspect
    FWeaponSound InspectSound = CreateWeaponSound(
        ECharacterMontageName::Character_Montage_Inspect,
        0.0f,
        TEXT("None")
    );
    GSMG02WeaponSoundMap.Add(ECharacterMontageName::Character_Montage_Inspect, InspectSound);

    // Holster
    FWeaponSound HolsterSound = CreateWeaponSound(
        ECharacterMontageName::Character_Montage_Holster,
        0.0f,
        TEXT("/Script/Engine.SoundCue'/Game/Assets/Audio/Cues/Weapons/SC_WEP_Holster.SC_WEP_Holster'")
    );
    GSMG02WeaponSoundMap.Add(ECharacterMontageName::Character_Montage_Holster, HolsterSound);

    // Holster-Smooth
    FWeaponSound HolsterSmoothSound = CreateWeaponSound(
        ECharacterMontageName::Character_Montage_Holster_Smooth,
        0.0f,
        TEXT("/Script/Engine.SoundCue'/Game/Assets/Audio/Cues/Weapons/SC_WEP_Holster.SC_WEP_Holster'")
    );
    GSMG02WeaponSoundMap.Add(ECharacterMontageName::Character_Montage_Holster_Smooth, HolsterSmoothSound);

    // Unholster
    FWeaponSound UnholsterSound = CreateWeaponSound(
        ECharacterMontageName::Character_Montage_Unholster,
        0.0f,
        TEXT("/Script/Engine.SoundCue'/Game/Assets/Audio/Cues/Weapons/SC_WEP_Unholster.SC_WEP_Unholster'")
    );
    GSMG02WeaponSoundMap.Add(ECharacterMontageName::Character_Montage_Unholster, UnholsterSound);

    // Unholster-Smooth
    FWeaponSound UnholsterSmoothSound = CreateWeaponSound(
        ECharacterMontageName::Character_Montage_Unholster_Smooth,
        0.0f,
        TEXT("/Script/Engine.SoundCue'/Game/Assets/Audio/Cues/Weapons/SC_WEP_Unholster.SC_WEP_Unholster'")
    );
    GSMG02WeaponSoundMap.Add(ECharacterMontageName::Character_Montage_Unholster_Smooth, UnholsterSmoothSound);
}

FWeaponSound USMG02WeaponSoundSettingsLibrary::GetWeaponSoundByName(ECharacterMontageName SoundName)
{
    InitSMG02WeaponSoundMap();
    
    if (FWeaponSound* FoundSound = GSMG02WeaponSoundMap.Find(SoundName))
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

TArray<FWeaponSound> USMG02WeaponSoundSettingsLibrary::GetAllSMG02WeaponSounds()
{
    InitSMG02WeaponSoundMap();
    TArray<FWeaponSound> AllSounds;
    GSMG02WeaponSoundMap.GenerateValueArray(AllSounds);
    return AllSounds;
}
