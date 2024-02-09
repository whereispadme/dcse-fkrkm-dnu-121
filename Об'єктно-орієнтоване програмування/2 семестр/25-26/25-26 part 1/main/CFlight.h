//определение класса CFlight(рейс)

#pragma once
#include "CStation.h"

class CFlight {

private:
	int trainNumber; //номер поезда
	CStation* station;//станция отправления

public:
	CFlight();
	
	CFlight(int trainNumber, const char* stationName);

	CFlight(CFlight &object);

	~CFlight();

	int getTrainNumber();
	const char* getStationName();

};