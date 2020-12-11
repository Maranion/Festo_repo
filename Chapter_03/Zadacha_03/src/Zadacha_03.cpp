//============================================================================
// Name        : Zadacha_03.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	string input;
	int choise =0;
	bool quit;

	while(true){
		cout << "quick a dog is chasing you choose: run,fight,quit"<<endl;
		cin >> input;

		if(input=="run"){
			choise =1;
		}else if(input=="fight"){
			choise = 2;
		}else if(input=="quit"){
			choise = 3;
		}else{
			choise =0;
		}

		switch(choise){
			case 1:
				cout << "lol you can't out run a dog, he catches up and bites you. Ouch" << endl;
				break;
			case 2:
				cout << "you turn around and kick the dog... It's a cihuahua... You are  reported for animal cruelty." << endl;
				break;
			case 3:
				quit = true;
				cout << "you turn around and kick the dog... It's a cihuahua... You are  reported for animal cruelty." << endl;
			default:
				cout << "invalid input" << endl;
		}

		if(quit){
		break;
		}

	}

	return 0;
}
