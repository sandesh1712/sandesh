/*
 * employee.cpp
 *
 *  Created on: 09-Mar-2020
 *      Author: sandesh
 */
#include <iostream>
#include "employee.h"
using namespace std;

employee::employee() {
    this->id=0;
    this->sal=0;
}

employee::employee(int id,float sal)
{
	this->id=id;
	this->sal=sal;
}

void employee::accept()
 {
	 cout<<"\nEnter Id : ";
	 cin>>this->id;

	 cout<<"\nEnter Sal : ";
	 cin>>this->sal;
 }

void employee::display()
{
	 cout<<"\n Id : "<<this->id;
     cout<<"\n Sal: "<<this->sal;
}

void employee::set_id(int id)
{
	this->id=id;
}

void employee::set_sal(float sal)
{
	this->sal=sal;
}

int employee::get_id()
{
	return this->id;
}

float employee::get_sal()
{
	return this->sal;
}
