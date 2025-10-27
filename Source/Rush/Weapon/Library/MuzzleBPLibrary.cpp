#include "MuzzleBPLibrary.h"
#include "Engine/Engine.h"

static TMap<EWeaponIconName, FMuzzleEntry> GMuzzleMap;

static void InitMuzzleMap()
{
    if (GMuzzleMap.Num() > 0) return;

    // Hidden - None (no actor class)
    FMuzzleEntry HiddenEntry;
    HiddenEntry.Name = EWeaponIconName::NoneHidden;
    HiddenEntry.FragmentActor = nullptr;
    GMuzzleMap.Add(EWeaponIconName::NoneHidden, HiddenEntry);

    // Silencer-01
    FMuzzleEntry Silencer01Entry;
    Silencer01Entry.Name = EWeaponIconName::Silencer_01;
    Silencer01Entry.FragmentActor = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/Silence/BP_LPSP_WEP_Silencer_01.BP_LPSP_WEP_Silencer_01_C"));
    GMuzzleMap.Add(EWeaponIconName::Silencer_01, Silencer01Entry);

    // Silencer-02
    FMuzzleEntry Silencer02Entry;
    Silencer02Entry.Name = EWeaponIconName::Silencer_02;
    Silencer02Entry.FragmentActor = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/Silence/BP_LPSP_WEP_Silencer_02.BP_LPSP_WEP_Silencer_02_C"));
    GMuzzleMap.Add(EWeaponIconName::Silencer_02, Silencer02Entry);

    // Silencer-03
    FMuzzleEntry Silencer03Entry;
    Silencer03Entry.Name = EWeaponIconName::Silencer_03;
    Silencer03Entry.FragmentActor = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/Silence/BP_LPSP_WEP_Silencer_03.BP_LPSP_WEP_Silencer_03_C"));
    GMuzzleMap.Add(EWeaponIconName::Silencer_03, Silencer03Entry);
}

FMuzzleEntry UMuzzleBPLibrary::GetMuzzleByName(EWeaponIconName MuzzleName)
{
    InitMuzzleMap();
    if (GMuzzleMap.Contains(MuzzleName))
    {
        return GMuzzleMap[MuzzleName];
    }
    return FMuzzleEntry();
}

TSubclassOf<AActor> UMuzzleBPLibrary::GetMuzzleActorByName(EWeaponIconName MuzzleName)
{
    InitMuzzleMap();
    if (GMuzzleMap.Contains(MuzzleName))
    {
        return GMuzzleMap[MuzzleName].FragmentActor;
    }
    return nullptr;
}
