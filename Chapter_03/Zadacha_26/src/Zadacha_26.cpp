//============================================================================
// Name        : Zadacha_26.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#define PRINT(ARR,SIZE)				\
	cout << #ARR << "[";			\
	for(int i=0;i<SIZE;i++){		\
		cout << ARR[i];				\
}									\
cout << "]" << endl;				\


void byte(void *vptr,int range,int value){

	int *iptr;
	iptr = static_cast<int*>(vptr);

	for(int i=0;i<range;i++){
		iptr[i] = value;
	}


}

int main() {


	int SIZE = 6;
	int val = 7;


	int arr[SIZE]{0};
	PRINT(arr,SIZE);

	void *pArr = static_cast<void*>(arr);
	byte(pArr,SIZE,val);

	PRINT(arr,SIZE);


	return 0;
}
