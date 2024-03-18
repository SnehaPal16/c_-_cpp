using namespace std;
#include<iostream>

class student
{
	int rollno;
	char name[20];
	public:
		void getdata()
		{
			cout<<"\nenter roll, name :";
			cin>>rollno>>name;
		}
		void putdata()
		{
			cout<<"\nstudent rollno :"<<rollno;
			cout<<"\nstudent name :"<<name;
		}
};

class test : private student
{
	protected:
		int t1,t2;
	public:
		void getmarks()
		{
			getdata();
			cout<<"\nenter marks of test1 and test2 :";
			cin>>t1>>t2;
		}
		void putmarks()
		{
			putdata();
			cout<<"\nmarks in test 1 :"<<t1;
			cout<<"\nmarks in tets 2 :"<<t2;
		}
};


class result : private test
{
	int tot;
	public:
		void display()
		{
			//tot=t1+t2;
			getmarks();
			putmarks();
			cout<<"\ntotal marks :"<<t1+t2;
		}
};



int main()
{
	result r;
	r.display();
	return 0;
}
































