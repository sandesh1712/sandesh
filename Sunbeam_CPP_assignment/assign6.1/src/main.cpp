/*
 * main.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: sandesh
 */
#include <iostream>
#include "product.h"
#include "books.h"
#include "tape.h"

using namespace std;

int main()
{
    int N;
	cout<<"\nEnter number of customer (EACH CUSTOMER HAVE TO BUY 3 BOOKS) :";
	cin>>N;
	int cust[N];
 for(int i=0;i<N;i++)
 {
	product* ptr[3];
	for(int i=0;i<3;i++)
    {
		int c;
	    s1:
		cout<<"\n1.Book\n2.Tape";
        cin>>c;
        if(c<=0&&c>2)
        	{cout<<"\nINVALID CHOICE";
            goto s1;}
        switch(c)
        {
        case 1:
        	ptr[i]=new books;
        	ptr[i]->accept();
        	break;

        case 2:
        	ptr[i]=new tape;
        	ptr[i]->accept();
        	break;
        }
    }

	double total=0.0,final_bill=0.0;

	for(int i=0;i<3;i++)
	{
		total=total+ptr[i]->get_price();
	}

	for(int i=0;i<3;i++)
	{
			final_bill=final_bill+ptr[i]->cal_disc();
	}
	for(int i=0;i<3;i++)
	{
	  cout<<"\n"<<i<<")";
	  ptr[i]->display();
	}
	cout<<"\n#################################";
	cout<<"\nTotal      : "<<total;
	cout<<"\nFinal BILL : "<<final_bill;
	cout<<"\n#################################";

	for(int i=0;i<3;i++)
	{delete ptr[i];
	*ptr=NULL;
	}
 }
	return 0;
}



