using namespace std;
#include<iostream>

int ctr=0;

class sample
{
	public:
		sample()
		{
			ctr++;
			cout<<"\n\nconstructor of "<<ctr<<" obj executed..";
		}
		~sample()
		{
			cout<<"\n\ndestructor of "<<ctr<<" obj executed..";
			ctr--;
		}
};


int main()
{
	sample a,b;
	{
		sample c;
		{
			sample d;
		}
		{
			sample e;
		}
	}
	return 0;
}
