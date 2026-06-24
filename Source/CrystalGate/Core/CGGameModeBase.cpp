#include "Core/CGGameModeBase.h"

#include "Player/CGPlayerController.h"

ACGGameModeBase::ACGGameModeBase()
{
	PlayerControllerClass = ACGPlayerController::StaticClass();
}