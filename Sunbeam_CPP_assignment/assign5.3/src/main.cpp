#include <iostream>
#include "employee.h"
#include "salesman.h"
#include "manager.h"
#include "salesmanager.h"

using namespace std;

int main(){
    salesmanager s1(1,20000,7000,300);
    s1.display();

    s1.accept();
    s1.display();
	return 0;
}
