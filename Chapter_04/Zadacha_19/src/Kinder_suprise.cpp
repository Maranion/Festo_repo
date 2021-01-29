/*
 * Kinder_suprise.cpp
 *
 *  Created on: 29.01.2021 ã.
 *      Author: ivan
 */


#include "Kinder_suprise.h"
#include <iostream>


Choco::Choco(std::string expDate, std::string chocoType, Toy &Toy) {
	m_expDate = expDate;
	m_chocoType = chocoType;
	m_toy = &Toy;
}

void Choco::Printinfo() {
	std::cout << "expire date: " << m_expDate << std::endl
			  << "Chocolate type: " << m_chocoType << std::endl;
}


Choco::Toy::Toy(std::string toy, bool choke_hazard) {
	m_toy = toy;
	m_choke_hazard = choke_hazard;
}

void Choco::Toy::Printinfo() {
	std::cout << "Toy: " << m_toy << std::endl;
	if(m_choke_hazard) {
		std::cout << "is choke hazard? - True "  << std::endl;
	}else {
		std::cout << "is choke hazard? - False "  << std::endl;
	}
}
