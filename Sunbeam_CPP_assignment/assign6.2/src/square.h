/*
 * square.h
 *
 *  Created on: 10-Mar-2020
 *      Author: sandesh
 */

#ifndef SRC_SQUARE_H_
#define SRC_SQUARE_H_
#include "shape.h"

class square :public shape {
	float side;
public:
	square();
	square(float side);
	float get_side();
	void set_side(float side);
	void accept();
	void display();
	float cal_area();
	float cal_peri();
};

#endif /* SRC_SQUARE_H_ */
