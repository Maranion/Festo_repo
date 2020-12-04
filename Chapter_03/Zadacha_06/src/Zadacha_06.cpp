//============================================================================
// Name        : Zadacha_06.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#define PRINT(EXP)\
cout << #EXP << ":" << (long)&EXP << endl;\

    int main() {

 char ch1,ch2,ch3;
 short int shortInt1,shortInt2,shortInt3;
 int i1,i2,i3;
 long int longInt1,longInt2,longInt3;
 float f1,f2,f3;
 double d1,d2,d3;
 long double longDouble1,longDouble2,longDouble3;

 PRINT(ch1);
 PRINT(ch2);
 PRINT(ch3);
 cout << endl;
 PRINT(shortInt1);
 PRINT(shortInt2);
 PRINT(shortInt3);
 cout << endl;
 PRINT(i1);
 PRINT(i2);
 PRINT(i3);
 cout << endl;
 PRINT(longInt1);
 PRINT(longInt2);
 PRINT(longInt3);
 cout << endl;
 PRINT(f1);
 PRINT(f2);
 PRINT(f3);
 cout << endl;
 PRINT(d1);
 PRINT(d2);
 PRINT(d3);
 cout << endl;
 PRINT(longDouble1);
 PRINT(longDouble2);
 PRINT(longDouble3);

    return 0;
}
