#include "LasersightSettingsBPLibrary.h"
#include "Engine/Engine.h"

static TMap<ELasersightSettingsName, FLasersightSettingsEntry> GLasersightSettingsMap;

static void InitLasersightSettingsMap()
{
    if (GLasersightSettingsMap.Num() > 0) return;

    // Normal
    FLasersightSettingsEntry Normal;
    Normal.Name = ELasersightSettingsName::Laser_Normal;
    Normal.LasersightBeamThickness = 3.0f;
    Normal.LasersightBeamColor = FLinearColor(1.0f, 0.0f, 0.0f, 1.0f);
    Normal.LasersightBeamMaterial = TSoftObjectPtr<UMaterialInterface>(FSoftObjectPath("/Game/Blueprint/Effects/Materials/MI_Laser_Beam.MI_Laser_Beam"));
    Normal.LasersightDotSizeBase = 2.0f;
    Normal.LasersightDotSizeMultiplier = 0.002f;
    Normal.LasersightDotColor = FLinearColor(1.0f, 0.0f, 0.0f, 1.0f);
    Normal.LasersightDotMaterial = TSoftObjectPtr<UMaterialInterface>(FSoftObjectPath("/Game/Blueprint/Effects/Materials/MI_Laser_Dot.MI_Laser_Dot"));
    GLasersightSettingsMap.Add(ELasersightSettingsName::Laser_Normal, Normal);

    // Neon
    FLasersightSettingsEntry Neon;
    Neon.Name = ELasersightSettingsName::Laser_Neon;
    Neon.LasersightBeamThickness = 3.0f;
    Neon.LasersightBeamColor = FLinearColor(0.611765f, 0.0f, 1.0f, 1.0f);
    Neon.LasersightBeamMaterial = TSoftObjectPtr<UMaterialInterface>(FSoftObjectPath("/Game/Blueprint/Effects/Materials/MI_Laser_Beam_Neon.MI_Laser_Beam_Neon"));
    Neon.LasersightDotSizeBase = 2.0f;
    Neon.LasersightDotSizeMultiplier = 0.002f;
    Neon.LasersightDotColor = FLinearColor(0.611765f, 0.0f, 1.0f, 1.0f);
    Neon.LasersightDotMaterial = TSoftObjectPtr<UMaterialInterface>(FSoftObjectPath("/Game/Blueprint/Effects/Materials/MI_Laser_Dot.MI_Laser_Dot"));
    GLasersightSettingsMap.Add(ELasersightSettingsName::Laser_Neon, Neon);

    // Yellow
    FLasersightSettingsEntry Yellow;
    Yellow.Name = ELasersightSettingsName::Laser_Yellow;
    Yellow.LasersightBeamThickness = 3.0f;
    Yellow.LasersightBeamColor = FLinearColor(1.0f, 0.901961f, 0.0f, 1.0f);
    Yellow.LasersightBeamMaterial = TSoftObjectPtr<UMaterialInterface>(FSoftObjectPath("/Game/Blueprint/Effects/Materials/MI_Laser_Beam.MI_Laser_Beam"));
    Yellow.LasersightDotSizeBase = 2.0f;
    Yellow.LasersightDotSizeMultiplier = 0.002f;
    Yellow.LasersightDotColor = FLinearColor(1.0f, 0.901961f, 0.0f, 1.0f);
    Yellow.LasersightDotMaterial = TSoftObjectPtr<UMaterialInterface>(FSoftObjectPath("/Game/Blueprint/Effects/Materials/MI_Laser_Dot.MI_Laser_Dot"));
    GLasersightSettingsMap.Add(ELasersightSettingsName::Laser_Yellow, Yellow);

    // Tactical
    FLasersightSettingsEntry Tactical;
    Tactical.Name = ELasersightSettingsName::Laser_Tactical;
    Tactical.LasersightBeamThickness = 3.0f;
    Tactical.LasersightBeamColor = FLinearColor(0.0f, 0.923001f, 1.0f, 1.0f);
    Tactical.LasersightBeamMaterial = TSoftObjectPtr<UMaterialInterface>(FSoftObjectPath("/Game/Blueprint/Effects/Materials/MI_Laser_Beam.MI_Laser_Beam"));
    Tactical.LasersightDotSizeBase = 2.0f;
    Tactical.LasersightDotSizeMultiplier = 0.002f;
    Tactical.LasersightDotColor = FLinearColor(0.0f, 0.923001f, 1.0f, 1.0f);
    Tactical.LasersightDotMaterial = TSoftObjectPtr<UMaterialInterface>(FSoftObjectPath("/Game/Blueprint/Effects/Materials/MI_Laser_Dot.MI_Laser_Dot"));
    GLasersightSettingsMap.Add(ELasersightSettingsName::Laser_Tactical, Tactical);

    // Evil
    FLasersightSettingsEntry Evil;
    Evil.Name = ELasersightSettingsName::Laser_Evil;
    Evil.LasersightBeamThickness = 3.0f;
    Evil.LasersightBeamColor = FLinearColor(0.984375f, 1.0f, 0.96875f, 1.0f);
    Evil.LasersightBeamMaterial = TSoftObjectPtr<UMaterialInterface>(FSoftObjectPath("/Game/Blueprint/Effects/Materials/MI_Laser_Beam.MI_Laser_Beam"));
    Evil.LasersightDotSizeBase = 2.0f;
    Evil.LasersightDotSizeMultiplier = 0.002f;
    Evil.LasersightDotColor = FLinearColor(0.984375f, 1.0f, 0.96875f, 1.0f);
    Evil.LasersightDotMaterial = TSoftObjectPtr<UMaterialInterface>(FSoftObjectPath("/Game/Blueprint/Effects/Materials/MI_Laser_Dot.MI_Laser_Dot"));
    GLasersightSettingsMap.Add(ELasersightSettingsName::Laser_Evil, Evil);

    // Venomous
    FLasersightSettingsEntry Venomous;
    Venomous.Name = ELasersightSettingsName::Laser_Venomous;
    Venomous.LasersightBeamThickness = 3.0f;
    Venomous.LasersightBeamColor = FLinearColor(0.042093f, 1.0f, 0.0f, 1.0f);
    Venomous.LasersightBeamMaterial = TSoftObjectPtr<UMaterialInterface>(FSoftObjectPath("/Game/Blueprint/Effects/Materials/MI_Laser_Beam.MI_Laser_Beam"));
    Venomous.LasersightDotSizeBase = 2.0f;
    Venomous.LasersightDotSizeMultiplier = 0.002f;
    Venomous.LasersightDotColor = FLinearColor(0.042093f, 1.0f, 0.0f, 1.0f);
    Venomous.LasersightDotMaterial = TSoftObjectPtr<UMaterialInterface>(FSoftObjectPath("/Game/Blueprint/Effects/Materials/MI_Laser_Dot.MI_Laser_Dot"));
    GLasersightSettingsMap.Add(ELasersightSettingsName::Laser_Venomous, Venomous);
}

FLasersightSettingsEntry ULasersightSettingsBPLibrary::GetLasersightSettingsByName(ELasersightSettingsName SettingsName)
{
    InitLasersightSettingsMap();
    if (FLasersightSettingsEntry* Found = GLasersightSettingsMap.Find(SettingsName))
    {
        return *Found;
    }
    return FLasersightSettingsEntry();
}

