/*
 * books.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: sandesh
 */
#include <iostream>
#include "books.h"

using namespace std;

books::books() {
	 this->pages=0;
}

books::books(char* title,double price,int pages)
:product(title,price)
{
	this->pages=pages;
}

void books::accept()
{
	product::accept();
	cout<<"\nEnter NO. of Pages: ";
	cin>>this->pages;
}

void books::display()
{
	cout<<"\n#################################";
	product::display();
	cout<<"\nNO. of Pages: "<<this->pages;
	cout<<"\n#################################";
}

void books::set_pages(int pages)
{
	this->pages=pages;
}

int books::get_pages(){
	return this->pages;
}

double books::cal_disc()
{
	double price=product::get_price();
	return price*0.90;
}


