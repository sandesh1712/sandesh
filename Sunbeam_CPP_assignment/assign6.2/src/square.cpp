/*
 * square.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: sandesh
 */
#include <iostream>
#include "square.h"
using namespace std;

square::square() {
	this->side=0.0;
}

square::square(float side) {
	this->side=side;
}

void square::accept()
{
	cout<<"\nEnter Side :";
	cin>>this->side;
}

void square::display()
{
	cout<<"\n#####################################################";
	cout<<"\n______________________SQUARE________________________";
	cout<<"\nSide      : "<<this->side;
	cout<<"\nArea      : "<<this->side*this->side;
	cout<<"\nPerimeter : "<<this->side*4;
	cout<<"\n#####################################################";
}

void square::set_side(float side)
{
	this->side=side;
}

float square::get_side()
{
	return this->side;
}

float square::cal_area()
{
	return (this->side*this->side);
}

float square::cal_peri()
{
	return (4*this->side);
}
