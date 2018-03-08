// Fill out your copyright notice in the Description page of Project Settings.


#include "TankPlayerController.h"

ATank * AtankPlayerController::GetControlledTank() const
{
	return Cast<ATank>GetPawn()
}


