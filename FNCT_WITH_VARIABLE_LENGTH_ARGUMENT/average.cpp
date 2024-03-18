#include<stdio.h>
#include<stdarg.h>

float avg(int n,...)
{
	int i;
	float sum=0.0,a,num;
	va_list ls;
	va_start(ls,n);
		
	for(i=1;i<=n;i++)
	{
		num=va_arg(ls,double);
		sum=sum+num;
	}
	a=sum/n;
	va_end(ls);
	return a;
	
}

int main()
{
	printf("\n%f",avg(3,1.1,2.2,3.3));
	
}
