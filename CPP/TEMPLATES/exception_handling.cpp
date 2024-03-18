#include<iostream>
using namespace std;

int main()
{
	int a,b,d;
	cin>>a>>b;
	try{
		if(b==0)
		{
			throw(0);
		}
		else
		{
			d=a/b;
			cout<<d;
		}
	}
	catch(...)
	{
		cout<<"\nZERO DIVISION ERROR";
	}
	return 0;
}
