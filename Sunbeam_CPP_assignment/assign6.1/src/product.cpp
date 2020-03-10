/*
 * product.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: sandesh
 */
#include <iostream>
#include <cstring>
#include "product.h"
using namespace std;

product::product() {
	strcpy(this->title,"NO NAME");
	this->price=0.0f;
}

product::product(char* title,double price) {
   strcpy(this->title,title);
   this->price=price;
}

void product::accept()
{
   cout<<"\nEnter Title : ";
   cin>>this->title;
   cout<<"\nEnter Price : ";
   cin>>this->price;
}

void product::display()
{
   cout<<"\nTitle : "<<this->title;
   cout<<"\nPrice : "<<this->price;
}

char* product::get_title()
{
	return this->title;
}

double product::get_price()
{
	return this->price;
}
