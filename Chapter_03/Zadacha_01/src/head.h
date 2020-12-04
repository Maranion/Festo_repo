/*
 * head.h
 *
 *  Created on: 20.11.2020 ã.
 *      Author: ivan
 */
#include<iostream>
using namespace std;

#ifndef HEAD_H_
#define HEAD_H_

void void_Func(){
    cout << "function name is: void_Func" << endl << "args:none" << endl << "return type:none"<< endl;
}

char ch_Func(char chVar){
    cout << "function name is:ch_Func"<< endl << "args:char variable" << endl << "return type:char" << endl;
    return chVar;
}

int int_Func(int intVar){
    cout << "function name is:int_Func"<< endl << "args:int variable" << endl << "return type:int" << endl;
    return intVar;
}

float float_Func(float floatVar){
    cout << "function name is:float_Func"<< endl << "args:float variable" << endl << "return type:float" << endl;
    return floatVar;
}

#endif /* HEAD_H_ */
