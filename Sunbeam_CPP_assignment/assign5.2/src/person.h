/*
 * person.h
 *
 *  Created on: 08-Mar-2020
 *      Author: sandesh
 */

#ifndef PERSON_H_
#define PERSON_H_
#include "date.h"
class person {
//protected:
	char name[40];
	char add[100];
	date birth_date;
public:
	person();
	person(char*,char*,date*);
	person(char* name,char* add,int birth_day,int birth_mon,int birth_year);
	void accept(void);
	void display(void);
	void set_name(char * name);
	void set_add(char * add);
	void set_birth_date(date bith_date);
	char* get_name(void);
	char* get_add(void);
	date get_date(void);
};

#endif /* PERSON_H_ */
