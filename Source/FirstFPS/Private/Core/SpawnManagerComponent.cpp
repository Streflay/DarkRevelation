// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/SpawnManagerComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerStart.h"
#include "Player/FPSPlayerController.h"
#include "GameFramework/GameModeBase.h"
#include "UI/TeamManagerComponent.h"
#include "Health/HealthComponent.h"
#include "MyGameModeBase.h"
#include "Core/FPSPlayerState.h"

// Sets default values for this component's properties
USpawnManagerComponent::USpawnManagerComponent()
{
	PrimaryComponentTick.bCanEverTick = false;

}

void USpawnManagerComponent::BeginPlay()
{
	Super::BeginPlay();
	FMath::RandInit(FPlatformTime::Cycles()); // 初始化随机种子
	GetWorld()->GetTimerManager().SetTimerForNextTick(this, &USpawnManagerComponent::InitializeSpawnPoints);
}


void USpawnManagerComponent::InitializeSpawnPoints()
{
	TArray<AActor*> AllStarts;
	UGameplayStatics::GetAllActorsOfClass(this, APlayerStart::StaticClass(), AllStarts);

	CounterTerroristSpawns.Empty();
	TerroristSpawns.Empty();

	for (AActor* Start : AllStarts)
	{
		FGameplayTag TeamTag;

		// 从蓝图中动态查找 "TeamTag" 变量
		if (FStructProperty* TagProp = FindFProperty<FStructProperty>(Start->GetClass(), FName("TeamTag")))
		{
			void* ValuePtr = TagProp->ContainerPtrToValuePtr<void>(Start);
			if (ValuePtr)
			{
				TeamTag = *TagProp->ContainerPtrToValuePtr<FGameplayTag>(Start);
				UE_LOG(LogTemp, Warning, TEXT("TeamTag: %s"), *TeamTag.ToString());
			}
		}
		if (TeamTag.MatchesTagExact(FGameplayTag::RequestGameplayTag("Team.CounterTerror")))
		{
			CounterTerroristSpawns.Add(Start);
		}
		else if (TeamTag.MatchesTagExact(FGameplayTag::RequestGameplayTag("Team.Terrorist")))
		{
			TerroristSpawns.Add(Start);
		}
	}
}

void USpawnManagerComponent::RequestSpawnPlayer(AFPSPlayerController* PC)
{
	if (!PC) return;
	if (!GetOwner()->HasAuthority())
		return;

	AFPSPlayerState* PS = PC->GetPlayerState<AFPSPlayerState>();
	if (!PS) return;

	const FGameplayTag& TeamTag = PS->TeamTag;

	// 队伍未选择，不生成
	if (!TeamTag.IsValid() || TeamTag == FGameplayTag::EmptyTag)
		return;

	// 角色未选择，不生成
	if (!PC->SelectedCharacterTag.IsValid() || PC->SelectedCharacterTag == FGameplayTag::EmptyTag)
		return;

	TArray<AActor*>* SpawnList = nullptr;
	if (TeamTag.MatchesTagExact(FGameplayTag::RequestGameplayTag("Team.CounterTerror")))
		SpawnList = &CounterTerroristSpawns;
	else if (TeamTag.MatchesTagExact(FGameplayTag::RequestGameplayTag("Team.Terrorist")))
		SpawnList = &TerroristSpawns;

	if (SpawnList && SpawnList->Num() > 0)
	{
		AActor* Start = (*SpawnList)[FMath::RandRange(0, SpawnList->Num() - 1)];
		if (Start)
		{
			FTransform SpawnTransform = Start->GetActorTransform();
			UWorld* World = GetWorld();
			if (!World || !World->GetAuthGameMode()) return;

			// 查找对应角色蓝图类
			TSubclassOf<APawn> PawnClass = nullptr;
			if (CharacterClassMap.Contains(PC->SelectedCharacterTag))
				PawnClass = CharacterClassMap[PC->SelectedCharacterTag];
			else
				return;

			// 生成角色前，检查玩家是否已有 Pawn（防止重复生成）
			if (APawn* ExistingPawn = PC->GetPawn())
				ExistingPawn->Destroy();

			// 生成角色
			APawn* NewPawn = World->SpawnActor<APawn>(PawnClass, SpawnTransform);
			if (NewPawn)
			{
				if (PC->HasAuthority())
					PC->Possess(NewPawn);

				if (AMyGameModeBase* GM = World->GetAuthGameMode<AMyGameModeBase>())
					GM->NotifyPlayerRespawned(PC);

				if (PC->HealthComponent) {
					PC->HealthComponent->SetHealth(PC->HealthComponent->MaxHealth);
					PC->HealthComponent->SetArmor(PC->HealthComponent->MaxArmor);
				}
				PC->TeamManager->CL_OnSpawnComplete();
			}
		}
	}
}

