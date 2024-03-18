using namespace std;
#include<iostream>


void fact(int x)
{
	int i,f=1;
	for(i=x;i>0;i--)
	{
		f=f*i;
	}
	cout<<"\nfactorial of "<<x<<" is "<<f;
}

int main()
{
	int n;
	cout<<"\nenter number :";
	cin>>n;
	fact(n);
	
	
	return 0;
}
