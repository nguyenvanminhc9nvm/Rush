#include "LaserBPLibrary.h"
#include "Engine/Engine.h"

static TMap<EWeaponIconName, FLaserEntry> GWeaponFragmentLaserMap;

static void InitWeaponFragmentLaserMap()
{
    if (GWeaponFragmentLaserMap.Num() > 0) return;

    // Hidden - None (no actor class)
    FLaserEntry EntryHidden;
    EntryHidden.Name = EWeaponIconName::NoneHidden;
    GWeaponFragmentLaserMap.Add(EWeaponIconName::NoneHidden, EntryHidden);

    // Flashlight
    FLaserEntry EntryFlashlight;
    EntryFlashlight.Name = EWeaponIconName::Flashlight;
    EntryFlashlight.FragmentActor = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/Flash/BP_LPSP_WEP_Flashlight.BP_LPSP_WEP_Flashlight_C"));
    GWeaponFragmentLaserMap.Add(EWeaponIconName::Flashlight, EntryFlashlight);

    // Lasersight
    FLaserEntry EntryLasersight;
    EntryLasersight.Name = EWeaponIconName::Lasersight;
    EntryLasersight.FragmentActor = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/Laser/BP_LPSP_WEP_Lasersight.BP_LPSP_WEP_Lasersight_C"));
    GWeaponFragmentLaserMap.Add(EWeaponIconName::Lasersight, EntryLasersight);
    
}

FLaserEntry ULaserBPLibrary::GetWeaponFragmentLaserByName(EWeaponIconName FragmentName)
{
    InitWeaponFragmentLaserMap();
    if (GWeaponFragmentLaserMap.Contains(FragmentName))
    {
        return GWeaponFragmentLaserMap[FragmentName];
    }

    return FLaserEntry();
}

