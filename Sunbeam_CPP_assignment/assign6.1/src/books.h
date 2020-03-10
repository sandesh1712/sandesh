/*
 * books.h
 *
 *  Created on: 10-Mar-2020
 *      Author: sandesh
 */

#ifndef SRC_BOOKS_H_
#define SRC_BOOKS_H_

#include "product.h"

class books:public product{
   int pages;
public:
	books();
	books(char* title,double price,int pages);
	void accept();
	void display();
	void set_pages(int pages);
	virtual double cal_disc();
	int get_pages();
};

#endif /* SRC_BOOKS_H_ */
