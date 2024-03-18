#include<stdio.h>

int sum(int x,int y)
{
	int z=x+y;
	return z;
}

int main()
{
	int a=10,b=20,c;
	int (*sptr)(int,int)=&sum;
	c=(*sptr)(a,b);
	printf("\n%d",c);
	return 0;
}
