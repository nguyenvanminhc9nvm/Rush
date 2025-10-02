#include "SMG04WeaponSoundSettingsLibrary.h"
#include "Engine/Engine.h"
#include "Sound/SoundCue.h"

static TMap<ECharacterMontageName, FWeaponSound> GSMG04WeaponSoundMap;

static void InitSMG04WeaponSoundMap()
{
    if (GSMG04WeaponSoundMap.Num() > 0) return;

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
        ECharacterMontageName::Jump,
        0.0f,
        TEXT("/Script/Engine.SoundCue'/Game/Assets/Audio/Cues/SC_CH_Jump_Start.SC_CH_Jump_Start'")
    );
    GSMG04WeaponSoundMap.Add(ECharacterMontageName::Jump, JumpSound);

    // Reload
    FWeaponSound ReloadSound = CreateWeaponSound(
        ECharacterMontageName::Reload,
        0.0f,
        TEXT("/Script/Engine.SoundCue'/Game/Assets/Audio/Cues/Weapons/SC_WEP_SMG_04_Reload.SC_WEP_SMG_04_Reload'")
    );
    GSMG04WeaponSoundMap.Add(ECharacterMontageName::Reload, ReloadSound);

    // Reload-Empty
    FWeaponSound ReloadEmptySound = CreateWeaponSound(
        ECharacterMontageName::Reload_Empty,
        0.0f,
        TEXT("/Script/Engine.SoundCue'/Game/Assets/Audio/Cues/Weapons/SC_WEP_SMG_04_Reload_Empty.SC_WEP_SMG_04_Reload_Empty'")
    );
    GSMG04WeaponSoundMap.Add(ECharacterMontageName::Reload_Empty, ReloadEmptySound);

    // Inspect
    FWeaponSound InspectSound = CreateWeaponSound(
        ECharacterMontageName::Inspect,
        0.0f,
        TEXT("None")
    );
    GSMG04WeaponSoundMap.Add(ECharacterMontageName::Inspect, InspectSound);

    // Holster
    FWeaponSound HolsterSound = CreateWeaponSound(
        ECharacterMontageName::Holster,
        0.0f,
        TEXT("/Script/Engine.SoundCue'/Game/Assets/Audio/Cues/Weapons/SC_WEP_Holster.SC_WEP_Holster'")
    );
    GSMG04WeaponSoundMap.Add(ECharacterMontageName::Holster, HolsterSound);

    // Holster-Smooth
    FWeaponSound HolsterSmoothSound = CreateWeaponSound(
        ECharacterMontageName::Holster_Smooth,
        0.0f,
        TEXT("/Script/Engine.SoundCue'/Game/Assets/Audio/Cues/Weapons/SC_WEP_Holster.SC_WEP_Holster'")
    );
    GSMG04WeaponSoundMap.Add(ECharacterMontageName::Holster_Smooth, HolsterSmoothSound);

    // Unholster
    FWeaponSound UnholsterSound = CreateWeaponSound(
        ECharacterMontageName::Unholster,
        0.0f,
        TEXT("/Script/Engine.SoundCue'/Game/Assets/Audio/Cues/Weapons/SC_WEP_Unholster.SC_WEP_Unholster'")
    );
    GSMG04WeaponSoundMap.Add(ECharacterMontageName::Unholster, UnholsterSound);

    // Unholster-Smooth
    FWeaponSound UnholsterSmoothSound = CreateWeaponSound(
        ECharacterMontageName::Unholster_Smooth,
        0.0f,
        TEXT("/Script/Engine.SoundCue'/Game/Assets/Audio/Cues/Weapons/SC_WEP_Unholster.SC_WEP_Unholster'")
    );
    GSMG04WeaponSoundMap.Add(ECharacterMontageName::Unholster_Smooth, UnholsterSmoothSound);
}

FWeaponSound USMG04WeaponSoundSettingsLibrary::GetWeaponSoundByName(ECharacterMontageName SoundName)
{
    InitSMG04WeaponSoundMap();
    
    if (FWeaponSound* FoundSound = GSMG04WeaponSoundMap.Find(SoundName))
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
