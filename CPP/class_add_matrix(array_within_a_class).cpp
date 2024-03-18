using namespace std;
#include<iostream>
class matrix
{
	int a[3][3],b[3][3];
	public:
		void getmatrix_a();
		void getmatrix_b();
		void summatrix_a_b();
};
void matrix :: getmatrix_a()
{
	int i,j;
	cout<<"\nmatrix A :";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
}
void matrix :: getmatrix_b()
{
	int i,j;
	cout<<"\nmatrix B :";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>b[i][j];
		}
	}
}


void matrix :: summatrix_a_b()
{
	int i,j,c[3][3];
	cout<<"\nmatrix A :";
	cout<<"\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"\nmatrix B :";
	cout<<"\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<b[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\nSum of two matrix is : ";
	cout<<"\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<c[i][j]<<" ";
		}
		cout<<"\n";
	}
}

int main()
{
	matrix m;
	m.getmatrix_a();
	m.getmatrix_b();
	m.summatrix_a_b();
	return 0;
}





