#include<iostream>
using namespace std;

class person
{
	int *age;
	public:
		person()
		{
			age=new int(30);
		}
		person(int p_age)
		{
			age = new int;
			*age=p_age;
		}
		void dispaly()
		{
			cout<<"person age="<<*age<<endl;
		}
};

int main()
{
	person p1;
	person p2(35);
	cout<<"\nperson1 details :";
	p1.dispaly();
	cout<<"\nperson2 details :";
	p2.dispaly();
	
	
	return 0;
}
