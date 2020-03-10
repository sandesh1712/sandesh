#include <iostream>
#include  "shape.h"
#include "rectangle.h"
#include "circle.h"
#include "square.h"
using namespace std;

float total_area(shape **ptr)
{
	float area=0.0;

	for(int i=0;i<5;i++)
		 area=area+ptr[i]->cal_area();
		return area;
}

float total_peri(shape **ptr)
{
	float peri=0.0;

	for(int i=0;i<5;i++)
		 peri=peri+ptr[i]->cal_peri();
		return peri;
}
int main()
{
	shape *ptr[5];
	cout<<"\nCreate 5 Shapes";
	for(int i=0;i<5;i++)
	{
		int c;
		cout<<"\n1.Circle\n2.Rectangle\n3.Square";
		cin>>c;
		switch(c)
		{
		case 1:
			ptr[i]=new circle;
			ptr[i]->accept();
			break;

		case 2:
			ptr[i]=new rectangle;
			ptr[i]->accept();
			break;

		case 3:
			ptr[i]=new square;
			ptr[i]->accept();
			break;
		}
	}

	for(int i=0;i<5;i++)
	{
		ptr[i]->display();
	}
    cout<<"\nTotal Area        : "<<total_area(ptr);
    cout<<"\nTotal Perimeter   : "<<total_peri(ptr);
    cout<<"\n##############################################";
	for(int i=0;i<5;i++)
	{
		delete ptr[i];
		*ptr=NULL;
	}
	return 0;
}
