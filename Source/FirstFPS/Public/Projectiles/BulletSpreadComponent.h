// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BulletSpreadComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FIRSTFPS_API UBulletSpreadComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UBulletSpreadComponent();

	// 基础散射角度（度数）
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spread")
	float BaseSpread = 1.5f;

	// 移动时叠加散射
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spread")
	float MovementSpread = 1.0f;

	// 连射叠加值
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spread")
	float ContinuousFireIncrement = 0.2f;

	// 当前叠加散射（随时间衰减）
	float CurrentSpread = 0.f;

	// 玩家每次开火后增加散射
	void AddSpread();

	// 根据当前散射计算一个随机方向
	FVector ApplySpreadToDirection(const FVector& ForwardDirection);

	// 每帧衰减散射
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;		
};
