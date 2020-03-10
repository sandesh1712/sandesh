/*
 * tape.h
 *
 *  Created on: 10-Mar-2020
 *      Author: sandesh
 */

#ifndef SRC_tape_H_
#define SRC_tape_H_

#include "product.h"

class tape:public product{
   int duration;
public:
	tape();
	tape(char* title,double price,int duration);
	void accept();
	void display();
	void set_duration(int duration);
	double cal_disc();
	int get_duration();
};

#endif /* SRC_tape_H_ */
