//============================================================================
// Name        : Zadacha_08.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "Stack.h"
#include <iostream>
using namespace std;

int main() {

		const int SIZE = 25;
	    const double PI = 3.14;
		Stack s;
		s.initialize();

		for(int i=1; i <=SIZE; i++) {

			s.push(new double(i*PI));

		}

		for(int i=0; i< SIZE; i++) {
			 std::cout << *(double*)s.pop() << std::endl;
		}

		 s.cleanup();

	return 0;
}
