using namespace std;
#include<iostream>

class geo
{
	int const latitude=74123;
	int const longitude=963214;
	public:
		void getdata()
		{
			cout<<"\nenter data: ";
			cin>>latitude>>longitude;
		}
		void display()
		{
			
		}
};


int main()
{
	geo g1,g2,g3;
	g1.getdata();
	g2.getdata();
	g3.getdata();
	
	
	
	return 0;
}
