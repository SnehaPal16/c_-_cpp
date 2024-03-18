#include<stdio.h>
int main()
{
	int a=10,b=20;
	int *aptr=&a;
	int *bptr=&b;
	
	printf("%d",*aptr+*bptr);
	printf("\n%d %d",a,b);	 
	return 0;
}
