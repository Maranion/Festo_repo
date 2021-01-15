/*
 * struct_.h
 *
 *  Created on: 15.01.2021 ã.
 *      Author: ivan
 */

#ifndef STRUCT__H_
#define STRUCT__H_

struct Jar {
	int beans;
	Jar();
};

void setBeans(Jar &jar,int beans);

void prinBeans(Jar &jar);

#endif /* STRUCT__H_ */
