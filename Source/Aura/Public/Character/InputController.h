

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "InputController.generated.h"

class UInputMappingContext;
/**
 * 
 */
UCLASS()
class AURA_API AInputController : public APlayerController
{
	GENERATED_BODY()

public:
	AInputController();
protected:
	virtual void BeginPlay() override;
private:
	UPROPERTY(EditAnywhere, Category= "Input")
	TObjectPtr<UInputMappingContext> PlayerContext;
};
