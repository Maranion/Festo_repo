//============================================================================
// Name        : Zadacha_25.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void printBinary(const unsigned char val)
{
	for (int i = 7; i >= 0; i--)
	{
		if (val & (1 << i))
		{
			cout << "1";
		}
		else
		{
			cout << "0";
		}
	}
}

int main() {

	float fvar = 2.88;

	unsigned char ch = reinterpret_cast<unsigned char>(&fvar);
	unsigned char *pch = &ch;

	for (int i = 0; i < sizeof(float); i++)
		{
			printBinary(pch[i]);
			cout <<endl;
		}

	cout << endl;

	fvar = 7.14;
		ch = reinterpret_cast<unsigned char>(&fvar);
		pch = &ch;

		for (int i = 0; i < sizeof(float); i++)
		{
			printBinary(pch[i]);
			cout <<endl;
		}

	return 0;
}
