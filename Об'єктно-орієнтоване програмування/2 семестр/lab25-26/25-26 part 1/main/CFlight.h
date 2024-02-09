//����������� ������ CFlight(����)

#pragma once
#include "CStation.h"

class CFlight {

private:
	int trainNumber; //����� ������
	CStation* station;//������� �����������

public:
	CFlight();
	
	CFlight(int trainNumber, const char* stationName);

	CFlight(CFlight &object);

	~CFlight();

	int getTrainNumber();
	const char* getStationName();

};