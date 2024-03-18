using namespace std;
#include<iostream>

class rectangle
{
	int l,b;
	public:
		rectangle()
		{
			l=2;
			b=3;
			cout<<"\ndefault cont executed....";
		}
		rectangle(rectangle &p)
		{
			l=p.l+2;
			b=p.b+3;
			cout<<"\ncopy cont executed....";
		}
		void area()
		{
			cout<<"\narea is :"<<l*b;
		}
		void setdata(int x,int y)
		{
			l=x;
			b=y;
		}
};

int main()
{
	rectangle r1;
	r1.area();
	
	r1.setdata(3,5);
	rectangle r2(r1);
	r2.area();
	
	r2.setdata(4,6);
	rectangle r3=r2;
	r3.area();
	
	r3.setdata(5,7);
	rectangle r4;
	r4.area();
	
	r4=r3;
	r4.area();
	
	return 0;
	
}















