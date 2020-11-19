//============================================================================
// Name        : Zadacha_08.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
#include <vector>
#include <ctime>
using namespace std;

int main() {
	srand((unsigned int)time(NULL));
	vector<float> vect;
	float a =5.0;

	for(int i=0;i<25;i++){
		vect.push_back((float(rand())/float((RAND_MAX)) * a));
		cout << vect.at(i) << endl;
	}

	return 0;
}
