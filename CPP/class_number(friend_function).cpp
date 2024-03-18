using namespace std;
#include<iostream>

class number
{
	int x,y;
	public:
		void getdata()
		{
			cout<<"\nenter two numbers";
			cin>>x>>y;
		}
		void display()
		{
			cout<<"\nx is :"<<x;
			cout<<"\ny is :"<<y;
		}
		friend void max(number);
};

void max(number p)
{
	if(p.x>p.y)
	{
		cout<<"\nmax number is :"<<p.x;
	}
	else
	{
		cout<<"\nmax number is :"<<p.y;
	}
	
}

int main()
{
	number n;
	n.getdata();
	n.display();
	max(n);
	return 0;
}


