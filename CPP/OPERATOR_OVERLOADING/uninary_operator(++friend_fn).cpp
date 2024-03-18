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
		friend void operator ++(number &);
		friend void operator ++(number &,int);	
};
void operator ++(number &p)
		{
			p.x=p.x+1;
			p.y=p.y+1;
		}
		void operator ++(number &p,int i)
		{
			p.x=p.x+1;
			p.y=p.y+1;
		}

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
