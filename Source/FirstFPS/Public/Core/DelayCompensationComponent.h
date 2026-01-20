// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DelayCompensationComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FIRSTFPS_API UDelayCompensationComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UDelayCompensationComponent();

    // 玩家位置历史记录（用于延迟补偿）
    UPROPERTY(ReplicatedUsing = OnRep_PositionHistory, BlueprintReadOnly, Category = "PositionHistory")
    TArray<FVector> PositionHistory;

    // 更新时间历史记录
    UPROPERTY(ReplicatedUsing = OnRep_TimeHistory, BlueprintReadOnly, Category = "PositionHistory")
    TArray<float> TimeHistory;

    // 记录位置并更新
    UFUNCTION(BlueprintCallable, Category = "PositionHistory")
    void RecordPosition(FVector NewPosition, float Time);

    // 获取历史位置
    FVector GetPositionAtTime(float TargetTime);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
    // 网络同步相关
    UFUNCTION()
    void OnRep_PositionHistory();

    UFUNCTION()
    void OnRep_TimeHistory();

    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;;
};
