//============================================================================
// Name        : Zadacha_07.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

int main() {

	string line;
		vector <string> vect;
		fstream f;
		f.open("TestFile.txt");
		while(getline(f,line)){
			  cout << line << endl;

			  while(cin.get() != '\n'){}
		   }


	return 0;
}
