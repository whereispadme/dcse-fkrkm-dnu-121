//определение класса CStation(станция отправления)

#pragma once

class CStation {

private:
	char* stationName;

public:
	CStation();
	
	CStation(const char* stationName);

	CStation(CStation &object);
	
	~CStation();

	const char* getStationName();

};