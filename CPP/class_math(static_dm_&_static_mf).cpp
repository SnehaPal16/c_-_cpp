using namespace std;
#include<iostream>

class math
{
	static int a,b,c;
	public:
		static void getdata()
		{
			cout<<"\nenter value os a,b,c :";
			cin>>a>>b>>c;
		}
		static void putdata()
		{
			cout<<"\na :"<<a;
			cout<<"\nb :"<<b;
			cout<<"\nc :"<<c;
		}
		static void add()
		{
			cout<<"\nsum is :"<<a+b+c;
		}
		static void sub()
		{
			if(a>b && a>c)
			{
				cout<<"\na-b="<<a-b;
				cout<<"\na-c="<<a-c;
			}
			else if(b>a && b>c)
			{
				cout<<"\nb-a="<<b-a;
				cout<<"\nb-c="<<b-c;
			}
			else
			{
				cout<<"\nc-a="<<c-a;
				cout<<"\nc-b="<<c-b;
			}
		}	
};

int math :: a;
int math :: b;
int math :: c;

int main()
{
	math m;
	math ::getdata();
	math ::putdata();
	math ::add();
	math ::sub();
	
	return 0;
}















