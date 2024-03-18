#include<iostream>
using namespace std;

class cube
{
	int l;
	public:
		void read()
		{
			cout<<"\nenter te value of l ";
			cin>>l;
		}
	friend void vol(cube);
};
void vol(cube a)
{
	int v;
	v=a.l*a.l*a.l;
	cout<<"\nvol is :"<<v;
}


int main()
{
	cube c;
	c.read();
	vol(c);
	return 0;
}
