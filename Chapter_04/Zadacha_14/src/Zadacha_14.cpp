//============================================================================
// Name        : Zadacha_13.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Stack.h"
#include "Videotape.h"

int main() {

	const std::string TITLE = "Dora";
	const double PRICE = 99.99;
	//const int DAYS = 7;
	//const std::string RENTER = "#304MZ8LZK1LKKA09";

	const int COUNT = 10;

	Stack stack;
	stack.initialize();

	for(int i=0; i<COUNT; i++) {
		stack.push(new Videotape(TITLE,PRICE*i));

	}

	Videotape* pVideotape;

	while( (pVideotape = (Videotape*) stack.pop()) != 0 ) {
		pVideotape->printData();
	}

	delete pVideotape;
	stack.cleanup();

	return 0;
}
