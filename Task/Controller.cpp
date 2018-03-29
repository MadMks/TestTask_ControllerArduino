#include "Controller.h"



Controller::Controller()
{
}


Controller::~Controller()
{
}

Controller::Controller(Potentiometer p, Engine e, AmperageSensor aS)
{
	_potentiometer = p;
	_engine = e;
	_amperageSensor = aS;
}

// «апускаем опрос контроллером.
void Controller::StartingAPoll()
{
	while (true) {
		CheckPotentiometerReadings();
		CheckAmperageEngine();
	}
}

// ѕровер€ем значени€ потенциометра.
void Controller::CheckPotentiometerReadings()
{
	if (_potentiometer.GetPosition() == 0)
	{
		_engine.RotationRight();
	}
	else if (_potentiometer.GetPosition() == 1000)
	{
		_engine.RotationLeft();
	}
	else if (_potentiometer.GetPosition() > 1200
		&& _potentiometer.GetPosition() < 1500)
	{
		// ≈сли последние=й раз двигатель попорачисалс€ вправо
		if (_engine.GetTurn() == eToTheRight) {
			_engine.RotationRight();
		}
		// иначе если последний раз поворачивалс€ влево.
		else if(_engine.GetTurn() == eToTheLeft) {
			_engine.RotationLeft();
		}
	}
}

// ѕровер€ем ток двигател€.
void Controller::CheckAmperageEngine()
{
	if (_potentiometer.GetPosition() < 1200)
	{
		if (_amperageSensor.GetAmperage() == _amperageSensor.GetMaxAmperage())
		{
			_engine.Stop();
		}
	}
}



