#pragma once

class DF09 {

private:
	float* array;
	int size;


public:

	DF09();
	DF09(int value);
	DF09(const DF09& object);
	~DF09();

	int getSize();
	DF09 operator *(DF09& object);
	DF09& operator =(const DF09& object);

	friend void view(DF09 &ojbect);
	
};