using namespace std;
#include<iostream>

class employee
{
	int ecode;
	char ename[20];
	protected:
		float salary;
	public:
		void getdata()
		{
			cout<<"\nenter employee code,name,salary :";
			cin>>ecode>>ename>>salary;
		}
		void putdata()
		{
			cout<<"\nemployee code :"<<ecode;
			cout<<"\nemployee name :"<<ename;
			cout<<"\nemployee salary :"<<salary;
		}
};

class salesman : private employee
{
	int comm,tot;
	public:
		void getcomm()
		{
			getdata();
			cout<<"\nenter commission :";
			cin>>comm;
			tot=comm+salary;
		}
		void putcomm()
		{
			putdata();
			cout<<"\ncommission :"<<comm;
			cout<<"\ntotal salary :"<<tot;
		}
};



int main()
{
	salesman s;
	s.getcomm();
	s.putcomm();
	return 0;
}


















