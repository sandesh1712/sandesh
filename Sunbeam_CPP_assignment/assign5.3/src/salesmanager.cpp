/*
 * salesmanager.cpp
 *
 *  Created on: 09-Mar-2020
 *      Author: sandesh
 */

#include "salesmanager.h"

salesmanager::salesmanager() {
	// TODO Auto-generated constructor stub

}

salesmanager::salesmanager(int id,float sal,float bonus,float comm)
:employee(id,sal),salesman(comm),manager(bonus)
{ }

void salesmanager::accept()
{
	employee::accept();
	salesman::accept_salesman();
	manager::accept_manager();
}

void salesmanager::display()
{
	employee::display();
	salesman::display_salesman();
	manager::display_manager();
}


