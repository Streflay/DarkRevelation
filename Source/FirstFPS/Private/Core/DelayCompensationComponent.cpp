// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/DelayCompensationComponent.h"
#include "Net/UnrealNetwork.h"

UDelayCompensationComponent::UDelayCompensationComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UDelayCompensationComponent::BeginPlay()
{
	Super::BeginPlay();
	
}

void UDelayCompensationComponent::RecordPosition(FVector NewPosition, float Time)
{
	// 添加新的位置和时间到历史记录中
	PositionHistory.Add(NewPosition);
	TimeHistory.Add(Time);

	// 如果记录超过一定数量，可以清理历史
	if (PositionHistory.Num() > 100) // 例如最多保存100个记录
	{
		PositionHistory.RemoveAt(0);
		TimeHistory.RemoveAt(0);
	}
}

FVector UDelayCompensationComponent::GetPositionAtTime(float TargetTime)
{
	for (int i = PositionHistory.Num() - 1; i >= 0; --i)
	{
		if (TimeHistory[i] <= TargetTime)
		{
			return PositionHistory[i];
		}
	}

	return FVector::ZeroVector; // 如果没有找到，返回零向量
}

void UDelayCompensationComponent::OnRep_PositionHistory()
{
	// 位置同步后的处理逻辑
}

void UDelayCompensationComponent::OnRep_TimeHistory()
{
	// 时间同步后的处理逻辑
}

void UDelayCompensationComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UDelayCompensationComponent, PositionHistory);
	DOREPLIFETIME(UDelayCompensationComponent, TimeHistory);
}

