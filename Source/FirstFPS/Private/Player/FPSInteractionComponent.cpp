// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/FPSInteractionComponent.h"
#include "GameFramework/Character.h"
#include "Components/SkeletalMeshComponent.h"
#include "DrawDebugHelpers.h"
#include "Core/IInterface.h"
#include "Pickup/WeaponPickup.h"
#include "Weapon/WeaponInventoryComponent.h"

// Sets default values for this component's properties
UFPSInteractionComponent::UFPSInteractionComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	SetIsReplicatedByDefault(true);
}


// Called when the game starts
void UFPSInteractionComponent::BeginPlay()
{
	Super::BeginPlay();
	// 自动找到玩家身上的 WeaponInventoryComponent
	InventoryComp = GetOwner()->FindComponentByClass<UWeaponInventoryComponent>();
}

void UFPSInteractionComponent::PrimaryInteract()
{
	if (!FocusActor) {
		return;
	}
	ServerInteract(FocusActor);
}

void UFPSInteractionComponent::ServerInteract_Implementation(AActor* InFocus)
{
	if (!InFocus) { 
		UE_LOG(LogTemp, Warning, TEXT("[ServerInteract] InFocus is NULL!")); return; 
	} 

	if (AWeaponPickup* Pickup = Cast<AWeaponPickup>(InFocus)) { 
		InventoryComp->ServerPickupWeapon(Pickup); 
	} 
	ACharacter* OwnerCharacter = Cast<ACharacter>(GetOwner()); 
	if (!OwnerCharacter) { 
		UE_LOG(LogTemp, Warning, TEXT("[Interact] Owner is NOT ACharacter")); return; 
	}
}



// Called every frame
void UFPSInteractionComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
    
	AActor* Owner = GetOwner();
	if (!Owner) return;

	FVector OwnerLoc = Owner->GetActorLocation();

	TArray<FOverlapResult> Overlaps;
	FCollisionShape Sphere = FCollisionShape::MakeSphere(TraceDistance);
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(Owner);

	GetWorld()->OverlapMultiByObjectType(
		Overlaps, OwnerLoc, FQuat::Identity,
		FCollisionObjectQueryParams(ECC_WorldDynamic | ECC_PhysicsBody | ECC_Pawn), 
		Sphere, Params);

	/*UE_LOG(LogTemp, Warning, TEXT("[Trace] Overlaps=%d"), Overlaps.Num());*/
	FocusActor = nullptr;

	for (const FOverlapResult& O : Overlaps)
	{
		AActor* A = O.GetActor();
		if (!A) continue;

		//UE_LOG(LogTemp, Warning, TEXT("[Trace] Hit Actor: %s  ImplementsUI=%d  Class=%s"),
		//	*A->GetName(),
		//	A->Implements<UIInterface>(),
		//	*A->GetClass()->GetName()
		//);

		if (Cast<AWeaponPickup>(A))
		{
			FocusActor = A;
			break;
		}

		if (A->Implements<UIInterface>())
		{
			FocusActor = A;
			break;
		}

	}
}

