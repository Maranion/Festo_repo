//============================================================================
// Name        : Zadacha_23.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

union Primitives {
	char c;
	short s;
	int i;
	long l;
	float f;
	double d;
	long double ld;
};



int main() {
	const int SIZE = 10;
	
	Primitives p[SIZE];
	Primitives* pp = p;

	cout << "sizeof(Primitives) = " << sizeof(Primitives) << endl;

	cout << "pp = " << (long)pp << endl;
	pp++;
	cout << "pp = " << (long)pp << endl;

	return 0;
} ///:~
