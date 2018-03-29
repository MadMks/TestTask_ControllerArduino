#pragma once
class Potentiometer
{
	const int _minValue = 0;
	const int _maxValue = 1500;

	int _position;

public:
	Potentiometer();
	~Potentiometer();


	Potentiometer& operator=(const Potentiometer& obj);

	int GetPosition();

	void MoveLeft();
};

