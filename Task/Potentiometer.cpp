#include "Potentiometer.h"



Potentiometer::Potentiometer()
{
	_position = 500;	// TODO считать
}


Potentiometer::~Potentiometer()
{
}

Potentiometer & Potentiometer::operator=(const Potentiometer & obj)
{
	this->_position = obj._position;

	return *this;
}

int Potentiometer::GetPosition()
{
	return _position;
}

void Potentiometer::MoveLeft()
{
}
