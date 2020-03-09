/*
 * manager.cpp
 *
 *  Created on: 09-Mar-2020
 *      Author: sandesh
 */
#include <iostream>
#include "manager.h"
using namespace std;

manager::manager() {
	this->bonus=0.0;
}
manager::manager(float bonus)
{
	this->bonus=bonus;
}
manager::manager(int id,int sal,float bonus)
:employee(id,sal)
{
	this->bonus=bonus;
}

void manager::accept()
{
	employee::accept();
	cout<<"\nEnter bonus: ";
	cin>>this->bonus;
}
 void manager::display()
 {
	 employee::display();
	 cout<<"\nbonus : "<<this->bonus;
 }

 void manager::accept_manager()
 {
	 cout<<"\nEnter bonus: ";
	 	cin>>this->bonus;
 }

 void manager::display_manager()
 {
	 cout<<"\nbonus : "<<this->bonus;
 }

 void manager::set_bonus(float sal)
 {
	 this->bonus=bonus;
 }

 float manager::get_bonus()
 {
	 return this->bonus;
 }
