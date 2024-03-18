using namespace std;
#include<iostream>

class matrix
{
	int a[3][3],b[3][3];
	public:
		void getmatrix_a();
		void getmatrix_b();
		void multiplymatrix_a_b();
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

void matrix :: multiplymatrix_a_b()
{
	int i,j,c[3][3],k;
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
	
	cout<<"\nmatrix after multiplying : ";
	cout<<"\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=0;
			for(k=0;k<3;k++)
			{
				c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
			}
			
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
	m.multiplymatrix_a_b();
	return 0;
}






