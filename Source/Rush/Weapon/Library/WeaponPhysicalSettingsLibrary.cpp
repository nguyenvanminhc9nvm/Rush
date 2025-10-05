#include "WeaponPhysicalSettingsLibrary.h"
#include "Engine/Engine.h"

static TMap<EWeaponPhysicalState, FWeaponPhysicalSettings> GWeaponPhysicalSettingsMap;

static void InitWeaponPhysicalSettingsMap()
{
    if (GWeaponPhysicalSettingsMap.Num() > 0) return;

    // Helper function to create physical settings
    auto CreatePhysicalSettings = [](const FName& CollisionProfile, bool bSimPhysics, bool bCastShad, bool bVis, bool bHidden, bool bDecals, bool bCustomDepth) -> FWeaponPhysicalSettings
    {
        FWeaponPhysicalSettings Settings;
        Settings.CollisionProfileName = CollisionProfile;
        Settings.bSimulatePhysics = bSimPhysics;
        Settings.bCastShadow = bCastShad;
        Settings.bVisible = bVis;
        Settings.bHiddenInGame = bHidden;
        Settings.bReceivesDecals = bDecals;
        Settings.bRenderCustomDepth = bCustomDepth;
        return Settings;
    };

    // Hidden
    FWeaponPhysicalSettings HiddenSettings = CreatePhysicalSettings(
        FName("NoCollision"),
        false, // Simulate Physics
        false, // Cast Shadow
        false, // Visible
        false, // Hidden In Game
        false, // Receives Decals
        false  // Render Custom Depth
    );
    GWeaponPhysicalSettingsMap.Add(EWeaponPhysicalState::Hidden, HiddenSettings);

    // Icon
    FWeaponPhysicalSettings IconSettings = CreatePhysicalSettings(
        FName("NoCollision"),
        false, // Simulate Physics
        false, // Cast Shadow
        true,  // Visible
        false, // Hidden In Game
        false, // Receives Decals
        true   // Render Custom Depth
    );
    GWeaponPhysicalSettingsMap.Add(EWeaponPhysicalState::Icon, IconSettings);

    // Static
    FWeaponPhysicalSettings StaticSettings = CreatePhysicalSettings(
        FName("Weapon-Static"),
        false, // Simulate Physics
        false, // Cast Shadow
        true,  // Visible
        false, // Hidden In Game
        true,  // Receives Decals
        false  // Render Custom Depth
    );
    GWeaponPhysicalSettingsMap.Add(EWeaponPhysicalState::Static, StaticSettings);

    // Physics
    FWeaponPhysicalSettings PhysicsSettings = CreatePhysicalSettings(
        FName("Weapon-Physics"),
        true,  // Simulate Physics
        false, // Cast Shadow
        true,  // Visible
        false, // Hidden In Game
        true,  // Receives Decals
        false  // Render Custom Depth
    );
    GWeaponPhysicalSettingsMap.Add(EWeaponPhysicalState::Physics, PhysicsSettings);

    // Physics-Attached
    FWeaponPhysicalSettings PhysicsAttachedSettings = CreatePhysicalSettings(
        FName("Weaon-Physics-Attached"),
        true,  // Simulate Physics
        false, // Cast Shadow
        true,  // Visible
        false, // Hidden In Game
        true,  // Receives Decals
        false  // Render Custom Depth
    );
    GWeaponPhysicalSettingsMap.Add(EWeaponPhysicalState::Physics_Attached, PhysicsAttachedSettings);

    // Viewmodel
    FWeaponPhysicalSettings ViewmodelSettings = CreatePhysicalSettings(
        FName("NoCollision"),
        false, // Simulate Physics
        false, // Cast Shadow
        true,  // Visible
        false, // Hidden In Game
        false, // Receives Decals
        false  // Render Custom Depth
    );
    GWeaponPhysicalSettingsMap.Add(EWeaponPhysicalState::Viewmodel, ViewmodelSettings);

    // Viewmodel-Third-Person
    FWeaponPhysicalSettings ViewmodelThirdPersonSettings = CreatePhysicalSettings(
        FName("NoCollision"),
        false, // Simulate Physics
        true,  // Cast Shadow
        true,  // Visible
        false, // Hidden In Game
        false, // Receives Decals
        false  // Render Custom Depth
    );
    GWeaponPhysicalSettingsMap.Add(EWeaponPhysicalState::Viewmodel_Third_Person, ViewmodelThirdPersonSettings);

    // Static-Shadow
    FWeaponPhysicalSettings StaticShadowSettings = CreatePhysicalSettings(
        FName("Weapon-Static"),
        false, // Simulate Physics
        true,  // Cast Shadow
        true,  // Visible
        false, // Hidden In Game
        true,  // Receives Decals
        false  // Render Custom Depth
    );
    GWeaponPhysicalSettingsMap.Add(EWeaponPhysicalState::Static_Shadow, StaticShadowSettings);
}

FWeaponPhysicalSettings UWeaponPhysicalSettingsLibrary::GetPhysicalSettingsByName(EWeaponPhysicalState PhysicalState)
{
    InitWeaponPhysicalSettingsMap();
    if (GWeaponPhysicalSettingsMap.Contains(PhysicalState))
    {
        return GWeaponPhysicalSettingsMap[PhysicalState];
    }
    return FWeaponPhysicalSettings(); // Return default settings if not found
}
