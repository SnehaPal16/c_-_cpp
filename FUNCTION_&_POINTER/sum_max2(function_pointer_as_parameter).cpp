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
 
 int (*slct())(int x,int y)
 {
 	int choice;
 	printf("\n0 for sum \n1 for max");
 	printf("\nEnter choice : ");
 	scanf("%d",&choice);
 	if(choice==0)
 	{
 		return sum;
	}
	else if(choice==1)
 	{
 		return max;
	}
	else
	{
		printf("\nInvalid choice");
	}
	
 }
 
 int main()
 {
 	int a,b;
 	printf("\nEnter two numbers : ");
 	scanf("%d %d",&a,&b);
 	
 	int (*fn)(int,int)=slct();
 	printf("\n Result : %d",fn(a,b));
 	
 	return 0;
 }
 
 
 
 
 
 
