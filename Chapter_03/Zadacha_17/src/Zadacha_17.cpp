//============================================================================
// Name        : Zadacha_17.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
 s

union Packed
{
	char i;
	short j;
	int k;
	long l;
	float f;
	double d;
};

int main()
{
	cout << "sizeof(Packed) = "
	<< sizeof(Packed) << endl;

	Packed packed;

	cout << "Asigning value to short" << endl;
	packed.j = 42;

	cout << "Printing via int: " << packed.i << endl;

	cout << "Asigning value to float" <<endl;
	packed.f = 6.63;

	cout << "Printing via int: " << packed.i << endl;

	return 0;
}
