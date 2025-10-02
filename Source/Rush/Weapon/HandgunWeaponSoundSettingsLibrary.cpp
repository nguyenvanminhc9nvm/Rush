#include "HandgunWeaponSoundSettingsLibrary.h"
#include "Engine/Engine.h"
#include "Sound/SoundCue.h"

static TMap<ECharacterMontageName, FWeaponSound> GHandgunWeaponSoundMap;

static void InitHandgunWeaponSoundMap()
{
    if (GHandgunWeaponSoundMap.Num() > 0) return;

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
    GHandgunWeaponSoundMap.Add(ECharacterMontageName::Jump, JumpSound);

    // Reload
    FWeaponSound ReloadSound = CreateWeaponSound(
        ECharacterMontageName::Reload,
        0.0f,
        TEXT("/Script/Engine.SoundCue'/Game/Assets/Audio/Cues/SC_Handgun_Reload.SC_Handgun_Reload'")
    );
    GHandgunWeaponSoundMap.Add(ECharacterMontageName::Reload, ReloadSound);

    // Reload-Empty
    FWeaponSound ReloadEmptySound = CreateWeaponSound(
        ECharacterMontageName::Reload_Empty,
        0.0f,
        TEXT("/Script/Engine.SoundCue'/Game/Assets/Audio/Cues/SC_Handgun_Reload_Empty.SC_Handgun_Reload_Empty'")
    );
    GHandgunWeaponSoundMap.Add(ECharacterMontageName::Reload_Empty, ReloadEmptySound);

    // Inspect
    FWeaponSound InspectSound = CreateWeaponSound(
        ECharacterMontageName::Inspect,
        0.0f,
        TEXT("None")
    );
    GHandgunWeaponSoundMap.Add(ECharacterMontageName::Inspect, InspectSound);

    // Holster
    FWeaponSound HolsterSound = CreateWeaponSound(
        ECharacterMontageName::Holster,
        0.0f,
        TEXT("/Script/Engine.SoundCue'/Game/Assets/Audio/Cues/Weapons/SC_WEP_Holster.SC_WEP_Holster'")
    );
    GHandgunWeaponSoundMap.Add(ECharacterMontageName::Holster, HolsterSound);

    // Holster-Smooth
    FWeaponSound HolsterSmoothSound = CreateWeaponSound(
        ECharacterMontageName::Holster_Smooth,
        0.0f,
        TEXT("/Script/Engine.SoundCue'/Game/Assets/Audio/Cues/Weapons/SC_WEP_Holster.SC_WEP_Holster'")
    );
    GHandgunWeaponSoundMap.Add(ECharacterMontageName::Holster_Smooth, HolsterSmoothSound);

    // Unholster
    FWeaponSound UnholsterSound = CreateWeaponSound(
        ECharacterMontageName::Unholster,
        0.0f,
        TEXT("/Script/Engine.SoundCue'/Game/Assets/Audio/Cues/Weapons/SC_WEP_Unholster.SC_WEP_Unholster'")
    );
    GHandgunWeaponSoundMap.Add(ECharacterMontageName::Unholster, UnholsterSound);

    // Unholster-Smooth
    FWeaponSound UnholsterSmoothSound = CreateWeaponSound(
        ECharacterMontageName::Unholster_Smooth,
        0.0f,
        TEXT("/Script/Engine.SoundCue'/Game/Assets/Audio/Cues/Weapons/SC_WEP_Unholster.SC_WEP_Unholster'")
    );
    GHandgunWeaponSoundMap.Add(ECharacterMontageName::Unholster_Smooth, UnholsterSmoothSound);
}

FWeaponSound UHandgunWeaponSoundSettingsLibrary::GetWeaponSoundByName(ECharacterMontageName SoundName)
{
    InitHandgunWeaponSoundMap();
    
    if (FWeaponSound* FoundSound = GHandgunWeaponSoundMap.Find(SoundName))
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
