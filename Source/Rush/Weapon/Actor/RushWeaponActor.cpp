#include "RushWeaponActor.h"

#include "Rush/Weapon/Weapon_Information/WeaponInformationLibrary.h"

ARushWeaponActor::ARushWeaponActor(const FObjectInitializer& ObjectInitializer): Super(ObjectInitializer)
{
	WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponMesh"));
	RootComponent = WeaponMesh;

	SocketLaser = CreateDefaultSubobject<USceneComponent>(TEXT("SocketLaser"));
	SocketLaser->SetupAttachment(WeaponMesh); 
	SocketLaser->SetRelativeLocation(FVector(0.f, 46.f, 7.f));
	SocketLaser->SetRelativeRotation(FRotator::ZeroRotator);

	SocketMagazine = CreateDefaultSubobject<USceneComponent>(TEXT("SocketMagazine"));
	SocketMagazine->SetupAttachment(WeaponMesh);
	SocketMagazine->SetRelativeLocation(FVector(0.f, 10.f, -4.f));
	SocketMagazine->SetRelativeRotation(FRotator::ZeroRotator);

	SMeshMagazine = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SMeshMagazine"));
	SMeshMagazine->SetupAttachment(SocketMagazine);

	SocketDefault = CreateDefaultSubobject<USceneComponent>(TEXT("SocketDefault"));
	SocketDefault->SetupAttachment(WeaponMesh);
	SocketDefault->SetRelativeLocation(FVector(.0f, -4.516501f, 1.138527f));
	SMeshIronSights = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SMeshIronSights"));
	SMeshIronSights->SetupAttachment(SocketDefault);

	PivotScope = CreateDefaultSubobject<USceneComponent>(TEXT("PivotScope"));
	PivotScope->SetupAttachment(WeaponMesh);
	SocketScope = CreateDefaultSubobject<USceneComponent>(TEXT("SocketScope"));
	SocketScope->SetupAttachment(PivotScope);

	SocketMuzzle = CreateDefaultSubobject<USceneComponent>(TEXT("SocketMuzzle"));
	SocketMuzzle->SetupAttachment(WeaponMesh);

	SocketGrip = CreateDefaultSubobject<USceneComponent>(TEXT("SocketGrip"));
	SocketGrip->SetupAttachment(WeaponMesh);
	SocketGrip->SetRelativeLocation(FVector(0.f, 31.209257f	, 3.241087f));
	SMeshGrip = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SMeshGrip"));
	SMeshGrip->SetupAttachment(SocketGrip);
}

void ARushWeaponActor::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	
}

void ARushWeaponActor::BeginPlay()
{
	Super::BeginPlay();
}

FWeaponInformationEntry ARushWeaponActor::GetWeaponInformationEntry()
{
	return UWeaponInformationLibrary::GetWeaponInformationByProperties(WeaponEquipped, ScopeEquipped, LaserEquipped, MuzzleEquipped, GripEquipped);
}
