using namespace std;
#include<iostream>

class num2;
class num1
{
	int n1;
	public:
		void getn1()
		{
			cout<<"\nenter value of n1 :";
			cin>>n1;
		}
		void putn1()
		{
			cout<<"\nn1 :"<<n1;
		}
		friend void max(num1,num2);
};

class num2
{
	int n2;
	public:
		void getn2()
		{
			cout<<"\nenter value of n2 :";
			cin>>n2;
		}
		void putn2()
		{
			cout<<"\nn2 :"<<n2;
		}
		friend void max(num1,num2);
};



void max(num1 a,num2 b)
{
	if (a.n1>b.n2)
	{
		cout<<"\nmaximum is :"<<a.n1;
	}
	else
	{
		cout<<"\nmaximum is :"<<b.n2;
	}
}



int main()
{
	num1 x;
	num2 y;
	
	x.getn1();
	y.getn2();
	x.putn1();
	y.putn2();
	
	max(x,y);
	
	
	return 0;
}










