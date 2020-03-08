#include <iostream>

using namespace std;

class matrix
{

	int row,col;
	int **ptr;
	public:
	   inline matrix(int row,int col);
	   inline void accept();
	   inline void print();
	   inline ~matrix();
	   inline void add_matrix(matrix *,matrix*);
	   inline void sub_matrix(matrix *,matrix*);
	   inline void mul_matrix(matrix *,matrix*);
	   inline void transpose();
};

void matrix::accept()
{
	for(int i=0;i<this->row;i++)
	{
		for(int j=0;j<this->col;j++)
		{
           cout<<"\nEnter "<<i<<"x"<<j<<": ";
			cin>>this->ptr[i][j];
		}
	}
}
void matrix::transpose()
{
	cout<<"\n";
	cout<<"Transposed  matrix is: ";
	for(int i=0;i<this->row;i++)
	{
		cout<<"\n";
		for(int j=0;j<this->col;j++)
		{
			cout<<"\t"<<this->ptr[j][i];
		}
	}
}

void matrix::mul_matrix(matrix *m1,matrix *m2)
{
   int nrow=m1->row<m2->row?m1->row:m1->row;
   int ncol=m1->col<m2->col?m1->col:m1->col;
   int arr[nrow][ncol];
   for(int i=0;i<nrow;i++)
   {
	   for(int j=0;j<ncol;j++)
	   {
		   arr[i][j]=0;
		   for(int k=0;k<nrow;k++)
		  {
			  arr[i][j]+=m1->ptr[i][k]*m2->ptr[k][j];
		  }
	   }
   }
	cout<<"\n";
	cout<<"matrix multiplication is: ";
	for(int i=0;i<nrow;i++)
	{
		cout<<"\n";
		for(int j=0;j<ncol;j++)
		{
			cout<<"\t"<<arr[i][j];
		}
	}
}


void matrix::add_matrix(matrix *m1,matrix *m2)
{
	if(m1->row==m2->row&&m2->col==m2->col)
	{int nrow=m1->row;
	 int ncol=m1->col;
	 int arr[nrow][ncol];
     for(int i=0;i<nrow;i++)
     {
    	for(int j=0;j<ncol;j++)
    	{
    		arr[i][j]=m1->ptr[i][j]+m2->ptr[i][j];
    	}
     }
    cout<<"\n";
    cout<<"matrix addition is: ";
	for(int i=0;i<nrow;i++)
    {
		cout<<"\n";
		for(int j=0;j<ncol;j++)
    	{
    		cout<<"\t"<<arr[i][j];
    	}
    }
	}
	else
		throw "Can't perform subtraction  on dissimilar matrix dimensions";
}

void matrix::sub_matrix(matrix *m1,matrix *m2)
{
	if(m1->row==m2->row&&m2->col==m2->col)
	{
	 int nrow=m1->row;
	 int ncol=m1->col;
	 int arr[nrow][ncol];
	 for(int i=0;i<nrow;i++)
	 {
		for(int j=0;j<ncol;j++)
		{
			arr[i][j]=m1->ptr[i][j]-m2->ptr[i][j];
		}
	}
	cout<<"\n";
	cout<<"matrix substration  is: ";
	for(int i=0;i<nrow;i++)
	{
		cout<<"\n";
		for(int j=0;j<ncol;j++)
		{
			cout<<"\t"<<arr[i][j];
		}
	}
	}
	else
		throw "Can't add matrix of disimilar dimensions";
}


matrix::matrix(int row,int col)
{
    this->row=row;
    this->col=col;
	ptr=NULL;

	ptr=new int*[this->row];
	for(int i=0;i<3;i++)
	ptr[i]=new int[this->col];


    for(int i=0;i<this->row;i++)
    {
    	for(int j=0;j<this->col;j++)
    	{
    		ptr[i][j]=0;
    	}
    }
}

void matrix::print()
{
    cout<<"\n";
	for(int i=0;i<this->row;i++)
    {
    	for(int j=0;j<this->col;j++)
    	{
    		cout<<"\t"<<ptr[i][j];
    	}
    	cout<<"\n";
    }
}

matrix::~matrix()
{
	for(int i=0;i<this->row;i++)
		delete[] ptr[i];
	delete[] ptr;
}

int main()
{
   matrix m1(1,2),m2(2,2);
   m1.accept();
   m2.accept();
   m1.print();
   m2.print();
  try
  { m1.add_matrix(&m1,&m2);}
  catch(const char *msg)
  {
	  cout<<"\n"<<msg;
  }
  try
  {m1.sub_matrix(&m1,&m2);}
  catch(const char *msg)
  {
	  cout<<"\n"<<msg;
  }
   m1.mul_matrix(&m1,&m2);
   m1.transpose();
   m2.transpose();
   return 0;
}
