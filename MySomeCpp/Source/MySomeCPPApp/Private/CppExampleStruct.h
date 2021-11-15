#pragma once

#include "CppExampleStruct.generated.h" // (1)

USTRUCT(BlueprintType) // (2)
struct FCppExampleStruct // (3)
{
	GENERATED_BODY() // (4)

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UE C++ book") // (5)
	float Value;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UE C++ book") // (5)
	int32 Index;
};
