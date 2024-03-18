#include<stdio.h>
int q[100],n;
int f=-1,r=-1;

void enqueue(int x)
{
	if(f==-1 && r==-1)
	{
		printf("\nqueue is empty--->");
		f=0;
		r=0;
		q[r]=x;
	}
	else if(f==0 && r==n-1)
	{
		printf("\nqueue overflow.......");
	}
	else
	{
		r=(r+1)%n;
		q[r]=x;
	}
}

void dequeue()
{
	if(f==-1 && r==-1)
	{
		printf("\nqueue is empty!!!!!!!");
	}
	else if(f==r)
	{
		int item;
		item=q[f];
		f=-1;
		r=-1;
		printf("\ndeleted item....",item);		
	}
	else
	{
		int item;
		item=q[f];
		printf("\ndeleted item....",item);
		f=(f+1)%n;
	}
}

void display()
{
	int i=f;
	if(f==-1&&r==-1)
	{
		printf("\nqueue empty..");
	}
	else
	{
		while(i<=r)
		{
			printf(" %d ",q[i]);
			i=(i+1)%n;
		}
	}
}

int main()
{
	int ch,a;
	printf("\nenter number of elements :");
	scanf("%d",&n);	
	while(ch!=4)
	{
	printf("\n1.  enter data\n2.  delete data\n3.  display\n");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1 :printf("\nenter value...");
				scanf("%d",&a);
				enqueue(a);
				break;
		case 2 :printf("\ndelete data...");
				dequeue();
				break;
		case 3 :printf("\n\nDISPLAY---->");
				display();
				break;
		default:printf("\ninvalid choice");
	}
	}
	return 0;
}
