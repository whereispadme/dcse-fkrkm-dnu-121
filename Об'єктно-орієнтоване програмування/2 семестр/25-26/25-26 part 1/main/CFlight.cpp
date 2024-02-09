#include "CFlight.h"

CFlight::CFlight()
{

	this->station = nullptr;
	this->trainNumber = 0;

}

CFlight::CFlight(int trainNumber, const char * stationName)
{

	this->station = new CStation(stationName);
	this->trainNumber = trainNumber;

}

CFlight::CFlight(CFlight & object)
{

	this->station = new CStation(object.station->getStationName());
	this->trainNumber = object.trainNumber;

}

CFlight::~CFlight()
{

	if (this->station != nullptr)
		delete this->station;

}

int CFlight::getTrainNumber()
{
	
	return this->trainNumber;

}

const char* CFlight::getStationName()
{
	
	const char* nameStation = this->station->getStationName();

	return nameStation;

}