/*
 * Videotape.h
 *
 *  Created on: 28.01.2021 ã.
 *      Author: ivan
 */
#include <string>

#ifndef VIDEOTAPE_H_
#define VIDEOTAPE_H_

class Videotape {

	std::string m_title;
	int m_daysRented;
	std::string m_renter_id;
	double m_price;
	bool m_rented;

	public:

	Videotape(std::string title,double price);
	~Videotape();

	bool rent(int n_daysRented, std::string n_renter_id);
	void printData();
	void set_Videotape(std::string title, int price);
};



#endif /* VIDEOTAPE_H_ */
