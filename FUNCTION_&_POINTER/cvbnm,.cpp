#include<stdio.h>

int sum(int x,int y)
{
	int z=x+y;
	return z;
}
int max(int x,int y)
{
	if(x>y)
	{
		return x;
	}
	else
		return y;
}
int execute(int x,int y,int (*func)(int,int))
{
	return func(x,y);
}
int main()
{
	int a=10,b=20;
	printf("%d",execute(a,b,sum));
	printf("%d",execute(a,b,max));	
	return 0;
}
