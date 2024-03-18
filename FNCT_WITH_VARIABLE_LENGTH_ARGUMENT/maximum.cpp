#include<stdio.h>
#include<limits.h>
#include<stdarg.h>

int max(int n,...)
{
	int i,num;
	va_list ls;
	va_start(ls,n);
	int m=INT_MIN;
	for(i=1;i<=n;i++)
	{
		num=va_arg(ls,int);
		if(num>m)
			m=num;
	}
	va_end(ls);
	return m;
}

int main()
{
	printf("\n maximum is %d",max(5,22,21,12,33,45));
}
