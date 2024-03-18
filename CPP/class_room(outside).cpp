using namespace std;
#include<iostream>

class room
{
	int l,b,h;
	public:
		void getdata();
		void area();
};

void room::getdata()
{
	cout<<"\n enter l,b,h :";
	cin>>l>>b>>h;
}
void room::area()
{
	cout<<"\narea is :"<<2*(l*b+b*h+l*h);
}
int main()
{
	room r;
	r.getdata();
	r.area();
	return 0;
}
