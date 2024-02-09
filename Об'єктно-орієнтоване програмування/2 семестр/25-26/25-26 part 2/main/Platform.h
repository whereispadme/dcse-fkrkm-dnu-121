//����������� ������ Platform(���������, �����)

#pragma once

class Platform
{

private:
	int platformNumber; //����� ���������
	int trackNumber;    //����� �����

public:
	Platform();

	Platform(int platformNumber, int trackNumber);

	Platform(Platform &object);
	
	~Platform();

	int getPlatformNumber();
	int getTrackNumber();

};