//============================================================================
// Name        : Zadacha_32.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

typedef int (*p_Func)(double n);

int func(double n) {
	return n*2;
}

int main() {
	const int PI = 3.14;

	p_Func ptr = func;

	cout << ptr(PI);

	return 0;
}
