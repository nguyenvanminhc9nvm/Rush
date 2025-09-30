#include "LaserSettingsLibrary.h"
#include "Engine/Engine.h"
#include "Sound/SoundCue.h"

static TMap<EFragmentLaserName, FLaserSettingsEntry> GLaserSettingsMap;

static void InitLaserSettingsMap()
{
    if (GLaserSettingsMap.Num() > 0) return;

    // Hidden
    FLaserSettingsEntry HiddenEntry;
    HiddenEntry.Name = EFragmentLaserName::Fragment_Laser_Hidden;
    HiddenEntry.bOffWhileAiming = false;
    HiddenEntry.bOffWhileRunning = false;
    HiddenEntry.bOffWhileLowered = false;
    HiddenEntry.RelativeLocation = FVector::ZeroVector;
    HiddenEntry.ToggleSoundCue = nullptr;
    HiddenEntry.bFlashlight = false;
    HiddenEntry.bLasersight = false;
    
    GLaserSettingsMap.Add(EFragmentLaserName::Fragment_Laser_Hidden, HiddenEntry);

    // Flashlight
    FLaserSettingsEntry FlashlightEntry;
    FlashlightEntry.Name = EFragmentLaserName::Fragment_Flashlight;
    FlashlightEntry.bOffWhileAiming = false;
    FlashlightEntry.bOffWhileRunning = true;
    FlashlightEntry.bOffWhileLowered = true;
    FlashlightEntry.RelativeLocation = FVector::ZeroVector;
    FlashlightEntry.ToggleSoundCue = LoadObject<USoundCue>(nullptr, TEXT("/Game/Assets/Audio/Cues/Weapons/SC_WEP_Click.SC_WEP_Click"));
    FlashlightEntry.bFlashlight = true;
    FlashlightEntry.bLasersight = false;
    
    GLaserSettingsMap.Add(EFragmentLaserName::Fragment_Flashlight, FlashlightEntry);
    
    // Lasersight
    FLaserSettingsEntry LasersightEntry;
    LasersightEntry.Name = EFragmentLaserName::Fragment_LaserSight;
    LasersightEntry.bOffWhileAiming = false;
    LasersightEntry.bOffWhileRunning = true;
    LasersightEntry.bOffWhileLowered = true;
    LasersightEntry.RelativeLocation = FVector::ZeroVector;
    LasersightEntry.ToggleSoundCue = LoadObject<USoundCue>(nullptr, TEXT("/Game/Assets/Audio/Cues/Weapons/SC_WEP_Click.SC_WEP_Click"));
    LasersightEntry.bFlashlight = false;
    LasersightEntry.bLasersight = true;
    
    GLaserSettingsMap.Add(EFragmentLaserName::Fragment_LaserSight, LasersightEntry);
}

FLaserSettingsEntry ULaserSettingsLibrary::GetLaserSettingsByName(EFragmentLaserName LaserName)
{
    InitLaserSettingsMap();
    if (GLaserSettingsMap.Contains(LaserName))
    {
        return GLaserSettingsMap[LaserName];
    }
    return FLaserSettingsEntry();
}
