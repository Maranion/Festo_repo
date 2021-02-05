/*
 * Stash.h
 *
 *  Created on: 4.02.2021 ã.
 *      Author: ivan
 */

#ifndef STASH_H_
#define STASH_H_

struct Stash
{
    int size; // Size of each space

    int quantity; // Number of storage spaces
    int next; // Next empty space

    // Dynamically allocated array of bytes:
    unsigned char *storage;

    void initialize(int size);
    void cleanup();
    int add(const void *element);
    void *fetch(int index);
    int count();
    void inflate(int increase);
};

#endif /* STASH_H_ */
