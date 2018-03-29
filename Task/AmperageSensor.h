#pragma once
class AmperageSensor
{
	int _amperage;

	const int _maxAmperage = 5;

public:
	AmperageSensor();
	~AmperageSensor();

	int GetAmperage();
	int GetMaxAmperage();
};

