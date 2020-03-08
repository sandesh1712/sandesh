#include <iostream> #include <ctime>

using namespace std;

class Time
{
  int h,m,s;
public:
  Time():h(04),m(06),s(51){}
  Time(int h,int m,int s):h(h),m(m),s(s){}
  int getHour();
  int getMinute();
  int getSeconds();
  void print_date();
  void setHour(int);
  void setMinute(int);
  void setSeconds(int);
};

int Time::getHour(){return this->h;}
int Time::getSeconds(){return this->s;}
int Time::getMinute(){return this->m;}
void Time::print_date()
{
	time_t now = time(0);
	cout<<"todays time"<<ctime(&now)<<endl;
}

void Time::setHour(int h){this->h=h;}
void Time::setMinute(int m){this->m=m;}
void Time::setSeconds(int s){this->m=m;}

int main()
{
	int N;
	cout<<"\nEnter size of object: ";
	cin>>N;
	Time *arrptr=new Time[N];
	for(int i=0;i<N;i++)
	{
        arrptr[i].print_date();
	}
	return 0;
}
