//����������� ������ CFlight(����)

#pragma once
#include "CStation.h"
#include "Platform.h"

class CFlight {

private:
	int trainNumber; //����� ������
	CStation* station;//������� �����������
	Platform* platform;

public:
	CFlight();
	
	CFlight(int trainNumber, const char * stationName, Platform *&object);

	CFlight(CFlight &object, Platform *&platform);

	~CFlight();

	int getTrainNumber();
	const char* getStationName();

	int getPlatformNumber();
	int getTrackNumber();

};