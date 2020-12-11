//============================================================================
// Name        : Zadacha_16.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

enum Colors {
	BLACK,
	PINK,
	RED,
	BLUE,
	GREEN,
	BROWN,
	WHITE,
	COUNT
};

int main() {

	string colorNames[Colors::COUNT] = {"Black","Pink","Red","Blue","Green","Brown","White"};
	Colors colors[Colors::COUNT] = {BLACK,PINK,RED,BLUE,GREEN,BROWN,WHITE};

	for(int i=0;i< Colors::COUNT;i++){
		cout << colorNames[i] << " == " << colors[i] << endl;
	}



	return 0;
}
