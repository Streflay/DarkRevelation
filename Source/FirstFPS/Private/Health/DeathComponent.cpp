 // Fill out your copyright notice in the Description page of Project Settings.

#include "Health/DeathComponent.h"
#include "Net/UnrealNetwork.h"
#include "Player/FPSCharacter.h"
#include "Player/FPSPlayerController.h"
#include "MyGameModeBase.h"
#include "UI/TeamManagerComponent.h"
#include "Core/SpawnManagerComponent.h"
#include "Core/FPSPlayerState.h"

// Sets default values for this component's properties
UDeathComponent::UDeathComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
	SetIsReplicatedByDefault(true);
}

void UDeathComponent::CheckDeath(float CurrentHealth)
{
    if (bIsDead) return;
    if (CurrentHealth > 0.f) return;
    bIsDead = true;

    // 服务器触发 Multicast
    if (!GetOwner()->HasAuthority()) return;

    AFPSCharacter* Char = Cast<AFPSCharacter>(GetOwner());
    if (!Char) return;

    AFPSPlayerController* VictimPC = Cast<AFPSPlayerController>(Char->GetController());
    AFPSPlayerController* KillerController = Cast<AFPSPlayerController>(Char->LastDamageInstigator);

    if (AMyGameModeBase* GM = GetWorld()->GetAuthGameMode<AMyGameModeBase>()) {
        GM->NotifyPlayerDied(VictimPC, KillerController);
    }

    Multicast_OnDeath();
}


// Called when the game starts
void UDeathComponent::BeginPlay()
{
	Super::BeginPlay();	

    bIsDead = false;
}

void UDeathComponent::Multicast_OnDeath_Implementation()
{
	// 所有客户端执行
	OnDeath.Broadcast();

    // 告诉 Character 去掉武器（只角色能掉）
    if (AFPSCharacter* Char = Cast<AFPSCharacter>(GetOwner()))
    {
        Char->DropAllWeaponsOnDeath();   // 添加的函数
    }
}

void UDeathComponent::Server_RespawnOwner_Implementation()
{
    AFPSCharacter* DeadChar = Cast<AFPSCharacter>(GetOwner());
    if (!DeadChar) return;

    AFPSPlayerController* PC = Cast<AFPSPlayerController>(DeadChar->GetController());
    if (!PC) return;

    if (AMyGameModeBase* GM = Cast<AMyGameModeBase>(GetWorld()->GetAuthGameMode()))
    {
        // 使用 PlayerState 中的队伍和角色
        if (PC->SelectedCharacterTag.IsValid())
        {
            GM->SpawnManager->RequestSpawnPlayer(PC);
        }
    }

    // 销毁旧 Pawn（死亡的身体）
    DeadChar->Destroy();
}

void UDeathComponent::HandleRespawn()
{
    if (GetOwner()->HasAuthority())
    {
        Server_RespawnOwner(); // 服务器内部调用，保证权威
    }
}


