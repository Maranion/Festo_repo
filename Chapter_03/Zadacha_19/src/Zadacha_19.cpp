//: C03:ArrayAddresses.cpp


#include <iostream>

using namespace std;


#define PRINT_ARR(TYPE,ARR)\
		for(int i = 0; i < 10; i++){\
cout << "&arr[" << i << "] = "<< (long)&ARR[i] << endl;\
}\
\
cout << endl;
int main()
{

	int intArr[10];
	char charArr[10];
	long longArr[10];
	float floatArr[10];
	double doubleArr[10];

	PRINT_ARR(int,intArr);
	PRINT_ARR(char,charArr);
	PRINT_ARR(long,longArr);
	PRINT_ARR(float,floatArr);
	PRINT_ARR(double,doubleArr);


} ///:~
