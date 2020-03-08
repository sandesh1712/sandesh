/*
 * glob_fun.cpp
 *
 *  Created on: 04-Mar-2020
 *      Author: sandesh
 */
#include <iostream>
#include <cstring>
#include "stud.h"
#include "glob_fun.h"

using namespace std;

void search_record(student *objptr,int i)
{
  int c;
  cout<<"\n1.Search by Name\n2.Search by Roll Number"<<endl;
  cin>>c;
  if(c==1)
  {
     int j;
     char ser_name[50];
     cout<<"\nEnter Name: "<<endl;
     cin>>ser_name;
     int a;
     int flag=0;
	  for(j=0;j<i;j++)
	  {
		 a=strcmp(objptr[j].name,ser_name);
		  if(a==0)
		  {
				cout<<"\n************************************************";
			    cout<<"\nName        : "<<objptr[j].name;
				cout<<"\nRoll Number : "<<objptr[j].rollno;
				cout<<"\nGender      : "<<objptr[j].gender;
				cout<<"\nMarks       : "<<objptr[j].marks[0]<<","<<objptr[j].marks[1]<<","<<objptr[j].marks[2]<<".";
				cout<<"\nPercentage  : "<<objptr[j].percentage;
				cout<<"\n************************************************";
				flag=1;
		  }
	  }
	  if(flag==0)
	 	  	  {
	 	  		  cout<<"\nNot Found"<<endl;
	 	  	  }
  }
  else if(c==2)
  {
	  int j;
	  int ser_roll;
	  cout<<"\nEnter Roll Number: "<<endl;
	       cin>>ser_roll;
         int flag=0;
	  	  for(j=0;j<i;j++)
	  	  {
	  		  if(objptr[j].rollno==ser_roll)
	  		  {
	  			cout<<"\n************************************************";
	  			  cout<<"\nName        : "<<objptr[j].name;
	  				cout<<"\nRoll Number : "<<objptr[j].rollno;
	  				cout<<"\nGender      : "<<objptr[j].gender;
	  				cout<<"\nMarks       : "<<objptr[j].marks[0]<<","<<objptr[j].marks[1]<<","<<objptr[j].marks[2]<<".";
	  				cout<<"\nPercentage  : "<<objptr[j].percentage;
	  				cout<<"\n************************************************\n";
	  				flag=1;
	  		  }
	  	  }
	  	  if(flag==0)
	  	  {
	  		  cout<<"\nNot Found"<<endl;
	  	  }
  }
  else
  cout<<"\nWrong Choice"<<endl;
}

void swap()
{

}

void sort(student *objptr,int N)
{
   int i,j;
   for(i=0;i<N;i++)
   {
	   for(j=i;j<N;j++)
	   {
		   if(objptr[i].rollno>objptr[j].rollno)
		   {
				char temp_name[20],temp_gend[5];
				int temp_mark,temp_roll;
				float temp_percentage;
				//swap name;
				strcpy(temp_name,objptr[i].name);
				strcpy(objptr[i].name,objptr[j].name);
				strcpy(objptr[j].name,temp_name);

				//swap gender
				strcpy(temp_gend,objptr[i].gender);
				strcpy(objptr[i].gender,objptr[j].gender);
				strcpy(objptr[j].gender,temp_gend);

				//swap roll number
				temp_roll=objptr[i].rollno;
				objptr[i].rollno=objptr[j].rollno;
				objptr[j].rollno=temp_roll;

				//marks swap
				int x;
				for(x=0;x<3;x++)
				{
					temp_mark=objptr[i].marks[x];
					objptr[i].marks[x]=objptr[j].marks[x];;
					objptr[j].marks[x]=temp_mark;

				}
				//swap percentage;
				temp_percentage=objptr[i].percentage;
				objptr[i].percentage=objptr[j].percentage;
				objptr[j].percentage=temp_percentage;
		   }
	   }
   }
}

