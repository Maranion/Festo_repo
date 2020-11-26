//============================================================================
// Name        : Zadacha_06.cpp
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
		  vect.push_back(line);
	   }
  line="";
	for(int i=0;i<vect.size();i++){
		line += vect.at(i) + " ";
	}
 cout << line;


	return 0;
}
