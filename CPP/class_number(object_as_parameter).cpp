using namespace std;
#include<iostream>

class number
{
	int x,y;
	public:
		void setdata(int p,int q)
		{
			x=p;
			y=q;
		}
		void display()
		{
			cout<<"\nx is :"<<x;
			cout<<"\ny is :"<<y;
			cout<<"\n";
		}
		void sum(number p)
		{
			x=x+ p.x;
			y=y+ p.y;
		}
};


int main()
{
	number a,b;
	a.setdata(10,20);
	b.setdata(5,10);
	a.display();
	b.display();
	
	a.sum(b);
	a.display();
	b.display();
	
	b.sum(a);
	a.display();
	b.display();
	
	
	return 0;	
}
