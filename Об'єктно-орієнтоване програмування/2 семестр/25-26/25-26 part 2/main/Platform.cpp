#include "Platform.h"

Platform::Platform()
{

	this->platformNumber = -1;
	this->trackNumber = -1;

}

Platform::Platform(int platformNumber, int trackNumber)
{

	this->platformNumber = platformNumber;
	this->trackNumber = trackNumber;

}

Platform::Platform(Platform & object)
{

	this->platformNumber = object.platformNumber;
	this->trackNumber = object.trackNumber;

}

Platform::~Platform()
{
}

int Platform::getPlatformNumber()
{
	
	return this->platformNumber;

}

int Platform::getTrackNumber()
{

	return this->trackNumber;

}