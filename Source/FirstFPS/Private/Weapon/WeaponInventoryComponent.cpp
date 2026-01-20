// Fill out your copyright notice in the Description page of Project Settings.

#include "Weapon/WeaponInventoryComponent.h"
#include "Net/UnrealNetwork.h"
#include "Weapon/WeaponBase.h"
#include "Pickup/WeaponPickup.h"
#include "Weapon/WeaponStateComponent.h"
#include "GameFramework/Character.h"
#include "Components/SkeletalMeshComponent.h"
#include "Weapon/Rifle.h"
#include "Weapon/Pistol.h"
#include "Player/FPSCharacter.h"
#include "Projectiles/FPSWeaponData.h"
#include "Kismet/GameplayStatics.h"
#include "Player/FPSPlayerController.h"
#include "UI/UIManagerComponent.h"
#include "ActionSystem/WeaponFireComponent.h"

// Sets default values for this component's properties
UWeaponInventoryComponent::UWeaponInventoryComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
	SetIsReplicatedByDefault(true);
}

void UWeaponInventoryComponent::Multicast_StopCurrentMontage_Implementation()
{
	ACharacter* OwnerChar = Cast<ACharacter>(GetOwner());
	if (!OwnerChar) return;

	AFPSCharacter* FPSChar = Cast<AFPSCharacter>(OwnerChar);
	if (FPSChar) {
		USkeletalMeshComponent* Mesh = FPSChar->GetMesh();
		if (Mesh){
			UAnimInstance* AnimInstance = Mesh->GetAnimInstance();
			if (AnimInstance){
				AnimInstance->StopAllMontages(0.2f);
			}
		}
	}
}

void UWeaponInventoryComponent::CL_UpdateInventoryUI_Implementation(EWeaponSlot WeaponType, UTexture2D* WeaponThumbnail)
{
	ACharacter* OwnerChar = Cast<ACharacter>(GetOwner());
	if (!OwnerChar || !OwnerChar->IsLocallyControlled()) return;
	AFPSPlayerController* FPSPC = Cast<AFPSPlayerController>(OwnerChar->GetController());
	if (!FPSPC) return;
	if (FPSPC->UIManager)
		FPSPC->UIManager->UpdateInventory(WeaponType, WeaponThumbnail);
}

// Called when the game starts
void UWeaponInventoryComponent::BeginPlay()
{
	Super::BeginPlay();
	// 自动找到 WeaponStateComponent
	WeaponStateComponent = GetOwner()->FindComponentByClass<UWeaponStateComponent>();
}

AWeaponBase* UWeaponInventoryComponent::GetOrSpawnWeapon(TSubclassOf<AWeaponBase> WeaponClass)
{
	if (!WeaponClass) return nullptr;

	FActorSpawnParameters Params;
	Params.Owner = GetOwner();
	Params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	return GetWorld()->SpawnActor<AWeaponBase>(WeaponClass, Params);
}

AWeaponPickup* UWeaponInventoryComponent::SpawnWeaponPickup(AWeaponBase* Weapon)
{
	if (!Weapon || !GetOwner()->HasAuthority()) return nullptr; // 仅服务器 spawn

	ACharacter* OwnerChar = Cast<ACharacter>(GetOwner());
	if (!OwnerChar) return nullptr;

	FVector SpawnLoc = GetOwner()->GetActorLocation() + GetOwner()->GetActorForwardVector() * 100.f;
	// 随机轻微偏移，避免完全重叠
	SpawnLoc.X += FMath::RandRange(-30.f, 30.f);
	SpawnLoc.Y += FMath::RandRange(-30.f, 30.f);
	FRotator SpawnRot = FRotator::ZeroRotator;

	// 在地上生成 Pickup
	FActorSpawnParameters Params;
	Params.Owner = OwnerChar;
	Params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

	// 生成 Pickup
	AWeaponPickup* Pickup = GetWorld()->SpawnActor<AWeaponPickup>( AWeaponPickup::StaticClass(), SpawnLoc, SpawnRot, Params);
	if (Pickup) Pickup->bIsBeingPickedUp = false;     // 关键

	// 把武器类型绑定给Pickup
	Pickup->WeaponClass = Weapon->GetClass();
	Pickup->AppearanceIndex = Weapon->AppearanceIndex;           // 必须
	Pickup->PickupSkeletalMesh = Weapon->WeaponMesh->SkeletalMesh;
	Pickup->SetActorHiddenInGame(false);

	// 服务器本地也显示
	if (Pickup->PickupMesh && Weapon->WeaponMesh)
		Pickup->PickupMesh->SetSkeletalMesh(Weapon->WeaponMesh->SkeletalMesh);
	Pickup->bCanBePickedUp = false;

	// 0.3秒后可拾取
	FTimerHandle Timer;
	GetWorld()->GetTimerManager().SetTimer(Timer, FTimerDelegate::CreateUObject(Pickup, &AWeaponPickup::EnablePickup), 0.7f, false);
	return Pickup;
}

AWeaponBase* UWeaponInventoryComponent::GetCurrentWeapon() const
{
	if (CurrentSlot == EWeaponSlot::Primary)
		return PrimaryWeapon;
	if (CurrentSlot == EWeaponSlot::Secondary)
		return SecondaryWeapon;
	return nullptr;
}

void UWeaponInventoryComponent::ServerSetCurrentSlot_Implementation(EWeaponSlot NewSlot)
{
	CurrentSlot = NewSlot;
	OnRep_CurrentSlot();
}

void UWeaponInventoryComponent::EquipWeaponInternal(AWeaponBase* Weapon, const FName& SocketName, EWeaponSlot Slot)
{
	if (!Weapon || Weapon->bIsEquipped)
		return;

	Weapon->bIsEquipped = true;
	ACharacter* OwnerChar = Cast<ACharacter>(GetOwner());
	if (!OwnerChar) return;

	USkeletalMeshComponent* Mesh = OwnerChar->GetMesh();
	// 设置挂点名称
	Weapon->WeaponSocketName = SocketName;
	Weapon->AttachToComponent(Mesh, FAttachmentTransformRules::SnapToTargetIncludingScale, SocketName);
	// 本地立即显示武器
	Weapon->SetActorHiddenInGame(false);
	Weapon->SetOwner(OwnerChar);
	Weapon->SetInstigator(OwnerChar);
	Weapon->SetActorEnableCollision(false);
	// 切换槽位
	CurrentSlot = Slot;

	// 状态通知
	if (WeaponStateComponent)
		WeaponStateComponent->EquipWeapon(Weapon);

	// 本地播放动画
	if (OwnerChar && OwnerChar->IsLocallyControlled()) {
		AFPSCharacter* FPSChar = Cast<AFPSCharacter>(OwnerChar);
		if (FPSChar)
			FPSChar->PlayEquipWeaponMontage(Weapon->WeaponData->Data.EquipMontage);
	}

	Weapon->FireComponent->OnEquipStarted();
	// 延迟触发 OnEquipFinished（确保动画播完后允许开火）
	if (Weapon->FireComponent) {
		// 确保 WeaponOwner 正确
		Weapon->FireComponent->WeaponOwner = Weapon;
		Weapon->FireComponent->OnEquipStarted();

		// 立即刷新 AmmoUI / DisplayUI
		FTimerHandle TimerHandle_UI;
		OwnerChar->GetWorld()->GetTimerManager().SetTimer(
			TimerHandle_UI,
			[Weapon]() {
				Weapon->FireComponent->CL_DisplayAmmoUI(true);
				Weapon->FireComponent->CL_UpdateAmmoUI(Weapon->FireComponent->Magazine, Weapon->FireComponent->RemainingAmmo_copy);
			}, 0.05f, false);

		float EquipDuration = Weapon->WeaponData->Data.EquipDuration;
		Weapon->FireComponent->Multicast_OnEquipStarted(EquipDuration);
	}

	// 通知远程玩家更新显示
	if (GetOwner()->HasAuthority())
		OnRep_CurrentSlot();
}

void UWeaponInventoryComponent::EquipPrimaryWeapon(AWeaponBase* Weapon)
{
	PrimaryWeapon = Weapon;
	EquipWeaponInternal(Weapon, "S_Rifle", EWeaponSlot::Primary);
}

void UWeaponInventoryComponent::EquipSecondaryWeapon(AWeaponBase* Weapon)
{
	SecondaryWeapon = Weapon;
	EquipWeaponInternal(Weapon, "S_Pistol", EWeaponSlot::Secondary);
}

void UWeaponInventoryComponent::SwitchToPrimary()
{
	if (!PrimaryWeapon) return;

	if (GetOwner()->HasAuthority()) {
		CurrentSlot = EWeaponSlot::Primary;
		OnRep_CurrentSlot();
	}
	else
		ServerSetCurrentSlot(EWeaponSlot::Primary);
}

void UWeaponInventoryComponent::SwitchToSecondary()
{
	if (!SecondaryWeapon) return;

	if (GetOwner()->HasAuthority()) {
		CurrentSlot = EWeaponSlot::Secondary;
		OnRep_CurrentSlot();
	}
	else
		ServerSetCurrentSlot(EWeaponSlot::Secondary);
}

void UWeaponInventoryComponent::HandleWeaponEquipped(AWeaponBase* Weapon)
{
	if (!Weapon) return;

	ACharacter* OwnerChar = Cast<ACharacter>(GetOwner());
	if (!OwnerChar) return;

	USkeletalMeshComponent* Mesh = OwnerChar->GetMesh();
	if (!Mesh) return;

	// 显示武器
	Weapon->SetActorHiddenInGame(false);
	Weapon->SetActorEnableCollision(false);

	// 播放切换动画（仅本地）
	AFPSCharacter* FPSChar = Cast<AFPSCharacter>(OwnerChar);
	if (FPSChar && OwnerChar->IsLocallyControlled())
		FPSChar->PlayEquipWeaponMontage(Weapon->WeaponData->Data.EquipMontage);

	// FireComponent 的同步事件
	if (Weapon->FireComponent) {
		float EquipDuration = Weapon->WeaponData->Data.EquipDuration;
		Weapon->FireComponent->Multicast_OnEquipStarted(EquipDuration);
		Weapon->FireComponent->CL_DisplayAmmoUI(true);
		Weapon->FireComponent->CL_UpdateAmmoUI(Weapon->FireComponent->Magazine, Weapon->FireComponent->RemainingAmmo_copy);
	}
}

void UWeaponInventoryComponent::Client_HideAmmoUI_Implementation()
{
	ACharacter* OwnerChar = Cast<ACharacter>(GetOwner());
	if (!OwnerChar) return;

	if (!OwnerChar->IsLocallyControlled()) return;

	AFPSPlayerController* PC = Cast<AFPSPlayerController>(OwnerChar->GetController());
	if (PC && PC->UIManager)
		PC->UIManager->DisplayAmmoUI(false);
}

void UWeaponInventoryComponent::OnRep_PrimaryWeapon()
{
	HandleWeaponEquipped(PrimaryWeapon);
}

void UWeaponInventoryComponent::OnRep_SecondaryWeapon()
{
	HandleWeaponEquipped(SecondaryWeapon);
}

void UWeaponInventoryComponent::OnRep_CurrentSlot()
{
	AWeaponBase* WeaponToEquip = nullptr;

	if (PrimaryWeapon) {
		bool bShow = (CurrentSlot == EWeaponSlot::Primary);
		PrimaryWeapon->SetActorHiddenInGame(!bShow);
		if (bShow) WeaponToEquip = PrimaryWeapon;
	}
	if (SecondaryWeapon) {
		bool bShow = (CurrentSlot == EWeaponSlot::Secondary);
		SecondaryWeapon->SetActorHiddenInGame(!bShow);
		if (bShow) WeaponToEquip = SecondaryWeapon;
	}

	// 更新 WeaponStateComponent，让动画状态同步
	if (WeaponStateComponent)
		WeaponStateComponent->EquipWeapon(WeaponToEquip);
	if (!WeaponToEquip) {
		CL_UpdateInventoryUI(CurrentSlot, nullptr); // 显示空槽图标
		return;
	} else {
		CL_UpdateInventoryUI(CurrentSlot, WeaponToEquip->WeaponIcon);
	}
	// 使用统一武器处理方法
	HandleWeaponEquipped(WeaponToEquip);
}

void UWeaponInventoryComponent::ServerPickupWeapon_Implementation(AWeaponPickup* Pickup)
{
	if (!Pickup || !Pickup->bCanBePickedUp || !GetOwner()->HasAuthority())
		return;

	Pickup->bIsBeingPickedUp = true;
	ACharacter* OwnerChar = Cast<ACharacter>(GetOwner());
	if (!OwnerChar) return;

	AWeaponBase* Weapon = nullptr;
	TSubclassOf<AWeaponBase> WeaponClass = Pickup->WeaponClass;
	if (Pickup->HeldWeapon) {
		Weapon = Pickup->HeldWeapon;
		Pickup->HeldWeapon = nullptr;
		// 激活武器属性
		Weapon->SetOwner(OwnerChar);
		Weapon->SetInstigator(OwnerChar);
		Weapon->SetActorHiddenInGame(false);
		Weapon->SetActorEnableCollision(false);
		Weapon->SetActorTickEnabled(true);

		if (Weapon->FireComponent) {
			Weapon->FireComponent->WeaponOwner = Weapon;
			Weapon->FireComponent->RemainingAmmo_copy = Weapon->RemainingAmmo;
		}
	} else if (WeaponClass) {
		// Spawn 新武器
		FActorSpawnParameters Params;
		Params.Owner = OwnerChar;
		Params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		Weapon = GetWorld()->SpawnActor<AWeaponBase>(WeaponClass, Params);
		if (!Weapon) return;
		Weapon->AppearanceIndex = Pickup->AppearanceIndex;
		Weapon->ApplyAppearance();

		if (Weapon->FireComponent) {
			Weapon->FireComponent->Magazine = Weapon->MagazineCapacity;
			Weapon->FireComponent->RemainingAmmo_copy = Weapon->RemainingAmmo;
		}
	}
	if (!Weapon || Weapon->bIsEquipped) return;
	Weapon->FireComponent->CL_DisplayAmmoUI(true);
	Weapon->FireComponent->CL_UpdateAmmoUI(Weapon->FireComponent->Magazine, Weapon->FireComponent->RemainingAmmo_copy);

   // 允许连续丢掉当前槽位相同类型武器
	bool bOldDropping = bIsDropping;
	bIsDropping = false; // 允许 DropWeapon 连续执行
	if (PrimaryWeapon && PrimaryWeapon->GetClass() == WeaponClass)
		DropWeapon(PrimaryWeapon);
	if (SecondaryWeapon && SecondaryWeapon->GetClass() == WeaponClass)
		DropWeapon(SecondaryWeapon);
	bIsDropping = bOldDropping; // 恢复原状态

	// 装备
	if (IWeaponInterface::Execute_GetWeaponState(Weapon) == EWeaponState::Rifle)
		EquipPrimaryWeapon(Weapon);
	if (IWeaponInterface::Execute_GetWeaponState(Weapon) == EWeaponState::Pistol)
		EquipSecondaryWeapon(Weapon);

	Pickup->SetActorEnableCollision(false);
	Pickup->bCanBePickedUp = false;
	FTimerHandle TimerHandle_Destroy;
	GetWorld()->GetTimerManager().SetTimer(
		TimerHandle_Destroy,
		[Pickup]() {
			if (Pickup && !Pickup->IsPendingKillPending())
				Pickup->Destroy();
		}, 0.20f, false);
}

void UWeaponInventoryComponent::ServerDropWeapon_Implementation()
{
	if (!GetOwner()->HasAuthority()) return;

	AWeaponBase* WeaponToDrop = nullptr;
	if (CurrentSlot == EWeaponSlot::Primary && PrimaryWeapon)
		WeaponToDrop = PrimaryWeapon;
	else if (CurrentSlot == EWeaponSlot::Secondary && SecondaryWeapon)
		WeaponToDrop = SecondaryWeapon;
	if (WeaponToDrop)
		DropWeapon(WeaponToDrop);
}

void UWeaponInventoryComponent::DropWeapon(AWeaponBase* WeaponToDrop)
{
	if (!WeaponToDrop || !GetOwner()->HasAuthority() || bIsDropping) return;
	// 死亡后允许连续丢武器，但不允许同一武器重复丢
	Multicast_StopCurrentMontage();
	bIsDropping = true;
	WeaponToDrop->bIsEquipped = false;
	WeaponToDrop->SetOwner(nullptr);
	WeaponToDrop->SetInstigator(nullptr);
	if (WeaponToDrop->FireComponent) {
		WeaponToDrop->FireComponent->bIsFiring = false;
		WeaponToDrop->FireComponent->bIsEquipping = false;
		WeaponToDrop->RemainingAmmo = WeaponToDrop->FireComponent->RemainingAmmo_copy;
	}

	// 记录当前槽位（必须先记录，后面会清空）
	EWeaponSlot OldSlot = (WeaponToDrop == PrimaryWeapon) ? EWeaponSlot::Primary : (WeaponToDrop == SecondaryWeapon) ? EWeaponSlot::Secondary : EWeaponSlot::None;

	// --- 1. 生成 Pickup ---
	AWeaponPickup* Pickup = SpawnWeaponPickup(WeaponToDrop);
	if (Pickup) {
		// 保存真实武器实例，而不是 Destroy + Spawn
		Pickup->HeldWeapon = WeaponToDrop;
	}

	// --- 2. 隐藏武器并清空槽位 ---
	WeaponToDrop->SetActorHiddenInGame(true);
	WeaponToDrop->SetActorEnableCollision(false);
	WeaponToDrop->SetActorTickEnabled(false);
	WeaponToDrop->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);

	Client_HideAmmoUI();

	if (WeaponToDrop == PrimaryWeapon) PrimaryWeapon = nullptr;
	else if (WeaponToDrop == SecondaryWeapon) SecondaryWeapon = nullptr;

	// --- 3. 刷 UI (先更新 UI，不切换槽位) ---
	OnRep_CurrentSlot();

	// --- 4. 最后自动切换槽位 ---
	if (OldSlot == CurrentSlot) {
		if (PrimaryWeapon) CurrentSlot = EWeaponSlot::Primary;
		else if (SecondaryWeapon) CurrentSlot = EWeaponSlot::Secondary;
		else CurrentSlot = EWeaponSlot::None;
		OnRep_CurrentSlot();
	}
	

	FTimerHandle ResetHandle;
	GetWorld()->GetTimerManager().SetTimer(ResetHandle, [this]() { bIsDropping = false; }, 0.20f, false);
}

void UWeaponInventoryComponent::DropAllWeapons()
{
	if (!GetOwner()->HasAuthority()) return;

	bool bOldDropping = bIsDropping;
	if (PrimaryWeapon)
		DropWeapon(PrimaryWeapon);
	bIsDropping = false; // 允许连续丢武器
	if (SecondaryWeapon)
		DropWeapon(SecondaryWeapon);
	bIsDropping = bOldDropping;

	CurrentSlot = EWeaponSlot::None;
	OnRep_CurrentSlot();
}

void UWeaponInventoryComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UWeaponInventoryComponent, PrimaryWeapon);
	DOREPLIFETIME(UWeaponInventoryComponent, SecondaryWeapon);
	DOREPLIFETIME(UWeaponInventoryComponent, CurrentSlot);
}





