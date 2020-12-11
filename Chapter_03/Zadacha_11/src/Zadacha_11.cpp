//============================================================================
// Name        : Zadacha_11.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	double i,j;
	
	cout << "Enter:";
	cin >> i;
	
	cout << "Enter: ";
	cin >> j;

	cout << "i > j = " << (i > j) << endl;
	cout << "i < j = " << (i < j) << endl;
	cout << "i >= j = " << (i >= j) << endl;
	cout << "i <= j = " << (i <= j) << endl;
	cout << "i == j = " << (i == j) << endl;
	cout << "i != j = " << (i != j) << endl;
	cout << "i && j = " << (i && j) << endl;
	cout << "i || j = " << (i || j) << endl;
	cout << " (i < 10) && (j < 10) = "<< ((i < 10) && (j < 10)) << endl;

    return 0;
}
