// Copyright (c) 2018 ArsenStudio

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Blueprint/UserWidget.h"
#include "ConanExampleGameModeBase.generated.h"

/**
 *
 */
UCLASS()
class CONANEXAMPLE_API AConanExampleGameModeBase : public AGameModeBase
{
    GENERATED_BODY()

    TSubclassOf<class UUserWidget> SodiumWidgetClass;

    UUserWidget* SodiumWidget;

public:
    AConanExampleGameModeBase();

    virtual void BeginPlay() override;
};
