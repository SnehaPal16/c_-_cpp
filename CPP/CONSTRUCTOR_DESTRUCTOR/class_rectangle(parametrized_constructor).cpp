using namespace std;
#include<iostream>

class rectangle
{
	int l,b;
	public:
		rectangle(int x,int y)
		{
			l=x;
			b=y;
			cout<<"\nconstructor executed...";
		}
		void setdata(int a,int c)
		{
			l=a;
			b=c;
		}
		void area()
		{
			cout<<"\narea is :"<<l*b;
		}
};


int main()
{
	rectangle r(2,3);
	r.area();
	r.setdata(10,20);
	r.area();
	
	
	int p,q;
	cout<<"\nenter value of p and q:";
	cin>>p>>q;
	r.setdata(p,q);
	r.area();
	
	return 0;
}
