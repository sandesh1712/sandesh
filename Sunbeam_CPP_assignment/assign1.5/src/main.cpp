#include <iostream>

using namespace std;

class tb
{
	float car;
	float cash;

public:
    inline tb();
	inline void pay_car(void);
	inline void nopay_car(void);
	inline void show_data(void);
};

tb::tb()
{
	car=0;
	cash=0;
}

void tb::pay_car()
{
	car++;
	cash=cash+0.50;
}

void tb::nopay_car()
{
	car++;
}

void tb::show_data()
{
	int car_1,car_0;
	car_1=this->cash/0.50;
	car_0=this->car-car_1;
	cout<<"Total cars : "<<this->car<<"\nPaid cars : "<<car_1<<"\nNot paid cars :"<<car_0<<"\ntotal Cash: "<<this->cash<<endl;
}

int main()
{
	int c;
	tb t1;
	while(1)
	{
		cout<<"\n0.exit\n1.pay_car\n2.No Pay car\n3.Show data\n";
		cin>>c;
		if(c==0)
			break;
		switch(c)
		{
		case 1:
			t1.pay_car();
			break;

		case 2:
			t1.nopay_car();
			break;

		case 3:
			t1.show_data();
			break;
		}
	}
	return 0;
}
