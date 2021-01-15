//============================================================================
// Name        : Zadacha_06.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "multipleofSeven_class.h"
#include <iostream>
using namespace std;

int main() {

	const int TIMES = 10;

	Sevens obj;

	for(int i=0;i<TIMES;i++) {
	obj.timesSeven();
	}

	return 0;
}
