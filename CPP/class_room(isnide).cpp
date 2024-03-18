using namespace std;
#include<iostream>

class room
{
	int l,b,h;
	public:
		void getdata()
		{
			cout<<"\nenter value of l,b,h :";
			cin>>l>>b>>h;
		}
		void vol()
		{
			cout<<"\nvol of room is :"<<l*b*h;
		}
};

int main()
{
	room a1;
	a1.getdata();
	a1.vol();
	
	room a2;
	a2.getdata();
	a2.vol();
}
