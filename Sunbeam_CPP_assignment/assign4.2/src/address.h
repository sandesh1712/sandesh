/*
 * address.h
 *
 *  Created on: 08-Mar-2020
 *      Author: sandesh
 */

#ifndef SRC_ADDRESS_H_
#define SRC_ADDRESS_H_

class address {
	char building[20];
	char street[20];
	char city[20];
	int pin;
public:
	address();
	address(char * building,char * street,char * city,int pin);
	void accept();
	void display();
	void set_building(char *building);
	void set_street(char *street);
	void set_city(char *city);
	void set_pin(int pin);
	int get_pin();
	char* get_building();
	char* get_street();
	char* get_city();
};

#endif /* SRC_ADDRESS_H_ */
