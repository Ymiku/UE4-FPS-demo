// Fill out your copyright notice in the Description page of Project Settings.

#include "DemoGameModeBase.h"
#include "UObject/ConstructorHelpers.h"
#include "FPSController.h"
#include "FPSHUD.h"
ADemoGameModeBase::ADemoGameModeBase()
{
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/BP_Character"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
		PlayerControllerClass = AFPSController::StaticClass();
		HUDClass = AFPSHUD::StaticClass();
	}
}
