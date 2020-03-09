/*
 * salesman.h
 *
 *  Created on: 09-Mar-2020
 *      Author: sandesh
 */

#ifndef SALESMAN_H_
#define SALESMAN_H_
#include "employee.h"

class salesman:virtual public employee{
 float comm;
public:
	salesman();
	salesman(float sal);
	salesman(int id,int sal,float comm);
	float get_comm();
	void set_comm(float comm);
	void accept();
	void display();
protected:
	void accept_salesman();
	void display_salesman();
};

#endif /* SALESMAN_H_ */
