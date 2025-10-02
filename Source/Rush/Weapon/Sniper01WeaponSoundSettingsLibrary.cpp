#include "Sniper01WeaponSoundSettingsLibrary.h"
#include "Engine/Engine.h"
#include "Sound/SoundCue.h"

static TMap<ECharacterMontageName, FWeaponSound> GSniper01WeaponSoundMap;

static void InitSniper01WeaponSoundMap()
{
    if (GSniper01WeaponSoundMap.Num() > 0) return;

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
    GSniper01WeaponSoundMap.Add(ECharacterMontageName::Jump, JumpSound);

    // Reload-Bolt
    FWeaponSound ReloadBoltSound = CreateWeaponSound(
        ECharacterMontageName::Reload_Bolt,
        0.0f,
        TEXT("/Script/Engine.SoundCue'/Game/Assets/Audio/Cues/Weapons/SC_WEP_Sniper_01_Reload_Open.SC_WEP_Sniper_01_Reload_Open'")
    );
    GSniper01WeaponSoundMap.Add(ECharacterMontageName::Reload_Bolt, ReloadBoltSound);

    // Reload-Open
    FWeaponSound ReloadOpenSound = CreateWeaponSound(
        ECharacterMontageName::Reload_Open,
        0.0f,
        TEXT("/Script/Engine.SoundCue'/Game/Assets/Audio/Cues/Weapons/SC_WEP_Sniper_01_Reload_Open.SC_WEP_Sniper_01_Reload_Open'")
    );
    GSniper01WeaponSoundMap.Add(ECharacterMontageName::Reload_Open, ReloadOpenSound);

    // Reload-Insert
    FWeaponSound ReloadInsertSound = CreateWeaponSound(
        ECharacterMontageName::Reload_Insert,
        0.0f,
        TEXT("/Script/Engine.SoundCue'/Game/Assets/Audio/Cues/Weapons/SC_WEP_Sniper_01_Reload_Insert.SC_WEP_Sniper_01_Reload_Insert'")
    );
    GSniper01WeaponSoundMap.Add(ECharacterMontageName::Reload_Insert, ReloadInsertSound);

    // Reload-Close
    FWeaponSound ReloadCloseSound = CreateWeaponSound(
        ECharacterMontageName::Reload_Close,
        0.0f,
        TEXT("/Script/Engine.SoundCue'/Game/Assets/Audio/Cues/Weapons/SC_WEP_Sniper_01_Reload_Close.SC_WEP_Sniper_01_Reload_Close'")
    );
    GSniper01WeaponSoundMap.Add(ECharacterMontageName::Reload_Close, ReloadCloseSound);

    // Inspect
    FWeaponSound InspectSound = CreateWeaponSound(
        ECharacterMontageName::Inspect,
        0.0f,
        TEXT("None")
    );
    GSniper01WeaponSoundMap.Add(ECharacterMontageName::Inspect, InspectSound);

    // Holster
    FWeaponSound HolsterSound = CreateWeaponSound(
        ECharacterMontageName::Holster,
        0.0f,
        TEXT("/Script/Engine.SoundCue'/Game/Assets/Audio/Cues/Weapons/SC_WEP_Holster.SC_WEP_Holster'")
    );
    GSniper01WeaponSoundMap.Add(ECharacterMontageName::Holster, HolsterSound);

    // Holster-Smooth
    FWeaponSound HolsterSmoothSound = CreateWeaponSound(
        ECharacterMontageName::Holster_Smooth,
        0.0f,
        TEXT("/Script/Engine.SoundCue'/Game/Assets/Audio/Cues/Weapons/SC_WEP_Holster.SC_WEP_Holster'")
    );
    GSniper01WeaponSoundMap.Add(ECharacterMontageName::Holster_Smooth, HolsterSmoothSound);

    // Unholster
    FWeaponSound UnholsterSound = CreateWeaponSound(
        ECharacterMontageName::Unholster,
        0.0f,
        TEXT("/Script/Engine.SoundCue'/Game/Assets/Audio/Cues/Weapons/SC_WEP_Unholster.SC_WEP_Unholster'")
    );
    GSniper01WeaponSoundMap.Add(ECharacterMontageName::Unholster, UnholsterSound);

    // Unholster-Smooth
    FWeaponSound UnholsterSmoothSound = CreateWeaponSound(
        ECharacterMontageName::Unholster_Smooth,
        0.0f,
        TEXT("/Script/Engine.SoundCue'/Game/Assets/Audio/Cues/Weapons/SC_WEP_Unholster.SC_WEP_Unholster'")
    );
    GSniper01WeaponSoundMap.Add(ECharacterMontageName::Unholster_Smooth, UnholsterSmoothSound);
}

FWeaponSound USniper01WeaponSoundSettingsLibrary::GetWeaponSoundByName(ECharacterMontageName SoundName)
{
    InitSniper01WeaponSoundMap();
    
    if (FWeaponSound* FoundSound = GSniper01WeaponSoundMap.Find(SoundName))
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
