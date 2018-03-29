#pragma once
#include "Header.h"

class Engine
{
	int _electricity;

	int _amperage;

	Turn _turn;

public:
	Engine();
	~Engine();

	int GetAmperage();

	void RotationLeft();

	void RotationRight();

	void Stop();

	Turn GetTurn();
};

