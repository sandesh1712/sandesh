/*
 * circle.h
 *
 *  Created on: 10-Mar-2020
 *      Author: sandesh
 */

#ifndef SRC_CIRCLE_H_
#define SRC_CIRCLE_H_
#include "shape.h"
class circle:public shape {
	float radius;
public:
	circle();
	circle(float);
	float get_radius();
	void set_radius(float radius);
	void accept();
	void display();
	float cal_peri();
	float cal_area();
};

#endif /* SRC_CIRCLE_H_ */
