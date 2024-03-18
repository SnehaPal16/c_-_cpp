using namespace std;
#include<iostream>

class rectangle
{
	static int l,b;
	public:
		void getdata()
		{
			cout<<"\nenter value of l and b :";
			cin>>l>>b;
		}
		void area()
		{
			cout<<"\narea : "<<l*b;
		}
};

int rectangle :: l;
int rectangle :: b;


int main()
{
	rectangle r1,r2;
	r1.getdata();
	r1.area();
	
	r2.getdata();
	r2.area();
	
	return 0;
}
