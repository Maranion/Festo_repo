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
    const int SIZE_ONE = 4;
	const int SIZE_TWO = SIZE_ONE / 2;

	int arr1[SIZE_ONE]{3};
	char ch = 'A';
	int arr2[SIZE_TWO]{2};

	PRINT_ADDRESS(arr1)
	PRINT_ADDRESS(&ch);
	PRINT_ADDRESS(arr2);

	cout << "First index of arr1: " << arr1[0] << endl;
	cout << "Putting a value one index after the end of arr2" << endl;
	arr2[SIZE_TWO] = INT32_MAX;
	cout << "First index of arr1: " << arr1[0] << endl;


	return 0;
}
