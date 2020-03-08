/*
 * std.h
 *
 *  Created on: 04-Mar-2020
 *      Author: sandesh
 */

#ifndef SRC_STUD_H_
#define SRC_STUD_H_
//#include "glob_fun.h"
class student
{
	public:
	char gender[5];
    short rollno;
    int marks[3];
    float percentage;
    char name[20];
   void accept_record();
   void print_record();
   //friend void search_record(student *objptr,int i);
};
#endif /* SRC_STUD_H_ */
