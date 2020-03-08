#include <iostream>

using namespace std;

enum account_type{
 	  saving=1,current,Dmat
 };

char at[4][10]={"Null","Saving","Current","Dmat"};


class account
{
  int id;
  account_type type;
  double balance;

public:
    account();
    account(int id,account_type type);
    void accept();
    void display();
    void set_id(int id);
    void set_balance(double balance);
    void set_type(account_type type);
    int get_id();
    double get_balance();
    account_type get_type();
    void deposit(double balance);
    void withdraw(double balance);
};

class insuff_bal
{
    int id;
    account_type type;
    double balance;
public:
    insuff_bal(int id,double balance,account_type type);
    void print_msg();
};
insuff_bal::insuff_bal(int id,double balance,account_type type)
{
	this->id=id;
	this->balance=balance;
	this->type=type;
}
void insuff_bal::print_msg()
{
	  cout<<"\n############################################";
      cout<<"\nInsufficient Balance Can't Withdraw money!!!!";
	  cout<<"\nAccount id      : "<<this->id;
	  cout<<"\nAccount type    : "<<at[this->type];
	  cout<<"\nAccount Balance : "<<this->balance;
	  cout<<"\n############################################";
}

void account::withdraw(double amt)
{
	if(amt>this->balance)
		throw insuff_bal(this->id,this->balance,this->type);
	else
	   {this->balance-=amt;
	   cout<<"\nAmount Withdrawn Successfuly!!!\nNew Balance : "<<this->balance;}

}
void account::deposit(double balance)
{
	this->balance+=balance;
}

account::account()
{
	id=0;
	type=saving;
	balance=0.0;
}
account:: account(int id,account_type type)
{
    this->id=id;
    this->type=type;
	this->balance=0.0;
}

void account::accept()
{
  cout<<"\nEnter Account id: ";
  cin>>this->id;
  cout<<"\nChoose Account type:\n1.Saving\n2.Current\n3.Dmat";
  int c;
  cin>>c;
  switch(c)
  {
  case saving:
	  this->type=saving;
	  break;

  case current:
  	  this->type=current;
  	  break;

  case Dmat:
  	  this->type=Dmat;
  	  break;
  }
  cout<<"\nEnter Account Balance :";
  cin>>this->balance;
}
void account::set_id(int id)
{
	this->id=id;
}

void account::set_balance(double balance)
{
	this->balance=balance;
}

void account::set_type(account_type type)
{
	 switch(type)
	  {
	  case saving:
		  this->type=saving;
		  break;

	  case current:
	  	  this->type=current;
	  	  break;

	  case Dmat:
	  	  this->type=Dmat;
	  	  break;
	  }
}

int account::get_id()
{
	return this->id;
}

double account::get_balance()
{
	return this->balance;
}

account_type account::get_type()
{
	return this->type;
}

 void account::display()
 {
	  cout<<"\n############################################";
	  cout<<"\nAccount id      : "<<this->id;
	  cout<<"\nAccount type    : "<<at[this->type];
	  cout<<"\nAccount Balance : "<<this->balance;
	  cout<<"\n############################################";
 }


 int menu()
 {
	 cout<<"\n0.exit1.accept2.display";
 }

 int main()
 {
	 account a1;
	 a1.accept();
	 a1.display();
	try
	 { a1.withdraw(500); }
	catch (insuff_bal b1)
	{
        b1.print_msg();
	}
	 return 0;
 }
