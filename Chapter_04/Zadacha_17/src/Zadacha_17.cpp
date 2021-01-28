//============================================================================
// Name        : Zadacha_17.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#define PRINT(EXP) \
    std::cout << #EXP " -> " << (long)EXP << std::endl;

int main() {

	int* dInt = new int;
	long* dLong = new long;
	char* chArr = new char[100];
	float* flArr = new float[100];

	PRINT(dInt);
	PRINT(dLong);
	PRINT(chArr);
	PRINT(flArr);

	delete dInt;
	delete dLong;
	delete[] chArr;
	delete[] flArr;

	return 0;
}
