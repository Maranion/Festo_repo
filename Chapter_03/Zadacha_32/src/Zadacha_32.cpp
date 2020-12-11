//============================================================================
// Name        : Zadacha_32.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


int func(double n){
	return n*2;
}


int main() {
	int (*ptr) (double) = func;

	cout << (*ptr)(3.14);

	return 0;
}
