#include "WeaponFragmentLaserBPLibrary.h"
#include "Engine/Engine.h"

static TMap<EFragmentLaserName, TSubclassOf<AActor>> GWeaponFragmentLaserMap;

static void InitWeaponFragmentLaserMap()
{
    if (GWeaponFragmentLaserMap.Num() > 0) return;

    // Hidden - None (no actor class)
    GWeaponFragmentLaserMap.Add(EFragmentLaserName::Fragment_Laser_Hidden, nullptr);

    // Flashlight
    if (TSubclassOf<AActor> Flashlight = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/Flash/BP_LPSP_WEP_Flashlight.BP_LPSP_WEP_Flashlight_C"))) 
        GWeaponFragmentLaserMap.Add(EFragmentLaserName::Fragment_Flashlight, Flashlight);

    // Lasersight
    if (TSubclassOf<AActor> Lasersight = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/Laser/BP_LPSP_WEP_Lasersight.BP_LPSP_WEP_Lasersight_C"))) 
        GWeaponFragmentLaserMap.Add(EFragmentLaserName::Fragment_LaserSight, Lasersight);
}

TSubclassOf<AActor> UWeaponFragmentLaserBPLibrary::GetWeaponFragmentLaserByName(EFragmentLaserName FragmentName)
{
    InitWeaponFragmentLaserMap();
    if (TSubclassOf<AActor>* Found = GWeaponFragmentLaserMap.Find(FragmentName))
    {
        return *Found;
    }
    return nullptr;
}

