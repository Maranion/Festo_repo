/*
 * Kinder_suprise.h
 *
 *  Created on: 29.01.2021 ã.
 *      Author: ivan
 */

#ifndef KINDER_SUPRISE_H_
#define KINDER_SUPRISE_H_

#include <string>

struct Choco {

	std::string m_expDate;
	std::string m_chocoType;

	void Printinfo();

	struct Toy {
		std::string m_toy;
		bool m_choke_hazard;

		Toy(std::string toy, bool choke_hazard);
		void Printinfo();
	} * m_toy;

	Choco(std::string expDate, std::string chocoType, Toy &Toy);
};



#endif /* KINDER_SUPRISE_H_ */
