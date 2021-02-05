/*
 * Struct.h
 *
 *  Created on: 5.02.2021 ã.
 *      Author: ivan
 */

#ifndef STRUCT_H_
#define STRUCT_H_

#include "Stack.h"
#include "Stash.h"
#include <fstream>


struct Sruct_of_Stack_of_Stash {

	Sruct_of_Stack_of_Stash();
	void cleanup();
	void push(std::ifstream &file);
	const char* pop();

private:
	Stack m_stack;
};




#endif /* STRUCT_H_ */
