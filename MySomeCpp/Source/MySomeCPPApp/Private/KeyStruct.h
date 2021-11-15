#pragma once

#include "CoreMinimal.h"
#include "KeyStruct.generated.h"

USTRUCT(BlueprintType)
struct FKeyStruct {
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UE C++ book")
        int32 Index0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UE C++ book")
        int32 Index1;

};

bool operator==(const FKeyStruct& Key0, const FKeyStruct& Key1);
int32 GetTypeHash(const FKeyStruct& Key);