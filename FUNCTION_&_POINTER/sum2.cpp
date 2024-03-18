#include<stdio.h>


int sum(int x,int y)
{
	int z;
	z=x+y;
	return z;
}



int main()
{
	int a=10,b=20,c;
	int (*sptr)(int,int)=&sum;
	c=(*sptr)(a,b);
	printf("\nsum is : %d",c);
	return 0;
}
