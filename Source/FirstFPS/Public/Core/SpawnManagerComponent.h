// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "SpawnManagerComponent.generated.h"

class AFPSPlayerController;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FIRSTFPS_API USpawnManagerComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USpawnManagerComponent();
	// 初始化出生点列表
	void InitializeSpawnPoints();

	// 请求生成角色（由 GameMode 调用）
	void RequestSpawnPlayer(AFPSPlayerController* PC);

protected:
	UPROPERTY(EditDefaultsOnly, Category = "Spawn")
	TMap<FGameplayTag, TSubclassOf<APawn>> CharacterClassMap;

	virtual void BeginPlay() override;

private:
	UPROPERTY()
	TArray<AActor*> CounterTerroristSpawns;

	UPROPERTY()
	TArray<AActor*> TerroristSpawns;		
};
