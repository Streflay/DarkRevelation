// Fill out your copyright notice in the Description page of Project Settings.


#include "Pickup/WeaponPickup.h"
#include "GameFramework/Character.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Projectiles/FPSWeaponData.h"
#include "Net/UnrealNetwork.h"
#include "Weapon/WeaponInventoryComponent.h"
#include "Weapon/WeaponBase.h"

// Sets default values
AWeaponPickup::AWeaponPickup()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

    bReplicates = true;
    SetReplicateMovement(true);
    bCanBePickedUp = true;

    // 创建根组件
    USceneComponent* Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    SetRootComponent(Root);

    PickupMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("PickupMesh"));
    PickupMesh->SetupAttachment(Root);
    // 地上模型一般不需要物理
    PickupMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

    PickupSphere = CreateDefaultSubobject<USphereComponent>(TEXT("PickupSphere"));
    PickupSphere->SetupAttachment(PickupMesh);
    PickupSphere->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    PickupSphere->SetCollisionResponseToAllChannels(ECR_Ignore);
    PickupSphere->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
    PickupSphere->SetGenerateOverlapEvents(true);
}

// Called when the game starts or when spawned
void AWeaponPickup::BeginPlay()
{
	Super::BeginPlay();
    if (PickupSkeletalMesh && PickupMesh)
        PickupMesh->SetSkeletalMesh(PickupSkeletalMesh);

    if (PickupSphere)
    {
        PickupSphere->OnComponentBeginOverlap.AddDynamic(this, &AWeaponPickup::OnPickupOverlap);
        PickupSphere->OnComponentEndOverlap.AddDynamic(this, &AWeaponPickup::OnOverlapEnd);
    }
}

void AWeaponPickup::OnPickupOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    if (ACharacter* Player = Cast<ACharacter>(OtherActor))
        OverlappingCharacters.Add(Player);
}

void AWeaponPickup::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
    if (ACharacter* Player = Cast<ACharacter>(OtherActor))
        OverlappingCharacters.Remove(Player);
}

void AWeaponPickup::OnInteract_Implementation(ACharacter* InstigatorCharacter)
{
    if (!InstigatorCharacter) return;    
    UWeaponInventoryComponent* InvComp = InstigatorCharacter->FindComponentByClass<UWeaponInventoryComponent>();
    if (!InvComp)
        return;
    InvComp->ServerPickupWeapon(this);
}


void AWeaponPickup::OnRep_WeaponMesh()
{
    if (PickupMesh && PickupSkeletalMesh)
        PickupMesh->SetSkeletalMesh(PickupSkeletalMesh);
}

// Called every frame
void AWeaponPickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AWeaponPickup::EnablePickup()
{
    bCanBePickedUp = true;
}

void AWeaponPickup::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    DOREPLIFETIME(AWeaponPickup, PickupSkeletalMesh);
    DOREPLIFETIME(AWeaponPickup, AppearanceIndex);
    DOREPLIFETIME(AWeaponPickup, bIsBeingPickedUp);
    DOREPLIFETIME(AWeaponPickup, bCanBePickedUp);
}

