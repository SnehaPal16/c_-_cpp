using namespace std;
#include<iostream>

class alpha
{
	int a;
	public:
		alpha(int x)
		{
			a=x;
			cout<<"\nalpha const executed......";
		}
		~alpha()
		{
			cout<<"\nalpha dest executed......";
		}
		void puta()
		{
			cout<<"\na is :"<<a;
		}
};


class beta : public alpha
{
	int b,c;
	public:
		beta(int x,int y,int z):alpha(z)
		{
			b=x;
			c=y;
			cout<<"\nbeta const executed......";
		}
		~beta()
		{
			cout<<"\nalpha dest executed......";
		}
		void putbc()
		{
			cout<<"\nb is :"<<b;
			cout<<"\nc is :"<<c;
		}
};

class gamaa : public beta
{
	int d;
	public:
		gamaa(int p):beta(p+5,p+10,p+15)
		{
			d=p;
			cout<<"\ngamaa const executed......";
		}
		~gamaa()
		{
			cout<<"\ngamaa dest executed......";
		}
		void putd()
		{
			cout<<"\nd is :"<<d;
		}
};

int main()
{
	gamaa g(10);
	g.puta();
	g.putbc();
	g.putd();
	
	return 0;
}























