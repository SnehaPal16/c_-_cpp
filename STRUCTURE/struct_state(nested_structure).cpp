#include<stdio.h>

struct city
{
	char c1[20];
	char c2[20];
	char c3[20];
};

struct state
{
	char s1[20];
	struct city ct;
};

int main()
{
	int i,j;
	char c[20];
	struct state st[3];
	
	for(i=0;i<3;i++)
	{
		printf("ENTER %d th State And Its 3 Cities:",i+1);
		scanf("%s",st[i].s1);
		scanf("%s %s %s",st[i].ct.c1,st[i].ct.c2,st[i].ct.c3);
	}
	for(i=0;i<3;i++)
	{
		for(j=1;j<4;j++)
		{
			c[i]=
		}
	}
	
	
	return 0;
}
