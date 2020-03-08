#include <iostream>


using namespace std;


struct date
  {
	 int day,month,year;
  };


void initdate(struct date * ptdate)
{
	ptdate->day=0;
	ptdate->month=0;
	ptdate->year=0;
}

void accept_date(struct date * ptdate)
{
	cout<<"Enter date : "<<endl;
	cin>>ptdate->day>>ptdate->month>>ptdate->year;
}

void print_date(struct date * ptdate)
{

	cout<<"date :"<<ptdate->day<<"/"<<ptdate->month<<"/"<<ptdate->year<<"\n\n"<<endl;

}


bool  is_leap(struct date *ptdate)
{
   if((ptdate->year%100)==0)
        {
	  if((ptdate->year%400)==0)
			  return  1;
	  else

			   return 0;
		}
	else if((ptdate->year%4)==0)
		{
			return 1;
		}
	else
     	{
	       return 0;
	    }
	return 0;
}


int main()
{
	int c;
	struct date d1;
	initdate(&d1);

	while(1)
 {
		cout<<"0.exit\n1.Accept_date\n2.Show_date\n3.check leap\n"<<endl;
		cin>>c;
	switch(c)
	{
	 case 1:
	 accept_date(&d1);
	  break;

	 case 2:
     print_date(&d1);
     break;

	 case 3:
	{bool n;
		n=is_leap(&d1);
		if(n==0)
			cout<<"its not a leap year \n"<<endl;
		else
			cout<<"its a leap year \n"<<endl;
	  }
      break;
	}
  }
    return 0;
}

