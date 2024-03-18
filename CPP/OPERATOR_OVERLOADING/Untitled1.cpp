#include<iostream>
using namespace std;

int main()
{
	int input;
	cout<<"enter the input /n";
	cin>>input;
	try{
		if(input<0)
		{
			throw "exception negative number";
		}
		if(input>=0)
		{
			throw "exception positive number";
		}
	}
	catch(const char *msg1)
	{
		cout<<"caught exception1 in catch1"<<msg1;
	
	}
	catch(const char *msg2)
	{
		cout<<"caught exception2 in catch2"<<msg2;
	}
	
	retrun 0;
}
