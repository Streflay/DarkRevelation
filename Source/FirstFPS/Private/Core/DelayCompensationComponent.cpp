// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/DelayCompensationComponent.h"
#include "Net/UnrealNetwork.h"
#include "Core/FPSPlayerState.h"
#include "Player/FPSCharacter.h"

UDelayCompensationComponent::UDelayCompensationComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

	// Lag Compensation 只需要服务器记录历史, 不需要客户端 Tick
	SetIsReplicated(false);
}

void UDelayCompensationComponent::RecordFrame() {
	// 服务器权限
	AFPSPlayerState* PlayerState = Cast<AFPSPlayerState>(GetOwner());
	if (!PlayerState || !PlayerState->HasAuthority()) {
		return;
	}

	UWorld* World = GetWorld();
	if (!World) { return;}

	// 通过 PlayerState 获取当前 Pawn
	ACharacter* Character = Cast<ACharacter>(PlayerState->GetPawn());
	if (!Character) { return;}

	// 检查当前 Pawn 是否发生变化
	// 例如：
	// Character A 死亡
	//      ↓
	// Respawn
	//      ↓
	// Character B
	// 此时必须清掉 Character A 的历史记录
	if (TrackedCharacter.Get() != Character) {
		FrameHistory.Reset();
		TrackedCharacter = Character;
	}

	// 构造当前 HitBox
	TArray<FRewindHitBox> CurrentHitBoxes;

	if (!BuildCurrentHitBoxes(CurrentHitBoxes)) return;

	// 创建历史帧
	FRewindFrame NewFrame;
	NewFrame.Time = World->GetTimeSeconds();
	NewFrame.HitBoxes = MoveTemp(CurrentHitBoxes);

	// 添加历史记录
	FrameHistory.Add(MoveTemp(NewFrame));

	UE_LOG(LogTemp, Log, TEXT("[LagComp] %s RecordFrame Time=%.3f HitBoxes=%d"),
		*Character->GetName(), NewFrame.Time, NewFrame.HitBoxes.Num());
}


bool UDelayCompensationComponent::GetFrameAtTime(float TargetTime, FRewindFrame& OutFrame) const
{
	// 没有历史记录
	if(FrameHistory.Num() == 0)  return false;

	// 只有一帧
	if (FrameHistory.Num() == 1) {
		OutFrame = FrameHistory[0];
		return true;
	}

	const float OldestTime = FrameHistory[0].Time;
	const float NewestTime = FrameHistory.Last().Time;

	// TargetTime 比最新记录还新
	if (TargetTime >= NewestTime) {
		OutFrame = FrameHistory.Last();
		return true;
	}

	// TargetTime 比最老记录还旧
	 // 服务器已经没有这么久以前的数据

	if (TargetTime < OldestTime) return false;

	// 找到 TargetTime 两侧的 Frame
	for (int32 i = 0; i < FrameHistory.Num() - 1; ++i) {
		const FRewindFrame& OlderFrame = FrameHistory[i];
		const FRewindFrame& NewerFrame = FrameHistory[i + 1];

		if (TargetTime >= OlderFrame.Time && TargetTime <= NewerFrame.Time) {
			const float TimeDelta = NewerFrame.Time - OlderFrame.Time;
			if (TimeDelta <= KINDA_SMALL_NUMBER) {
				OutFrame = OlderFrame;
				return true;
			}

			//  计算插值比例
			const float Alpha = FMath::Clamp((TargetTime - OlderFrame.Time) / TimeDelta, 0.0f, 1.0f);
			OutFrame.Time =  TargetTime;
			OutFrame.HitBoxes.Reset();

			// 对 HitBox 进行插值
			for (const FRewindHitBox& OlderHitBox : OlderFrame.HitBoxes) {
				const FRewindHitBox* NewerHitBox = nullptr;

				for (const FRewindHitBox& Candidate : NewerFrame.HitBoxes) {
					if (Candidate.HitBoxName == OlderHitBox.HitBoxName) {
						NewerHitBox = &Candidate;
						break;
					}
				}

				// 新帧没有对应 HitBox
				if (!NewerHitBox) {
					OutFrame.HitBoxes.Add(OlderHitBox);
					continue;
				}
				OutFrame.HitBoxes.Add(InterpolateHitBox(OlderHitBox, *NewerHitBox, Alpha));
			}

			return true;
		}
	}

	return false;
}

float UDelayCompensationComponent::GetOldestRecordTime() const
{
	if(FrameHistory.Num() == 0) return 0.0f;

	return FrameHistory[0].Time;
}

float UDelayCompensationComponent::GetNewestRecordTime() const
{
	if (FrameHistory.Num() == 0) return 0.0f;

	return FrameHistory.Last().Time;
}

void UDelayCompensationComponent::ClearOldFrames(float CurrentTime)
{
	const float MinValidTime = CurrentTime - MaxRecordTime;

	while (FrameHistory.Num() > 0 && FrameHistory[0].Time < MinValidTime) {
		FrameHistory.RemoveAt(0);
	}
}

bool UDelayCompensationComponent::BuildCurrentHitBoxes(TArray<FRewindHitBox>& OutHitBoxes) const
{
	OutHitBoxes.Reset();

	// 获取 PlayerState
	AFPSPlayerState* PlayerState = Cast<AFPSPlayerState>(GetOwner());
	if (!PlayerState) return false;

	// 获取 Character
	ACharacter* Character = Cast<ACharacter>(PlayerState->GetPawn());
	if (!Character) return false;

	// 获取默认 SkeletalMesh
	USkeletalMeshComponent* Mesh = Character->GetMesh();
	if (!Mesh) return false;

	// Head HitBox
	if (!HeadBone.IsNone()) {
		const int32 HeadBoneIndex = Mesh->GetBoneIndex(HeadBone);

		if (HeadBoneIndex == INDEX_NONE) {
			UE_LOG(LogTemp, Warning, TEXT("[LagComp] Head bone '%s' not found on %s"), *HeadBone.ToString(), *Character->GetName());
		}
		else {
			// GetBoneTransform(BoneIndex)
			// 在你的 UE5 版本中返回世界空间 Transform
			const FTransform HeadBoneTransform = Mesh->GetBoneTransform(HeadBoneIndex);
			const FVector HeadBoneLocation = HeadBoneTransform.GetLocation();
			const FVector HeadCenter = HeadBoneTransform.TransformPosition(HeadOffset);

			FRewindHitBox HeadHitBox;

			HeadHitBox.HitBoxName = TEXT("Head");
			// 头部历史世界 Transform
			HeadHitBox.Transform = FTransform(HeadBoneTransform.GetRotation() , HeadCenter);
			HeadHitBox.Radius = HeadRadius;
			HeadHitBox.HalfHeight = HeadHalfHeight;
			OutHitBoxes.Add(HeadHitBox);

			DrawDebugCapsule(
				GetWorld(), 
				HeadHitBox.Transform.GetLocation(),
				HeadHitBox.HalfHeight,
				HeadHitBox.Radius,
				HeadHitBox.Transform.GetRotation(),
				FColor::Red,
				false,
				RecordInterval * 2.0f
			);
		}
	}

	// Body HitBox
	if (!BodyTopBone.IsNone() && !BodyBottomBone.IsNone()) {
		const int32 BodyTopBoneIndex = Mesh->GetBoneIndex(BodyTopBone);
		const int32 BodyBottomBoneIndex = Mesh->GetBoneIndex(BodyBottomBone);
		if (BodyTopBoneIndex == INDEX_NONE)
		{
			UE_LOG(LogTemp, Warning, TEXT("[LagComp] Body top bone '%s' not found on %s"), *BodyTopBone.ToString(), *Character->GetName());
		}
		else if (BodyBottomBoneIndex == INDEX_NONE)
		{
			UE_LOG(LogTemp, Warning, TEXT("[LagComp] Body bottom bone '%s' not found on %s"), *BodyBottomBone.ToString(), *Character->GetName());
		}
		else {
			// 获取两个骨骼的世界 Transform
			const FTransform BodyTopTransform = Mesh->GetBoneTransform(BodyTopBoneIndex);
			const FTransform BodyBottomTransform = Mesh->GetBoneTransform(BodyBottomBoneIndex);
			const FVector TopLocation = BodyTopTransform.GetLocation();
			const FVector BottomLocation = BodyBottomTransform.GetLocation();
			// Body 中心
			const FVector BodyCenter = (TopLocation + BottomLocation) * 0.5f + BodyOffset;

			// Body 轴向
			// 从 spine_01 -> neck
			const FVector BodyAxis = (TopLocation - BottomLocation).GetSafeNormal();

		   // Body 旋转
		   // 我们的 Capsule 默认沿本地 Z 轴，所以让本地 Z 对齐 BodyAxis
			FQuat BodyRotation = FQuat::Identity;
			if (!BodyAxis.IsNearlyZero()) {
				BodyRotation = FQuat::FindBetweenNormals(FVector::UpVector, BodyAxis);
			}

			// 创建 Body HitBox
			FRewindHitBox BodyHitBox;

			BodyHitBox.HitBoxName = TEXT("Body");
			BodyHitBox.Transform = FTransform(BodyRotation, BodyCenter);
			BodyHitBox.Radius = BodyRadius;
			BodyHitBox.HalfHeight = FMath::Max(BodyHalfHeight,BodyRadius);
			OutHitBoxes.Add(BodyHitBox);

			DrawDebugCapsule(
				GetWorld(),
				BodyHitBox.Transform.GetLocation(),
				BodyHitBox.HalfHeight,
				BodyHitBox.Radius,
				BodyHitBox.Transform.GetRotation(),
				FColor::Blue,
				false,
				RecordInterval * 2.0f
			);

		}
	}	
	
	return OutHitBoxes.Num() > 0;
}

FRewindHitBox UDelayCompensationComponent::InterpolateHitBox(const FRewindHitBox& A, const FRewindHitBox& B, float Alpha) const
{
	FRewindHitBox Result;
	Result.HitBoxName = A.HitBoxName;

	// 插值 HitBox 尺寸
	Result.Radius = FMath::Lerp(A.Radius, B.Radius, Alpha);
	Result.HalfHeight = FMath::Lerp(A.HalfHeight, B.HalfHeight, Alpha);

	 // Location
	const FVector Location = FMath::Lerp(A.Transform.GetLocation(), B.Transform.GetLocation(), Alpha);
	// Rotation：使用 Quaternion Slerp, 不直接插值 Rotator
	const FQuat Rotation = FQuat::Slerp(A.Transform.GetRotation(), B.Transform.GetRotation(), Alpha).GetNormalized();
	// scale
	const FVector Scale = FMath::Lerp(A.Transform.GetScale3D(), B.Transform.GetScale3D(), Alpha);
	Result.Transform = FTransform(Rotation, Location, Scale);

	return Result;
}

void UDelayCompensationComponent::BeginPlay()
{
	Super::BeginPlay();
	
	// 只允许服务器记录历史
	if (!GetOwner() || !GetOwner()->HasAuthority()) {
		PrimaryComponentTick.SetTickFunctionEnable(false);
		return;
	}

	// 避免刚开始时立刻记录一帧
	RecordTimer = RecordInterval;
	//UE_LOG(
	//	LogTemp,
	//	Warning,
	//	TEXT("[LagComp] BeginPlay - Owner: %s, HasAuthority: %s"),
	//	*GetNameSafe(GetOwner()),
	//	GetOwner() && GetOwner()->HasAuthority()
	//	? TEXT("TRUE")
	//	: TEXT("FALSE")
	//);

	//if (!GetOwner() ||
	//	!GetOwner()->HasAuthority())
	//{
	//	UE_LOG(
	//		LogTemp,
	//		Warning,
	//		TEXT("[LagComp] Disabled because this is not Authority")
	//	);

	//	PrimaryComponentTick.SetTickFunctionEnable(false);
	//	return;
	//}

	//RecordTimer = RecordInterval;

	//UE_LOG(
	//	LogTemp,
	//	Warning,
	//	TEXT("[LagComp] Server recording ENABLED")
	//);
}

void UDelayCompensationComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!GetOwner() || !GetOwner()->HasAuthority()) {
		return;
	}

	UWorld* World = GetWorld();

	if (!World) { return; }

	// 累积记录时间
	RecordTimer += DeltaTime;
	if (RecordTimer < RecordInterval) { return; }

	// 防止 Tick 因为卡顿导致时间误差越来越大 
	RecordTimer = 0.0f;

	// 记录当前帧
	RecordFrame();

	// 清理过期历史
	const float CurrentTime = World->GetTimeSeconds(); 
	ClearOldFrames(CurrentTime);
}



