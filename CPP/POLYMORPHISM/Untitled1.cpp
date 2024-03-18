#include<iostream>
using namespace std;

class shape
{
	public:
		virtual void readdata()=0;
		virtual void dispdata()=0;

};

class derived:public abstract
{
	int a,b;
	public:
		void readdata()
		{
			cout<<"enter value of a and b";
			cin>>a>>b;
		}
		void dispdata()
		{
			cout<<"value of a :"<<a<<"\nvalue of b :"<<b;
		}
};

int main()
{
	
	return 0;
}

