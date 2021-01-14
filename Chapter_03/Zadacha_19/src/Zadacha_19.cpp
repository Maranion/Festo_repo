//: C03:ArrayAddresses.cpp


#include <iostream>

using namespace std;


#define PRINT_ARR(TYPE,ARR)											\
	for(int i = 0; i < 10; i++){									\
		cout << "&arr[" << i << "] = "<< (long)&ARR[i] << endl;		\
	}																\
	cout << endl;													\

int main()
{

	int intArr[10];
	PRINT_ARR(int,intArr);

	char charArr[10];
	PRINT_ARR(char,charArr);

	long longArr[10];
	PRINT_ARR(long,longArr);

	float floatArr[10];	
	PRINT_ARR(float,floatArr);

	double doubleArr[10];
	PRINT_ARR(double,doubleArr);

} ///:~
