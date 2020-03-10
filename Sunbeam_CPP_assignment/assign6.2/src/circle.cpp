/*
 * circle.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: sandesh
 */
#include <iostream>
#include "circle.h"

using namespace std;

circle::circle() {
	this->radius=0.0;
}

circle::circle(float radius) {
	this->radius=radius;
}

void circle::accept()
{
	cout<<"\nEnter Radius: ";
			cin>>this->radius;
}

void circle::display()
{
	cout<<"\n#####################################################";
	cout<<"\n_____________________CIRCLE__________________________";
	cout<<"\nRadius    : "<<this->radius;
	cout<<"\nArea      : "<<3.14*this->radius*this->radius;
	cout<<"\nPerimeter : "<<3.14*(this->radius+this->radius);
	cout<<"\n#####################################################";
}

float circle::cal_area()
{
	return (3.14*this->radius*this->radius);
}

float circle::cal_peri()
{
	return (3.14*(this->radius+this->radius));
}

