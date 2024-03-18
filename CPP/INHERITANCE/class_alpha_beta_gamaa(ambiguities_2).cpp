using namespace std;
#include<iostream>

class alpha
{
	public:
		void display()
		{
			cout<<"\ndisplay alpha.....";
		}
};
class beta
{
	public:
		void display()
		{
			cout<<"\ndisplay beta.....";
		}
};

class gamaa : public alpha,public beta
{
	public:
		void show()
		{
			/*alpha :: display();
			beta :: display();*/
			cout<<"\nshowing gamaa....";
		}
};

int main()
{
	gamaa g;
	g.alpha::display();
	g.beta::display();
	g.show();
	return 0;
}
