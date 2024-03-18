using namespace std;
#include<iostream>

class beta;
class alpha
{
	int a;
	public:
		void geta()
		{
			cout<<"\nenter value of a :";
			cin>>a;
		}
		void puta()
		{
			cout<<"\na : "<<a;
		}
		friend void swap(alpha &,beta &);
};

class beta
{
	int b;
	public:
		void getb()
		{
			cout<<"\nenter value of b :";
			cin>>b;
		}
		void putb()
		{
			cout<<"\nb : "<<b;
		}
		friend void swap(alpha &,beta &);
};

void swap(alpha &aa,beta &bb)
{
	int temp;
	temp=aa.a;
	aa.a=bb.b;
	bb.b=temp;
}

int main()
{
	alpha al;
	beta be;
	al.geta();
	be.getb();
	cout<<"\nbefore swaping";
	cout<<"\n";
	al.puta();
	be.putb();
	
	
	cout<<"\nafter swaping";
	cout<<"\n";
	swap(al,be);
	al.puta();
	be.putb();
	
	return 0;
}

















