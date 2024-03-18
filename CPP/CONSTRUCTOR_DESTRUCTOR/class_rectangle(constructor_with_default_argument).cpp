using namespace std;
#include<iostream>

class rectangle
{
	int l,b;
	public:
		rectangle(int x=2,int y=3);
		void area();
};
rectangle :: rectangle(int x,int y)
{
	l=x;
	b=y;
}
void rectangle :: area()
{
	cout<<"\narea is :"<<l*b;
}

int main()
{
	rectangle a,b(10),c(10,20);
	a.area();
	b.area();
	c.area();
	return 0;
}
