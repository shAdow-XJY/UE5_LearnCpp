// Fill out your copyright notice in the Description page of Project Settings.


#include "ChasingNPC.h"
#include "ChasingNPCController.h"

AChasingNPC::AChasingNPC()
{
    // 指定默认 AI Controller 类（确保在项目设置中“AI Controller Class”或蓝图中一致）
    AIControllerClass = AChasingNPCController::StaticClass();
}

void AChasingNPC::BeginPlay()
{
    Super::BeginPlay();
    // 其他初始化逻辑
}
