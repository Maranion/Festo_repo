//============================================================================
// Name        : Zadacha_23.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Stash.h"
#include "Struct.h"
#include <fstream>
using namespace std;


void print(Sruct_of_Stack_of_Stash &Sruct_of_Stack_of_Stash)
{
    const char *p_content;

    while ((p_content = Sruct_of_Stack_of_Stash.pop()) != 0)
    {
        std::cout << p_content;

        delete p_content;
    }
}


int main() {

	std::ifstream file("Text.txt");

	Sruct_of_Stack_of_Stash Sruct_of_Stack_of_Stash;

	Sruct_of_Stack_of_Stash.push(file);

	print(Sruct_of_Stack_of_Stash);

	Sruct_of_Stack_of_Stash.cleanup();


	return 0;
}
