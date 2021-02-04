//============================================================================
// Name        : Zadacha_21.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

union un_1 {
	double d;
	int n;
};

typedef union {
	double d;
	int n;
} un_2;


enum en_1 {
	One,
	Two
};

typedef enum {
	Three,
	Four
} en_2;



int main() {

	un_1 un1;
	un1.d = 99.9;
	un1.n = 123123;

	std::cout << "union 1:" << un1.d << "  " << sizeof(un1) << std::endl;


	un_2 un2;
	un2.d = 99.9;
	un2.n = 123123;

	std::cout << "union 2:" << un2.d << "  " << sizeof(un2) << std::endl;


	en_1 en1 = Two;
	std::cout << "enum 1:" << en1 << std::endl;


	en_2 en2 = Four;
	std::cout << "enum 2:" << en2 << std::endl;

	return 0;
}
