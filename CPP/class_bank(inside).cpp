using namespace std;
#include<iostream>

class bank
{
	int accno,balance;
	char name[20];
	
	public:
		void getdata()
		{
			cout<<"\nenter account no,name,bank balance :";
			cin>>accno>>name>>balance;
		}
		void deposite()
		{
			int amtd;
			cout<<"\n amount deposited :";
			cin>>amtd;
			balance=balance+amtd;
		}
		void withdraw()
		{
			int amtw;
			cout<<"\n amount withdrawn :";
			cin>>amtw;
			balance=balance-amtw;
		}
		void display()
		{
			cout<<"\nremaining balance :"<<balance;
		}
		
};


int main()
{
	bank a;
	a.getdata();
	a.deposite();
	a.withdraw();
	a.display();
	
	bank b;
	b.getdata();
	b.deposite();
	b.withdraw();
	b.display();
}








