#include<stdio.h>
void sum(int x,int y)
{
	int z=x+y;
	printf("\n%d",z);
}
void max(int x,int y)
{
	if(x>y)
		printf("\nLargest number is %d",x);
	else
		printf("\nLargest number is %d",y);
}

void exe(int x,int y, void(*fn)(int,int))
{
	(*fn)(x,y);
}

int main()
{
	int a=10,b=40;
	exe(a,b,&sum);
	exe(a,b,&max);
	return 0;
}
