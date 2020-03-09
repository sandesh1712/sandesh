/*
 * salesmanager.h
 *
 *  Created on: 09-Mar-2020
 *      Author: sandesh
 */

#ifndef SALESMANAGER_H_
#define SALESMANAGER_H_
#include "salesman.h"
#include "manager.h"

class salesmanager:public manager,public salesman {
public:
	salesmanager(int ,float,float,float);
	salesmanager();
	void display();
	void accept();
};

#endif /* SALESMANAGER_H_ */
