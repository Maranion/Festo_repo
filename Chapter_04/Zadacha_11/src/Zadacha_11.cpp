//============================================================================
// Name        : Zadacha_11.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//#define MEANING_OF_LIFE

int main() {

	#ifndef MEANING_OF_LIFE
		cout << "REDACTED";
	#endif

	#ifdef MEANING_OF_LIFE
	cout << "42";
	#endif

	return 0;
}
