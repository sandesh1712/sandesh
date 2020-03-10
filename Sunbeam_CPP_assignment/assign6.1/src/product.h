/*
 * product.h
 *
 *  Created on: 10-Mar-2020
 *      Author: sandesh
 */

#ifndef SRC_PRODUCT_H_
#define SRC_PRODUCT_H_

class product {
	char title[20];
	double price;
public:
	product();
	product(char* title,double price);
	virtual void accept();
	virtual void display();
	char* get_title();
	double get_price();
	void set_title();
	void set_price();
	virtual double cal_disc()=0;
};

#endif /* SRC_PRODUCT_H_ */
