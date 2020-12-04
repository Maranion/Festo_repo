//============================================================================
// Name        : Zadacha_24.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#define SIZE 10
#define P(EX) cout << #EX << ": " << EX << endl;


int main() {

	   long longArr[SIZE];
	    for (int i = 0; i < SIZE; i++)
	    {
	        longArr[i] = i; // Give it index values
	    }

	    long *longPtr = longArr;
	    P(*longPtr);
	    P(*++longPtr);
	    P(*(longPtr + 5));

	    long *longPtr2 = longPtr + 5;
	    P(*longPtr2);
	    P(*(longPtr2 - 4));
	    P(*--longPtr2);
	    P(longPtr2 - longPtr); // Yields number of elements

	    cout << endl;

	    long double doubleArr[SIZE];
	    for (int i = 0; i < SIZE; i++)
	    {
	    	doubleArr[i] = i + i; // Give it index values
	    }

	    long double *doublePtr = doubleArr;
	    P(*doublePtr);
	    P(*++doublePtr);
	    P(*(doublePtr + 5));

	    long  double *doublePtr2 = doublePtr + 5;
	    P(*doublePtr2);
	    P(*(doublePtr2 - 4));
	    P(*--doublePtr2);
	    P(doublePtr2 - doublePtr); // Yields number of elements

} ///:~

