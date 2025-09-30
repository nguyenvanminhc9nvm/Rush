#include "ScopeBPLibrary.h"
#include "Engine/Engine.h"

static TMap<EScopeName, FScopeEntry> GScopeMap;

static void InitScopeMap()
{
    if (GScopeMap.Num() > 0) return;

    // Hidden - None (no actor class)
    FScopeEntry HiddenEntry;
    HiddenEntry.Name = EScopeName::Scope_Hidden;
    HiddenEntry.FragmentActor = nullptr;
    GScopeMap.Add(EScopeName::Scope_Hidden, HiddenEntry);

    // Scope-01
    FScopeEntry Scope01Entry;
    Scope01Entry.Name = EScopeName::Scope01;
    Scope01Entry.FragmentActor = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/Scope/BP_LPSP_WEP_Scope_01.BP_LPSP_WEP_Scope_01_C"));
    GScopeMap.Add(EScopeName::Scope01, Scope01Entry);

    // Scope-02
    FScopeEntry Scope02Entry;
    Scope02Entry.Name = EScopeName::Scope02;
    Scope02Entry.FragmentActor = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/Scope/BP_LPSP_WEP_Scope_02.BP_LPSP_WEP_Scope_02_C"));
    GScopeMap.Add(EScopeName::Scope02, Scope02Entry);

    // Scope-03
    FScopeEntry Scope03Entry;
    Scope03Entry.Name = EScopeName::Scope03;
    Scope03Entry.FragmentActor = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/Scope/BP_LPSP_WEP_Scope_03.BP_LPSP_WEP_Scope_03_C"));
    GScopeMap.Add(EScopeName::Scope03, Scope03Entry);

    // Scope-04
    FScopeEntry Scope04Entry;
    Scope04Entry.Name = EScopeName::Scope04;
    Scope04Entry.FragmentActor = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/Scope/BP_LPSP_WEP_Scope_04.BP_LPSP_WEP_Scope_04_C"));
    GScopeMap.Add(EScopeName::Scope04, Scope04Entry);

    // Scope-05
    FScopeEntry Scope05Entry;
    Scope05Entry.Name = EScopeName::Scope05;
    Scope05Entry.FragmentActor = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/Scope/BP_LPSP_WEP_Scope_05.BP_LPSP_WEP_Scope_05_C"));
    GScopeMap.Add(EScopeName::Scope05, Scope05Entry);

    // Scope-06
    FScopeEntry Scope06Entry;
    Scope06Entry.Name = EScopeName::Scope06;
    Scope06Entry.FragmentActor = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/Scope/BP_LPSP_WEP_Scope_06.BP_LPSP_WEP_Scope_06_C"));
    GScopeMap.Add(EScopeName::Scope06, Scope06Entry);

    // Scope-07
    FScopeEntry Scope07Entry;
    Scope07Entry.Name = EScopeName::Scope07;
    Scope07Entry.FragmentActor = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/Scope/BP_LPSP_WEP_Scope_07.BP_LPSP_WEP_Scope_07_C"));
    GScopeMap.Add(EScopeName::Scope07, Scope07Entry);

    // Scope-08
    FScopeEntry Scope08Entry;
    Scope08Entry.Name = EScopeName::Scope08;
    Scope08Entry.FragmentActor = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/Scope/BP_LPSP_WEP_Scope_08.BP_LPSP_WEP_Scope_08_C"));
    GScopeMap.Add(EScopeName::Scope08, Scope08Entry);
}

FScopeEntry UScopeBPLibrary::GetScopeByName(EScopeName ScopeName)
{
    InitScopeMap();
    if (GScopeMap.Contains(ScopeName))
    {
        return GScopeMap[ScopeName];
    }
    return FScopeEntry();
}

TSubclassOf<AActor> UScopeBPLibrary::GetScopeActorByName(EScopeName ScopeName)
{
    InitScopeMap();
    if (GScopeMap.Contains(ScopeName))
    {
        return GScopeMap[ScopeName].FragmentActor;
    }
    return nullptr;
}
