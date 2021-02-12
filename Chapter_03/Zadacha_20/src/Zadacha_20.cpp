//: C03:StructArray.cpp
// An array of struct


#include <iostream>
using namespace std;

typedef struct {
	int i, j, k;

} ThreeDpoint;


#define PRINT(TYPE,ARR)												\
	for(int i = 0; i < 10; i++) {									\
		cout << "&arr[" << i << "] = " << (long)&ARR[i] << endl;	\
	}																\

int main() {
	const int SIZE = 10;

	ThreeDpoint p[SIZE];

	PRINT(ThreeDpoint, p);

	return 0;

} ///:~
