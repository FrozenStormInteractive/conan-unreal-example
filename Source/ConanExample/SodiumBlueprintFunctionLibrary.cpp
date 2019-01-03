// Copyright (c) 2018 ArsenStudio

#include "SodiumBlueprintFunctionLibrary.h"

void USodiumBlueprintFunctionLibrary::Init()
{
    sodium_init();

    if (sodium_init() != -1) {
        UE_LOG(LogTemp, Log, TEXT("Sodium initialized"));
    } else {
        UE_LOG(LogTemp, Error, TEXT("Sodium cannot be initialized"));
    }
}

FString USodiumBlueprintFunctionLibrary::ArgonHashPassword(FString password)
{
    char hashed_password[crypto_pwhash_STRBYTES];

    if (crypto_pwhash_str(hashed_password, TCHAR_TO_ANSI(*password), password.Len(), crypto_pwhash_OPSLIMIT_SENSITIVE, crypto_pwhash_MEMLIMIT_SENSITIVE) != 0) {
        /* out of memory */
    }

    return FString(UTF8_TO_TCHAR(hashed_password));
}

bool USodiumBlueprintFunctionLibrary::ArgonCheckPassword(FString hashed, FString password)
{
    return crypto_pwhash_str_verify(TCHAR_TO_ANSI(*hashed), TCHAR_TO_ANSI(*password), password.Len()) == 0;
}
