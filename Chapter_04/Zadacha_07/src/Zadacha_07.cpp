//============================================================================
// Name        : Zadacha_07.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "Stash.h"
#include <iostream>

using namespace std;

int main() {

	const int SIZE = 25;
    const double PI = 3.14;
	Stash doubleStash;
	doubleStash.initialize(sizeof(double));

	for(double i=1; i <=SIZE; i++) {
		i *= PI;
		doubleStash.add(&i);
		i /= PI;
	}

	for(int i=0; i< doubleStash.count(); i++) {
		 std::cout << "Stash["<< i << "] = " << *(double*)doubleStash.fetch(i) << std::endl;
	}

	 doubleStash.cleanup();

	return 0;
}
