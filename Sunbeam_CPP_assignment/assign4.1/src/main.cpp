#include <iostream>

using namespace std;

static int f_acc;

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
    inline account();
    inline account(int id,account_type type);
    inline void accept();
    inline void display();
    inline void set_id(int id);
    inline void set_balance(double balance);
    inline void set_type(account_type type);
    inline int get_id();
    inline double get_balance();
    inline account_type get_type();
    inline void deposit(double balance);
    inline void withdraw(double balance);
    friend  inline int Auth(account *ac);
};

class insuff_bal  //exception class
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

void account::deposit(double amt)
{
   if(amt<0)
   {
     throw "Amount Should Be greater Than 0";
   }
    this->balance+=amt;
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
	 int c;
	 cout<<"\n0.exit1.Deposite\n2.Withdraw\n3.Display Info";
	 cin>>c;
	 return c;
 }

 int Auth(account *ac)
 {
     cout<<"Enter acc_id: ";
     cin>>f_acc;
     int flag=0;
     for(int i=0;i<5;i++)
     {
    	 if(ac[i].id==f_acc)
    		 {flag=1;
    		 return ac[i].id;}
     }
     if(flag==0)
    	 return 0;
 }

 int main()
 {
	 cout<<"\nFirst Create 5 account TO run a bank or (bank wale mar jayenge)";
	 account acc[5];
	 for(int i=0;i<5;i++)
	 {
		 acc[i].accept();
	 }
while(1)
   { int i=Auth(acc);
     if(i==0)
      cout<<"Account Not Found !!";
     else
    { int choice;
	 while((choice=menu())!=0)
	 {
		 switch (choice)

	 {
	  case 1:
		 double deposite;
		 cout<<"\nEnter Amount You Want To Deposite : ";
		 cin>>deposite;
	   try
	   {
           acc[i].deposit(deposite);
	   }
       catch(char *msg)
       {
     	  cout<<"\n"<<msg;
       }
       break;


	  case 2:
		 int withdraw;
    	 cout<<"\nEnter Amount You Want To Deposite: ";
    	 cin>>withdraw;
	   try
	   { acc[i].withdraw(withdraw);}
	    catch (insuff_bal *b1)
	   {
         b1->print_msg();
	   }
	   break;

	  case 3:
		  acc[i].display();
		  break;
	  }
     }
    }
   }
	 return 0;
 }
