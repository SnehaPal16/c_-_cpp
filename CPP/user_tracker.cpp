using namespace std;
#include<iostream>

class usertracker
{
	char name[20];
	static int count;
	public:
		void getdata()
		{
			cout<<"\nenter name :";
			cin>>name;
		}
		void start()
		{
			count++;
		}
		void stop()
		{
			count--;
		}
		static void total()
		{
			cout<<"\ntotal counts :"<<count;
		}
};
int usertracker::count=0;

int main()
{
	usertracker u1,u2,u3;
	u1.getdata();
	u2.getdata();
	u3.getdata();
	
	
	u1.start();
	usertracker::total();
	u2.start();
	u3.start();
	usertracker::total();
	
	u1.stop();
	u2.stop();
	u3.stop();
	usertracker::total();
		
	
	return 0;
}
