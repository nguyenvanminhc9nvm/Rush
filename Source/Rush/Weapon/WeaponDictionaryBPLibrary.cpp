#include "WeaponDictionaryBPLibrary.h"
#include "Engine/Engine.h"

static TMap<FString, TSubclassOf<AActor>> GWeaponMap;

static void InitWeaponMap()
{
    if (GWeaponMap.Num() > 0) return;

    // Assault Rifles
    if (TSubclassOf<AActor> AR01 = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_AR_01.BP_LPSP_WEP_AR_01_C"))) GWeaponMap.Add("Assault-Rifle-01", AR01);

    if (TSubclassOf<AActor> AR01Evil = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_AR_01_Evil.BP_LPSP_WEP_AR_01_Evil_C"))) GWeaponMap.Add("Assault-Rifle-01-Evil", AR01Evil);

    if (TSubclassOf<AActor> AR01Tactical = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_AR_01_Tactical.BP_LPSP_WEP_AR_01_Tactical_C"))) GWeaponMap.Add("Assault-Rifle-01-Tactical", AR01Tactical);

    if (TSubclassOf<AActor> AR01Elite = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_AR_01_Elite.BP_LPSP_WEP_AR_01_Elite_C"))) GWeaponMap.Add("Assault-Rifle-01-Elite", AR01Elite);

    if (TSubclassOf<AActor> AR02 = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_AR_02.BP_LPSP_WEP_AR_02_C"))) GWeaponMap.Add("Assault-Rifle-02", AR02);

    if (TSubclassOf<AActor> AR0201 = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_AR_02_01.BP_LPSP_WEP_AR_02_01_C"))) GWeaponMap.Add("Assault-Rifle-02-01", AR0201);

    if (TSubclassOf<AActor> AR02Elite = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_AR_02_Elite.BP_LPSP_WEP_AR_02_Elite_C"))) GWeaponMap.Add("Assault-Rifle-02-Elite", AR02Elite);

    if (TSubclassOf<AActor> AR02Evil = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_AR_02_Evil.BP_LPSP_WEP_AR_02_Evil_C"))) GWeaponMap.Add("Assault-Rifle-02-Evil", AR02Evil);

    if (TSubclassOf<AActor> AR02Forest = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_AR_02_Forest.BP_LPSP_WEP_AR_02_Forest_C"))) GWeaponMap.Add("Assault-Rifle-02-Forest", AR02Forest);

    if (TSubclassOf<AActor> AR02Skulls = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_AR_02_Skulls.BP_LPSP_WEP_AR_02_Skulls_C"))) GWeaponMap.Add("Assault-Rifle-02-Skulls", AR02Skulls);

    if (TSubclassOf<AActor> AR03 = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_AR_03.BP_LPSP_WEP_AR_03_C"))) GWeaponMap.Add("Assault-Rifle-03", AR03);

    if (TSubclassOf<AActor> AR03Elite = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_AR_03_Elite.BP_LPSP_WEP_AR_03_Elite_C"))) GWeaponMap.Add("Assault-Rifle-03-Elite", AR03Elite);

    if (TSubclassOf<AActor> AR03SciFi = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_AR_03_SciFi.BP_LPSP_WEP_AR_03_SciFi_C"))) GWeaponMap.Add("Assault-Rifle-03-SciFi", AR03SciFi);

    if (TSubclassOf<AActor> AR03Tactical = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_AR_03_Tactical.BP_LPSP_WEP_AR_03_Tactical_C"))) GWeaponMap.Add("Assault-Rifle-03-Tactical", AR03Tactical);

    // Grenade Launchers
    if (TSubclassOf<AActor> GL01 = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_GL_01.BP_LPSP_WEP_GL_01_C"))) GWeaponMap.Add("Grenade-Launcher-01", GL01);

    if (TSubclassOf<AActor> GL01AntiTank = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_GL_01_AntiTank.BP_LPSP_WEP_GL_01_AntiTank_C"))) GWeaponMap.Add("Grenade-Launcher-01-AntiTank", GL01AntiTank);

    if (TSubclassOf<AActor> GL01Citrus = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_GL_01_Citrus.BP_LPSP_WEP_GL_01_Citrus_C"))) GWeaponMap.Add("Grenade-Launcher-01-Citrus", GL01Citrus);

    if (TSubclassOf<AActor> GL01Tactical = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_GL_01_Tactical.BP_LPSP_WEP_GL_01_Tactical_C"))) GWeaponMap.Add("Grenade-Launcher-01-Tactical", GL01Tactical);

    // Handguns
    if (TSubclassOf<AActor> Handgun01 = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_Handgun_01.BP_LPSP_WEP_Handgun_01_C"))) GWeaponMap.Add("Handgun-01", Handgun01);

    if (TSubclassOf<AActor> Handgun01Neon = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_Handgun_01_Neon.BP_LPSP_WEP_Handgun_01_Neon_C"))) GWeaponMap.Add("Handgun-01-Neon", Handgun01Neon);

    if (TSubclassOf<AActor> Handgun01Tactical = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_Handgun_01_Tactical.BP_LPSP_WEP_Handgun_01_Tactical_C"))) GWeaponMap.Add("Handgun-01-Tactical", Handgun01Tactical);

    if (TSubclassOf<AActor> Handgun02 = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_Handgun_02.BP_LPSP_WEP_Handgun_02_C"))) GWeaponMap.Add("Handgun-02", Handgun02);

    if (TSubclassOf<AActor> Handgun02Stealth = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_Handgun_02_Stealth.BP_LPSP_WEP_Handgun_02_Stealth_C"))) GWeaponMap.Add("Handgun-02-Stealth", Handgun02Stealth);

    if (TSubclassOf<AActor> Handgun02Tactical = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_Handgun_02_Tactical.BP_LPSP_WEP_Handgun_02_Tactical_C"))) GWeaponMap.Add("Handgun-02-Tactical", Handgun02Tactical);

    if (TSubclassOf<AActor> Handgun03 = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_Handgun_03.BP_LPSP_WEP_Handgun_03_C"))) GWeaponMap.Add("Handgun-03", Handgun03);

    if (TSubclassOf<AActor> Handgun03Skulls = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_Handgun_03_Skulls.BP_LPSP_WEP_Handgun_03_Skulls_C"))) GWeaponMap.Add("Handgun-03-Skulls", Handgun03Skulls);

    if (TSubclassOf<AActor> Handgun03Tactical = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_Handgun_03_Tactical.BP_LPSP_WEP_Handgun_03_Tactical_C"))) GWeaponMap.Add("Handgun-03-Tactical", Handgun03Tactical);

    if (TSubclassOf<AActor> Handgun04 = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_Handgun_04.BP_LPSP_WEP_Handgun_04_C"))) GWeaponMap.Add("Handgun-04", Handgun04);

    if (TSubclassOf<AActor> Handgun04Tactical = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_Handgun_04_Tactical.BP_LPSP_WEP_Handgun_04_Tactical_C"))) GWeaponMap.Add("Handgun-04-Tactical", Handgun04Tactical);

    if (TSubclassOf<AActor> Handgun04Venomous = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_Handgun_04_Venomous.BP_LPSP_WEP_Handgun_04_Venomous_C"))) GWeaponMap.Add("Handgun-04-Venomous", Handgun04Venomous);

    // Rocket Launchers
    if (TSubclassOf<AActor> RL01 = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_RL_01.BP_LPSP_WEP_RL_01_C"))) GWeaponMap.Add("Rocket-Launcher-01", RL01);

    if (TSubclassOf<AActor> RL01Homing = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_RL_01_Homing.BP_LPSP_WEP_RL_01_Homing_C"))) GWeaponMap.Add("Rocket-Launcher-01-Homing", RL01Homing);

    // Shotguns
    if (TSubclassOf<AActor> Shotgun01 = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_Shotgun_01.BP_LPSP_WEP_Shotgun_01_C"))) GWeaponMap.Add("Shotgun-01", Shotgun01);

    if (TSubclassOf<AActor> Shotgun01Tactical = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_Shotgun_01_Tactical.BP_LPSP_WEP_Shotgun_01_Tactical_C"))) GWeaponMap.Add("Shotgun-01-Tactical", Shotgun01Tactical);

    if (TSubclassOf<AActor> Shotgun01Tech = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_Shotgun_01_Tech.BP_LPSP_WEP_Shotgun_01_Tech_C"))) GWeaponMap.Add("Shotgun-01-Tech", Shotgun01Tech);

    // SMGs
    if (TSubclassOf<AActor> SMG01 = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_SMG_01.BP_LPSP_WEP_SMG_01_C"))) GWeaponMap.Add("SMG-01", SMG01);

    if (TSubclassOf<AActor> SMG01Citrus = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_SMG_01_Citrus.BP_LPSP_WEP_SMG_01_Citrus_C"))) GWeaponMap.Add("SMG-01-Citrus", SMG01Citrus);

    if (TSubclassOf<AActor> SMG01Tactical = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_SMG_01_Tactical.BP_LPSP_WEP_SMG_01_Tactical_C"))) GWeaponMap.Add("SMG-01-Tactical", SMG01Tactical);

    if (TSubclassOf<AActor> SMG02 = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_SMG_02.BP_LPSP_WEP_SMG_02_C"))) GWeaponMap.Add("SMG-02", SMG02);

    if (TSubclassOf<AActor> SMG02Citrus = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_SMG_02_Citrus.BP_LPSP_WEP_SMG_02_Citrus_C"))) GWeaponMap.Add("SMG-02-Citrus", SMG02Citrus);

    if (TSubclassOf<AActor> SMG02Tactical = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_SMG_02_Tactical.BP_LPSP_WEP_SMG_02_Tactical_C"))) GWeaponMap.Add("SMG-02-Tactical", SMG02Tactical);

    if (TSubclassOf<AActor> SMG03 = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_SMG_03.BP_LPSP_WEP_SMG_03_C"))) GWeaponMap.Add("SMG-03", SMG03);

    if (TSubclassOf<AActor> SMG03Tactical = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_SMG_03_Tactical.BP_LPSP_WEP_SMG_03_Tactical_C"))) GWeaponMap.Add("SMG-03-Tactical", SMG03Tactical);

    if (TSubclassOf<AActor> SMG03Evil = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_SMG_03_Evil.BP_LPSP_WEP_SMG_03_Evil_C"))) GWeaponMap.Add("SMG-03-Evil", SMG03Evil);

    if (TSubclassOf<AActor> SMG04 = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_SMG_04.BP_LPSP_WEP_SMG_04_C"))) GWeaponMap.Add("SMG-04", SMG04);

    if (TSubclassOf<AActor> SMG04Tactical = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_SMG_04_Tactical.BP_LPSP_WEP_SMG_04_Tactical_C"))) GWeaponMap.Add("SMG-04-Tactical", SMG04Tactical);

    if (TSubclassOf<AActor> SMG04Modern = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_SMG_04_Modern.BP_LPSP_WEP_SMG_04_Modern_C"))) GWeaponMap.Add("SMG-04-Modern", SMG04Modern);

    if (TSubclassOf<AActor> SMG05 = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_SMG_05.BP_LPSP_WEP_SMG_05_C"))) GWeaponMap.Add("SMG-05", SMG05);

    if (TSubclassOf<AActor> SMG05Armored = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_SMG_05_Armored.BP_LPSP_WEP_SMG_05_Armored_C"))) GWeaponMap.Add("SMG-05-Armored", SMG05Armored);

    if (TSubclassOf<AActor> SMG05Tactical = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_SMG_05_Tactical.BP_LPSP_WEP_SMG_05_Tactical_C"))) GWeaponMap.Add("SMG-05-Tactical", SMG05Tactical);

    // Snipers
    if (TSubclassOf<AActor> Sniper01 = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_Sniper_01.BP_LPSP_WEP_Sniper_01_C"))) GWeaponMap.Add("Sniper-01", Sniper01);

    if (TSubclassOf<AActor> Sniper01Hitman = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_Sniper_01_Hitman.BP_LPSP_WEP_Sniper_01_Hitman_C"))) GWeaponMap.Add("Sniper-01-Hitman", Sniper01Hitman);

    if (TSubclassOf<AActor> Sniper01Tactical = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_Sniper_01_Tactical.BP_LPSP_WEP_Sniper_01_Tactical_C"))) GWeaponMap.Add("Sniper-01-Tactical", Sniper01Tactical);

    if (TSubclassOf<AActor> Sniper02 = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_Sniper_02.BP_LPSP_WEP_Sniper_02_C"))) GWeaponMap.Add("Sniper-02", Sniper02);

    if (TSubclassOf<AActor> Sniper02Breach = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_Sniper_02_Breach.BP_LPSP_WEP_Sniper_02_Breach_C"))) GWeaponMap.Add("Sniper-02-Breach", Sniper02Breach);

    if (TSubclassOf<AActor> Sniper02Tactical = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_Sniper_02_Tactical.BP_LPSP_WEP_Sniper_02_Tactical_C"))) GWeaponMap.Add("Sniper-02-Tactical", Sniper02Tactical);

    if (TSubclassOf<AActor> Sniper03 = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_Sniper_03.BP_LPSP_WEP_Sniper_03_C"))) GWeaponMap.Add("Sniper-03", Sniper03);

    if (TSubclassOf<AActor> Sniper03Tactical = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_Sniper_03_Tactical.BP_LPSP_WEP_Sniper_03_Tactical_C"))) GWeaponMap.Add("Sniper-03-Tactical", Sniper03Tactical);

    if (TSubclassOf<AActor> Sniper03Heavy = LoadClass<AActor>(nullptr, TEXT("/Game/Blueprint/Weapon/BP_LPSP_WEP_Sniper_03_Heavy.BP_LPSP_WEP_Sniper_03_Heavy_C"))) GWeaponMap.Add("Sniper-03-Heavy", Sniper03Heavy);
}

TSubclassOf<AActor> UWeaponDictionaryBPLibrary::GetWeaponByName(const FString& WeaponName)
{
    InitWeaponMap();
    if (TSubclassOf<AActor>* Found = GWeaponMap.Find(WeaponName))
    {
        return *Found;
    }
    return nullptr;
}
