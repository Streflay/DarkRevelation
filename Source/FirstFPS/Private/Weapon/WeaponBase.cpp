// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/WeaponBase.h"
#include "GameFramework/Character.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Net/UnrealNetwork.h"
#include "Projectiles/FPSWeaponData.h"
#include "ActionSystem/WeaponFireComponent.h"

// Sets default values
AWeaponBase::AWeaponBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bReplicates = true;
	SetReplicateMovement(true);       // 同步位置/旋转

	// 创建根组件
	USceneComponent* Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(Root);

	WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponMesh"));
	WeaponMesh->SetupAttachment(Root);
	// 创建射击组件
	FireComponent = CreateDefaultSubobject<UWeaponFireComponent>(TEXT("FireComponent"));

	// 不要物理、不需要碰撞（CF 枪模式）
	WeaponMesh->SetOnlyOwnerSee(false);
	WeaponMesh->SetOwnerNoSee(false);
	WeaponMesh->bCastHiddenShadow = false;
	WeaponMesh->SetSimulatePhysics(false);
	WeaponMesh->SetEnableGravity(false);
	WeaponMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

FVector AWeaponBase::GetMuzzleLocation() const
{
	FName SocketName = GetMuzzleSocketName();
	FVector Loc = WeaponMesh->GetSocketLocation(SocketName);
	return Loc;
}

FRotator AWeaponBase::GetMuzzleRotation() const
{
	if (!WeaponMesh) return FRotator::ZeroRotator;
	return WeaponMesh->GetSocketRotation(GetMuzzleSocketName());
}

// Called when the game starts or when spawned
void AWeaponBase::BeginPlay()
{
	Super::BeginPlay();
	ApplyAppearance();   // 启动时应用外观
}

// Called every frame
void AWeaponBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AWeaponBase::OnRep_AppearanceIndex()
{
	ApplyAppearance();
}

void AWeaponBase::OnRep_WeaponSocketName()
{
	ACharacter* OwnerChar = Cast<ACharacter>(GetOwner());
	if (!OwnerChar) return;

	USkeletalMeshComponent* Mesh = OwnerChar->GetMesh();
	if (!Mesh) return;

	this->AttachToComponent(Mesh, FAttachmentTransformRules::SnapToTargetNotIncludingScale, WeaponSocketName);
}

void AWeaponBase::ApplyAppearance()
{
	if (!WeaponData) return;

	const FWeaponData& Data = WeaponData->Data;

	if (Data.Appearances.IsValidIndex(AppearanceIndex))
	{
		const FWeaponAppearance& Skin = Data.Appearances[AppearanceIndex];
		WeaponMesh->SetSkeletalMesh(Skin.WeaponMesh);
		MuzzleFlash = Skin.MuzzleFlashFX;
		WeaponIcon = Skin.WeaponIcon;
		HeadDamage = Skin.HeadDamage;
		BodyDamage = Skin.BodyDamage;
		FireRate = Skin.FireRate;
		FireSound = Skin.FireSound;
		Out_of_Ammo_SFX = Skin.Out_of_Ammo_SFX;
		MagazineCapacity = Skin.MagazineCapacity;
		RemainingAmmo = Skin.RemainingAmmo;
		Bullet_Impact_Player_SFX = Skin.Bullet_Impact_Player_SFX;
		Bullet_Impact_Player_VFX = Skin.Bullet_Impact_Player_VFX;
		Bullet_Impact_SFX = Skin.Bullet_Impact_SFX;
		Bullet_Impact_VFX = Skin.Bullet_Impact_VFX;
	}
}

void AWeaponBase::StartFire()
{
	FireComponent->StartFire();
}


void AWeaponBase::StopFire()
{
	FireComponent->StopFire();
}

void AWeaponBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AWeaponBase, WeaponData);
	DOREPLIFETIME(AWeaponBase, WeaponSocketName);
	DOREPLIFETIME(AWeaponBase, AppearanceIndex);
	DOREPLIFETIME(AWeaponBase, MagazineCapacity);
	DOREPLIFETIME(AWeaponBase, RemainingAmmo);
	DOREPLIFETIME(AWeaponBase, bIsEquipped);
}



