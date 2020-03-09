#include <iostream>
#include  "date.h"
#include "person.h"
#include "employee.h"

using namespace std;

int main()
{



	employee e4("Sandesh","Kolhapur",17,12,1997,2,40000,"Mgr",17,12,2011);
	e4.display();

	e4.accept();
	e4.display();


	person p1("Hrishikesh","Pune",14,5,2014);
    date d1(14,11,1996);
    employee e5(&p1,3,25000,"Emp",&d1);
    e5.display();

   return 0;
}
