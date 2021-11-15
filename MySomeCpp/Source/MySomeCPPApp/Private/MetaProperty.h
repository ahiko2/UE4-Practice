#pragma once
#include "MetaProperty.generated.h"

USTRUCT(BlueprintType)
struct FMetaProperty {
	GENERATED_BODY()

  UPROPERTY(EditAnywhere,
			Meta = (DisplayName = "Velocity [km/h]",
				ClampMin = 0, ClampMax = 200,
				UIMin = 30, UIMax = 120))
	float Velocity = 60.0f;
  
};
