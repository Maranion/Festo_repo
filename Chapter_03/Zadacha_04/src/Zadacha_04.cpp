//============================================================================
// Name        : Zadacha_04.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	
	char input;
	bool quit = false;

	while(true){

		cout << "Main Menu" << endl ;
		cout << "l: left, r: right, q: quit ->" << endl ;
		cin >> input;

		switch(input){
			
			case 'l':
				cout  << "Left Menu" << endl;
				cout << "select a or b:" << endl;
				cin >> input;

				switch(input){
					
					case 'a':
						cout << "you chose a"<< endl;;
					break;

					case 'b':
						cout << "you chose b"<<  endl;
					break;

					default:
						cout << "You did not chose a or b" << endl;
				}
            break;

			case 'r':
				cout  << "Right Menu" << endl;
				cout << "select c or d:" << endl;
				cin >> input;

				switch(input){
					
					case 'c':
						cout << "you chose c"<< endl;;
					break;

					case 'd':
						cout << "you chose d"<<  endl;
					break;

					default:
						cout << "You did not chose c or d" << endl;
				}
			break;

			case 'q':
				quit = true;
			break;

			default:
				cout << "You did not chose a correct option" << endl;
		}
 
		if(quit){
			break;
		}
		
	}

	return 0;
}
