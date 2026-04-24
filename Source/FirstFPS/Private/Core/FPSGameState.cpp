// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/FPSGameState.h" 
#include "Net/UnrealNetwork.h"

void AFPSGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFPSGameState, SelectedMode);
}
