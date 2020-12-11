//============================================================================
// Name        : Zadacha_18.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#define PRINT_ADDRESS(EXP) cout << #EXP" -> " << (long)EXP << endl;

int main()
{
	int arr1[4]{3};
	char ch = '1';
	int arr2[2]{2};

	PRINT_ADDRESS(arr1)
	PRINT_ADDRESS(&ch);
	PRINT_ADDRESS(arr2);

	cout << "First index of arr1: " << arr1[0] << endl;
	cout << "Putting a value one index after the end of arr2" << endl;
	arr2[2] = 22;
	cout << "First index of arr1: " << arr1[0] << endl;


	return 0;
}
