/*
 * address.cpp
 *
 *  Created on: 08-Mar-2020
 *      Author: sandesh
 */

#include "address.h"
#include <cstring>
#include <iostream>
using namespace std;

address::address() {
	strcpy(this->building,"NULL");
	strcpy(this->city,"NULL");
	strcpy(this->street,"NULL");
	this->pin=0;
}


address::address(char * building,char * street,char * city,int pin)
{
	    strcpy(this->building,building);
		strcpy(this->city,city);
		strcpy(this->street,street);
		this->pin=pin;
}

void address::accept()
{
	cout<<"\nEnter Building Name: ";
	cin>>this->building;
	cout<<"\nEnter Street Name: ";
	cin>>this->street;
	cout<<"\nEnter City Name: ";
	cin>>this->city;
    cout<<"\nEnter Pin :";
    cin>>this->pin;
}

void address::display()
{
	cout<<"\n##################################";
	cout<<"\nBuilding :"<<this->building;
	cout<<"\nStreet   :"<<this->street;
	cout<<"\nCity     :"<<this->city;
	cout<<"\nPin      :"<<this->pin;
	cout<<"\n##################################";
}

void address::set_building(char * building)
{
	strcpy(this->building,building);
}

void address::set_street(char * street)
{
	strcpy(this->street,street);
}

void address::set_city(char * city)
{
	strcpy(this->city,city);
}
void address::set_pin(int)
{
	this->pin=pin;
}

char * address::get_building()
{
	return this->building;
}

char * address::get_city()
{
	return this->city;
}

char * address::get_street()
{
	return this->street;
}
