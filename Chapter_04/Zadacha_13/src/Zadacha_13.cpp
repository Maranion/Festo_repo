//============================================================================
// Name        : Zadacha_13.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Videotape.h"

int main() {

	const std::string TITLE = "Dora";
	const double PRICE = 99.99;
	const int DAYS = 7;
	const std::string RENTER = "#304MZ8LZK1LKKA09";

	Videotape tape_1(TITLE,PRICE);

	tape_1.printData();
	tape_1.rent(DAYS, RENTER);

	std::cout << std::endl;
	tape_1.printData();

	return 0;
}
