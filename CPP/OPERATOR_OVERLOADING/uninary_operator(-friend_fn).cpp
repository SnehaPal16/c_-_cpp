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
		friend void operator -(number &);
};
void operator -(number &p)
{
	p.x=-p.x;
	p.y=-p.y;
}

int main()
{
	number n;
	n.getdata();
	n.display();
	-n;
	n.display();
	return 0;
}
