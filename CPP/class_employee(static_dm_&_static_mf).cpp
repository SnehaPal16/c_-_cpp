using namespace std;
#include<iostream>

class employee
{
	int ecode;
	char ename[20];
	float salary;
	static float bonus;
	public:
		void getdata()
		{
			cout<<"\nenter ecode,ename,salary,";
			cin>>ecode>>ename>>salary;
		}
		void display()
		{
			cout<<"\nemployee code   :"<<ecode;
			cout<<"\nemployee name   :"<<ename;
			cout<<"\nBonus           :"<<bonus;
			cout<<"\nemployee salary :"<<salary;
			cout<<"\nTotal Salary    :"<<salary+(salary*bonus);
		}
		static void raisebonus(float x)
		{
			bonus=x;
		}
};
float employee :: bonus=0.04;

int main()
{
	employee e1,e2;
	e1.getdata();
	e2.getdata();
	
	e1.display();
	
	employee :: raisebonus(0.05);
	e1.display();
	
	e2.display();
	employee :: raisebonus(0.05);
	e2.display();
	
	
	
	return 0;
}







