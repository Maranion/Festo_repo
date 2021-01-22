/*
 * Stack.h
 *
 *  Created on: 22.01.2021 ã.
 *      Author: ivan
 */

#ifndef STACK_H_
#define STACK_H_

struct Stack {

	struct Link {
		void* data;
		Link* next;
		void initialize(void* dat, Link* nxt);
	}* head;

	void initialize();
	void push(void* dat);
	void* peek();
	void* pop();
	void cleanup();
};



#endif /* STACK_H_ */
