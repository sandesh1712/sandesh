/*
 * employee.h
 *
 *  Created on: 08-Mar-2020
 *      Author: sandesh
 */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
#include <iostream>
#include "date.h"
#include "person.h"

using namespace std;

class employee :public person
{
private :
	int id;
	float sal;
	char dept[20];
	date join_date;
public:
	employee();
	employee(int id,float sal,char* dept,date *join_date);
	employee(int id,float sal,char* dept,int join_day,int join_mon,int join_year);
	employee(person *p,int id,float sal,char* dept,date *join_date);
	employee(char* name,char* add,int birth_day,int birth_mon,int birth_year,int id,float sal,char* dept,int join_day,int join_mon,int join_year);
	void accept();
	void display();
	void set_id(int id);
	void set_sal(float sal);
	void set_dept(char *dept);
	void set_Join_date(date join_date);
	int get_id();
	float get_sal();
	char* get_dept();
	date get_join_date();
};

#endif /* EMPLOYEE_H_ */
