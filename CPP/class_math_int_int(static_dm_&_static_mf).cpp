using namespace std;
#include<iostream>

class math
{
	public:
		static int add(int a,int b)
		{
			int sum=0;
			sum=sum+a+b;
			return sum;
		}
		static int sub(int a,int b)
		{
			int minus=0;
			if(a>b)
			{
				minus=minus+a-b;
				return minus;
			}
			else 
			{
				minus=minus+b-a;
				return minus;
			}
		}	
};

int main()
{
	cout<<"\nsum is : "<<math::add(10,20);
	cout<<"\nsubraction is : "<<math::sub(10,20);
	
	return 0;
}
