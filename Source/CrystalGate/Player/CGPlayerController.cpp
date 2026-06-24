#include "Player/CGPlayerController.h"

#include "Player/CGPlayerCameraManager.h"

ACGPlayerController::ACGPlayerController()
{
	PlayerCameraManagerClass = ACGPlayerCameraManager::StaticClass();
}