#include "LaserSettingsLibrary.h"
#include "Engine/Engine.h"
#include "Sound/SoundCue.h"

static TMap<EWeaponIconName, FLaserSettingsEntry> GLaserSettingsMap;

static void InitLaserSettingsMap()
{
    if (GLaserSettingsMap.Num() > 0) return;

    // Hidden
    FLaserSettingsEntry HiddenEntry;
    HiddenEntry.Name = EWeaponIconName::NoneHidden;
    HiddenEntry.bOffWhileAiming = false;
    HiddenEntry.bOffWhileRunning = false;
    HiddenEntry.bOffWhileLowered = false;
    HiddenEntry.RelativeLocation = FVector::ZeroVector;
    HiddenEntry.ToggleSoundCue = nullptr;
    HiddenEntry.bFlashlight = false;
    HiddenEntry.bLasersight = false;
    
    GLaserSettingsMap.Add(EWeaponIconName::NoneHidden, HiddenEntry);

    // Flashlight
    FLaserSettingsEntry FlashlightEntry;
    FlashlightEntry.Name = EWeaponIconName::Flashlight;
    FlashlightEntry.bOffWhileAiming = false;
    FlashlightEntry.bOffWhileRunning = true;
    FlashlightEntry.bOffWhileLowered = true;
    FlashlightEntry.RelativeLocation = FVector::ZeroVector;
    FlashlightEntry.ToggleSoundCue = LoadObject<USoundCue>(nullptr, TEXT("/Game/Assets/Audio/Cues/Weapons/SC_WEP_Click.SC_WEP_Click"));
    FlashlightEntry.bFlashlight = true;
    FlashlightEntry.bLasersight = false;
    
    GLaserSettingsMap.Add(EWeaponIconName::Flashlight, FlashlightEntry);
    
    // Lasersight
    FLaserSettingsEntry LasersightEntry;
    LasersightEntry.Name = EWeaponIconName::Lasersight;
    LasersightEntry.bOffWhileAiming = false;
    LasersightEntry.bOffWhileRunning = true;
    LasersightEntry.bOffWhileLowered = true;
    LasersightEntry.RelativeLocation = FVector::ZeroVector;
    LasersightEntry.ToggleSoundCue = LoadObject<USoundCue>(nullptr, TEXT("/Game/Assets/Audio/Cues/Weapons/SC_WEP_Click.SC_WEP_Click"));
    LasersightEntry.bFlashlight = false;
    LasersightEntry.bLasersight = true;
    
    GLaserSettingsMap.Add(EWeaponIconName::Lasersight, LasersightEntry);
}

FLaserSettingsEntry ULaserSettingsLibrary::GetLaserSettingsByName(EWeaponIconName LaserName)
{
    InitLaserSettingsMap();
    if (GLaserSettingsMap.Contains(LaserName))
    {
        return GLaserSettingsMap[LaserName];
    }
    return FLaserSettingsEntry();
}

TArray<FLaserSettingsEntry> ULaserSettingsLibrary::GetAllLaserSettings()
{
    InitLaserSettingsMap();
    TArray<FLaserSettingsEntry> AllSettings;
    GLaserSettingsMap.GenerateValueArray(AllSettings);
    return AllSettings;
}
