#include<iostream>
using namespace std;

template<class t1=int,class t2=char>
class myclass
{
	public:
		t1 a;
		t2 b;
		myclass(t1 x,t2 y)
		{
			a=x;
			b=y;
		}
		void display()
		{
			cout<<"value of a :"<<a<<endl;
			cout<<"value of b :"<<b<<endl;
		}
};

int main()
{
	myclass<> m(3,'s');
	m.display();
	cout<<"\n";
	
	myclass<float,float> n(3.3,4.1);
	n.display();
	
	return 0;
}
