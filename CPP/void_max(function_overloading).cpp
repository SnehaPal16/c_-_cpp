using namespace std;
#include<iostream>

void max(int,int);
void max(int,int,int);
int main()
{
	int a,b,c,mx;
	cout<<"\nenter value of a,b,c :";
	cin>>a>>b>>c;
	max(a,b);
	max(a,b,c);
	return 0;
}

void max(int i,int j)
{
	int m1;
	m1=(i>j)? i:j;
	cout<<"\nmaximum number is : "<<m1;
	
}

void max(int x,int y,int z)
{
	int m2;
	if((x>y) && (x>z))
	{
		m2=x;
	}
	else if((y>x) && (y>z))
	{
		m2=y;
	}
	else
	{
		m2=z;
	}
	cout<<"\nmaximum number is : "<<m2;
	
}
