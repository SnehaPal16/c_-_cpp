using namespace std;
#include<iostream>
#include<string.h>

void reverse(int);
void reverse(char *);

int main()
{
	int a;
	char c[20];
	cout<<"\nenter a number : ";
	cin>>a;
	cout<<"\nenter a string : ";
	cin>>c;
	reverse(a);
	reverse(c);	
	return 0;
}

void reverse(int num)
{
	int digit,sum=0;
	while(num!=0)
	{
		digit=num%10;
		sum=sum*10+digit;
		num=num/10;
	}
	cout<<"\n reversed number is : "<<sum;
}

void reverse(char *s)
{
	strrev(s);
	cout<<"\n reversed string is : "<<s;
}




