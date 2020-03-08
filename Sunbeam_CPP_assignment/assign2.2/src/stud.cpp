
#include <iostream>
#include <string>
#include "stud.h"

using namespace std;

void student::accept_record()
{
	cout<<"\nEnter Name: "<<endl;
	//cin.ignore();
	cin>>this->name;

	cout<<"\nEnter rollno: "<<endl;
	cin>>this->rollno;

	cout<<"\nEnter gender: "<<endl;
	//cin.ignore();
	cin>>this->gender;

	cout<<"\nEnter Marks of 3 subjects : "<<endl;
	cin>>this->marks[0]>>this->marks[1]>>this->marks[2];

	this->percentage=(this->marks[0]+this->marks[1]+this->marks[2])/3;
}

void student::print_record()
{
	cout<<"\n************************************************";
	cout<<"\nName        : "<<this->name;
	cout<<"\nRoll Number : "<<this->rollno;
	cout<<"\nGender      : "<<this->gender;
	cout<<"\nMarks       : "<<this->marks[0]<<","<<this->marks[1]<<","<<this->marks[2]<<".";
	cout<<"\nPercentage  : "<<this->percentage;
	cout<<"\n************************************************";
}
