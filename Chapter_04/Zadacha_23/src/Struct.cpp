/*
 * Struct.cpp
 *
 *  Created on: 5.02.2021 ã.
 *      Author: ivan
 */

#include "Stack.h"
#include "Stash.h"
#include <fstream>
#include "Struct.h"
#include <vector>
#include <iostream>
#include <string>
#include <cstring>

Sruct_of_Stack_of_Stash::Sruct_of_Stack_of_Stash() {
	m_stack.initialize();
}

void Sruct_of_Stack_of_Stash::push(std::ifstream &file) {
	const int SIZE = 300;

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

		m_stack.push(p_Stash);
	}


}

void Sruct_of_Stack_of_Stash::cleanup() {
	m_stack.cleanup();
}

const char* Sruct_of_Stack_of_Stash::pop() {

	Stash* p_Stash = (Stash*)m_stack.pop();

	if(p_Stash == 0) {
		return 0;
	}

	std::string content;

	for (int i = p_Stash->count() - 1; i >= 0; i--) {
	      content += (char *)p_Stash->fetch(i);
	      content += "\n";
	 }

	char* data = new char[content.size()];
	strcpy(data, content.c_str());


	p_Stash->cleanup();
	delete p_Stash;

	return data;
}
