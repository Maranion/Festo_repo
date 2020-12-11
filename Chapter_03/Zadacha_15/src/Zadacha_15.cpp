//============================================================================
// Name        : Zadacha_15.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#define PRINT(EXP) std::cout << #EXP " = " << EXP << std::endl;

 typedef struct {
	 string str1;
	 string str2;
	 int n;
 }MyStruct;

int main() {

	MyStruct myStruct;
	myStruct.str1 = "string 1";
	myStruct.str2 = "string 2";
	myStruct.n = 10;

	PRINT(myStruct.str1);
	PRINT(myStruct.str2);
	PRINT(myStruct.n);

	MyStruct* pMyStruct = &myStruct;
	pMyStruct->str1 = "string 1 is different";
	pMyStruct->str2 = "string 2 is different";
	pMyStruct->n = 1220;

	PRINT(pMyStruct->str1);
	PRINT(pMyStruct->str2);
	PRINT(pMyStruct->n);

	return 0;
}
