// Fill out your copyright notice in the Description page of Project Settings.

#include "ActionSystem/WeaponFireComponent.h"
#include "Weapon/WeaponBase.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystem.h"
#include "GameFramework/Character.h"
#include "Camera/CameraComponent.h"
#include "Net/UnrealNetwork.h"
#include "Player/FPSPlayerController.h"
#include "UI/UIManagerComponent.h"
#include "Player/FPSCharacter.h"
#include "Projectiles/FPSWeaponData.h"
#include "Weapon/Rifle.h"
#include "Weapon/Pistol.h"
#include "Projectiles/BulletSpreadComponent.h"
#include "EngineUtils.h"
#include "Core/FPSPlayerState.h"
#include "Core/DelayCompensationComponent.h"
#include "Components/CapsuleComponent.h"

// Sets default values for this component's properties
UWeaponFireComponent::UWeaponFireComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	SetIsReplicatedByDefault(true);
	BulletSpreadComp = CreateDefaultSubobject<UBulletSpreadComponent>(TEXT("BulletSpreadComp"));
}

// Called when the game starts
void UWeaponFireComponent::BeginPlay()
{
	Super::BeginPlay();
	WeaponOwner = Cast<AWeaponBase>(GetOwner());

	// 确保 FireRate 已初始化
	float OwnerFireRate = WeaponOwner->FireRate;
	if (OwnerFireRate <= 0.f) {
		OwnerFireRate = (WeaponOwner->IsA(ARifle::StaticClass())) ? 0.1f : 0.25f;
		FireRate = OwnerFireRate;
	}
	if (WeaponOwner->IsA(ARifle::StaticClass())) 
		FireMode = EFireMode::Auto;	
	else if (WeaponOwner->IsA(APistol::StaticClass())) 
		FireMode = EFireMode::Single;
	else 
		FireMode = EFireMode::Single;

	// 确保定时器句柄干净
	if (GetWorld())  GetWorld()->GetTimerManager().ClearTimer(AutoFireTimerHandle);
}

void UWeaponFireComponent::StartFire()
{
	if (bIsEquipping || bIsReloading || !WeaponOwner) return;
	bIsFiring = true;

	if (GetOwnerRole() < ROLE_Authority){
		ServerStartFire();
		return;
	}

	if (FireMode == EFireMode::Auto){
		StartAutoFireTimer(); // 服务端 Timer
	} else{
		ServerFire();
	}
}

void UWeaponFireComponent::ServerStartFire_Implementation()
{
	if (bIsEquipping || bIsReloading) return;
	if (!WeaponOwner) return;

	bIsFiring = true;
	if (FireMode == EFireMode::Auto){
		StartAutoFireTimer();
	}else{
		ServerFire();
	}
}

void UWeaponFireComponent::ServerFire_Implementation()
{
	if (!GetOwner() || !GetOwner()->HasAuthority()) 
		return; // 只在服务器执行

	if (bIsEquipping || bIsReloading || !bIsFiring) 
		return;

	// 开火前检查弹药
	if (Magazine <= 0) {
		if (RemainingAmmo_copy > 0){
			ServerReload(); // 有备用弹药才触发换弹
		} else {
			MulticastPlayOutOfAmmoFX();
		}
		return; // 没弹药就直接拦截，不允许开火
	}

	float Now = GetWorld()->GetTimeSeconds();
	float ActualFireRate = Now - LastFireTime;

	if (ActualFireRate < FireRate)  return;
	LastFireTime = Now;
	HandleFire();
	MulticastFireFX();
}

void UWeaponFireComponent::StopFire()
{
	bIsFiring = false;
	StopAutoFireTimer();

	if (GetOwnerRole() < ROLE_Authority)
		ServerStopFire();
}

void UWeaponFireComponent::StartAutoFireTimer()
{
	if (!GetWorld()) 
		return;	
	if (AutoFireTimerHandle.IsValid()) 
		GetWorld()->GetTimerManager().ClearTimer(AutoFireTimerHandle);
	GetWorld()->GetTimerManager().SetTimer( AutoFireTimerHandle, this, &UWeaponFireComponent::ServerFire, FireRate, true);
}

void UWeaponFireComponent::StopAutoFireTimer()
{
	bIsFiring = false;
	if (GetWorld()) { GetWorld()->GetTimerManager().ClearTimer(AutoFireTimerHandle); }	
	if (GetOwnerRole() < ROLE_Authority) { ServerStopFire(); }
}

void UWeaponFireComponent::OnEquipStarted()
{
	bIsEquipping = true;
	CL_DisplayAmmoUI(false);
}

void UWeaponFireComponent::OnEquipFinished()
{
	bIsEquipping = false;
	LastFireTime = -9999.f;  // 确保装备刚结束可以马上开火
	// 如果玩家按住开火键，恢复循环 Timer
	if (bIsFiring && FireMode == EFireMode::Auto) {
		StartAutoFireTimer();
	}
}

void UWeaponFireComponent::Multicast_OnEquipStarted_Implementation(float EquipDuration)
{
	bIsEquipping = true;

	if (EquipDuration <= 0.f) {
		OnEquipFinished();
		return;
	}
	// 客户端立即更新 UI（预测）
	if (WeaponOwner) {
		CL_UpdateAmmoUI(Magazine, RemainingAmmo_copy);
		CL_DisplayAmmoUI(true);
	}

	// 使用成员 TimerHandle
	if (GetWorld()) { GetWorld()->GetTimerManager().SetTimer(EquipTimerHandle, this, &UWeaponFireComponent::OnEquipFinished, EquipDuration, false); }
}

void UWeaponFireComponent::MulticastFireFX_Implementation()
{
	SpawnMuzzleFX();
	SpawnFireSound();

	AActor* RealOwner = WeaponOwner->GetOwner();   // Weapon 的 Owner = Character
	ACharacter* OwnerChar = Cast<ACharacter>(RealOwner);
	if (OwnerChar && OwnerChar->IsLocallyControlled()) {
		AFPSCharacter* FPSChar = Cast<AFPSCharacter>(OwnerChar);
		if (FPSChar)
			FPSChar->PlayEquipWeaponMontage(WeaponOwner->WeaponData->Data.FireMontage);
	}
}

void UWeaponFireComponent::MulticastPlayOutOfAmmoFX_Implementation()
{
	if (WeaponOwner && WeaponOwner->Out_of_Ammo_SFX)
	{
		ACharacter* OwnerChar = Cast<ACharacter>(WeaponOwner->GetOwner());
		if (OwnerChar && OwnerChar->IsLocallyControlled())
			UGameplayStatics::PlaySoundAtLocation(GetWorld(), WeaponOwner->Out_of_Ammo_SFX, OwnerChar->GetActorLocation());
	}
}

void UWeaponFireComponent::MulticastSpawnHitFX_Implementation(const FVector& HitLocation, const FRotator& HitRotation, bool bHitCharacter)
{
	// 播放命中特效（角色 / 地面）
	if (WeaponOwner->WeaponData) {
		if (bHitCharacter) {
			// 击中玩家
			if (WeaponOwner->Bullet_Impact_Player_VFX)
				UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), WeaponOwner->Bullet_Impact_Player_VFX, HitLocation, HitRotation);
			if (WeaponOwner->Bullet_Impact_Player_SFX)
				UGameplayStatics::PlaySoundAtLocation(GetWorld(), WeaponOwner->Bullet_Impact_Player_SFX, HitLocation);
		} else {
			if (WeaponOwner->Bullet_Impact_VFX)
				UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), WeaponOwner->Bullet_Impact_VFX, HitLocation, HitRotation);
			if (WeaponOwner->Bullet_Impact_SFX)
				UGameplayStatics::PlaySoundAtLocation(GetWorld(), WeaponOwner->Bullet_Impact_SFX, HitLocation);
		}
	}
}

void UWeaponFireComponent::CL_UpdateAmmoUI_Implementation(int32 MagazineCapacity, int32 RemainingAmmo)
{
	if (!WeaponOwner) return;
	AActor* RealOwner = WeaponOwner->GetOwner();   // Weapon 的 Owner = Character
	ACharacter* OwnerChar = Cast<ACharacter>(RealOwner);
	if (!OwnerChar || !OwnerChar->IsLocallyControlled()) return;
	AFPSPlayerController* FPSPC = Cast<AFPSPlayerController>(OwnerChar->GetController());
	if (!FPSPC) return;

	if (FPSPC->UIManager)
		FPSPC->UIManager->UpdateAmmoUI(MagazineCapacity, RemainingAmmo);
}

void UWeaponFireComponent::CL_DisplayAmmoUI_Implementation(bool bDisplay)
{
	if (!WeaponOwner) return;
	AActor* RealOwner = WeaponOwner->GetOwner();   // Weapon 的 Owner = Character
	ACharacter* OwnerChar = Cast<ACharacter>(RealOwner);
	if (!OwnerChar || !OwnerChar->IsLocallyControlled()) return;
	AFPSPlayerController* FPSPC = Cast<AFPSPlayerController>(OwnerChar->GetController());
	if (!FPSPC) return;

	if (FPSPC->UIManager)
		FPSPC->UIManager->DisplayAmmoUI(bDisplay);
}

void UWeaponFireComponent::CL_PlayReloadMontage_Implementation()
{
	if (!WeaponOwner) return;
	AActor* RealOwner = WeaponOwner->GetOwner();   // Weapon 的 Owner = Character
	ACharacter* OwnerChar = Cast<ACharacter>(RealOwner);
	if (!OwnerChar || !OwnerChar->IsLocallyControlled()) return;
	if (OwnerChar && OwnerChar->IsLocallyControlled()) {
		AFPSCharacter* FPSChar = Cast<AFPSCharacter>(OwnerChar);
		if (FPSChar)
			FPSChar->PlayEquipWeaponMontage(WeaponOwner->WeaponData->Data.EquipMontage);
	}

	bIsReloading = true; // 播放动画期间禁止开火
	if (GetWorld()){
		// 使用 WeaponData 中的 ReloadDuration
		float ReloadDuration = WeaponOwner->WeaponData->Data.EquipDuration;
		FTimerHandle ReloadTimer;
		GetWorld()->GetTimerManager().SetTimer(ReloadTimer, [this]() {
			// 动画播完允许开火
			bIsReloading = false;
			CL_UpdateAmmoUI(Magazine, RemainingAmmo_copy);
			CL_DisplayAmmoUI(true);
			}, ReloadDuration, false);
	}
}

void UWeaponFireComponent::CL_ShowHitMarker_Implementation()
{
	if (!WeaponOwner) return;
	AActor* RealOwner = WeaponOwner->GetOwner();  
	ACharacter* OwnerChar = Cast<ACharacter>(RealOwner);
	APlayerController* PC = Cast<APlayerController>(OwnerChar->GetController());
	if (PC) {
		AFPSPlayerController* FPSPC = Cast<AFPSPlayerController>(PC);
		if (FPSPC && FPSPC->UIManager && FPSPC->IsLocalController())
			FPSPC->UIManager->ShowHitMarker();
	}
}

void UWeaponFireComponent::ServerReload_Implementation()
{
	if (!WeaponOwner || bIsReloading) return;

	bIsReloading = true;
	StopAutoFireTimer(); // 避免 Timer 执行射击

	MulticastReloadFX();
	CL_PlayReloadMontage();

	if (GetWorld()) {
		float ReloadDuration = WeaponOwner->WeaponData->Data.EquipDuration;
		FTimerHandle ReloadTimer;
		GetWorld()->GetTimerManager().SetTimer(ReloadTimer, [this]() {
			int32 NeedAmmo = WeaponOwner->MagazineCapacity - Magazine;
			int32 AmmoToLoad = FMath::Min(RemainingAmmo_copy, NeedAmmo);

			Magazine += AmmoToLoad;
			RemainingAmmo_copy -= AmmoToLoad;
			bIsReloading = false;

			CL_UpdateAmmoUI(Magazine, RemainingAmmo_copy);
			CL_DisplayAmmoUI(true);

			// 如果玩家仍然按住开火键，恢复循环 Timer
			if (bIsFiring && FireMode == EFireMode::Auto) 
				StartAutoFireTimer();
			}, ReloadDuration, false);
	}
}

void UWeaponFireComponent::MulticastReloadFX_Implementation() {
}

void UWeaponFireComponent::ServerStopFire_Implementation()
{
	bIsFiring = false;
	if (GetWorld())
		GetWorld()->GetTimerManager().ClearTimer(AutoFireTimerHandle);
}

void UWeaponFireComponent::HandleFire()
{
	if (!WeaponOwner) return;
	if (GetOwnerRole() == ROLE_Authority) {
		if (Magazine <= 0) {
			ServerReload();
			return;
		}
		Magazine--;
		CL_UpdateAmmoUI(Magazine, RemainingAmmo_copy);
	}
	DoLineTrace();
}

void UWeaponFireComponent::DoLineTrace()
{
	if (!WeaponOwner) return;
	ACharacter* OwnerChar = Cast<ACharacter>(WeaponOwner->GetOwner());
	if (!OwnerChar) return;

	FVector Start;
	FRotator ViewRot;
	OwnerChar->GetActorEyesViewPoint(Start, ViewRot);
	FVector Dir = ViewRot.Vector();
	// 应用散射
	if (BulletSpreadComp){
		BulletSpreadComp->AddSpread();
		Dir = BulletSpreadComp->ApplySpreadToDirection(Dir);
	}
	FVector End = Start + Dir * TraceDistance;
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(OwnerChar);

	TArray<FHitResult> HitResults;
	GetWorld()->LineTraceMultiByChannel(HitResults, Start, End, ECC_Visibility, Params);
	 
	// 延迟补偿
	for (const FHitResult& Hit : HitResults)
	{
		ACharacter* TargetChar = Cast<ACharacter>(Hit.GetActor());
		if (!TargetChar || TargetChar == OwnerChar) continue;

		// 获取延迟补偿组件
		AFPSPlayerState* PS = Cast<AFPSPlayerState>(TargetChar->GetPlayerState());
		if (!PS || !PS->DelayCompensationComponent) continue;

		AFPSPlayerState* OwnerPS = OwnerChar->GetPlayerState<AFPSPlayerState>();
		if (!OwnerPS) return;

		// 获取回溯位置
		float PingSeconds = OwnerPS->GetPingSeconds();
		float TargetTime = GetWorld()->GetTimeSeconds() - PingSeconds * 0.5f;
		FVector CompensatedPos = PS->GetPositionAtTime(TargetTime);

		UCapsuleComponent* TargetCapsule = TargetChar->GetCapsuleComponent();
		if (!TargetCapsule) continue;

		// 用回溯位置创建虚拟 Capsule 做 Trace
		FCollisionShape CapsuleShape = FCollisionShape::MakeCapsule(TargetCapsule->GetScaledCapsuleRadius(), TargetCapsule->GetScaledCapsuleHalfHeight());
		FVector Offset = CompensatedPos - TargetChar->GetActorLocation();

		FHitResult CompHit;
		bool bHit = GetWorld()->SweepSingleByChannel(CompHit, Start + Offset, End + Offset, FQuat::Identity, ECC_Visibility, CapsuleShape, Params);

		if (bHit && CompHit.GetActor() == TargetChar) {
			float AppliedDamage = WeaponOwner->BodyDamage;
			USkeletalMeshComponent* MeshComp = Cast<USkeletalMeshComponent>(CompHit.GetComponent());
			if (MeshComp && (CompHit.BoneName == "head" || CompHit.BoneName == "Head"))
				AppliedDamage = WeaponOwner->HeadDamage;

			UGameplayStatics::ApplyPointDamage(CompHit.GetActor(), AppliedDamage, Dir, CompHit, OwnerChar->GetController(), WeaponOwner, nullptr);
			CL_ShowHitMarker();
			MulticastSpawnHitFX(CompHit.ImpactPoint, CompHit.ImpactNormal.Rotation(), true);
		}
	}
}

void UWeaponFireComponent::SpawnMuzzleFX()
{
	if (!WeaponOwner || !WeaponOwner->MuzzleFlash)
		return;
	FVector Loc = WeaponOwner->GetMuzzleLocation();
	FRotator Rot = WeaponOwner->GetMuzzleRotation();

	// 播放枪口火焰
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), WeaponOwner->MuzzleFlash, Loc, Rot);
}

void UWeaponFireComponent::SpawnFireSound()
{
	if (!WeaponOwner || !WeaponOwner->FireSound) return;
	FVector Loc = WeaponOwner->GetMuzzleLocation();
	FRotator Rot = WeaponOwner->GetMuzzleRotation();
	UGameplayStatics::PlaySoundAtLocation(GetWorld(), WeaponOwner->FireSound, Loc, 1.0f);
}

void UWeaponFireComponent::OnRep_Ammo()
{
	CL_UpdateAmmoUI(Magazine, RemainingAmmo_copy);
	CL_DisplayAmmoUI(true);
}

void UWeaponFireComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UWeaponFireComponent, WeaponOwner);
	DOREPLIFETIME(UWeaponFireComponent, Magazine);
	DOREPLIFETIME(UWeaponFireComponent, RemainingAmmo_copy);
}

