using namespace std;
#include<iostream>

float SI(int p,int t,int r=2);
int main()
{
	int a,b,c,s;
	cout<<"\nenter value of a,b,c : ";
	cin>>a>>b>>c;
	s=SI(a,b,c);
	cout<<"\nSI is :"<<s;
	s=SI(a,b);
	cout<<"\nSI is :"<<s;
	return 0;
}

float SI(int p,int t,int r)
{
	float si;
	si=(p*t*r)/100;
	return si;
}
