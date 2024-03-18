using namespace std;
#include<iostream>

class figure
{
	int l,b;
	public:
		figure(int x)		
		{
			l=x;
			b=x;			
		}
		figure(int p,int q)
		{
			l=p;
			b=q;
		}
		void area()
		{
			cout<<"\narea is :"<<l*b;
		}		
};

int main()
{
	figure sq(4);
	figure rect(10,20);
	sq.area();
	rect.area();
	return 0;
}
