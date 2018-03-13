// Fill out your copyright notice in the Description page of Project Settings.

#include "Engine/World.h"
#include "BattleTank.h"
#include "TankBarrel.h"

void UTankBarrel::Elevate(float RelativeSpeed) 
{
	// Move the barrel the right amount this frame,

	// Give a max elevation speed, and the frame time
	auto Time = GetWorld()->GetTimeSeconds();
	UE_LOG(LogTemp, Warning, TEXT("%f Barrel-Elevate() Called at speed %f"), Time, RelativeSpeed)
}


