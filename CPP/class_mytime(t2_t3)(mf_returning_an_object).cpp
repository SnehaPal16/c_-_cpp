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
		mytime sumtime(mytime t)
		{
			mytime time;
			
			time.hrs=hrs+ t.hrs;
			time.mins=mins+ t.mins;
			if(time.mins>=60)
			{
				time.hrs=time.hrs+1;
				time.mins=time.mins-60;
			}
			return time;	
		}
		mytime sumtime(mytime t,mytime tt)
		{
			mytime tym;
			tym.hrs= t.hrs+ tt.hrs;
			tym.mins=t.mins+ tt.mins;
			if(tym.mins>=60)
			{
				tym.hrs=tym.hrs+1;
				tym.mins=tym.mins-60;
			}
			return tym;
		}
};


int main()
{
	mytime t1,t2,t3;
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
	t3=t1.sumtime(t2);
	t3.puttime();
	t1.puttime();
	t2.puttime();
	
	
	cout<<"\ntime t2 after adding :";
	cout<<"\n";
	t3=t2.sumtime(t1);
	t3.puttime();
	t1.puttime();
	t2.puttime();
	
	
	cout<<"\nsum of t1 & t2 in t3";
	cout<<"\n";
    t3=t3.sumtime(t1,t2);
	t3.puttime();
	t1.puttime();
	t2.puttime();
	
	cout<<"\n";
    t1=t3.sumtime(t1,t2);
	t1.puttime();
	t2.puttime();
	t3.puttime();
	
	
	return 0;
}
