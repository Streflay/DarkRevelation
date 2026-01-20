// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FPSMovementStateComponent.generated.h"

// 前置声明
class AFPSCharacter;

UENUM(BlueprintType)
enum class EMovementState : uint8
{
	Walking UMETA(DisplayName = "Walking"),
	Running UMETA(DisplayName = "Running"),
	Crouching UMETA(DisplayName = "Crouching")
};

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class FIRSTFPS_API UFPSMovementStateComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UFPSMovementStateComponent();

protected:
	virtual void BeginPlay() override;

	// 拥有者角色
	UPROPERTY()
	AFPSCharacter* OwnerCharacter;

public:
	// 当前移动状态（带复制）
	UPROPERTY(ReplicatedUsing = OnRep_MovementState)
	EMovementState MovementState;

	UPROPERTY(EditDefaultsOnly, Category = "Movement")
	float WalkSpeed = 400.f;

	UPROPERTY(EditDefaultsOnly, Category = "Movement")
	float RunSpeed = 750.f;

	UPROPERTY()
	bool bWalkKeyHeld = false;

	UPROPERTY()
	bool bCrouchKeyHeld = false;

	// === 网络同步 ===
	UFUNCTION()
	void OnRep_MovementState();

	UFUNCTION(Server, Reliable)
	void ServerSetMovementState(EMovementState NewState);

	// === 外部接口 ===
	void SetMovementState(EMovementState NewState);
	void UpdateMovementState();

	void OnWalkPressed();
	void OnWalkReleased();
	void OnCrouchPressed();
	void OnCrouchReleased();

	UFUNCTION(BlueprintPure, Category = "Movement")
	EMovementState GetMovementState() const { return MovementState; }


	// 复制设置
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};
