//============================================================================
// Name        : Zadacha_17.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
 s

union Packed
{
    char i;
    short j;
    int k;
    long l;
    float f;
    double d;
};

int main()
{
    cout << "sizeof(Packed) = "
              << sizeof(Packed) << std::endl;

    Packed packed;

    std::cout << "Asigning value to short" << std::endl;
    packed.j = 42;

    std::cout << "Printing via int: " << packed.i << std::endl;

    std::cout << "Asigning value to float" << std::endl;
    packed.f = 6.63;

    std::cout << "Printing via int: " << packed.i << std::endl;

    return 0;
}
