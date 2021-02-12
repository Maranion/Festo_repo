//============================================================================
// Name        : Zadacha_26.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#define PRINT(ARR, SIZE)				\
	cout << #ARR << "[";				\
	for(int i = 0; i < SIZE; i++){		\
		cout << " " << ARR[i];			\
	}									\
	cout << "]" << endl;				\


void byte(void *v_ptr, int range, int value) {

	char *ch_ptr = static_cast<char*>(v_ptr);

	for(int i = 0; i < range; i++) {
		ch_ptr[i] = value;
	}

	PRINT(ch_ptr, range);
}

int main() {

	const int SIZE = 6;
	const int VALUE = 7;
	const int B_RANGE = 12;

	int arr[SIZE]{0};
	PRINT(arr, SIZE);

	void *pArr = static_cast<void*>(arr);
	byte(pArr, B_RANGE, VALUE);

	PRINT(arr, SIZE);
	
	return 0;
}
