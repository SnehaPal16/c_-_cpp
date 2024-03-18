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
		}
		number sum(number p)         
		{
			number temp;
			temp.x=x+p.x;
			temp.y=y+p.y;
			return temp;
		}
};

int main()
{
	number a,b,c;
	a.setdata(10,20);
	b.setdata(2,4);
	cout<<"\na :";
	cout<<"\n";
	a.display();
	cout<<"\nb :";
	cout<<"\n";
	b.display();
	
	cout<<"\nc=a_sum_b :";
	cout<<"\n";
	c=a.sum(b);
	c.display();
	a.display();
	b.display();
	
	cout<<"\nc=b_sum_a :";
	cout<<"\n";
	c=a.sum(b);
	c.display();
	a.display();
	b.display();
	
	return 0;
}
