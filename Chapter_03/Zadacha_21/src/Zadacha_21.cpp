//============================================================================
// Name        : Zadacha_21.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

#define SIZE 5
#define PRINT_ARR(ARR)\
	for(int i=0;i<SIZE;i++)\
{\
 cout << ARR[i] << endl;\
}\


int main() {

	string arr[SIZE];
	arr[0] = "one";
	arr[1] = "two";
	arr[2] = "three";
	arr[3] = "four";
	arr[4] = "five";
	PRINT_ARR(arr);


	return 0;
}
