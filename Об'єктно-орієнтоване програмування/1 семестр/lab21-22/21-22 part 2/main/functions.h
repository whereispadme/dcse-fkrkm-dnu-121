#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

//HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

void clearCinBuff();
void sizeOfMatrix(int &size);
void hideCursor(bool show);
bool endProg();

#endif