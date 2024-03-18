using namespace std;
#include<iostream>
#include<string.h>

class student
{
	int rollno;
	float p,c,m;
	char name[20];
	public:
		student()
		{
			rollno=0;
			p=0;
			c=0;
			m=0;
		}
		void setdata(int x,char*n,float e,float f,float g)
		{
			rollno=x;
			strcpy(name,n);
			p=e;
			c=f;
			m=g;
		}
		
		
		student(int x,char*n)
		{
			rollno=x;
			strcpy(name,n);
		}
		void setmarks(float e,float f,float g)
		{
			p=e;
			c=f;
			m=g;
		}
		
		
		student(int x,char*n,float e,float f,float g)
		{
			rollno=x;
			strcpy(name,n);
			p=e;
			c=f;
			m=g;
		}
		void display()
		{
			cout<<"\nroll no     :"<<rollno;
			cout<<"\nname        :"<<name;
			cout<<"\nphy marks   :"<<p;
			cout<<"\nchem marks  :"<<c;
			cout<<"\nmaths marks :"<<m<<"\n";
		}
};


int main()
{
	student s1;
	s1.setdata(1,"abcd",99,90,100);
	
	student s2(2,"efgh");
	s2.setmarks(90,88,99);
	
	student s3(3,"ijkl",90,90,90);
	
	s1.display();
	s2.display();
	s3.display();
	
	return 0;
}




