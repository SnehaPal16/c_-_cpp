using namespace std;
#include<iostream>

class maximum
{
	public:
		void setdata(int x,int y,int z)
		{
		
		}
		int max2()
		{
			int m2;
			if(x>y)
			{
				m2=x;
				return m2;
			}
			else
			{
				m2=y;
				return m2;
			}
		}
		int max3()
		{
			int m3;
			if(max2()>z)
			{
				m3=max2();
				return m3;
			}
			else
			{
				m3=z;
				retrun m3;
			}
			return m3;
		}
};

int main()
{
	maximum m;
	int ch;
	int n1,n2,n3;
	cout<<"\nenter n1,n2,n3 :";
	cin>>n1>>n2>>n3;
	m.setdata(n1,n2,n3)
	cout<<"\n1. Max out of 2\n2. Max out of 3\nENTER CHOICE : ";
	cin>>ch;
	if(ch==1)
	{
		cout<<"\nmaximum out of 2 number is :"<<m.max2();
	}
	else if(ch==2)
	{
		cout<<"\nmaximum out of 3 number is :"<<m.max3();
	}
	else
	{
		cout<<"\ninvalid choice";
	}
	return 0;
}
