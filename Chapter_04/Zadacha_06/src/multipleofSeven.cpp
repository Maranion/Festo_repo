

#include "multipleofSeven_class.h"
#include <iostream>


 int Sevens::multiply() {
	 const int SEVEN = 7;
	 int n;
	 n = num*SEVEN;
	 return n;
 }

 void Sevens::timesSeven() {
	std::cout << num << " times seven = ";

	this->num = this->multiply();

	std::cout << num << std::endl;
 }
