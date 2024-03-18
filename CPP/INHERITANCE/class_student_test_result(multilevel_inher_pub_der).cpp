 using namespace std;
#include<iostream>


class student
{
	int rollno;
	char name[20];
	public:
		void getdata()
		{
			cout<<"\nenter student rollno.,name :";
			cin>>rollno>>name;
		}
		void putdata()
		{
			cout<<"\n\nStudent rollno. :"<<rollno;
			cout<<"\nStudent name    :"<<name;
		}
};

class test : public student
{
	protected:
		int t1,t2;
	public:
		void getmarks()
		{
			cout<<"\nenter marks of test1 and test 2 :";
			cin>>t1>>t2;
		}
		void putmarks()
		{
			cout<<"\nMarks in test 1 :"<<t1;
			cout<<"\nMarks in test 2 :"<<t2;
		}
};


class result : public test
{
	int tot;
	public:
		void display()
		{
			tot=t1+t2;
			putdata();
			putmarks();
			cout<<"\nTotal marks   :"<<tot;
		}
};



int main()
{
	result r;
	r.getdata();
	r.getmarks();
	r.display();
	return 0;
}

















