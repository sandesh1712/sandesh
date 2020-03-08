#include <iostream>
#include <cstring>
using namespace std;

class passwordmismatch
{
	char ch[10]="password";
	char c1[10];
public:
	void getPassword();
};

void passwordmismatch::getPassword()
{
	cout<<"Enter Password: "<<endl;
	cin>>c1;

	if(strcmp(ch,c1))
	  throw passwordmismatch();

}

int main()
{
	passwordmismatch p1;

	try
	{
		p1.getPassword();
		cout<<"Granted";
	}
	catch (passwordmismatch p2)
	{
       cout<<"\nWrong Password";
	}
}
