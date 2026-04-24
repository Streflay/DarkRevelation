// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyGameModeBase.h"
#include "TeamGameModeModeBase.generated.h"

/**
 * 
 */
UCLASS()
class FIRSTFPS_API ATeamGameModeModeBase : public AMyGameModeBase
{
	GENERATED_BODY()

protected:
	// ÕóÓª»ý·Ö
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Score")
	int32 CounterTerroristScore;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Score")
	int32 TerroristScore;

	virtual void BeginPlay() override;
	virtual void AddScore(APlayerController* Killer) override;
	virtual void CheckWinCondition() override;
	virtual bool CanDealDamage(
		APlayerController* Target,
		APlayerController* Attacker) override;
};
