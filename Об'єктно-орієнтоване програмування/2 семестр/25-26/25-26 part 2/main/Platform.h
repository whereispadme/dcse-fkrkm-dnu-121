//определение класса Platform(платформа, колея)

#pragma once

class Platform
{

private:
	int platformNumber; //номер платформы
	int trackNumber;    //номер колеи

public:
	Platform();

	Platform(int platformNumber, int trackNumber);

	Platform(Platform &object);
	
	~Platform();

	int getPlatformNumber();
	int getTrackNumber();

};