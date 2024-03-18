#include<stdio.h>

int sum(int x,int y)
{
	return x+y;
}

int max(int x,int y)
{
	if(x>y)
		return x;
	else
		return y;
}

int main()
{
	int (*fn[])(int,int)={sum,max};
	int a,b,choice;
	printf("\nenter two numbers : ");
	scanf("%d %d",&a,&b);
	printf("\n0 for sum\n1 for max");
	printf("\nEnter choice : ");
	scanf("%d",&choice);
	if(choice==0||choice==1)
	{
		printf("\n%d",fn[choice](a,b));
	}
	else
	{
		printf("\ninvalid choice");
	}
	return 0;
}
