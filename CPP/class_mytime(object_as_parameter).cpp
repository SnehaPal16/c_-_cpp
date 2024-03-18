using namespace std;
#include<iostream>

class mytime
{
	int hrs,mins;
	public:
		void gettime(int h,int m)
		{
			hrs=h;
			mins=m;
		}
		void puttime()
		{
			cout<<hrs<<" : "<<mins;
			cout<<"\n";
		}
		void sumtime(mytime t)
		{
			hrs=hrs+ t.hrs;
			mins=mins+t.mins;
			if(mins>=60)
			{
				hrs=hrs+1;
				mins=mins-60;
			}
		}
};


int main()
{
	mytime t1,t2;
	t1.gettime(2,40);
	t2.gettime(4,40);
	cout<<"\ntime t1 :";
	cout<<"\n";
	t1.puttime();
	cout<<"\ntime t2 :";
	cout<<"\n";
	t2.puttime();
	
	cout<<"\ntime t1 after adding :";
	cout<<"\n";
	t1.sumtime(t2);
	t1.puttime();
	
	
	cout<<"\ntime t2 after adding :";
	cout<<"\n";
	t2.sumtime(t1);
	t2.puttime();
	
	return 0;
}
