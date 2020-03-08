#include <iostream>

using namespace std;

int sqr(int *x)
{
	if(*x<0)
		throw "You Entered The Negative Number!!";
	else
		return((*x)*(*x));
}
int main()
{
	int x,sq;
	cout<<"Enter Number: ";
	cin>>x;
	try
	{
		sq=sqr(&x);
		cout<<"\nSquare : "<<sq;
	}
	catch(const char* msg)
	{
		cout<<"\n"<<msg<<endl;
	}
	return 0;
}
