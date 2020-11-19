//============================================================================
// Name        : Zadacha_04.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

	string word="";
	int cnt=0;
	fstream f;
	f.open("TestFile.txt");
   while(f >> word){
	   if(word == "apple"){
		   cnt++;
	   }
   }
   cout << "num of apples:" << cnt;
	return 0;
}
