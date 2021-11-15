#pragma once
#include "StructWPropExample.generated.h"

USTRUCT(BlueprintType)
struct FStructWPropExample 
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, Category = "UE C++ book")  // (1)
    FRotator Rotator;

    UPROPERTY() // (2)
    FRotator PrivateRotator;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UE C++ book")
    uint8 v_uint8;
    UPROPERTY(EditAnywhere, Category = "UE C++ book")
    uint16 v_uint16;
    UPROPERTY(EditAnywhere, Category = "UE C++ book")
    uint32 v_uint32;
    UPROPERTY(EditAnywhere, Category = "UE C++ book")
    uint64 v_uint64;
    UPROPERTY(EditAnywhere, Category = "UE C++ book")
    int8 v_int8;
    UPROPERTY(EditAnywhere, Category = "UE C++ book")
    int16 v_int16;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UE C++ book")
    int32 v_int32;
    UPROPERTY(EditAnywhere, Category = "UE C++ book")
    int64 v_int64;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UE C++ book")
    float v_float;
    UPROPERTY(EditAnywhere, Category = "UE C++ book")
    double v_double;
    
    UPROPERTY() TArray<int32> IntArray;
};
