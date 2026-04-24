// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "GameplayTagContainer.h"
#include "FPSPlayerState.generated.h"

class UDelayCompensationComponent;

UCLASS()
class FIRSTFPS_API AFPSPlayerState : public APlayerState
{
	GENERATED_BODY()

public:
    AFPSPlayerState();

    UPROPERTY(ReplicatedUsing = OnRep_TeamTag, BlueprintReadOnly, Category = "Team")
    FGameplayTag TeamTag;

    UFUNCTION()
    void OnRep_TeamTag();

    void SetTeam(const FGameplayTag& NewTeam);

    UFUNCTION(BlueprintCallable, Category = "Team")
    FGameplayTag GetTeamTag() const { return TeamTag; }

    /* ---------------- 计分板数据 ---------------- */

    UPROPERTY(Replicated, BlueprintReadOnly)
    int32 Kills = 0;

    UPROPERTY(Replicated, BlueprintReadOnly)
    int32 Deaths = 0; 

    UFUNCTION(BlueprintPure)
    float GetKD() const;

    UFUNCTION(BlueprintCallable, Category = "Network")
    float GetPingSeconds() const
    {
        return ExactPing * 0.001f; // ExactPing 是 public float，单位毫秒
    }

public:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "DelayCompensation")
    UDelayCompensationComponent* DelayCompensationComponent;

    // 记录玩家位置
    UFUNCTION(BlueprintCallable, Category = "DelayCompensation")
    void RecordPosition(FVector NewPosition, float Time);

    // 获取历史位置
    UFUNCTION(BlueprintCallable, Category = "DelayCompensation")
    FVector GetPositionAtTime(float TargetTime);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};
