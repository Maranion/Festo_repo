/*
 * Videotape.cpp
 *
 *  Created on: 28.01.2021 ã.
 *      Author: ivan
 */

#include "Videotape.h"
#include <string>
#include <iostream>

Videotape::Videotape(std::string title,double price) {
	m_title = title;
	m_daysRented = 0;
	m_renter_id = "XXXXXXXX";
	m_price = price;
	m_rented = false;
}

Videotape::~Videotape() {} ;

bool Videotape::rent(int daysRented, std::string renter_id) {
	m_renter_id = renter_id;
	m_daysRented = daysRented;
	m_rented = true;
	return true;
}


void Videotape::printData() {
	if(m_rented) {
		std::cout	<< "title: " << m_title << std::endl
					<< "price: " << m_price << std::endl
					<< "renter id: " << m_renter_id << std::endl
					<< "days rented: " << m_daysRented << std::endl;
	}else {
		std::cout	<< "title: " << m_title << std::endl
					<< "price: " << m_price << std::endl
					<< "not rented" << std::endl;
	}
}
