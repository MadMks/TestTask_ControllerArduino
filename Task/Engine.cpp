#include "Engine.h"



Engine::Engine()
{
	_electricity = 0;
}


Engine::~Engine()
{
}

int Engine::GetAmperage()
{
	return 0;
}

void Engine::RotationLeft()
{
}

void Engine::RotationRight()
{
}

Turn Engine::GetTurn()
{
	return _turn;
}
