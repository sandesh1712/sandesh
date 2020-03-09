/*
 * salesman.cpp
 *
 *  Created on: 09-Mar-2020
 *      Author: sandesh
 */
#include <iostream>
#include "salesman.h"
using namespace std;
salesman::salesman() {
	this->comm=0.0;
}
salesman::salesman(float comm)
{
	this->comm=comm;
}
salesman::salesman(int id,int sal,float comm)
:employee(id,sal)
{
	this->comm=comm;
}

void salesman::accept()
{
	employee::accept();
	cout<<"\nEnter Comm: ";
	cin>>this->comm;
}
 void salesman::display()
 {
	 employee::display();
	 cout<<"\nComm : "<<this->comm;
 }

 void salesman::accept_salesman()
 {
	 cout<<"\nEnter Comm: ";
	 	cin>>this->comm;
 }

 void salesman::display_salesman()
 {
	 cout<<"\nComm : "<<this->comm;
 }

 void salesman::set_comm(float sal)
 {
	 this->comm=comm;
 }

 float salesman::get_comm()
 {
	 return this->comm;
 }
