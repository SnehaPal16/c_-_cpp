using namespace std;
#include<iostream>

class bank
{
	static int bank_balance;
	int customer_accno,customer_balance;
	char customer_name[20];
	public:
		void getdata()
		{
			cout<<"\nenter accno,name,balance :";
			cin>>customer_accno>>customer_name>>customer_balance;
			bank_balance=bank_balance+customer_balance;
		}
		void deposit()
		{
			int amtd;
			cout<<"\n\namount deposited by customer:";
			cin>>amtd;
			customer_balance=customer_balance+amtd;
			bank_balance=bank_balance+amtd;
		}
		void withdraw()
		{
			int amtw;
			cout<<"\namount withdrawn by customer:";
			cin>>amtw;
			customer_balance=customer_balance-amtw;
			bank_balance=bank_balance-amtw;
		}
		void display()
		{
			cout<<"\nremaining balance of customer :"<<customer_balance;
		}
		static void display_bank_balance()
		{
			cout<<"\ntotal amount remaining in bank:"<<bank_balance;
		}
};
int bank :: bank_balance=0;


int main()
{
	bank c1,c2;
	c1.getdata();
	c1.deposit();
	c1.withdraw();
	c1.display();
	
	bank :: display_bank_balance();
	
	c2.getdata();
	c2.deposit();
	c2.withdraw();
	c2.display();
	
	bank :: display_bank_balance();
	
	
	
	return 0;
}




