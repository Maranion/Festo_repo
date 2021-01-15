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

void setBeans(Jar &jar,int n_beans) {
	jar.beans = n_beans;
}

void prinBeans(Jar &jar) {
	std::cout << "num of beans: " << jar.beans;
}
