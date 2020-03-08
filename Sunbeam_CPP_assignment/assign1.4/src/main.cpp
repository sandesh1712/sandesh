#include <iostream>

using namespace std;

class box
{
	int length,width,height;
	float volume;
public:
	box();
	box(int l,int w,int h);
	void accept_data();
	void show_vol();
};

box::box()
{
	height=0;width=0;length=0;volume=0;
}

box::box(int length,int width,int height)
{
	this->height=height;
	this->length=length;
	this->width=width;
	volume=0;
}

void box::accept_data()
{
	if(height!=0)
	cout<<"already has the data and now it will be over written"<<endl;

		cout<<"\nEnter Length,Width,Height in m: "<<endl;
		cin>>length>>width>>height;
}

void box::show_vol()
{
		volume=height*width*length;
		cout<<"volume = "<<volume<<" m3";
}

int main()
{
	int i;
	//box b1;
	box b1(1,1,1);
	while(1)
	{
      cout<<"\n0.exit\n1.accept_data\n2.show volume"<<endl;
      cin>>i;
      if(i==0)
         break;
      switch (i)
      {
      case 1:
    	  b1.accept_data();
    	  break;

      case 2:
    	  b1.show_vol();
    	  break;
      }
	}
	return 0;
}
