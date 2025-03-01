// Fill out your copyright notice in the Description page of Project Settings.


#include "ChasingNPCController.h"
#include "Kismet/GameplayStatics.h"

void AChasingNPCController::BeginPlay()
{
    Super::BeginPlay();

    // 获取主角 Pawn（索引 0 通常为玩家主角）
    PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
}

void AChasingNPCController::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // 如果主角存在，则持续追踪
    if (PlayerPawn)
    {
        // 调用内置导航移动到主角位置
        MoveToActor(PlayerPawn, AcceptanceRadius);
    }
}
