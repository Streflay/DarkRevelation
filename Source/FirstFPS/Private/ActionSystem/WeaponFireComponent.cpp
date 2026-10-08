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
#include "ActionSystem/WeaponRecoilComponent.h"

// Sets default values for this component's properties
UWeaponFireComponent::UWeaponFireComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	SetIsReplicatedByDefault(true);
	BulletSpreadComp = CreateDefaultSubobject<UBulletSpreadComponent>(TEXT("BulletSpreadComp"));
	RecoilComp = nullptr;
}

// Called when the game starts
void UWeaponFireComponent::BeginPlay()
{
	Super::BeginPlay();
	WeaponOwner = Cast<AWeaponBase>(GetOwner());
	RecoilComp = GetOwner()->FindComponentByClass<UWeaponRecoilComponent>();

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
	if (RecoilComp)
	{
		RecoilComp->ResetRecoil();
	}

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
	if (RecoilComp)	RecoilComp->ApplyRecoil();
}

static bool RaycastRewindCapsule(const FVector& Start, const FVector& End, const FRewindHitBox& HitBox, FVector& OutHitPoint, float& OutHitDistance)
{
	// Head：使用 Sphere
	if (HitBox.HitBoxName == TEXT("Head"))
	{
		const FVector Center = HitBox.Transform.GetLocation();
		const float Radius = HitBox.Radius;
		const FVector RayDirection = (End - Start).GetSafeNormal();
		const float RayLength = FVector::Dist(Start, End);
		if (RayLength <= KINDA_SMALL_NUMBER){
			return false;
		}

		// 求球心在射线方向上的投影距离
		const FVector ToCenter = Center - Start;
		float Projection = FVector::DotProduct(ToCenter, RayDirection);

		// 必须落在实际射线线段范围内
		Projection = FMath::Clamp(Projection, 0.0f, RayLength);
		// 射线上的最近点
		const FVector ClosestPoint = Start + RayDirection * Projection;
		const float DistanceSquared = FVector::DistSquared(ClosestPoint,Center);

		// 射线与球体不相交
		if (DistanceSquared > FMath::Square(Radius)){
			return false;
		}
		OutHitPoint = ClosestPoint;
		OutHitDistance =Projection;
		return true;
	}

	// Body：继续使用原来的 Capsule=
	const float Radius = HitBox.Radius;
	const float HalfHeight = FMath::Max(HitBox.HalfHeight, Radius);
	const float SegmentHalfLength = FMath::Max(HalfHeight - Radius, 0.0f);
	const FTransform& Transform = HitBox.Transform;
	const FVector Center = Transform.GetLocation();
	const FVector Axis = Transform.GetUnitAxis(EAxis::Z);
	const FVector CapsuleStart = Center - Axis * SegmentHalfLength;
	const FVector CapsuleEnd = Center + Axis * SegmentHalfLength;
	FVector ClosestRayPoint;
	FVector ClosestCapsulePoint;
	FMath::SegmentDistToSegment(Start, End, CapsuleStart, CapsuleEnd, ClosestRayPoint, ClosestCapsulePoint);
	const float DistanceSquared = FVector::DistSquared(ClosestRayPoint,ClosestCapsulePoint);

	if (DistanceSquared > FMath::Square(Radius)){
		return false;
	}

	OutHitPoint = ClosestRayPoint;
	OutHitDistance = FVector::Dist(Start, ClosestRayPoint);
	return true;
}

void UWeaponFireComponent::DoLineTrace()
{
	if (!WeaponOwner) return;
	ACharacter* OwnerChar = Cast<ACharacter>(WeaponOwner->GetOwner());
	if (!OwnerChar) return;
	UWorld* World = GetWorld();
	if (!World) return;

	FVector Start;
	FRotator ViewRot;
	OwnerChar->GetActorEyesViewPoint(Start, ViewRot);
	FVector Dir = ViewRot.Vector();
	// 应用散射
	if (BulletSpreadComp){
		BulletSpreadComp->AddSpread();
		Dir = BulletSpreadComp->ApplySpreadToDirection(Dir);
	}
	const FVector End = Start + Dir * TraceDistance;
	// 3. 获取攻击者 PlayerState
	AFPSPlayerState* OwnerPS = OwnerChar->GetPlayerState<AFPSPlayerState>();
	if (!OwnerPS) return;
	// 4. 计算服务器回溯时间
	const float CurrentTime = World->GetTimeSeconds();
	const float PingSeconds = OwnerPS->GetPingSeconds();
	// RTT / 2，估算玩家看到画面时服务器对应的时间
	float RewindSeconds = PingSeconds * 0.5f;
	// 限制最大回溯时间
	RewindSeconds = FMath::Min(RewindSeconds, 0.20f);
	const float TargetTime = CurrentTime - RewindSeconds;

	// 5. 找出当前服务器世界中的环境阻挡
	// 注意：这里只检测 World Geometry，玩家 Pawn 不参与这个 Trace。
	// 这样即使目标现在已经跑到墙后， 我们仍然可以检查历史 HitBox。
	FCollisionQueryParams WorldParams;
	WorldParams.AddIgnoredActor(OwnerChar);

	// 忽略所有玩家 Pawn
	for (FConstPlayerControllerIterator It = World->GetPlayerControllerIterator(); It; ++It) {
		APlayerController* PC = It->Get();
		if (!PC) continue;
		APawn* Pawn = PC->GetPawn();
		if (Pawn) WorldParams.AddIgnoredActor(Pawn);
	}

	FHitResult WorldHit;
	const bool bBlockedByWorld = World->LineTraceSingleByChannel(WorldHit, Start, End, ECC_Visibility, WorldParams);
	const float WorldBlockDistance = bBlockedByWorld ? FVector::Dist(Start, WorldHit.ImpactPoint) : TraceDistance;

	// 6. 遍历所有其他玩家:不再依赖当前 LineTrace HitResults。
	ACharacter* BestTarget = nullptr;
	FRewindHitBox BestHitBox;
	FVector BestHitPoint = FVector::ZeroVector;
	float BestDistance = TraceDistance;

	// 遍历世界中的 PlayerState
	for (FConstPlayerControllerIterator It = World->GetPlayerControllerIterator(); It; ++It) {
		APlayerController* TargetPC = It->Get();
		if (!TargetPC) continue;
		ACharacter* TargetChar = Cast<ACharacter>(TargetPC->GetPawn());
		if (!TargetChar) continue;
		if (TargetChar == OwnerChar) continue;
		AFPSPlayerState* TargetPS = TargetChar->GetPlayerState<AFPSPlayerState>();
		if (!TargetPS) continue;
		UDelayCompensationComponent* DelayComp = TargetPS->DelayCompensationComponent;
		if (!DelayComp) continue;
		// 获取目标在过去 TargetTime 的历史状态
		FRewindFrame RewindFrame;
		if (!DelayComp->GetFrameAtTime(TargetTime, RewindFrame)) continue;

		// 遍历历史 HitBox
		for (const FRewindHitBox& HitBox : RewindFrame.HitBoxes) {
			FVector HitPoint = FVector::ZeroVector;
			float HitDistance = 0.0f;

			const bool bHit = RaycastRewindCapsule(Start, End, HitBox, HitPoint, HitDistance);
			
			if (!bHit) continue;
			// 这个 HitBox 必须比墙更近	 否则说明：
			// 玩家历史位置虽然被射线命中， 但世界里的墙挡在它前面。
			if (HitDistance > WorldBlockDistance) continue;

			// 找最近的目标
			if (HitDistance < BestDistance) {
				BestDistance = HitDistance;
				BestTarget = TargetChar;
				BestHitBox = HitBox;
				BestHitPoint = HitPoint;
			}
		}
	}

	// 没有命中任何历史 HitBox
	if (!BestTarget) return;

	// 根据历史 HitBox 判断头部 / 身体
	float AppliedDamage = WeaponOwner->BodyDamage;
	if (BestHitBox.HitBoxName == TEXT("Head"))
		AppliedDamage = WeaponOwner->HeadDamage;

	// 构造 Damage HitResult
	FHitResult HitResult;
	HitResult.bBlockingHit = true;
	HitResult.HitObjectHandle = FActorInstanceHandle(BestTarget);
	if (USkeletalMeshComponent* TargetMesh = BestTarget->GetMesh()) {
		HitResult.Component = TargetMesh;
	}
	HitResult.ImpactPoint = BestHitPoint;
	HitResult.Location = BestHitPoint;
	HitResult.BoneName = BestHitBox.HitBoxName;
	
	// 计算一个简单的 ImpactNormal
	FVector CapsuleCenter = BestHitBox.Transform.GetLocation();
	FVector ImpactNormal = (BestHitPoint - CapsuleCenter).GetSafeNormal();
	HitResult.ImpactNormal = ImpactNormal;

	// 服务端最终造成伤害
	UGameplayStatics::ApplyPointDamage(BestTarget, AppliedDamage, Dir, HitResult, OwnerChar->GetController(), WeaponOwner, nullptr);
	// 命中特效
	CL_ShowHitMarker();
	MulticastSpawnHitFX(BestHitPoint, ImpactNormal.Rotation(), true);
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

