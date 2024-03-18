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
			cout<<"\n\nenter employee code,name,salary :";
			cin>>ecode>>ename>>salary;
		}
		void putdata()
		{
			cout<<"\n\nEmployee code   :"<<ecode;
			cout<<"\nEmployee name   :"<<ename;
			cout<<"\nEmployee salary :"<<salary;
		}	
};

class salesman : public employee
{
	float comm,tot;
	public:
		void getcomm()
		{
			cout<<"\nenter commission :";
			cin>>comm;
			tot=salary+comm;
		}
		void putcomm()
		{
			cout<<"\nCommission      :"<<comm;
			cout<<"\nTotal salary    :"<<tot;
		}
};


int main()
{
	salesman s;
	s.getdata();
	s.getcomm();
	s.putdata();
	s.putcomm();
	
	return 0;
}













