using namespace std;
#include<iostream>

class number
{
	int x,y;
	public:
		void getdata()
		{
			cout<<"\nenter value of x and y :";
			cin>>x>>y;
		}
		void display()
		{
			cout<<"\nx :"<<x;
			cout<<"\ny :"<<y;
		}
		void operator ++()
		{
			x=x+1;
			y=y+1;
		}
		void operator ++(int)
		{
			x=x+1;
			y=y+1;
		}
};

int main()
{
	number n;
	n.getdata();
	n.display();
	++n;
	n.display();
	cout<<"\n";
	n++;
	n.display();
	
	return 0;
}
