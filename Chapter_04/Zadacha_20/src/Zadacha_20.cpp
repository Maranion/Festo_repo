//============================================================================
// Name        : Zadacha_20.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#define PRINT(EXP) \
    std::cout << #EXP " - " << EXP << std::endl;

struct Letters {
	char a;
	char b;
};

struct Buttons {
	string baa;
	string moo;

	string cow() {return moo;}
	string sheep() {return baa;}
	string abomination() {return baa+moo;}
};

struct Wallet {
	// empty..
};

int main() {

	Letters Letter;
	Buttons Button;
	Wallet Wallet;

	PRINT(sizeof(Letter));
	PRINT(sizeof(Button));
	PRINT(sizeof(Wallet));

	return 0;
}
