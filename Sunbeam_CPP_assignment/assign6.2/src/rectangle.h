/*
 * rectangle.h
 *
 *  Created on: 10-Mar-2020
 *      Author: sandesh
 */

#ifndef SRC_RECTANGLE_H_
#define SRC_RECTANGLE_H_
#include "shape.h"

class rectangle:public shape{
	float length;
	float bredth;
public:
	rectangle();
	rectangle(float length,float bredth);
	float get_length();
	float get_bredth();
	void set_length(float length);
	void set_bredth(float bredth);
    void accept();
    void display();
	float cal_area();
	float cal_peri();
};

#endif /* SRC_RECTANGLE_H_ */
