#include "WeaponSkinBPLibrary.h"

#include "FlashlightSettingsBPLibrary.h"
#include "LasersightSettingsBPLibrary.h"
#include "Engine/Engine.h"
#include "Rush/Weapon/Struct/FWeaponSkinEntry.h"

static TMap<EWeaponSkinName, FWeaponSkinEntry> GWeaponSkinMap;

static void InitWeaponSkinMap()
{
    if (GWeaponSkinMap.Num() > 0) return;

    // Default Assault Rifle 01
    FWeaponSkinEntry DefaultAR01;
    DefaultAR01.Name = EWeaponSkinName::DefaultAssaultRifle01;
    
    // Material Map Body
    DefaultAR01.MaterialMapBody.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_001.MI_WEP_Camo_001")));
    DefaultAR01.MaterialMapBody.Add("Grip", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_001.MI_WEP_CarbonFibre_001")));
    DefaultAR01.MaterialMapBody.Add("Grip Front", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_001.MI_WEP_CarbonFibre_001")));
    DefaultAR01.MaterialMapBody.Add("Details", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_039.MI_WEP_Basic_039")));
    DefaultAR01.MaterialMapBody.Add("Bolt", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_001.MI_WEP_CarbonFibre_001")));
    DefaultAR01.MaterialMapBody.Add("Stock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_001.MI_WEP_Camo_001")));
    DefaultAR01.MaterialMapBody.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    DefaultAR01.MaterialMapBody.Add("Forestock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_001.MI_WEP_CarbonFibre_001")));
    DefaultAR01.MaterialMapBody.Add("Barrel", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_039.MI_WEP_Basic_039")));
    DefaultAR01.MaterialMapBody.Add("Slide", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_001.MI_WEP_CarbonFibre_001")));
    DefaultAR01.MaterialMapBody.Add("Hammer", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_001.MI_WEP_CarbonFibre_001")));
    DefaultAR01.MaterialMapBody.Add("Handle", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_001.MI_WEP_Camo_001")));
    DefaultAR01.MaterialMapBody.Add("Handle Base", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_001.MI_WEP_Camo_001")));
    DefaultAR01.MaterialMapBody.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));
    DefaultAR01.MaterialMapBody.Add("Rails", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_001.MI_WEP_Camo_001")));

    // Material Map Ironsights
    DefaultAR01.MaterialMapIronsights.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_001.MI_WEP_Camo_001")));

    // Material Map Magazine
    DefaultAR01.MaterialMapMagazine.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_001.MI_WEP_CarbonFibre_001")));
    DefaultAR01.MaterialMapMagazine.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    DefaultAR01.MaterialMapMagazine.Add("Body Rocket", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_061.MI_WEP_Basic_061")));
    DefaultAR01.MaterialMapMagazine.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));

    // Material Map Muzzle
    DefaultAR01.MaterialMapMuzzle.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_039.MI_WEP_Basic_039")));

    // Material Map Scope
    DefaultAR01.MaterialMapScope.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_001.MI_WEP_Camo_001")));
    DefaultAR01.MaterialMapScope.Add("Sight", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Dot_Blue.MI_ATT_Sight_Dot_Blue")));
    DefaultAR01.MaterialMapScope.Add("Sight Zoomed", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Crosshair_001.MI_ATT_Sight_Crosshair_001")));
    DefaultAR01.MaterialMapScope.Add("Fade Round", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round.MI_ATT_Scope_Fade_Round")));
    DefaultAR01.MaterialMapScope.Add("Invisible", nullptr);
    DefaultAR01.MaterialMapScope.Add("Unlit", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Unlit.MI_ATT_Scope_Unlit")));
    DefaultAR01.MaterialMapScope.Add("Fade Square 02", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_02_EdgeFade.MI_ATT_Scope_02_EdgeFade")));
    DefaultAR01.MaterialMapScope.Add("Fade Round 03", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_03_EdgeFade.MI_ATT_Scope_03_EdgeFade")));
    DefaultAR01.MaterialMapScope.Add("Fade Square 04", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_04_EdgeFade.MI_ATT_Scope_04_EdgeFade")));
    DefaultAR01.MaterialMapScope.Add("Fade Round 01", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_01.MI_ATT_Scope_Fade_Round_01")));
    DefaultAR01.MaterialMapScope.Add("Fade Round 08", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_08.MI_ATT_Scope_Fade_Round_08")));

    // Material Map Laser
    DefaultAR01.MaterialMapLaser.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_001.MI_WEP_Camo_001")));

    // Material Map Grip
    DefaultAR01.MaterialMapGrip.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_001.MI_WEP_Camo_001")));

	// get Flastlightsetting bp library
	DefaultAR01.RowHandleFlashlightSetting = UFlashlightSettingsBPLibrary::GetFlashlightSettingsByName(EFlashlightSettingsName::Flashlight_Normal);
    DefaultAR01.RowHandleLaserSightSetting = ULasersightSettingsBPLibrary::GetLasersightSettingsByName(ELasersightSettingsName::Laser_Normal);

    GWeaponSkinMap.Add(EWeaponSkinName::DefaultAssaultRifle01, DefaultAR01);

    /// ---------------------------------------------------------------------------------------------------- ////

    // Default Assault Rifle 02
    FWeaponSkinEntry DefaultAR02;
    DefaultAR02.Name = EWeaponSkinName::DefaultAssaultRifle02;
    
    // Material Map Body
    DefaultAR02.MaterialMapBody.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_008.MI_WEP_Camo_008")));
    DefaultAR02.MaterialMapBody.Add("Grip", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_001.MI_WEP_CarbonFibre_001")));
    DefaultAR02.MaterialMapBody.Add("Grip Front", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_008.MI_WEP_Camo_008")));
    DefaultAR02.MaterialMapBody.Add("Details", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_003.MI_WEP_Basic_003")));
    DefaultAR02.MaterialMapBody.Add("Bolt", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_001.MI_WEP_CarbonFibre_001")));
    DefaultAR02.MaterialMapBody.Add("Stock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_008.MI_WEP_Camo_008")));
    DefaultAR02.MaterialMapBody.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    DefaultAR02.MaterialMapBody.Add("Forestock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_001.MI_WEP_CarbonFibre_001")));
    DefaultAR02.MaterialMapBody.Add("Barrel", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_008.MI_WEP_Camo_008")));
    DefaultAR02.MaterialMapBody.Add("Slide", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_001.MI_WEP_CarbonFibre_001")));
    DefaultAR02.MaterialMapBody.Add("Hammer", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_001.MI_WEP_CarbonFibre_001")));
    DefaultAR02.MaterialMapBody.Add("Handle", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_008.MI_WEP_Camo_008")));
    DefaultAR02.MaterialMapBody.Add("Handle Base", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_008.MI_WEP_Camo_008")));
    DefaultAR02.MaterialMapBody.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));
    DefaultAR02.MaterialMapBody.Add("Rails", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_008.MI_WEP_Camo_008")));

    // Material Map Ironsights
    DefaultAR02.MaterialMapIronsights.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_008.MI_WEP_Camo_008")));

    // Material Map Magazine
    DefaultAR02.MaterialMapMagazine.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_008.MI_WEP_Camo_008")));
    DefaultAR02.MaterialMapMagazine.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    DefaultAR02.MaterialMapMagazine.Add("Body Rocket", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_061.MI_WEP_Basic_061")));
    DefaultAR02.MaterialMapMagazine.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));

    // Material Map Muzzle
    DefaultAR02.MaterialMapMuzzle.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_008.MI_WEP_Camo_008")));

    // Material Map Scope
    DefaultAR02.MaterialMapScope.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_008.MI_WEP_Camo_008")));
    DefaultAR02.MaterialMapScope.Add("Sight", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Dot_Blue_01.MI_ATT_Sight_Dot_Blue_01")));
    DefaultAR02.MaterialMapScope.Add("Sight Zoomed", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Crosshair_002.MI_ATT_Sight_Crosshair_002")));
    DefaultAR02.MaterialMapScope.Add("Fade Round", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round.MI_ATT_Scope_Fade_Round")));
    DefaultAR02.MaterialMapScope.Add("Invisible", nullptr);
    DefaultAR02.MaterialMapScope.Add("Unlit", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Unlit.MI_ATT_Scope_Unlit")));
    DefaultAR02.MaterialMapScope.Add("Fade Square 02", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_02_EdgeFade.MI_ATT_Scope_02_EdgeFade")));
    DefaultAR02.MaterialMapScope.Add("Fade Round 03", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_03_EdgeFade.MI_ATT_Scope_03_EdgeFade")));
    DefaultAR02.MaterialMapScope.Add("Fade Square 04", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_04_EdgeFade.MI_ATT_Scope_04_EdgeFade")));
    DefaultAR02.MaterialMapScope.Add("Fade Round 01", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_01.MI_ATT_Scope_Fade_Round_01")));
    DefaultAR02.MaterialMapScope.Add("Fade Round 08", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_08.MI_ATT_Scope_Fade_Round_08")));

    // Material Map Laser
    DefaultAR02.MaterialMapLaser.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_008.MI_WEP_Camo_008")));

    // Material Map Grip
    DefaultAR02.MaterialMapGrip.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_008.MI_WEP_Camo_008")));

    DefaultAR02.RowHandleFlashlightSetting = UFlashlightSettingsBPLibrary::GetFlashlightSettingsByName(EFlashlightSettingsName::Flashlight_Normal);
    DefaultAR02.RowHandleLaserSightSetting = ULasersightSettingsBPLibrary::GetLasersightSettingsByName(ELasersightSettingsName::Laser_Normal);

    GWeaponSkinMap.Add(EWeaponSkinName::DefaultAssaultRifle02, DefaultAR02);

    /// ---------------------------------------------------------------------------------------------------- ////

    // Default Assault Rifle 03
    FWeaponSkinEntry DefaultAR03;
    DefaultAR03.Name = EWeaponSkinName::DefaultAssaultRifle03;
    
    // Material Map Body
    DefaultAR03.MaterialMapBody.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_027.MI_WEP_Camo_027")));
    DefaultAR03.MaterialMapBody.Add("Grip", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_001.MI_WEP_CarbonFibre_001")));
    DefaultAR03.MaterialMapBody.Add("Grip Front", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_056.MI_WEP_Basic_056")));
    DefaultAR03.MaterialMapBody.Add("Details", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_050.MI_WEP_Basic_050")));
    DefaultAR03.MaterialMapBody.Add("Bolt", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_001.MI_WEP_CarbonFibre_001")));
    DefaultAR03.MaterialMapBody.Add("Stock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_027.MI_WEP_Camo_027")));
    DefaultAR03.MaterialMapBody.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    DefaultAR03.MaterialMapBody.Add("Forestock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_001.MI_WEP_CarbonFibre_001")));
    DefaultAR03.MaterialMapBody.Add("Barrel", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_050.MI_WEP_Basic_050")));
    DefaultAR03.MaterialMapBody.Add("Slide", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_001.MI_WEP_CarbonFibre_001")));
    DefaultAR03.MaterialMapBody.Add("Hammer", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_061.MI_WEP_Basic_061")));
    DefaultAR03.MaterialMapBody.Add("Handle", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_027.MI_WEP_Camo_027")));
    DefaultAR03.MaterialMapBody.Add("Handle Base", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_027.MI_WEP_Camo_027")));
    DefaultAR03.MaterialMapBody.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));
    DefaultAR03.MaterialMapBody.Add("Rails", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_027.MI_WEP_Camo_027")));

    // Material Map Ironsights
    DefaultAR03.MaterialMapIronsights.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_027.MI_WEP_Camo_027")));

    // Material Map Magazine
    DefaultAR03.MaterialMapMagazine.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_027.MI_WEP_Camo_027")));
    DefaultAR03.MaterialMapMagazine.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    DefaultAR03.MaterialMapMagazine.Add("Body Rocket", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_061.MI_WEP_Basic_061")));
    DefaultAR03.MaterialMapMagazine.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));

    // Material Map Muzzle
    DefaultAR03.MaterialMapMuzzle.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_027.MI_WEP_Camo_027")));

    // Material Map Scope
    DefaultAR03.MaterialMapScope.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_027.MI_WEP_Camo_027")));
    DefaultAR03.MaterialMapScope.Add("Sight", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Dot_Red_01.MI_ATT_Sight_Dot_Red_01")));
    DefaultAR03.MaterialMapScope.Add("Sight Zoomed", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Crosshair_003.MI_ATT_Sight_Crosshair_003")));
    DefaultAR03.MaterialMapScope.Add("Fade Round", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round.MI_ATT_Scope_Fade_Round")));
    DefaultAR03.MaterialMapScope.Add("Invisible", nullptr);
    DefaultAR03.MaterialMapScope.Add("Unlit", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Unlit.MI_ATT_Scope_Unlit")));
    DefaultAR03.MaterialMapScope.Add("Fade Square 02", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_02_EdgeFade.MI_ATT_Scope_02_EdgeFade")));
    DefaultAR03.MaterialMapScope.Add("Fade Round 03", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_03_EdgeFade.MI_ATT_Scope_03_EdgeFade")));
    DefaultAR03.MaterialMapScope.Add("Fade Square 04", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_04_EdgeFade.MI_ATT_Scope_04_EdgeFade")));
    DefaultAR03.MaterialMapScope.Add("Fade Round 01", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_01.MI_ATT_Scope_Fade_Round_01")));
    DefaultAR03.MaterialMapScope.Add("Fade Round 08", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_08.MI_ATT_Scope_Fade_Round_08")));

    // Material Map Laser
    DefaultAR03.MaterialMapLaser.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_027.MI_WEP_Camo_027")));

    // Material Map Grip
    DefaultAR03.MaterialMapGrip.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_027.MI_WEP_Camo_027")));

    DefaultAR03.RowHandleFlashlightSetting = UFlashlightSettingsBPLibrary::GetFlashlightSettingsByName(EFlashlightSettingsName::Flashlight_Normal);
    DefaultAR03.RowHandleLaserSightSetting = ULasersightSettingsBPLibrary::GetLasersightSettingsByName(ELasersightSettingsName::Laser_Normal);

    GWeaponSkinMap.Add(EWeaponSkinName::DefaultAssaultRifle03, DefaultAR03);

    /// ---------------------------------------------------------------------------------------------------- ////

    // Default Handgun 01
    FWeaponSkinEntry DefaultHandgun01;
    DefaultHandgun01.Name = EWeaponSkinName::DefaultHandgun01;
    
    // Material Map Body
    DefaultHandgun01.MaterialMapBody.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Gradient/MI_WEP_Gradient_009.MI_WEP_Gradient_009")));
    DefaultHandgun01.MaterialMapBody.Add("Grip", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_001.MI_WEP_CarbonFibre_001")));
    DefaultHandgun01.MaterialMapBody.Add("Grip Front", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_056.MI_WEP_Basic_056")));
    DefaultHandgun01.MaterialMapBody.Add("Details", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_030.MI_WEP_Basic_030")));
    DefaultHandgun01.MaterialMapBody.Add("Bolt", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Swirly/MI_WEP_Swirly_005.MI_WEP_Swirly_005")));
    DefaultHandgun01.MaterialMapBody.Add("Stock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Gradient/MI_WEP_Gradient_009.MI_WEP_Gradient_009")));
    DefaultHandgun01.MaterialMapBody.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    DefaultHandgun01.MaterialMapBody.Add("Forestock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_001.MI_WEP_CarbonFibre_001")));
    DefaultHandgun01.MaterialMapBody.Add("Barrel", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Gradient/MI_WEP_Gradient_009.MI_WEP_Gradient_009")));
    DefaultHandgun01.MaterialMapBody.Add("Slide", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Swirly/MI_WEP_Swirly_005.MI_WEP_Swirly_005")));
    DefaultHandgun01.MaterialMapBody.Add("Hammer", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_030.MI_WEP_Basic_030")));
    DefaultHandgun01.MaterialMapBody.Add("Handle", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Gradient/MI_WEP_Gradient_009.MI_WEP_Gradient_009")));
    DefaultHandgun01.MaterialMapBody.Add("Handle Base", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Gradient/MI_WEP_Gradient_009.MI_WEP_Gradient_009")));
    DefaultHandgun01.MaterialMapBody.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));
    DefaultHandgun01.MaterialMapBody.Add("Rails", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Gradient/MI_WEP_Gradient_009.MI_WEP_Gradient_009")));

    // Material Map Ironsights
    DefaultHandgun01.MaterialMapIronsights.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));

    // Material Map Magazine
    DefaultHandgun01.MaterialMapMagazine.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Swirly/MI_WEP_Swirly_003.MI_WEP_Swirly_003")));
    DefaultHandgun01.MaterialMapMagazine.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    DefaultHandgun01.MaterialMapMagazine.Add("Body Rocket", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_061.MI_WEP_Basic_061")));
    DefaultHandgun01.MaterialMapMagazine.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));

    // Material Map Muzzle
    DefaultHandgun01.MaterialMapMuzzle.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Gradient/MI_WEP_Gradient_009.MI_WEP_Gradient_009")));

    // Material Map Scope
    DefaultHandgun01.MaterialMapScope.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Gradient/MI_WEP_Gradient_009.MI_WEP_Gradient_009")));
    DefaultHandgun01.MaterialMapScope.Add("Sight", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Dot_Red_02.MI_ATT_Sight_Dot_Red_02")));
    DefaultHandgun01.MaterialMapScope.Add("Sight Zoomed", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Crosshair_004.MI_ATT_Sight_Crosshair_004")));
    DefaultHandgun01.MaterialMapScope.Add("Fade Round", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round.MI_ATT_Scope_Fade_Round")));
    DefaultHandgun01.MaterialMapScope.Add("Invisible", nullptr);
    DefaultHandgun01.MaterialMapScope.Add("Unlit", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Unlit.MI_ATT_Scope_Unlit")));
    DefaultHandgun01.MaterialMapScope.Add("Fade Square 02", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_02_EdgeFade.MI_ATT_Scope_02_EdgeFade")));
    DefaultHandgun01.MaterialMapScope.Add("Fade Round 03", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_03_EdgeFade.MI_ATT_Scope_03_EdgeFade")));
    DefaultHandgun01.MaterialMapScope.Add("Fade Square 04", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_04_EdgeFade.MI_ATT_Scope_04_EdgeFade")));
    DefaultHandgun01.MaterialMapScope.Add("Fade Round 01", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_01.MI_ATT_Scope_Fade_Round_01")));
    DefaultHandgun01.MaterialMapScope.Add("Fade Round 08", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_08.MI_ATT_Scope_Fade_Round_08")));

    // Material Map Laser
    DefaultHandgun01.MaterialMapLaser.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Gradient/MI_WEP_Gradient_009.MI_WEP_Gradient_009")));

    // Material Map Grip
    DefaultHandgun01.MaterialMapGrip.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Gradient/MI_WEP_Gradient_009.MI_WEP_Gradient_009")));

    DefaultHandgun01.RowHandleFlashlightSetting = UFlashlightSettingsBPLibrary::GetFlashlightSettingsByName(EFlashlightSettingsName::Flashlight_Normal);
    DefaultHandgun01.RowHandleLaserSightSetting = ULasersightSettingsBPLibrary::GetLasersightSettingsByName(ELasersightSettingsName::Laser_Normal);

    GWeaponSkinMap.Add(EWeaponSkinName::DefaultHandgun01, DefaultHandgun01);

    /// ---------------------------------------------------------------------------------------------------- ////

    // Default Handgun 02
    FWeaponSkinEntry DefaultHandgun02;
    DefaultHandgun02.Name = EWeaponSkinName::DefaultHandgun02;
    
    // Material Map Body
    DefaultHandgun02.MaterialMapBody.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_007.MI_WEP_CarbonFibre_007")));
    DefaultHandgun02.MaterialMapBody.Add("Grip", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Skulls/MI_WEP_Skulls_013.MI_WEP_Skulls_013")));
    DefaultHandgun02.MaterialMapBody.Add("Grip Front", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_056.MI_WEP_Basic_056")));
    DefaultHandgun02.MaterialMapBody.Add("Details", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_006.MI_WEP_Basic_006")));
    DefaultHandgun02.MaterialMapBody.Add("Bolt", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Skulls/MI_WEP_Skulls_013.MI_WEP_Skulls_013")));
    DefaultHandgun02.MaterialMapBody.Add("Stock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_007.MI_WEP_CarbonFibre_007")));
    DefaultHandgun02.MaterialMapBody.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    DefaultHandgun02.MaterialMapBody.Add("Forestock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Skulls/MI_WEP_Skulls_013.MI_WEP_Skulls_013")));
    DefaultHandgun02.MaterialMapBody.Add("Barrel", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_007.MI_WEP_CarbonFibre_007")));
    DefaultHandgun02.MaterialMapBody.Add("Slide", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Skulls/MI_WEP_Skulls_013.MI_WEP_Skulls_013")));
    DefaultHandgun02.MaterialMapBody.Add("Hammer", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_006.MI_WEP_Basic_006")));
    DefaultHandgun02.MaterialMapBody.Add("Handle", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Skulls/MI_WEP_Skulls_013.MI_WEP_Skulls_013")));
    DefaultHandgun02.MaterialMapBody.Add("Handle Base", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Skulls/MI_WEP_Skulls_013.MI_WEP_Skulls_013")));
    DefaultHandgun02.MaterialMapBody.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));
    DefaultHandgun02.MaterialMapBody.Add("Rails", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_007.MI_WEP_CarbonFibre_007")));

    // Material Map Ironsights
    DefaultHandgun02.MaterialMapIronsights.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_004.MI_WEP_Basic_004")));

    // Material Map Magazine
    DefaultHandgun02.MaterialMapMagazine.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/BrushedSteel/MI_WEP_Steel_Brushed_014.MI_WEP_Steel_Brushed_014")));
    DefaultHandgun02.MaterialMapMagazine.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    DefaultHandgun02.MaterialMapMagazine.Add("Body Rocket", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_061.MI_WEP_Basic_061")));
    DefaultHandgun02.MaterialMapMagazine.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));

    // Material Map Muzzle
    DefaultHandgun02.MaterialMapMuzzle.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_007.MI_WEP_CarbonFibre_007")));

    // Material Map Scope
    DefaultHandgun02.MaterialMapScope.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_007.MI_WEP_CarbonFibre_007")));
    DefaultHandgun02.MaterialMapScope.Add("Sight", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Dot_Yellow_01.MI_ATT_Sight_Dot_Yellow_01")));
    DefaultHandgun02.MaterialMapScope.Add("Sight Zoomed", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Crosshair_005.MI_ATT_Sight_Crosshair_005")));
    DefaultHandgun02.MaterialMapScope.Add("Fade Round", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round.MI_ATT_Scope_Fade_Round")));
    DefaultHandgun02.MaterialMapScope.Add("Invisible", nullptr);
    DefaultHandgun02.MaterialMapScope.Add("Unlit", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Unlit.MI_ATT_Scope_Unlit")));
    DefaultHandgun02.MaterialMapScope.Add("Fade Square 02", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_02_EdgeFade.MI_ATT_Scope_02_EdgeFade")));
    DefaultHandgun02.MaterialMapScope.Add("Fade Round 03", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_03_EdgeFade.MI_ATT_Scope_03_EdgeFade")));
    DefaultHandgun02.MaterialMapScope.Add("Fade Square 04", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_04_EdgeFade.MI_ATT_Scope_04_EdgeFade")));
    DefaultHandgun02.MaterialMapScope.Add("Fade Round 01", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_01.MI_ATT_Scope_Fade_Round_01")));
    DefaultHandgun02.MaterialMapScope.Add("Fade Round 08", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_08.MI_ATT_Scope_Fade_Round_08")));

    // Material Map Laser
    DefaultHandgun02.MaterialMapLaser.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_007.MI_WEP_CarbonFibre_007")));

    // Material Map Grip
    DefaultHandgun02.MaterialMapGrip.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_007.MI_WEP_CarbonFibre_007")));

    DefaultHandgun02.RowHandleFlashlightSetting = UFlashlightSettingsBPLibrary::GetFlashlightSettingsByName(EFlashlightSettingsName::Flashlight_Normal);
    DefaultHandgun02.RowHandleLaserSightSetting = ULasersightSettingsBPLibrary::GetLasersightSettingsByName(ELasersightSettingsName::Laser_Normal);

    GWeaponSkinMap.Add(EWeaponSkinName::DefaultHandgun02, DefaultHandgun02);

    /// ---------------------------------------------------------------------------------------------------- ////

    // Default Handgun 03
    FWeaponSkinEntry DefaultHandgun03;
    DefaultHandgun03.Name = EWeaponSkinName::DefaultHandgun03;
    
    // Material Map Body
    DefaultHandgun03.MaterialMapBody.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/BrushedSteel/MI_WEP_Steel_Brushed_013.MI_WEP_Steel_Brushed_013")));
    DefaultHandgun03.MaterialMapBody.Add("Grip", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_043.MI_WEP_Basic_043")));
    DefaultHandgun03.MaterialMapBody.Add("Grip Front", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_056.MI_WEP_Basic_056")));
    DefaultHandgun03.MaterialMapBody.Add("Details", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_006.MI_WEP_Basic_006")));
    DefaultHandgun03.MaterialMapBody.Add("Bolt", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_043.MI_WEP_Basic_043")));
    DefaultHandgun03.MaterialMapBody.Add("Stock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/BrushedSteel/MI_WEP_Steel_Brushed_013.MI_WEP_Steel_Brushed_013")));
    DefaultHandgun03.MaterialMapBody.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    DefaultHandgun03.MaterialMapBody.Add("Forestock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_043.MI_WEP_Basic_043")));
    DefaultHandgun03.MaterialMapBody.Add("Barrel", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/BrushedSteel/MI_WEP_Steel_Brushed_013.MI_WEP_Steel_Brushed_013")));
    DefaultHandgun03.MaterialMapBody.Add("Slide", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/BrushedSteel/MI_WEP_Steel_Brushed_001.MI_WEP_Steel_Brushed_001")));
    DefaultHandgun03.MaterialMapBody.Add("Hammer", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_005.MI_WEP_Basic_005")));
    DefaultHandgun03.MaterialMapBody.Add("Handle", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/BrushedSteel/MI_WEP_Steel_Brushed_013.MI_WEP_Steel_Brushed_013")));
    DefaultHandgun03.MaterialMapBody.Add("Handle Base", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/BrushedSteel/MI_WEP_Steel_Brushed_013.MI_WEP_Steel_Brushed_013")));
    DefaultHandgun03.MaterialMapBody.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));
    DefaultHandgun03.MaterialMapBody.Add("Rails", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/BrushedSteel/MI_WEP_Steel_Brushed_013.MI_WEP_Steel_Brushed_013")));

    // Material Map Ironsights
    DefaultHandgun03.MaterialMapIronsights.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_004.MI_WEP_Basic_004")));

    // Material Map Magazine
    DefaultHandgun03.MaterialMapMagazine.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/BrushedSteel/MI_WEP_Steel_Brushed_013.MI_WEP_Steel_Brushed_013")));
    DefaultHandgun03.MaterialMapMagazine.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    DefaultHandgun03.MaterialMapMagazine.Add("Body Rocket", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_061.MI_WEP_Basic_061")));
    DefaultHandgun03.MaterialMapMagazine.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));

    // Material Map Muzzle
    DefaultHandgun03.MaterialMapMuzzle.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/BrushedSteel/MI_WEP_Steel_Brushed_013.MI_WEP_Steel_Brushed_013")));

    // Material Map Scope
    DefaultHandgun03.MaterialMapScope.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/BrushedSteel/MI_WEP_Steel_Brushed_013.MI_WEP_Steel_Brushed_013")));
    DefaultHandgun03.MaterialMapScope.Add("Sight", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Neon.MI_ATT_Sight_Neon")));
    DefaultHandgun03.MaterialMapScope.Add("Sight Zoomed", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Crosshair_006.MI_ATT_Sight_Crosshair_006")));
    DefaultHandgun03.MaterialMapScope.Add("Fade Round", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round.MI_ATT_Scope_Fade_Round")));
    DefaultHandgun03.MaterialMapScope.Add("Invisible", nullptr);
    DefaultHandgun03.MaterialMapScope.Add("Unlit", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Unlit.MI_ATT_Scope_Unlit")));
    DefaultHandgun03.MaterialMapScope.Add("Fade Square 02", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_02_EdgeFade.MI_ATT_Scope_02_EdgeFade")));
    DefaultHandgun03.MaterialMapScope.Add("Fade Round 03", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_03_EdgeFade.MI_ATT_Scope_03_EdgeFade")));
    DefaultHandgun03.MaterialMapScope.Add("Fade Square 04", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_04_EdgeFade.MI_ATT_Scope_04_EdgeFade")));
    DefaultHandgun03.MaterialMapScope.Add("Fade Round 01", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_01.MI_ATT_Scope_Fade_Round_01")));
    DefaultHandgun03.MaterialMapScope.Add("Fade Round 08", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_08.MI_ATT_Scope_Fade_Round_08")));

    // Material Map Laser
    DefaultHandgun03.MaterialMapLaser.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/BrushedSteel/MI_WEP_Steel_Brushed_013.MI_WEP_Steel_Brushed_013")));

    // Material Map Grip
    DefaultHandgun03.MaterialMapGrip.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/BrushedSteel/MI_WEP_Steel_Brushed_013.MI_WEP_Steel_Brushed_013")));

    DefaultHandgun03.RowHandleFlashlightSetting = UFlashlightSettingsBPLibrary::GetFlashlightSettingsByName(EFlashlightSettingsName::Flashlight_Normal);
    DefaultHandgun03.RowHandleLaserSightSetting = ULasersightSettingsBPLibrary::GetLasersightSettingsByName(ELasersightSettingsName::Laser_Normal);

    GWeaponSkinMap.Add(EWeaponSkinName::DefaultHandgun03, DefaultHandgun03);

    /// ---------------------------------------------------------------------------------------------------- ////

    // Default Handgun 04
    FWeaponSkinEntry DefaultHandgun04;
    DefaultHandgun04.Name = EWeaponSkinName::DefaultHandgun04;
    
    // Material Map Body
    DefaultHandgun04.MaterialMapBody.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_006.MI_WEP_Camo_006")));
    DefaultHandgun04.MaterialMapBody.Add("Grip", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_001.MI_WEP_CarbonFibre_001")));
    DefaultHandgun04.MaterialMapBody.Add("Grip Front", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_003.MI_WEP_Basic_003")));
    DefaultHandgun04.MaterialMapBody.Add("Details", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_003.MI_WEP_Basic_003")));
    DefaultHandgun04.MaterialMapBody.Add("Bolt", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_003.MI_WEP_Basic_003")));
    DefaultHandgun04.MaterialMapBody.Add("Stock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_006.MI_WEP_Camo_006")));
    DefaultHandgun04.MaterialMapBody.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    DefaultHandgun04.MaterialMapBody.Add("Forestock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_001.MI_WEP_CarbonFibre_001")));
    DefaultHandgun04.MaterialMapBody.Add("Barrel", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_006.MI_WEP_Camo_006")));
    DefaultHandgun04.MaterialMapBody.Add("Slide", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/BrushedSteel/MI_WEP_Steel_Brushed_001.MI_WEP_Steel_Brushed_001")));
    DefaultHandgun04.MaterialMapBody.Add("Hammer", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_003.MI_WEP_Basic_003")));
    DefaultHandgun04.MaterialMapBody.Add("Handle", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_006.MI_WEP_Camo_006")));
    DefaultHandgun04.MaterialMapBody.Add("Handle Base", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_006.MI_WEP_Camo_006")));
    DefaultHandgun04.MaterialMapBody.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));
    DefaultHandgun04.MaterialMapBody.Add("Rails", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_006.MI_WEP_Camo_006")));

    // Material Map Ironsights
    DefaultHandgun04.MaterialMapIronsights.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_004.MI_WEP_Basic_004")));

    // Material Map Magazine
    DefaultHandgun04.MaterialMapMagazine.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_003.MI_WEP_Basic_003")));
    DefaultHandgun04.MaterialMapMagazine.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    DefaultHandgun04.MaterialMapMagazine.Add("Body Rocket", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_061.MI_WEP_Basic_061")));
    DefaultHandgun04.MaterialMapMagazine.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));

    // Material Map Muzzle
    DefaultHandgun04.MaterialMapMuzzle.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_006.MI_WEP_Camo_006")));

    // Material Map Scope
    DefaultHandgun04.MaterialMapScope.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_006.MI_WEP_Camo_006")));
    DefaultHandgun04.MaterialMapScope.Add("Sight", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Square_Blue.MI_ATT_Sight_Square_Blue")));
    DefaultHandgun04.MaterialMapScope.Add("Sight Zoomed", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Crosshair_007.MI_ATT_Sight_Crosshair_007")));
    DefaultHandgun04.MaterialMapScope.Add("Fade Round", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round.MI_ATT_Scope_Fade_Round")));
    DefaultHandgun04.MaterialMapScope.Add("Invisible", nullptr);
    DefaultHandgun04.MaterialMapScope.Add("Unlit", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Unlit.MI_ATT_Scope_Unlit")));
    DefaultHandgun04.MaterialMapScope.Add("Fade Square 02", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_02_EdgeFade.MI_ATT_Scope_02_EdgeFade")));
    DefaultHandgun04.MaterialMapScope.Add("Fade Round 03", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_03_EdgeFade.MI_ATT_Scope_03_EdgeFade")));
    DefaultHandgun04.MaterialMapScope.Add("Fade Square 04", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_04_EdgeFade.MI_ATT_Scope_04_EdgeFade")));
    DefaultHandgun04.MaterialMapScope.Add("Fade Round 01", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_01.MI_ATT_Scope_Fade_Round_01")));
    DefaultHandgun04.MaterialMapScope.Add("Fade Round 08", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_08.MI_ATT_Scope_Fade_Round_08")));

    // Material Map Laser
    DefaultHandgun04.MaterialMapLaser.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_006.MI_WEP_Camo_006")));

    // Material Map Grip
    DefaultHandgun04.MaterialMapGrip.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_006.MI_WEP_Camo_006")));

    DefaultHandgun04.RowHandleFlashlightSetting = UFlashlightSettingsBPLibrary::GetFlashlightSettingsByName(EFlashlightSettingsName::Flashlight_Normal);
    DefaultHandgun04.RowHandleLaserSightSetting = ULasersightSettingsBPLibrary::GetLasersightSettingsByName(ELasersightSettingsName::Laser_Normal);

    GWeaponSkinMap.Add(EWeaponSkinName::DefaultHandgun04, DefaultHandgun04);

    /// ---------------------------------------------------------------------------------------------------- ////

    // Default Launcher Grenade 01
    FWeaponSkinEntry DefaultLauncherGrenade01;
    DefaultLauncherGrenade01.Name = EWeaponSkinName::DefaultLauncherGrenade01;
    
    // Material Map Body
    DefaultLauncherGrenade01.MaterialMapBody.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Skulls/MI_WEP_Skulls_010.MI_WEP_Skulls_010")));
    DefaultLauncherGrenade01.MaterialMapBody.Add("Grip", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Skulls/MI_WEP_Skulls_010.MI_WEP_Skulls_010")));
    DefaultLauncherGrenade01.MaterialMapBody.Add("Grip Front", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_017.MI_WEP_Basic_017")));
    DefaultLauncherGrenade01.MaterialMapBody.Add("Details", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_017.MI_WEP_Basic_017")));
    DefaultLauncherGrenade01.MaterialMapBody.Add("Bolt", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_017.MI_WEP_Basic_017")));
    DefaultLauncherGrenade01.MaterialMapBody.Add("Stock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_009.MI_WEP_CarbonFibre_009")));
    DefaultLauncherGrenade01.MaterialMapBody.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    DefaultLauncherGrenade01.MaterialMapBody.Add("Forestock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Skulls/MI_WEP_Skulls_010.MI_WEP_Skulls_010")));
    DefaultLauncherGrenade01.MaterialMapBody.Add("Barrel", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_017.MI_WEP_Basic_017")));
    DefaultLauncherGrenade01.MaterialMapBody.Add("Slide", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/BrushedSteel/MI_WEP_Steel_Brushed_001.MI_WEP_Steel_Brushed_001")));
    DefaultLauncherGrenade01.MaterialMapBody.Add("Hammer", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_009.MI_WEP_CarbonFibre_009")));
    DefaultLauncherGrenade01.MaterialMapBody.Add("Handle", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Skulls/MI_WEP_Skulls_010.MI_WEP_Skulls_010")));
    DefaultLauncherGrenade01.MaterialMapBody.Add("Handle Base", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Skulls/MI_WEP_Skulls_010.MI_WEP_Skulls_010")));
    DefaultLauncherGrenade01.MaterialMapBody.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));
    DefaultLauncherGrenade01.MaterialMapBody.Add("Rails", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Skulls/MI_WEP_Skulls_010.MI_WEP_Skulls_010")));

    // Material Map Ironsights
    DefaultLauncherGrenade01.MaterialMapIronsights.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_005.MI_WEP_Basic_005")));

    // Material Map Magazine
    DefaultLauncherGrenade01.MaterialMapMagazine.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Skulls/MI_WEP_Skulls_010.MI_WEP_Skulls_010")));
    DefaultLauncherGrenade01.MaterialMapMagazine.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    DefaultLauncherGrenade01.MaterialMapMagazine.Add("Body Rocket", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_061.MI_WEP_Basic_061")));
    DefaultLauncherGrenade01.MaterialMapMagazine.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));

    // Material Map Muzzle
    DefaultLauncherGrenade01.MaterialMapMuzzle.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Skulls/MI_WEP_Skulls_010.MI_WEP_Skulls_010")));

    // Material Map Scope
    DefaultLauncherGrenade01.MaterialMapScope.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_005.MI_WEP_Basic_005")));
    DefaultLauncherGrenade01.MaterialMapScope.Add("Sight", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Square_Orange.MI_ATT_Sight_Square_Orange")));
    DefaultLauncherGrenade01.MaterialMapScope.Add("Sight Zoomed", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Crosshair_008.MI_ATT_Sight_Crosshair_008")));
    DefaultLauncherGrenade01.MaterialMapScope.Add("Fade Round", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round.MI_ATT_Scope_Fade_Round")));
    DefaultLauncherGrenade01.MaterialMapScope.Add("Invisible", nullptr);
    DefaultLauncherGrenade01.MaterialMapScope.Add("Unlit", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Unlit.MI_ATT_Scope_Unlit")));
    DefaultLauncherGrenade01.MaterialMapScope.Add("Fade Square 02", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_02_EdgeFade.MI_ATT_Scope_02_EdgeFade")));
    DefaultLauncherGrenade01.MaterialMapScope.Add("Fade Round 03", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_03_EdgeFade.MI_ATT_Scope_03_EdgeFade")));
    DefaultLauncherGrenade01.MaterialMapScope.Add("Fade Square 04", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_04_EdgeFade.MI_ATT_Scope_04_EdgeFade")));
    DefaultLauncherGrenade01.MaterialMapScope.Add("Fade Round 01", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_01.MI_ATT_Scope_Fade_Round_01")));
    DefaultLauncherGrenade01.MaterialMapScope.Add("Fade Round 08", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_08.MI_ATT_Scope_Fade_Round_08")));

    // Material Map Laser
    DefaultLauncherGrenade01.MaterialMapLaser.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Skulls/MI_WEP_Skulls_010.MI_WEP_Skulls_010")));

    // Material Map Grip
    DefaultLauncherGrenade01.MaterialMapGrip.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Skulls/MI_WEP_Skulls_010.MI_WEP_Skulls_010")));

    DefaultLauncherGrenade01.RowHandleFlashlightSetting = UFlashlightSettingsBPLibrary::GetFlashlightSettingsByName(EFlashlightSettingsName::Flashlight_Normal);
    DefaultLauncherGrenade01.RowHandleLaserSightSetting = ULasersightSettingsBPLibrary::GetLasersightSettingsByName(ELasersightSettingsName::Laser_Normal);

    GWeaponSkinMap.Add(EWeaponSkinName::DefaultLauncherGrenade01, DefaultLauncherGrenade01);

    /// ---------------------------------------------------------------------------------------------------- ////

    // Default Launcher Rocket 01
    FWeaponSkinEntry DefaultLauncherRocket01;
    DefaultLauncherRocket01.Name = EWeaponSkinName::DefaultLauncherRocket01;
    
    // Material Map Body
    DefaultLauncherRocket01.MaterialMapBody.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_010.MI_WEP_Camo_010")));
    DefaultLauncherRocket01.MaterialMapBody.Add("Grip", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_001.MI_WEP_CarbonFibre_001")));
    DefaultLauncherRocket01.MaterialMapBody.Add("Grip Front", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_056.MI_WEP_Basic_056")));
    DefaultLauncherRocket01.MaterialMapBody.Add("Details", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_064.MI_WEP_Basic_064")));
    DefaultLauncherRocket01.MaterialMapBody.Add("Bolt", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/BrushedSteel/MI_WEP_Steel_Brushed_001.MI_WEP_Steel_Brushed_001")));
    DefaultLauncherRocket01.MaterialMapBody.Add("Stock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_010.MI_WEP_Camo_010")));
    DefaultLauncherRocket01.MaterialMapBody.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    DefaultLauncherRocket01.MaterialMapBody.Add("Forestock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_001.MI_WEP_CarbonFibre_001")));
    DefaultLauncherRocket01.MaterialMapBody.Add("Barrel", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_003.MI_WEP_Basic_003")));
    DefaultLauncherRocket01.MaterialMapBody.Add("Slide", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/BrushedSteel/MI_WEP_Steel_Brushed_001.MI_WEP_Steel_Brushed_001")));
    DefaultLauncherRocket01.MaterialMapBody.Add("Hammer", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_003.MI_WEP_Basic_003")));
    DefaultLauncherRocket01.MaterialMapBody.Add("Handle", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_010.MI_WEP_Camo_010")));
    DefaultLauncherRocket01.MaterialMapBody.Add("Handle Base", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_010.MI_WEP_Camo_010")));
    DefaultLauncherRocket01.MaterialMapBody.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));
    DefaultLauncherRocket01.MaterialMapBody.Add("Rails", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_010.MI_WEP_Camo_010")));

    // Material Map Ironsights
    DefaultLauncherRocket01.MaterialMapIronsights.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_004.MI_WEP_Basic_004")));

    // Material Map Magazine
    DefaultLauncherRocket01.MaterialMapMagazine.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_010.MI_WEP_Camo_010")));
    DefaultLauncherRocket01.MaterialMapMagazine.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    DefaultLauncherRocket01.MaterialMapMagazine.Add("Body Rocket", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_061.MI_WEP_Basic_061")));
    DefaultLauncherRocket01.MaterialMapMagazine.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));

    // Material Map Muzzle
    DefaultLauncherRocket01.MaterialMapMuzzle.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_010.MI_WEP_Camo_010")));

    // Material Map Scope
    DefaultLauncherRocket01.MaterialMapScope.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_010.MI_WEP_Camo_010")));
    DefaultLauncherRocket01.MaterialMapScope.Add("Sight", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Square_Red.MI_ATT_Sight_Square_Red")));
    DefaultLauncherRocket01.MaterialMapScope.Add("Sight Zoomed", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Crosshair_009.MI_ATT_Sight_Crosshair_009")));
    DefaultLauncherRocket01.MaterialMapScope.Add("Fade Round", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round.MI_ATT_Scope_Fade_Round")));
    DefaultLauncherRocket01.MaterialMapScope.Add("Invisible", nullptr);
    DefaultLauncherRocket01.MaterialMapScope.Add("Unlit", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Unlit.MI_ATT_Scope_Unlit")));
    DefaultLauncherRocket01.MaterialMapScope.Add("Fade Square 02", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_02_EdgeFade.MI_ATT_Scope_02_EdgeFade")));
    DefaultLauncherRocket01.MaterialMapScope.Add("Fade Round 03", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_03_EdgeFade.MI_ATT_Scope_03_EdgeFade")));
    DefaultLauncherRocket01.MaterialMapScope.Add("Fade Square 04", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_04_EdgeFade.MI_ATT_Scope_04_EdgeFade")));
    DefaultLauncherRocket01.MaterialMapScope.Add("Fade Round 01", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_01.MI_ATT_Scope_Fade_Round_01")));
    DefaultLauncherRocket01.MaterialMapScope.Add("Fade Round 08", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_08.MI_ATT_Scope_Fade_Round_08")));

    // Material Map Laser
    DefaultLauncherRocket01.MaterialMapLaser.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_010.MI_WEP_Camo_010")));

    // Material Map Grip
    DefaultLauncherRocket01.MaterialMapGrip.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_010.MI_WEP_Camo_010")));

    DefaultLauncherRocket01.RowHandleFlashlightSetting = UFlashlightSettingsBPLibrary::GetFlashlightSettingsByName(EFlashlightSettingsName::Flashlight_Normal);
    DefaultLauncherRocket01.RowHandleLaserSightSetting = ULasersightSettingsBPLibrary::GetLasersightSettingsByName(ELasersightSettingsName::Laser_Normal);

    GWeaponSkinMap.Add(EWeaponSkinName::DefaultLauncherRocket01, DefaultLauncherRocket01);

    /// ---------------------------------------------------------------------------------------------------- ////

    // Default SMG 01
    FWeaponSkinEntry DefaultSMG01;
    DefaultSMG01.Name = EWeaponSkinName::DefaultSMG01;
    
    // Material Map Body
    DefaultSMG01.MaterialMapBody.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Swirly/MI_WEP_Swirly_002.MI_WEP_Swirly_002")));
    DefaultSMG01.MaterialMapBody.Add("Grip", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/BrushedSteel/MI_WEP_Steel_Brushed_009.MI_WEP_Steel_Brushed_009")));
    DefaultSMG01.MaterialMapBody.Add("Grip Front", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/BrushedSteel/MI_WEP_Steel_Brushed_009.MI_WEP_Steel_Brushed_009")));
    DefaultSMG01.MaterialMapBody.Add("Details", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));
    DefaultSMG01.MaterialMapBody.Add("Bolt", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));
    DefaultSMG01.MaterialMapBody.Add("Stock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Swirly/MI_WEP_Swirly_002.MI_WEP_Swirly_002")));
    DefaultSMG01.MaterialMapBody.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    DefaultSMG01.MaterialMapBody.Add("Forestock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_001.MI_WEP_CarbonFibre_001")));
    DefaultSMG01.MaterialMapBody.Add("Barrel", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/BrushedSteel/MI_WEP_Steel_Brushed_009.MI_WEP_Steel_Brushed_009")));
    DefaultSMG01.MaterialMapBody.Add("Slide", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/BrushedSteel/MI_WEP_Steel_Brushed_001.MI_WEP_Steel_Brushed_001")));
    DefaultSMG01.MaterialMapBody.Add("Hammer", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_003.MI_WEP_Basic_003")));
    DefaultSMG01.MaterialMapBody.Add("Handle", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Swirly/MI_WEP_Swirly_002.MI_WEP_Swirly_002")));
    DefaultSMG01.MaterialMapBody.Add("Handle Base", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Swirly/MI_WEP_Swirly_002.MI_WEP_Swirly_002")));
    DefaultSMG01.MaterialMapBody.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));
    DefaultSMG01.MaterialMapBody.Add("Rails", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Swirly/MI_WEP_Swirly_002.MI_WEP_Swirly_002")));

    // Material Map Ironsights
    DefaultSMG01.MaterialMapIronsights.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));

    // Material Map Magazine
    DefaultSMG01.MaterialMapMagazine.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/BrushedSteel/MI_WEP_Steel_Brushed_009.MI_WEP_Steel_Brushed_009")));
    DefaultSMG01.MaterialMapMagazine.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    DefaultSMG01.MaterialMapMagazine.Add("Body Rocket", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_061.MI_WEP_Basic_061")));
    DefaultSMG01.MaterialMapMagazine.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));

    // Material Map Muzzle
    DefaultSMG01.MaterialMapMuzzle.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Swirly/MI_WEP_Swirly_002.MI_WEP_Swirly_002")));

    // Material Map Scope
    DefaultSMG01.MaterialMapScope.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Swirly/MI_WEP_Swirly_002.MI_WEP_Swirly_002")));
    DefaultSMG01.MaterialMapScope.Add("Sight", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Dot_Blue.MI_ATT_Sight_Dot_Blue")));
    DefaultSMG01.MaterialMapScope.Add("Sight Zoomed", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Crosshair_001.MI_ATT_Sight_Crosshair_001")));
    DefaultSMG01.MaterialMapScope.Add("Fade Round", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round.MI_ATT_Scope_Fade_Round")));
    DefaultSMG01.MaterialMapScope.Add("Invisible", nullptr);
    DefaultSMG01.MaterialMapScope.Add("Unlit", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Unlit.MI_ATT_Scope_Unlit")));
    DefaultSMG01.MaterialMapScope.Add("Fade Square 02", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_02_EdgeFade.MI_ATT_Scope_02_EdgeFade")));
    DefaultSMG01.MaterialMapScope.Add("Fade Round 03", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_03_EdgeFade.MI_ATT_Scope_03_EdgeFade")));
    DefaultSMG01.MaterialMapScope.Add("Fade Square 04", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_04_EdgeFade.MI_ATT_Scope_04_EdgeFade")));
    DefaultSMG01.MaterialMapScope.Add("Fade Round 01", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_01.MI_ATT_Scope_Fade_Round_01")));
    DefaultSMG01.MaterialMapScope.Add("Fade Round 08", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_08.MI_ATT_Scope_Fade_Round_08")));

    // Material Map Laser
    DefaultSMG01.MaterialMapLaser.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Swirly/MI_WEP_Swirly_002.MI_WEP_Swirly_002")));

    // Material Map Grip
    DefaultSMG01.MaterialMapGrip.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Swirly/MI_WEP_Swirly_002.MI_WEP_Swirly_002")));

    DefaultSMG01.RowHandleFlashlightSetting = UFlashlightSettingsBPLibrary::GetFlashlightSettingsByName(EFlashlightSettingsName::Flashlight_Normal);
    DefaultSMG01.RowHandleLaserSightSetting = ULasersightSettingsBPLibrary::GetLasersightSettingsByName(ELasersightSettingsName::Laser_Normal);

    GWeaponSkinMap.Add(EWeaponSkinName::DefaultSMG01, DefaultSMG01);

    /// ---------------------------------------------------------------------------------------------------- ////

    // Default SMG 02
    FWeaponSkinEntry DefaultSMG02;
    DefaultSMG02.Name = EWeaponSkinName::DefaultSMG02;
    
    // Material Map Body
    DefaultSMG02.MaterialMapBody.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_004.MI_WEP_Camo_004")));
    DefaultSMG02.MaterialMapBody.Add("Grip", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_007.MI_WEP_CarbonFibre_007")));
    DefaultSMG02.MaterialMapBody.Add("Grip Front", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_056.MI_WEP_Basic_056")));
    DefaultSMG02.MaterialMapBody.Add("Details", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));
    DefaultSMG02.MaterialMapBody.Add("Bolt", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_001.MI_WEP_CarbonFibre_001")));
    DefaultSMG02.MaterialMapBody.Add("Stock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_004.MI_WEP_Camo_004")));
    DefaultSMG02.MaterialMapBody.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    DefaultSMG02.MaterialMapBody.Add("Forestock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_001.MI_WEP_CarbonFibre_001")));
    DefaultSMG02.MaterialMapBody.Add("Barrel", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_004.MI_WEP_Camo_004")));
    DefaultSMG02.MaterialMapBody.Add("Slide", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_001.MI_WEP_CarbonFibre_001")));
    DefaultSMG02.MaterialMapBody.Add("Hammer", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));
    DefaultSMG02.MaterialMapBody.Add("Handle", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_004.MI_WEP_Camo_004")));
    DefaultSMG02.MaterialMapBody.Add("Handle Base", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_004.MI_WEP_Camo_004")));
    DefaultSMG02.MaterialMapBody.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));
    DefaultSMG02.MaterialMapBody.Add("Rails", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_004.MI_WEP_Camo_004")));

    // Material Map Ironsights
    DefaultSMG02.MaterialMapIronsights.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_004.MI_WEP_Camo_004")));

    // Material Map Magazine
    DefaultSMG02.MaterialMapMagazine.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_004.MI_WEP_Camo_004")));
    DefaultSMG02.MaterialMapMagazine.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    DefaultSMG02.MaterialMapMagazine.Add("Body Rocket", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_061.MI_WEP_Basic_061")));
    DefaultSMG02.MaterialMapMagazine.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));

    // Material Map Muzzle
    DefaultSMG02.MaterialMapMuzzle.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_004.MI_WEP_Camo_004")));

    // Material Map Scope
    DefaultSMG02.MaterialMapScope.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_004.MI_WEP_Camo_004")));
    DefaultSMG02.MaterialMapScope.Add("Sight", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Dot_Blue_01.MI_ATT_Sight_Dot_Blue_01")));
    DefaultSMG02.MaterialMapScope.Add("Sight Zoomed", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Crosshair_002.MI_ATT_Sight_Crosshair_002")));
    DefaultSMG02.MaterialMapScope.Add("Fade Round", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round.MI_ATT_Scope_Fade_Round")));
    DefaultSMG02.MaterialMapScope.Add("Invisible", nullptr);
    DefaultSMG02.MaterialMapScope.Add("Unlit", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Unlit.MI_ATT_Scope_Unlit")));
    DefaultSMG02.MaterialMapScope.Add("Fade Square 02", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_02_EdgeFade.MI_ATT_Scope_02_EdgeFade")));
    DefaultSMG02.MaterialMapScope.Add("Fade Round 03", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_03_EdgeFade.MI_ATT_Scope_03_EdgeFade")));
    DefaultSMG02.MaterialMapScope.Add("Fade Square 04", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_04_EdgeFade.MI_ATT_Scope_04_EdgeFade")));
    DefaultSMG02.MaterialMapScope.Add("Fade Round 01", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_01.MI_ATT_Scope_Fade_Round_01")));
    DefaultSMG02.MaterialMapScope.Add("Fade Round 08", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_08.MI_ATT_Scope_Fade_Round_08")));

    // Material Map Laser
    DefaultSMG02.MaterialMapLaser.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_004.MI_WEP_Camo_004")));

    // Material Map Grip
    DefaultSMG02.MaterialMapGrip.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_004.MI_WEP_Camo_004")));

    DefaultSMG02.RowHandleFlashlightSetting = UFlashlightSettingsBPLibrary::GetFlashlightSettingsByName(EFlashlightSettingsName::Flashlight_Normal);
    DefaultSMG02.RowHandleLaserSightSetting = ULasersightSettingsBPLibrary::GetLasersightSettingsByName(ELasersightSettingsName::Laser_Normal);

    GWeaponSkinMap.Add(EWeaponSkinName::DefaultSMG02, DefaultSMG02);

    /// ---------------------------------------------------------------------------------------------------- ////

    // Default SMG 03
    FWeaponSkinEntry DefaultSMG03;
    DefaultSMG03.Name = EWeaponSkinName::DefaultSMG03;
    
    // Material Map Body
    DefaultSMG03.MaterialMapBody.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_016.MI_WEP_Camo_016")));
    DefaultSMG03.MaterialMapBody.Add("Grip", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_001.MI_WEP_CarbonFibre_001")));
    DefaultSMG03.MaterialMapBody.Add("Grip Front", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_001.MI_WEP_CarbonFibre_001")));
    DefaultSMG03.MaterialMapBody.Add("Details", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));
    DefaultSMG03.MaterialMapBody.Add("Bolt", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));
    DefaultSMG03.MaterialMapBody.Add("Stock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_016.MI_WEP_Camo_016")));
    DefaultSMG03.MaterialMapBody.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    DefaultSMG03.MaterialMapBody.Add("Forestock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));
    DefaultSMG03.MaterialMapBody.Add("Barrel", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_016.MI_WEP_Camo_016")));
    DefaultSMG03.MaterialMapBody.Add("Slide", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_001.MI_WEP_CarbonFibre_001")));
    DefaultSMG03.MaterialMapBody.Add("Hammer", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));
    DefaultSMG03.MaterialMapBody.Add("Handle", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_016.MI_WEP_Camo_016")));
    DefaultSMG03.MaterialMapBody.Add("Handle Base", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_016.MI_WEP_Camo_016")));
    DefaultSMG03.MaterialMapBody.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));
    DefaultSMG03.MaterialMapBody.Add("Rails", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_016.MI_WEP_Camo_016")));

    // Material Map Ironsights
    DefaultSMG03.MaterialMapIronsights.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_005.MI_WEP_Basic_005")));

    // Material Map Magazine
    DefaultSMG03.MaterialMapMagazine.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_016.MI_WEP_Camo_016")));
    DefaultSMG03.MaterialMapMagazine.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    DefaultSMG03.MaterialMapMagazine.Add("Body Rocket", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_061.MI_WEP_Basic_061")));
    DefaultSMG03.MaterialMapMagazine.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));

    // Material Map Muzzle
    DefaultSMG03.MaterialMapMuzzle.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_016.MI_WEP_Camo_016")));

    // Material Map Scope
    DefaultSMG03.MaterialMapScope.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_016.MI_WEP_Camo_016")));
    DefaultSMG03.MaterialMapScope.Add("Sight", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Dot_Red_01.MI_ATT_Sight_Dot_Red_01")));
    DefaultSMG03.MaterialMapScope.Add("Sight Zoomed", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Crosshair_003.MI_ATT_Sight_Crosshair_003")));
    DefaultSMG03.MaterialMapScope.Add("Fade Round", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round.MI_ATT_Scope_Fade_Round")));
    DefaultSMG03.MaterialMapScope.Add("Invisible", nullptr);
    DefaultSMG03.MaterialMapScope.Add("Unlit", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Unlit.MI_ATT_Scope_Unlit")));
    DefaultSMG03.MaterialMapScope.Add("Fade Square 02", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_02_EdgeFade.MI_ATT_Scope_02_EdgeFade")));
    DefaultSMG03.MaterialMapScope.Add("Fade Round 03", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_03_EdgeFade.MI_ATT_Scope_03_EdgeFade")));
    DefaultSMG03.MaterialMapScope.Add("Fade Square 04", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_04_EdgeFade.MI_ATT_Scope_04_EdgeFade")));
    DefaultSMG03.MaterialMapScope.Add("Fade Round 01", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_01.MI_ATT_Scope_Fade_Round_01")));
    DefaultSMG03.MaterialMapScope.Add("Fade Round 08", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_08.MI_ATT_Scope_Fade_Round_08")));

    // Material Map Laser
    DefaultSMG03.MaterialMapLaser.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_016.MI_WEP_Camo_016")));

    // Material Map Grip
    DefaultSMG03.MaterialMapGrip.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_016.MI_WEP_Camo_016")));

    DefaultSMG03.RowHandleFlashlightSetting = UFlashlightSettingsBPLibrary::GetFlashlightSettingsByName(EFlashlightSettingsName::Flashlight_Normal);
    DefaultSMG03.RowHandleLaserSightSetting = ULasersightSettingsBPLibrary::GetLasersightSettingsByName(ELasersightSettingsName::Laser_Normal);

    GWeaponSkinMap.Add(EWeaponSkinName::DefaultSMG03, DefaultSMG03);

    /// ---------------------------------------------------------------------------------------------------- ////

    // Default SMG 04
    FWeaponSkinEntry DefaultSMG04;
    DefaultSMG04.Name = EWeaponSkinName::DefaultSMG04;
    
    // Material Map Body
    DefaultSMG04.MaterialMapBody.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Gradient/MI_WEP_Gradient_016.MI_WEP_Gradient_016")));
    DefaultSMG04.MaterialMapBody.Add("Grip", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_002.MI_WEP_CarbonFibre_002")));
    DefaultSMG04.MaterialMapBody.Add("Grip Front", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_002.MI_WEP_CarbonFibre_002")));
    DefaultSMG04.MaterialMapBody.Add("Details", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_040.MI_WEP_Basic_040")));
    DefaultSMG04.MaterialMapBody.Add("Bolt", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_040.MI_WEP_Basic_040")));
    DefaultSMG04.MaterialMapBody.Add("Stock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_002.MI_WEP_CarbonFibre_002")));
    DefaultSMG04.MaterialMapBody.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    DefaultSMG04.MaterialMapBody.Add("Forestock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_001.MI_WEP_CarbonFibre_001")));
    DefaultSMG04.MaterialMapBody.Add("Barrel", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_040.MI_WEP_Basic_040")));
    DefaultSMG04.MaterialMapBody.Add("Slide", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_001.MI_WEP_CarbonFibre_001")));
    DefaultSMG04.MaterialMapBody.Add("Hammer", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_040.MI_WEP_Basic_040")));
    DefaultSMG04.MaterialMapBody.Add("Handle", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Gradient/MI_WEP_Gradient_016.MI_WEP_Gradient_016")));
    DefaultSMG04.MaterialMapBody.Add("Handle Base", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Gradient/MI_WEP_Gradient_016.MI_WEP_Gradient_016")));
    DefaultSMG04.MaterialMapBody.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));
    DefaultSMG04.MaterialMapBody.Add("Rails", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_016.MI_WEP_Camo_016")));

    // Material Map Ironsights
    DefaultSMG04.MaterialMapIronsights.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Gradient/MI_WEP_Gradient_016.MI_WEP_Gradient_016")));

    // Material Map Magazine
    DefaultSMG04.MaterialMapMagazine.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_011.MI_WEP_Camo_011")));
    DefaultSMG04.MaterialMapMagazine.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    DefaultSMG04.MaterialMapMagazine.Add("Body Rocket", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_061.MI_WEP_Basic_061")));
    DefaultSMG04.MaterialMapMagazine.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));

    // Material Map Muzzle
    DefaultSMG04.MaterialMapMuzzle.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Gradient/MI_WEP_Gradient_016.MI_WEP_Gradient_016")));

    // Material Map Scope
    DefaultSMG04.MaterialMapScope.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_011.MI_WEP_Camo_011")));
    DefaultSMG04.MaterialMapScope.Add("Sight", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Dot_Red_02.MI_ATT_Sight_Dot_Red_02")));
    DefaultSMG04.MaterialMapScope.Add("Sight Zoomed", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Crosshair_004.MI_ATT_Sight_Crosshair_004")));
    DefaultSMG04.MaterialMapScope.Add("Fade Round", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round.MI_ATT_Scope_Fade_Round")));
    DefaultSMG04.MaterialMapScope.Add("Invisible", nullptr);
    DefaultSMG04.MaterialMapScope.Add("Unlit", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Unlit.MI_ATT_Scope_Unlit")));
    DefaultSMG04.MaterialMapScope.Add("Fade Square 02", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_02_EdgeFade.MI_ATT_Scope_02_EdgeFade")));
    DefaultSMG04.MaterialMapScope.Add("Fade Round 03", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_03_EdgeFade.MI_ATT_Scope_03_EdgeFade")));
    DefaultSMG04.MaterialMapScope.Add("Fade Square 04", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_04_EdgeFade.MI_ATT_Scope_04_EdgeFade")));
    DefaultSMG04.MaterialMapScope.Add("Fade Round 01", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_01.MI_ATT_Scope_Fade_Round_01")));
    DefaultSMG04.MaterialMapScope.Add("Fade Round 08", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_08.MI_ATT_Scope_Fade_Round_08")));

    // Material Map Laser
    DefaultSMG04.MaterialMapLaser.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Gradient/MI_WEP_Gradient_016.MI_WEP_Gradient_016")));

    // Material Map Grip
    DefaultSMG04.MaterialMapGrip.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Gradient/MI_WEP_Gradient_016.MI_WEP_Gradient_016")));

    DefaultSMG04.RowHandleFlashlightSetting = UFlashlightSettingsBPLibrary::GetFlashlightSettingsByName(EFlashlightSettingsName::Flashlight_Normal);
    DefaultSMG04.RowHandleLaserSightSetting = ULasersightSettingsBPLibrary::GetLasersightSettingsByName(ELasersightSettingsName::Laser_Normal);

    GWeaponSkinMap.Add(EWeaponSkinName::DefaultSMG04, DefaultSMG04);

    /// ---------------------------------------------------------------------------------------------------- ////

    // Default Sniper 02
    FWeaponSkinEntry DefaultSniper02;
    DefaultSniper02.Name = EWeaponSkinName::DefaultSniper02;
    
    // Material Map Body
    DefaultSniper02.MaterialMapBody.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Striped/MI_WEP_Striped_023.MI_WEP_Striped_023")));
    DefaultSniper02.MaterialMapBody.Add("Grip", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_008.MI_WEP_CarbonFibre_008")));
    DefaultSniper02.MaterialMapBody.Add("Grip Front", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_001.MI_WEP_CarbonFibre_001")));
    DefaultSniper02.MaterialMapBody.Add("Details", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_023.MI_WEP_Basic_023")));
    DefaultSniper02.MaterialMapBody.Add("Bolt", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_006.MI_WEP_Basic_006")));
    DefaultSniper02.MaterialMapBody.Add("Stock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_022.MI_WEP_Basic_022")));
    DefaultSniper02.MaterialMapBody.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    DefaultSniper02.MaterialMapBody.Add("Forestock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_001.MI_WEP_CarbonFibre_001")));
    DefaultSniper02.MaterialMapBody.Add("Barrel", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_023.MI_WEP_Basic_023")));
    DefaultSniper02.MaterialMapBody.Add("Slide", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_006.MI_WEP_Basic_006")));
    DefaultSniper02.MaterialMapBody.Add("Hammer", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_023.MI_WEP_Basic_023")));
    DefaultSniper02.MaterialMapBody.Add("Handle", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));
    DefaultSniper02.MaterialMapBody.Add("Handle Base", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Striped/MI_WEP_Striped_023.MI_WEP_Striped_023")));
    DefaultSniper02.MaterialMapBody.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));
    DefaultSniper02.MaterialMapBody.Add("Rails", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Striped/MI_WEP_Striped_023.MI_WEP_Striped_023")));

    // Material Map Ironsights
    DefaultSniper02.MaterialMapIronsights.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_022.MI_WEP_Basic_022")));

    // Material Map Magazine
    DefaultSniper02.MaterialMapMagazine.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_008.MI_WEP_CarbonFibre_008")));
    DefaultSniper02.MaterialMapMagazine.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    DefaultSniper02.MaterialMapMagazine.Add("Body Rocket", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_061.MI_WEP_Basic_061")));
    DefaultSniper02.MaterialMapMagazine.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));

    // Material Map Muzzle
    DefaultSniper02.MaterialMapMuzzle.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Striped/MI_WEP_Striped_023.MI_WEP_Striped_023")));

    // Material Map Scope
    DefaultSniper02.MaterialMapScope.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_008.MI_WEP_CarbonFibre_008")));
    DefaultSniper02.MaterialMapScope.Add("Sight", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Square_Blue.MI_ATT_Sight_Square_Blue")));
    DefaultSniper02.MaterialMapScope.Add("Sight Zoomed", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Crosshair_007.MI_ATT_Sight_Crosshair_007")));
    DefaultSniper02.MaterialMapScope.Add("Fade Round", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round.MI_ATT_Scope_Fade_Round")));
    DefaultSniper02.MaterialMapScope.Add("Invisible", nullptr);
    DefaultSniper02.MaterialMapScope.Add("Unlit", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Unlit.MI_ATT_Scope_Unlit")));
    DefaultSniper02.MaterialMapScope.Add("Fade Square 02", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_02_EdgeFade.MI_ATT_Scope_02_EdgeFade")));
    DefaultSniper02.MaterialMapScope.Add("Fade Round 03", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_03_EdgeFade.MI_ATT_Scope_03_EdgeFade")));
    DefaultSniper02.MaterialMapScope.Add("Fade Square 04", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_04_EdgeFade.MI_ATT_Scope_04_EdgeFade")));
    DefaultSniper02.MaterialMapScope.Add("Fade Round 01", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_01.MI_ATT_Scope_Fade_Round_01")));
    DefaultSniper02.MaterialMapScope.Add("Fade Round 08", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_08.MI_ATT_Scope_Fade_Round_08")));

    // Material Map Laser
    DefaultSniper02.MaterialMapLaser.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Striped/MI_WEP_Striped_023.MI_WEP_Striped_023")));

    // Material Map Grip
    DefaultSniper02.MaterialMapGrip.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Striped/MI_WEP_Striped_023.MI_WEP_Striped_023")));

    DefaultSniper02.RowHandleFlashlightSetting = UFlashlightSettingsBPLibrary::GetFlashlightSettingsByName(EFlashlightSettingsName::Flashlight_Normal);
    DefaultSniper02.RowHandleLaserSightSetting = ULasersightSettingsBPLibrary::GetLasersightSettingsByName(ELasersightSettingsName::Laser_Normal);

    GWeaponSkinMap.Add(EWeaponSkinName::DefaultSniper02, DefaultSniper02);

    /// ---------------------------------------------------------------------------------------------------- ////

    // Default Sniper 03
    FWeaponSkinEntry DefaultSniper03;
    DefaultSniper03.Name = EWeaponSkinName::DefaultSniper03;
    
    // Material Map Body
    DefaultSniper03.MaterialMapBody.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Striped/MI_WEP_Striped_007.MI_WEP_Striped_007")));
    DefaultSniper03.MaterialMapBody.Add("Grip", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_009.MI_WEP_CarbonFibre_009")));
    DefaultSniper03.MaterialMapBody.Add("Grip Front", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Striped/MI_WEP_Striped_007.MI_WEP_Striped_007")));
    DefaultSniper03.MaterialMapBody.Add("Details", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_018.MI_WEP_Basic_018")));
    DefaultSniper03.MaterialMapBody.Add("Bolt", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_018.MI_WEP_Basic_018")));
    DefaultSniper03.MaterialMapBody.Add("Stock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Striped/MI_WEP_Striped_007.MI_WEP_Striped_007")));
    DefaultSniper03.MaterialMapBody.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    DefaultSniper03.MaterialMapBody.Add("Forestock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_001.MI_WEP_CarbonFibre_001")));
    DefaultSniper03.MaterialMapBody.Add("Barrel", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_018.MI_WEP_Basic_018")));
    DefaultSniper03.MaterialMapBody.Add("Slide", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_001.MI_WEP_CarbonFibre_001")));
    DefaultSniper03.MaterialMapBody.Add("Hammer", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_018.MI_WEP_Basic_018")));
    DefaultSniper03.MaterialMapBody.Add("Handle", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Striped/MI_WEP_Striped_007.MI_WEP_Striped_007")));
    DefaultSniper03.MaterialMapBody.Add("Handle Base", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Striped/MI_WEP_Striped_007.MI_WEP_Striped_007")));
    DefaultSniper03.MaterialMapBody.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));
    DefaultSniper03.MaterialMapBody.Add("Rails", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Striped/MI_WEP_Striped_007.MI_WEP_Striped_007")));

    // Material Map Ironsights
    DefaultSniper03.MaterialMapIronsights.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_009.MI_WEP_CarbonFibre_009")));

    // Material Map Magazine
    DefaultSniper03.MaterialMapMagazine.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_009.MI_WEP_CarbonFibre_009")));
    DefaultSniper03.MaterialMapMagazine.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    DefaultSniper03.MaterialMapMagazine.Add("Body Rocket", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_061.MI_WEP_Basic_061")));
    DefaultSniper03.MaterialMapMagazine.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));

    // Material Map Muzzle
    DefaultSniper03.MaterialMapMuzzle.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Striped/MI_WEP_Striped_007.MI_WEP_Striped_007")));

    // Material Map Scope
    DefaultSniper03.MaterialMapScope.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Striped/MI_WEP_Striped_007.MI_WEP_Striped_007")));
    DefaultSniper03.MaterialMapScope.Add("Sight", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Square_Orange.MI_ATT_Sight_Square_Orange")));
    DefaultSniper03.MaterialMapScope.Add("Sight Zoomed", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Crosshair_008.MI_ATT_Sight_Crosshair_008")));
    DefaultSniper03.MaterialMapScope.Add("Fade Round", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round.MI_ATT_Scope_Fade_Round")));
    DefaultSniper03.MaterialMapScope.Add("Invisible", nullptr);
    DefaultSniper03.MaterialMapScope.Add("Unlit", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Unlit.MI_ATT_Scope_Unlit")));
    DefaultSniper03.MaterialMapScope.Add("Fade Square 02", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_02_EdgeFade.MI_ATT_Scope_02_EdgeFade")));
    DefaultSniper03.MaterialMapScope.Add("Fade Round 03", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_03_EdgeFade.MI_ATT_Scope_03_EdgeFade")));
    DefaultSniper03.MaterialMapScope.Add("Fade Square 04", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_04_EdgeFade.MI_ATT_Scope_04_EdgeFade")));
    DefaultSniper03.MaterialMapScope.Add("Fade Round 01", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_01.MI_ATT_Scope_Fade_Round_01")));
    DefaultSniper03.MaterialMapScope.Add("Fade Round 08", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_08.MI_ATT_Scope_Fade_Round_08")));

    // Material Map Laser
    DefaultSniper03.MaterialMapLaser.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Striped/MI_WEP_Striped_007.MI_WEP_Striped_007")));

    // Material Map Grip
    DefaultSniper03.MaterialMapGrip.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Striped/MI_WEP_Striped_007.MI_WEP_Striped_007")));

    DefaultSniper03.RowHandleFlashlightSetting = UFlashlightSettingsBPLibrary::GetFlashlightSettingsByName(EFlashlightSettingsName::Flashlight_Normal);
    DefaultSniper03.RowHandleLaserSightSetting = ULasersightSettingsBPLibrary::GetLasersightSettingsByName(ELasersightSettingsName::Laser_Normal);

    GWeaponSkinMap.Add(EWeaponSkinName::DefaultSniper03, DefaultSniper03);

    /// ---------------------------------------------------------------------------------------------------- ////

    // Custom Elite
    FWeaponSkinEntry CustomElite;
    CustomElite.Name = EWeaponSkinName::CustomElite;
    
    // Material Map Body
    CustomElite.MaterialMapBody.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_009.MI_WEP_Camo_009")));
    CustomElite.MaterialMapBody.Add("Grip", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_001.MI_WEP_CarbonFibre_001")));
    CustomElite.MaterialMapBody.Add("Grip Front", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_009.MI_WEP_Camo_009")));
    CustomElite.MaterialMapBody.Add("Details", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_003.MI_WEP_Basic_003")));
    CustomElite.MaterialMapBody.Add("Bolt", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_003.MI_WEP_Basic_003")));
    CustomElite.MaterialMapBody.Add("Stock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_009.MI_WEP_Camo_009")));
    CustomElite.MaterialMapBody.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    CustomElite.MaterialMapBody.Add("Forestock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_005.MI_WEP_CarbonFibre_005")));
    CustomElite.MaterialMapBody.Add("Barrel", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_003.MI_WEP_Basic_003")));
    CustomElite.MaterialMapBody.Add("Slide", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_001.MI_WEP_CarbonFibre_001")));
    CustomElite.MaterialMapBody.Add("Hammer", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_003.MI_WEP_Basic_003")));
    CustomElite.MaterialMapBody.Add("Handle", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_009.MI_WEP_Camo_009")));
    CustomElite.MaterialMapBody.Add("Handle Base", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_009.MI_WEP_Camo_009")));
    CustomElite.MaterialMapBody.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));
    CustomElite.MaterialMapBody.Add("Rails", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_009.MI_WEP_Camo_009")));

    // Material Map Ironsights
    CustomElite.MaterialMapIronsights.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_009.MI_WEP_Camo_009")));

    // Material Map Magazine
    CustomElite.MaterialMapMagazine.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_003.MI_WEP_Basic_003")));
    CustomElite.MaterialMapMagazine.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    CustomElite.MaterialMapMagazine.Add("Body Rocket", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_061.MI_WEP_Basic_061")));
    CustomElite.MaterialMapMagazine.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));

    // Material Map Muzzle
    CustomElite.MaterialMapMuzzle.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_009.MI_WEP_Camo_009")));

    // Material Map Scope
    CustomElite.MaterialMapScope.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_009.MI_WEP_Camo_009")));
    CustomElite.MaterialMapScope.Add("Sight", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Square_Red.MI_ATT_Sight_Square_Red")));
    CustomElite.MaterialMapScope.Add("Sight Zoomed", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Crosshair_009.MI_ATT_Sight_Crosshair_009")));
    CustomElite.MaterialMapScope.Add("Fade Round", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round.MI_ATT_Scope_Fade_Round")));
    CustomElite.MaterialMapScope.Add("Invisible", nullptr);
    CustomElite.MaterialMapScope.Add("Unlit", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Unlit.MI_ATT_Scope_Unlit")));
    CustomElite.MaterialMapScope.Add("Fade Square 02", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_02_EdgeFade.MI_ATT_Scope_02_EdgeFade")));
    CustomElite.MaterialMapScope.Add("Fade Round 03", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_03_EdgeFade.MI_ATT_Scope_03_EdgeFade")));
    CustomElite.MaterialMapScope.Add("Fade Square 04", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_04_EdgeFade.MI_ATT_Scope_04_EdgeFade")));
    CustomElite.MaterialMapScope.Add("Fade Round 01", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_01.MI_ATT_Scope_Fade_Round_01")));
    CustomElite.MaterialMapScope.Add("Fade Round 08", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_08.MI_ATT_Scope_Fade_Round_08")));

    // Material Map Laser
    CustomElite.MaterialMapLaser.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_010.MI_WEP_Basic_010")));

    // Material Map Grip
    CustomElite.MaterialMapGrip.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_009.MI_WEP_Camo_009")));

    CustomElite.RowHandleFlashlightSetting = UFlashlightSettingsBPLibrary::GetFlashlightSettingsByName(EFlashlightSettingsName::Flashlight_Normal);
    CustomElite.RowHandleLaserSightSetting = ULasersightSettingsBPLibrary::GetLasersightSettingsByName(ELasersightSettingsName::Laser_Normal);

    GWeaponSkinMap.Add(EWeaponSkinName::CustomElite, CustomElite);

    /// ---------------------------------------------------------------------------------------------------- ////

    // Custom Forest
    FWeaponSkinEntry CustomForest;
    CustomForest.Name = EWeaponSkinName::CustomForest;
    
    // Material Map Body
    CustomForest.MaterialMapBody.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_027.MI_WEP_Camo_027")));
    CustomForest.MaterialMapBody.Add("Grip", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_001.MI_WEP_CarbonFibre_001")));
    CustomForest.MaterialMapBody.Add("Grip Front", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_061.MI_WEP_Basic_061")));
    CustomForest.MaterialMapBody.Add("Details", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_003.MI_WEP_Basic_003")));
    CustomForest.MaterialMapBody.Add("Bolt", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_003.MI_WEP_Basic_003")));
    CustomForest.MaterialMapBody.Add("Stock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_027.MI_WEP_Camo_027")));
    CustomForest.MaterialMapBody.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    CustomForest.MaterialMapBody.Add("Forestock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_005.MI_WEP_CarbonFibre_005")));
    CustomForest.MaterialMapBody.Add("Barrel", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_061.MI_WEP_Basic_061")));
    CustomForest.MaterialMapBody.Add("Slide", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_001.MI_WEP_CarbonFibre_001")));
    CustomForest.MaterialMapBody.Add("Hammer", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_061.MI_WEP_Basic_061")));
    CustomForest.MaterialMapBody.Add("Handle", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_027.MI_WEP_Camo_027")));
    CustomForest.MaterialMapBody.Add("Handle Base", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_027.MI_WEP_Camo_027")));
    CustomForest.MaterialMapBody.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));
    CustomForest.MaterialMapBody.Add("Rails", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_027.MI_WEP_Camo_027")));

    // Material Map Ironsights
    CustomForest.MaterialMapIronsights.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_027.MI_WEP_Camo_027")));

    // Material Map Magazine
    CustomForest.MaterialMapMagazine.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_027.MI_WEP_Camo_027")));
    CustomForest.MaterialMapMagazine.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    CustomForest.MaterialMapMagazine.Add("Body Rocket", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_061.MI_WEP_Basic_061")));
    CustomForest.MaterialMapMagazine.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));

    // Material Map Muzzle
    CustomForest.MaterialMapMuzzle.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_027.MI_WEP_Camo_027")));

    // Material Map Scope
    CustomForest.MaterialMapScope.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_027.MI_WEP_Camo_027")));
    CustomForest.MaterialMapScope.Add("Sight", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Square_White.MI_ATT_Sight_Square_White")));
    CustomForest.MaterialMapScope.Add("Sight Zoomed", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Crosshair_010.MI_ATT_Sight_Crosshair_010")));
    CustomForest.MaterialMapScope.Add("Fade Round", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round.MI_ATT_Scope_Fade_Round")));
    CustomForest.MaterialMapScope.Add("Invisible", nullptr);
    CustomForest.MaterialMapScope.Add("Unlit", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Unlit.MI_ATT_Scope_Unlit")));
    CustomForest.MaterialMapScope.Add("Fade Square 02", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_02_EdgeFade.MI_ATT_Scope_02_EdgeFade")));
    CustomForest.MaterialMapScope.Add("Fade Round 03", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_03_EdgeFade.MI_ATT_Scope_03_EdgeFade")));
    CustomForest.MaterialMapScope.Add("Fade Square 04", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_04_EdgeFade.MI_ATT_Scope_04_EdgeFade")));
    CustomForest.MaterialMapScope.Add("Fade Round 01", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_01.MI_ATT_Scope_Fade_Round_01")));
    CustomForest.MaterialMapScope.Add("Fade Round 08", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_08.MI_ATT_Scope_Fade_Round_08")));

    // Material Map Laser
    CustomForest.MaterialMapLaser.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_027.MI_WEP_Camo_027")));

    // Material Map Grip
    CustomForest.MaterialMapGrip.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_027.MI_WEP_Camo_027")));

    CustomForest.RowHandleFlashlightSetting = UFlashlightSettingsBPLibrary::GetFlashlightSettingsByName(EFlashlightSettingsName::Flashlight_Normal);
    CustomForest.RowHandleLaserSightSetting = ULasersightSettingsBPLibrary::GetLasersightSettingsByName(ELasersightSettingsName::Laser_Normal);

    GWeaponSkinMap.Add(EWeaponSkinName::CustomForest, CustomForest);

    /// ---------------------------------------------------------------------------------------------------- ////

    // Custom SciFi
    FWeaponSkinEntry CustomSciFi;
    CustomSciFi.Name = EWeaponSkinName::CustomSciFi;
    
    // Material Map Body
    CustomSciFi.MaterialMapBody.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));
    CustomSciFi.MaterialMapBody.Add("Grip", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_039.MI_WEP_Basic_039")));
    CustomSciFi.MaterialMapBody.Add("Grip Front", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_039.MI_WEP_Basic_039")));
    CustomSciFi.MaterialMapBody.Add("Details", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_039.MI_WEP_Basic_039")));
    CustomSciFi.MaterialMapBody.Add("Bolt", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_003.MI_WEP_Basic_003")));
    CustomSciFi.MaterialMapBody.Add("Stock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_039.MI_WEP_Basic_039")));
    CustomSciFi.MaterialMapBody.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    CustomSciFi.MaterialMapBody.Add("Forestock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_039.MI_WEP_Basic_039")));
    CustomSciFi.MaterialMapBody.Add("Barrel", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));
    CustomSciFi.MaterialMapBody.Add("Slide", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_001.MI_WEP_CarbonFibre_001")));
    CustomSciFi.MaterialMapBody.Add("Hammer", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_039.MI_WEP_Basic_039")));
    CustomSciFi.MaterialMapBody.Add("Handle", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));
    CustomSciFi.MaterialMapBody.Add("Handle Base", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));
    CustomSciFi.MaterialMapBody.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));
    CustomSciFi.MaterialMapBody.Add("Rails", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));

    // Material Map Ironsights
    CustomSciFi.MaterialMapIronsights.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_039.MI_WEP_Basic_039")));

    // Material Map Magazine
    CustomSciFi.MaterialMapMagazine.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_039.MI_WEP_Basic_039")));
    CustomSciFi.MaterialMapMagazine.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    CustomSciFi.MaterialMapMagazine.Add("Body Rocket", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_061.MI_WEP_Basic_061")));
    CustomSciFi.MaterialMapMagazine.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));

    // Material Map Muzzle
    CustomSciFi.MaterialMapMuzzle.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_039.MI_WEP_Basic_039")));

    // Material Map Scope
    CustomSciFi.MaterialMapScope.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));
    CustomSciFi.MaterialMapScope.Add("Sight", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Dot_Blue.MI_ATT_Sight_Dot_Blue")));
    CustomSciFi.MaterialMapScope.Add("Sight Zoomed", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Crosshair_001.MI_ATT_Sight_Crosshair_001")));
    CustomSciFi.MaterialMapScope.Add("Fade Round", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round.MI_ATT_Scope_Fade_Round")));
    CustomSciFi.MaterialMapScope.Add("Invisible", nullptr);
    CustomSciFi.MaterialMapScope.Add("Unlit", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Unlit.MI_ATT_Scope_Unlit")));
    CustomSciFi.MaterialMapScope.Add("Fade Square 02", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_02_EdgeFade.MI_ATT_Scope_02_EdgeFade")));
    CustomSciFi.MaterialMapScope.Add("Fade Round 03", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_03_EdgeFade.MI_ATT_Scope_03_EdgeFade")));
    CustomSciFi.MaterialMapScope.Add("Fade Square 04", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_04_EdgeFade.MI_ATT_Scope_04_EdgeFade")));
    CustomSciFi.MaterialMapScope.Add("Fade Round 01", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_01.MI_ATT_Scope_Fade_Round_01")));
    CustomSciFi.MaterialMapScope.Add("Fade Round 08", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_08.MI_ATT_Scope_Fade_Round_08")));

    // Material Map Laser
    CustomSciFi.MaterialMapLaser.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_039.MI_WEP_Basic_039")));

    // Material Map Grip
    CustomSciFi.MaterialMapGrip.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_039.MI_WEP_Basic_039")));

    CustomSciFi.RowHandleFlashlightSetting = UFlashlightSettingsBPLibrary::GetFlashlightSettingsByName(EFlashlightSettingsName::Flashlight_Normal);
    CustomSciFi.RowHandleLaserSightSetting = ULasersightSettingsBPLibrary::GetLasersightSettingsByName(ELasersightSettingsName::Laser_Normal);

    GWeaponSkinMap.Add(EWeaponSkinName::CustomSciFi, CustomSciFi);

    /// ---------------------------------------------------------------------------------------------------- ////

    // Custom AntiTank
    FWeaponSkinEntry CustomAntiTank;
    CustomAntiTank.Name = EWeaponSkinName::CustomAntiTank;
    
    // Material Map Body
    CustomAntiTank.MaterialMapBody.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_001.MI_WEP_CarbonFibre_001")));
    CustomAntiTank.MaterialMapBody.Add("Grip", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_006.MI_WEP_Camo_006")));
    CustomAntiTank.MaterialMapBody.Add("Grip Front", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_006.MI_WEP_Camo_006")));
    CustomAntiTank.MaterialMapBody.Add("Details", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_006.MI_WEP_Camo_006")));
    CustomAntiTank.MaterialMapBody.Add("Bolt", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_003.MI_WEP_Basic_003")));
    CustomAntiTank.MaterialMapBody.Add("Stock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_003.MI_WEP_Basic_003")));
    CustomAntiTank.MaterialMapBody.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    CustomAntiTank.MaterialMapBody.Add("Forestock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_005.MI_WEP_CarbonFibre_005")));
    CustomAntiTank.MaterialMapBody.Add("Barrel", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_006.MI_WEP_Camo_006")));
    CustomAntiTank.MaterialMapBody.Add("Slide", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_001.MI_WEP_CarbonFibre_001")));
    CustomAntiTank.MaterialMapBody.Add("Hammer", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_003.MI_WEP_Basic_003")));
    CustomAntiTank.MaterialMapBody.Add("Handle", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_006.MI_WEP_Camo_006")));
    CustomAntiTank.MaterialMapBody.Add("Handle Base", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_006.MI_WEP_Camo_006")));
    CustomAntiTank.MaterialMapBody.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));
    CustomAntiTank.MaterialMapBody.Add("Rails", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_001.MI_WEP_CarbonFibre_001")));

    // Material Map Ironsights
    CustomAntiTank.MaterialMapIronsights.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_006.MI_WEP_Camo_006")));

    // Material Map Magazine
    CustomAntiTank.MaterialMapMagazine.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_006.MI_WEP_Camo_006")));
    CustomAntiTank.MaterialMapMagazine.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    CustomAntiTank.MaterialMapMagazine.Add("Body Rocket", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_061.MI_WEP_Basic_061")));
    CustomAntiTank.MaterialMapMagazine.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));

    // Material Map Muzzle
    CustomAntiTank.MaterialMapMuzzle.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_006.MI_WEP_Camo_006")));

    // Material Map Scope
    CustomAntiTank.MaterialMapScope.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_006.MI_WEP_Camo_006")));
    CustomAntiTank.MaterialMapScope.Add("Sight", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Dot_Blue_01.MI_ATT_Sight_Dot_Blue_01")));
    CustomAntiTank.MaterialMapScope.Add("Sight Zoomed", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Crosshair_002.MI_ATT_Sight_Crosshair_002")));
    CustomAntiTank.MaterialMapScope.Add("Fade Round", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round.MI_ATT_Scope_Fade_Round")));
    CustomAntiTank.MaterialMapScope.Add("Invisible", nullptr);
    CustomAntiTank.MaterialMapScope.Add("Unlit", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Unlit.MI_ATT_Scope_Unlit")));
    CustomAntiTank.MaterialMapScope.Add("Fade Square 02", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_02_EdgeFade.MI_ATT_Scope_02_EdgeFade")));
    CustomAntiTank.MaterialMapScope.Add("Fade Round 03", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_03_EdgeFade.MI_ATT_Scope_03_EdgeFade")));
    CustomAntiTank.MaterialMapScope.Add("Fade Square 04", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_04_EdgeFade.MI_ATT_Scope_04_EdgeFade")));
    CustomAntiTank.MaterialMapScope.Add("Fade Round 01", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_01.MI_ATT_Scope_Fade_Round_01")));
    CustomAntiTank.MaterialMapScope.Add("Fade Round 08", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_08.MI_ATT_Scope_Fade_Round_08")));

    // Material Map Laser
    CustomAntiTank.MaterialMapLaser.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_003.MI_WEP_Basic_003")));

    // Material Map Grip
    CustomAntiTank.MaterialMapGrip.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_006.MI_WEP_Camo_006")));

    CustomAntiTank.RowHandleFlashlightSetting = UFlashlightSettingsBPLibrary::GetFlashlightSettingsByName(EFlashlightSettingsName::Flashlight_Normal);
    CustomAntiTank.RowHandleLaserSightSetting = ULasersightSettingsBPLibrary::GetLasersightSettingsByName(ELasersightSettingsName::Laser_Normal);

    GWeaponSkinMap.Add(EWeaponSkinName::CustomAntiTank, CustomAntiTank);

    /// ---------------------------------------------------------------------------------------------------- ////

    // Custom Neon
    FWeaponSkinEntry CustomNeon;
    CustomNeon.Name = EWeaponSkinName::CustomNeon;
    
    // Material Map Body
    CustomNeon.MaterialMapBody.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Gradient/MI_WEP_Gradient_002.MI_WEP_Gradient_002")));
    CustomNeon.MaterialMapBody.Add("Grip", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_016.MI_WEP_Basic_016")));
    CustomNeon.MaterialMapBody.Add("Grip Front", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_017.MI_WEP_Camo_017")));
    CustomNeon.MaterialMapBody.Add("Details", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_013.MI_WEP_Basic_013")));
    CustomNeon.MaterialMapBody.Add("Bolt", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_013.MI_WEP_Basic_013")));
    CustomNeon.MaterialMapBody.Add("Stock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_013.MI_WEP_Basic_013")));
    CustomNeon.MaterialMapBody.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    CustomNeon.MaterialMapBody.Add("Forestock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_016.MI_WEP_Basic_016")));
    CustomNeon.MaterialMapBody.Add("Barrel", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Gradient/MI_WEP_Gradient_002.MI_WEP_Gradient_002")));
    CustomNeon.MaterialMapBody.Add("Slide", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Gradient/MI_WEP_Gradient_002.MI_WEP_Gradient_002")));
    CustomNeon.MaterialMapBody.Add("Hammer", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_013.MI_WEP_Basic_013")));
    CustomNeon.MaterialMapBody.Add("Handle", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_017.MI_WEP_Camo_017")));
    CustomNeon.MaterialMapBody.Add("Handle Base", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_017.MI_WEP_Camo_017")));
    CustomNeon.MaterialMapBody.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));
    CustomNeon.MaterialMapBody.Add("Rails", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Gradient/MI_WEP_Gradient_002.MI_WEP_Gradient_002")));

    // Material Map Ironsights
    CustomNeon.MaterialMapIronsights.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_017.MI_WEP_Camo_017")));

    // Material Map Magazine
    CustomNeon.MaterialMapMagazine.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_017.MI_WEP_Camo_017")));
    CustomNeon.MaterialMapMagazine.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    CustomNeon.MaterialMapMagazine.Add("Body Rocket", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_061.MI_WEP_Basic_061")));
    CustomNeon.MaterialMapMagazine.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));

    // Material Map Muzzle
    CustomNeon.MaterialMapMuzzle.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_017.MI_WEP_Camo_017")));

    // Material Map Scope
    CustomNeon.MaterialMapScope.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_017.MI_WEP_Camo_017")));
    CustomNeon.MaterialMapScope.Add("Sight", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Dot_Red_01.MI_ATT_Sight_Dot_Red_01")));
    CustomNeon.MaterialMapScope.Add("Sight Zoomed", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Crosshair_003.MI_ATT_Sight_Crosshair_003")));
    CustomNeon.MaterialMapScope.Add("Fade Round", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round.MI_ATT_Scope_Fade_Round")));
    CustomNeon.MaterialMapScope.Add("Invisible", nullptr);
    CustomNeon.MaterialMapScope.Add("Unlit", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Unlit.MI_ATT_Scope_Unlit")));
    CustomNeon.MaterialMapScope.Add("Fade Square 02", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_02_EdgeFade.MI_ATT_Scope_02_EdgeFade")));
    CustomNeon.MaterialMapScope.Add("Fade Round 03", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_03_EdgeFade.MI_ATT_Scope_03_EdgeFade")));
    CustomNeon.MaterialMapScope.Add("Fade Square 04", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_04_EdgeFade.MI_ATT_Scope_04_EdgeFade")));
    CustomNeon.MaterialMapScope.Add("Fade Round 01", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_01.MI_ATT_Scope_Fade_Round_01")));
    CustomNeon.MaterialMapScope.Add("Fade Round 08", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_08.MI_ATT_Scope_Fade_Round_08")));

    // Material Map Laser
    CustomNeon.MaterialMapLaser.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_016.MI_WEP_Basic_016")));

    // Material Map Grip
    CustomNeon.MaterialMapGrip.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_017.MI_WEP_Camo_017")));


    CustomNeon.RowHandleFlashlightSetting = UFlashlightSettingsBPLibrary::GetFlashlightSettingsByName(EFlashlightSettingsName::Flashlight_Neon);
    CustomNeon.RowHandleLaserSightSetting = ULasersightSettingsBPLibrary::GetLasersightSettingsByName(ELasersightSettingsName::Laser_Neon);

	GWeaponSkinMap.Add(EWeaponSkinName::CustomNeon, CustomNeon);

    /// ---------------------------------------------------------------------------------------------------- ////

    // Custom Neon Special
    FWeaponSkinEntry CustomNeonSpecial;
    CustomNeonSpecial.Name = EWeaponSkinName::CustomNeonSpecial;
    
    // Material Map Body
    CustomNeonSpecial.MaterialMapBody.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Gradient/MI_WEP_Gradient_002.MI_WEP_Gradient_002")));
    CustomNeonSpecial.MaterialMapBody.Add("Grip", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_017.MI_WEP_Camo_017")));
    CustomNeonSpecial.MaterialMapBody.Add("Grip Front", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_017.MI_WEP_Camo_017")));
    CustomNeonSpecial.MaterialMapBody.Add("Details", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_013.MI_WEP_Basic_013")));
    CustomNeonSpecial.MaterialMapBody.Add("Bolt", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_013.MI_WEP_Basic_013")));
    CustomNeonSpecial.MaterialMapBody.Add("Stock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_013.MI_WEP_Basic_013")));
    CustomNeonSpecial.MaterialMapBody.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    CustomNeonSpecial.MaterialMapBody.Add("Forestock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_013.MI_WEP_Basic_013")));
    CustomNeonSpecial.MaterialMapBody.Add("Barrel", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_013.MI_WEP_Basic_013")));
    CustomNeonSpecial.MaterialMapBody.Add("Slide", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Swirly/MI_WEP_Swirly_005.MI_WEP_Swirly_005")));
    CustomNeonSpecial.MaterialMapBody.Add("Hammer", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_013.MI_WEP_Basic_013")));
    CustomNeonSpecial.MaterialMapBody.Add("Handle", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_017.MI_WEP_Camo_017")));
    CustomNeonSpecial.MaterialMapBody.Add("Handle Base", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_017.MI_WEP_Camo_017")));
    CustomNeonSpecial.MaterialMapBody.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));
    CustomNeonSpecial.MaterialMapBody.Add("Rails", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Gradient/MI_WEP_Gradient_002.MI_WEP_Gradient_002")));

    // Material Map Ironsights
    CustomNeonSpecial.MaterialMapIronsights.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_017.MI_WEP_Camo_017")));

    // Material Map Magazine
    CustomNeonSpecial.MaterialMapMagazine.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_017.MI_WEP_Camo_017")));
    CustomNeonSpecial.MaterialMapMagazine.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    CustomNeonSpecial.MaterialMapMagazine.Add("Body Rocket", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_061.MI_WEP_Basic_061")));
    CustomNeonSpecial.MaterialMapMagazine.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));

    // Material Map Muzzle
    CustomNeonSpecial.MaterialMapMuzzle.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_017.MI_WEP_Camo_017")));

    // Material Map Scope
    CustomNeonSpecial.MaterialMapScope.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_017.MI_WEP_Camo_017")));
    CustomNeonSpecial.MaterialMapScope.Add("Sight", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Dot_Red_02.MI_ATT_Sight_Dot_Red_02")));
    CustomNeonSpecial.MaterialMapScope.Add("Sight Zoomed", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Crosshair_004.MI_ATT_Sight_Crosshair_004")));
    CustomNeonSpecial.MaterialMapScope.Add("Fade Round", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round.MI_ATT_Scope_Fade_Round")));
    CustomNeonSpecial.MaterialMapScope.Add("Invisible", nullptr);
    CustomNeonSpecial.MaterialMapScope.Add("Unlit", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Unlit.MI_ATT_Scope_Unlit")));
    CustomNeonSpecial.MaterialMapScope.Add("Fade Square 02", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_02_EdgeFade.MI_ATT_Scope_02_EdgeFade")));
    CustomNeonSpecial.MaterialMapScope.Add("Fade Round 03", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_03_EdgeFade.MI_ATT_Scope_03_EdgeFade")));
    CustomNeonSpecial.MaterialMapScope.Add("Fade Square 04", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_04_EdgeFade.MI_ATT_Scope_04_EdgeFade")));
    CustomNeonSpecial.MaterialMapScope.Add("Fade Round 01", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_01.MI_ATT_Scope_Fade_Round_01")));
    CustomNeonSpecial.MaterialMapScope.Add("Fade Round 08", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_08.MI_ATT_Scope_Fade_Round_08")));

    // Material Map Laser
    CustomNeonSpecial.MaterialMapLaser.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_017.MI_WEP_Camo_017")));

    // Material Map Grip
    CustomNeonSpecial.MaterialMapGrip.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_017.MI_WEP_Camo_017")));


    CustomNeonSpecial.RowHandleFlashlightSetting = UFlashlightSettingsBPLibrary::GetFlashlightSettingsByName(EFlashlightSettingsName::Flashlight_Neon);
    CustomNeonSpecial.RowHandleLaserSightSetting = ULasersightSettingsBPLibrary::GetLasersightSettingsByName(ELasersightSettingsName::Laser_Neon);

	GWeaponSkinMap.Add(EWeaponSkinName::CustomNeonSpecial, CustomNeonSpecial);

    /// ---------------------------------------------------------------------------------------------------- ////

    // Custom Stealth
    FWeaponSkinEntry CustomStealth;
    CustomStealth.Name = EWeaponSkinName::CustomStealth;
    
    // Material Map Body
    CustomStealth.MaterialMapBody.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_003.MI_WEP_Basic_003")));
    CustomStealth.MaterialMapBody.Add("Grip", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_064.MI_WEP_Basic_064")));
    CustomStealth.MaterialMapBody.Add("Grip Front", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_064.MI_WEP_Basic_064")));
    CustomStealth.MaterialMapBody.Add("Details", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_002.MI_WEP_Basic_002")));
    CustomStealth.MaterialMapBody.Add("Bolt", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/BrushedSteel/MI_WEP_Steel_Brushed_013.MI_WEP_Steel_Brushed_013")));
    CustomStealth.MaterialMapBody.Add("Stock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/BrushedSteel/MI_WEP_Steel_Brushed_013.MI_WEP_Steel_Brushed_013")));
    CustomStealth.MaterialMapBody.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    CustomStealth.MaterialMapBody.Add("Forestock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_064.MI_WEP_Basic_064")));
    CustomStealth.MaterialMapBody.Add("Barrel", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_064.MI_WEP_Basic_064")));
    CustomStealth.MaterialMapBody.Add("Slide", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_001.MI_WEP_CarbonFibre_001")));
    CustomStealth.MaterialMapBody.Add("Hammer", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_064.MI_WEP_Basic_064")));
    CustomStealth.MaterialMapBody.Add("Handle", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_003.MI_WEP_Basic_003")));
    CustomStealth.MaterialMapBody.Add("Handle Base", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_003.MI_WEP_Basic_003")));
    CustomStealth.MaterialMapBody.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));
    CustomStealth.MaterialMapBody.Add("Rails", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_003.MI_WEP_Basic_003")));

    // Material Map Ironsights
    CustomStealth.MaterialMapIronsights.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_004.MI_WEP_Basic_004")));

    // Material Map Magazine
    CustomStealth.MaterialMapMagazine.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_004.MI_WEP_Basic_004")));
    CustomStealth.MaterialMapMagazine.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    CustomStealth.MaterialMapMagazine.Add("Body Rocket", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_061.MI_WEP_Basic_061")));
    CustomStealth.MaterialMapMagazine.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));

    // Material Map Muzzle
    CustomStealth.MaterialMapMuzzle.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_004.MI_WEP_Basic_004")));

    // Material Map Scope
    CustomStealth.MaterialMapScope.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_004.MI_WEP_Basic_004")));
    CustomStealth.MaterialMapScope.Add("Sight", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Dot_Yellow_01.MI_ATT_Sight_Dot_Yellow_01")));
    CustomStealth.MaterialMapScope.Add("Sight Zoomed", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Crosshair_005.MI_ATT_Sight_Crosshair_005")));
    CustomStealth.MaterialMapScope.Add("Fade Round", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round.MI_ATT_Scope_Fade_Round")));
    CustomStealth.MaterialMapScope.Add("Invisible", nullptr);
    CustomStealth.MaterialMapScope.Add("Unlit", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Unlit.MI_ATT_Scope_Unlit")));
    CustomStealth.MaterialMapScope.Add("Fade Square 02", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_02_EdgeFade.MI_ATT_Scope_02_EdgeFade")));
    CustomStealth.MaterialMapScope.Add("Fade Round 03", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_03_EdgeFade.MI_ATT_Scope_03_EdgeFade")));
    CustomStealth.MaterialMapScope.Add("Fade Square 04", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_04_EdgeFade.MI_ATT_Scope_04_EdgeFade")));
    CustomStealth.MaterialMapScope.Add("Fade Round 01", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_01.MI_ATT_Scope_Fade_Round_01")));
    CustomStealth.MaterialMapScope.Add("Fade Round 08", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_08.MI_ATT_Scope_Fade_Round_08")));

    // Material Map Laser
    CustomStealth.MaterialMapLaser.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_003.MI_WEP_Basic_003")));

    // Material Map Grip
    CustomStealth.MaterialMapGrip.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_004.MI_WEP_Basic_004")));


    CustomStealth.RowHandleFlashlightSetting = UFlashlightSettingsBPLibrary::GetFlashlightSettingsByName(EFlashlightSettingsName::Flashlight_Normal);
    CustomStealth.RowHandleLaserSightSetting = ULasersightSettingsBPLibrary::GetLasersightSettingsByName(ELasersightSettingsName::Laser_Normal);

	GWeaponSkinMap.Add(EWeaponSkinName::CustomStealth, CustomStealth);

    /// ---------------------------------------------------------------------------------------------------- ////

    // Custom Venomous
    FWeaponSkinEntry CustomVenomous;
    CustomVenomous.Name = EWeaponSkinName::CustomVenomous;
    
    // Material Map Body
    CustomVenomous.MaterialMapBody.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_014.MI_WEP_Camo_014")));
    CustomVenomous.MaterialMapBody.Add("Grip", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_014.MI_WEP_Camo_014")));
    CustomVenomous.MaterialMapBody.Add("Grip Front", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_014.MI_WEP_Camo_014")));
    CustomVenomous.MaterialMapBody.Add("Details", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_014.MI_WEP_Camo_014")));
    CustomVenomous.MaterialMapBody.Add("Bolt", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_014.MI_WEP_Camo_014")));
    CustomVenomous.MaterialMapBody.Add("Stock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_014.MI_WEP_Camo_014")));
    CustomVenomous.MaterialMapBody.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    CustomVenomous.MaterialMapBody.Add("Forestock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_014.MI_WEP_Camo_014")));
    CustomVenomous.MaterialMapBody.Add("Barrel", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_014.MI_WEP_Camo_014")));
    CustomVenomous.MaterialMapBody.Add("Slide", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_014.MI_WEP_Camo_014")));
    CustomVenomous.MaterialMapBody.Add("Hammer", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_032.MI_WEP_Basic_032")));
    CustomVenomous.MaterialMapBody.Add("Handle", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_014.MI_WEP_Camo_014")));
    CustomVenomous.MaterialMapBody.Add("Handle Base", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_014.MI_WEP_Camo_014")));
    CustomVenomous.MaterialMapBody.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));
    CustomVenomous.MaterialMapBody.Add("Rails", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_014.MI_WEP_Camo_014")));

    // Material Map Ironsights
    CustomVenomous.MaterialMapIronsights.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_014.MI_WEP_Camo_014")));

    // Material Map Magazine
    CustomVenomous.MaterialMapMagazine.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_014.MI_WEP_Camo_014")));
    CustomVenomous.MaterialMapMagazine.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    CustomVenomous.MaterialMapMagazine.Add("Body Rocket", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_061.MI_WEP_Basic_061")));
    CustomVenomous.MaterialMapMagazine.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));

    // Material Map Muzzle
    CustomVenomous.MaterialMapMuzzle.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_014.MI_WEP_Camo_014")));

    // Material Map Scope
    CustomVenomous.MaterialMapScope.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_032.MI_WEP_Basic_032")));
    CustomVenomous.MaterialMapScope.Add("Sight", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Square_Blue.MI_ATT_Sight_Square_Blue")));
    CustomVenomous.MaterialMapScope.Add("Sight Zoomed", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Crosshair_007.MI_ATT_Sight_Crosshair_007")));
    CustomVenomous.MaterialMapScope.Add("Fade Round", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round.MI_ATT_Scope_Fade_Round")));
    CustomVenomous.MaterialMapScope.Add("Invisible", nullptr);
    CustomVenomous.MaterialMapScope.Add("Unlit", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Unlit.MI_ATT_Scope_Unlit")));
    CustomVenomous.MaterialMapScope.Add("Fade Square 02", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_02_EdgeFade.MI_ATT_Scope_02_EdgeFade")));
    CustomVenomous.MaterialMapScope.Add("Fade Round 03", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_03_EdgeFade.MI_ATT_Scope_03_EdgeFade")));
    CustomVenomous.MaterialMapScope.Add("Fade Square 04", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_04_EdgeFade.MI_ATT_Scope_04_EdgeFade")));
    CustomVenomous.MaterialMapScope.Add("Fade Round 01", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_01.MI_ATT_Scope_Fade_Round_01")));
    CustomVenomous.MaterialMapScope.Add("Fade Round 08", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_08.MI_ATT_Scope_Fade_Round_08")));

    // Material Map Laser
    CustomVenomous.MaterialMapLaser.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_014.MI_WEP_Camo_014")));

    // Material Map Grip
    CustomVenomous.MaterialMapGrip.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_014.MI_WEP_Camo_014")));


    CustomVenomous.RowHandleFlashlightSetting = UFlashlightSettingsBPLibrary::GetFlashlightSettingsByName(EFlashlightSettingsName::Flashlight_Normal);
    CustomVenomous.RowHandleLaserSightSetting = ULasersightSettingsBPLibrary::GetLasersightSettingsByName(ELasersightSettingsName::Laser_Venomous);

	GWeaponSkinMap.Add(EWeaponSkinName::CustomVenomous, CustomVenomous);

    /// ---------------------------------------------------------------------------------------------------- ////

    // Custom Homing
    FWeaponSkinEntry CustomHoming;
    CustomHoming.Name = EWeaponSkinName::CustomHoming;
    
    // Material Map Body
    CustomHoming.MaterialMapBody.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_013.MI_WEP_Camo_013")));
    CustomHoming.MaterialMapBody.Add("Grip", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_004.MI_WEP_Basic_004")));
    CustomHoming.MaterialMapBody.Add("Grip Front", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_004.MI_WEP_Basic_004")));
    CustomHoming.MaterialMapBody.Add("Details", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_004.MI_WEP_Basic_004")));
    CustomHoming.MaterialMapBody.Add("Bolt", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_013.MI_WEP_Camo_013")));
    CustomHoming.MaterialMapBody.Add("Stock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_013.MI_WEP_Camo_013")));
    CustomHoming.MaterialMapBody.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    CustomHoming.MaterialMapBody.Add("Forestock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_013.MI_WEP_Camo_013")));
    CustomHoming.MaterialMapBody.Add("Barrel", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_004.MI_WEP_Basic_004")));
    CustomHoming.MaterialMapBody.Add("Slide", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_001.MI_WEP_CarbonFibre_001")));
    CustomHoming.MaterialMapBody.Add("Hammer", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_004.MI_WEP_Basic_004")));
    CustomHoming.MaterialMapBody.Add("Handle", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_013.MI_WEP_Camo_013")));
    CustomHoming.MaterialMapBody.Add("Handle Base", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_013.MI_WEP_Camo_013")));
    CustomHoming.MaterialMapBody.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));
    CustomHoming.MaterialMapBody.Add("Rails", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_013.MI_WEP_Camo_013")));

    // Material Map Ironsights
    CustomHoming.MaterialMapIronsights.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_013.MI_WEP_Camo_013")));

    // Material Map Magazine
    CustomHoming.MaterialMapMagazine.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_013.MI_WEP_Camo_013")));
    CustomHoming.MaterialMapMagazine.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    CustomHoming.MaterialMapMagazine.Add("Body Rocket", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_039.MI_WEP_Basic_039")));
    CustomHoming.MaterialMapMagazine.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));

    // Material Map Muzzle
    CustomHoming.MaterialMapMuzzle.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_013.MI_WEP_Camo_013")));

    // Material Map Scope
    CustomHoming.MaterialMapScope.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_013.MI_WEP_Camo_013")));
    CustomHoming.MaterialMapScope.Add("Sight", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Square_Orange.MI_ATT_Sight_Square_Orange")));
    CustomHoming.MaterialMapScope.Add("Sight Zoomed", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Crosshair_008.MI_ATT_Sight_Crosshair_008")));
    CustomHoming.MaterialMapScope.Add("Fade Round", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round.MI_ATT_Scope_Fade_Round")));
    CustomHoming.MaterialMapScope.Add("Invisible", nullptr);
    CustomHoming.MaterialMapScope.Add("Unlit", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Unlit.MI_ATT_Scope_Unlit")));
    CustomHoming.MaterialMapScope.Add("Fade Square 02", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_02_EdgeFade.MI_ATT_Scope_02_EdgeFade")));
    CustomHoming.MaterialMapScope.Add("Fade Round 03", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_03_EdgeFade.MI_ATT_Scope_03_EdgeFade")));
    CustomHoming.MaterialMapScope.Add("Fade Square 04", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_04_EdgeFade.MI_ATT_Scope_04_EdgeFade")));
    CustomHoming.MaterialMapScope.Add("Fade Round 01", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_01.MI_ATT_Scope_Fade_Round_01")));
    CustomHoming.MaterialMapScope.Add("Fade Round 08", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_08.MI_ATT_Scope_Fade_Round_08")));

    // Material Map Laser
    CustomHoming.MaterialMapLaser.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_039.MI_WEP_Basic_039")));

    // Material Map Grip
    CustomHoming.MaterialMapGrip.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_013.MI_WEP_Camo_013")));


    CustomHoming.RowHandleFlashlightSetting = UFlashlightSettingsBPLibrary::GetFlashlightSettingsByName(EFlashlightSettingsName::Flashlight_Normal);
    CustomHoming.RowHandleLaserSightSetting = ULasersightSettingsBPLibrary::GetLasersightSettingsByName(ELasersightSettingsName::Laser_Normal);

	GWeaponSkinMap.Add(EWeaponSkinName::CustomHoming, CustomHoming);

    /// ---------------------------------------------------------------------------------------------------- ////

    // Custom Tech
    FWeaponSkinEntry CustomTech;
    CustomTech.Name = EWeaponSkinName::CustomTech;
    
    // Material Map Body
    CustomTech.MaterialMapBody.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_010.MI_WEP_Camo_010")));
    CustomTech.MaterialMapBody.Add("Grip", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_007.MI_WEP_CarbonFibre_007")));
    CustomTech.MaterialMapBody.Add("Grip Front", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_007.MI_WEP_CarbonFibre_007")));
    CustomTech.MaterialMapBody.Add("Details", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_004.MI_WEP_Basic_004")));
    CustomTech.MaterialMapBody.Add("Bolt", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));
    CustomTech.MaterialMapBody.Add("Stock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_007.MI_WEP_CarbonFibre_007")));
    CustomTech.MaterialMapBody.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    CustomTech.MaterialMapBody.Add("Forestock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_007.MI_WEP_CarbonFibre_007")));
    CustomTech.MaterialMapBody.Add("Barrel", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_007.MI_WEP_CarbonFibre_007")));
    CustomTech.MaterialMapBody.Add("Slide", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_001.MI_WEP_CarbonFibre_001")));
    CustomTech.MaterialMapBody.Add("Hammer", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_001.MI_WEP_CarbonFibre_001")));
    CustomTech.MaterialMapBody.Add("Handle", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_010.MI_WEP_Camo_010")));
    CustomTech.MaterialMapBody.Add("Handle Base", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_010.MI_WEP_Camo_010")));
    CustomTech.MaterialMapBody.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));
    CustomTech.MaterialMapBody.Add("Rails", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_010.MI_WEP_Camo_010")));

    // Material Map Ironsights
    CustomTech.MaterialMapIronsights.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_003.MI_WEP_Basic_003")));

    // Material Map Magazine
    CustomTech.MaterialMapMagazine.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_010.MI_WEP_Camo_010")));
    CustomTech.MaterialMapMagazine.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    CustomTech.MaterialMapMagazine.Add("Body Rocket", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_061.MI_WEP_Basic_061")));
    CustomTech.MaterialMapMagazine.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));

    // Material Map Muzzle
    CustomTech.MaterialMapMuzzle.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_010.MI_WEP_Camo_010")));

    // Material Map Scope
    CustomTech.MaterialMapScope.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_010.MI_WEP_Camo_010")));
    CustomTech.MaterialMapScope.Add("Sight", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Square_Red.MI_ATT_Sight_Square_Red")));
    CustomTech.MaterialMapScope.Add("Sight Zoomed", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Crosshair_009.MI_ATT_Sight_Crosshair_009")));
    CustomTech.MaterialMapScope.Add("Fade Round", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round.MI_ATT_Scope_Fade_Round")));
    CustomTech.MaterialMapScope.Add("Invisible", nullptr);
    CustomTech.MaterialMapScope.Add("Unlit", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Unlit.MI_ATT_Scope_Unlit")));
    CustomTech.MaterialMapScope.Add("Fade Square 02", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_02_EdgeFade.MI_ATT_Scope_02_EdgeFade")));
    CustomTech.MaterialMapScope.Add("Fade Round 03", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_03_EdgeFade.MI_ATT_Scope_03_EdgeFade")));
    CustomTech.MaterialMapScope.Add("Fade Square 04", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_04_EdgeFade.MI_ATT_Scope_04_EdgeFade")));
    CustomTech.MaterialMapScope.Add("Fade Round 01", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_01.MI_ATT_Scope_Fade_Round_01")));
    CustomTech.MaterialMapScope.Add("Fade Round 08", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_08.MI_ATT_Scope_Fade_Round_08")));

    // Material Map Laser
    CustomTech.MaterialMapLaser.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_010.MI_WEP_Camo_010")));

    // Material Map Grip
    CustomTech.MaterialMapGrip.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_010.MI_WEP_Camo_010")));


    CustomTech.RowHandleFlashlightSetting = UFlashlightSettingsBPLibrary::GetFlashlightSettingsByName(EFlashlightSettingsName::Flashlight_Normal);
    CustomTech.RowHandleLaserSightSetting = ULasersightSettingsBPLibrary::GetLasersightSettingsByName(ELasersightSettingsName::Laser_Normal);

	GWeaponSkinMap.Add(EWeaponSkinName::CustomTech, CustomTech);

    /// ---------------------------------------------------------------------------------------------------- ////

    // Custom Citrus
    FWeaponSkinEntry CustomCitrus;
    CustomCitrus.Name = EWeaponSkinName::CustomCitrus;
    
    // Material Map Body
    CustomCitrus.MaterialMapBody.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Striped/MI_WEP_Striped_005.MI_WEP_Striped_005")));
    CustomCitrus.MaterialMapBody.Add("Grip", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));
    CustomCitrus.MaterialMapBody.Add("Grip Front", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));
    CustomCitrus.MaterialMapBody.Add("Details", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));
    CustomCitrus.MaterialMapBody.Add("Bolt", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));
    CustomCitrus.MaterialMapBody.Add("Stock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Striped/MI_WEP_Striped_005.MI_WEP_Striped_005")));
    CustomCitrus.MaterialMapBody.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    CustomCitrus.MaterialMapBody.Add("Forestock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));
    CustomCitrus.MaterialMapBody.Add("Barrel", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Striped/MI_WEP_Striped_005.MI_WEP_Striped_005")));
    CustomCitrus.MaterialMapBody.Add("Slide", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));
    CustomCitrus.MaterialMapBody.Add("Hammer", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));
    CustomCitrus.MaterialMapBody.Add("Handle", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Striped/MI_WEP_Striped_005.MI_WEP_Striped_005")));
    CustomCitrus.MaterialMapBody.Add("Handle Base", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Striped/MI_WEP_Striped_005.MI_WEP_Striped_005")));
    CustomCitrus.MaterialMapBody.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));
    CustomCitrus.MaterialMapBody.Add("Rails", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Striped/MI_WEP_Striped_005.MI_WEP_Striped_005")));

    // Material Map Ironsights
    CustomCitrus.MaterialMapIronsights.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Striped/MI_WEP_Striped_005.MI_WEP_Striped_005")));

    // Material Map Magazine
    CustomCitrus.MaterialMapMagazine.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));
    CustomCitrus.MaterialMapMagazine.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    CustomCitrus.MaterialMapMagazine.Add("Body Rocket", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_061.MI_WEP_Basic_061")));
    CustomCitrus.MaterialMapMagazine.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));

    // Material Map Muzzle
    CustomCitrus.MaterialMapMuzzle.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Striped/MI_WEP_Striped_005.MI_WEP_Striped_005")));

    // Material Map Scope
    CustomCitrus.MaterialMapScope.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Striped/MI_WEP_Striped_005.MI_WEP_Striped_005")));
    CustomCitrus.MaterialMapScope.Add("Sight", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Square_White.MI_ATT_Sight_Square_White")));
    CustomCitrus.MaterialMapScope.Add("Sight Zoomed", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Crosshair_010.MI_ATT_Sight_Crosshair_010")));
    CustomCitrus.MaterialMapScope.Add("Fade Round", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round.MI_ATT_Scope_Fade_Round")));
    CustomCitrus.MaterialMapScope.Add("Invisible", nullptr);
    CustomCitrus.MaterialMapScope.Add("Unlit", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Unlit.MI_ATT_Scope_Unlit")));
    CustomCitrus.MaterialMapScope.Add("Fade Square 02", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_02_EdgeFade.MI_ATT_Scope_02_EdgeFade")));
    CustomCitrus.MaterialMapScope.Add("Fade Round 03", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_03_EdgeFade.MI_ATT_Scope_03_EdgeFade")));
    CustomCitrus.MaterialMapScope.Add("Fade Square 04", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_04_EdgeFade.MI_ATT_Scope_04_EdgeFade")));
    CustomCitrus.MaterialMapScope.Add("Fade Round 01", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_01.MI_ATT_Scope_Fade_Round_01")));
    CustomCitrus.MaterialMapScope.Add("Fade Round 08", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_08.MI_ATT_Scope_Fade_Round_08")));

    // Material Map Laser
    CustomCitrus.MaterialMapLaser.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Striped/MI_WEP_Striped_005.MI_WEP_Striped_005")));

    // Material Map Grip
    CustomCitrus.MaterialMapGrip.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Striped/MI_WEP_Striped_005.MI_WEP_Striped_005")));


    CustomCitrus.RowHandleFlashlightSetting = UFlashlightSettingsBPLibrary::GetFlashlightSettingsByName(EFlashlightSettingsName::Flashlight_Normal);
    CustomCitrus.RowHandleLaserSightSetting = ULasersightSettingsBPLibrary::GetLasersightSettingsByName(ELasersightSettingsName::Laser_Yellow);

	GWeaponSkinMap.Add(EWeaponSkinName::CustomCitrus, CustomCitrus);

    /// ---------------------------------------------------------------------------------------------------- ////

    // Custom Tactical
    FWeaponSkinEntry CustomTactical;
    CustomTactical.Name = EWeaponSkinName::CustomTactical;
    
    // Material Map Body
    CustomTactical.MaterialMapBody.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_024.MI_WEP_Camo_024")));
    CustomTactical.MaterialMapBody.Add("Grip", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_004.MI_WEP_Basic_004")));
    CustomTactical.MaterialMapBody.Add("Grip Front", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_024.MI_WEP_Camo_024")));
    CustomTactical.MaterialMapBody.Add("Details", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_004.MI_WEP_Basic_004")));
    CustomTactical.MaterialMapBody.Add("Bolt", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_004.MI_WEP_Basic_004")));
    CustomTactical.MaterialMapBody.Add("Stock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_024.MI_WEP_Camo_024")));
    CustomTactical.MaterialMapBody.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    CustomTactical.MaterialMapBody.Add("Forestock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_024.MI_WEP_Camo_024")));
    CustomTactical.MaterialMapBody.Add("Barrel", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_024.MI_WEP_Camo_024")));
    CustomTactical.MaterialMapBody.Add("Slide", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_024.MI_WEP_Camo_024")));
    CustomTactical.MaterialMapBody.Add("Hammer", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_003.MI_WEP_Basic_003")));
    CustomTactical.MaterialMapBody.Add("Handle", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_024.MI_WEP_Camo_024")));
    CustomTactical.MaterialMapBody.Add("Handle Base", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_024.MI_WEP_Camo_024")));
    CustomTactical.MaterialMapBody.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));
    CustomTactical.MaterialMapBody.Add("Rails", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_024.MI_WEP_Camo_024")));

    // Material Map Ironsights
    CustomTactical.MaterialMapIronsights.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_024.MI_WEP_Camo_024")));

    // Material Map Magazine
    CustomTactical.MaterialMapMagazine.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Gradient/MI_WEP_Gradient_010.MI_WEP_Gradient_010")));
    CustomTactical.MaterialMapMagazine.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    CustomTactical.MaterialMapMagazine.Add("Body Rocket", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_061.MI_WEP_Basic_061")));
    CustomTactical.MaterialMapMagazine.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));

    // Material Map Muzzle
    CustomTactical.MaterialMapMuzzle.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_024.MI_WEP_Camo_024")));

    // Material Map Scope
    CustomTactical.MaterialMapScope.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_024.MI_WEP_Camo_024")));
    CustomTactical.MaterialMapScope.Add("Sight", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Dot_Blue.MI_ATT_Sight_Dot_Blue")));
    CustomTactical.MaterialMapScope.Add("Sight Zoomed", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Crosshair_001.MI_ATT_Sight_Crosshair_001")));
    CustomTactical.MaterialMapScope.Add("Fade Round", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round.MI_ATT_Scope_Fade_Round")));
    CustomTactical.MaterialMapScope.Add("Invisible", nullptr);
    CustomTactical.MaterialMapScope.Add("Unlit", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Unlit.MI_ATT_Scope_Unlit")));
    CustomTactical.MaterialMapScope.Add("Fade Square 02", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_02_EdgeFade.MI_ATT_Scope_02_EdgeFade")));
    CustomTactical.MaterialMapScope.Add("Fade Round 03", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_03_EdgeFade.MI_ATT_Scope_03_EdgeFade")));
    CustomTactical.MaterialMapScope.Add("Fade Square 04", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_04_EdgeFade.MI_ATT_Scope_04_EdgeFade")));
    CustomTactical.MaterialMapScope.Add("Fade Round 01", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_01.MI_ATT_Scope_Fade_Round_01")));
    CustomTactical.MaterialMapScope.Add("Fade Round 08", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_08.MI_ATT_Scope_Fade_Round_08")));

    // Material Map Laser
    CustomTactical.MaterialMapLaser.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_029.MI_WEP_Basic_029")));

    // Material Map Grip
    CustomTactical.MaterialMapGrip.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_024.MI_WEP_Camo_024")));


    CustomTactical.RowHandleFlashlightSetting = UFlashlightSettingsBPLibrary::GetFlashlightSettingsByName(EFlashlightSettingsName::Flashlight_Tactical);
    CustomTactical.RowHandleLaserSightSetting = ULasersightSettingsBPLibrary::GetLasersightSettingsByName(ELasersightSettingsName::Laser_Tactical);

	GWeaponSkinMap.Add(EWeaponSkinName::CustomTactical, CustomTactical);

    /// ---------------------------------------------------------------------------------------------------- ////

    // Custom Evil
    FWeaponSkinEntry CustomEvil;
    CustomEvil.Name = EWeaponSkinName::CustomEvil;
    
    // Material Map Body
    CustomEvil.MaterialMapBody.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_010.MI_WEP_Camo_010")));
    CustomEvil.MaterialMapBody.Add("Grip", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_003.MI_WEP_Basic_003")));
    CustomEvil.MaterialMapBody.Add("Grip Front", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_003.MI_WEP_Basic_003")));
    CustomEvil.MaterialMapBody.Add("Details", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_014.MI_WEP_Basic_014")));
    CustomEvil.MaterialMapBody.Add("Bolt", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_014.MI_WEP_Basic_014")));
    CustomEvil.MaterialMapBody.Add("Stock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_010.MI_WEP_Camo_010")));
    CustomEvil.MaterialMapBody.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    CustomEvil.MaterialMapBody.Add("Forestock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_014.MI_WEP_Basic_014")));
    CustomEvil.MaterialMapBody.Add("Barrel", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_014.MI_WEP_Basic_014")));
    CustomEvil.MaterialMapBody.Add("Slide", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_001.MI_WEP_CarbonFibre_001")));
    CustomEvil.MaterialMapBody.Add("Hammer", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_014.MI_WEP_Basic_014")));
    CustomEvil.MaterialMapBody.Add("Handle", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_010.MI_WEP_Camo_010")));
    CustomEvil.MaterialMapBody.Add("Handle Base", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_010.MI_WEP_Camo_010")));
    CustomEvil.MaterialMapBody.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));
    CustomEvil.MaterialMapBody.Add("Rails", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_010.MI_WEP_Camo_010")));

    // Material Map Ironsights
    CustomEvil.MaterialMapIronsights.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_014.MI_WEP_Basic_014")));

    // Material Map Magazine
    CustomEvil.MaterialMapMagazine.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_010.MI_WEP_Camo_010")));
    CustomEvil.MaterialMapMagazine.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    CustomEvil.MaterialMapMagazine.Add("Body Rocket", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_061.MI_WEP_Basic_061")));
    CustomEvil.MaterialMapMagazine.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));

    // Material Map Muzzle
    CustomEvil.MaterialMapMuzzle.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_010.MI_WEP_Camo_010")));

    // Material Map Scope
    CustomEvil.MaterialMapScope.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_019.MI_WEP_Camo_019")));
    CustomEvil.MaterialMapScope.Add("Sight", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Dot_Blue_01.MI_ATT_Sight_Dot_Blue_01")));
    CustomEvil.MaterialMapScope.Add("Sight Zoomed", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Crosshair_002.MI_ATT_Sight_Crosshair_002")));
    CustomEvil.MaterialMapScope.Add("Fade Round", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round.MI_ATT_Scope_Fade_Round")));
    CustomEvil.MaterialMapScope.Add("Invisible", nullptr);
    CustomEvil.MaterialMapScope.Add("Unlit", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Unlit.MI_ATT_Scope_Unlit")));
    CustomEvil.MaterialMapScope.Add("Fade Square 02", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_02_EdgeFade.MI_ATT_Scope_02_EdgeFade")));
    CustomEvil.MaterialMapScope.Add("Fade Round 03", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_03_EdgeFade.MI_ATT_Scope_03_EdgeFade")));
    CustomEvil.MaterialMapScope.Add("Fade Square 04", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_04_EdgeFade.MI_ATT_Scope_04_EdgeFade")));
    CustomEvil.MaterialMapScope.Add("Fade Round 01", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_01.MI_ATT_Scope_Fade_Round_01")));
    CustomEvil.MaterialMapScope.Add("Fade Round 08", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_08.MI_ATT_Scope_Fade_Round_08")));

    // Material Map Laser
    CustomEvil.MaterialMapLaser.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_010.MI_WEP_Camo_010")));

    // Material Map Grip
    CustomEvil.MaterialMapGrip.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_010.MI_WEP_Camo_010")));
	
    CustomEvil.RowHandleFlashlightSetting = UFlashlightSettingsBPLibrary::GetFlashlightSettingsByName(EFlashlightSettingsName::Flashlight_Normal);
    CustomEvil.RowHandleLaserSightSetting = ULasersightSettingsBPLibrary::GetLasersightSettingsByName(ELasersightSettingsName::Laser_Evil);

	GWeaponSkinMap.Add(EWeaponSkinName::CustomEvil, CustomEvil);

    /// ---------------------------------------------------------------------------------------------------- ////

    // Custom Modern
    FWeaponSkinEntry CustomModern;
    CustomModern.Name = EWeaponSkinName::CustomModern;
    
    // Material Map Body
    CustomModern.MaterialMapBody.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_006.MI_WEP_Camo_006")));
    CustomModern.MaterialMapBody.Add("Grip", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_006.MI_WEP_Camo_006")));
    CustomModern.MaterialMapBody.Add("Grip Front", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_007.MI_WEP_Camo_007")));
    CustomModern.MaterialMapBody.Add("Details", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_058.MI_WEP_Basic_058")));
    CustomModern.MaterialMapBody.Add("Bolt", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_058.MI_WEP_Basic_058")));
    CustomModern.MaterialMapBody.Add("Stock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_006.MI_WEP_Camo_006")));
    CustomModern.MaterialMapBody.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    CustomModern.MaterialMapBody.Add("Forestock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_058.MI_WEP_Basic_058")));
    CustomModern.MaterialMapBody.Add("Barrel", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_006.MI_WEP_Camo_006")));
    CustomModern.MaterialMapBody.Add("Slide", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_001.MI_WEP_CarbonFibre_001")));
    CustomModern.MaterialMapBody.Add("Hammer", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_058.MI_WEP_Basic_058")));
    CustomModern.MaterialMapBody.Add("Handle", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_006.MI_WEP_Camo_006")));
    CustomModern.MaterialMapBody.Add("Handle Base", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_006.MI_WEP_Camo_006")));
    CustomModern.MaterialMapBody.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));
    CustomModern.MaterialMapBody.Add("Rails", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_006.MI_WEP_Camo_006")));

    // Material Map Ironsights
    CustomModern.MaterialMapIronsights.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_006.MI_WEP_Camo_006")));

    // Material Map Magazine
    CustomModern.MaterialMapMagazine.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_006.MI_WEP_Camo_006")));
    CustomModern.MaterialMapMagazine.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    CustomModern.MaterialMapMagazine.Add("Body Rocket", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_061.MI_WEP_Basic_061")));
    CustomModern.MaterialMapMagazine.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));

    // Material Map Muzzle
    CustomModern.MaterialMapMuzzle.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_006.MI_WEP_Camo_006")));

    // Material Map Scope
    CustomModern.MaterialMapScope.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_006.MI_WEP_Camo_006")));
    CustomModern.MaterialMapScope.Add("Sight", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Dot_Red_01.MI_ATT_Sight_Dot_Red_01")));
    CustomModern.MaterialMapScope.Add("Sight Zoomed", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Crosshair_003.MI_ATT_Sight_Crosshair_003")));
    CustomModern.MaterialMapScope.Add("Fade Round", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round.MI_ATT_Scope_Fade_Round")));
    CustomModern.MaterialMapScope.Add("Invisible", nullptr);
    CustomModern.MaterialMapScope.Add("Unlit", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Unlit.MI_ATT_Scope_Unlit")));
    CustomModern.MaterialMapScope.Add("Fade Square 02", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_02_EdgeFade.MI_ATT_Scope_02_EdgeFade")));
    CustomModern.MaterialMapScope.Add("Fade Round 03", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_03_EdgeFade.MI_ATT_Scope_03_EdgeFade")));
    CustomModern.MaterialMapScope.Add("Fade Square 04", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_04_EdgeFade.MI_ATT_Scope_04_EdgeFade")));
    CustomModern.MaterialMapScope.Add("Fade Round 01", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_01.MI_ATT_Scope_Fade_Round_01")));
    CustomModern.MaterialMapScope.Add("Fade Round 08", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_08.MI_ATT_Scope_Fade_Round_08")));

    // Material Map Laser
    CustomModern.MaterialMapLaser.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_006.MI_WEP_Camo_006")));

    // Material Map Grip
    CustomModern.MaterialMapGrip.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_006.MI_WEP_Camo_006")));


    CustomModern.RowHandleFlashlightSetting = UFlashlightSettingsBPLibrary::GetFlashlightSettingsByName(EFlashlightSettingsName::Flashlight_Normal);
    CustomModern.RowHandleLaserSightSetting = ULasersightSettingsBPLibrary::GetLasersightSettingsByName(ELasersightSettingsName::Laser_Normal);
	
	GWeaponSkinMap.Add(EWeaponSkinName::CustomModern, CustomModern);

    /// ---------------------------------------------------------------------------------------------------- ////

    // Custom Armored
    FWeaponSkinEntry CustomArmored;
    CustomArmored.Name = EWeaponSkinName::CustomArmored;
    
    // Material Map Body
    CustomArmored.MaterialMapBody.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/BrushedSteel/MI_WEP_Steel_Brushed_001.MI_WEP_Steel_Brushed_001")));
    CustomArmored.MaterialMapBody.Add("Grip", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/BrushedSteel/MI_WEP_Steel_Brushed_001.MI_WEP_Steel_Brushed_001")));
    CustomArmored.MaterialMapBody.Add("Grip Front", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_004.MI_WEP_Basic_004")));
    CustomArmored.MaterialMapBody.Add("Details", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_004.MI_WEP_Basic_004")));
    CustomArmored.MaterialMapBody.Add("Bolt", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_004.MI_WEP_Basic_004")));
    CustomArmored.MaterialMapBody.Add("Stock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/BrushedSteel/MI_WEP_Steel_Brushed_001.MI_WEP_Steel_Brushed_001")));
    CustomArmored.MaterialMapBody.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    CustomArmored.MaterialMapBody.Add("Forestock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/BrushedSteel/MI_WEP_Steel_Brushed_001.MI_WEP_Steel_Brushed_001")));
    CustomArmored.MaterialMapBody.Add("Barrel", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/BrushedSteel/MI_WEP_Steel_Brushed_001.MI_WEP_Steel_Brushed_001")));
    CustomArmored.MaterialMapBody.Add("Slide", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_001.MI_WEP_CarbonFibre_001")));
    CustomArmored.MaterialMapBody.Add("Hammer", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/BrushedSteel/MI_WEP_Steel_Brushed_001.MI_WEP_Steel_Brushed_001")));
    CustomArmored.MaterialMapBody.Add("Handle", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/BrushedSteel/MI_WEP_Steel_Brushed_001.MI_WEP_Steel_Brushed_001")));
    CustomArmored.MaterialMapBody.Add("Handle Base", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/BrushedSteel/MI_WEP_Steel_Brushed_001.MI_WEP_Steel_Brushed_001")));
    CustomArmored.MaterialMapBody.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));
    CustomArmored.MaterialMapBody.Add("Rails", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/BrushedSteel/MI_WEP_Steel_Brushed_001.MI_WEP_Steel_Brushed_001")));

    // Material Map Ironsights
    CustomArmored.MaterialMapIronsights.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/BrushedSteel/MI_WEP_Steel_Brushed_001.MI_WEP_Steel_Brushed_001")));

    // Material Map Magazine
    CustomArmored.MaterialMapMagazine.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/BrushedSteel/MI_WEP_Steel_Brushed_014.MI_WEP_Steel_Brushed_014")));
    CustomArmored.MaterialMapMagazine.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    CustomArmored.MaterialMapMagazine.Add("Body Rocket", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_061.MI_WEP_Basic_061")));
    CustomArmored.MaterialMapMagazine.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));

    // Material Map Muzzle
    CustomArmored.MaterialMapMuzzle.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/BrushedSteel/MI_WEP_Steel_Brushed_001.MI_WEP_Steel_Brushed_001")));

    // Material Map Scope
    CustomArmored.MaterialMapScope.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/BrushedSteel/MI_WEP_Steel_Brushed_001.MI_WEP_Steel_Brushed_001")));
    CustomArmored.MaterialMapScope.Add("Sight", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Dot_Red_02.MI_ATT_Sight_Dot_Red_02")));
    CustomArmored.MaterialMapScope.Add("Sight Zoomed", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Crosshair_004.MI_ATT_Sight_Crosshair_004")));
    CustomArmored.MaterialMapScope.Add("Fade Round", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round.MI_ATT_Scope_Fade_Round")));
    CustomArmored.MaterialMapScope.Add("Invisible", nullptr);
    CustomArmored.MaterialMapScope.Add("Unlit", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Unlit.MI_ATT_Scope_Unlit")));
    CustomArmored.MaterialMapScope.Add("Fade Square 02", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_02_EdgeFade.MI_ATT_Scope_02_EdgeFade")));
    CustomArmored.MaterialMapScope.Add("Fade Round 03", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_03_EdgeFade.MI_ATT_Scope_03_EdgeFade")));
    CustomArmored.MaterialMapScope.Add("Fade Square 04", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_04_EdgeFade.MI_ATT_Scope_04_EdgeFade")));
    CustomArmored.MaterialMapScope.Add("Fade Round 01", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_01.MI_ATT_Scope_Fade_Round_01")));
    CustomArmored.MaterialMapScope.Add("Fade Round 08", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_08.MI_ATT_Scope_Fade_Round_08")));

    // Material Map Laser
    CustomArmored.MaterialMapLaser.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_010.MI_WEP_Basic_010")));

    // Material Map Grip
    CustomArmored.MaterialMapGrip.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/BrushedSteel/MI_WEP_Steel_Brushed_001.MI_WEP_Steel_Brushed_001")));


    CustomArmored.RowHandleFlashlightSetting = UFlashlightSettingsBPLibrary::GetFlashlightSettingsByName(EFlashlightSettingsName::Flashlight_Normal);
    CustomArmored.RowHandleLaserSightSetting = ULasersightSettingsBPLibrary::GetLasersightSettingsByName(ELasersightSettingsName::Laser_Normal);

    GWeaponSkinMap.Add(EWeaponSkinName::CustomArmored, CustomArmored);

    /// ---------------------------------------------------------------------------------------------------- ////

    // Custom Hitman
    FWeaponSkinEntry CustomHitman;
    CustomHitman.Name = EWeaponSkinName::CustomHitman;
    
    // Material Map Body
    CustomHitman.MaterialMapBody.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/Digital/MI_WEP_Camo_Digital_010.MI_WEP_Camo_Digital_010")));
    CustomHitman.MaterialMapBody.Add("Grip", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_003.MI_WEP_Basic_003")));
    CustomHitman.MaterialMapBody.Add("Grip Front", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_003.MI_WEP_Basic_003")));
    CustomHitman.MaterialMapBody.Add("Details", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_003.MI_WEP_Basic_003")));
    CustomHitman.MaterialMapBody.Add("Bolt", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_003.MI_WEP_Basic_003")));
    CustomHitman.MaterialMapBody.Add("Stock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_003.MI_WEP_Basic_003")));
    CustomHitman.MaterialMapBody.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    CustomHitman.MaterialMapBody.Add("Forestock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_003.MI_WEP_Basic_003")));
    CustomHitman.MaterialMapBody.Add("Barrel", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/Digital/MI_WEP_Camo_Digital_010.MI_WEP_Camo_Digital_010")));
    CustomHitman.MaterialMapBody.Add("Slide", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_001.MI_WEP_CarbonFibre_001")));
    CustomHitman.MaterialMapBody.Add("Hammer", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/Digital/MI_WEP_Camo_Digital_010.MI_WEP_Camo_Digital_010")));
    CustomHitman.MaterialMapBody.Add("Handle", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/Digital/MI_WEP_Camo_Digital_010.MI_WEP_Camo_Digital_010")));
    CustomHitman.MaterialMapBody.Add("Handle Base", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/Digital/MI_WEP_Camo_Digital_010.MI_WEP_Camo_Digital_010")));
    CustomHitman.MaterialMapBody.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));
    CustomHitman.MaterialMapBody.Add("Rails", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/Digital/MI_WEP_Camo_Digital_010.MI_WEP_Camo_Digital_010")));

    // Material Map Ironsights
    CustomHitman.MaterialMapIronsights.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/Digital/MI_WEP_Camo_Digital_010.MI_WEP_Camo_Digital_010")));

    // Material Map Magazine
    CustomHitman.MaterialMapMagazine.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/Digital/MI_WEP_Camo_Digital_010.MI_WEP_Camo_Digital_010")));
    CustomHitman.MaterialMapMagazine.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    CustomHitman.MaterialMapMagazine.Add("Body Rocket", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_061.MI_WEP_Basic_061")));
    CustomHitman.MaterialMapMagazine.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));

    // Material Map Muzzle
    CustomHitman.MaterialMapMuzzle.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/Digital/MI_WEP_Camo_Digital_010.MI_WEP_Camo_Digital_010")));

    // Material Map Scope
    CustomHitman.MaterialMapScope.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/Digital/MI_WEP_Camo_Digital_010.MI_WEP_Camo_Digital_010")));
    CustomHitman.MaterialMapScope.Add("Sight", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Dot_Yellow_01.MI_ATT_Sight_Dot_Yellow_01")));
    CustomHitman.MaterialMapScope.Add("Sight Zoomed", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Crosshair_005.MI_ATT_Sight_Crosshair_005")));
    CustomHitman.MaterialMapScope.Add("Fade Round", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round.MI_ATT_Scope_Fade_Round")));
    CustomHitman.MaterialMapScope.Add("Invisible", nullptr);
    CustomHitman.MaterialMapScope.Add("Unlit", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Unlit.MI_ATT_Scope_Unlit")));
    CustomHitman.MaterialMapScope.Add("Fade Square 02", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_02_EdgeFade.MI_ATT_Scope_02_EdgeFade")));
    CustomHitman.MaterialMapScope.Add("Fade Round 03", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_03_EdgeFade.MI_ATT_Scope_03_EdgeFade")));
    CustomHitman.MaterialMapScope.Add("Fade Square 04", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_04_EdgeFade.MI_ATT_Scope_04_EdgeFade")));
    CustomHitman.MaterialMapScope.Add("Fade Round 01", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_01.MI_ATT_Scope_Fade_Round_01")));
    CustomHitman.MaterialMapScope.Add("Fade Round 08", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_08.MI_ATT_Scope_Fade_Round_08")));

    // Material Map Laser
    CustomHitman.MaterialMapLaser.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_010.MI_WEP_Basic_010")));

    // Material Map Grip
    CustomHitman.MaterialMapGrip.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/Digital/MI_WEP_Camo_Digital_010.MI_WEP_Camo_Digital_010")));


    CustomHitman.RowHandleFlashlightSetting = UFlashlightSettingsBPLibrary::GetFlashlightSettingsByName(EFlashlightSettingsName::Flashlight_Normal);
    CustomHitman.RowHandleLaserSightSetting = ULasersightSettingsBPLibrary::GetLasersightSettingsByName(ELasersightSettingsName::Laser_Normal);

	GWeaponSkinMap.Add(EWeaponSkinName::CustomHitman, CustomHitman);

    /// ---------------------------------------------------------------------------------------------------- ////

    // Custom Breach
    FWeaponSkinEntry CustomBreach;
    CustomBreach.Name = EWeaponSkinName::CustomBreach;
    
    // Material Map Body
    CustomBreach.MaterialMapBody.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_003.MI_WEP_Camo_003")));
    CustomBreach.MaterialMapBody.Add("Grip", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_050.MI_WEP_Basic_050")));
    CustomBreach.MaterialMapBody.Add("Grip Front", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_005.MI_WEP_Basic_005")));
    CustomBreach.MaterialMapBody.Add("Details", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_005.MI_WEP_Basic_005")));
    CustomBreach.MaterialMapBody.Add("Bolt", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_005.MI_WEP_Basic_005")));
    CustomBreach.MaterialMapBody.Add("Stock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_050.MI_WEP_Basic_050")));
    CustomBreach.MaterialMapBody.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    CustomBreach.MaterialMapBody.Add("Forestock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_003.MI_WEP_CarbonFibre_003")));
    CustomBreach.MaterialMapBody.Add("Barrel", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_050.MI_WEP_Basic_050")));
    CustomBreach.MaterialMapBody.Add("Slide", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_001.MI_WEP_CarbonFibre_001")));
    CustomBreach.MaterialMapBody.Add("Hammer", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_050.MI_WEP_Basic_050")));
    CustomBreach.MaterialMapBody.Add("Handle", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_050.MI_WEP_Basic_050")));
    CustomBreach.MaterialMapBody.Add("Handle Base", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_050.MI_WEP_Basic_050")));
    CustomBreach.MaterialMapBody.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));
    CustomBreach.MaterialMapBody.Add("Rails", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_003.MI_WEP_Camo_003")));

    // Material Map Ironsights
    CustomBreach.MaterialMapIronsights.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_003.MI_WEP_Camo_003")));

    // Material Map Magazine
    CustomBreach.MaterialMapMagazine.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_003.MI_WEP_Camo_003")));
    CustomBreach.MaterialMapMagazine.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    CustomBreach.MaterialMapMagazine.Add("Body Rocket", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_061.MI_WEP_Basic_061")));
    CustomBreach.MaterialMapMagazine.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));

    // Material Map Muzzle
    CustomBreach.MaterialMapMuzzle.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_003.MI_WEP_Camo_003")));

    // Material Map Scope
    CustomBreach.MaterialMapScope.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_003.MI_WEP_Camo_003")));
    CustomBreach.MaterialMapScope.Add("Sight", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Neon.MI_ATT_Sight_Neon")));
    CustomBreach.MaterialMapScope.Add("Sight Zoomed", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Crosshair_006.MI_ATT_Sight_Crosshair_006")));
    CustomBreach.MaterialMapScope.Add("Fade Round", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round.MI_ATT_Scope_Fade_Round")));
    CustomBreach.MaterialMapScope.Add("Invisible", nullptr);
    CustomBreach.MaterialMapScope.Add("Unlit", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Unlit.MI_ATT_Scope_Unlit")));
    CustomBreach.MaterialMapScope.Add("Fade Square 02", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_02_EdgeFade.MI_ATT_Scope_02_EdgeFade")));
    CustomBreach.MaterialMapScope.Add("Fade Round 03", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_03_EdgeFade.MI_ATT_Scope_03_EdgeFade")));
    CustomBreach.MaterialMapScope.Add("Fade Square 04", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_04_EdgeFade.MI_ATT_Scope_04_EdgeFade")));
    CustomBreach.MaterialMapScope.Add("Fade Round 01", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_01.MI_ATT_Scope_Fade_Round_01")));
    CustomBreach.MaterialMapScope.Add("Fade Round 08", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_08.MI_ATT_Scope_Fade_Round_08")));

    // Material Map Laser
    CustomBreach.MaterialMapLaser.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_003.MI_WEP_Camo_003")));

    // Material Map Grip
    CustomBreach.MaterialMapGrip.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_003.MI_WEP_Camo_003")));


    CustomBreach.RowHandleFlashlightSetting = UFlashlightSettingsBPLibrary::GetFlashlightSettingsByName(EFlashlightSettingsName::Flashlight_Normal);
    CustomBreach.RowHandleLaserSightSetting = ULasersightSettingsBPLibrary::GetLasersightSettingsByName(ELasersightSettingsName::Laser_Normal);

	GWeaponSkinMap.Add(EWeaponSkinName::CustomBreach, CustomBreach);

    /// ---------------------------------------------------------------------------------------------------- ////

    // Custom Lava
    FWeaponSkinEntry CustomLava;
    CustomLava.Name = EWeaponSkinName::CustomLava;
    
    // Material Map Body
    CustomLava.MaterialMapBody.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_013.MI_WEP_Camo_013")));
    CustomLava.MaterialMapBody.Add("Grip", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_013.MI_WEP_Camo_013")));
    CustomLava.MaterialMapBody.Add("Grip Front", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_013.MI_WEP_Camo_013")));
    CustomLava.MaterialMapBody.Add("Details", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_013.MI_WEP_Camo_013")));
    CustomLava.MaterialMapBody.Add("Bolt", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_013.MI_WEP_Camo_013")));
    CustomLava.MaterialMapBody.Add("Stock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_013.MI_WEP_Camo_013")));
    CustomLava.MaterialMapBody.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    CustomLava.MaterialMapBody.Add("Forestock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_013.MI_WEP_Camo_013")));
    CustomLava.MaterialMapBody.Add("Barrel", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_001.MI_WEP_CarbonFibre_001")));
    CustomLava.MaterialMapBody.Add("Slide", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_001.MI_WEP_CarbonFibre_001")));
    CustomLava.MaterialMapBody.Add("Hammer", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_001.MI_WEP_CarbonFibre_001")));
    CustomLava.MaterialMapBody.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));
    CustomLava.MaterialMapBody.Add("Rails", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_013.MI_WEP_Camo_013")));

    // Material Map Ironsights
    CustomLava.MaterialMapIronsights.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_013.MI_WEP_Camo_013")));

    // Material Map Magazine
    CustomLava.MaterialMapMagazine.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_013.MI_WEP_Camo_013")));
    CustomLava.MaterialMapMagazine.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    CustomLava.MaterialMapMagazine.Add("Body Rocket", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_061.MI_WEP_Basic_061")));
    CustomLava.MaterialMapMagazine.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));

    // Material Map Muzzle
    CustomLava.MaterialMapMuzzle.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_013.MI_WEP_Camo_013")));

    // Material Map Scope
    CustomLava.MaterialMapScope.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_013.MI_WEP_Camo_013")));
    CustomLava.MaterialMapScope.Add("Sight", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Square_Orange.MI_ATT_Sight_Square_Orange")));
    CustomLava.MaterialMapScope.Add("Sight Zoomed", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Crosshair_008.MI_ATT_Sight_Crosshair_008")));
    CustomLava.MaterialMapScope.Add("Fade Round", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round.MI_ATT_Scope_Fade_Round")));
    CustomLava.MaterialMapScope.Add("Invisible", nullptr);
    CustomLava.MaterialMapScope.Add("Unlit", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Unlit.MI_ATT_Scope_Unlit")));
    CustomLava.MaterialMapScope.Add("Fade Square 02", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_02_EdgeFade.MI_ATT_Scope_02_EdgeFade")));
    CustomLava.MaterialMapScope.Add("Fade Round 03", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_03_EdgeFade.MI_ATT_Scope_03_EdgeFade")));
    CustomLava.MaterialMapScope.Add("Fade Square 04", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_04_EdgeFade.MI_ATT_Scope_04_EdgeFade")));
    CustomLava.MaterialMapScope.Add("Fade Round 01", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_01.MI_ATT_Scope_Fade_Round_01")));
    CustomLava.MaterialMapScope.Add("Fade Round 08", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_08.MI_ATT_Scope_Fade_Round_08")));

    // Material Map Laser
    CustomLava.MaterialMapLaser.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_013.MI_WEP_Camo_013")));

    // Material Map Grip
    CustomLava.MaterialMapGrip.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Camo/MI_WEP_Camo_013.MI_WEP_Camo_013")));


    CustomLava.RowHandleFlashlightSetting = UFlashlightSettingsBPLibrary::GetFlashlightSettingsByName(EFlashlightSettingsName::Flashlight_Normal);
    CustomLava.RowHandleLaserSightSetting = ULasersightSettingsBPLibrary::GetLasersightSettingsByName(ELasersightSettingsName::Laser_Normal);

	GWeaponSkinMap.Add(EWeaponSkinName::CustomLava, CustomLava);

    /// ---------------------------------------------------------------------------------------------------- ////

    // Worst Brass Ever
    FWeaponSkinEntry WorstBrassEver;
    WorstBrassEver.Name = EWeaponSkinName::WorstBrassEver;
    
    // Material Map Body
    WorstBrassEver.MaterialMapBody.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/BrushedSteel/MI_WEP_Steel_Brushed_002.MI_WEP_Steel_Brushed_002")));
    WorstBrassEver.MaterialMapBody.Add("Grip", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/BrushedSteel/MI_WEP_Steel_Brushed_002.MI_WEP_Steel_Brushed_002")));
    WorstBrassEver.MaterialMapBody.Add("Grip Front", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_004.MI_WEP_Basic_004")));
    WorstBrassEver.MaterialMapBody.Add("Details", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_004.MI_WEP_Basic_004")));
    WorstBrassEver.MaterialMapBody.Add("Bolt", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_004.MI_WEP_Basic_004")));
    WorstBrassEver.MaterialMapBody.Add("Stock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/BrushedSteel/MI_WEP_Steel_Brushed_002.MI_WEP_Steel_Brushed_002")));
    WorstBrassEver.MaterialMapBody.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    WorstBrassEver.MaterialMapBody.Add("Forestock", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/BrushedSteel/MI_WEP_Steel_Brushed_002.MI_WEP_Steel_Brushed_002")));
    WorstBrassEver.MaterialMapBody.Add("Barrel", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/BrushedSteel/MI_WEP_Steel_Brushed_002.MI_WEP_Steel_Brushed_002")));
    WorstBrassEver.MaterialMapBody.Add("Slide", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/CarbonFibre/MI_WEP_CarbonFibre_001.MI_WEP_CarbonFibre_001")));
    WorstBrassEver.MaterialMapBody.Add("Hammer", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/BrushedSteel/MI_WEP_Steel_Brushed_002.MI_WEP_Steel_Brushed_002")));
    WorstBrassEver.MaterialMapBody.Add("Handle", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/BrushedSteel/MI_WEP_Steel_Brushed_002.MI_WEP_Steel_Brushed_002")));
    WorstBrassEver.MaterialMapBody.Add("Handle Base", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/BrushedSteel/MI_WEP_Steel_Brushed_002.MI_WEP_Steel_Brushed_002")));
    WorstBrassEver.MaterialMapBody.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));
    WorstBrassEver.MaterialMapBody.Add("Rails", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/BrushedSteel/MI_WEP_Steel_Brushed_002.MI_WEP_Steel_Brushed_002")));

    // Material Map Ironsights
    WorstBrassEver.MaterialMapIronsights.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/BrushedSteel/MI_WEP_Steel_Brushed_002.MI_WEP_Steel_Brushed_002")));

    // Material Map Magazine
    WorstBrassEver.MaterialMapMagazine.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/BrushedSteel/MI_WEP_Steel_Brushed_014.MI_WEP_Steel_Brushed_014")));
    WorstBrassEver.MaterialMapMagazine.Add("Casing", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Casings/MI_WEP_Casings.MI_WEP_Casings")));
    WorstBrassEver.MaterialMapMagazine.Add("Body Rocket", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_061.MI_WEP_Basic_061")));
    WorstBrassEver.MaterialMapMagazine.Add("Text", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_008.MI_WEP_Basic_008")));

    // Material Map Muzzle
    WorstBrassEver.MaterialMapMuzzle.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/BrushedSteel/MI_WEP_Steel_Brushed_002.MI_WEP_Steel_Brushed_002")));

    // Material Map Scope
    WorstBrassEver.MaterialMapScope.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/BrushedSteel/MI_WEP_Steel_Brushed_002.MI_WEP_Steel_Brushed_002")));
    WorstBrassEver.MaterialMapScope.Add("Sight", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Dot_Red_02.MI_ATT_Sight_Dot_Red_02")));
    WorstBrassEver.MaterialMapScope.Add("Sight Zoomed", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Sight_Crosshair_004.MI_ATT_Sight_Crosshair_004")));
    WorstBrassEver.MaterialMapScope.Add("Fade Round", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round.MI_ATT_Scope_Fade_Round")));
    WorstBrassEver.MaterialMapScope.Add("Invisible", nullptr);
    WorstBrassEver.MaterialMapScope.Add("Unlit", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Unlit.MI_ATT_Scope_Unlit")));
    WorstBrassEver.MaterialMapScope.Add("Fade Square 02", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_02_EdgeFade.MI_ATT_Scope_02_EdgeFade")));
    WorstBrassEver.MaterialMapScope.Add("Fade Round 03", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_03_EdgeFade.MI_ATT_Scope_03_EdgeFade")));
    WorstBrassEver.MaterialMapScope.Add("Fade Square 04", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_04_EdgeFade.MI_ATT_Scope_04_EdgeFade")));
    WorstBrassEver.MaterialMapScope.Add("Fade Round 01", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_01.MI_ATT_Scope_Fade_Round_01")));
    WorstBrassEver.MaterialMapScope.Add("Fade Round 08", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Materials/MI_ATT_Scope_Fade_Round_08.MI_ATT_Scope_Fade_Round_08")));

    // Material Map Laser
    WorstBrassEver.MaterialMapLaser.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/Basic/MI_WEP_Basic_010.MI_WEP_Basic_010")));

    // Material Map Grip
    WorstBrassEver.MaterialMapGrip.Add("Body", LoadObject<UMaterialInstance>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Skins/Materials/BrushedSteel/MI_WEP_Steel_Brushed_002.MI_WEP_Steel_Brushed_002")));


    WorstBrassEver.RowHandleFlashlightSetting = UFlashlightSettingsBPLibrary::GetFlashlightSettingsByName(EFlashlightSettingsName::Flashlight_Normal);
    WorstBrassEver.RowHandleLaserSightSetting = ULasersightSettingsBPLibrary::GetLasersightSettingsByName(ELasersightSettingsName::Laser_Normal);

	GWeaponSkinMap.Add(EWeaponSkinName::WorstBrassEver, WorstBrassEver);

    /// ---------------------------------------------------------------------------------------------------- ////

    // Invisible
    FWeaponSkinEntry Invisible;
    Invisible.Name = EWeaponSkinName::Invisible;
    
    // Material Map Body
    Invisible.MaterialMapBody.Add("Body", nullptr);
    Invisible.MaterialMapBody.Add("Grip", nullptr);
    Invisible.MaterialMapBody.Add("Grip Front", nullptr);
    Invisible.MaterialMapBody.Add("Details", nullptr);
    Invisible.MaterialMapBody.Add("Bolt", nullptr);
    Invisible.MaterialMapBody.Add("Stock", nullptr);
    Invisible.MaterialMapBody.Add("Casing", nullptr);
    Invisible.MaterialMapBody.Add("Forestock", nullptr);
    Invisible.MaterialMapBody.Add("Barrel", nullptr);
    Invisible.MaterialMapBody.Add("Slide", nullptr);
    Invisible.MaterialMapBody.Add("Hammer", nullptr);
    Invisible.MaterialMapBody.Add("Rails", nullptr);

    // Material Map Ironsights
    Invisible.MaterialMapIronsights.Add("Body", nullptr);

    // Material Map Magazine
    Invisible.MaterialMapMagazine.Add("Body", nullptr);
    Invisible.MaterialMapMagazine.Add("Casing", nullptr);

    // Material Map Muzzle
    Invisible.MaterialMapMuzzle.Add("Body", nullptr);

    // Material Map Scope
    Invisible.MaterialMapScope.Add("Body", nullptr);
    Invisible.MaterialMapScope.Add("Sight", nullptr);
    Invisible.MaterialMapScope.Add("Sight Zoomed", nullptr);
    Invisible.MaterialMapScope.Add("Fade Round", nullptr);
    Invisible.MaterialMapScope.Add("Invisible", nullptr);
    Invisible.MaterialMapScope.Add("Unlit", nullptr);
    Invisible.MaterialMapScope.Add("Fade Square 02", nullptr);
    Invisible.MaterialMapScope.Add("Fade Round 03", nullptr);
    Invisible.MaterialMapScope.Add("Fade Square 04", nullptr);
    Invisible.MaterialMapScope.Add("Fade Round 01", nullptr);
    Invisible.MaterialMapScope.Add("Fade Round 08", nullptr);

    // Material Map Laser
    Invisible.MaterialMapLaser.Add("Body", nullptr);

    // Material Map Grip
    Invisible.MaterialMapGrip.Add("Body", nullptr);


    Invisible.RowHandleFlashlightSetting = UFlashlightSettingsBPLibrary::GetFlashlightSettingsByName(EFlashlightSettingsName::Flashlight_Normal);
    Invisible.RowHandleLaserSightSetting = ULasersightSettingsBPLibrary::GetLasersightSettingsByName(ELasersightSettingsName::Laser_Normal);

	GWeaponSkinMap.Add(EWeaponSkinName::Invisible, Invisible);


    /// ---------------------------------------------------------------------------------------------------- ////
}

FWeaponSkinEntry UWeaponSkinBPLibrary::GetWeaponSkinByName(EWeaponSkinName WeaponName)
{
    InitWeaponSkinMap();
	if (GWeaponSkinMap.Contains(WeaponName))
	{
		return GWeaponSkinMap[WeaponName];
	}
	return FWeaponSkinEntry();
}
