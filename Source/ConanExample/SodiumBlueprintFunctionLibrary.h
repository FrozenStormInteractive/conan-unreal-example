// Copyright (c) 2018 ArsenStudio

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "sodium.h"
#include "SodiumBlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class CONANEXAMPLE_API USodiumBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	
    UFUNCTION(BlueprintCallable, Category = "Sodium", meta=(DisplayName = "Init Sodium"))
    static void Init();

    UFUNCTION(BlueprintCallable, Category = "Sodium|Argon", meta = (DisplayName = "Hash Password"))
    static FString ArgonHashPassword(FString password);

    UFUNCTION(BlueprintCallable, Category = "Sodium|Argon", meta = (DisplayName = "Check Password"))
    static bool ArgonCheckPassword(FString hashed, FString password);
};
