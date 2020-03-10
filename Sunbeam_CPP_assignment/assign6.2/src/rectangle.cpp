/*
 * rectangle.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: sandesh
 */
#include <iostream>

#include "rectangle.h"
using namespace std;

rectangle::rectangle() {
	this->bredth=0.0;
	this->length=0.0;
}

rectangle::rectangle(float length,float bredth) {
	this->bredth=bredth;
	this->length=length;
}

float rectangle::get_bredth()
{
	return this->bredth;
}

float rectangle::get_length()
{
	return this->length;
}

void rectangle::set_length(float lenght)
{
	this->length=length;
}

void rectangle::set_bredth(float bredth)
{
	this->bredth=bredth;
}

void rectangle::accept()
{
	cout<<"\nEnter Length: ";
	cin>>this->length;
	cout<<"\nEnter Bredth: ";
	cin>>this->bredth;
}

void rectangle::display()
{
	cout<<"\n#####################################################";
	cout<<"\n__________________RECTANGLE_________________________";
	cout<<"\nLength    : "<<this->length;
	cout<<"\nBredth    : "<<this->bredth;
	cout<<"\nArea      : "<<this->length*this->bredth;
	cout<<"\nPerimeter : "<<(2*this->length)+(2*this->bredth);
	cout<<"\n#####################################################";
}

float rectangle::cal_area()
{
	return (this->length*this->bredth);
}

float rectangle::cal_peri()
{
	return ((2*this->length)+(2*this->bredth));
}
