//============================================================================
// Name        : Zadacha_24.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Structs.h"


void create(LinkedList &list,int length) {

	LinkedList* pntr = &list;

	for(int i=0; i<length; i++) {
		pntr->m_index = i;
		pntr->m_next = new LinkedList;
		pntr = pntr->m_next;
	}


	pntr->m_next = 0;
	pntr->m_index = length-1;
}


void print(LinkedList &list) {
	LinkedList* pntr = &list;

	while(pntr->m_next!=0) {
		std::cout << (long)pntr
				  << " - index: "
				  << pntr->m_index
				  << std::endl;
		pntr = pntr->m_next;
 	}
}


int main() {
	const int LENGTH = 7;

	LinkedList list;
	create(list,LENGTH);
	print(list);


	LinkedList* curr = &list;
	LinkedList* prev;

	while(curr !=0) {
		prev = curr;
		curr = curr->m_next;

		delete prev;
	}

	return 0;
}
