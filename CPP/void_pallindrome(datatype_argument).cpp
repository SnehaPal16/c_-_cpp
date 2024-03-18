using namespace std;
#include<iostream>
#include<string.h>

void pallindrome(int);
void pallindrome(char *);

int main()
{
	int a;
	char c[20];
	cout<<"\nenter a number : ";
	cin>>a;
	cout<<"\nenter a string : ";
	cin>>c;
	pallindrome(a);
	pallindrome(c);	
	return 0;
}

void pallindrome(int num)
{
	int temp,digit,sum=0;
	temp=num;
	while(num!=0)
	{
		digit=num%10;
		sum=sum*10+digit;
		num=num/10;
	}
	if(sum==temp)
	{
		cout<<"\n"<<sum<<" is pallindrome ";
	}
	else
	{
		cout<<"\n"<<sum<<" is not a pallindrome";
	}
}

void pallindrome(char *s1)
{
	char s2[20];
	strcpy(s2,s1);
	strrev(s2);
	if(strcmp(s1,s2)==0)
	{
		cout<<"\n"<<s1<<" is pallindrome";
	}
	else
	{
		cout<<"\n"<<s1<<" is not a pallindrome ";
	}

}




