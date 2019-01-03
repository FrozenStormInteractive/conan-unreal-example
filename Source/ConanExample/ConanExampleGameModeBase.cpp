// Copyright (c) 2018 ArsenStudio

#include "ConanExampleGameModeBase.h"
#include "UObject/ConstructorHelpers.h"

AConanExampleGameModeBase::AConanExampleGameModeBase() : Super()
{
    static ConstructorHelpers::FClassFinder<UUserWidget> ClassFinder(TEXT("/Game/UI/WBP_SodiumInterface"));

    if (ClassFinder.Succeeded()) {
        SodiumWidgetClass = ClassFinder.Class;
    }
}


void AConanExampleGameModeBase::BeginPlay()
{
    Super::BeginPlay();

    if (SodiumWidgetClass) {
        SodiumWidget = CreateWidget<UUserWidget>(GetWorld(), SodiumWidgetClass);
        SodiumWidget->AddToViewport();
    }

    FInputModeUIOnly inputModeData;
    inputModeData.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);

    APlayerController* playerController = GetWorld()->GetFirstPlayerController();
    playerController->SetInputMode(inputModeData);
    playerController->bShowMouseCursor = true;
}
