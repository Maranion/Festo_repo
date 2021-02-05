//============================================================================
// Name        : Zadacha_22.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Stash.h"
#include "Stack.h"

void fill_lines(Stack &stack) {
	const int SIZE = 200;

	std::ifstream file("Text.txt");
	std::string line;
	std::vector<std::string> lines;

	while(getline(file, line)) {
		lines.push_back(line);
	}

	Stash* p_Stash;

	for(int i = lines.size()-1; i >=0; i-=5) {
		p_Stash = new Stash;
		p_Stash->initialize(SIZE);

		for(int k = i ; (k >= 0) && (k > i - 5); k--) {
			p_Stash->add(lines[k].c_str());
		}

		stack.push(p_Stash);
	}


}

void print(Stack &stack)
{
    Stash* p_Stash;

    while ((p_Stash = (Stash *)stack.pop()) != 0) {

        for (int i = p_Stash->count() - 1; i >= 0; i--) {
            std::cout << (char *)p_Stash->fetch(i) << std::endl;
        }

        p_Stash->cleanup();

        delete p_Stash;
    }
}


int main() {

	Stack stack;
	stack.initialize();

	fill_lines(stack);
	print(stack);

	stack.cleanup();

	return 0;
}
