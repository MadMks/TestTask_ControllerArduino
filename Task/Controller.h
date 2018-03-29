#pragma once
#include "Header.h"
#include "Potentiometer.h"
#include "Engine.h"
#include "AmperageSensor.h"


class Controller
{
	Potentiometer _potentiometer;
	Engine _engine;
	AmperageSensor _amperageSensor;

public:
	Controller();
	~Controller();

	Controller(Potentiometer p, Engine e, AmperageSensor aS);

	void StartingAPoll();

	void CheckPotentiometerReadings();
	void CheckAmperageEngine();
};

