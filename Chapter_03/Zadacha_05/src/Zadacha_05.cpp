//============================================================================
// Name        : Zadacha_05.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#define PRINT(EXP)\
{\
cout << "A = "  << #EXP << endl;\
cout << "A = " << EXP << endl;\
}
int main() {

 int x=1,y=2,z=3;



 PRINT(x + y - 2/2 + z);
 PRINT(x + (y - 2) / (2 + z));

	return 0;
}
