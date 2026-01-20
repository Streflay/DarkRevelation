// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "TeamManagerComponent.generated.h"

// 声明一个蓝图可绑定的委托
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams( FOnTeamWinAnnouncement, FGameplayTag, WinningTeam, int32, Score, float, DisplayTime );

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FIRSTFPS_API UTeamManagerComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTeamManagerComponent();

	// 蓝图可绑定的胜利通知委托
	UPROPERTY(BlueprintAssignable, Category = "Team")
	FOnTeamWinAnnouncement OnTeamWinAnnouncement;

	// 客户端调用
	UFUNCTION(BlueprintCallable)
	void SelectTeam(const FGameplayTag& TeamTag);

	/** 客户端调用：选择角色 */
	UFUNCTION(BlueprintCallable)
	void SelectCharacter(const FGameplayTag& CharacterTag);

	// 客户端通知生成完成
	void CL_OnSpawnComplete();

	// 向所有客户端推送胜利通知
	UFUNCTION(BlueprintCallable)
	void UpdateTeamWinAnnouncement(FGameplayTag WinningTeam, int32 Score, float DisplayTime);

protected:
     // 服务端处理
	UFUNCTION(Server, Reliable)
	void SRV_SelectTeam(const FGameplayTag& TeamTag);

	UFUNCTION(Server, Reliable)
	void SRV_SetSelectedCharacterTag(const FGameplayTag& CharacterTag);
};
