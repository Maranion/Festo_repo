/*
 * head.h
 *
 *  Created on: 20.11.2020 �.
 *      Author: ivan
 */
#include<iostream>
using namespace std;

#ifndef HEAD_H_
#define HEAD_H_

void void_Func(string str){
	cout << "function name is: void void_Func(string str) "  << endl << "return: "<<  str << endl;
}

char ch_Func(char chVar){
	cout << "function name is: char ch_Func(char chVar)"<< endl;
	return chVar;
}

int int_Func(int intVar){
	cout << "function name is: int int_Func(int intVar)"<< endl;
	return intVar*2;
}

float float_Func(float floatVar){
	cout << "function name is: float float_Func(float floatVar)"<< endl;
	return floatVar;
}

#endif /* HEAD_H_ */
