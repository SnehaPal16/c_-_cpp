using namespace std;
#include<iostream>

class student
{
	int rollno;
	char name[20];
	public:
		void getdata()
		{
			cout<<"\nenter student rollno and name :";
			cin>>rollno>>name;
		}
		void putdata()
		{
			cout<<"\nstudent rollno  :"<<rollno;
			cout<<"\nstudent name    :"<<name;
		}
};

class test : public virtual student
{
	protected:
		int t1,t2;
	public:
		void getmarks()
		{
			
			cout<<"\nstudent marks in test1 and test2 :";
			cin>>t1>>t2;
		}
		void putmarks()
		{
			
			cout<<"\nmarks in test 1  :"<<t1;
			cout<<"\nmarks in test 2  :"<<t2;
		}
};


class sports : public virtual student
{
	char sname[20];
	protected:
		int swhtg;
	public:
		void getsports()
		{
			cout<<"\nenter sports name and weightage :";
			cin>>sname>>swhtg;
		} 
		void putsports()
		{
			cout<<"\nsports name      :"<<sname;
			cout<<"\nsports weightage :"<<swhtg;
		}
};


class result :public test,public sports
{
	int tot=0;
	public:
		void display()
		{
			tot=t1+t2+swhtg;
			putdata();
			putmarks();
			putsports();
			cout<<"\ntotal marks      :"<<tot;
		}
};



int main()
{
	result r;
	r.getdata();
	r.getmarks();
	r.getsports();
	r.display();
	return 0;
}




















