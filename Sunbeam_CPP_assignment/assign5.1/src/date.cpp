/*
 * date.cpp
 *
 *  Created on: 08-Mar-2020
 *      Author: sandesh
 */

#include <iostream>

using namespace std;

#include "date.h"

date::date() {
	this->day=1;
	this->mon=1;
	this->year=1990;
}

date::date(int day,int mon,int year)
{
	this->day=day;
	this->mon=mon;
	this->year=year;
}

void date::accept()
{
	cout<<"\nEnter day: ";
	cin>>this->day;

	cout<<"\nEnter Month: ";
	cin>>this->mon;

	cout<<"\nEnter Year: ";
	cin>>this->year;
}

void date::display()
{
	cout<<this->day<<"/"<<this->mon<<"/"<<this->year;
}

void date::set_day(int day)
{
	this->day=day;
}

void date::set_mon(int mon)
{
	this->mon=mon;
}

void date::set_year(int mon)
{
	this->year=year;
}

int date::get_day()
{
	return this->day;
}

int date::get_mon()
{
	return this->mon;
}

int date::get_year()
{
	return this->year;
}
