/*
 * Structs.h
 *
 *  Created on: 11.02.2021 ã.
 *      Author: ivan
 */

#ifndef STRUCTS_H_
#define STRUCTS_H_

struct LinkedList {
	int m_index;
	LinkedList *m_next;

	void create(LinkedList &list,int length);
	void print(LinkedList &list);
};


#endif /* STRUCTS_H_ */
