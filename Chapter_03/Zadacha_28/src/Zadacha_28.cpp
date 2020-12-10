//============================================================================
// Name        : Zadacha_28.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#define PRINT(ARR,SIZE)			\
	cout << #ARR << "[";		\
	for(int i=0;i<SIZE;i++){	\
		cout << ARR[i];			\
		cout << "|";			\
	}							\
	cout << "]" << endl;		\




int main() {
	int SIZE = 6;
	double arr [SIZE]{0};
	PRINT(arr,SIZE);

	unsigned char* chptrArr = reinterpret_cast<unsigned char*>(arr);
	for(int i=0;i < sizeof(double)*SIZE;i++){
		chptrArr[i] = 1;
	}

	PRINT(arr,SIZE);


	return 0;
}
