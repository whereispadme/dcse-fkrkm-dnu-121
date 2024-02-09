#include "CFlight.h"

CFlight::CFlight()
{

	this->trainNumber = 0;
	this->station = nullptr;
	this->platform = nullptr;

}

CFlight::CFlight(int trainNumber, const char * stationName, Platform *&platform)
{

	this->trainNumber = trainNumber;
	this->station = new CStation(stationName);
	this->platform = platform;

}

CFlight::CFlight(CFlight & object, Platform *&platform)
{

	this->trainNumber = object.trainNumber;
	this->station = new CStation(object.station->getStationName());
	this->platform = platform;

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

int CFlight::getPlatformNumber()
{

	if (this->platform != nullptr)
		return this->platform->getPlatformNumber();

}

int CFlight::getTrackNumber()
{

	if (this->platform != nullptr)
		return this->platform->getTrackNumber();

}