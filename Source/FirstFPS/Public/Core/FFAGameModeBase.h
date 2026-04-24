// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyGameModeBase.h"
#include "FFAGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class FIRSTFPS_API AFFAGameModeBase : public AMyGameModeBase
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditDefaultsOnly)
	int32 TargetKills = 30;

	UPROPERTY(EditDefaultsOnly)
	bool bGameEnded = false;

	virtual void CheckWinCondition() override;
	virtual void AddScore(APlayerController* Killer) override;
	virtual void BeginPlay() override;
};
