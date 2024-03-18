using namespace std;
#include<iostream>

class bank
{
	int an,b;
	char n[20];
	public:
		void getdata();
		void deposite();
		void withdraw();
		void display();
};
void bank::getdata()
{
	cout<<"\nenter account no,name,bank balance :";
	cin>>an>>n>>b;
}
void bank::deposite()
{
	int amtd;
	cout<<"\n amount deposited :";
	cin>>amtd;
	b=b+amtd;
}
void bank::withdraw()
{
	int amtw;
	cout<<"\n amount withdrawn :";
	cin>>amtw;
	b=b-amtw;
}
void bank::display()
{
	cout<<"\nremaining balance :"<<b;
}


int main()
{
	bank b;
	b.getdata();
	b.deposite();
	b.withdraw();
	b.display();
	
	return 0;
}







