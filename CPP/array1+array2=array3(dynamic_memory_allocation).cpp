using namespace std;
#include<iostream>
int main()
{
	int *a,*b,*c;
	int i,n,m,o,sum=0,j,k;
	cout<<"\n Enter value of n(noe of array a and b) :";
	cin>>n;
	a=new int[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	cout<<"\n array b :";
	//cin>>m;
	b=new int[n];
	for(i=0;i<n;i++)
	{
		cin>>b[i];
	}
	c=new int[n];
	cout<<"\nc[i]";
	
	for(i=0;i<n;i++)
	{
		c[i]=a[i]+b[i];
	}
	for(i=0;i<n;i++)
	{
		cout<<c[i]<<" ";
	}
	delete []a;
	delete []b;
	delete []c;

	
	
	return 0;
}
