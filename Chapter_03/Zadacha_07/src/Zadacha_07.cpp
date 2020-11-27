//============================================================================
// Name        : Zadacha_07.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void pointFunc(string* str){
	*str = "Modified via pointer";
}

void refFunc(string &str){
	str = "Modified via reference";
}
int main() {

	 string str= "Sample";
	 cout << "string: " << str << endl;
	 pointFunc(&str);
	 cout << "string: " << str << endl;
	 refFunc(str);
	 cout << "string: " << str << endl;

	return 0;
}
