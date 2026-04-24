// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "FPSGameState.generated.h"

UENUM(BlueprintType)
enum class EGameModeType : uint8
{
	Team,
	FFA
};

/**
 * 
 */
UCLASS()
class FIRSTFPS_API AFPSGameState : public AGameStateBase
{
	GENERATED_BODY()

public:
	// ∏ƒ’‚¿Ô
	UPROPERTY(Replicated, BlueprintReadOnly)
	EGameModeType SelectedMode;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};
