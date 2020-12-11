//============================================================================
// Name        : Zadacha_30.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#ifdef DEBUG
#define P(A) cout << #A << ": " << (A) << endl;
#endif

int main() {

#ifdef DEBUG
	int a = 1, b = 2, c = 3;

	P(a); P(b); P(c);
	P(a + b);
	P((c - a)/b);

	cout << "currently not in debug mode";
#endif
}
