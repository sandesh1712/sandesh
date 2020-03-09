/*
 * person.cpp
 *
 *  Created on: 08-Mar-2020
 *      Author: sandesh
 */
#include <iostream>
#include <cstring>
#include <string>
#include "person.h"
#include "date.h"

using namespace std;

person::person() {
  strcpy(this->name,"NO_name");
  strcpy(this->add,"NULL");
}

person::person(char* name,char* add,int birth_day,int birth_mon,int birth_year)
  :birth_date(birth_day,birth_mon,birth_year){
	strcpy(this->name,name);
	strcpy(this->add,add);
};

person::person(char *name,char *add,date* birth_date)
{
	strcpy(this->name,name);
	strcpy(this->add,add);
	this->birth_date=*birth_date;

}
void person::accept()
{
	cout<<"\nEnter Name: ";
	cin>>this->name;
	cout<<"\nEnter Add:  ";
	cin>>this->add;
	birth_date.accept();
}

void person::display()
{
	cout<<"\nName : "<<this->name;
	cout<<"\nAddress : "<<this->add;
	cout<<"\nBirth Date: ";
	birth_date.display();
}

void person::set_add(char * add)
{
	strcpy(this->add,add);
}

void person::set_name(char * name)
{
	strcpy(this->name,name);
}

void person::set_birth_date(date birth_date)
{
	this->birth_date=birth_date;
}

date person::get_date()
{
	return this->birth_date;
}

const char* person::get_name()
{
	return this->name;
}

const char* person::get_add()
{
	return this->add;
}

