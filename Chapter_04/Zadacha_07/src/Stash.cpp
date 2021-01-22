/*
 * Stash.cpp
 *
 *  Created on: 15.01.2021 �.
 *      Author: ivan
 */

#include "Stash.h"
#include <iostream>
#include <cassert>

const int INCREMENT = 10;

void Stash::initialize(int sz)
{
    size = sz;
    quantity = 0;
    storage = 0;
    next = 0;
}

int Stash::add(const void *element)
{
    if (next >= quantity) // Enough space left?
    {
    	inflate(INCREMENT);
    }

    // Copy element into storage,
    // starting at next empty space:
    int startBytes = next * size;
    unsigned char *e = (unsigned char *)element;
    for (int i = 0; i < size; i++)
    {
        storage[startBytes + i] = e[i];
    }

    next++;
    return (next - 1); // Index number
}

void *Stash::fetch(int index)
{
    // Check index boundaries:
    assert(0 <= index);
    if (index >= next)
    {
        return 0; // To indicate the end
    }

    // Produce pointer to desired element:
    return &(storage[index * size]);
}

int Stash::count()
{
    return next; // Number of elements in CStash
}

void Stash::inflate(int increase)
{
    assert(increase > 0);
    int newQuantity = quantity + increase;
    int newBytes = newQuantity * size;
    int oldBytes = quantity * size;
    unsigned char *b = new unsigned char[newBytes];
    for (int i = 0; i < oldBytes; i++)
    {
        b[i] = storage[i]; // Copy old to new
    }

    delete[] storage;      // Old storage
    storage = b;           // Point to new memory
    quantity = newQuantity;
}

void Stash::cleanup()
{
    if (storage != 0)
    {
        std::cout << "freeing storage" << std::endl;
        delete[] storage;
    }
}
