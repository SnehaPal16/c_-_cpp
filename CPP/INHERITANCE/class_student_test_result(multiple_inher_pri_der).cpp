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

class test 
{
	protected:
		int t1,t2;
	public:
		void getmarks()
		{
			cout<<"\nenter marks of test1 and test2 :";
			cin>>t1>>t2;
		}
		void putmarks()
		{
			cout<<"\nmarks in test 1 :"<<t1;
			cout<<"\nmarks in tets 2 :"<<t2;
		}
};


class result : private student,private test
{
	int tot;
	public:
		void display()
		{
			
			getdata();
			getmarks();
			putdata();
			putmarks();
			tot=t1+t2;
			cout<<"\ntotal marks :"<<tot;
		}
};



int main()
{
	result r;
	r.display();
	return 0;
}






