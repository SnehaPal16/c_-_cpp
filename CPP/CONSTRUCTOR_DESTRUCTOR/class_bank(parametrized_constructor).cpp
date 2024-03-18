using namespace std;
#include<iostream>

class bank
{
	int c_accno;
	char c_name[20];
	int c_balance;
	static int b_balance;
	public:
		bank(int c_acn,char *cn,int c_b)
		{
			c_accno=c_acn;
			c_name[20]=cn[20];
			c_balance=c_b;
			b_balance=b_balance+c_balance;
		}
		void getdata()
		{
			cout<<"\nenter customer accno,name,balance :";
			cin>>c_accno>>c_name>>c_balance;
			b_balance=b_balance+c_balance;
		}
		void deposite(int ad)
		{
			int amtd;
			amtd=ad;
			c_balance=c_balance+amtd;
			b_balance=b_balance+amtd;
		}
		void withdraw(int aw)
		{
			int amtw;
			amtw=aw;
			c_balance=c_balance-amtw;
			b_balance=b_balance-amtw;
		}
		void display()
		{
			cout<<"\nremaing balance of customer :"<<c_balance;
		}
		static void display_b_blnc()
		{
			cout<<"\ntotal amount remaining in bank:"<<b_balance;
		}
};
int bank :: b_balance=0;


int main()
{
	bank b(147852,"abcd",50000);
	b.deposite(5000);
	b.withdraw(10000);
	b.display();
	b.display_b_blnc();
	
	
	b.getdata();
	b.deposite(10000);
	b.withdraw(20000);
	b.display();
	b.display_b_blnc();
	
	return 0;
}




