//============================================================================
// Name        : Zadacha_04.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "struct_.h"
#include <iostream>

using namespace std;

int main() {

	const int n_beans = 457;

	Jar jar;

	setBeans(jar,n_beans);
	prinBeans(jar);


	return 0;
}
