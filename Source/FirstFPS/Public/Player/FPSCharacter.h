// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputAction.h"
#include "FPSCharacter.generated.h"

class UInputMappingContext;
class UInputAction;
class UFPSMovementStateComponent;
class UFPSFootstepComponent;
class UFPSAimOffsetComponent;
class UWeaponStateComponent;
class UFPSInteractionComponent;
class UWeaponInventoryComponent;
class UHealthComponent;

UCLASS()
class FIRSTFPS_API AFPSCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFPSCharacter();

	// === 组件引用 ===
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UFPSMovementStateComponent* MovementStateComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UFPSAimOffsetComponent* AimOffsetComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UWeaponStateComponent* WeaponStateComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UFPSInteractionComponent* InteractionComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UWeaponInventoryComponent* WeaponInventoryComponent;

	// FPSCharacter.h
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class UDeathComponent* DeathComp;

	float LastRecordedTime;

	// FPSCharacter.h
	UFUNCTION(BlueprintCallable)
	void PlayEquipWeaponMontage(UAnimMontage* MontageToPlay);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<UInputAction> MoveAction;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<UInputAction> LookAction;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<UInputAction> IA_Shoot;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<UInputAction> CrouchAction;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<UInputAction> WalkAction;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<UInputAction> IA_Interact;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<UInputAction> IA_DropWeapon;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputAction* IA_SwitchPrimary;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputAction* IA_SwitchSecondary;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputAction* IA_ReloadWeapon;

	// 玩家交互组件
	void Move(const FInputActionInstance& Instance);
	void LookMouse(const FInputActionValue& InputValue);

	void Input_Interact(const FInputActionValue& Value);
	void Input_DropWeapon(const FInputActionValue& Value);

	void Input_SwitchPrimary();
	void Input_SwitchSecondary();

	void InputStartFire();
	void InputStopFire();

	void ReloadWeapon();

public:	
	void DropAllWeaponsOnDeath();
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
