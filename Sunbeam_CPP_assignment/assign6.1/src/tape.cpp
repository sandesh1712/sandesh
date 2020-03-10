/*
 * tape.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: sandesh
 */
#include <iostream>
#include "tape.h"

using namespace std;

tape::tape() {
	 this->duration=0;
}

tape::tape(char* title,double price,int duration)
:product(title,price)
{
	this->duration=duration;
}

void tape::accept()
{
	product::accept();
	cout<<"\nEnter of duration: ";
	cin>>this->duration;
}

void tape::display()
{
	cout<<"\n#################################";
	product::display();
	cout<<"\nDuration: "<<this->duration;
	cout<<"\n#################################";
}

void tape::set_duration(int duration)
{
	this->duration=duration;
}

int tape::get_duration(){
	return this->duration;
}

double tape::cal_disc()
{
	double price=product::get_price();
	return price*0.95;
}
