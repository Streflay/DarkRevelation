// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FPSAimOffsetComponent.generated.h"

class AFPSCharacter;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FIRSTFPS_API UFPSAimOffsetComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UFPSAimOffsetComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	
	UPROPERTY()
	AFPSCharacter* OwnerCharacter;

	// 瞄准偏移（控制旋转相对角色旋转）
	UPROPERTY(ReplicatedUsing = OnRep_AimOffset, BlueprintReadOnly, Category = "Aim")
	FRotator AimOffset;

	UFUNCTION()
	void OnRep_AimOffset();

	// 服务端同步偏移
	UFUNCTION(Server, Reliable)
	void ServerUpdateAimOffset(FRotator NewOffset);

public:	

	// 主更新逻辑
	void CalculateAimOffset();
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};
