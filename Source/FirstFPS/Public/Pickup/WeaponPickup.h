// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Core/IInterface.h" 
#include "WeaponPickup.generated.h"

class USphereComponent;
class AWeaponBase;
class UFPSWeaponData;

UCLASS()
class FIRSTFPS_API AWeaponPickup : public AActor, public IIInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AWeaponPickup();


	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
	void OnInteract(ACharacter* InstigatorCharacter);
	virtual void OnInteract_Implementation(ACharacter* InstigatorCharacter) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY()
	TSet<ACharacter*> OverlappingCharacters;

	UFUNCTION()
	void OnPickupOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

public:	
	// 显示用 Mesh（StaticMesh 即可）
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pickup")
	USkeletalMeshComponent* PickupMesh;

	// 拾取检测A
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	USphereComponent* PickupSphere;

	// 决定玩家捡到的实际武器类型 (APistol / ARifle)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AWeaponBase> WeaponClass;

	// 新增（在 class 公共区域）
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite, Category = "Appearance")
	int32 AppearanceIndex = 0;

	UPROPERTY(Replicated)
	bool bIsBeingPickedUp = false;

	// Mesh 同步用
	UPROPERTY(ReplicatedUsing = OnRep_WeaponMesh)
	USkeletalMesh* PickupSkeletalMesh;

	UPROPERTY()
	AWeaponBase* HeldWeapon;

public:
	UFUNCTION()
	void OnRep_WeaponMesh();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// 是否允许被捡起（丢地后短暂不可捡，避免立刻捡起）
	UPROPERTY(Replicated)
	bool bCanBePickedUp = true;

	/** 延迟启用拾取 */
	UFUNCTION()
	void EnablePickup();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};
