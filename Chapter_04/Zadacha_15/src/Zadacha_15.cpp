//============================================================================
// Name        : Zadacha_15.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#define PRINT(EXP) \
	cout<< #EXP " = " << EXP << endl;


int main() {
	PRINT(sizeof(char));
	PRINT(sizeof(bool));
	PRINT(sizeof(short));
	PRINT(sizeof(long));
	PRINT(sizeof(int));
	PRINT(sizeof(double));
	PRINT(sizeof(float));
	return 0;
}
