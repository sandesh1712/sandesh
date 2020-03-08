#include <iostream>

using namespace std;

class date
{
	int day,month,year;
public :
	date();
	date(int dd,int mm,int yyyy);
	void printDate();
	void accept_date();
	bool is_leap();
};

date::date()
{
	day=1;
	month=1;
	year=2020;
}

date::date(int dd,int mm,int yyyy)
{
	day=dd;
	month=mm;
	year=yyyy;
}

void date::printDate()
{
	cout<<"\n Date : "<<day<<"/"<<month<<"/"<<year;
}

void date::accept_date()
{
	cout<<"\nEnter day: ";
	cin>>day;

	cout<<"\nEnter month: ";
		cin>>month;

		cout<<"\nEnter year: ";
			cin>>year;
}

bool date::is_leap()
{
	if((year%100==0)&&(year%400==0))
	    return 1;
	else if((year%4)==0)
	    return 1;
	else
	    return 0;
}

int main()
{

	date d1(2,2,2020);
	int c;
	while(1)
	{
		cout<<"\n0.Exit\n1.Accept_date\n2.Print_date\n3.check leap\n"<<endl;
		cin>>c;
		if(c==0)
			break;
		switch(c)
		{
		case 1:
			d1.accept_date();
			break;

		case 2:
			d1.printDate();
			break;

		case 3:
		    if(d1.is_leap()==1)
		    	cout<<"leap year"<<endl;
		    else
		    	cout<<"Not a leap year"<<endl;
			break;
		}
	}
	return 0;
 }
