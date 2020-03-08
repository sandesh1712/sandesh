/*
 * volume_cyl.cpp
 *
 *  Created on: 04-Mar-2020
 *      Author: sandesh
 */
#include <iostream>
#include "volume_cyl.h"
#define pie 3.14

using namespace std;

void cyl::getvolume()
{
	if(radius==0)
	{
		cout<<"\nEnter Radius & height: ";
		cin>>this->radius>>this->height;
		volume=pie*radius*radius*height;
		print_volume();
	}
	else
		{
		this->volume=pie*this->radius*this->radius*this->height;
	    print_volume();
		}
}

void cyl::print_volume() const
{
	cout<<"\nvolume of cylinder is : "<<this->volume;
}


