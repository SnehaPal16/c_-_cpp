using namespace std;
#include<iostream>

class bank
{
	int accno,balance;
	char name[20];
	public:
		void setdata(int an,char *n,float b)
		{
			accno=an;
			name[20]=n[20];
			balance=b;
		}
		void deposite(int ad)
		{
			balance=balance+ad;
			
		}
		void withdraw(int aw)
		{
			balance=balance-aw;
			
		}
		void display()
		{
			cout<<balance;
		}
};
int main()
{
	bank x;
	int p,q;
	float ad,aw;
	char c[20];
	cout<<"\nenter accno,name,balance :";
	cin>>p>>c>>q;
	x.setdata(p,c,q);
	cout<<"\n amount deposited :";
	cin>>ad;
	x.deposite(ad);
	cout<<"\ndeposite ";
	x.display();
	cout<<"\n amount withdrawn :";
	cin>>aw;
	x.withdraw(aw);
	cout<<"\nwithdraw ";
	x.display();
	cout<<"\ndisplay ";
	x.display();
}
