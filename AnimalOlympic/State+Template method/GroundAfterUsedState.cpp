#include "GroundAfterUsedState.h"

void GroundAfterUsedState::handle(SportsGround * ground)
{
	ground->cleanWaste();
	ground->purifyGround();
	ground->setSafeGate();
}
