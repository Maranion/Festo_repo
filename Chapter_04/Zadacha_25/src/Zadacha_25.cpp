//============================================================================
// Name        : Zadacha_25.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Structs.h"


int main() {
	const int LENGTH = 7;

	LinkedList list;
	list.create(list,LENGTH);
	list.print(list);


	LinkedList* curr = &list;
	LinkedList* prev;

	while(curr !=0) {
		prev = curr;
		curr = curr->m_next;

		delete prev;
	}

	return 0;
}
