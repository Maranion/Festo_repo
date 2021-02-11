/*
 * Structs.cpp
 *
 *  Created on: 11.02.2021 ã.
 *      Author: ivan
 */

#include <iostream>
#include "Structs.h"

void LinkedList::create(LinkedList &list,int length) {

	LinkedList* pntr = &list;

	for(int i=0; i<length; i++) {
		pntr->m_index = i;
		pntr->m_next = new LinkedList;
		pntr = pntr->m_next;
	}


	pntr->m_next = 0;
	pntr->m_index = length-1;
}


void LinkedList::print(LinkedList &list) {
	LinkedList* pntr = &list;

	while(pntr->m_next!=0) {
		std::cout << (long)pntr
				  << " - index: "
				  << pntr->m_index
				  << std::endl;
		pntr = pntr->m_next;
 	}
}
