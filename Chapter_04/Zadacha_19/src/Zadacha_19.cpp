//============================================================================
// Name        : Zadacha_19.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "Kinder_suprise.h"
#include <iostream>

using namespace std;

int main() {

	const char* EXPDATE = "01/01/2099";
	const char* CHOCO = "dark";
	const char* TOY = "fire truck";
	const bool  HAZARD = true;

	Choco::Toy Toy(TOY,HAZARD);
	Choco Choco(EXPDATE,CHOCO,Toy);

	Choco.Printinfo();
	Choco.m_toy->Printinfo();



	return 0;
}
