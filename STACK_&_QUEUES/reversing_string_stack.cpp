
int s[100],n;
int top=-1;

void push(char c)
{
	if(top==n-1)
	{
		printf("\nstack is full");
	}
	top++;
	s[top]=c;
}
void pop()
{
	if(top==-1)
	{
		printf("\nempty stack....");
	}
	char item;
	item=s[top];
	printf("\ndeleted string is : %c",item);
}
void display()
{
	int i;
	if(top==-1)
	{
		printf("\nempty stack....");
	}
	for(i=top;i>=0;i--)
	{
		printf("%c",s[i]);
	}
}


int main()
{
	int ch,i;
	char chr;
	printf("\nenter value of n :");
	scanf("%d",&n);
/*	while(ch!=4)
	{
		
		printf("\n1.push\n2.push\n3.display\n4.exit");
		printf("\nEnter choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("\npushing\n");
					fflush(stdin);
					scanf("%c",&chr);
					push(chr);
					break;
			case 2: printf("\npoping\n");
					pop();
					break;
			case 3: printf("\ndisplaying\n");
					display();
					break;
		}
	}*/
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		scanf("%c",&chr);
		push(chr);
	}
	display();
	
	return 0;
}
