#include<stdio.h>
#define max_size 100
int f=-1,r=-1,n;
int q[100];

void enqueue(int x)
{
	if(r==n-1)
	{
		printf("\noverflow :");
	}
	if(f==-1)
	{
		f++;
	}
	r++;
	q[r]=x;
}
void dequeue()
{
	if(r==-1||f>r)
	{
		printf("\nunderflow :");
	}
	else
	{
		int item;
		item=q[f];
		printf("\nDELETED ELEMENT---->%d ",q[f]);
		f++;
	}
		
}

void display()
{
	int i;
	if(f==-1 || r==-1)
	{
		printf("\nqueue is empty\n");
	}
	else
	{
		for(i=f;i<=r;i++)
		{
			printf("\n%d ",q[i]);
		}
	}
}

int main()
{
	
	printf("\nenter no. of elements in array :");
	scanf("%d",&n);
	
	display();
	
	enqueue(1);
	enqueue(2);
	enqueue(3);
	enqueue(4);
	enqueue(5);
	printf("\nTHE QUEUE IS:");
	display();
	
	dequeue();
	dequeue();
	dequeue();
	
	printf("\nTHE QUEUE IS:");
	display();
	
	return 0;
}
