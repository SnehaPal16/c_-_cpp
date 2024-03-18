using namespace std;
#include<iostream>

void swap(int *,int *);
int main()
{
	int a,b;
	cout<<"\nenter value of a and b : ";
	cin>>a>>b;
	swap(&a,&b);
	cout<<"\nafter swaping a and b : "<<a<<" "<<b;
	return 0;
}

void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
