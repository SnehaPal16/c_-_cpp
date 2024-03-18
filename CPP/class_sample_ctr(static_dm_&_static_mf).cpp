using namespace std;
#include<iostream>

class sample
{
	static int ctr;
	int num;
	public:
		void getdata()
		{
			cout<<"\nenter any number :";
			cin>>num;
		}
		void putnum()
		{
			cout<<"\nnum is :"<<num;
		}
		static void putch()
		{
			cout<<"\nctr is :"<<ctr;
		}
		static void increament(int x)
		{
			ctr=ctr+x;
		}
};
int sample :: ctr=10;

int main()
{
	sample a,b,c;
	a.getdata();
	b.getdata();
	a.putnum();
	b.putnum();
	sample :: putch();
	sample :: increament(5);
	c.getdata();
	c.putnum();
	sample :: putch();
	sample :: increament(10);	
	return 0;
}
