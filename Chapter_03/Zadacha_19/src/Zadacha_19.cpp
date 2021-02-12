//: C03:ArrayAddresses.cpp


#include <iostream>
using namespace std;

#define PRINT_ARR(TYPE,ARR)											\
	for(int i = 0; i < 10; i++) { 									\
		cout << "&arr[" << i << "] = "<< (long)&ARR[i] << endl;		\
	}																\
	cout << endl;													\

int main() {
	const int SIZE = 10;

	int intArr[SIZE];
	PRINT_ARR(int, intArr);

	char charArr[SIZE];
	PRINT_ARR(char, charArr);

	long longArr[SIZE];
	PRINT_ARR(long, longArr);

	float floatArr[SIZE];	
	PRINT_ARR(float, floatArr);

	double doubleArr[SIZE];
	PRINT_ARR(double, doubleArr);

} ///:~
