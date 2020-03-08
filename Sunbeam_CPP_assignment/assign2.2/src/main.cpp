#include <iostream>
#include "stud.h"
#include "glob_fun.h"

int N;

using namespace std;

int menu()
{
	int c;
	cout<<"\n0.Exit\n1.Accept_Record\n2.Show Record\n3.Search_record\n4.Sort"<<endl;
	cin>>c;
	return c;
}

int main()
{
 cout<<"Enter Size of Array"<<endl;
 cin>>N;
 student obj[N];
 int c;
 while((c=menu())!=0)
 {
	 switch (c)
	 {
	 case 1:
	 {
		int j;
		 for(j=0;j<N;j++)
				 {
					 obj[j].accept_record();
				 }
	 }
	 break;

	 case 2:
		 int j;
		 for(j=0;j<N;j++)
		 {
			 obj[j].print_record();
		 }
         break;

	 case 3:
		 search_record(obj,N);
		 break;

	 case 4:
		 sort(obj,N);
         break;
 	 }
 }

}
