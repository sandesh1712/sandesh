/*
 * employee.h
 *
 *  Created on: 09-Mar-2020
 *      Author: sandesh
 */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

class employee {
int id;
float sal;
public:
	employee();
	employee(int id,float salary);
	void accept();
	void display();
	void set_id(int sal);
    void set_sal(float sal);
	int get_id();
	float get_sal();
};

#endif /* EMPLOYEE_H_ */
