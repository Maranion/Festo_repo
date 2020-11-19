//============================================================================
// Name        : Zadacha_05.cpp
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

for(int i = vect.size()-1; i >=0 ; i--){
     cout << vect[i] << endl;
}

	return 0;
}
