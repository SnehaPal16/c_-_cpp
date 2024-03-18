using namespace std;
#include<iostream>

class rectangle
{
	int l,b,ar;
	public:
		void getdata()
		{
			cout<<"\nenter length and breadth : ";
			cin>>l>>b;
		}
		void putdata()
		{
			cout<<"\nlenght  :"<<l;
			cout<<"\nbreadth :"<<b;
		}
		void area()
		{
			ar=l*b;
			cout<<"\narea is :"<<ar;
		}
		
		rectangle greater(rectangle r)
		{
			if(r.ar>ar)
		 		return r;			
			else
				return *this;
		}
};


int main()
{
	rectangle r1,r2,r3;
	r1.getdata();
	r2.getdata();
	r1.putdata();
	r1.area();
	r2.putdata();
	r2.area();	
	
	r3=r1.greater(r2);
	r3.area();
	
	return 0;
}











