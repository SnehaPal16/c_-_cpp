using namespace std;
#include<iostream>

class  book
{
	int bcode;
	char bname[20];
	float rate;
	int qoh;
	
	public:
		void getdata()
		{
			cout<<"\nenter book code,book name,book rate,quantity on hand :";
			cin>>bcode>>bname>>rate>>qoh;
		}
		void putdata()
		{
			cout<<"\nBCODE : "<<bcode;
			cout<<"\nBNAME : "<<bname;
			cout<<"\nRATE : "<<rate;
			cout<<"\nQOH : "<<qoh;
			cout<<"\n";
		}
		int giveqoh()
		{
			return qoh;
		}
};


int main()
{
	book b[5];
	int i,tot=0;
	cout<<"\nenter 5 book details :";
	for(i=0;i<5;i++)
	{
		b[i].getdata();
		tot=tot+b[i].giveqoh();
	}
	cout<<"\nbook details are : ";
	for(i=0;i<5;i++)
	{
		b[i].putdata();
	}
	cout<<"\ntotal number books are : "<<tot;
	return 0;
	
	
	
}
