//============================================================================
// Name        : Zadacha_33.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

typedef float (*ptr_func)(char);

float float_func(char ch) {

	cout << 3.14f;

	return 3.14f;
}


ptr_func int_func(int n) {
	float (*ptr_func)(char);
    ptr_func = float_func;

    return ptr_func;
}



int main() {

	ptr_func (*ptr)(int);

	ptr = int_func;

	cout <<  (*ptr(3))('b') << endl;

	return 0;
}
