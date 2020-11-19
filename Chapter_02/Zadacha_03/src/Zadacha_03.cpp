//============================================================================
// Name        : Zadacha_03.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {

	char ch;
	int cnt=0;
	fstream f;
	f.open("TestFile.txt");

	while(!f.eof()){
		f.get(ch);
		if(ch == ' '){
			cnt++;
		}
	}
	cout << "whitespaces:" << cnt;

	return 0;
}
