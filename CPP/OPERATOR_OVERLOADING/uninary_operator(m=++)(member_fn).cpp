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
		number operator ++()
		{
			x=x+1;
			y=y+1;
			number temp;
			temp.x=x;
			temp.y=y;
			return temp;
		}
		number operator ++(int i)
		{
			number temp;
			temp.x=x;
			temp.y=y;
			
			x=x+1;
			y=y+1;
			return temp;
		}
};

int main()
{
	number m,n;
	n.getdata();
	n.display();
	m=++n;
	m.display();
	n.display();
	cout<<"\n";
	m=n++;
	m.display();
	n.display();
	return 0;
}
