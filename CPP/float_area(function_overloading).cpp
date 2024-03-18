using namespace std;
#include<iostream>
#include<math.h>

float area(float);
float area(float,float);
float area(float,float,float);

int main()
{
	float a1,a2,a3,ar;
	cout<<"\nenter value of a1,a2,a3 :";
	cin>>a1>>a2>>a3;
	ar=area(a1);
	cout<<"\narea of square is : "<<ar;
	ar=area(a1,a2);
	cout<<"\narea of rectangle is : "<<ar;
	ar=area(a1,a2,a3);
	cout<<"\narea of triangle is : "<<ar;
	return 0;
}

float area(float a)
{
	return a*a;
}
float area(float b,float c)
{
	return b*c;
}
float area(float x,float y,float z)
{
	float p;
	int s;
	s=(x+y+z)/2;
	p=sqrt(s*(s-x)*(s-y)*(s-z));
	return p;
}

