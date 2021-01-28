/*
 * Stash.h
 *
 *  Created on: 28.01.2021 ã.
 *      Author: ivan
 */

#ifndef STASH_H_
#define STASH_H_

#include <vector>

struct Stash {
	int size; // Size of each space
	int quantity; // Number of storage spaces
	int next; // Next empty space

	std::vector<char> storage;

	// Functions!
	void initialize(int size);
	void cleanup();
	int add(const void* element);
	void* fetch(int index);
	int count();

}; ///:~



#endif /* STASH_H_ */
