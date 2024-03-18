using namespace std;
#include<iostream>

class swaping
{
	int x,y;
	public:
		void getdata_x()
		{
			cout<<"\nenter value of x :";
			cin>>x;
		}
		void getdata_y()
		{
			cout<<"\nenter value of y :";
			cin>>y;
		}
		void display_x()
		{
			cout<<"\nx : "<<x;
		}
		void display_y()
		{
			cout<<"\ny : "<<y;
		}
		friend void swap(swaping &,swaping &);
};

void swap(swaping &a,swaping &b)
{
	int temp;
	temp=a.x;
	a.x=b.y;
	b.y=temp;	
}

int main()
{
	swaping s1,s2;
	s1.getdata_x();
	s2.getdata_y();
	cout<<"\nbefore swaping :";
	cout<<"\n";
	s1.display_x();
	s2.display_y();
	
	cout<<"\nafter swaping :";
	cout<<"\n";
	swap(s1,s2);
	s1.display_x();
	s2.display_y();
	return 0;
}
