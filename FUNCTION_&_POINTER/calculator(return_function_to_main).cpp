#include<stdio.h>
int sum(int x,int y)
{
	return x+y;
}
int sub(int x,int y)
{
	if(x>y)
		return x-y;
	else
		return y-x;
}
int pro(int x,int y)
{
	return x*y;
}
int div(int x,int y)
{
	if(x>y)
		return x/y;
}


int (*slct())(int x,int y,int ch)
{	
	if(ch==1)
		return sum;
	else if(ch==2)
		return sub;
	else if(ch==3)
		return pro;
	else if(ch==4)
		return div;
	else
		printf("\ninvalid choice");
}



int main()
{
	int a,b;
 	printf("\nEnter two numbers : ");
 	scanf("%d %d",&a,&b);
 	int ch;
	printf("\n1 for SUM \n2 for SUBRACT \n3 for MULTIPLY \n4 for DIVIDE");
	printf("\n\nENTER CHOICE : ");
	scanf("%d",&ch);
 	
 	int (*fn)(int,int,int)=slct();
 	printf("\n Result : %d",fn(a,b,ch));
 	
 	return 0;
}
















