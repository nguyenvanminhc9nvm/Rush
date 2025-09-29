#include "LasersightSettingsBPLibrary.h"
#include "Engine/Engine.h"

static TMap<FString, FLasersightSettingsEntry> GLasersightSettingsMap;

static void InitLasersightSettingsMap()
{
    if (GLasersightSettingsMap.Num() > 0) return;

    // Normal
    FLasersightSettingsEntry Normal;
    Normal.Name = ELasersightSettingsName::Normal;
    Normal.LasersightBeamThickness = 3.0f;
    Normal.LasersightBeamColor = FLinearColor(1.0f, 0.0f, 0.0f, 1.0f);
    Normal.LasersightBeamMaterial = TSoftObjectPtr<UMaterialInterface>(FSoftObjectPath("/Game/Blueprint/Effects/Materials/MI_Laser_Beam.MI_Laser_Beam"));
    Normal.LasersightDotSizeBase = 2.0f;
    Normal.LasersightDotSizeMultiplier = 0.002f;
    Normal.LasersightDotColor = FLinearColor(1.0f, 0.0f, 0.0f, 1.0f);
    Normal.LasersightDotMaterial = TSoftObjectPtr<UMaterialInterface>(FSoftObjectPath("/Game/Blueprint/Effects/Materials/MI_Laser_Dot.MI_Laser_Dot"));
    GLasersightSettingsMap.Add("Normal", Normal);

    // Neon
    FLasersightSettingsEntry Neon;
    Neon.Name = ELasersightSettingsName::Neon;
    Neon.LasersightBeamThickness = 3.0f;
    Neon.LasersightBeamColor = FLinearColor(0.611765f, 0.0f, 1.0f, 1.0f);
    Neon.LasersightBeamMaterial = TSoftObjectPtr<UMaterialInterface>(FSoftObjectPath("/Game/Blueprint/Effects/Materials/MI_Laser_Beam_Neon.MI_Laser_Beam_Neon"));
    Neon.LasersightDotSizeBase = 2.0f;
    Neon.LasersightDotSizeMultiplier = 0.002f;
    Neon.LasersightDotColor = FLinearColor(0.611765f, 0.0f, 1.0f, 1.0f);
    Neon.LasersightDotMaterial = TSoftObjectPtr<UMaterialInterface>(FSoftObjectPath("/Game/Blueprint/Effects/Materials/MI_Laser_Dot.MI_Laser_Dot"));
    GLasersightSettingsMap.Add("Neon", Neon);

    // Yellow
    FLasersightSettingsEntry Yellow;
    Yellow.Name = ELasersightSettingsName::Yellow;
    Yellow.LasersightBeamThickness = 3.0f;
    Yellow.LasersightBeamColor = FLinearColor(1.0f, 0.901961f, 0.0f, 1.0f);
    Yellow.LasersightBeamMaterial = TSoftObjectPtr<UMaterialInterface>(FSoftObjectPath("/Game/Blueprint/Effects/Materials/MI_Laser_Beam.MI_Laser_Beam"));
    Yellow.LasersightDotSizeBase = 2.0f;
    Yellow.LasersightDotSizeMultiplier = 0.002f;
    Yellow.LasersightDotColor = FLinearColor(1.0f, 0.901961f, 0.0f, 1.0f);
    Yellow.LasersightDotMaterial = TSoftObjectPtr<UMaterialInterface>(FSoftObjectPath("/Game/Blueprint/Effects/Materials/MI_Laser_Dot.MI_Laser_Dot"));
    GLasersightSettingsMap.Add("Yellow", Yellow);

    // Tactical
    FLasersightSettingsEntry Tactical;
    Tactical.Name = ELasersightSettingsName::Tactical;
    Tactical.LasersightBeamThickness = 3.0f;
    Tactical.LasersightBeamColor = FLinearColor(0.0f, 0.923001f, 1.0f, 1.0f);
    Tactical.LasersightBeamMaterial = TSoftObjectPtr<UMaterialInterface>(FSoftObjectPath("/Game/Blueprint/Effects/Materials/MI_Laser_Beam.MI_Laser_Beam"));
    Tactical.LasersightDotSizeBase = 2.0f;
    Tactical.LasersightDotSizeMultiplier = 0.002f;
    Tactical.LasersightDotColor = FLinearColor(0.0f, 0.923001f, 1.0f, 1.0f);
    Tactical.LasersightDotMaterial = TSoftObjectPtr<UMaterialInterface>(FSoftObjectPath("/Game/Blueprint/Effects/Materials/MI_Laser_Dot.MI_Laser_Dot"));
    GLasersightSettingsMap.Add("Tactical", Tactical);

    // Evil
    FLasersightSettingsEntry Evil;
    Evil.Name = ELasersightSettingsName::Evil;
    Evil.LasersightBeamThickness = 3.0f;
    Evil.LasersightBeamColor = FLinearColor(0.984375f, 1.0f, 0.96875f, 1.0f);
    Evil.LasersightBeamMaterial = TSoftObjectPtr<UMaterialInterface>(FSoftObjectPath("/Game/Blueprint/Effects/Materials/MI_Laser_Beam.MI_Laser_Beam"));
    Evil.LasersightDotSizeBase = 2.0f;
    Evil.LasersightDotSizeMultiplier = 0.002f;
    Evil.LasersightDotColor = FLinearColor(0.984375f, 1.0f, 0.96875f, 1.0f);
    Evil.LasersightDotMaterial = TSoftObjectPtr<UMaterialInterface>(FSoftObjectPath("/Game/Blueprint/Effects/Materials/MI_Laser_Dot.MI_Laser_Dot"));
    GLasersightSettingsMap.Add("Evil", Evil);

    // Venomous
    FLasersightSettingsEntry Venomous;
    Venomous.Name = ELasersightSettingsName::Venomous;
    Venomous.LasersightBeamThickness = 3.0f;
    Venomous.LasersightBeamColor = FLinearColor(0.042093f, 1.0f, 0.0f, 1.0f);
    Venomous.LasersightBeamMaterial = TSoftObjectPtr<UMaterialInterface>(FSoftObjectPath("/Game/Blueprint/Effects/Materials/MI_Laser_Beam.MI_Laser_Beam"));
    Venomous.LasersightDotSizeBase = 2.0f;
    Venomous.LasersightDotSizeMultiplier = 0.002f;
    Venomous.LasersightDotColor = FLinearColor(0.042093f, 1.0f, 0.0f, 1.0f);
    Venomous.LasersightDotMaterial = TSoftObjectPtr<UMaterialInterface>(FSoftObjectPath("/Game/Blueprint/Effects/Materials/MI_Laser_Dot.MI_Laser_Dot"));
    GLasersightSettingsMap.Add("Venomous", Venomous);
}

FLasersightSettingsEntry ULasersightSettingsBPLibrary::GetLasersightSettingsByName(ELasersightSettingsName SettingsName)
{
    InitLasersightSettingsMap();
    FString SettingsNameString = LasersightSettingsNameToString(SettingsName);
    if (FLasersightSettingsEntry* Found = GLasersightSettingsMap.Find(SettingsNameString))
    {
        return *Found;
    }
    return FLasersightSettingsEntry();
}


FString ULasersightSettingsBPLibrary::LasersightSettingsNameToString(ELasersightSettingsName SettingsName)
{
    switch (SettingsName)
    {
        case ELasersightSettingsName::Normal:
            return "Normal";
        case ELasersightSettingsName::Neon:
            return "Neon";
        case ELasersightSettingsName::Yellow:
            return "Yellow";
        case ELasersightSettingsName::Tactical:
            return "Tactical";
        case ELasersightSettingsName::Evil:
            return "Evil";
        case ELasersightSettingsName::Venomous:
            return "Venomous";
        default:
            return "Normal";
    }
}
