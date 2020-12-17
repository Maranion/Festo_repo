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

	string str;
	int cnt=0;
	fstream f;
	f.open("TestFile.txt");

	while(f >> str){
			cnt++;
	}

	cout << "words:" << cnt;

	return 0;
}
