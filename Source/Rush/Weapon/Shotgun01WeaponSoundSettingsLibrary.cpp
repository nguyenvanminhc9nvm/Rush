#include "Shotgun01WeaponSoundSettingsLibrary.h"
#include "Engine/Engine.h"
#include "Sound/SoundCue.h"

static TMap<ECharacterMontageName, FWeaponSound> GShotgun01WeaponSoundMap;

static void InitShotgun01WeaponSoundMap()
{
    if (GShotgun01WeaponSoundMap.Num() > 0) return;

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
    GShotgun01WeaponSoundMap.Add(ECharacterMontageName::Jump, JumpSound);

    // Reload-Bolt
    FWeaponSound ReloadBoltSound = CreateWeaponSound(
        ECharacterMontageName::Reload_Bolt,
        0.0f,
        TEXT("/Script/Engine.SoundCue'/Game/Assets/Audio/Cues/Weapons/SC_WEP_Shotgun_Bolt_Open.SC_WEP_Shotgun_Bolt_Open'")
    );
    GShotgun01WeaponSoundMap.Add(ECharacterMontageName::Reload_Bolt, ReloadBoltSound);

    // Reload-Open
    FWeaponSound ReloadOpenSound = CreateWeaponSound(
        ECharacterMontageName::Reload_Open,
        0.17f,
        TEXT("/Script/Engine.SoundCue'/Game/Assets/Audio/Cues/Weapons/SC_WEP_Shotgun_Bolt_Open.SC_WEP_Shotgun_Bolt_Open'")
    );
    GShotgun01WeaponSoundMap.Add(ECharacterMontageName::Reload_Open, ReloadOpenSound);

    // Reload-Insert
    FWeaponSound ReloadInsertSound = CreateWeaponSound(
        ECharacterMontageName::Reload_Insert,
        0.0f,
        TEXT("/Script/Engine.SoundCue'/Game/Assets/Audio/Cues/Weapons/SC_WEP_Shotgun_01_Reload_Insert.SC_WEP_Shotgun_01_Reload_Insert'")
    );
    GShotgun01WeaponSoundMap.Add(ECharacterMontageName::Reload_Insert, ReloadInsertSound);

    // Reload-Close
    FWeaponSound ReloadCloseSound = CreateWeaponSound(
        ECharacterMontageName::Reload_Close,
        0.038f,
        TEXT("/Script/Engine.SoundCue'/Game/Assets/Audio/Cues/Weapons/SC_WEP_Shotgun_Bolt_Close.SC_WEP_Shotgun_Bolt_Close'")
    );
    GShotgun01WeaponSoundMap.Add(ECharacterMontageName::Reload_Close, ReloadCloseSound);

    // Inspect
    FWeaponSound InspectSound = CreateWeaponSound(
        ECharacterMontageName::Inspect,
        0.0f,
        TEXT("None")
    );
    GShotgun01WeaponSoundMap.Add(ECharacterMontageName::Inspect, InspectSound);

    // Holster
    FWeaponSound HolsterSound = CreateWeaponSound(
        ECharacterMontageName::Holster,
        0.0f,
        TEXT("/Script/Engine.SoundCue'/Game/Assets/Audio/Cues/Weapons/SC_WEP_Holster.SC_WEP_Holster'")
    );
    GShotgun01WeaponSoundMap.Add(ECharacterMontageName::Holster, HolsterSound);

    // Holster-Smooth
    FWeaponSound HolsterSmoothSound = CreateWeaponSound(
        ECharacterMontageName::Holster_Smooth,
        0.0f,
        TEXT("/Script/Engine.SoundCue'/Game/Assets/Audio/Cues/Weapons/SC_WEP_Holster.SC_WEP_Holster'")
    );
    GShotgun01WeaponSoundMap.Add(ECharacterMontageName::Holster_Smooth, HolsterSmoothSound);

    // Unholster
    FWeaponSound UnholsterSound = CreateWeaponSound(
        ECharacterMontageName::Unholster,
        0.0f,
        TEXT("/Script/Engine.SoundCue'/Game/Assets/Audio/Cues/Weapons/SC_WEP_Unholster.SC_WEP_Unholster'")
    );
    GShotgun01WeaponSoundMap.Add(ECharacterMontageName::Unholster, UnholsterSound);

    // Unholster-Smooth
    FWeaponSound UnholsterSmoothSound = CreateWeaponSound(
        ECharacterMontageName::Unholster_Smooth,
        0.0f,
        TEXT("/Script/Engine.SoundCue'/Game/Assets/Audio/Cues/Weapons/SC_WEP_Unholster.SC_WEP_Unholster'")
    );
    GShotgun01WeaponSoundMap.Add(ECharacterMontageName::Unholster_Smooth, UnholsterSmoothSound);
}

FWeaponSound UShotgun01WeaponSoundSettingsLibrary::GetWeaponSoundByName(ECharacterMontageName SoundName)
{
    InitShotgun01WeaponSoundMap();
    
    if (FWeaponSound* FoundSound = GShotgun01WeaponSoundMap.Find(SoundName))
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
