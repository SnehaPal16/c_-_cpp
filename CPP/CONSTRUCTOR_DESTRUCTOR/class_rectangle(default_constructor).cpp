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
			cout<<"\ndefault constructor executed";
		}
		void setdata(int x,int y)
		{
			l=x;
			b=y;
		}
		void area()
		{
			cout<<"\narea is :"<<l*b;
		}
};

int main()
{
	rectangle r;
	r.area();
	
	r.setdata(10,20);
	r.area();
	
	return 0;
}
