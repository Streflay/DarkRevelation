// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include <EnhancedInputSubsystems.h>
#include "GameplayTagContainer.h"
#include "Blueprint/UserWidget.h"
#include "FPSPlayerController.generated.h"

class UUIManagerComponent;
class UTeamManagerComponent;
class UHealthComponent;
class UModeSelectComponent;


/**
 * 
 */
UCLASS()
class FIRSTFPS_API AFPSPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AFPSPlayerController();

	/** 服务端 / 客户端调用的统一接口 */
	UFUNCTION(BlueprintCallable, Category = "UI")
	void ShowHideWidget(const FGameplayTag& WidgetTag, bool bShow);

	UPROPERTY(BlueprintReadWrite, Category = "Player")
	FGameplayTag SelectedCharacterTag;

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<UInputMappingContext> DefaultMapping;

	UPROPERTY(VisibleAnywhere)
	bool bTeamWinAnnouncementPending = false;

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UUIManagerComponent* UIManager;

	UFUNCTION(Client, Reliable)
	void CL_ShowHideWidget(const FGameplayTag& WidgetTag, bool bShow);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UTeamManagerComponent* TeamManager;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UHealthComponent* HealthComponent;

	UFUNCTION(Client, Reliable)
	void Client_UpdateTeamWinAnnouncement(FGameplayTag WinningTeam, int32 Score, float DisplayTime);

	UFUNCTION(Client, Reliable)
	void Client_UpdateFFAWinner(int32 Kills);

	UFUNCTION(Client, Reliable)
	void Client_UpdateKills(int32 Kills);

	UFUNCTION(Server, Reliable, BlueprintCallable)
	void Server_StartFFA();

	UFUNCTION(Server, Reliable, BlueprintCallable)
	void Server_StartTeam();
};
