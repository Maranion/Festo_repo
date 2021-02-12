//============================================================================
// Name        : Zadacha_27.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#define PRINT(ARR, SIZE)				\
	cout << #ARR << "[";				\
	for(int i = 0; i < SIZE; i++) {		\
		cout << ARR[i];					\
		cout << " | ";					\
	}									\
	cout << "]" << endl;				\

int main() {
	int SIZE = 6;

	const double cArr[SIZE]{70.27, 15.43, 58.41, 96.89, 50.04, 24.42};
	volatile double vArr[SIZE]{46.38, 1.11, 2.7, 82.8, 48.79, 36.55};

	for(int i = 0; i < SIZE; i++) {
		const_cast<double*>(cArr)[i] *= 2;
		const_cast<double*>(vArr)[i] *= 2;
	}

	PRINT(cArr, SIZE);
	PRINT(vArr, SIZE);

	return 0;
}
