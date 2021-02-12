/*
 * Stash.cpp
 *
 *  Created on: 28.01.2021 �.
 *      Author: ivan
 */
#include "Stash.h"
#include <iostream>
#include <cassert>

using namespace std;


void Stash::initialize(int sz) {
	size = sz;
}

int Stash::add(const void* element) {

	unsigned char* e = (unsigned char*)element;
	for(int i = 0; i < size; i++)
		storage.push_back(e[i]);

	return(storage.size() / size - 1); // Index number
}

void* Stash::fetch(int index) {
	// Check index boundaries:
	assert(0 <= index);
	if(index >= storage.size() / size)
		return 0; // To indicate the end
	// Produce pointer to desired element:
	return &(storage[index * size]);
}

int Stash::count() {
	return  storage.size() / size; // Number of elements in CStash
}


void Stash::cleanup() {
	if(!storage.empty()) {
	cout << "freeing storage" << endl;
	storage.clear();
	storage.shrink_to_fit();
	}

} ///:~


