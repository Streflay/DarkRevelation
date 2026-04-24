// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GameFramework/PlayerStart.h"
#include "GameplayTagContainer.h"
#include "MyGameModeBase.generated.h"

class USpawnManagerComponent;

UCLASS()
class FIRSTFPS_API AMyGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	AMyGameModeBase();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Managers")
	USpawnManagerComponent* SpawnManager;

	UFUNCTION(Server, Reliable)
	void NotifyPlayerDied(APlayerController* Victim, APlayerController* Killer);

	void NotifyPlayerRespawned(APlayerController* PC);

	// 判定胜利并增加积分
	UFUNCTION(BlueprintCallable, Category = "Game")
	// void AddTeamScore();
	virtual void AddScore(APlayerController* Killer);

	// 胜利判定（不同模式重写）
	virtual void CheckWinCondition();

	virtual bool CanDealDamage(
		APlayerController* Target,
		APlayerController* Attacker);

	// 回合重置与批量重生
	UFUNCTION(BlueprintCallable)
	void ResetRoundAndRespawnPlayers(float RespawnDelay = 3.f);

	UFUNCTION(BlueprintCallable)
	void HandleFFARespawn(APlayerController* Victim);

protected:
	// 当前在线的玩家列表（只在服务器端有效）
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Players")
	TArray<APlayerController*> ConnectedPlayers;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Players")
	TArray<APlayerController*> AlivePlayers;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Players")
	TArray<APlayerController*> DeadPlayers;

	FTimerHandle RespawnTimerHandle;

protected:
	virtual void BeginPlay() override;

	// 玩家进入时触发（仅服务器）
	virtual void PostLogin(APlayerController* NewPlayer) override;

	// 玩家退出时触发（仅服务器）
	virtual void Logout(AController* Exiting) override;

	// 推送胜利通知给玩家
	void BroadcastTeamWin(FGameplayTag WinningTeam, int32 Score);

	UFUNCTION()
	void BroadcastFFAWinner(APlayerController* Winner, int32 Kills);
};
