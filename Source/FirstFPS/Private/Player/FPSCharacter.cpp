// Fill out your copyright notice in the Description page of Project Settings.

#include "Player/FPSCharacter.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Character.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include <Kismet\GameplayStatics.h>
#include "ActionSystem/FPSMovementStateComponent.h"
#include "ActionSystem/FPSAimOffsetComponent.h"
#include "Weapon/WeaponStateComponent.h"
#include "Weapon/WeaponInventoryComponent.h"
#include "Weapon/WeaponBase.h"
#include "Player/FPSInteractionComponent.h"
#include "Player/FPSPlayerController.h"
#include "ActionSystem/WeaponFireComponent.h"
#include "Health/HealthComponent.h"
#include "Health/DeathComponent.h"
#include "UI/TeamManagerComponent.h"
#include "Core/FPSPlayerState.h"
#include "Animation/FPSAnimInstance.h"

AFPSCharacter::AFPSCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bReplicates = true;
	bAlwaysRelevant = true;
	GetCharacterMovement()->NavAgentProps.bCanCrouch = true;

	// 新增：创建移动状态组件
	MovementStateComp = CreateDefaultSubobject<UFPSMovementStateComponent>(TEXT("MovementStateComp"));
	AimOffsetComp = CreateDefaultSubobject<UFPSAimOffsetComponent>(TEXT("AimOffsetComp"));
	WeaponStateComp = CreateDefaultSubobject<UWeaponStateComponent>(TEXT("WeaponStateComp"));
	InteractionComponent = CreateDefaultSubobject<UFPSInteractionComponent>(TEXT("InteractionComp"));
	WeaponInventoryComponent = CreateDefaultSubobject<UWeaponInventoryComponent>(TEXT("WeaponInventoryComp"));
	DeathComp = CreateDefaultSubobject<UDeathComponent>(TEXT("DeathComp"));
}

void AFPSCharacter::BeginPlay()
{
	Super::BeginPlay();	
	if (HasAuthority() && MovementStateComp)
		MovementStateComp->SetMovementState(EMovementState::Running);
}

void AFPSCharacter::Move(const FInputActionInstance& Instance)
{
	FRotator ControlRot = GetControlRotation();
	ControlRot.Pitch = 0.0f;
	ControlRot.Roll = 0.0f;

	// Get value from input (combined value from WASD keys or single Gamepad stick) and convert to Vector (x,y)
	const FVector2D AxisValue = Instance.GetValue().Get<FVector2D>();

	AddMovementInput(ControlRot.Vector(), AxisValue.X);

	const FVector RightVector = ControlRot.RotateVector(FVector::RightVector);
	AddMovementInput(RightVector, AxisValue.Y);
}

void AFPSCharacter::LookMouse(const FInputActionValue& InputValue)
{
	const FVector2D Value = InputValue.Get<FVector2D>();

	AddControllerYawInput(Value.X);
	AddControllerPitchInput(Value.Y);

	// 鼠标移动时立刻更新瞄准方向 
	if (AimOffsetComp)
		AimOffsetComp->CalculateAimOffset();
}

float AFPSCharacter::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	float DamageApplied = DamageAmount;
	if (!HasAuthority()) return 0.f;

	AFPSPlayerController* TargetPC = Cast<AFPSPlayerController>(GetController());
	AFPSPlayerController* InstigatorPC = Cast<AFPSPlayerController>(EventInstigator);

	// 队伍检查 同队，忽略伤害
	AFPSPlayerState* TargetPS = TargetPC ? TargetPC->GetPlayerState<AFPSPlayerState>() : nullptr;
	AFPSPlayerState* InstigatorPS = InstigatorPC ? InstigatorPC->GetPlayerState<AFPSPlayerState>() : nullptr;

	if (TargetPS && InstigatorPS)
	{
		if (TargetPS->TeamTag.IsValid() && InstigatorPS->TeamTag.IsValid())
		{
			if (TargetPS->TeamTag == InstigatorPS->TeamTag)
			{
				// 同队，不能伤害
				return 0.f;
			}
		}
	}

	// 获取 HealthComponent
	UHealthComponent* HealthComp = TargetPC ? TargetPC->HealthComponent : nullptr;
	if (!HealthComp) return 0.f;

	// 护甲抵消伤害
	if (HealthComp->CurrentArmor > 0.f) {
		float Absorb = FMath::Min(HealthComp->CurrentArmor, DamageApplied);
		HealthComp->SetArmor(HealthComp->CurrentArmor - Absorb);
		DamageApplied -= Absorb;
	}

	// 扣血
	if (DamageApplied > 0.f) {
		HealthComp->SetHealth(HealthComp->CurrentHealth - DamageApplied);
		if (DeathComp) {
			DeathComp->CheckDeath(HealthComp->CurrentHealth);
		}
	}

	return DamageApplied;
}

void AFPSCharacter::Input_Interact(const FInputActionValue& Value)
{
	if (InteractionComponent)
		InteractionComponent->PrimaryInteract();
}

void AFPSCharacter::Input_DropWeapon(const FInputActionValue& Value)
{
	if (WeaponInventoryComponent)
		WeaponInventoryComponent->ServerDropWeapon();
}

void AFPSCharacter::Input_SwitchPrimary()
{
	WeaponInventoryComponent->SwitchToPrimary();
}

void AFPSCharacter::Input_SwitchSecondary()
{
	WeaponInventoryComponent->SwitchToSecondary();
}

void AFPSCharacter::InputStartFire()
{
	if (!WeaponInventoryComponent) return;
	AWeaponBase* Weapon = WeaponInventoryComponent->GetCurrentWeapon();
	if (Weapon)
		Weapon->StartFire();
}

void AFPSCharacter::InputStopFire(){
	if (!WeaponInventoryComponent) return;
	AWeaponBase* Weapon = WeaponInventoryComponent->GetCurrentWeapon();
	if (Weapon)
		Weapon->StopFire();
}

void AFPSCharacter::ReloadWeapon()
{
	if (!WeaponInventoryComponent) return;
	AWeaponBase* Weapon = WeaponInventoryComponent->GetCurrentWeapon();
	if (Weapon && Weapon->FireComponent)
		Weapon->FireComponent->ServerReload_Implementation();
}

void AFPSCharacter::DropAllWeaponsOnDeath()
{
	if (!HasAuthority()) return;
	if (WeaponInventoryComponent)
		WeaponInventoryComponent->DropAllWeapons();
}

void AFPSCharacter::PlayEquipWeaponMontage(UAnimMontage* MontageToPlay)
{
	if (!MontageToPlay) return;

	USkeletalMeshComponent* MeshComp = GetMesh(); 
	if (!MeshComp) return;

	UFPSAnimInstance* Anim = Cast<UFPSAnimInstance>(GetMesh()->GetAnimInstance()); 
	if (Anim) { 
		Anim->Montage_Play(MontageToPlay, 1.0f); 
	}
}

// Called every frame
void AFPSCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (HasAuthority()) // 仅服务器记录
	{
		AFPSPlayerState* PS = GetPlayerState<AFPSPlayerState>();
		if (PS)
		{
			float CurrentTime = GetWorld()->GetTimeSeconds();
			if (CurrentTime - LastRecordedTime > 0.05f) // 每50ms记录一次
			{
				PS->RecordPosition(GetActorLocation(), CurrentTime);
				LastRecordedTime = CurrentTime;
			}
		}
	}
}


// Called to bind functionality to input
void AFPSCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AFPSCharacter::Move);
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AFPSCharacter::LookMouse);

		if (MovementStateComp)
		{
			EnhancedInputComponent->BindAction(CrouchAction, ETriggerEvent::Started, MovementStateComp, &UFPSMovementStateComponent::OnCrouchPressed);
			EnhancedInputComponent->BindAction(CrouchAction, ETriggerEvent::Completed, MovementStateComp, &UFPSMovementStateComponent::OnCrouchReleased);

			EnhancedInputComponent->BindAction(WalkAction, ETriggerEvent::Started, MovementStateComp, &UFPSMovementStateComponent::OnWalkPressed);
			EnhancedInputComponent->BindAction(WalkAction, ETriggerEvent::Completed, MovementStateComp, &UFPSMovementStateComponent::OnWalkReleased);
		}

		EnhancedInputComponent->BindAction(IA_Interact, ETriggerEvent::Triggered, this, &AFPSCharacter::Input_Interact);
		EnhancedInputComponent->BindAction(IA_DropWeapon, ETriggerEvent::Triggered, this, &AFPSCharacter::Input_DropWeapon);

		EnhancedInputComponent->BindAction(IA_SwitchPrimary, ETriggerEvent::Triggered, this, &AFPSCharacter::Input_SwitchPrimary);
		EnhancedInputComponent->BindAction(IA_SwitchSecondary, ETriggerEvent::Triggered, this, &AFPSCharacter::Input_SwitchSecondary);

		//射击机制 —— 你漏掉的
		EnhancedInputComponent->BindAction(IA_Shoot, ETriggerEvent::Started, this, &AFPSCharacter::InputStartFire);
		EnhancedInputComponent->BindAction(IA_Shoot, ETriggerEvent::Completed, this, &AFPSCharacter::InputStopFire);

		EnhancedInputComponent->BindAction(IA_ReloadWeapon, ETriggerEvent::Started, this, &AFPSCharacter::ReloadWeapon);
	}
}
