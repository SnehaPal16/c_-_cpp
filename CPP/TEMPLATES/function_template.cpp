#include<iostream>
using namespace std;

template<class t1,class t2>
float fn_avg(t1 a,t2 b)
{
	float avg=(a+b)/2.0;
	return avg;
}

template<class t>
void swapp(t &a,t &b)
{
	t temp=a;
	a=b;
	b=temp;
}

int main()
{
	float a;
	a=fn_avg(10,15);
	cout<<"average :"<<a;
	int x=10,y=12;
	swapp(x,y);
	cout<<x<<" "<<y;
	return 0;
}
