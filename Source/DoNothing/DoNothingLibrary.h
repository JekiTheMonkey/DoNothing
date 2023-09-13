#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"

#include "DoNothingLibrary.generated.h"

/**
 * https://landelare.github.io/2022/04/30/uses-of-a-useless-node.html
 */
UCLASS()
class UDoNothingLibrary
	: public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintCallable, Category="Do Nothing", meta=(CompactNodeTitle="Do Nothing", DevelopmentOnly))
	static void DoNothing()
	{
		// Do nothing
	}
};
