/*
 * Rotation.cpp
 *
 *  Created on: 3.12.2020 ã.
 *      Author: ivan
 */

#include <iostream>
using namespace std;

extern void printBinary(const unsigned char val);

unsigned char rol(unsigned char val)
{
	int highbit;
	if (val & 0x80)
	{
		highbit = 1;
	}
	else
	{
		highbit = 0;
	}

	cout <<endl;
	cout << "Took the high bit: " << highbit << endl;

	val <<= 1;
	cout << "Shifted the number to the left: ";
	printBinary(val);
	cout << endl;

	val |= highbit;
	cout << "Inserted the high bit into the back of the number: ";
	return val;
}

unsigned char ror(unsigned char val)
{
	int lowbit;
	if (val & 1) // Check the low bit
	{
		lowbit = 1;
	}
	else
	{
		lowbit = 0;
	}

	cout << endl;
	cout << "Took the low bit: " << lowbit << endl;

	val >>= 1;
	cout << "Shifted the number to the left: ";
	printBinary(val);
	cout << endl;

	val |= (lowbit << 7);
	cout << "Inserted low bit into the front of the number: ";
	return val;
}


