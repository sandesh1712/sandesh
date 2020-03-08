/*
 * volume_cyl.h
 *
 *  Created on: 04-Mar-2020
 *      Author: sandesh
 */

#ifndef SRC_VOLUME_CYL_H_
#define SRC_VOLUME_CYL_H_

class cyl
{
	double radius;
	double height;
	double volume=0;
public:
	cyl():radius(0),height(0){}
	cyl(double radius,double height):radius(radius),height(radius){}
	void getvolume();
	void print_volume() const;
};

#endif /* SRC_VOLUME_CYL_H_ */
