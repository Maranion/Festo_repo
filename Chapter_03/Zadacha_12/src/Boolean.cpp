//============================================================================
// Name        : Zadacha_18.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;




int main()
{

	int i, j;

	cout << "Enter an integer: ";
	cin >> i;
	cout << "Enter another integer: ";
	cin >> j;

	cout << "i > j is " << (i > j) << std::endl;
	cout << "i < j is " << (i < j) << std::endl;
	cout << "i >= j is " << (i >= j) << std::endl;
	cout << "i <= j is " << (i <= j) << std::endl;
	cout << "i == j is " << (i == j) << std::endl;
	cout << "i not_eq j is " << (i not_eq j) << std::endl;
	cout << "i and j is " << (i and j) << std::endl;
	cout << "i or j is " << (i or j) << std::endl;
	cout << " (i < 10) and (j < 10) is "
	<< ((i < 10) and (j < 10)) << std::endl;

	return 0;
}
