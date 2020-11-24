#include "GroundBeforeUsingState.h"

void GroundBeforeUsingState::handle(SportsGround * ground)
{
	ground->keepOut();
	ground->setSafeTeam();
	ground->prepareWaitingRoom();
	ground->broadcast();
}

