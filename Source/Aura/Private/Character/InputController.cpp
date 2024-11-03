


#include "Character/InputController.h"
#include "EnhancedInputSubsystems.h"

AInputController::AInputController(){
	bReplicates = true;
}

void AInputController::BeginPlay(){
	Super::BeginPlay();
	check(PlayerContext);

	UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
	check(Subsystem);
	Subsystem->AddMappingContext(PlayerContext, 0);
	
}
