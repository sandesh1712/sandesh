/*
 * manager.h
 *
 *  Created on: 09-Mar-2020
 *      Author: sandesh
 */

#ifndef manager_H_
#define manager_H_
#include "employee.h"

class manager:virtual public employee{
 float bonus;
public:
	manager();
	manager(float bonus);
	manager(int id,int sal,float bonus);
	float get_bonus();
	void set_bonus(float bonus);
	void accept();
	void display();
protected:
	void accept_manager();
	void display_manager();
};

#endif /* manager_H_ */
