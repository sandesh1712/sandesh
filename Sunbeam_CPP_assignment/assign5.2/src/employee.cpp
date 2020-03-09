/*
 * employee.cpp
 *
 *  Created on: 08-Mar-2020
 *      Author: sandesh
 */
#include <iostream>
#include "employee.h"
#include "date.h"
#include <cstring>
#include "person.h"

using namespace std;

employee::employee() {
  this->id=0;
  this->sal=0;
  strcpy(this->dept,"NULL");
}

void employee::accept()
{
	person::accept();
	cout<<"\nEnter id: ";
	cin>>this->id;
	cout<<"\nEnter Salary : ";
	cin>>this->sal;
	cout<<"\nEnter Dept: ";
	cin>>this->dept;
	cout<<"\nJoin Date: ";
	this->join_date.accept();
}

employee::employee (char* name,char* add,int birth_day,int birth_mon,int birth_year,int id,float sal,char* dept,int join_day,int join_mon,int join_year)
:join_date(join_day,join_mon,join_year),person(name,add,birth_day,birth_mon,birth_year)
{
	  this->id=id;
	  this->sal=sal;
	  strcpy(this->dept,dept);
}

void employee::display()
{
	cout<<"\n###########################################";
	person::display();
	cout<<"\nId: "<<this->id;
	cout<<"\nSalary: "<<this->sal;
	cout<<"\nDept : "<<this->dept;
	this->join_date.display();
	cout<<"\n###########################################";
}

employee::employee(int id,float sal,char* dept,date *join_date)
{
	this->id=id;
	this->join_date=*join_date;
	this->sal=sal;
	strcpy(this->dept,dept);
}

employee::employee(person *p1,int id,float sal,char* dept,date *join_date)
{

	this->set_add(p1->get_add());
	this->set_name(p1->get_name());
	this->set_birth_date(p1->get_date());
	//strcpy(this->birth_date,)
	this->id=id;
	this->sal=sal;
	strcpy(this->dept,dept);
	this->join_date=*join_date;
}

employee::employee(int id,float sal,char* dept,int join_day,int join_mon,int join_year)
:join_date(join_day,join_mon,join_year)
{
	this->id=id;
	this->sal=sal;
	strcpy(this->dept,dept);
}

void employee::set_id(int id)
{
	this->id=id;
}

void employee::set_sal(float sal)
{
	this->sal=sal;
}

void employee::set_dept(char *date)
{
	strcpy(this->dept,dept);
}

void employee::set_Join_date(date join_date)
{
   this->join_date=join_date;
}

int employee::get_id()
{
	return this->id;
}

float employee::get_sal()
{
	return this->sal;
}

char* employee::get_dept()
{
	return this->dept;
}

date employee::get_join_date()
{
	return this->join_date;
}
