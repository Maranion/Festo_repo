//============================================================================
// Name        : Zadacha_18.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstring>
using namespace std;

#define PRINT(EXP) 									\
	cout << #EXP ":" << endl 						\
		 << "address:" << (long)EXP << endl			\
		 << "value:" << EXP << endl

char* func(const char* ch) {

	const int SIZE = strlen(ch);
	char* newCh = new char[SIZE+1];

	for(int i=0; i< SIZE; i++) {
		newCh[i] = ch[i];
	}

	newCh[SIZE] = '\0';

	return newCh;
}

int main() {

	char* chArr1 = func("random txt");
	char* chArr2 = func(chArr1);

    PRINT(chArr1);
    PRINT(chArr2);

	delete[] chArr1;
	delete[] chArr2;
	
	return 0;
}
