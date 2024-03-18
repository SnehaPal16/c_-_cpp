#include<stdio.h>
#include<stdarg.h>

int sum(int n,...)
{
	int s=0,i,num;
	va_list ls;
	va_start(ls,n);
	for(i=1;i<=n;i++)
	{
		num=va_arg(ls,int);
		s=s+num;
	}
	va_end(ls);
	
	return s;
}
int main()
{
	printf("\nsum is : %d",sum(5,1,2,3,4,5));
}
