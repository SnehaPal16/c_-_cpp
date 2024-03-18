#include<stdio.h>

int top=-1;
int s[100],n;

void push(int x)
{
	if(top==n-1)
	{
		printf("\nstack overflow");
	}
	top++;
	s[top]=x;
}
void pop()
{
	if(top==-1)
	{
		printf("\nstack underflow");
	}
	else
	{
		int item;
		item=s[top];
		printf("\ndeleted item : %d",item);
		top--;
	}	
}
void display()
{
	int i;
	if(top==-1)
	{
		printf("\nstack is empty........");
	}
	else
	{
		for(i=0;i<=top;i++)
		{
			printf(" %d ",s[i]);
		}
	}
}


int main()
{
	printf("\nenter number of elements : ");
	scanf("%d",&n);
	
	display();
	
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	
	display();
	
	pop();
	pop();
	pop();
	
	display();	
	
	return 0;
}
