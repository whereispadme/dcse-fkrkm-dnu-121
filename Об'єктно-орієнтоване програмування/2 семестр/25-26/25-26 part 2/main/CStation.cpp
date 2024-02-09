#include "CStation.h"
#include <string>

CStation::CStation()
{

	this->stationName = nullptr;

}

CStation::CStation(const char * stationName)
{

	int len = strlen(stationName);

	this->stationName = new char[len + 1];

	for (int i = 0; i < len; ++i) {

		this->stationName[i] = stationName[i];

	}

	this->stationName[len] = '\0';

}

CStation::CStation(CStation & object)
{

	int len = strlen(object.stationName);

	this->stationName = new char[len + 1];

	for (int i = 0; i < len; ++i) {

		this->stationName[i] = object.stationName[i];

	}

	this->stationName[len] = '\0';

}

CStation::~CStation()
{

	if (stationName != nullptr)
		delete[] this->stationName;

}

const char * CStation::getStationName()
{

	const char nullStr[] = "";

	if (stationName != nullptr)
		return this->stationName;
	else
		return nullStr;

}