using namespace std;
#include<iostream>
int main()
{
	int *a;
	int i,n,sum=0;
	cout<<"\nenter val of n : ";
	cin>>n;
	a=new int[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		sum=sum+a[i];
	}
	cout<<"\n sum is "<<sum;
	delete [] a;
	return 0;
}
