/*
 * struct_.cpp
 *
 *  Created on: 15.01.2021 ã.
 *      Author: ivan
 */

#include <iostream>
#include "struct_.h"


Jar::Jar() {
	beans = 0;
}

void Jar::setBeans(int n_beans) {
	beans = n_beans;
}

void Jar::prinBeans() {
	std::cout << "num of beans: " << beans;
}


