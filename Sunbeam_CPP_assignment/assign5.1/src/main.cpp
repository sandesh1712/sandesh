#include <iostream>
#include  "date.h"
#include "person.h"
#include "employee.h"

using namespace std;

int main()
{
   /*//0th type default type
	person p0;
	p0.display();
	p0.accept();
	p0.display();

	//1st type
	date d1(10,12,2020);
	person p1("Abc","Kolhapur",&d1);
    p1.display();
    p1.accept();
    p1.display();

    //2nd type
   person p2("Sandesh","Pune",17,12,1997);
   p2.display();
   p2.accept();
   p2.display();*/

	employee e1;
	e1.display();

	date d2(20,20,2002);
	employee e2(1,20000,"EMP 1",&d2);
	e2.display();

	employee e3(2,40000,"Mgr",12,3,2004);
	e3.display();
   return 0;
}
