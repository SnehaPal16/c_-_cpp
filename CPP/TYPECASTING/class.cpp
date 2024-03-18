#include<iostream>
using namespace std;

/*class mynumber
{
	int value;
	public:
		mynumber(int v)
		{
			value=v;
		}
		void display()
		{
			cout<<"value ="<<value;
		}
		operator int()
		{
			return value;
		}
};

int main()
{
	mynumber num(10);
	int x=num;
	cout<<"the value of object stored in x is ="<<x;
	return 0;
}*/


class meters
{
	public:
		float mts;
		meters(float m)
		{
			mts=m;
		}
		void display()
		{
			cout<<"dist is "<<mts<<" meters";
		}
		operator feets()
		{
			return feets(3.28*mts);
		}
};

class feets
{
	public:
		float fts;
		feets(float f)
		{
			fts=f;
		}
		void display()
		{
			cout<<"dist is "<<fts<<" feets";
		}
};

int main()
{
	meters m(10);
	m.display();
	feets ft=m;
	ft.display();
	return 0;
}

























