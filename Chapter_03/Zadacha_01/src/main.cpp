//============================================================================
// Name        : Zadacha_03.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "head.h"
#include <iostream>

using namespace std;

int main() {
	int intVar=5;
	char chVar='A';
	float floatVar=3.14;
	string str = "hi";

	void_Func(str);

	cout <<   ch_Func(chVar) << endl ;

	cout << int_Func(intVar) << endl ;

	cout <<  float_Func(floatVar) << endl ;

	return 0;
}
