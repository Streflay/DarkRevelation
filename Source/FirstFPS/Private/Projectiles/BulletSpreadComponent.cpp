// Fill out your copyright notice in the Description page of Project Settings.


#include "Projectiles/BulletSpreadComponent.h"

// Sets default values for this component's properties
UBulletSpreadComponent::UBulletSpreadComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

FVector UBulletSpreadComponent::ApplySpreadToDirection(const FVector& ForwardDirection)
{
	float TotalSpread = BaseSpread + CurrentSpread;

	// 随机角度（度数 -> 弧度）
	float Radius = FMath::RandRange(0.f, TotalSpread);
	float Angle = FMath::RandRange(0.f, 360.f);
	float RandYaw = Radius * FMath::Cos(FMath::DegreesToRadians(Angle));
	float RandPitch = Radius * FMath::Sin(FMath::DegreesToRadians(Angle));

	FRotator SpreadRot = ForwardDirection.Rotation();
	SpreadRot.Yaw += RandYaw;
	SpreadRot.Pitch += RandPitch;

	return SpreadRot.Vector();
}

void UBulletSpreadComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	// 散射随时间自然衰减
	if (CurrentSpread > 0.f)
	{
		CurrentSpread -= DeltaTime * 3.f;
		CurrentSpread = FMath::Max(CurrentSpread, 0.f);
	}
}

void UBulletSpreadComponent::AddSpread()
{
	CurrentSpread += ContinuousFireIncrement;
	CurrentSpread = FMath::Clamp(CurrentSpread, 0.f, 10.f);
}




