#include<stdio.h>
typedef struct mytime
{
	int hrs,min;
} mt;

mt getdata();
void putdata(mt);
mt sumtime(mt,mt);

int main()
{
	mt a,t,w;
	a=getdata();
	w=getdata();
	putdata(a);
	putdata(w);
	t=sumtime(a,w);
	
	putdata(t);
	return 0;
}

mt getdata()
{
	mt b;
	printf("\nenter hours and minutes : ");
	scanf("%d %d",&b.hrs,&b.min);
	return b;
}

void putdata(mt c)
{
	printf("\n%d : %d",c.hrs,c.min);
}

mt sumtime(mt x,mt y)
{
	mt tot;
	tot.hrs=x.hrs+y.hrs;
	tot.min=x.min+y.min;
	if(tot.min>=60)
	{
		tot.hrs=tot.hrs+1;
		tot.min=tot.min-60;
	}
	return tot;
}












