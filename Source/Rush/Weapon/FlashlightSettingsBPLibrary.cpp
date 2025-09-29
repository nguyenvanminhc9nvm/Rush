#include "FlashlightSettingsBPLibrary.h"
#include "Engine/Engine.h"

static TMap<FString, FFlashlightSettingsEntry> GFlashlightSettingsMap;

static void InitFlashlightSettingsMap()
{
    if (GFlashlightSettingsMap.Num() > 0) return;

    // Normal
    FFlashlightSettingsEntry Normal;
    Normal.Name = EFlashlightSettingsName::Normal;
    Normal.Intensity = 2500.0f;
    Normal.AttenuationRadius = 2500.0f;
    Normal.InnerConeAngle = 8.0f;
    Normal.OuterConeAngle = 25.0f;
    Normal.Color = FLinearColor(1.0f, 1.0f, 1.0f, 1.0f);
    Normal.LightFunctionMaterial = TSoftObjectPtr<UMaterialInterface>(FSoftObjectPath("/Game/Blueprint/Effects/Materials/MI_Flashlight_Light_Function.MI_Flashlight_Light_Function"));
    GFlashlightSettingsMap.Add("Normal", Normal);

    // Neon
    FFlashlightSettingsEntry Neon;
    Neon.Name = EFlashlightSettingsName::Neon;
    Neon.Intensity = 2500.0f;
    Neon.AttenuationRadius = 2500.0f;
    Neon.InnerConeAngle = 8.0f;
    Neon.OuterConeAngle = 25.0f;
    Neon.Color = FLinearColor(0.611765f, 0.0f, 1.0f, 1.0f);
    Neon.LightFunctionMaterial = TSoftObjectPtr<UMaterialInterface>(FSoftObjectPath("/Game/Blueprint/Effects/Materials/MI_Flashlight_Light_Function.MI_Flashlight_Light_Function"));
    GFlashlightSettingsMap.Add("Neon", Neon);

    // Tactical
    FFlashlightSettingsEntry Tactical;
    Tactical.Name = EFlashlightSettingsName::Tactical;
    Tactical.Intensity = 2500.0f;
    Tactical.AttenuationRadius = 2500.0f;
    Tactical.InnerConeAngle = 8.0f;
    Tactical.OuterConeAngle = 25.0f;
    Tactical.Color = FLinearColor(0.0f, 0.923001f, 1.0f, 1.0f);
    Tactical.LightFunctionMaterial = TSoftObjectPtr<UMaterialInterface>(FSoftObjectPath("/Game/Blueprint/Effects/Materials/MI_Flashlight_Light_Function.MI_Flashlight_Light_Function"));
    GFlashlightSettingsMap.Add("Tactical", Tactical);
}

FFlashlightSettingsEntry UFlashlightSettingsBPLibrary::GetFlashlightSettingsByName(EFlashlightSettingsName SettingsName)
{
    InitFlashlightSettingsMap();
    FString SettingsNameString = FlashlightSettingsNameToString(SettingsName);
    if (FFlashlightSettingsEntry* Found = GFlashlightSettingsMap.Find(SettingsNameString))
    {
        return *Found;
    }
    return FFlashlightSettingsEntry();
}

FString UFlashlightSettingsBPLibrary::FlashlightSettingsNameToString(EFlashlightSettingsName SettingsName)
{
    switch (SettingsName)
    {
        case EFlashlightSettingsName::Normal:
            return "Normal";
        case EFlashlightSettingsName::Neon:
            return "Neon";
        case EFlashlightSettingsName::Tactical:
            return "Tactical";
        default:
            return "Normal";
    }
}
