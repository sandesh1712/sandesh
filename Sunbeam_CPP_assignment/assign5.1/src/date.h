/*
 * date.h
 *
 *  Created on: 08-Mar-2020
 *      Author: sandesh
 */

#ifndef DATE_H_
#define DATE_H_

class date {
	int day,mon,year;
public:
	date();
	date(int day,int mon,int year);
	void accept();
	void display();
	void set_day(int day);
	void set_mon(int mon);
	void set_year(int year);
	int get_day();
	int get_mon();
	int get_year();
};

#endif /* DATE_H_ */
